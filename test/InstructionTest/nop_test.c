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

UTEST(InstructionTest, H00_NOP_00_0000)
{
    struct BusEventQueue queue;
    SETUP_TEST();

    struct SPC_State state = {0};
    SET_STATE(state, 0x7630, 0x38, 0x4e, 0x7f, 0xec, 0x91);
    const struct RamEntry initialRam[] = {
        {30256, 0},
    };

    struct SPC_State final = {0};
    SET_STATE(final, 0x7631, 0x38, 0x4e, 0x7f, 0xec, 0x91);
    const struct RamEntry finalRam[] = {
        {30256, 0},
    };

    const struct BusEvent events[] = {
        {.addr = 0x7630, .value = 0x00, .type = IO_READ},
        {.addr = 0x7631, .value = DUMMY, .type = IO_READ},
    };
    const size_t expected_len =
        sizeof(events) / sizeof(*events);  // one Bus IO per cycle

    // ------------------------
    SETUP_RAM(initialRam);
    size_t i = 0;
    char msg[256];
    do {
        cpu_tick(&state);

        snprintf(msg, sizeof(msg), "-- Cycle %zu: Missing bus event", i);
        ASSERT_TRUE_MSG(queue_has(&queue, 1), msg);

        struct BusEvent actual;
        event_pop(&queue, &actual);  // infallible

        const struct BusEvent* expected = events + i;

        snprintf(msg, sizeof(msg),
                 "-- Cycle %zu: Address mismatch - expected "
                 "0x%04X, got 0x%04X",
                 i, expected->addr, actual.addr);
        ASSERT_TRUE_MSG(expected->addr == actual.addr, msg);

        snprintf(msg, sizeof(msg),
                 "-- Cycle %zu: Type mismatch at 0x%04X - expected "
                 "%s, got %s",
                 i, actual.addr, expected->type == IO_READ ? "READ" : "WRITE",
                 actual.type == IO_READ ? "READ" : "WRITE");
        ASSERT_TRUE_MSG(expected->type == actual.type, msg);

        if (expected->value != DUMMY) {
            snprintf(msg, sizeof(msg),
                     "-- Cycle %zu: Value mismatch at 0x%04X - "
                     "expected 0x%02X, "
                     "got 0x%02X",
                     i, actual.addr, (uint8_t)expected->value,
                     (uint8_t)actual.value);
            ASSERT_TRUE_MSG(expected->value == actual.value, msg);
        }

        i++;
    } while (state.cpu.instruction_cycle != 1);

    snprintf(msg, sizeof(msg),
             "-- Instruction len mismatch: expected %zu cycles, "
             "only got %zu",
             expected_len, i);
    ASSERT_EQ_MSG(expected_len, i, msg);

    CHECK_RAM(finalRam);

    TEARDOWN_TEST();
}

UTEST_MAIN()
