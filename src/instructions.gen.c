/* generated from generate_instructions.py: l.4032 */

#include "instructions.gen.h"

#include "bus_io.h"
#include "cpu.h"

#include <stdlib.h>  // for abort()

#if defined(__GNUC__) || defined(__clang__)
    #define UNREACHABLE() do { __builtin_trap(); __builtin_unreachable(); } while(0)
#elif defined(_MSC_VER)
    #include <intrin.h>  // for __debugbreak()
    #define UNREACHABLE() do { __debugbreak(); __assume(0); } while(0)
#else
    #define UNREACHABLE() abort()
#endif

#include "instruction.h"

#if defined(__GNUC__) || defined(__clang__)
    #define UNREACHABLE() do { __builtin_trap(); __builtin_unreachable(); } while(0)
#elif defined(_MSC_VER)
    #include <intrin.h>  // for __debugbreak()
    #define UNREACHABLE() do { __debugbreak(); __assume(0); } while(0)
#else
    #define UNREACHABLE() abort()
#endif

static inline void parse_membit(uint16_t operand, uint16_t* addr, uint8_t* bit)
{
    /* generated from generate_instructions.py: l.69 */
    // top 3 bits encode the bit
    // the 13 ls bits encode the address in the first 8KB of RAM
    *bit = (uint8_t)(operand >> 13);
    *addr = (operand & 0x1fff);
}

static inline enum InstructionStatus tcall_internal(struct SPC_State state[static 1], uint32_t cycle, uint16_t vector)
{
    /* generated from generate_instructions.py: l.3746 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 8) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // effective stack address
            cpu->addr = 0x100 + cpu->sp;
            bus_write(state, cpu->addr, u16_msb(cpu->pc));
            cpu->sp -= 1;
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            cpu->addr = 0x100 + cpu->sp;
            bus_write(state, cpu->addr, u16_lsb(cpu->pc));
            cpu->sp -= 1;
            return INSTRUCTION_STATUS_PENDING;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;

        case 7:
            cpu->addr = vector;
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 8:
            cpu->addr = vector + 1;
            cpu->data8[1] = bus_read(state, cpu->addr);
            // new pc (store in data16, not addr yet - next cycles are idle)
            cpu->data16 = u16_read_little_endian(cpu->data8);
            cpu->pc = cpu->data16;
            return INSTRUCTION_STATUS_DONE;

        default:
            UNREACHABLE();
    }
}

/* 0x00     NOP */
enum InstructionStatus nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.546 */

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    return INSTRUCTION_STATUS_DONE;
}

/* 0x10     BPL */
enum InstructionStatus bpl(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = !psw_neg(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x20     CLRP */
enum InstructionStatus clrp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    psw_write_direct_page(cpu, 0);
    return INSTRUCTION_STATUS_DONE;
}

/* 0x30     BMI */
enum InstructionStatus bmi(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = psw_neg(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x40     SETP */
enum InstructionStatus setp(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    psw_write_direct_page(cpu, 1);
    return INSTRUCTION_STATUS_DONE;
}

/* 0x50     BVC */
enum InstructionStatus bvc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = !psw_overflow(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x60     CLRC */
enum InstructionStatus clrc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    psw_write_carry(cpu, 0);
    return INSTRUCTION_STATUS_DONE;
}

/* 0x70     BVS */
enum InstructionStatus bvs(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = psw_overflow(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x80     SETC */
enum InstructionStatus setc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    psw_write_carry(cpu, 1);
    return INSTRUCTION_STATUS_DONE;
}

/* 0x90     BCC */
enum InstructionStatus bcc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = !psw_carry(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xa0     EI */
enum InstructionStatus ei(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3115 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            psw_write_interrupt_enable(cpu, 1);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xb0     BCS */
enum InstructionStatus bcs(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = psw_carry(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xc0     DI */
enum InstructionStatus di(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3115 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            psw_write_interrupt_enable(cpu, 0);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd0     BNE */
enum InstructionStatus bne(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = !psw_zero(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xe0     CLRV */
enum InstructionStatus clrv(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3635 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
    psw_write_overflow(cpu, 0);
    psw_write_half_carry(cpu, 0);
    return INSTRUCTION_STATUS_DONE;
}

/* 0xf0     BEQ */
enum InstructionStatus beq(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = psw_zero(cpu);
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}


/* 0x01     TCALL 0 */
enum InstructionStatus tcall_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffde);
}

/* 0x11     TCALL 1 */
enum InstructionStatus tcall_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffdc);
}

/* 0x21     TCALL 2 */
enum InstructionStatus tcall_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffda);
}

/* 0x31     TCALL 3 */
enum InstructionStatus tcall_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffd8);
}

/* 0x41     TCALL 4 */
enum InstructionStatus tcall_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffd6);
}

/* 0x51     TCALL 5 */
enum InstructionStatus tcall_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffd4);
}

