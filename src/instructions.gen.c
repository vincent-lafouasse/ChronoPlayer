/* generated from generate_instructions.py: l.3435 */

#include "instructions.gen.h"

#include "bus_io.h"
#include "cpu.h"

#include <stdlib.h>  // for abort()

#if defined(__GNUC__) || defined(__clang__)
    #define TRACE_TRAP() __builtin_trap()
#elif defined(_MSC_VER)
    #define TRACE_TRAP() __debugbreak()
#else
    #define TRACE_TRAP() abort()
#endif

#if defined(__GNUC__) || defined(__clang__)
    #define UNREACHABLE() do { __builtin_trap(); __builtin_unreachable(); } while(0)
#elif defined(_MSC_VER)
    #include <intrin.h>  // for __debugbreak()
    #define UNREACHABLE() do { __debugbreak(); __assume(0); } while(0)
#else
    #define UNREACHABLE() abort()
#endif

static inline void idle(struct SPC_State state[static 1])
{
    /* generated from generate_instructions.py: l.52 */
    // dummy read from the last latched address
    (void)bus_read(state, state->cpu.addr);
}

static inline void parse_membit(uint16_t operand, uint16_t* addr, uint8_t* bit)
{
    /* generated from generate_instructions.py: l.65 */
    // top 3 bits encode the bit
    // the 13 ls bits encode the address in the first 8KB of RAM
    *bit = (uint8_t)(operand >> 13);
    *addr = (operand & 0x1fff);
}

static inline bool tcall_internal(struct SPC_State state[static 1], uint32_t cycle, uint16_t vector)
{
    /* generated from generate_instructions.py: l.3250 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 8) { TRACE_TRAP(); }

    switch (cycle) {
        // cycle 2-3: cache the PC on the stack for later return
        case 2:
            // effective stack address
            cpu->addr = 0x100 + cpu->sp;
            bus_write(state, cpu->addr, u16_msb(cpu->pc));
            cpu->sp -= 1;
            return false;
        case 3:
            cpu->addr = 0x100 + cpu->sp;
            bus_write(state, cpu->addr, u16_lsb(cpu->pc));
            cpu->sp -= 1;
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->addr = vector;
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6:
            cpu->addr = vector + 1;
            cpu->data8[1] = bus_read(state, cpu->addr);
            // new pc (store in data16, not addr yet - next cycles are idle)
            cpu->data16 = u16_read_little_endian(cpu->data8);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 8:
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->pc = cpu->data16;
            return true;

        default:
            UNREACHABLE();
    }
}

/* 0x00     NOP */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.517 */

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    return true;
}

/* 0x20     CLRP */
bool clrp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3166 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    psw_write_direct_page(cpu, 0);
    return true;
}

/* 0x40     SETP */
bool setp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3166 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    psw_write_direct_page(cpu, 1);
    return true;
}

/* 0x60     CLRC */
bool clrc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3166 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    psw_write_carry(cpu, 0);
    return true;
}

/* 0x80     SETC */
bool setc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3166 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    psw_write_carry(cpu, 1);
    return true;
}

/* 0xe0     CLRV */
bool clrv(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3166 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)
    psw_write_overflow(cpu, 0);
    psw_write_half_carry(cpu, 0);
    return true;
}


/* 0x01     TCALL 0 */
bool tcall_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffde);
}

/* 0x11     TCALL 1 */
bool tcall_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffdc);
}

/* 0x21     TCALL 2 */
bool tcall_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffda);
}

/* 0x31     TCALL 3 */
bool tcall_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffd8);
}

/* 0x41     TCALL 4 */
bool tcall_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffd6);
}

/* 0x51     TCALL 5 */
bool tcall_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffd4);
}

/* 0x61     TCALL 6 */
bool tcall_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffd2);
}

/* 0x71     TCALL 7 */
bool tcall_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffd0);
}

/* 0x81     TCALL 8 */
bool tcall_8(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffce);
}

/* 0x91     TCALL 9 */
bool tcall_9(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffcc);
}

/* 0xa1     TCALL 10 */
bool tcall_10(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffca);
}

/* 0xb1     TCALL 11 */
bool tcall_11(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffc8);
}

