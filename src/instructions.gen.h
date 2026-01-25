/* generated from generate_instructions.py: l.297 */
// clang-format off
#pragma once

#include <stdbool.h>

#include "state.h"

extern bool nop(struct SPC_State state[static 1], uint32_t cycle);
extern bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
extern bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
extern bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
extern bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
extern bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
// clang-format on
