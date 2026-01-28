/* generated from generate_instructions.py: l.348 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

/* 0x00 */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.226 */
    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);
    (void)state;
    return true;
}









/* 0x08 */
bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.199 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x28 */
bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.199 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x48 */
bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.199 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x88 */
bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    {
        /* generated from generate_instructions.py: l.166 */
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
    /* generated from generate_instructions.py: l.267 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xe8 */
bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.203 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}






/* 0x8d */
bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.203 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xcd */
bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.76 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* generated from generate_instructions.py: l.203 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.152 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}




