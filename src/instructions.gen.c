/* generated from generate_instructions.py: l.2544 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

static inline void idle(struct SPC_State state[static 1])
{
    /* generated from generate_instructions.py: l.26 */
    (void)bus_read(state, state->cpu.pc);
}

static inline bool tcall_internal(struct SPC_State state[static 1], uint32_t cycle, uint16_t vector)
{
    /* generated from generate_instructions.py: l.2364 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 8);
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
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, vector);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, vector + 1);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 8:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x00     NOP */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.270 */
    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    return true;
}

/* 0x20     CLRP */
bool clrp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    psw_write_direct_page(cpu, 0);
    return true;
}

/* 0x40     SETP */
bool setp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    psw_write_direct_page(cpu, 1);
    return true;
}

/* 0x60     CLRC */
bool clrc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    psw_write_carry(cpu, 0);
    return true;
}

/* 0x80     SETC */
bool setc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    psw_write_carry(cpu, 1);
    return true;
}

/* 0xe0     CLRV */
bool clrv(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer
    psw_write_overflow(cpu, 0);
    psw_write_half_carry(cpu, 0);
    return true;
}


/* 0x01     TCALL 0 */
bool tcall_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffde);
}

/* 0x11     TCALL 1 */
bool tcall_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffdc);
}

/* 0x21     TCALL 2 */
bool tcall_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffda);
}

/* 0x31     TCALL 3 */
bool tcall_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffd8);
}

/* 0x41     TCALL 4 */
bool tcall_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffd6);
}

/* 0x51     TCALL 5 */
bool tcall_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffd4);
}

/* 0x61     TCALL 6 */
bool tcall_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffd2);
}

/* 0x71     TCALL 7 */
bool tcall_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffd0);
}

/* 0x81     TCALL 8 */
bool tcall_8(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffce);
}

/* 0x91     TCALL 9 */
bool tcall_9(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffcc);
}

/* 0xa1     TCALL 10 */
bool tcall_10(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffca);
}

/* 0xb1     TCALL 11 */
bool tcall_11(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffc8);
}

/* 0xc1     TCALL 12 */
bool tcall_12(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffc6);
}

/* 0xd1     TCALL 13 */
bool tcall_13(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffc4);
}

/* 0xe1     TCALL 14 */
bool tcall_14(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffc2);
}

/* 0xf1     TCALL 15 */
bool tcall_15(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2422 */
    return tcall_internal(state, cycle, 0xffc0);
}




/* 0x04     OR    A, d */
bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x14     OR    A, d+X */
bool or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x24     AND   A, d */
bool and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x34     AND   A, d+X */
bool and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x44     EOR   A, d */
bool eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x54     EOR   A, d+X */
bool eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x64     CMP   A, d */
bool cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x74     CMP   A, d+X */
bool cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x84     ADC   A, d */
bool adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.621 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x94     ADC   A, d+X */
bool adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.753 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xa4     SBC   A, d */
bool sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.631 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xb4     SBC   A, d+X */
bool sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.832 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xc4     MOV   d, a */
bool mov_direct_register_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1875 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.1917 */
            bus_write(state, cpu->addr, cpu->a);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xe4     MOV   A, d */
bool mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xf4     MOV   A, d+X */
bool mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x05     OR    A, !a */
bool or_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x15     OR    A, !a+X */
bool or_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x25     AND   A, !a */
bool and_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x35     AND   A, !a+X */
bool and_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x45     EOR   A, !a */
bool eor_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x55     EOR   A, !a+X */
bool eor_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x65     CMP   A, !a */
bool cmp_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x75     CMP   A, !a+X */
bool cmp_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x85     ADC   A, !a */
bool adc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1392 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x95     ADC   A, !a+X */
bool adc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1575 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xa5     SBC   A, !a */
bool sbc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1489 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xb5     SBC   A, !a+X */
bool sbc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1689 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xc5     MOV   !a, a */
bool mov_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2199 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xe5     MOV   A, !a */
bool mov_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xf5     MOV   A, !a+X */
bool mov_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->x;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x06     OR    A, (X) */
bool or_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x16     OR    A, !a+Y */
bool or_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x26     AND   A, (X) */
bool and_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x36     AND   A, !a+Y */
bool and_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x46     EOR   A, (X) */
bool eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x56     EOR   A, !a+Y */
bool eor_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x66     CMP   A, (X) */
bool cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x76     CMP   A, !a+Y */
bool cmp_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x86     ADC   A, (X) */
bool adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.901 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x96     ADC   A, !a+Y */
bool adc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1585 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xa6     SBC   A, (X) */
bool sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.958 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xb6     SBC   A, !a+Y */
bool sbc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1699 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xc6     MOV   (X), A */
bool mov_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1977 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);
    switch (cycle) {
        case 2:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
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
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xe6     MOV   A, (X) */
bool mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.862 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            // an idle cycle, lets calculate addr here since we can
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xf6     MOV   A, !a+Y */
bool mov_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1524 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            // let's index AA now bc why not
            cpu->addr += cpu->y;
            return false;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x07     OR    A, [d+X] */
bool or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x17     OR    A, [d]+Y */
bool or_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x27     AND   A, [d+X] */
bool and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x37     AND   A, [d]+Y */
bool and_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x47     EOR   A, [d+X] */
bool eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x57     EOR   A, [d]+Y */
bool eor_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x67     CMP   A, [d+X] */
bool cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x77     CMP   A, [d]+Y */
bool cmp_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x87     ADC   A, [d+X] */
bool adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1108 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x97     ADC   A, [d]+Y */
bool adc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1255 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xa7     SBC   A, [d+X] */
bool sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1165 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xb7     SBC   A, [d]+Y */
bool sbc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1312 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xc7     MOV   [d+X],A */
bool mov_indexed_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2065 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 7);
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
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
            cpu->addr = u16_parse(cpu->data8[1], cpu->data8[0]);
            return false;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xd7     MOV   [d]+Y,A */
