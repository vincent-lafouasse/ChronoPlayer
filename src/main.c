#include <stdbool.h>

#include "state.h"

/*
SPC700 Memory Map
  0000h..00EFh  RAM (typically used for CPU pointers/variables)
  00F0h..00FFh  I/O Ports (writes are also passed to RAM)
  0100h..01FFh  RAM (typically used for CPU stack)
  0200h..FFBFh  RAM (code, data, dir-table, brr-samples, echo-buffer, etc.)
  FFC0h..FFFFh  64-byte Boot ROM or RAM (selectable via Port 00F1h)
*/

static bool use_ipl_rom(const struct SPC_State* state)
{
    const uint8_t control = state->aram[0x00f1];

    return (control & 0x80) != 0;
}

static uint8_t bus_read_port(const struct SPC_State* state, uint16_t addr)
{
    // dummy
    (void)state;
    (void)addr;
    return 0;
}

void bus_write_port(struct SPC_State* state, uint16_t addr, uint8_t val)
{
    // dummy
    (void)state;
    (void)addr;
    (void)val;
}

uint8_t bus_read(const struct SPC_State* state, uint16_t addr)
{
    if ((addr & 0xfff0) == 0xf0) {
        return bus_read_port(state, addr);
    }

    if (addr >= 0xffc0 && use_ipl_rom(state)) {
        return state->ipl_rom[addr - 0xffc0];
    }

    return state->aram[addr];
}

void bus_write(struct SPC_State* state, uint16_t addr, uint8_t val)
{
    state->aram[addr] = val;

    if ((addr & 0xfff0) == 0xf0) {
        bus_write_port(state, addr, val);
    }
}

// a single sub-istruction clock tick
void cpu_tick(struct SPC_State* state)
{
    struct CPU_State* cpu = &state->cpu;

    if (cpu->instruction_cycle == 0) {
        cpu->opcode = bus_read(state, cpu->pc++);
        return;
    }

    // do the rest of the instruction
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);
}
