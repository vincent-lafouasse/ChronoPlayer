#pragma once

#include <stdint.h>

#define PARSE_U16(lsb, msb) ((uint16_t)(lsb) | ((uint16_t)(msb) << 8))
