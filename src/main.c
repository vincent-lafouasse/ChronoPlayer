#include <stdbool.h>

#include "state.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <sys/fcntl.h>
#include <unistd.h>

#include "dsp.h"
#include "utils.h"

struct VoiceRegisters {
    uint8_t vol_left;    // $x0 VxVOLL
    uint8_t vol_right;   // $x1 VxVOLR
    uint8_t pitch_low;   // $x2 VxPITCHL
    uint8_t pitch_high;  // $x3 VxPITCHH
    uint8_t srcn;        // $x4 VxSRCN
    uint8_t adsr1;       // $x5 VxADSR1
    uint8_t adsr2;       // $x6 VxADSR2
    uint8_t gain;        // $x7 VxGAIN
    uint8_t envx;        // $x8 VxENVX
    uint8_t outx;        // $x9 VxOUTX
    uint8_t unused[6];   // $xA-$xF
};

struct VoiceRegisters* voice_registers(struct DSP_State dsp[static 1],
                                       uint8_t voice)
{
    assert(voice < 8);

    const size_t offset = AS_U16(voice) << 4;
    const uint8_t* alias = dsp->registers + offset;
    return (struct VoiceRegisters*)alias;
}

const struct VoiceRegisters* voice_registers_const(
    const struct DSP_State dsp[static 1],
    uint8_t voice)
{
    return voice_registers((struct DSP_State*)dsp, voice);
}

struct VoiceInstrument {
    uint16_t start;  // where the sample starts
    uint16_t loop;   // where to go to block end
};

struct VoiceInstrument get_instrument(const struct SPC_State state[static 1],
                                      size_t index)
{
    assert(index < 8);

    const struct DSP_State* const dsp = &state->dsp;

    const uint8_t sample_table_msb = dsp->registers[0x5d];
    const uint16_t sample_table = AS_U16(sample_table_msb) << 8;
    const struct VoiceRegisters* voice_regs = voice_registers_const(dsp, index);

    const uint16_t sample_location_offset = 4 * AS_U16(voice_regs->srcn);
    const uint16_t sample_location = sample_table + sample_location_offset;

    const uint8_t start_lo = state->aram[sample_location];
    const uint8_t start_hi = state->aram[sample_location + 1];
    const uint8_t loop_lo = state->aram[sample_location + 2];
    const uint8_t loop_hi = state->aram[sample_location + 3];

    return (struct VoiceInstrument){
        .start = u16_parse(start_lo, start_hi),
        .loop = u16_parse(loop_lo, loop_hi),
    };
}

struct BRR_Block {
    uint8_t header;   // ssss'ffle
    uint8_t data[8];  // actually i4[16]
};

static inline const struct BRR_Block* brr_block_at(
    const uint8_t aram[static 0x10000],
    uint16_t offset)
{
    return (const struct BRR_Block*)(aram + offset);
}

static inline uint8_t brr_shift(const struct BRR_Block* block)
{
    return (block->header) >> 4;
}

static inline uint8_t brr_filter(const struct BRR_Block* block)
{
    return (block->header >> 2) & 0x3;
}

static inline bool brr_is_last_block(const struct BRR_Block* block)
{
    // END flag (bit 0): 0 = last block, 1 = continue to next block
    return bit_at(block->header, 0) == 0;
}

static inline bool brr_should_loop(const struct BRR_Block* block)
{
    // LOOP flag (bit 1): 1 = loop back to loop point, 0 = terminate
    return bit_at(block->header, 1);
}

static inline int8_t brr_nibble(const struct BRR_Block* block, uint8_t index)
{
    assert(index < 16);

    const uint8_t byte = block->data[index >> 1];  // index / 2

    if (index & 1) {
        // Odd index: low nibble, sign-extend
        return (int8_t)(byte << 4) >> 4;
    } else {
        // Even index: high nibble, sign-extend
        return (int8_t)(byte & 0xf0) >> 4;
    }
}