bool mov_indirect_indexed_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2132 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 7);
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            cpu->addr += cpu->y;
            return false;
        case 5:
            // internal operations
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xe7     MOV   A, [d+X] */
bool mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1047 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 4:
            // first indirection
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // assemble the absolute address
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 6: {
            // second indirection
            // operand is ready for ALU execution
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xf7     MOV   A, [d]+Y */
bool mov_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1200 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 6);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
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
            // AA
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 5:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr += cpu->y;
            return false;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x08     OR    A, #i */
bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.251 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x18     OR    d, #i */
bool or_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.1831 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x28     AND   A, #i */
bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.251 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x38     AND   d, #i */
bool and_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.1793 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x48     EOR   A, #i */
bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.251 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x58     EOR   d, #i */
bool eor_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.251 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.1812 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x68     CMP   A, #i */
bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.232 */
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
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x88     ADC   A, #i */
bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.161 */
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
    /* generated from generate_instructions.py: l.375 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0x98     ADC   d, #i */
bool adc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.161 */
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
            /* generated from generate_instructions.py: l.1783 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xa8     SBC   A, #i */
bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.196 */
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
    /* generated from generate_instructions.py: l.385 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xb8     SBC   d, #i */
bool sbc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.196 */
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
            /* generated from generate_instructions.py: l.1841 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xc8     CMP   X, #i */
bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.232 */
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
    /* generated from generate_instructions.py: l.1875 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.1927 */
            bus_write(state, cpu->addr, cpu->x);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xe8     MOV   A, #i */
bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xf8     MOV   X, d */
bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0xc9     MOV   !a, x */
bool mov_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2199 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->x);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xe9     MOV   X, !a */
bool mov_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xf9     MOV   X, d+Y */
bool mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by Y
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->y) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}



/* 0xcb     MOV   d, y */
bool mov_direct_register_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1875 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.1937 */
            bus_write(state, cpu->addr, cpu->y);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xeb     MOV   Y, d */
bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xfb     MOV   Y, d+X */
bool mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.708 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            return false;
        case 3:
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0xcc     MOV   !a, y */
bool mov_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2199 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return false;
        case 3:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return false;
        case 5:
            bus_write(state, cpu->addr, cpu->y);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xec     MOV   Y, !a */
bool mov_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.255 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.147 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x5d     MOV   X, A */
bool mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->x = cpu->a;
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x7d     MOV   A, X */
bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x8d     MOV   Y, #i */
bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x9d     MOV   X, SP */
bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->x = cpu->sp;
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xad     CMP   Y, #i */
bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.232 */
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
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->sp = cpu->x;
    return true;
}

/* 0xcd     MOV   X, #i */
bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.312 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xdd     MOV   A, Y */
bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->a = cpu->y;
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xfd     MOV   Y, A */
bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.469 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    idle(state); // dummy read of PC, let's hope PC is not on a timer

    /* payload */
    /* generated from generate_instructions.py: l.255 */
    cpu->y = cpu->a;
    {
        /* generated from generate_instructions.py: l.147 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}


/* 0x1e     CMP   X, !a */
bool cmp_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x3e     CMP   X, d */
bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3);

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return false;
        case 3: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0x5e     CMP   Y, !a */
bool cmp_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1346 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return false;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return false;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.232 */
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
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}


/* 0x8f     MOV   d, #i */
bool mov_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1735 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 5);

    switch (cycle) {
        case 2:
            // #i
            cpu->operands[0] = bus_read(state, cpu->pc++);
            cpu->data8[1] = cpu->operands[0];
            return false;
        case 3:
            // direct page
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return false;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return false;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.1821 */
            bus_write(state, cpu->addr, cpu->data8[1]);
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xaf     MOV   (X)+, A */
bool mov_indirect_incremented_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2012 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 && cycle <= 4);
    switch (cycle) {
        case 2:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->x++);
            return false;
        case 3:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            return false;
        case 4:
            bus_write(state, cpu->addr, cpu->a);
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}

/* 0xbf     MOV   A, (X)+ */
bool mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.984 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);
    switch (cycle) {
        case 2:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->addr = direct_page(cpu, cpu->x);
            return false;
        case 3:
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->a = cpu->data8[0];
            psw_write_zero(cpu, cpu->a == 0);
            psw_write_neg(cpu, cpu->a & 0x80);
            /* we could increment X now but let's do it cycle 4 bc why not */
            return false;
        case 4:
            /* internal operation */
            idle(state); // dummy read of PC, let's hope PC is not on a timer
            cpu->x += 1;
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}


