#pragma once

#include <stdint.h>

struct SPC700_State {
    uint8_t a, x, y, sp;
    uint16_t pc;
    uint8_t status;
    uint64_t cycles;
};

void spc700_init(struct SPC700_State* cpu);
int spc700_step(struct SPC700_State* cpu, uint8_t* ram, void* dsp);
uint8_t spc700_read(uint16_t addr, uint8_t* ram, void* dsp);
void spc700_write(uint16_t addr, uint8_t value, uint8_t* ram, void* dsp);
