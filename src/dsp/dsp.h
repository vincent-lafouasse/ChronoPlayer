#pragma once

#include "state.h"

void dsp_init(struct DSP_State dsp[static restrict 1],
              const uint8_t registers[static restrict 128],
              const uint8_t aram[static restrict 0x10000]);
