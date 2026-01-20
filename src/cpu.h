#pragma once

#include <stdint.h>

/*
  Bit7  N  Sign Flag          (0=Positive, 1=Negative)
  Bit6  V  Overflow Flag      (0=None, 1=Overflow)
  Bit5  P  Zero Page Location (0=00xxh, 1=01xxh)
  Bit4  B  Break Flag         (0=Reset, 1=BRK opcode; set <after> BRK opcode)
  Bit3  H  Half-carry         (0=Borrow, or no-carry, 1=Carry, or no-borrow)
  Bit2  I  Interrupt Enable   (0=Disable, 1=Enable) (no function in SNES APU)
  Bit1  Z  Zero Flag          (0=Non-zero, 1=Zero)
  Bit0  C  Carry Flag         (0=Borrow, or no-carry, 1=Carry, or no-borrow)
*/
// implementation, here just for sketching

#define PSW_SIGN (1 << 7)
#define PSW_OVERFLOW (1 << 6)
#define PSW_ZP_LOC (1 << 5)
#define PSW_BREAK (1 << 4)
#define PSW_HALF_CARRY (1 << 3)
#define PSW_INTERRUPT_ENABLE (1 << 2)
#define PSW_ZERO (1 << 1)
#define PSW_CARRY (1 << 0)

#define PSW_N PSW_SIGN
#define PSW_V PSW_OVERFLOW
#define PSW_P PSW_ZP_LOC
#define PSW_B PSW_BREAK
#define PSW_H PSW_HALF_CARRY
#define PSW_I PSW_INTERRUPT_ENABLE
#define PSW_Z PSW_ZERO
#define PSW_C PSW_CARRY

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
