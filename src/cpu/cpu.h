#pragma once

#include <stddef.h>

#include "state.h"

// a single sub-instruction clock tick
void cpu_tick(struct SPC_State* state);

int cpu_dump(char buf[static 41], size_t len, const struct CPU_State* cpu);