/* 0xc1     TCALL 12 */
bool tcall_12(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffc6);
}

/* 0xd1     TCALL 13 */
bool tcall_13(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffc4);
}

/* 0xe1     TCALL 14 */
bool tcall_14(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffc2);
}

/* 0xf1     TCALL 15 */
bool tcall_15(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3307 */
    return tcall_internal(state, cycle, 0xffc0);
}


/* 0x02     SET1  d */
bool set1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 0
                cpu->data8[0] |= (1 << 0);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x12     CLR1  d */
bool clr1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 0
                cpu->data8[0] &= ~(1 << 0);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x22     SET1  d */
bool set1_1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 1
                cpu->data8[0] |= (1 << 1);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x32     CLR1  d */
bool clr1_1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 1
                cpu->data8[0] &= ~(1 << 1);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x42     SET1  d */
bool set1_2_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 2
                cpu->data8[0] |= (1 << 2);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x52     CLR1  d */
bool clr1_2_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 2
                cpu->data8[0] &= ~(1 << 2);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x62     SET1  d */
bool set1_3_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 3
                cpu->data8[0] |= (1 << 3);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x72     CLR1  d */
bool clr1_3_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 3
                cpu->data8[0] &= ~(1 << 3);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x82     SET1  d */
bool set1_4_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 4
                cpu->data8[0] |= (1 << 4);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x92     CLR1  d */
bool clr1_4_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 4
                cpu->data8[0] &= ~(1 << 4);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa2     SET1  d */
bool set1_5_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 5
                cpu->data8[0] |= (1 << 5);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb2     CLR1  d */
bool clr1_5_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 5
                cpu->data8[0] &= ~(1 << 5);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc2     SET1  d */
bool set1_6_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 6
                cpu->data8[0] |= (1 << 6);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xd2     CLR1  d */
bool clr1_6_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 6
                cpu->data8[0] &= ~(1 << 6);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe2     SET1  d */
bool set1_7_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.488 */
                // SET1 - Set bit 7
                cpu->data8[0] |= (1 << 7);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf2     CLR1  d */
bool clr1_7_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.500 */
                // CLR1 - Clear bit 7
                cpu->data8[0] &= ~(1 << 7);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}



/* 0x04     OR    A, d */
bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x14     OR    A, d+X */
bool or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x24     AND   A, d */
bool and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x34     AND   A, d+X */
bool and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x44     EOR   A, d */
bool eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x54     EOR   A, d+X */
bool eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x64     CMP   A, d */
bool cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x74     CMP   A, d+X */
bool cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x84     ADC   A, d */
bool adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x94     ADC   A, d+X */
bool adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa4     SBC   A, d */
bool sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb4     SBC   A, d+X */
bool sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc4     MOV   d, a */
bool mov_direct_register_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2064 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2104 */
            bus_write(state, cpu->addr, cpu->a);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe4     MOV   A, d */
bool mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf4     MOV   A, d+X */
bool mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x05     OR    A, !a */
bool or_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x15     OR    A, !a+X */
bool or_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x25     AND   A, !a */
bool and_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x35     AND   A, !a+X */
bool and_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x45     EOR   A, !a */
bool eor_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x55     EOR   A, !a+X */
bool eor_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x65     CMP   A, !a */
bool cmp_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x75     CMP   A, !a+X */
bool cmp_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x85     ADC   A, !a */
bool adc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x95     ADC   A, !a+X */
bool adc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa5     SBC   A, !a */
bool sbc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb5     SBC   A, !a+X */
bool sbc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc5     MOV   !a, a */
bool mov_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2387 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xd5     MOV   !a+x, A */
bool mov_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2451 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[1];
            // compute AA + x but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->x;
            return false;
        case 4:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = cpu->data16;
            return false;
        case 5:
            // "useless" RMW read for MOV
            (void)bus_read(state, cpu->addr);
            return false;
        case 6:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xe5     MOV   A, !a */
