#pragma once

#include <stdint.h>

struct SPC700_State;
struct APU_State;

// from Anomie's `spc700cyc.txt`
// memory access patterns down to the cycle
enum Addressing_Mode {
    ADDR_REG_IMM,                     // 1   A,#i; X,#i; Y,#i
    ADDR_REG_REG,                     // 2   A,X; A,Y; X,A; etc.
    ADDR_REG_DIRECT,                  // 3   A,d; X,d; Y,d
    ADDR_REG_DIRECT_INDEXED,          // 4   A,d+X; X,d+Y; Y,d+X
    ADDR_REG_INDIRECT,                // 5a  A,(X)
    ADDR_REG_INDIRECT_INC,            // 5b  A,(X)+
    ADDR_REG_INDEXED_INDIRECT,        // 6   A,[d+X]
    ADDR_REG_INDIRECT_INDEXED,        // 7   A,[d]+Y
    ADDR_REG_ABSOLUTE,                // 8   A,!a; X,!a; Y,!a
    ADDR_REG_ABSOLUTE_INDEXED,        // 9   A,!a+X; A,!a+Y
    ADDR_DIRECT_IMM,                  // 10  d,#i (RMW)
    ADDR_DIRECT_REG,                  // 11  d,A; d,X; d,Y (RMW)
    ADDR_DIRECT_INDEXED_REG,          // 12  d+X,A; d+X,Y; d+Y,X (RMW)
    ADDR_INDIRECT_REG,                // 13a (X),A (RMW)
    ADDR_INDIRECT_INC_REG,            // 13b (X)+,A (No RMW)
    ADDR_INDEXED_INDIRECT_REG,        // 14  [d+X],A (RMW)
    ADDR_INDIRECT_INDEXED_REG,        // 15  [d]+Y,A (RMW)
    ADDR_ABSOLUTE_REG,                // 16  !a,A; !a,X; !a,Y (RMW)
    ADDR_ABSOLUTE_INDEXED_REG,        // 17  !a+X,A; !a+Y,A (RMW)
    ADDR_DIRECT_DIRECT,               // 18  dd,ds
    ADDR_INDIRECT_INDIRECT,           // 19  (X),(Y)
    ADDR_DIRECT_RMW,                  // 20a d (ASL, INC, etc)
    ADDR_MEMBIT_RMW,                  // 20b m.b (NOT1)
    ADDR_DIRECT_INDEXED_RMW,          // 21  d+X (ASL, INC, etc)
    ADDR_ABSOLUTE_RMW,                // 22  !a (TSET1, TCLR1, etc)
    ADDR_C_MEMBIT,                    // 23  C,m.b (Bit logic)
    ADDR_MEMBIT_C,                    // 24  m.b,C (MOV1)
    ADDR_IMPLIED,                     // 25  NOP, MUL, DIV, etc.
    ADDR_YA_DIRECT,                   // 26  YA,d (Word Read)
    ADDR_DIRECT_YA,                   // 27  d,YA (Word Write)
    ADDR_WORD_DIRECT_RMW,             // 28  d (INCW, DECW)
    ADDR_STACK,                       // 29  PUSH, POP
    ADDR_JMP_ABSOLUTE,                // 30a JMP !a
    ADDR_JMP_ABSOLUTE_INDEXED_IND,    // 30b JMP [!a+X]
    ADDR_BRANCH_RELATIVE,             // 31a BRA, BNE, etc.
    ADDR_TEST_BRANCH_DIRECT,          // 31b BBS, BBC, CBNE d,r
    ADDR_TEST_BRANCH_DIRECT_INDEXED,  // 31c CBNE d+X,r
    ADDR_MODIFY_BRANCH_DIRECT,        // 31d DBNZ d,r
    ADDR_MODIFY_BRANCH_REG,           // 31e DBNZ Y,r
    ADDR_CALL,                        // 32a CALL !a
    ADDR_PCALL,                       // 32b PCALL u
    ADDR_TCALL,                       // 32c TCALL n
    ADDR_BRK,                         // 32d BRK
    ADDR_RET,                         // 33a RET
    ADDR_RET1                         // 33b RETI
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

// fits in a nibble
enum Register {
    REG_A = 0,
    REG_X = 1,
    REG_Y = 2,
    REG_YA = 3,
    REG_SP = 4,
};

typedef uint8_t RegisterPair;
#define REG_PAIR(src, dst) (((uint8_t)(src)) | ((uint8_t)(dst) << 4))
#define REG_SRC(pair) ((pair) & 0xf)
#define REG_DST(pair) (((pair) >> 4) & 0xf)

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
