/* generated from generate_instructions.py: l.563 */
#pragma once

#include <stdbool.h>

#include "state.h"

/* 0x00     NOP */
extern bool nop(struct SPC_State state[static 1], uint32_t cycle);








/* 0x08     OR    A, #i */
extern bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x28     AND   A, #i */
extern bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x48     EOR   A, #i */
extern bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x68     CMP   A, #i */
extern bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88     ADC   A, #i */
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa8     SBC   A, #i */
extern bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc8     CMP   X, #i */
extern bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8     MOV   A, #i */
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);





/* 0x5d     MOV   X, A */
extern bool mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7d     MOV   A, X */
extern bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8d     MOV   Y, #i */
extern bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x9d     MOV   X, SP */
extern bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle);
/* 0xad     CMP   Y, #i */
extern bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbd     MOV   SP, X */
extern bool mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcd     MOV   X, #i */
extern bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xdd     MOV   A, Y */
extern bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfd     MOV   Y, A */
extern bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle);