/* 0x61     TCALL 6 */
enum InstructionStatus tcall_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffd2);
}

/* 0x71     TCALL 7 */
enum InstructionStatus tcall_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffd0);
}

/* 0x81     TCALL 8 */
enum InstructionStatus tcall_8(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffce);
}

/* 0x91     TCALL 9 */
enum InstructionStatus tcall_9(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffcc);
}

/* 0xa1     TCALL 10 */
enum InstructionStatus tcall_10(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffca);
}

/* 0xb1     TCALL 11 */
enum InstructionStatus tcall_11(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffc8);
}

/* 0xc1     TCALL 12 */
enum InstructionStatus tcall_12(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffc6);
}

/* 0xd1     TCALL 13 */
enum InstructionStatus tcall_13(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffc4);
}

/* 0xe1     TCALL 14 */
enum InstructionStatus tcall_14(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffc2);
}

/* 0xf1     TCALL 15 */
enum InstructionStatus tcall_15(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3796 */
    return tcall_internal(state, cycle, 0xffc0);
}


/* 0x02     SET1  d */
enum InstructionStatus set1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 0
                cpu->data8[0] |= (1 << 0);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x12     CLR1  d */
enum InstructionStatus clr1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 0
                cpu->data8[0] &= ~(1 << 0);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x22     SET1  d */
enum InstructionStatus set1_1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 1
                cpu->data8[0] |= (1 << 1);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x32     CLR1  d */
enum InstructionStatus clr1_1_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 1
                cpu->data8[0] &= ~(1 << 1);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x42     SET1  d */
enum InstructionStatus set1_2_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 2
                cpu->data8[0] |= (1 << 2);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x52     CLR1  d */
enum InstructionStatus clr1_2_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 2
                cpu->data8[0] &= ~(1 << 2);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x62     SET1  d */
enum InstructionStatus set1_3_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 3
                cpu->data8[0] |= (1 << 3);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x72     CLR1  d */
enum InstructionStatus clr1_3_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 3
                cpu->data8[0] &= ~(1 << 3);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x82     SET1  d */
enum InstructionStatus set1_4_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 4
                cpu->data8[0] |= (1 << 4);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x92     CLR1  d */
enum InstructionStatus clr1_4_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 4
                cpu->data8[0] &= ~(1 << 4);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa2     SET1  d */
enum InstructionStatus set1_5_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 5
                cpu->data8[0] |= (1 << 5);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb2     CLR1  d */
enum InstructionStatus clr1_5_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 5
                cpu->data8[0] &= ~(1 << 5);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc2     SET1  d */
enum InstructionStatus set1_6_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 6
                cpu->data8[0] |= (1 << 6);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xd2     CLR1  d */
enum InstructionStatus clr1_6_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 6
                cpu->data8[0] &= ~(1 << 6);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe2     SET1  d */
enum InstructionStatus set1_7_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.517 */
                // SET1 - Set bit 7
                cpu->data8[0] |= (1 << 7);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf2     CLR1  d */
