#pragma once

#include "state.h"

typedef void (*BusTraceFn)(void* userdata,
                           uint16_t addr,
                           uint8_t val,
                           bool is_write);

extern BusTraceFn g_bus_trace_hook;
extern void* g_bus_trace_userdata;

uint8_t bus_read(const struct SPC_State* state, uint16_t addr);
void bus_write(struct SPC_State* state, uint16_t addr, uint8_t val);