bool mov_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf5     MOV   A, !a+X */
bool mov_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x06     OR    A, (X) */
bool or_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x16     OR    A, !a+Y */
bool or_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x26     AND   A, (X) */
bool and_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x36     AND   A, !a+Y */
bool and_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x46     EOR   A, (X) */
bool eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x56     EOR   A, !a+Y */
bool eor_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x66     CMP   A, (X) */
bool cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x76     CMP   A, !a+Y */
bool cmp_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x86     ADC   A, (X) */
bool adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x96     ADC   A, !a+Y */
bool adc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa6     SBC   A, (X) */
bool sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb6     SBC   A, !a+Y */
bool sbc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc6     MOV   (X), A */
bool mov_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2164 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3:
            // "useless" read for RMW MOV
            (void)bus_read(state, cpu->addr);
            return false;
        case 4:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xd6     MOV   !a+y, A */
bool mov_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2451 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[1];
            // compute AA + y but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->y;
            return false;
        case 4:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = cpu->data16;
            return false;
        case 5:
            // "useless" RMW read for MOV
            (void)bus_read(state, cpu->addr);
            return false;
        case 6:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xe6     MOV   A, (X) */
bool mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1089 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // an idle cycle - dummy read from last latched addr (PC from opcode fetch)
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf6     MOV   A, !a+Y */
bool mov_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1728 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read from the last latched address (cpu->addr)
            // index AA now
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x07     OR    A, [d+X] */
bool or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x17     OR    A, [d]+Y */
bool or_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x27     AND   A, [d+X] */
bool and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x37     AND   A, [d]+Y */
bool and_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x47     EOR   A, [d+X] */
bool eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x57     EOR   A, [d]+Y */
bool eor_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x67     CMP   A, [d+X] */
bool cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x77     CMP   A, [d]+Y */
bool cmp_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->a);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x87     ADC   A, [d+X] */
bool adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x97     ADC   A, [d]+Y */
bool adc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.340 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa7     SBC   A, [d+X] */
bool sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb7     SBC   A, [d]+Y */
bool sbc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->a);
                const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.344 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc7     MOV   [d+X],A */
bool mov_indexed_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2252 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[0] + 1);
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->addr = u16_read_big_endian(cpu->data8);
            return false;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xd7     MOV   [d]+Y,A */
bool mov_indirect_indexed_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2319 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            return false;
        case 4:
            // AAH
            cpu->data8[1] = bus_read(state, cpu->addr);
            // compute AA + Y, but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->y;
            return false;
        case 5:
            // internal operations - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = cpu->data16;
            return false;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xe7     MOV   A, [d+X] */
bool mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1270 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf7     MOV   A, [d]+Y */
bool mov_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1418 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 5:
            idle(state); // dummy read from the last latched address (cpu->addr) // read before the indexing
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x08     OR    A, #i */
bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.308 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x18     OR    d, #i */
bool or_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x28     AND   A, #i */
bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.308 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x38     AND   d, #i */
bool and_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x48     EOR   A, #i */
bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.308 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x58     EOR   d, #i */
bool eor_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x68     CMP   A, #i */
bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.289 */
        // compute (a - b), no borrow, update NZC then discard result
        const uint8_t operand_a = (uint8_t)(cpu->a);
        const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

        // no borrow so underflow/borrow if a < b
        // so carry = a >= b
        psw_write_carry(cpu, operand_a >= operand_b);

        // let it underflow, it's expected and fine
        const uint8_t res = operand_a - operand_b;
        psw_write_zero(cpu, res == 0);
        psw_write_neg(cpu, res & 0x80);
    }
    return true;
}

/* 0x78     CMP   d, #i */
bool cmp_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->data8[0]);
                const uint8_t operand_b = (uint8_t)(cpu->data8[1]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x88     ADC   A, #i */
bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.218 */
        const uint32_t operand_a = (uint32_t)(cpu->a);
        const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
        const uint32_t carry     = psw_carry(cpu);

        // half-carry check: sum of nibbles overflows nibble
        const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
        psw_write_half_carry(cpu, nibble_sum > 0xf);

        const uint32_t full_res = operand_a + operand_b + carry;
        psw_write_carry(cpu, full_res > 0xff);

        // overflow if a mathematically impossible result has happened
        // i.e. (pos + pos = neg) or (neg + neg = pos)
        const bool sign_a = operand_a & 0x80;
        const bool sign_b = operand_b & 0x80;
        const bool sign_r = full_res & 0x80;
        const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
        psw_write_overflow(cpu, overflow);

        psw_write_zero(cpu, (full_res & 0xff) == 0);
        psw_write_neg(cpu, full_res & 0x80);

        // cache back the 8bit result for assignment
        cpu->data8[0] = full_res & 0xff;
    }
    /* generated from generate_instructions.py: l.340 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0x98     ADC   d, #i */
