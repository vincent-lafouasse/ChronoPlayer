#pragma once

#include <stdint.h>

// Sony SPC700
struct CPU_State {
    uint8_t a, x, y, sp;
    uint16_t pc;
    uint8_t status;

    uint64_t instruction_cycle;  // need sub-instruction sync
    uint8_t opcode;
    uint8_t operands[2];
    uint16_t addr;

    uint64_t total_cycles;
};

// Sony S-DSP
struct DSP_State {
    uint8_t registers[128];
    int16_t voice_out[8];
    int16_t echo_buf[2];
    uint8_t dsp_addr;

    uint64_t total_cycles;
};

struct SPC_State {
    struct CPU_State cpu;
    struct DSP_State dsp;

    // addr 0xf4-f7 used for com. with main CPU
    uint8_t io_ports[4];

    const uint8_t ipl_rom[64];
    uint8_t aram[0x10000];
};

void load_spc_or_exit(const char* path, struct SPC_State* out);
