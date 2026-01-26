#pragma once

#include <stdint.h>

#define AS_U8(val) ((uint8_t)(val))
#define AS_U16(val) ((uint16_t)(val))

#define PARSE_U16(lsb, msb) (AS_U16(lsb) | (AS_U16(msb) << 8))
#define MSB_U16(x) AS_U8((x) >> 8)
#define LSB_U16(x) AS_U8(x)

#define FLAG_AT(x, m) (!!((x) & (m)))

#define FLAG_SET(x, m) ((x) |= AS_U8(m))
#define FLAG_CLEAR(x, m) ((x) &= ~AS_U8(m))
#define FLAG_TOGGLE(x, m) ((x) ^= AS_U8(m))

#define FLAG_WRITE(x, m, b) \
    ((x) = AS_U8(((x) & ~AS_U8(m)) | ((b) ? AS_U8(m) : 0)))

#define BIT(i) (1u << (i))

#define BIT_AT(x, i) FLAG_AT(x, BIT(i))
#define BIT_SET(x, i) FLAG_SET(x, BIT(i))
#define BIT_CLEAR(x, i) FLAG_CLEAR(x, BIT(i))
#define BIT_TOGGLE(x, i) FLAG_TOGGLE(x, BIT(i))
#define BIT_WRITE(x, i, b) FLAG_WRITE(x, BIT(i), b)
