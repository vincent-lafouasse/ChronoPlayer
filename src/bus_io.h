#pragma once

#include "state.h"

uint8_t bus_read(const struct SPC_State* state, uint16_t addr);
void bus_write(struct SPC_State* state, uint16_t addr, uint8_t val);
