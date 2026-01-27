/* generated from generate_instructions.py: l.296 */
#pragma once

#include <stdbool.h>

#include "state.h"

/* 0x00 */
extern bool nop(struct SPC_State state[static 1], uint32_t cycle);








/* 0x08 */
extern bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x28 */
extern bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x48 */
extern bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88 */
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8 */
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);





/* 0x8d */
extern bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcd */
extern bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);



