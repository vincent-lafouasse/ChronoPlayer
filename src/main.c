#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "bus_io.h"
#include "instruction.h"
#include "state.h"

// a single sub-instruction clock tick
void cpu_tick(struct SPC_State* state)
{
    struct CPU_State* cpu = &state->cpu;

    if (cpu->instruction_cycle == 1) {
        cpu->addr = cpu->pc++;  // latch the program counter
        cpu->opcode = bus_read(state, cpu->addr);
        return;
    }

    const struct Instruction* instruction = opcode_lookup_table + cpu->opcode;
    if (instruction->handler == NULL) {
        // later a trace trap rather than an exit probably
        fprintf(stderr, "Unimplemented opcode: 0x%02x\n", cpu->opcode);
        exit(1);
    }

    const bool done = instruction->handler(state, cpu->instruction_cycle);
    if (done) {
        cpu->instruction_cycle = 1;
    } else {
        cpu->instruction_cycle++;
    }
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);
}