static void brr_block_log(const struct BRR_Block* block)
{
    printf("header: %02x\n", block->header);
    printf("    shift: %u\n", brr_shift(block));
    printf("    filter: %u\n", brr_filter(block));
    printf("    is_last_block: %u\n", brr_is_last_block(block));
    printf("    should_loop: %u\n", brr_should_loop(block));
    printf("\n");

    for (int i = 0; i < 16; i++) {
        printf("data[i] = %i\n", brr_nibble(block, i));
    }
}

// filters have a delay of 2 samples and need a 2 sample buffer
struct BRR_Context {
    int16_t prev;
    int16_t prevprev;
};

int16_t brr_decode_sample(const struct BRR_Block block[static 1],
                          uint8_t index,
                          struct BRR_Context ctx[static 1])
{
    assert(index < 16);

    // shift should be in 0..=12
    // shifts above that would overflow and saturate based on sign instead
    const uint8_t shift = brr_shift(block);

    int32_t sample = brr_nibble(block, index);
    if (shift <= 12) {
        sample = (sample << shift) >> 1;
    } else {
        sample = (sample >= 0) ? 0 : -2048;
    }

    const uint8_t filter = brr_filter(block);

    // up to second order recursive filter
    // uses fixed point arithmetic
    //
    // reference:
    // There are 4 possible 'filters' to use in decoding the blocks. Some
    // filters use
    // previous samples in decoding, this does carry over between groups and
    // blocks and is separate for each voice.
    //   Filter 0 (Direct):       S(x) = RD
    //   Filter 1 (15/16):        S(x) = RD + S(x-1) + ((-S(x-1))>>4)
    //   Filter 2 (61/32-15/16):  S(x) = RD + (S(x-1)<<1) +
    //                                   ((-((S(x-1)<<1)+S(x-1)))>>5)
    //                                      - S(x-2) + (S(x-2)>>4)
    //   Filter 3 (115/64-13/16): S(x) = RD + (S(x-1)<<1) +
    //                        ((-(S(x-1)+(S(x-1)<<2)+(S(x-1)<<3)))>>6)
    //                          - S(x-2) + (((S(x-2)<<1) + S(x-2))>>4)
    switch (filter) {
        case 0:
            // direct: filter 0 does nothing
            break;

        case 1:  // 15/16 ie +1 - 1/16
            sample += ctx->prev - (ctx->prev >> 4);
            break;

        case 2:  // 61/32 - 15/16
            sample += (ctx->prev << 1);
            sample -= ((ctx->prev << 1) + ctx->prev) >> 5;
            sample -= ctx->prevprev;
            sample += ctx->prevprev >> 4;
            break;

        case 3:  // 115/64 - 13/16
            sample += (ctx->prev << 1);
            sample -= (ctx->prev + (ctx->prev << 2) + (ctx->prev << 3)) >> 6;
            sample -= ctx->prevprev;
            sample += ((ctx->prevprev << 1) + ctx->prevprev) >> 4;
            break;
    }

    // Clamp to 16 bits
    if (sample > 32767) {
        sample = 32767;
    }
    if (sample < -32768) {
        sample = -32768;
    }

    // Clip to 15 bits (drop low bit)
    const int16_t result = sample & 0xFFFE;

    // Update history
    ctx->prevprev = ctx->prev;
    ctx->prev = result;

    return result;
}

void brr_decode_block(const struct BRR_Block block[static 1],
                      int16_t buffer[static 16],
                      struct BRR_Context ctx[static 1])
{
    for (uint8_t i = 0; i < 16; i++) {
        buffer[i] = brr_decode_sample(block, i, ctx);
    }
}

int16_t* extract_instrument(const struct VoiceInstrument instrument[static 1],
                            const uint8_t aram[static 0x10000],
                            size_t* len_out)
{
    const size_t capacity =
        5 * 32000;  // 5 seconds of audio at 32kHz should be fine
    size_t len = 0;

    int16_t* buffer = calloc(capacity, sizeof(*buffer));
    if (buffer == NULL) {
        *len_out = 0;
        return NULL;
    }

    uint16_t addr = instrument->start;
    struct BRR_Context ctx = {0};

    do {
        const struct BRR_Block* block = brr_block_at(aram, addr);

        brr_decode_block(block, buffer + len, &ctx);
        len += 16;

        // Check if we've reached the last block
        if (!brr_is_last_block(block)) {
            // Not the last block yet, continue to next block
            addr += 9;
            continue;
        }

        // We've reached the last block - should we loop or terminate?
        if (brr_should_loop(block)) {
            addr = instrument->loop;  // Loop back to loop point
        } else {
            break;  // Terminate: no loop flag set
        }
    } while (len + 16 < capacity);

    *len_out = len;
    return buffer;
}

