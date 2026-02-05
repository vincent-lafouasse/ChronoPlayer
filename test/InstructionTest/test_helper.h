#pragma once

#include <stdio.h>
#include <string.h>

#include "bus_io.h"
#include "cpu.h"
#include "instruction.h"
#include "state.h"

#define I_OK INSTRUCTION_STATUS_DONE
#define I_PENDING INSTRUCTION_STATUS_PENDING
#define I_ERROR INSTRUCTION_STATUS_UNEXPECTED_CYCLE

enum IoType {
    IO_READ,
    IO_WRITE,
};

#define DUMMY -1

struct BusEvent {
    int16_t value;  // Use DUMMY (-1) for dummy reads
    uint16_t addr;
    enum IoType type;
};

#define QUEUE_SIZE 4

struct BusEventQueue {
    struct BusEvent events[QUEUE_SIZE];
    uint32_t head;  // the next position to pop data off of
    uint32_t tail;  // the next position to write data
};

static inline struct BusEventQueue queue_new(void)
{
    return (struct BusEventQueue){
        .events = {0},
        .head = 0,
        .tail = 0,
    };
}

static inline uint32_t queue_len(const struct BusEventQueue queue[static 1])
{
    return queue->tail - queue->head;
}

static inline bool queue_has(const struct BusEventQueue queue[static 1],
                             uint32_t size)
{
    return queue_len(queue) == size;
}

static inline bool event_push(struct BusEventQueue queue[static 1],
                              struct BusEvent event)
{
    if (queue_len(queue) >= QUEUE_SIZE) {
        return false;
    }

    queue->events[queue->tail & (QUEUE_SIZE - 1)] = event;
    queue->tail += 1;
    return true;
}

static inline bool event_pop(struct BusEventQueue queue[static 1],
                             struct BusEvent* event)
{
    if (queue_len(queue) == 0) {
        return false;
    }

    *event = queue->events[queue->head & (QUEUE_SIZE - 1)];
    queue->head += 1;
    return true;
}

static inline void bus_hook(void* userdata,
                            const struct SPC_State state[static 1],
                            uint16_t addr,
                            uint8_t val,
                            bool is_write)
{
    (void)state;
    struct BusEventQueue* queue = (struct BusEventQueue*)userdata;

    const struct BusEvent event = {
        .value = val,
        .addr = addr,
        .type = is_write ? IO_WRITE : IO_READ,
    };

    event_push(queue, event);
}

struct RamEntry {
    uint16_t addr;
    uint8_t value;
};

#define SETUP_TEST()               \
    queue = queue_new();           \
    g_bus_trace_userdata = &queue; \
    g_bus_trace_hook = &bus_hook;

#define TEARDOWN_TEST() g_bus_trace_userdata = NULL;

#define SET_STATE(state, pc__, a__, x__, y__, sp__, psw__) \
    state.cpu.pc = pc__;                                   \
    state.cpu.a = a__;                                     \
    state.cpu.x = x__;                                     \
    state.cpu.y = y__;                                     \
    state.cpu.sp = sp__;                                   \
    state.cpu.status = psw__;                              \
    state.cpu.instruction_cycle = 1;

#define SETUP_RAM(ram_entries)                                          \
    {                                                                   \
        const size_t sz__ = sizeof(ram_entries) / sizeof(*ram_entries); \
        for (size_t i = 0; i < sz__; i++) {                             \
            const uint16_t addr = ram_entries[i].addr;                  \
            const uint8_t value = ram_entries[i].value;                 \
            state.aram[addr] = value;                                   \
        }                                                               \
    }

#define CHECK_RAM(ram_entries, test_name)                                     \
    {                                                                         \
        const size_t sz__ = sizeof(ram_entries) / sizeof(*ram_entries);       \
        for (size_t i = 0; i < sz__; i++) {                                   \
            const uint16_t addr = ram_entries[i].addr;                        \
            const uint8_t expected = ram_entries[i].value;                    \
            const uint8_t actual = state.aram[addr];                          \
            snprintf(msg, sizeof(msg),                                        \
                     "-- %s: Final ram mismatch at address 0x%04x. Expected " \
                     "0x%02x "                                                \
                     "was 0x%02x.",                                           \
                     test_name, addr, expected, actual);                      \
            ASSERT_EQ_MSG(expected, actual, msg);                             \
        }                                                                     \
    }
