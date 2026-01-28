/* generated from generate_instructions.py: l.754 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

/* 0x00     NOP */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.418 */
    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);
    (void)state;
    return true;
}





/* 0x04     OR    A, d */
bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.339 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.339 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.339 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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
    /* generated from generate_instructions.py: l.129 */
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
                /* generated from generate_instructions.py: l.318 */
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
    /* generated from generate_instructions.py: l.129 */
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
                /* generated from generate_instructions.py: l.247 */
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
            /* generated from generate_instructions.py: l.606 */
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
    /* generated from generate_instructions.py: l.129 */
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
                /* generated from generate_instructions.py: l.282 */
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
            /* generated from generate_instructions.py: l.616 */
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
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.343 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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





/* 0xf8     MOV   X, d */
bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.343 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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
    /* generated from generate_instructions.py: l.129 */
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
            /* generated from generate_instructions.py: l.343 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.233 */
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




/* 0x3e     CMP   X, d */
bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.129 */
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
                /* generated from generate_instructions.py: l.318 */
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

/* 0x7e     CMP   Y, d */
bool cmp_register_direct_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.129 */
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
                /* generated from generate_instructions.py: l.318 */
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



