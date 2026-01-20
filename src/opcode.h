#pragma once

#include <stdint.h>

struct SPC700_State;
struct APU_State;

enum Addressing_Mode {
    ADDR_IMPLIED,  // NOP
    ADDR_IMM,      // #$12
    ADDR_DP,       // $12
    ADDR_DP_X,     // $12+X
    ADDR_DP_Y,     // $12+Y
    ADDR_ABS,      // $1234
    ADDR_ABS_X,    // $1234+X
    ADDR_ABS_Y,    // $1234+Y
    ADDR_IND_X,    // ($12+X)
    ADDR_IND_Y,    // ($12)+Y
    ADDR_DP_DP,    // $12, $34
    ADDR_DP_IMM,   // $12, #$34
    ADDR_REL,      // BRA +/-offset
    ADDR_ABS_BIT,  // $1234.3
    ADDR_DP_BIT,   // $12.3
    ADDR_SPECIAL,  // Complex addressing (TCALL, etc.)
};

typedef int (*Opcode_Handler)(struct SPC700_State* cpu,
                              struct APU_State* apu,
                              uint16_t operand1,
                              uint16_t operand2);

struct Opcode {
    const char* mnemonic;
    enum Addressing_Mode addr_mode;
    Opcode_Handler handler;
    uint8_t length;
    uint8_t cycles;
};

extern const struct Opcode opcode_lookup_table[256];
