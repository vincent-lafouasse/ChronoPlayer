#include <stdbool.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <sys/fcntl.h>
#include <unistd.h>

#include "dsp/dsp.h"
#include "dsp/brr.h"

#include "load/load.h"

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

static inline const struct VoiceRegisters* voice_registers(
    const struct DSP_State dsp[static 1],
    uint8_t voice)
{
    assert(voice < 8);

    const size_t offset = AS_U16(voice) << 4;
    const uint8_t* alias = dsp->registers + offset;
    return (const struct VoiceRegisters*)alias;
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
    const struct VoiceRegisters* voice_regs = voice_registers(dsp, index);

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

    return 0;
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
};

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
//        Handle KOFF and KON using previously loaded values. If KON, ENDX.x
//        will
//         be cleared in step S7.
//        Load VxGAIN or VxADSR2 register depending on ADSR1.7.
//        Update the volume envelope, using previously loaded values.
// S4. Load and apply VxVOLL register.
//     If a new group of BRR samples is required, load the second BRR byte and
//      decode the group of 4 BRR samples. This is definitely not done when not
//      necessary. If necessary, adjust the BRR pointer to the next block, or
//      flag the loop address for loading next step S2 and set ENDX.x in step
//      S7. Note that this setting of ENDX.x will not override the clearing due
//      to KON in step S3c, if both occur during the same sample.
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