enum InstructionStatus clr1_7_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.529 */
                // CLR1 - Clear bit 7
                cpu->data8[0] &= ~(1 << 7);
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x03     BBS d.0, r */
enum InstructionStatus bbs_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 0);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x13     BBC d.0, r */
enum InstructionStatus bbc_0(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 0));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x23     BBS d.1, r */
enum InstructionStatus bbs_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 1);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x33     BBC d.1, r */
enum InstructionStatus bbc_1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 1));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x43     BBS d.2, r */
enum InstructionStatus bbs_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 2);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x53     BBC d.2, r */
enum InstructionStatus bbc_2(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 2));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x63     BBS d.3, r */
enum InstructionStatus bbs_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 3);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x73     BBC d.3, r */
enum InstructionStatus bbc_3(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 3));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x83     BBS d.4, r */
enum InstructionStatus bbs_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 4);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x93     BBC d.4, r */
enum InstructionStatus bbc_4(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 4));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xa3     BBS d.5, r */
enum InstructionStatus bbs_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 5);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xb3     BBC d.5, r */
enum InstructionStatus bbc_5(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 5));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xc3     BBS d.6, r */
enum InstructionStatus bbs_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 6);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd3     BBC d.6, r */
enum InstructionStatus bbc_6(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 6));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xe3     BBS d.7, r */
enum InstructionStatus bbs_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = cpu->data8[0] & (1 << 7);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xf3     BBC d.7, r */
enum InstructionStatus bbc_7(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3888 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->operands[1] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->branch_taken = !(cpu->data8[0] & (1 << 7));
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 6:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 7:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[1];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}


/* 0x04     OR    A, d */
enum InstructionStatus or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x14     OR    A, d+X */
enum InstructionStatus or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x24     AND   A, d */
enum InstructionStatus and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x34     AND   A, d+X */
enum InstructionStatus and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x44     EOR   A, d */
enum InstructionStatus eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x54     EOR   A, d+X */
enum InstructionStatus eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x64     CMP   A, d */
enum InstructionStatus cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x74     CMP   A, d+X */
enum InstructionStatus cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x84     ADC   A, d */
enum InstructionStatus adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x94     ADC   A, d+X */
enum InstructionStatus adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa4     SBC   A, d */
enum InstructionStatus sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb4     SBC   A, d+X */
enum InstructionStatus sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc4     MOV   d, a */
enum InstructionStatus mov_direct_register_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2062 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2102 */
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xd4     MOV   d+x, a */
enum InstructionStatus mov_direct_indexed_register_x_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2157 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" read in RMW mov
            (void)bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->a; // what we actually want to store
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.2200 */
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe4     MOV   A, d */
enum InstructionStatus mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf4     MOV   A, d+X */
enum InstructionStatus mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x05     OR    A, !a */
enum InstructionStatus or_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x15     OR    A, !a+X */
enum InstructionStatus or_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x25     AND   A, !a */
enum InstructionStatus and_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x35     AND   A, !a+X */
enum InstructionStatus and_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x45     EOR   A, !a */
enum InstructionStatus eor_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x55     EOR   A, !a+X */
enum InstructionStatus eor_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x65     CMP   A, !a */
enum InstructionStatus cmp_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x75     CMP   A, !a+X */
enum InstructionStatus cmp_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x85     ADC   A, !a */
enum InstructionStatus adc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x95     ADC   A, !a+X */
enum InstructionStatus adc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa5     SBC   A, !a */
enum InstructionStatus sbc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb5     SBC   A, !a+X */
enum InstructionStatus sbc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc5     MOV   !a, a */
enum InstructionStatus mov_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2466 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd5     MOV   !a+x, A */
enum InstructionStatus mov_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2530 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[1];
            // compute AA + x but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = cpu->data16;
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // "useless" RMW read for MOV
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xe5     MOV   A, !a */
enum InstructionStatus mov_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf5     MOV   A, !a+X */
enum InstructionStatus mov_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x06     OR    A, (X) */
enum InstructionStatus or_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x16     OR    A, !a+Y */
enum InstructionStatus or_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x26     AND   A, (X) */
enum InstructionStatus and_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x36     AND   A, !a+Y */
enum InstructionStatus and_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x46     EOR   A, (X) */
enum InstructionStatus eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x56     EOR   A, !a+Y */
enum InstructionStatus eor_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x66     CMP   A, (X) */
enum InstructionStatus cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x76     CMP   A, !a+Y */
enum InstructionStatus cmp_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x86     ADC   A, (X) */
enum InstructionStatus adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x96     ADC   A, !a+Y */
enum InstructionStatus adc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa6     SBC   A, (X) */
enum InstructionStatus sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb6     SBC   A, !a+Y */
enum InstructionStatus sbc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc6     MOV   (X), A */
enum InstructionStatus mov_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2246 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            cpu->addr = direct_page(cpu, cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // "useless" read for RMW MOV
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd6     MOV   !a+y, A */
enum InstructionStatus mov_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2530 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[1];
            // compute AA + y but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = cpu->data16;
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // "useless" RMW read for MOV
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xe6     MOV   A, (X) */
enum InstructionStatus mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1106 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf6     MOV   A, !a+Y */
enum InstructionStatus mov_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1732 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address (before indexing)
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            // index AA now
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x07     OR    A, [d+X] */
enum InstructionStatus or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x17     OR    A, [d]+Y */
enum InstructionStatus or_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a |= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x27     AND   A, [d+X] */
enum InstructionStatus and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x37     AND   A, [d]+Y */
enum InstructionStatus and_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a &= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x47     EOR   A, [d+X] */
enum InstructionStatus eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x57     EOR   A, [d]+Y */
enum InstructionStatus eor_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->a ^= cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x67     CMP   A, [d+X] */
enum InstructionStatus cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x77     CMP   A, [d]+Y */
enum InstructionStatus cmp_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x87     ADC   A, [d+X] */
enum InstructionStatus adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x97     ADC   A, [d]+Y */
enum InstructionStatus adc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.367 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa7     SBC   A, [d+X] */
enum InstructionStatus sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb7     SBC   A, [d]+Y */
enum InstructionStatus sbc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.371 */
            cpu->a = cpu->data8[0];
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc7     MOV   [d+X],A */
enum InstructionStatus mov_indexed_indirect_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2333 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[0] + 1);
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->addr = u16_read_big_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd7     MOV   [d]+Y,A */
enum InstructionStatus mov_indirect_indexed_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2399 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 7) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->data8[1] = bus_read(state, cpu->addr);
            // compute AA + Y, but don't latch yet (next cycle is idle)
            cpu->data16 = u16_read_little_endian(cpu->data8) + cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = cpu->data16;
            return INSTRUCTION_STATUS_PENDING;
        case 6:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 7:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xe7     MOV   A, [d+X] */
