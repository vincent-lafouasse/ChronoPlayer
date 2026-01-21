#pragma once

#include <stdalign.h>

#include "cpu.h"
#include "dsp.h"

#define CACHE_LINE 128
#define PAGE_SIZE 4096

#define ARAM_SIZE 0x10000
#define IPL_SIZE 64

struct SMP_State {
    alignas(CACHE_LINE) struct SPC700_State cpu;
    alignas(CACHE_LINE) struct DSP_State dsp;
    alignas(PAGE_SIZE) uint8_t ram[ARAM_SIZE];
};

extern alignas(CACHE_LINE) const uint8_t ipl_rom[IPL_SIZE];

void load_spc_or_exit(const char* spc_path, struct SMP_State* out);
