#pragma once

#include <stdint.h>

struct SPC700_State;
struct APU_State;

// from Anomie's `spc700cyc.txt`
// memory access patterns down to the cycle
enum Addressing_Mode {
    ADDR_REG_IMM,               // 1  A,#i; X,#i; Y,#i
    ADDR_REG_REG,               // 2  A,X; A,Y; X,A; X,Y; etc
    ADDR_REG_DIRECT,            // 3  A,d; X,d; Y,d
    ADDR_REG_DIRECT_INDEXED,    // 4  A,d+X; X,d+Y; Y,d+X
    ADDR_REG_INDIRECT,          // 5a A,(X)
    ADDR_REG_INDIRECT_INC,      // 5b A,(X)+
    ADDR_REG_INDEXED_INDIRECT,  // 6  A,[d+X]
    ADDR_REG_INDIRECT_INDEXED,  // 7  A,[d]+Y
    ADDR_REG_ABSOLUTE,          // 8  A,!a; X,!a; Y,!a
};

enum Operation {
    OP_ADC,
    OP_ADDW,
    OP_AND,
    OP_AND1,
    OP_ASL,
    OP_BBC,
    OP_BBS,
    OP_BCC,
    OP_BCS,
    OP_BEQ,
    OP_BMI,
    OP_BNE,
    OP_BPL,
    OP_BVC,
    OP_BVS,
    OP_BRA,
    OP_BRK,
    OP_CALL,
    OP_CBNE,
    OP_CLR1,
    OP_CLRC,
    OP_CLRP,
    OP_CLRV,
    OP_CMP,
    OP_CMPW,
    OP_DAA,
    OP_DAS,
    OP_DBNZ,
    OP_DEC,
    OP_DECW,
    OP_DI,
    OP_DIV,
    OP_EI,
    OP_EOR,
    OP_EOR1,
    OP_INC,
    OP_INCW,
    OP_JMP,
    OP_LSR,
    OP_MOV,
    OP_MOV1,
    OP_MOVW,
    OP_MUL,
    OP_NOP,
    OP_NOT1,
    OP_NOTC,
    OP_OR,
    OP_OR1,
    OP_PCALL,
    OP_POP,
    OP_PUSH,
    OP_RET,
    OP_RET1,
    OP_ROL,
    OP_ROR,
    OP_SBC,
    OP_SET1,
    OP_SETC,
    OP_SETP,
    OP_SLEEP,
    OP_STOP,
    OP_SUBW,
    OP_TCALL,
    OP_TCLR1,
    OP_TSET1,
    OP_XCN,
};

typedef int (*Instruction_Handler)(struct SPC700_State* cpu,
                                   struct APU_State* apu,
                                   uint16_t operand1,
                                   uint16_t operand2);

struct Instruction {
    const char* mnemonic;
    enum Addressing_Mode addr_mode;
    Instruction_Handler handler;
    uint8_t length;
    uint8_t cycles;
};

// could probably make that a SoA but for now this is more ergonomic and less
// error prone to transcribe
extern const struct Instruction opcode_lookup_table[256];