enum InstructionStatus mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1283 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // &AAL on the direct page
            cpu->data8[0] = cpu->operands[0] + cpu->x;
            // &AAH on the direct page as well (wrapped to the 256B page)
            cpu->data8[1] = cpu->data8[0] + 1;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // first indirection
            // AAL
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // AAH
            cpu->addr = direct_page(cpu, cpu->data8[1]);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // assemble the absolute address
            cpu->addr = u16_read_little_endian(cpu->data8);
            // second indirection
            cpu->data8[0] = bus_read(state, cpu->addr);
            // operand is ready for ALU execution

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf7     MOV   A, [d]+Y */
enum InstructionStatus mov_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1428 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAL
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // AAH
            cpu->addr = direct_page(cpu, cpu->operands[0] + 1);
            cpu->data8[1] = bus_read(state, cpu->addr);
            // AA
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr += cpu->y;
            return INSTRUCTION_STATUS_PENDING;
        case 6: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->a = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->a;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x08     OR    A, #i */
enum InstructionStatus or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.323 */
    cpu->a |= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x18     OR    d, #i */
enum InstructionStatus or_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x28     AND   A, #i */
enum InstructionStatus and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.323 */
    cpu->a &= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x38     AND   d, #i */
enum InstructionStatus and_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x48     EOR   A, #i */
enum InstructionStatus eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.323 */
    cpu->a ^= cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x58     EOR   d, #i */
enum InstructionStatus eor_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x68     CMP   A, #i */
enum InstructionStatus cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.304 */
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
    return INSTRUCTION_STATUS_DONE;
}

/* 0x78     CMP   d, #i */
enum InstructionStatus cmp_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x88     ADC   A, #i */
enum InstructionStatus adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.233 */
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
    /* generated from generate_instructions.py: l.367 */
    cpu->a = cpu->data8[0];
    return INSTRUCTION_STATUS_DONE;
}

