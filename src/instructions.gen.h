/* generated from generate_instructions.py: l.495 */
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
/* 0x68 */
extern bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88 */
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa8 */
extern bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc8 */
extern bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8 */
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);





/* 0x5d */
extern bool mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7d */
extern bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8d */
extern bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x9d */
extern bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle);
/* 0xad */
extern bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbd */
extern bool mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcd */
extern bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xdd */
extern bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfd */
extern bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle);



