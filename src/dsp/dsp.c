#include "dsp.h"

void dsp_load_latches(struct DSP_State dsp[static const restrict 1])
{
    dsp->eon = dsp->registers[DSP_EON];
    dsp->non = dsp->registers[DSP_NON];
    dsp->dir = dsp->registers[DSP_DIR];

    for (uint8_t i = 0; i < 8; i++) {
        const uint8_t addr = DSP_FFC(i);
        dsp->ffc[i] = dsp->registers[addr];
    }
}