/* 0x98     ADC   d, #i */
enum InstructionStatus adc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa8     SBC   A, #i */
enum InstructionStatus sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.268 */
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
    /* generated from generate_instructions.py: l.371 */
    cpu->a = cpu->data8[0];
    return INSTRUCTION_STATUS_DONE;
}

/* 0xb8     SBC   d, #i */
enum InstructionStatus sbc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc8     CMP   X, #i */
enum InstructionStatus cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.304 */
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
    return INSTRUCTION_STATUS_DONE;
}

/* 0xd8     MOV   d, x */
enum InstructionStatus mov_direct_register_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2062 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2112 */
            bus_write(state, cpu->addr, cpu->x);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe8     MOV   A, #i */
enum InstructionStatus mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->a = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0xf8     MOV   X, d */
enum InstructionStatus mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x09     OR    dd, ds */
enum InstructionStatus or_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x19     OR    (X), (Y) */
enum InstructionStatus or_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] |= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x29     AND   dd, ds */
enum InstructionStatus and_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x39     AND   (X), (Y) */
enum InstructionStatus and_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] &= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x49     EOR   dd, ds */
enum InstructionStatus eor_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x59     EOR   (X), (Y) */
enum InstructionStatus eor_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.323 */
            cpu->data8[0] ^= cpu->data8[1];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->data8[0];
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x69     CMP   dd, ds */
enum InstructionStatus cmp_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x79     CMP   (X), (Y) */
enum InstructionStatus cmp_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x89     ADC   dd, ds */
enum InstructionStatus adc_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x99     ADC   (X), (Y) */
enum InstructionStatus adc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.233 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xa9     SBC   dd, ds */
enum InstructionStatus sbc_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2603 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 6) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // Read data from dest
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 6: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xb9     SBC   (X), (Y) */
enum InstructionStatus sbc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2771 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // src: (Y)
            cpu->addr = direct_page(cpu, cpu->y);
            cpu->data8[1] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // dst: (X)
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            {
                /* generated from generate_instructions.py: l.268 */
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
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xc9     MOV   !a, x */
enum InstructionStatus mov_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2466 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_write(state, cpu->addr, cpu->x);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xd9     MOV   d+y, x */
enum InstructionStatus mov_direct_indexed_register_y_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2157 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->y);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" read in RMW mov
            (void)bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->x; // what we actually want to store
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.2200 */
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xe9     MOV   X, !a */
enum InstructionStatus mov_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xf9     MOV   X, d+Y */
enum InstructionStatus mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by Y
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->y) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->x = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->x;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0xea     NOT1  m.b */
enum InstructionStatus not1(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3029 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->data16 = u16_read_little_endian(cpu->operands);
            parse_membit(cpu->data16, &cpu->addr, &cpu->bit);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            // RMW modify
            bit_toggle(cpu->data8, cpu->bit);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xfa     MOV   dd, ds */
enum InstructionStatus mov_direct_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2710 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // DS - source address
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // Read data from source
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // DD - destination address
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            // no RMW read
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}


/* 0x0b     ASL   d */
enum InstructionStatus asl_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.397 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x1b     ASL   d+X */
enum InstructionStatus asl_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.397 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x2b     ROL   d */
enum InstructionStatus rol_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.473 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x3b     ROL   d+X */
enum InstructionStatus rol_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.473 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x4b     LSR   d */
enum InstructionStatus lsr_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.452 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x5b     LSR   d+X */
enum InstructionStatus lsr_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.452 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x6b     ROR   d */
enum InstructionStatus ror_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.495 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x7b     ROR   d+X */
enum InstructionStatus ror_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.495 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x8b     DEC   d */
enum InstructionStatus dec_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.418 */
                // DEC - Decrement
                const uint8_t result = cpu->data8[0] - 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x9b     DEC   d+X */
enum InstructionStatus dec_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.418 */
                // DEC - Decrement
                const uint8_t result = cpu->data8[0] - 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xab     INC   d */
