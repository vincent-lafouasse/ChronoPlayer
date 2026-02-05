#include "../utest.h/utest.h"

#include "test_helper.h"

// Initial State:
//   PC:  0x7630
//   A:   0x38
//   X:   0x4E
//   Y:   0x7F
//   SP:  0xEC
//   PSW: 0x91
//   RAM: [[30256, 0]]
//
// Final State:
//   PC:  0x7631
//   A:   0x38
//   X:   0x4E
//   Y:   0x7F
//   SP:  0xEC
//   PSW: 0x91
//   RAM: [[30256, 0]]
//
// Bus Accesses:
//   [0]   addr=0x7630, val=0x00, op=read
//   [1]   addr=0x7631, val=None, op=read

static inline struct SPC_State setup_state(const struct CPU_State cpu[static 1],
                                           const struct RamEntry* ram_entries,
                                           size_t n_entries)
{
    struct SPC_State state = {0};

    state.cpu = *cpu;
    state.cpu.instruction_cycle = 1;

    for (size_t i = 0; i < n_entries; i++) {
        const uint16_t addr = ram_entries[i].addr;
        const uint8_t val = ram_entries[i].value;
        state.aram[addr] = val;
    }

    return state;
}

#define SETUP_TEST()               \
    queue = queue_new();           \
    g_bus_trace_userdata = &queue; \
    g_bus_trace_hook = &bus_hook;

#define TEARDOWN_TEST() g_bus_trace_userdata = NULL;

UTEST(InstructionTest, H00_NOP_00_0000)
{
    // ----- data
    const struct CPU_State initialCpu = (struct CPU_State){.pc = 0x7630,
                                                           .a = 0x38,
                                                           .x = 0x4e,
                                                           .y = 0x7f,
                                                           .sp = 0xec,
                                                           .status = 0x91};
    const struct RamEntry initialRam[] = {
        {30256, 0},
    };

    const struct CPU_State finalCpu = (struct CPU_State){.pc = 0x7630,
                                                         .a = 0x38,
                                                         .x = 0x4e,
                                                         .y = 0x7f,
                                                         .sp = 0xec,
                                                         .status = 0x91};
    const struct RamEntry finalRam[] = {
        {30256, 0},
    };

    const struct BusEvent events[] = {
        {.addr = 0x7630, .value = 0x00, .type = IO_READ},
        {.addr = 0x7631, .value = DUMMY, .type = IO_READ},
    };

    // ----- setup
    struct BusEventQueue queue;
    SETUP_TEST();

    const size_t initial_ram_size = sizeof(initialRam) / sizeof(*initialRam);
    struct SPC_State state =
        setup_state(&initialCpu, initialRam, initial_ram_size);

    const size_t final_ram_size = sizeof(finalRam) / sizeof(*finalRam);

    const size_t expected_len =
        sizeof(events) / sizeof(*events);  // one Bus IO per cycle

    // ----- execution
    size_t i = 0;
    char msg[256];
    const size_t msg_size = sizeof(msg) / sizeof(*msg);
    const char* test_name = "00 0000";
    do {
        cpu_tick(&state);

        snprintf(msg, msg_size, "-- %s: Cycle %zu: Missing bus event",
                 test_name, i + 1);
        ASSERT_TRUE_MSG(queue_has(&queue, 1), msg);

        const struct BusEvent* expected = events + i;
        struct BusEvent actual;
        event_pop(&queue, &actual);  // infallible

        snprintf(msg, msg_size,
                 "-- %s: Cycle %zu: Address mismatch - expected "
                 "0x%04X, got 0x%04X",
                 test_name, i + 1, expected->addr, actual.addr);
        ASSERT_TRUE_MSG(expected->addr == actual.addr, msg);

        snprintf(msg, msg_size,
                 "-- %s: Cycle %zu: Type mismatch at 0x%04X - expected "
                 "%s, got %s",
                 test_name, i + 1, actual.addr,
                 expected->type == IO_READ ? "READ" : "WRITE",
                 actual.type == IO_READ ? "READ" : "WRITE");
        ASSERT_TRUE_MSG(expected->type == actual.type, msg);

        if (expected->value != DUMMY) {
            snprintf(msg, msg_size,
                     "-- %s: Cycle %zu: Value mismatch at 0x%04X - "
                     "expected 0x%02X, "
                     "got 0x%02X",
                     test_name, i + 1, actual.addr, (uint8_t)expected->value,
                     (uint8_t)actual.value);
            ASSERT_TRUE_MSG(expected->value == actual.value, msg);
        }

        i++;
    } while (state.cpu.instruction_cycle != 1);

    snprintf(msg, msg_size,
             "-- %s: Instruction len mismatch: expected %zu cycles, "
             "only got %zu",
             test_name, expected_len, i);
    ASSERT_EQ_MSG(expected_len, i, msg);

    // check final CPU
    (void)finalCpu;

    for (size_t i = 0; i < final_ram_size; i++) {
        const uint16_t addr = finalRam[i].addr;
        const uint8_t expected = finalRam[i].value;
        const uint8_t actual = state.aram[addr];

        snprintf(msg, msg_size,
                 "-- %s: Final ram mismatch at address 0x%04x. Expected "
                 "0x%02x "
                 "was 0x%02x.",
                 test_name, addr, expected, actual);
        ASSERT_EQ_MSG(expected, actual, msg);
    }

    TEARDOWN_TEST();
}

UTEST_MAIN()
