#pragma once

#include <stdint.h>

#define PARSE_U16(lsb, msb) ((uint16_t)(lsb) | ((uint16_t)(msb) << 8))
#define MSB_U16(x) ((uint8_t)((x) >> 8))
#define LSB_U16(x) ((uint8_t)((x) & 0xff))

#define BIT(i) (1u << (i))

#define BIT_AT(x, i) (((x) >> (i)) & 1u)

#define BIT_SET(x, i) ((x) |= (uint8_t)BIT(i))
#define BIT_CLEAR(x, i) ((x) &= (uint8_t)~BIT(i))
#define BIT_TOGGLE(x, i) ((x) ^= (uint8_t)BIT(i))

// b is thought of as a bool but could be anything integral
#define BIT_WRITE(x, i, b) \
    ((x) = ((x) & (uint8_t)~BIT(i)) | ((uint8_t)(!!(b)) << (i)))
