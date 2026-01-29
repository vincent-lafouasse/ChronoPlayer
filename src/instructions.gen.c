/* generated from generate_instructions.py: l.1437 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

/* 0x00     NOP */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.246 */
    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);
    (void)state;
    return true;
}

/* 0x20     CLRP */
bool clrp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1194 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    /* could do a dummy read but shouldn't matter */
    psw_write_direct_page(cpu, 0);
    return true;
}

/* 0x40     SETP */
bool setp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1194 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    /* could do a dummy read but shouldn't matter */
    psw_write_direct_page(cpu, 1);
    return true;
}

/* 0x60     CLRC */
bool clrc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1194 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    /* could do a dummy read but shouldn't matter */
    psw_write_carry(cpu, 0);
    return true;
}

/* 0x80     SETC */
bool setc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1194 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    /* could do a dummy read but shouldn't matter */
    psw_write_carry(cpu, 1);
    return true;
}

/* 0xe0     CLRV */
bool clrv(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1194 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    /* could do a dummy read but shouldn't matter */
    psw_write_overflow(cpu, 0);
    psw_write_half_carry(cpu, 0);
    return true;
}


/* 0x01     TCALL 0 */
bool tcall_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffde);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffdf);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x11     TCALL 1 */
bool tcall_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffdc);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffdd);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x21     TCALL 2 */
bool tcall_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffda);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffdb);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x31     TCALL 3 */
bool tcall_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffd8);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffd9);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x41     TCALL 4 */
bool tcall_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffd6);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffd7);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x51     TCALL 5 */
bool tcall_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffd4);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffd5);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x61     TCALL 6 */
bool tcall_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffd2);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffd3);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x71     TCALL 7 */
bool tcall_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffd0);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffd1);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x81     TCALL 8 */
bool tcall_8(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffce);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffcf);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0x91     TCALL 9 */
bool tcall_9(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffcc);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffcd);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xa1     TCALL 10 */
bool tcall_10(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffca);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffcb);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xb1     TCALL 11 */
bool tcall_11(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffc8);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffc9);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xc1     TCALL 12 */
bool tcall_12(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffc6);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffc7);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xd1     TCALL 13 */
bool tcall_13(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffc4);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffc5);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xe1     TCALL 14 */
bool tcall_14(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffc2);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffc3);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}

/* 0xf1     TCALL 15 */
bool tcall_15(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1280 */
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
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;

        // cycle 5-6 fetch the address to go to at a predetermined address
        case 5:
            cpu->data8[0] = bus_read(state, 0xffc0);
            return false;
        case 6:
            cpu->data8[1] = bus_read(state, 0xffc1);
            // new pc
            cpu->addr = u16_parse(cpu->data8[0], cpu->data8[1]);
            return false;

        // cycle 7-8 are idle, we just publish the new pc at the end of cycle 8
        case 7:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            return false;
        case 8:
            /* "idle" cycle, could do a dummy read but shouldn't matter */
            cpu->pc = cpu->addr;
            return true;

        default:
            // unreachable
            // terminate instr. just in case
            return true;
    }

    return true;
}




/* 0x04     OR    A, d */
bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.523 */
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
                /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.685 */
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
                /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.523 */
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
                /* generated from generate_instructions.py: l.135 */
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
            /* generated from generate_instructions.py: l.598 */
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
    /* generated from generate_instructions.py: l.685 */
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
                /* generated from generate_instructions.py: l.135 */
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
            /* generated from generate_instructions.py: l.730 */
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
    /* generated from generate_instructions.py: l.523 */
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
                /* generated from generate_instructions.py: l.170 */
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
            /* generated from generate_instructions.py: l.608 */
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
    /* generated from generate_instructions.py: l.685 */
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
                /* generated from generate_instructions.py: l.170 */
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
            /* generated from generate_instructions.py: l.809 */
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
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.839 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.839 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.839 */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.839 */
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
                /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.839 */
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
                /* generated from generate_instructions.py: l.135 */
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
            /* generated from generate_instructions.py: l.878 */
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
    /* generated from generate_instructions.py: l.839 */
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
                /* generated from generate_instructions.py: l.170 */
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
            /* generated from generate_instructions.py: l.935 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xe6     MOV   A, (X) */
bool mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.839 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
            /* generated from generate_instructions.py: l.227 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
                /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
                /* generated from generate_instructions.py: l.135 */
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
            /* generated from generate_instructions.py: l.1088 */
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
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
                /* generated from generate_instructions.py: l.170 */
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
            /* generated from generate_instructions.py: l.1145 */
            cpu->a = cpu->data8[0];
            return true;
        }
        default:
            /* unreachable */
            /* true terminates the instruction just in case */
            return true;
    }
}

/* 0xe7     MOV   A, [d+X] */
bool mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1026 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle >= 2 || cycle <= 6);

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
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.227 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x28     AND   A, #i */
bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.227 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x48     EOR   A, #i */
bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.227 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x68     CMP   A, #i */
bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.135 */
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
    /* generated from generate_instructions.py: l.352 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xa8     SBC   A, #i */
bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.170 */
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
    /* generated from generate_instructions.py: l.362 */
    cpu->a = cpu->data8[0];
    return true;
}

/* 0xc8     CMP   X, #i */
bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.206 */
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
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xf8     MOV   X, d */
bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.523 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
    /* generated from generate_instructions.py: l.685 */
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
            /* generated from generate_instructions.py: l.231 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.121 */
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
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->x = cpu->a;
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x7d     MOV   A, X */
bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x8d     MOV   Y, #i */
bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0x9d     MOV   X, SP */
bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->x = cpu->sp;
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xad     CMP   Y, #i */
bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.206 */
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
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->sp = cpu->x;
    return true;
}

/* 0xcd     MOV   X, #i */
bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.289 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2);
    cpu->operands[0] = bus_read(state, cpu->pc++);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xdd     MOV   A, Y */
bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->a = cpu->y;
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}

/* 0xfd     MOV   Y, A */
bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.446 */
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.231 */
    cpu->y = cpu->a;
    {
        /* generated from generate_instructions.py: l.121 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}


/* 0x3e     CMP   X, d */
bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.523 */
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
                /* generated from generate_instructions.py: l.206 */
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


/* 0xbf     MOV   A, (X)+ */
bool mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.961 */
    struct CPU_State* const cpu = &state->cpu;

    assert(cycle == 2 || cycle == 3 || cycle == 4);
    switch (cycle) {
        case 2:
            /* internal operation */
            /* could do a dummy read but shouldn't matter */
            /* let's set the addr now bc why not */
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
            /* could do a dummy read but shouldn't matter */
            /* let's increment X now bc why not */
            cpu->x += 1;
            return true;
        default:
            /* unreachable but true terminates the instruction just in case */
            return true;
    }
}


