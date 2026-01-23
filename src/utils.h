#pragma once

#include <stdint.h>

#define PARSE_U16(lsb, msb) ((uint16_t)(lsb) | ((uint16_t)(msb) << 8))
#define MSB_U16(x) ((uint8_t)((x) >> 8))
#define LSB_U16(x) ((uint8_t)((x) & 0xff))
