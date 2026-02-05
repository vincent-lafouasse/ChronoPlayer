#pragma once

#include <stdio.h>
#include <string.h>

#include "bus_io.h"
#include "cpu.h"
#include "instruction.h"
#include "state.h"

enum IoType {
    IO_READ,
    IO_WRITE,
    IO_WAIT,
};

static inline const char* io_type_repr(enum IoType type)
{
    switch (type) {
        case IO_WRITE:
            return "WRITE";
        case IO_READ:
            return "READ";
        case IO_WAIT:
            return "WAIT";
        default:
            return "Unknown IO operation";
    }
}

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