bool adc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa8     SBC   A, #i */
bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.253 */
        const uint32_t operand_a = (uint32_t)(cpu->a);
        const uint32_t operand_b = (uint32_t)(cpu->data8[0]);
        const uint32_t borrow    = !psw_carry(cpu);

        // half-borrow check: if (u4)a - (u4)b - borrow underflowed
        // i.e. (u4)a < (u4)b + borrow
        const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
        psw_write_half_carry(cpu, !half_borrow);

        const int32_t full_res = operand_a - operand_b - borrow;
        // set borrow if underflowed, ie set carry if not underflowed
        psw_write_carry(cpu, full_res >= 0x00);

        // overflow if a mathematically impossible result has happened
        // i.e. (pos - neg = neg) or (neg - pos = pos)
        const bool sign_a = operand_a & 0x80;
        const bool sign_b = operand_b & 0x80;
        const bool sign_r = full_res & 0x80;
        const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
        psw_write_overflow(cpu, overflow);

        psw_write_zero(cpu, (full_res & 0xff) == 0);
        psw_write_neg(cpu, full_res & 0x80);

        // cache back the 8bit result for assignment
        cpu->data8[0] = full_res & 0xff;
    }
    /* generated from generate_instructions.py: l.344 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xb8     SBC   d, #i */
bool sbc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc8     CMP   X, #i */
bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.289 */
        // compute (a - b), no borrow, update NZC then discard result
        const uint8_t operand_a = (uint8_t)(cpu->x);
        const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

        // no borrow so underflow/borrow if a < b
        // so carry = a >= b
        psw_write_carry(cpu, operand_a >= operand_b);

        // let it underflow, it's expected and fine
        const uint8_t res = operand_a - operand_b;
        psw_write_zero(cpu, res == 0);
        psw_write_neg(cpu, res & 0x80);
    }
    return true;
}

/* 0xd8     MOV   d, x */
bool mov_direct_register_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2064 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2114 */
            bus_write(state, cpu->addr, cpu->x);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe8     MOV   A, #i */
bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xf8     MOV   X, d */
bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x09     OR    dd, ds */
bool or_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x19     OR    (X), (Y) */
bool or_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x29     AND   dd, ds */
bool and_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x39     AND   (X), (Y) */
bool and_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x49     EOR   dd, ds */
bool eor_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x59     EOR   (X), (Y) */
bool eor_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.308 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x69     CMP   dd, ds */
bool cmp_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->data8[0]);
                const uint8_t operand_b = (uint8_t)(cpu->data8[1]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x79     CMP   (X), (Y) */
bool cmp_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->data8[0]);
                const uint8_t operand_b = (uint8_t)(cpu->data8[1]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x89     ADC   dd, ds */
bool adc_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x99     ADC   (X), (Y) */
bool adc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.218 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t carry     = psw_carry(cpu);

                // half-carry check: sum of nibbles overflows nibble
                const uint32_t nibble_sum = (operand_a & 0xf) + (operand_b & 0xf) + carry;
                psw_write_half_carry(cpu, nibble_sum > 0xf);

                const uint32_t full_res = operand_a + operand_b + carry;
                psw_write_carry(cpu, full_res > 0xff);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos + pos = neg) or (neg + neg = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a == sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa9     SBC   dd, ds */
bool sbc_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2528 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb9     SBC   (X), (Y) */
bool sbc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2699 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.253 */
                const uint32_t operand_a = (uint32_t)(cpu->data8[0]);
                const uint32_t operand_b = (uint32_t)(cpu->data8[1]);
                const uint32_t borrow    = !psw_carry(cpu);

                // half-borrow check: if (u4)a - (u4)b - borrow underflowed
                // i.e. (u4)a < (u4)b + borrow
                const bool half_borrow = (operand_a & 0xf) < (operand_b & 0xf) + borrow;
                psw_write_half_carry(cpu, !half_borrow);

                const int32_t full_res = operand_a - operand_b - borrow;
                // set borrow if underflowed, ie set carry if not underflowed
                psw_write_carry(cpu, full_res >= 0x00);

                // overflow if a mathematically impossible result has happened
                // i.e. (pos - neg = neg) or (neg - pos = pos)
                const bool sign_a = operand_a & 0x80;
                const bool sign_b = operand_b & 0x80;
                const bool sign_r = full_res & 0x80;
                const bool overflow = (sign_a != sign_b) && (sign_a != sign_r);
                psw_write_overflow(cpu, overflow);

                psw_write_zero(cpu, (full_res & 0xff) == 0);
                psw_write_neg(cpu, full_res & 0x80);

                // cache back the 8bit result for assignment
                cpu->data8[0] = full_res & 0xff;
            }
            /* generated from generate_instructions.py: l.353 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc9     MOV   !a, x */
