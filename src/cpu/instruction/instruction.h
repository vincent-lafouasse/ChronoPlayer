#pragma once

#include <stdint.h>

#include "state.h"

enum InstructionStatus {
    INSTRUCTION_STATUS_DONE,
    INSTRUCTION_STATUS_PENDING,
    INSTRUCTION_STATUS_UNEXPECTED_CYCLE,
};

typedef enum InstructionStatus (
    *InstructionHandler)(struct SPC_State state[static 1], uint32_t cycle);

struct Instruction {
    const char* mnemonic;
    const char* full_mnemonic;
    InstructionHandler handler;
    uint8_t length;
    uint8_t cycles;
};

// could probably make that a SoA but for now this is more ergonomic and less
// error prone to transcribe
extern const struct Instruction opcode_lookup_table[256];
