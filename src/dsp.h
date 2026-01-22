#pragma once

#include <stddef.h>
#include <stdint.h>

#include "state.h"

void dsp_init(struct DSP_State* dsp);
void dsp_write_reg(struct DSP_State* dsp, uint8_t addr, uint8_t value);
uint8_t dsp_read_reg(struct DSP_State* dsp, uint8_t addr);
void dsp_render_samples(struct DSP_State* dsp,
                        uint8_t* ram,
                        int16_t* output,
                        size_t count);
