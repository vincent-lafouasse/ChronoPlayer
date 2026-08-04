// state.h — system-wide data layout
//
// This file is the ABI of the emulator. It defines every persistent struct in
// the system and is included by all translation units. It intentionally
// includes nothing beyond the C standard library so that it imposes no
// transitive dependencies and remains a pure data contract.
//
// Consequences of this design:
//   - All component state must be defined inline here, including internals
//     (no pimpl, no opaque pointers, no forward-declared members).
//   - Any change to this file recompiles everything. That is acceptable and
//     by design: a layout change is a system-wide contract change.
//   - SPC_State is allocated as a single contiguous object. CPU and DSP are
//     strictly interleaved at the tick level, so both structs are hot in L1
//     simultaneously; adjacency is intentional.
//
// This ABI is internal, unstable, and not intended for external consumption.

#pragma once

#include <stdbool.h>
#include <stdint.h>

// Sony SPC700
struct CPU_State {
    uint8_t a, x, y, sp;
    uint16_t pc;
    uint8_t status;

    // raw data
    uint64_t instruction_cycle;
    uint8_t opcode;
    uint8_t operands[2];

    // cache for instruction execution
    uint8_t data8[2];
    uint16_t data16;
    uint16_t addr;
    uint8_t bit;
    bool branch_taken;

    uint64_t total_cycles;
};

struct Voice {
    // adpcm data
    uint16_t brr_pointer;
    uint8_t brr_header;
    uint8_t brr_data[2];

    // latched registers
    uint8_t srcn;
    uint8_t pitch_low;
    uint8_t pitch_high;
    uint8_t gain;
    uint8_t adsr1;
    uint8_t adsr2;

    // pending registers
    bool endx;
    uint8_t outx;
    uint8_t envx;

    int16_t sample_out;
};

// Sony S-DSP
struct DSP_State {
    uint8_t registers[128];
    struct Voice voices[8];

    int16_t echo_buf[2];
    uint8_t addr_latch;

    // latched registers
    uint8_t ffc[8];  // FIR filter applied to echo signal
    uint8_t eon;
    uint8_t non;
    uint8_t dir;  // the RAM page that contains the samples

    uint8_t cycle;  // 32 duty cycle
    uint64_t total_cycles;
};

struct SPC_State {
    struct CPU_State cpu;
    struct DSP_State dsp;

    // addr 0xf4-f7 used for com. with main CPU
    uint8_t io_ports[4];

    const uint8_t ipl_rom[64];
    // 128-byte alignment covers both x86-64 (64B lines) and Apple Silicon (128B
    // lines)
    _Alignas(128) uint8_t aram[0x10000];
};