bool mov_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2387 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->x);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xe9     MOV   X, !a */
bool mov_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf9     MOV   X, d+Y */
bool mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by Y
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->y) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0xea     NOT1  m.b */
bool not1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2961 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data16 = u16_read_little_endian(cpu->operands);
            parse_membit(cpu->data16, &cpu->addr, &cpu->bit);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            // RMW modify
            bit_toggle(cpu->data8, cpu->bit);
            return false;
        case 5:
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xfa     MOV   dd, ds */
bool mov_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // Read data from source
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 5:
            // no RMW read
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        default:
            UNREACHABLE();
    }
}


/* 0x0b     ASL   d */
bool asl_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.368 */
                // ASL - Arithmetic Shift Left
                // high bit -> Carry, 0 -> low bit
                const uint8_t value = cpu->data8[0];

                psw_write_carry(cpu, value & 0x80);

                const uint8_t result = value << 1;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x1b     ASL   d+X */
bool asl_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.368 */
                // ASL - Arithmetic Shift Left
                // high bit -> Carry, 0 -> low bit
                const uint8_t value = cpu->data8[0];

                psw_write_carry(cpu, value & 0x80);

                const uint8_t result = value << 1;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x2b     ROL   d */
bool rol_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.444 */
                // ROL - Rotate Left
                // low bit = Carry, Carry = high bit
                const uint8_t value = cpu->data8[0];
                const uint8_t carry_in = psw_carry(cpu);

                psw_write_carry(cpu, value & 0x80);

                const uint8_t result = (value << 1) | carry_in;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x3b     ROL   d+X */
bool rol_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.444 */
                // ROL - Rotate Left
                // low bit = Carry, Carry = high bit
                const uint8_t value = cpu->data8[0];
                const uint8_t carry_in = psw_carry(cpu);

                psw_write_carry(cpu, value & 0x80);

                const uint8_t result = (value << 1) | carry_in;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x4b     LSR   d */
bool lsr_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.423 */
                // LSR - Logical Shift Right
                // 0 -> high bit, low bit -> Carry
                const uint8_t value = cpu->data8[0];

                psw_write_carry(cpu, value & 0x01);

                const uint8_t result = value >> 1;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x5b     LSR   d+X */
bool lsr_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.423 */
                // LSR - Logical Shift Right
                // 0 -> high bit, low bit -> Carry
                const uint8_t value = cpu->data8[0];

                psw_write_carry(cpu, value & 0x01);

                const uint8_t result = value >> 1;
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x6b     ROR   d */
bool ror_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.466 */
                // ROR - Rotate Right
                // high bit = Carry, Carry = low bit
                const uint8_t value = cpu->data8[0];
                const uint8_t carry_in = psw_carry(cpu);

                psw_write_carry(cpu, value & 0x01);

                const uint8_t result = (value >> 1) | (carry_in << 7);
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x7b     ROR   d+X */
bool ror_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.466 */
                // ROR - Rotate Right
                // high bit = Carry, Carry = low bit
                const uint8_t value = cpu->data8[0];
                const uint8_t carry_in = psw_carry(cpu);

                psw_write_carry(cpu, value & 0x01);

                const uint8_t result = (value >> 1) | (carry_in << 7);
                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x8b     DEC   d */
