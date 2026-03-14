#include "bus_io.h"

#include <stdbool.h>
#include <stddef.h>

#include "utils.h"

BusTraceFn g_bus_trace_hook = NULL;
void* g_bus_trace_userdata = NULL;

/*
SPC700 Memory Map
  0000h..00EFh  RAM (typically used for CPU pointers/variables)
  00F0h..00FFh  I/O Ports (writes are also passed to RAM)
  0100h..01FFh  RAM (typically used for CPU stack)
  0200h..FFBFh  RAM (code, data, dir-table, brr-samples, echo-buffer, etc.)
  FFC0h..FFFFh  64-byte Boot ROM or RAM (selectable via Port 00F1h)
*/

static bool use_ipl_rom(const struct SPC_State state[static 1])
{
    const uint8_t control = state->aram[0x00f1];

    return (control & 0x80) != 0;
}

static uint8_t bus_read_port(struct SPC_State state[static 1], uint16_t addr)
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
            UNREACHABLE();
    }
}

static void bus_write_port(struct SPC_State state[static 1],
                           uint16_t addr,
                           uint8_t val)
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
            UNREACHABLE();
    }
}

uint8_t bus_read(struct SPC_State state[static 1], uint16_t addr)
{
    uint8_t value;

    if ((addr & 0xfff0) == 0xf0) {
        value = bus_read_port(state, addr);
        goto out;
    }

    if (addr >= 0xffc0 && use_ipl_rom(state)) {
        value = state->ipl_rom[addr - 0xffc0];
        goto out;
    }

    value = state->aram[addr];

out:
    if (g_bus_trace_hook != NULL) {
        g_bus_trace_hook(g_bus_trace_userdata, state, addr, value, IO_READ);
    }
    return value;
}

void bus_write(struct SPC_State state[static 1], uint16_t addr, uint8_t val)
{
    if (g_bus_trace_hook != NULL) {
        g_bus_trace_hook(g_bus_trace_userdata, state, addr, val, IO_WRITE);
    }

    state->aram[addr] = val;

    if ((addr & 0xfff0) == 0xf0) {
        bus_write_port(state, addr, val);
    }
}

#define DUMMY 67

void bus_true_idle(struct SPC_State state[static 1])
{
    if (g_bus_trace_hook != NULL) {
        g_bus_trace_hook(g_bus_trace_userdata, state, DUMMY, DUMMY, IO_WAIT);
    }
}
