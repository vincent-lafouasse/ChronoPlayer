#pragma once

#include <stdbool.h>
#include <stddef.h>

#include "state.h"
#include "utils.h"

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

#define IMPLEM_PSW_WRITE(flag, name)                                    \
    static inline void psw_write_##name(struct CPU_State cpu[static 1], \
                                        bool val)                       \
    {                                                                   \
        flag_write(&cpu->status, (flag), val);                          \
    }

IMPLEM_PSW_WRITE(PSW_ZERO, zero)
IMPLEM_PSW_WRITE(PSW_SIGN, neg)
IMPLEM_PSW_WRITE(PSW_CARRY, carry)
IMPLEM_PSW_WRITE(PSW_OVERFLOW, overflow)
IMPLEM_PSW_WRITE(PSW_HALF_CARRY, half_carry)
IMPLEM_PSW_WRITE(PSW_ZP_LOC, direct_page)

#define IMPLEM_PSW_READ(flag, name)                                  \
    static inline uint8_t psw_##name(struct CPU_State cpu[static 1]) \
    {                                                                \
        return flag_at(cpu->status, (flag));                         \
    }

IMPLEM_PSW_READ(PSW_ZERO, zero)
IMPLEM_PSW_READ(PSW_SIGN, neg)
IMPLEM_PSW_READ(PSW_CARRY, carry)
IMPLEM_PSW_READ(PSW_OVERFLOW, overflow)
IMPLEM_PSW_READ(PSW_HALF_CARRY, half_carry)
IMPLEM_PSW_READ(PSW_ZP_LOC, direct_page)

static inline uint16_t direct_page(struct CPU_State cpu[static 1],
                                   uint8_t offset)
{
    return u16_parse(offset, psw_direct_page(cpu));
}

void cpu_init(struct CPU_State* cpu);
int cpu_step(struct CPU_State* cpu, uint8_t* ram, void* dsp);

int dump_cpu_state(char buf[static 41],
                   size_t len,
                   const struct CPU_State* cpu);