bool dec_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.389 */
                // DEC - Decrement
                const uint8_t result = cpu->data8[0] - 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x9b     DEC   d+X */
bool dec_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.389 */
                // DEC - Decrement
                const uint8_t result = cpu->data8[0] - 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xab     INC   d */
bool inc_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2825 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.406 */
                // INC - Increment
                const uint8_t result = cpu->data8[0] + 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xbb     INC   d+X */
bool inc_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3025 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // internal operation - dummy read from last latched addr
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return false;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.406 */
                // INC - Increment
                const uint8_t result = cpu->data8[0] + 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xcb     MOV   d, y */
bool mov_direct_register_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2064 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2124 */
            bus_write(state, cpu->addr, cpu->y);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xeb     MOV   Y, d */
bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xfb     MOV   Y, d+X */
bool mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.944 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return false;
        case 3:
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0xcc     MOV   !a, y */
bool mov_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2387 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->y);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xec     MOV   Y, !a */
bool mov_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.312 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.204 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x5d     MOV   X, A */
bool mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->x = cpu->a;
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x7d     MOV   A, X */
bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x8d     MOV   Y, #i */
bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x9d     MOV   X, SP */
bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->x = cpu->sp;
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xad     CMP   Y, #i */
bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.289 */
        // compute (a - b), no borrow, update NZC then discard result
        const uint8_t operand_a = (uint8_t)(cpu->y);
        const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

        // no borrow so underflow/borrow if a < b
        // so carry = a >= b
        psw_write_carry(cpu, operand_a >= operand_b);

        // let it underflow, it's expected and fine
        const uint8_t res = operand_a - operand_b;
        psw_write_zero(cpu, res == 0);
        psw_write_neg(cpu, res & 0x80);
    }
    return true;
}

/* 0xbd     MOV   SP, X */
bool mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->sp = cpu->x;
    return true;
}

/* 0xcd     MOV   X, #i */
bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.562 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xdd     MOV   A, Y */
bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->a = cpu->y;
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xfd     MOV   Y, A */
bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.712 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { TRACE_TRAP(); }

    idle(state); // dummy read from the last latched address (cpu->addr)

    /* payload */
    /* generated from generate_instructions.py: l.312 */
    cpu->y = cpu->a;
    {
        /* generated from generate_instructions.py: l.204 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}


/* 0x1e     CMP   X, !a */
bool cmp_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->x);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x3e     CMP   X, d */
bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.791 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->x);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x5e     CMP   Y, !a */
bool cmp_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1559 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return false;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.289 */
                // compute (a - b), no borrow, update NZC then discard result
                const uint8_t operand_a = (uint8_t)(cpu->y);
                const uint8_t operand_b = (uint8_t)(cpu->data8[0]);

                // no borrow so underflow/borrow if a < b
                // so carry = a >= b
                psw_write_carry(cpu, operand_a >= operand_b);

                // let it underflow, it's expected and fine
                const uint8_t res = operand_a - operand_b;
                psw_write_zero(cpu, res == 0);
                psw_write_neg(cpu, res & 0x80);
            }
            return true;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x8f     MOV   d, #i */
bool mov_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1930 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.2011 */
            bus_write(state, cpu->addr, cpu->data8[1]);
            return true;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xaf     MOV   (X)+, A */
bool mov_indirect_incremented_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2199 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->addr = direct_page(cpu, cpu->x++);
            return false;
        case 3:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 4:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            UNREACHABLE();
    }
}

/* 0xbf     MOV   A, (X)+ */
bool mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1206 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { TRACE_TRAP(); }

    switch (cycle) {
        case 2:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            return false;
        case 3:
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->a = cpu->data8[0];
            psw_write_zero(cpu, cpu->a == 0);
            psw_write_neg(cpu, cpu->a & 0x80);
            /* we could increment X now but let's do it cycle 4 bc why not */
            return false;
        case 4:
            /* internal operation - dummy read from last latched addr */
            idle(state); // dummy read from the last latched address (cpu->addr)
            cpu->x += 1;
            return true;
        default:
            UNREACHABLE();
    }
}


