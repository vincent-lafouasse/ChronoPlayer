#include <stdbool.h>

#include "state.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define DSP_V_VOLL(voice) ((voice) << 4 | 0x0)
#define DSP_V_VOLR(voice) ((voice) << 4 | 0x1)
#define DSP_V_PITCHL(voice) ((voice) << 4 | 0x2)
#define DSP_V_PITCHH(voice) ((voice) << 4 | 0x3)
#define DSP_V_SRCN(voice) ((voice) << 4 | 0x4)
#define DSP_V_ADSR1(voice) ((voice) << 4 | 0x5)
#define DSP_V_ADSR2(voice) ((voice) << 4 | 0x6)
#define DSP_V_GAIN(voice) ((voice) << 4 | 0x7)
#define DSP_V_ENVX(voice) ((voice) << 4 | 0x8)
#define DSP_V_OUTX(voice) ((voice) << 4 | 0x9)

#define DSP_MVOLL (0x0c)
#define DSP_MVOLR (0x1c)
#define DSP_EVOLL (0x2c)
#define DSP_EVOLR (0x3c)
#define DSP_KON (0x4c)
#define DSP_KOFF (0x5c)
#define DSP_FLG (0x6c)
#define DSP_ENDX (0x7c)

#define DSP_EFB (0x0d)
#define DSP_PMON (0x2d)
#define DSP_NON (0x3d)
#define DSP_EON (0x4d)
#define DSP_DIR (0x5d)
#define DSP_ESA (0x6d)
#define DSP_EDL (0x7d)

#define DSP_EFFC(i) ((i) << 4 | 0xf)

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

struct VoiceInstrument identify_instrument(
    const struct SPC_State state[static 1])
{
    const struct DSP_State* const dsp = &state->dsp;

    const uint8_t sample_table_msb = dsp->registers[0x5d];
    const uint16_t sample_table = AS_U16(sample_table_msb) << 8;
    printf("samples start at 0x%04x\n", sample_table);

    // voice 0 only for now
    // msn is 0
    const struct VoiceRegisters* voice_regs = voice_registers_const(dsp, 0);

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

static inline bool brr_must_loop(const struct BRR_Block* block)
{
    return bit_at(block->header, 1);
}

static inline bool brr_is_end(const struct BRR_Block* block)
{
    return bit_at(block->header, 0) == 0;
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
    printf("    loop: %u\n", brr_must_loop(block));
    printf("    end: %u\n", brr_is_end(block));
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

    int16_t sample = brr_nibble(block, index);
    if (shift <= 12) {
        sample = (sample << shift) >> 1;
    } else {
        sample = (sample >= 0) ? 0 : -2048;
    }

    const uint8_t filter = brr_filter(block);

    // up to second order recursive filter
    // uses fixed point arithmetic
    switch (filter) {
        case 0:
            // filter 0 does nothing
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

        if (!brr_is_end(block)) {
            addr += 9;
            continue;
        }

        // this is the last block, do we loop or not
        if (brr_must_loop(block)) {
            addr = instrument->loop;
        } else {
            break;
        }
    } while (len + 16 < capacity);

    *len_out = len;
    return buffer;
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);

    const struct VoiceInstrument instrument0 = identify_instrument(&spc_state);
    printf("Instrument at:\n");
    printf("    start: 0x%04x\n", instrument0.start);
    printf("    loop : 0x%04x\n", instrument0.loop);

    const uint16_t span_size = instrument0.loop - instrument0.start;
    printf("\nSpan size: %u\n", span_size);
    if (span_size % 9 != 0) {
        printf("Weird, there's not a round number of BRR blocks\n");
    } else {
        printf("there are %u blocks between start and loop\n", span_size / 9);
    }
    printf("\n");

    brr_block_log(brr_block_at(spc_state.aram, instrument0.start));
}
