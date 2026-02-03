/* generated from generate_instructions.py: l.2727 */
#pragma once

#include <stdbool.h>

#include "state.h"

/* 0x00     NOP */
extern bool nop(struct SPC_State state[static 1], uint32_t cycle);
/* 0x20     CLRP */
extern bool clrp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x40     SETP */
extern bool setp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x60     CLRC */
extern bool clrc(struct SPC_State state[static 1], uint32_t cycle);
/* 0x80     SETC */
extern bool setc(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe0     CLRV */
extern bool clrv(struct SPC_State state[static 1], uint32_t cycle);

/* 0x01     TCALL 0 */
extern bool tcall_0(struct SPC_State state[static 1], uint32_t cycle);
/* 0x11     TCALL 1 */
extern bool tcall_1(struct SPC_State state[static 1], uint32_t cycle);
/* 0x21     TCALL 2 */
extern bool tcall_2(struct SPC_State state[static 1], uint32_t cycle);
/* 0x31     TCALL 3 */
extern bool tcall_3(struct SPC_State state[static 1], uint32_t cycle);
/* 0x41     TCALL 4 */
extern bool tcall_4(struct SPC_State state[static 1], uint32_t cycle);
/* 0x51     TCALL 5 */
extern bool tcall_5(struct SPC_State state[static 1], uint32_t cycle);
/* 0x61     TCALL 6 */
extern bool tcall_6(struct SPC_State state[static 1], uint32_t cycle);
/* 0x71     TCALL 7 */
extern bool tcall_7(struct SPC_State state[static 1], uint32_t cycle);
/* 0x81     TCALL 8 */
extern bool tcall_8(struct SPC_State state[static 1], uint32_t cycle);
/* 0x91     TCALL 9 */
extern bool tcall_9(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa1     TCALL 10 */
extern bool tcall_10(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb1     TCALL 11 */
extern bool tcall_11(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc1     TCALL 12 */
extern bool tcall_12(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd1     TCALL 13 */
extern bool tcall_13(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe1     TCALL 14 */
extern bool tcall_14(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf1     TCALL 15 */
extern bool tcall_15(struct SPC_State state[static 1], uint32_t cycle);



/* 0x04     OR    A, d */
extern bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x14     OR    A, d+X */
extern bool or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x24     AND   A, d */
extern bool and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x34     AND   A, d+X */
extern bool and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x44     EOR   A, d */
extern bool eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x54     EOR   A, d+X */
extern bool eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x64     CMP   A, d */
extern bool cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x74     CMP   A, d+X */
extern bool cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x84     ADC   A, d */
extern bool adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x94     ADC   A, d+X */
extern bool adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa4     SBC   A, d */
extern bool sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb4     SBC   A, d+X */
extern bool sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc4     MOV   d, a */
extern bool mov_direct_register_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe4     MOV   A, d */
extern bool mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf4     MOV   A, d+X */
extern bool mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x05     OR    A, !a */
extern bool or_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x15     OR    A, !a+X */
extern bool or_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x25     AND   A, !a */
extern bool and_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x35     AND   A, !a+X */
extern bool and_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x45     EOR   A, !a */
extern bool eor_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x55     EOR   A, !a+X */
extern bool eor_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x65     CMP   A, !a */
extern bool cmp_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x75     CMP   A, !a+X */
extern bool cmp_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x85     ADC   A, !a */
extern bool adc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x95     ADC   A, !a+X */
extern bool adc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa5     SBC   A, !a */
extern bool sbc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb5     SBC   A, !a+X */
extern bool sbc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc5     MOV   !a, a */
extern bool mov_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd5     MOV   !a+x, A */
extern bool mov_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe5     MOV   A, !a */
extern bool mov_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf5     MOV   A, !a+X */
extern bool mov_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x06     OR    A, (X) */
extern bool or_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x16     OR    A, !a+Y */
extern bool or_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x26     AND   A, (X) */
extern bool and_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x36     AND   A, !a+Y */
extern bool and_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x46     EOR   A, (X) */
extern bool eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x56     EOR   A, !a+Y */
extern bool eor_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x66     CMP   A, (X) */
extern bool cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x76     CMP   A, !a+Y */
extern bool cmp_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x86     ADC   A, (X) */
extern bool adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x96     ADC   A, !a+Y */
extern bool adc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa6     SBC   A, (X) */
extern bool sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb6     SBC   A, !a+Y */
extern bool sbc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc6     MOV   (X), A */
extern bool mov_indirect_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd6     MOV   !a+y, A */
extern bool mov_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe6     MOV   A, (X) */
extern bool mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf6     MOV   A, !a+Y */
extern bool mov_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0x07     OR    A, [d+X] */
extern bool or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x17     OR    A, [d]+Y */
extern bool or_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x27     AND   A, [d+X] */
extern bool and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x37     AND   A, [d]+Y */
extern bool and_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x47     EOR   A, [d+X] */
extern bool eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x57     EOR   A, [d]+Y */
extern bool eor_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x67     CMP   A, [d+X] */
extern bool cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x77     CMP   A, [d]+Y */
extern bool cmp_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x87     ADC   A, [d+X] */
extern bool adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x97     ADC   A, [d]+Y */
extern bool adc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa7     SBC   A, [d+X] */
extern bool sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb7     SBC   A, [d]+Y */
extern bool sbc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc7     MOV   [d+X],A */
extern bool mov_indexed_indirect_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd7     MOV   [d]+Y,A */
extern bool mov_indirect_indexed_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe7     MOV   A, [d+X] */
extern bool mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf7     MOV   A, [d]+Y */
extern bool mov_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);

/* 0x08     OR    A, #i */
extern bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x18     OR    d, #i */
extern bool or_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x28     AND   A, #i */
extern bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x38     AND   d, #i */
extern bool and_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x48     EOR   A, #i */
extern bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x58     EOR   d, #i */
extern bool eor_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x68     CMP   A, #i */
extern bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x78     CMP   d, #i */
extern bool cmp_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88     ADC   A, #i */
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x98     ADC   d, #i */
extern bool adc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa8     SBC   A, #i */
extern bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb8     SBC   d, #i */
extern bool sbc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc8     CMP   X, #i */
extern bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd8     MOV   d, x */
extern bool mov_direct_register_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8     MOV   A, #i */
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf8     MOV   X, d */
extern bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x09     OR    dd, ds */
extern bool or_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x29     AND   dd, ds */
extern bool and_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x49     EOR   dd, ds */
extern bool eor_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x69     CMP   dd, ds */
extern bool cmp_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x89     ADC   dd, ds */
extern bool adc_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa9     SBC   dd, ds */
extern bool sbc_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc9     MOV   !a, x */
extern bool mov_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe9     MOV   X, !a */
extern bool mov_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf9     MOV   X, d+Y */
extern bool mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle);


/* 0xcb     MOV   d, y */
extern bool mov_direct_register_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xeb     MOV   Y, d */
extern bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfb     MOV   Y, d+X */
extern bool mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0xcc     MOV   !a, y */
extern bool mov_absolute_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xec     MOV   Y, !a */
extern bool mov_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle);

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

/* 0x1e     CMP   X, !a */
extern bool cmp_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x3e     CMP   X, d */
extern bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x5e     CMP   Y, !a */
extern bool cmp_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0x8f     MOV   d, #i */
extern bool mov_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xaf     MOV   (X)+, A */
extern bool mov_indirect_incremented_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbf     MOV   A, (X)+ */
extern bool mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle);

