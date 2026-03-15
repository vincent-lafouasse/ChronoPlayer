#include "cpu.h"

#include <stdio.h>
#include <stdlib.h>

#include "./instruction/instruction.h"

#include "bus/bus.h"

#include "utils.h"

int dump_cpu_state(char buf[static 41], size_t len, const struct CPU_State* cpu)
{
    return snprintf(
        buf, len, "A:%02x X:%02x Y:%02x S:%02x PC:%04x PSW:%c%c%c%c%c%c%c%c",
        cpu->a, cpu->x, cpu->y, cpu->sp, cpu->pc,
        (cpu->status & PSW_N) ? 'N' : 'n', (cpu->status & PSW_V) ? 'V' : 'v',
        (cpu->status & PSW_P) ? 'P' : 'p', (cpu->status & PSW_B) ? 'B' : 'b',
        (cpu->status & PSW_H) ? 'H' : 'h', (cpu->status & PSW_I) ? 'I' : 'i',
        (cpu->status & PSW_Z) ? 'Z' : 'z', (cpu->status & PSW_C) ? 'C' : 'c');
}

// a single sub-instruction clock tick
void cpu_tick(struct SPC_State* state)
{
    struct CPU_State* cpu = &state->cpu;

    if (cpu->instruction_cycle == 1) {
        cpu->addr = cpu->pc++;  // latch the program counter
        cpu->opcode = bus_read(state, cpu->addr);
        cpu->instruction_cycle += 1;
        return;
    }

    const struct Instruction* instruction = opcode_lookup_table + cpu->opcode;
    if (instruction->handler == NULL) {
        fprintf(stderr, "Unimplemented opcode: 0x%02x\n", cpu->opcode);
        TRACE_TRAP();
    }

    const enum InstructionStatus status =
        instruction->handler(state, cpu->instruction_cycle);
    if (status == INSTRUCTION_STATUS_DONE) {
        cpu->instruction_cycle = 1;
    } else if (status == INSTRUCTION_STATUS_PENDING) {
        cpu->instruction_cycle++;
    } else {
        fprintf(stderr, "error in instruction handler\n");
        TRACE_TRAP();
    };
}
