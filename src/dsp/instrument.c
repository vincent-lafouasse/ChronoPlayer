#include "dsp_internals.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>

#include "./brr.h"
#include "utils.h"

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
