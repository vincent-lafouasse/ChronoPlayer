#pragma once

#include <stdbool.h>
#include <stdint.h>

#if defined(__GNUC__) || defined(__clang__)
#define UNREACHABLE()            \
    do {                         \
        __builtin_trap();        \
        __builtin_unreachable(); \
    } while (0)
#elif defined(_MSC_VER)
#include <intrin.h>  // for __debugbreak()
#define UNREACHABLE()   \
    do {                \
        __debugbreak(); \
        __assume(0);    \
    } while (0)
#else
#define UNREACHABLE() abort()
#endif

#ifndef TRACE_TRAP
#if defined(__GNUC__) || defined(__clang__)
#define TRACE_TRAP() __builtin_trap()
#elif defined(_MSC_VER)
#define TRACE_TRAP() __debugbreak()
#else
#define TRACE_TRAP() abort()
#endif
#endif

#define AS_U8(val) ((uint8_t)(val))
#define AS_U16(val) ((uint16_t)(val))

static inline uint16_t u16_parse(uint8_t lsb, uint8_t msb)
{
    return AS_U16(lsb) | (AS_U16(msb) << 8);
}

static inline uint16_t u16_read_little_endian(uint8_t bytes[static 2])
{
    return u16_parse(bytes[0], bytes[1]);
}

static inline uint16_t u16_read_big_endian(uint8_t bytes[static 2])
{
    return u16_parse(bytes[1], bytes[0]);
}

static inline uint8_t u16_msb(uint16_t x)
{
    return AS_U8(x >> 8);
}

static inline uint8_t u16_lsb(uint16_t x)
{
    return AS_U8(x);
}

static inline bool flag_at(uint8_t field, uint8_t flag)
{
    return field & flag;
}

static inline void flag_set(uint8_t field[static 1], uint8_t flag)
{
    *field |= flag;
}

static inline void flag_clear(uint8_t field[static 1], uint8_t flag)
{
    *field &= ~flag;
}

static inline void flag_toggle(uint8_t field[static 1], uint8_t flag)
{
    *field ^= flag;
}

static inline void flag_write(uint8_t field[static 1], uint8_t flag, bool b)
{
    if (b) {
        flag_set(field, flag);
    } else {
        flag_clear(field, flag);
    }
}

static inline uint8_t bit(uint8_t i)
{
    return 1u << (i & 7);
}

static inline bool bit_at(uint8_t field, uint8_t i)
{
    return flag_at(field, bit(i));
}

static inline void bit_set(uint8_t field[static 1], uint8_t i)
{
    flag_set(field, bit(i));
}

static inline void bit_clear(uint8_t field[static 1], uint8_t i)
{
    flag_clear(field, bit(i));
}

static inline void bit_toggle(uint8_t field[static 1], uint8_t i)
{
    flag_toggle(field, bit(i));
}

static inline void bit_write(uint8_t field[static 1], uint8_t i, bool b)
{
    flag_write(field, bit(i), b);
}