enum InstructionStatus inc_direct(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2893 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.435 */
                // INC - Increment
                const uint8_t result = cpu->data8[0] + 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xbb     INC   d+X */
enum InstructionStatus inc_direct_indexed(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3168 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // direct offset
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.435 */
                // INC - Increment
                const uint8_t result = cpu->data8[0] + 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xcb     MOV   d, y */
enum InstructionStatus mov_direct_register_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2062 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // "useless" read in RMW mov
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {

            /* payload */
            /* generated from generate_instructions.py: l.2122 */
            bus_write(state, cpu->addr, cpu->y);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xdb     MOV   d+x, y */
enum InstructionStatus mov_direct_indexed_register_x_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2157 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[0] + cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" read in RMW mov
            (void)bus_read(state, cpu->addr);
            cpu->data8[0] = cpu->y; // what we actually want to store
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.2200 */
            /* generated from generate_instructions.py: l.380 */
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xeb     MOV   Y, d */
enum InstructionStatus mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xfb     MOV   Y, d+X */
enum InstructionStatus mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.964 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // direct offset indexed by X
            // wrapped within the direct page
            cpu->data8[0] = (cpu->operands[0] + cpu->x) & 0xff;
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            cpu->addr = direct_page(cpu, cpu->data8[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}


/* 0x0c     ASL   !a */
enum InstructionStatus asl_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.397 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x1c     ASL   A */
enum InstructionStatus asl_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.397 */
    // ASL - Arithmetic Shift Left
    // high bit -> Carry, 0 -> low bit
    const uint8_t value = cpu->data8[0];
    
    psw_write_carry(cpu, value & 0x80);
    
    const uint8_t result = value << 1;
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x2c     ROL   !a */
enum InstructionStatus rol_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.473 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x3c     ROL   A */
enum InstructionStatus rol_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.473 */
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
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x4c     LSR   !a */
enum InstructionStatus lsr_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.452 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x5c     LSR   A */
enum InstructionStatus lsr_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.452 */
    // LSR - Logical Shift Right
    // 0 -> high bit, low bit -> Carry
    const uint8_t value = cpu->data8[0];
    
    psw_write_carry(cpu, value & 0x01);
    
    const uint8_t result = value >> 1;
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x6c     ROR   !a */
enum InstructionStatus ror_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.495 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x7c     ROR   A */
enum InstructionStatus ror_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.495 */
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
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x8c     DEC   !a */
enum InstructionStatus dec_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.418 */
                // DEC - Decrement
                const uint8_t result = cpu->data8[0] - 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x9c     DEC   A */
enum InstructionStatus dec_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.418 */
    // DEC - Decrement
    const uint8_t result = cpu->data8[0] - 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0xac     INC   !a */
enum InstructionStatus inc_absolute(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3295 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->operands[1] = bus_read(state, cpu->pc++);
            cpu->addr = u16_read_little_endian(cpu->operands);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // RMW read
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {
            // RMW modify

            /* payload */
            {
                /* generated from generate_instructions.py: l.435 */
                // INC - Increment
                const uint8_t result = cpu->data8[0] + 1;

                psw_write_zero(cpu, result == 0);
                psw_write_neg(cpu, result & 0x80);

                cpu->data8[0] = result;
            }
            // RMW write
            bus_write(state, cpu->addr, cpu->data8[0]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xbc     INC   A */
enum InstructionStatus inc_a(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->a;
                    {
    /* generated from generate_instructions.py: l.435 */
    // INC - Increment
    const uint8_t result = cpu->data8[0] + 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->a = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0xcc     MOV   !a, y */
enum InstructionStatus mov_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2466 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            // AAL
            cpu->data8[0] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // AAH
            cpu->data8[1] = cpu->operands[1];
            cpu->addr = u16_read_little_endian(cpu->data8);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // "useless" RMW read
            (void)bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5:
            bus_write(state, cpu->addr, cpu->y);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xdc     DEC   Y */
enum InstructionStatus dec_y(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->y;
                    {
    /* generated from generate_instructions.py: l.418 */
    // DEC - Decrement
    const uint8_t result = cpu->data8[0] - 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->y = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0xec     MOV   Y, !a */
enum InstructionStatus mov_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            /* generated from generate_instructions.py: l.339 */
            cpu->y = cpu->data8[0];
            {
                /* generated from generate_instructions.py: l.219 */
                const uint16_t v = cpu->y;
                psw_write_zero(cpu, v == 0);
                psw_write_neg(cpu, v & 0x80);
            }
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xfc     INC   Y */
enum InstructionStatus inc_y(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->y;
                    {
    /* generated from generate_instructions.py: l.435 */
    // INC - Increment
    const uint8_t result = cpu->data8[0] + 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->y = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                


/* 0x0d     PUSH  PSW */
enum InstructionStatus push_status(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3458 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->data8[0] = cpu->sp--;
            cpu->addr = 0x100 | cpu->data8[0];
            bus_write(state, cpu->addr, cpu->status);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x1d     DEC   X */
enum InstructionStatus dec_x(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->x;
                    {
    /* generated from generate_instructions.py: l.418 */
    // DEC - Decrement
    const uint8_t result = cpu->data8[0] - 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->x = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x2d     PUSH  A */
enum InstructionStatus push_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3458 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->data8[0] = cpu->sp--;
            cpu->addr = 0x100 | cpu->data8[0];
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x3d     INC   X */
enum InstructionStatus inc_x(struct SPC_State state[static 1], uint32_t cycle)
                {
                    /* generated from generate_instructions.py: l.3404 */
                    struct CPU_State* const cpu = &state->cpu;
                
                    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
                
                    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
                    cpu->data8[0] = cpu->x;
                    {
    /* generated from generate_instructions.py: l.435 */
    // INC - Increment
    const uint8_t result = cpu->data8[0] + 1;
    
    psw_write_zero(cpu, result == 0);
    psw_write_neg(cpu, result & 0x80);
    
    cpu->data8[0] = result;
}
                    cpu->x = cpu->data8[0];
                    return INSTRUCTION_STATUS_DONE;
                }
                

/* 0x4d     PUSH  X */
enum InstructionStatus push_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3458 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->data8[0] = cpu->sp--;
            cpu->addr = 0x100 | cpu->data8[0];
            bus_write(state, cpu->addr, cpu->x);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x5d     MOV   X, A */
enum InstructionStatus mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->x = cpu->a;
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x6d     PUSH  Y */
enum InstructionStatus push_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3458 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->data8[0] = cpu->sp--;
            cpu->addr = 0x100 | cpu->data8[0];
            bus_write(state, cpu->addr, cpu->y);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x7d     MOV   A, X */
enum InstructionStatus mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x8d     MOV   Y, #i */
enum InstructionStatus mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->y = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0x9d     MOV   X, SP */
enum InstructionStatus mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->x = cpu->sp;
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0xad     CMP   Y, #i */
enum InstructionStatus cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    {
        /* generated from generate_instructions.py: l.304 */
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
    return INSTRUCTION_STATUS_DONE;
}

/* 0xbd     MOV   SP, X */
enum InstructionStatus mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->sp = cpu->x;
    return INSTRUCTION_STATUS_DONE;
}

/* 0xcd     MOV   X, #i */
enum InstructionStatus mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.588 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
    cpu->data8[0] = cpu->operands[0];

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->x = cpu->data8[0];
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->x;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0xdd     MOV   A, Y */
enum InstructionStatus mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->a = cpu->y;
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}

/* 0xed     NOTC */
enum InstructionStatus notc(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3076 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            psw_write_carry(cpu, !psw_carry(cpu));
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xfd     MOV   Y, A */
enum InstructionStatus mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle)
{
/* generated from generate_instructions.py: l.738 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle != 2) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    (void)bus_read(state, state->cpu.pc); // dummy read/pre-fetch

    /* payload */
    /* generated from generate_instructions.py: l.339 */
    cpu->y = cpu->a;
    {
        /* generated from generate_instructions.py: l.219 */
        const uint16_t v = cpu->y;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return INSTRUCTION_STATUS_DONE;
}


/* 0x1e     CMP   X, !a */
enum InstructionStatus cmp_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x3e     CMP   X, d */
enum InstructionStatus cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.814 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 3) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3: {
            cpu->addr = direct_page(cpu, cpu->operands[0]);
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x5e     CMP   Y, !a */
enum InstructionStatus cmp_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1566 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // AAL
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // AAH
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            // full absolute address
            cpu->addr = u16_parse(cpu->operands[0], cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4: {
            // data is ready to hit the ALU
            cpu->data8[0] = bus_read(state, cpu->addr);

            /* payload */
            {
                /* generated from generate_instructions.py: l.304 */
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
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0x8e     POP   PSW */
enum InstructionStatus pop_status(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3493 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->data8[0] = ++(cpu->sp);
            cpu->addr = 0x100 | cpu->data8[0];
            cpu->status = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xae     POP   A */
enum InstructionStatus pop_a(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3493 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->data8[0] = ++(cpu->sp);
            cpu->addr = 0x100 | cpu->data8[0];
            cpu->a = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xce     POP   X */
enum InstructionStatus pop_x(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3493 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->data8[0] = ++(cpu->sp);
            cpu->addr = 0x100 | cpu->data8[0];
            cpu->x = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xee     POP   Y */
enum InstructionStatus pop_y(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3493 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }
    switch (cycle) {
        case 2:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            cpu->data8[0] = ++(cpu->sp);
            cpu->addr = 0x100 | cpu->data8[0];
            cpu->y = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}


/* 0x2f     BRA */
enum InstructionStatus bra(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.3555 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    cpu->branch_taken = true;
    
    switch (cycle) {
        case 2:
            cpu->operands[0] = bus_read(state, cpu->pc++);
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 3:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            return cpu->branch_taken ? INSTRUCTION_STATUS_PENDING : INSTRUCTION_STATUS_DONE;
        case 4:
            bus_true_idle(state); // truly do nothing except register a IO_WAIT to the hook
            cpu->pc += (int8_t)cpu->operands[0];
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0x8f     MOV   d, #i */
enum InstructionStatus mov_direct_immediate(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1931 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 5) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            // #i
            cpu->addr = cpu->pc++; cpu->operands[0] = bus_read(state, cpu->addr);
            cpu->data8[1] = cpu->operands[0];
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            // direct page
            cpu->addr = cpu->pc++; cpu->operands[1] = bus_read(state, cpu->addr);
            cpu->addr = direct_page(cpu, cpu->operands[1]);
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            // data
            cpu->data8[0] = bus_read(state, cpu->addr);
            return INSTRUCTION_STATUS_PENDING;
        case 5: {

            /* payload */
            /* generated from generate_instructions.py: l.2012 */
            bus_write(state, cpu->addr, cpu->data8[1]);
            return INSTRUCTION_STATUS_DONE;
        }
        default:
            UNREACHABLE();
    }
}

/* 0xaf     MOV   (X)+, A */
enum InstructionStatus mov_indirect_incremented_register(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.2280 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            /* internal operation - dummy read from last latched addr */
            (void)bus_read(state, state->cpu.addr); // dummy read from the last latched address
            cpu->addr = direct_page(cpu, cpu->x++);
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            /* internal operation - dummy read from last latched addr */
            (void)bus_read(state, state->cpu.addr); // dummy read from the last latched address
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            bus_write(state, cpu->addr, cpu->a);
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}

/* 0xbf     MOV   A, (X)+ */
enum InstructionStatus mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.1222 */
    struct CPU_State* const cpu = &state->cpu;

    if (cycle < 2 || cycle > 4) { return INSTRUCTION_STATUS_UNEXPECTED_CYCLE; }

    switch (cycle) {
        case 2:
            /* internal operation - dummy read from last latched addr */
            (void)bus_read(state, state->cpu.addr); // dummy read from the last latched address
            return INSTRUCTION_STATUS_PENDING;
        case 3:
            cpu->addr = direct_page(cpu, cpu->x);
            cpu->data8[0] = bus_read(state, cpu->addr);
            cpu->a = cpu->data8[0];
            psw_write_zero(cpu, cpu->a == 0);
            psw_write_neg(cpu, cpu->a & 0x80);
            /* we could increment X now but let's do it cycle 4 bc why not */
            return INSTRUCTION_STATUS_PENDING;
        case 4:
            /* internal operation - dummy read from last latched addr */
            (void)bus_read(state, state->cpu.addr); // dummy read from the last latched address
            cpu->x += 1;
            return INSTRUCTION_STATUS_DONE;
        default:
            UNREACHABLE();
    }
}


