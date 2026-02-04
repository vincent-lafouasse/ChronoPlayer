#pragma once

#include <stdint.h>

struct SPC700_State;
struct APU_State;


typedef int (*Instruction_Handler)(struct SPC700_State* cpu,
                                   struct APU_State* apu,
                                   uint16_t operand1,
                                   uint16_t operand2);

struct Instruction {
    const char* mnemonic;
    const char* full_mnemonic;
    Instruction_Handler handler;
    uint8_t length;
    uint8_t cycles;
};

// could probably make that a SoA but for now this is more ergonomic and less
// error prone to transcribe
extern const struct Instruction opcode_lookup_table[256];
