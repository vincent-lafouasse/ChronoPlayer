#include "dsp.h"

#include <string.h>

#include "dsp_internals.h"

static void voice_latch_registers(const struct VoiceRegisters* const regs,
                                  struct Voice* const voice)
{
    voice->srcn = regs->srcn;
}

static void voice_init(struct DSP_State dsp[static restrict 1], uint8_t voice_i)
{
    const struct VoiceRegisters* const regs = voice_registers(dsp, voice_i);
    struct Voice* const voice = dsp->voices + voice_i;

    voice_latch_registers(regs, voice);
}

void dsp_init(struct DSP_State dsp[static restrict 1],
              const uint8_t registers[static restrict 128],
              const uint8_t aram[static restrict 0x10000])
{
    memcpy(dsp->registers, registers, 128);

    dsp->eon = registers[DSP_EON];
    dsp->non = registers[DSP_NON];
    dsp->dir = registers[DSP_DIR];

    dsp->addr_latch = aram[0xf2];

    for (uint8_t i = 0; i < 8; i++) {
        const uint8_t addr = DSP_FFC(i);
        dsp->ffc[i] = dsp->registers[addr];
    }

    for (uint8_t i = 0; i < 8; i++) {
        voice_init(dsp, i);
    }
}
