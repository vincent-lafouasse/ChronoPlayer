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
    switch (addr) {
        // write only ports
        case 0xf0:  // TEST
        case 0xf1:  // CONTROL
            return 0;

        // DSP-SPC700 communication bus
        case 0xf2:  // DSPADDR
            // could read ram[0xf2] but better to use the cached version that's
            // probably in cache (no pun intended)
            return state->dsp.addr_latch;
        case 0xf3:  // DSPDATA
            return state->dsp.registers[state->dsp.addr_latch & 0x7f];

        // CPU-SPC700 communication
        // there is no CPU so these will never change
        case 0xf4:  // CPUI0
        case 0xf5:  // CPUI1
        case 0xf6:  // CPUI2
        case 0xf7:  // CPUI3
            return state->io_ports[addr - 0xf4];

        // actually normal RAM
        case 0xf8:
        case 0xf9:
            return state->aram[addr];

        // timer targets are write only
        case 0xfa:  // T0TARGET
        case 0xfb:  // T1TARGET
        case 0xfc:  // T2TARGET
            return 0;

        // TODO: timer access
        case 0xfd:     // T0OUT
        case 0xfe:     // T1OUT
        case 0xff:     // T2OUT
            return 0;  // dummy

        default:
            // unreachable
            return 0;
    }
}

void bus_write_port(struct SPC_State* state, uint16_t addr, uint8_t val)
{
    switch (addr) {
        // TODO: cache these as bools in state probably
        case 0xf0:  // TEST
        case 0xf1:  // CONTROL
            state->aram[addr] = val;
            return;

        // DSP-SPC700 communication bus
        case 0xf2:  // DSPADDR
            state->dsp.addr_latch = val;
            state->aram[addr] = val;
            return;
        case 0xf3: {  // DSPDATA
            state->aram[addr] = val;
            if (state->dsp.addr_latch >= 0x80) {
                // there are only 128 DSP registers
                return;
            }
            // TODO: check for read only DSP registers
            state->dsp.registers[state->dsp.addr_latch] = val;
            return;
        }

        // CPU-SPC700 communication
        // there is no CPU so no-one will ever read those but let's write them
        // anw
        case 0xf4:  // CPUO0
        case 0xf5:  // CPUO1
        case 0xf6:  // CPUO2
        case 0xf7:  // CPUO3
            state->aram[addr] = val;
            return;

        // actually normal RAM
        case 0xf8:
        case 0xf9:
            state->aram[addr] = val;
            return;

        // TODO: timer management
        case 0xfa:  // T0TARGET
        case 0xfb:  // T1TARGET
        case 0xfc:  // T2TARGET
            return;

        // timers are read-only
        case 0xfd:  // T0OUT
        case 0xfe:  // T1OUT
        case 0xff:  // T2OUT
            return;

        default:
            // unreachable
            return;
    }
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

/*
 8 Register, Absolute -- A,!a; X,!a; Y,!a
  (ADC,AND,CMP,CMP,CMP,EOR,MOV,MOV,MOV,OR,SBC)
  (3 bytes)
  (4 cycles)
        1       PC      Op Code         1
        2       PC+1    AAL             1
        3       PC+2    AAH             1
        4       AA      Data            1
    * Verified by blargg.
    * 2 and 3 could be swapped, but that would be odd.
*/

// returns true when done
// AND A, !a
bool and_accumulator_absolute(struct SPC_State* state, uint32_t cycle)
{
    static uint16_t addr;

    struct CPU_State* cpu = &state->cpu;
    uint8_t data;

    // cycle 1 already burned
    switch (cycle) {
        case 2:
            addr = bus_read(state, cpu->pc++);
            return false;
        case 3:
            addr |= (uint16_t)bus_read(state, cpu->pc++) << 8;
            return false;
        case 4:
            data = bus_read(state, addr);
            cpu->a &= data;
            // TODO: update psw
            return true;
        default:
            // unreachable
            // could put an assert here
            return true;
    }
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);
}
