#pragma once

#include "state.h"

enum IoType {
    IO_READ,
    IO_WRITE,
    IO_WAIT,
};

static inline const char* io_type_repr(enum IoType type)
{
    switch (type) {
        case IO_WRITE:
            return "WRITE";
        case IO_READ:
            return "READ";
        case IO_WAIT:
            return "WAIT";
        default:
            return "Unknown IO operation";
    }
}

typedef void (*BusTraceFn)(void* userdata,
                           const struct SPC_State state[static 1],
                           uint16_t addr,
                           uint8_t val,
                           bool is_write);

extern BusTraceFn g_bus_trace_hook;
extern void* g_bus_trace_userdata;

uint8_t bus_read(struct SPC_State state[static 1], uint16_t addr);
void bus_write(struct SPC_State state[static 1], uint16_t addr, uint8_t val);

// not a dummy read, truly does nothing to the state
// the only thing it does is register the idle cycle to the hook
void bus_true_idle(struct SPC_State state[static 1]);
