#include "cpu.h"

#include <stdio.h>
#include <stdlib.h>

#include "./instruction/instruction.h"
#include "bus/bus.h"
#include "utils.h"

// a single sub-instruction clock tick
void cpu_tick(struct SPC_State state[static 1])
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
