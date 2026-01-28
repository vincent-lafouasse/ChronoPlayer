/* generated from generate_instructions.py: l.914 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

/* 0x00     NOP */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.815 */
    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);
    (void)state;
    return true;
}





/* 0x04     OR    A, d */
bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.240 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.240 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.240 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.240 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.240 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.240 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.515 */
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
                /* generated from generate_instructions.py: l.219 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.219 */
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
    /* generated from generate_instructions.py: l.515 */
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
                /* generated from generate_instructions.py: l.148 */
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
            /* generated from generate_instructions.py: l.590 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.148 */
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
            /* generated from generate_instructions.py: l.722 */
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
    /* generated from generate_instructions.py: l.515 */
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
                /* generated from generate_instructions.py: l.183 */
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
            /* generated from generate_instructions.py: l.600 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.183 */
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
            /* generated from generate_instructions.py: l.801 */
            cpu->a = cpu->data8[0];
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
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.244 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.244 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.240 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x28     AND   A, #i */
bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.240 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x48     EOR   A, #i */
bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.240 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x68     CMP   A, #i */
bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.219 */
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

/* 0x88     ADC   A, #i */
bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.148 */
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
    /* generated from generate_instructions.py: l.344 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xa8     SBC   A, #i */
bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.183 */
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
    /* generated from generate_instructions.py: l.354 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xc8     CMP   X, #i */
bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.219 */
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

/* 0xe8     MOV   A, #i */
bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xf8     MOV   X, d */
bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.244 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.244 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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



/* 0xeb     MOV   Y, d */
bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.515 */
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
            /* generated from generate_instructions.py: l.244 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
    /* generated from generate_instructions.py: l.677 */
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
            // idle cycle, could do a dummy read but shouldnt matter
            return false;
        case 4: {
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.244 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.134 */
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
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->x = cpu->a;
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x7d     MOV   A, X */
bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x8d     MOV   Y, #i */
bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x9d     MOV   X, SP */
bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->x = cpu->sp;
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xad     CMP   Y, #i */
bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.219 */
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
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->sp = cpu->x;
    return true;
}

/* 0xcd     MOV   X, #i */
bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.281 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xdd     MOV   A, Y */
bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->a = cpu->y;
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xfd     MOV   Y, A */
bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.438 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.244 */
    cpu->y = cpu->a;
    {
        /* generated from generate_instructions.py: l.134 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}


/* 0x3e     CMP   X, d */
bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.515 */
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
                /* generated from generate_instructions.py: l.219 */
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