bool dump_instrument(const struct VoiceInstrument instr[static 1],
                     const uint8_t aram[static 0x10000],
                     const char* path)
{
    bool ok = true;
    int fd = -1;
    int16_t* pcm = NULL;

    fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("Failed to open instrument.pcm");
        ok = false;
        goto out;
    }

    size_t len;
    pcm = extract_instrument(instr, aram, &len);

    ssize_t written = write(fd, pcm, len * sizeof(*pcm));
    if (written < 0) {
        perror("Failed to write PCM data");
        ok = false;
        goto out;
    }

    printf("\nWrote %zu samples (%zu bytes) to %s\n", len, len * sizeof(*pcm),
           path);

out:
    free(pcm);
    close(fd);
    return ok;
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);

    char path[256] = {0};
    for (int i = 0; i < 8; i++) {
        const struct VoiceInstrument instr = get_instrument(&spc_state, i);
        snprintf(path, sizeof(path), "local/instrument%i.pcm", i);
        dump_instrument(&instr, spc_state.aram, path);
        memset(path, 0, sizeof(path));
    }
}

struct Voice {
    // state
    uint8_t step;

    // adpcm data
    uint16_t brr_pointer;
    uint8_t brr_header;
    uint8_t brr_data[2];

    // cached registers
    uint8_t srcn;
    uint8_t dir;
    uint8_t pitch_low;
    uint8_t pitch_high;
    uint8_t gain;
    uint8_t adsr1;
    uint8_t adsr2;

    // pending registers
    bool endx;
    uint8_t outx;
    uint8_t envx;

    struct VoiceRegisters* registers;
};

// TODO: pull UNREACHABLE from instructions
#define UNREACHABLE() exit(1);

void voice_step(struct Voice voice[static 1],
                const uint8_t aram[static 0x10000]);

void voice_step1(struct Voice voice[static 1])
{
    // S1. Load VxSRCN register, if necessary.
    voice->srcn = voice->registers->srcn;
    voice->step += 1;
}

// S2. Load the sample pointer (using previously loaded DIR and VxSRCN) if
//      necessary.
//     Load VxPITCHL register.
//     Load VxADSR1 register.
// S3. a. Load VxPITCHH register.
//        Apply pitch modulation if applicable.
//     b. Load the BRR header byte (every time), and the first of the two BRR
//         bytes that will be decoded.
//     c. If applicable, replace the current sample with the noise sample.
//        Apply the volume envelope.
//         - This is the value used for modulating the next voice's pitch, if
//           applicable.
//        Check FLG bit 7 (NOT previously loaded).
//        Check BRR header 'e' and 'l' bits to determine if the voice ends.
//        Handle KOFF and KON using previously loaded values. If KON, ENDX.x will
//         be cleared in step S7.
//        Load VxGAIN or VxADSR2 register depending on ADSR1.7.
//        Update the volume envelope, using previously loaded values.
// S4. Load and apply VxVOLL register.
//     If a new group of BRR samples is required, load the second BRR byte and
//      decode the group of 4 BRR samples. This is definitely not done when not
//      necessary. If necessary, adjust the BRR pointer to the next block, or
//      flag the loop address for loading next step S2 and set ENDX.x in step S7.
//      Note that this setting of ENDX.x will not override the clearing due to KON
//      in step S3c, if both occur during the same sample.
//     Increment interpolation sample position as specified by pitch values.
//     At any point from now until we next get to S3c, the next sample may be
//      calculated using the interpolation position and BRR buffer contents.
// S5. Load and apply VxVOLR register.
//     The new ENDX.x value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S6. The new VxOUTX value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S7. The new ENDX.x value may now be read.
//     The new VxENVX value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S8. The new VxOUTX value may now be read.
// S9. The new VxENVX value may now be read.
