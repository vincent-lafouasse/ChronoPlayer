#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_7E, _7E_0000) {
    const struct CPU_State initial_cpu = {.pc=0xfe23, .a=0xca, .x=0x38, .y=0x69, .sp=0xc0, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x34}, {.addr=0xfe23, .value=0x7e}, {.addr=0xfe24, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xfe25, .a=0xca, .x=0x38, .y=0x69, .sp=0xc0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x34}, {.addr=0xfe23, .value=0x7e}, {.addr=0xfe24, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe23, .value=0x7e, .type=IO_READ},
        {.addr=0xfe24, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0001) {
    const struct CPU_State initial_cpu = {.pc=0xd124, .a=0xa1, .x=0xb1, .y=0x9e, .sp=0x36, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0xd124, .value=0x7e}, {.addr=0xd125, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xd126, .a=0xa1, .x=0xb1, .y=0x9e, .sp=0x36, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0xd124, .value=0x7e}, {.addr=0xd125, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd124, .value=0x7e, .type=IO_READ},
        {.addr=0xd125, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0002) {
    const struct CPU_State initial_cpu = {.pc=0x64a6, .a=0x50, .x=0xe4, .y=0x5d, .sp=0xb7, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xb3}, {.addr=0x64a6, .value=0x7e}, {.addr=0x64a7, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x64a8, .a=0x50, .x=0xe4, .y=0x5d, .sp=0xb7, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xb3}, {.addr=0x64a6, .value=0x7e}, {.addr=0x64a7, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x64a6, .value=0x7e, .type=IO_READ},
        {.addr=0x64a7, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0004) {
    const struct CPU_State initial_cpu = {.pc=0x2849, .a=0x51, .x=0x29, .y=0xcb, .sp=0x44, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xa6}, {.addr=0x2849, .value=0x7e}, {.addr=0x284a, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x284b, .a=0x51, .x=0x29, .y=0xcb, .sp=0x44, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xa6}, {.addr=0x2849, .value=0x7e}, {.addr=0x284a, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2849, .value=0x7e, .type=IO_READ},
        {.addr=0x284a, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0005) {
    const struct CPU_State initial_cpu = {.pc=0xbf58, .a=0xa4, .x=0x82, .y=0xda, .sp=0x4a, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xa7}, {.addr=0xbf58, .value=0x7e}, {.addr=0xbf59, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xbf5a, .a=0xa4, .x=0x82, .y=0xda, .sp=0x4a, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xa7}, {.addr=0xbf58, .value=0x7e}, {.addr=0xbf59, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf58, .value=0x7e, .type=IO_READ},
        {.addr=0xbf59, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0006) {
    const struct CPU_State initial_cpu = {.pc=0x6745, .a=0x61, .x=0x8a, .y=0xf5, .sp=0x1a, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x8e}, {.addr=0x6745, .value=0x7e}, {.addr=0x6746, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x6747, .a=0x61, .x=0x8a, .y=0xf5, .sp=0x1a, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x8e}, {.addr=0x6745, .value=0x7e}, {.addr=0x6746, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x6745, .value=0x7e, .type=IO_READ},
        {.addr=0x6746, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0007) {
    const struct CPU_State initial_cpu = {.pc=0x3c85, .a=0xee, .x=0x25, .y=0xc7, .sp=0xb7, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x19}, {.addr=0x3c85, .value=0x7e}, {.addr=0x3c86, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x3c87, .a=0xee, .x=0x25, .y=0xc7, .sp=0xb7, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x19}, {.addr=0x3c85, .value=0x7e}, {.addr=0x3c86, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c85, .value=0x7e, .type=IO_READ},
        {.addr=0x3c86, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0008) {
    const struct CPU_State initial_cpu = {.pc=0xc16a, .a=0x32, .x=0x76, .y=0x18, .sp=0x4a, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xf6}, {.addr=0xc16a, .value=0x7e}, {.addr=0xc16b, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xc16c, .a=0x32, .x=0x76, .y=0x18, .sp=0x4a, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xf6}, {.addr=0xc16a, .value=0x7e}, {.addr=0xc16b, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc16a, .value=0x7e, .type=IO_READ},
        {.addr=0xc16b, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0009) {
    const struct CPU_State initial_cpu = {.pc=0xd93d, .a=0x77, .x=0x0d, .y=0x59, .sp=0x28, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x65}, {.addr=0xd93d, .value=0x7e}, {.addr=0xd93e, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xd93f, .a=0x77, .x=0x0d, .y=0x59, .sp=0x28, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x65}, {.addr=0xd93d, .value=0x7e}, {.addr=0xd93e, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xd93d, .value=0x7e, .type=IO_READ},
        {.addr=0xd93e, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000A) {
    const struct CPU_State initial_cpu = {.pc=0x8dfd, .a=0xe0, .x=0x6d, .y=0xd6, .sp=0xc0, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x40}, {.addr=0x8dfd, .value=0x7e}, {.addr=0x8dfe, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x8dff, .a=0xe0, .x=0x6d, .y=0xd6, .sp=0xc0, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x40}, {.addr=0x8dfd, .value=0x7e}, {.addr=0x8dfe, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dfd, .value=0x7e, .type=IO_READ},
        {.addr=0x8dfe, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000B) {
    const struct CPU_State initial_cpu = {.pc=0x735b, .a=0x07, .x=0xa8, .y=0x2b, .sp=0xa5, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x93}, {.addr=0x735b, .value=0x7e}, {.addr=0x735c, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x735d, .a=0x07, .x=0xa8, .y=0x2b, .sp=0xa5, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x93}, {.addr=0x735b, .value=0x7e}, {.addr=0x735c, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x735b, .value=0x7e, .type=IO_READ},
        {.addr=0x735c, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000C) {
    const struct CPU_State initial_cpu = {.pc=0x384e, .a=0xa5, .x=0xec, .y=0x6b, .sp=0xf6, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0xe6}, {.addr=0x384e, .value=0x7e}, {.addr=0x384f, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x3850, .a=0xa5, .x=0xec, .y=0x6b, .sp=0xf6, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0xe6}, {.addr=0x384e, .value=0x7e}, {.addr=0x384f, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x384e, .value=0x7e, .type=IO_READ},
        {.addr=0x384f, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000D) {
    const struct CPU_State initial_cpu = {.pc=0x680b, .a=0xfc, .x=0xe9, .y=0x6e, .sp=0xb2, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x27}, {.addr=0x680b, .value=0x7e}, {.addr=0x680c, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x680d, .a=0xfc, .x=0xe9, .y=0x6e, .sp=0xb2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x27}, {.addr=0x680b, .value=0x7e}, {.addr=0x680c, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x680b, .value=0x7e, .type=IO_READ},
        {.addr=0x680c, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000E) {
    const struct CPU_State initial_cpu = {.pc=0xc826, .a=0xa9, .x=0xfe, .y=0xdd, .sp=0xe2, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x2e}, {.addr=0xc826, .value=0x7e}, {.addr=0xc827, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xc828, .a=0xa9, .x=0xfe, .y=0xdd, .sp=0xe2, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x2e}, {.addr=0xc826, .value=0x7e}, {.addr=0xc827, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc826, .value=0x7e, .type=IO_READ},
        {.addr=0xc827, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_000F) {
    const struct CPU_State initial_cpu = {.pc=0x068b, .a=0x16, .x=0x11, .y=0x1a, .sp=0x96, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x5b}, {.addr=0x068b, .value=0x7e}, {.addr=0x068c, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x068d, .a=0x16, .x=0x11, .y=0x1a, .sp=0x96, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x5b}, {.addr=0x068b, .value=0x7e}, {.addr=0x068c, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x068b, .value=0x7e, .type=IO_READ},
        {.addr=0x068c, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0010) {
    const struct CPU_State initial_cpu = {.pc=0x16d8, .a=0xaf, .x=0x00, .y=0x38, .sp=0x91, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xc8}, {.addr=0x16d8, .value=0x7e}, {.addr=0x16d9, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x16da, .a=0xaf, .x=0x00, .y=0x38, .sp=0x91, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xc8}, {.addr=0x16d8, .value=0x7e}, {.addr=0x16d9, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x16d8, .value=0x7e, .type=IO_READ},
        {.addr=0x16d9, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6af6, .a=0xc3, .x=0xc4, .y=0x30, .sp=0x38, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x4c}, {.addr=0x6af6, .value=0x7e}, {.addr=0x6af7, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x6af8, .a=0xc3, .x=0xc4, .y=0x30, .sp=0x38, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x4c}, {.addr=0x6af6, .value=0x7e}, {.addr=0x6af7, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x6af6, .value=0x7e, .type=IO_READ},
        {.addr=0x6af7, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0013) {
    const struct CPU_State initial_cpu = {.pc=0xca28, .a=0x0e, .x=0x25, .y=0xc7, .sp=0x7c, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xec}, {.addr=0xca28, .value=0x7e}, {.addr=0xca29, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xca2a, .a=0x0e, .x=0x25, .y=0xc7, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xec}, {.addr=0xca28, .value=0x7e}, {.addr=0xca29, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xca28, .value=0x7e, .type=IO_READ},
        {.addr=0xca29, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0014) {
    const struct CPU_State initial_cpu = {.pc=0x0aba, .a=0x07, .x=0x9f, .y=0x93, .sp=0x2c, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xbe}, {.addr=0x0aba, .value=0x7e}, {.addr=0x0abb, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x0abc, .a=0x07, .x=0x9f, .y=0x93, .sp=0x2c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xbe}, {.addr=0x0aba, .value=0x7e}, {.addr=0x0abb, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aba, .value=0x7e, .type=IO_READ},
        {.addr=0x0abb, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0015) {
    const struct CPU_State initial_cpu = {.pc=0x4e25, .a=0x00, .x=0x1e, .y=0xca, .sp=0x26, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x63}, {.addr=0x4e25, .value=0x7e}, {.addr=0x4e26, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4e27, .a=0x00, .x=0x1e, .y=0xca, .sp=0x26, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x63}, {.addr=0x4e25, .value=0x7e}, {.addr=0x4e26, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e25, .value=0x7e, .type=IO_READ},
        {.addr=0x4e26, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0016) {
    const struct CPU_State initial_cpu = {.pc=0xf378, .a=0xd4, .x=0xfe, .y=0x88, .sp=0x6d, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xfc}, {.addr=0xf378, .value=0x7e}, {.addr=0xf379, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xf37a, .a=0xd4, .x=0xfe, .y=0x88, .sp=0x6d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xfc}, {.addr=0xf378, .value=0x7e}, {.addr=0xf379, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf378, .value=0x7e, .type=IO_READ},
        {.addr=0xf379, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0017) {
    const struct CPU_State initial_cpu = {.pc=0x5b1c, .a=0x8d, .x=0x91, .y=0xa8, .sp=0xd5, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x3d}, {.addr=0x5b1c, .value=0x7e}, {.addr=0x5b1d, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x5b1e, .a=0x8d, .x=0x91, .y=0xa8, .sp=0xd5, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x3d}, {.addr=0x5b1c, .value=0x7e}, {.addr=0x5b1d, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b1c, .value=0x7e, .type=IO_READ},
        {.addr=0x5b1d, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0018) {
    const struct CPU_State initial_cpu = {.pc=0x4e95, .a=0x6b, .x=0xb9, .y=0x5a, .sp=0xe4, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xc1}, {.addr=0x4e95, .value=0x7e}, {.addr=0x4e96, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x6b, .x=0xb9, .y=0x5a, .sp=0xe4, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xc1}, {.addr=0x4e95, .value=0x7e}, {.addr=0x4e96, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e95, .value=0x7e, .type=IO_READ},
        {.addr=0x4e96, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0019) {
    const struct CPU_State initial_cpu = {.pc=0x2886, .a=0xd6, .x=0x9d, .y=0x84, .sp=0xe1, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xbd}, {.addr=0x2886, .value=0x7e}, {.addr=0x2887, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x2888, .a=0xd6, .x=0x9d, .y=0x84, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xbd}, {.addr=0x2886, .value=0x7e}, {.addr=0x2887, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2886, .value=0x7e, .type=IO_READ},
        {.addr=0x2887, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001A) {
    const struct CPU_State initial_cpu = {.pc=0x31ed, .a=0x52, .x=0x8d, .y=0x76, .sp=0xbe, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xac}, {.addr=0x31ed, .value=0x7e}, {.addr=0x31ee, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x31ef, .a=0x52, .x=0x8d, .y=0x76, .sp=0xbe, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xac}, {.addr=0x31ed, .value=0x7e}, {.addr=0x31ee, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x31ed, .value=0x7e, .type=IO_READ},
        {.addr=0x31ee, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001B) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0xe1, .x=0xee, .y=0x8e, .sp=0x88, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x55}, {.addr=0x7ae6, .value=0x7e}, {.addr=0x7ae7, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x7ae8, .a=0xe1, .x=0xee, .y=0x8e, .sp=0x88, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x55}, {.addr=0x7ae6, .value=0x7e}, {.addr=0x7ae7, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0x7e, .type=IO_READ},
        {.addr=0x7ae7, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001C) {
    const struct CPU_State initial_cpu = {.pc=0x598e, .a=0xd4, .x=0x5c, .y=0xed, .sp=0x2d, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xf0}, {.addr=0x598e, .value=0x7e}, {.addr=0x598f, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x5990, .a=0xd4, .x=0x5c, .y=0xed, .sp=0x2d, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xf0}, {.addr=0x598e, .value=0x7e}, {.addr=0x598f, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x598e, .value=0x7e, .type=IO_READ},
        {.addr=0x598f, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4949, .a=0x47, .x=0x22, .y=0x9a, .sp=0x5a, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x8e}, {.addr=0x4949, .value=0x7e}, {.addr=0x494a, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x494b, .a=0x47, .x=0x22, .y=0x9a, .sp=0x5a, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x8e}, {.addr=0x4949, .value=0x7e}, {.addr=0x494a, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x4949, .value=0x7e, .type=IO_READ},
        {.addr=0x494a, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001E) {
    const struct CPU_State initial_cpu = {.pc=0x29b3, .a=0x09, .x=0x02, .y=0xf6, .sp=0x96, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xe5}, {.addr=0x29b3, .value=0x7e}, {.addr=0x29b4, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x29b5, .a=0x09, .x=0x02, .y=0xf6, .sp=0x96, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xe5}, {.addr=0x29b3, .value=0x7e}, {.addr=0x29b4, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x29b3, .value=0x7e, .type=IO_READ},
        {.addr=0x29b4, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4d71, .a=0xcb, .x=0xd8, .y=0xc0, .sp=0x74, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xb2}, {.addr=0x4d71, .value=0x7e}, {.addr=0x4d72, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x4d73, .a=0xcb, .x=0xd8, .y=0xc0, .sp=0x74, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xb2}, {.addr=0x4d71, .value=0x7e}, {.addr=0x4d72, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d71, .value=0x7e, .type=IO_READ},
        {.addr=0x4d72, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0020) {
    const struct CPU_State initial_cpu = {.pc=0x6c13, .a=0x1a, .x=0x39, .y=0xd3, .sp=0x28, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xb6}, {.addr=0x6c13, .value=0x7e}, {.addr=0x6c14, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6c15, .a=0x1a, .x=0x39, .y=0xd3, .sp=0x28, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xb6}, {.addr=0x6c13, .value=0x7e}, {.addr=0x6c14, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c13, .value=0x7e, .type=IO_READ},
        {.addr=0x6c14, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0021) {
    const struct CPU_State initial_cpu = {.pc=0x8903, .a=0x84, .x=0xd9, .y=0x16, .sp=0xe1, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x93}, {.addr=0x8903, .value=0x7e}, {.addr=0x8904, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x8905, .a=0x84, .x=0xd9, .y=0x16, .sp=0xe1, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x93}, {.addr=0x8903, .value=0x7e}, {.addr=0x8904, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x8903, .value=0x7e, .type=IO_READ},
        {.addr=0x8904, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0022) {
    const struct CPU_State initial_cpu = {.pc=0x7fbd, .a=0xcc, .x=0xc2, .y=0x7a, .sp=0x71, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x3d}, {.addr=0x7fbd, .value=0x7e}, {.addr=0x7fbe, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7fbf, .a=0xcc, .x=0xc2, .y=0x7a, .sp=0x71, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x3d}, {.addr=0x7fbd, .value=0x7e}, {.addr=0x7fbe, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fbd, .value=0x7e, .type=IO_READ},
        {.addr=0x7fbe, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5bee, .a=0x77, .x=0xaf, .y=0x4d, .sp=0xe9, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x02}, {.addr=0x5bee, .value=0x7e}, {.addr=0x5bef, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x5bf0, .a=0x77, .x=0xaf, .y=0x4d, .sp=0xe9, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x02}, {.addr=0x5bee, .value=0x7e}, {.addr=0x5bef, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bee, .value=0x7e, .type=IO_READ},
        {.addr=0x5bef, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0024) {
    const struct CPU_State initial_cpu = {.pc=0x73be, .a=0xe4, .x=0xb5, .y=0x9d, .sp=0xab, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x19}, {.addr=0x73be, .value=0x7e}, {.addr=0x73bf, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x73c0, .a=0xe4, .x=0xb5, .y=0x9d, .sp=0xab, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x19}, {.addr=0x73be, .value=0x7e}, {.addr=0x73bf, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x73be, .value=0x7e, .type=IO_READ},
        {.addr=0x73bf, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0025) {
    const struct CPU_State initial_cpu = {.pc=0xe43a, .a=0xbc, .x=0xfb, .y=0x88, .sp=0x8c, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x85}, {.addr=0xe43a, .value=0x7e}, {.addr=0xe43b, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xe43c, .a=0xbc, .x=0xfb, .y=0x88, .sp=0x8c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x85}, {.addr=0xe43a, .value=0x7e}, {.addr=0xe43b, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe43a, .value=0x7e, .type=IO_READ},
        {.addr=0xe43b, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0026) {
    const struct CPU_State initial_cpu = {.pc=0x3d0e, .a=0x57, .x=0xb5, .y=0x61, .sp=0x80, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x49}, {.addr=0x3d0e, .value=0x7e}, {.addr=0x3d0f, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x3d10, .a=0x57, .x=0xb5, .y=0x61, .sp=0x80, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x49}, {.addr=0x3d0e, .value=0x7e}, {.addr=0x3d0f, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d0e, .value=0x7e, .type=IO_READ},
        {.addr=0x3d0f, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcc38, .a=0xb5, .x=0x4d, .y=0x5e, .sp=0x56, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x39}, {.addr=0xcc38, .value=0x7e}, {.addr=0xcc39, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xcc3a, .a=0xb5, .x=0x4d, .y=0x5e, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x39}, {.addr=0xcc38, .value=0x7e}, {.addr=0xcc39, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc38, .value=0x7e, .type=IO_READ},
        {.addr=0xcc39, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0028) {
    const struct CPU_State initial_cpu = {.pc=0xc339, .a=0x0f, .x=0x1d, .y=0x4d, .sp=0xd1, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x5a}, {.addr=0xc339, .value=0x7e}, {.addr=0xc33a, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0xc33b, .a=0x0f, .x=0x1d, .y=0x4d, .sp=0xd1, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x5a}, {.addr=0xc339, .value=0x7e}, {.addr=0xc33a, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc339, .value=0x7e, .type=IO_READ},
        {.addr=0xc33a, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0029) {
    const struct CPU_State initial_cpu = {.pc=0x5bdc, .a=0xf2, .x=0x02, .y=0x7d, .sp=0xa2, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x85}, {.addr=0x5bdc, .value=0x7e}, {.addr=0x5bdd, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x5bde, .a=0xf2, .x=0x02, .y=0x7d, .sp=0xa2, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x85}, {.addr=0x5bdc, .value=0x7e}, {.addr=0x5bdd, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bdc, .value=0x7e, .type=IO_READ},
        {.addr=0x5bdd, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002A) {
    const struct CPU_State initial_cpu = {.pc=0xac4b, .a=0x93, .x=0x76, .y=0xd8, .sp=0x6d, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x77}, {.addr=0xac4b, .value=0x7e}, {.addr=0xac4c, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xac4d, .a=0x93, .x=0x76, .y=0xd8, .sp=0x6d, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x77}, {.addr=0xac4b, .value=0x7e}, {.addr=0xac4c, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xac4b, .value=0x7e, .type=IO_READ},
        {.addr=0xac4c, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002B) {
    const struct CPU_State initial_cpu = {.pc=0x7c88, .a=0x31, .x=0xe7, .y=0x04, .sp=0xa1, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x43}, {.addr=0x7c88, .value=0x7e}, {.addr=0x7c89, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x7c8a, .a=0x31, .x=0xe7, .y=0x04, .sp=0xa1, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x43}, {.addr=0x7c88, .value=0x7e}, {.addr=0x7c89, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c88, .value=0x7e, .type=IO_READ},
        {.addr=0x7c89, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002C) {
    const struct CPU_State initial_cpu = {.pc=0x94cf, .a=0x3c, .x=0xe7, .y=0x7b, .sp=0x2c, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0xde}, {.addr=0x94cf, .value=0x7e}, {.addr=0x94d0, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x94d1, .a=0x3c, .x=0xe7, .y=0x7b, .sp=0x2c, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0xde}, {.addr=0x94cf, .value=0x7e}, {.addr=0x94d0, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x94cf, .value=0x7e, .type=IO_READ},
        {.addr=0x94d0, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002D) {
    const struct CPU_State initial_cpu = {.pc=0x0cf8, .a=0x36, .x=0x0f, .y=0xb4, .sp=0x08, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x2e}, {.addr=0x0cf8, .value=0x7e}, {.addr=0x0cf9, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x0cfa, .a=0x36, .x=0x0f, .y=0xb4, .sp=0x08, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x2e}, {.addr=0x0cf8, .value=0x7e}, {.addr=0x0cf9, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cf8, .value=0x7e, .type=IO_READ},
        {.addr=0x0cf9, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002E) {
    const struct CPU_State initial_cpu = {.pc=0xae93, .a=0xb1, .x=0x0d, .y=0x99, .sp=0xd3, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x59}, {.addr=0xae93, .value=0x7e}, {.addr=0xae94, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xae95, .a=0xb1, .x=0x0d, .y=0x99, .sp=0xd3, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x59}, {.addr=0xae93, .value=0x7e}, {.addr=0xae94, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xae93, .value=0x7e, .type=IO_READ},
        {.addr=0xae94, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_002F) {
    const struct CPU_State initial_cpu = {.pc=0xd7f6, .a=0xf2, .x=0xa6, .y=0xda, .sp=0xd6, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x49}, {.addr=0xd7f6, .value=0x7e}, {.addr=0xd7f7, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xd7f8, .a=0xf2, .x=0xa6, .y=0xda, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x49}, {.addr=0xd7f6, .value=0x7e}, {.addr=0xd7f7, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7f6, .value=0x7e, .type=IO_READ},
        {.addr=0xd7f7, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0030) {
    const struct CPU_State initial_cpu = {.pc=0xea09, .a=0x33, .x=0x20, .y=0x87, .sp=0x88, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0xd6}, {.addr=0xea09, .value=0x7e}, {.addr=0xea0a, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xea0b, .a=0x33, .x=0x20, .y=0x87, .sp=0x88, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0xd6}, {.addr=0xea09, .value=0x7e}, {.addr=0xea0a, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xea09, .value=0x7e, .type=IO_READ},
        {.addr=0xea0a, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0031) {
    const struct CPU_State initial_cpu = {.pc=0x2b32, .a=0xdf, .x=0xfe, .y=0xc9, .sp=0x9b, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xc3}, {.addr=0x2b32, .value=0x7e}, {.addr=0x2b33, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x2b34, .a=0xdf, .x=0xfe, .y=0xc9, .sp=0x9b, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xc3}, {.addr=0x2b32, .value=0x7e}, {.addr=0x2b33, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b32, .value=0x7e, .type=IO_READ},
        {.addr=0x2b33, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc13d, .a=0x95, .x=0x71, .y=0xf0, .sp=0x80, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x7b}, {.addr=0xc13d, .value=0x7e}, {.addr=0xc13e, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xc13f, .a=0x95, .x=0x71, .y=0xf0, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x7b}, {.addr=0xc13d, .value=0x7e}, {.addr=0xc13e, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc13d, .value=0x7e, .type=IO_READ},
        {.addr=0xc13e, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0033) {
    const struct CPU_State initial_cpu = {.pc=0x3b03, .a=0xad, .x=0x42, .y=0x76, .sp=0x18, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x1f}, {.addr=0x3b03, .value=0x7e}, {.addr=0x3b04, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x3b05, .a=0xad, .x=0x42, .y=0x76, .sp=0x18, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x1f}, {.addr=0x3b03, .value=0x7e}, {.addr=0x3b04, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b03, .value=0x7e, .type=IO_READ},
        {.addr=0x3b04, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0034) {
    const struct CPU_State initial_cpu = {.pc=0x499c, .a=0xc2, .x=0xca, .y=0x89, .sp=0xca, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x79}, {.addr=0x499c, .value=0x7e}, {.addr=0x499d, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x499e, .a=0xc2, .x=0xca, .y=0x89, .sp=0xca, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x79}, {.addr=0x499c, .value=0x7e}, {.addr=0x499d, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x499c, .value=0x7e, .type=IO_READ},
        {.addr=0x499d, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0b91, .a=0xa9, .x=0xcd, .y=0x5e, .sp=0x9f, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x2a}, {.addr=0x0b91, .value=0x7e}, {.addr=0x0b92, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x0b93, .a=0xa9, .x=0xcd, .y=0x5e, .sp=0x9f, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x2a}, {.addr=0x0b91, .value=0x7e}, {.addr=0x0b92, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b91, .value=0x7e, .type=IO_READ},
        {.addr=0x0b92, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0036) {
    const struct CPU_State initial_cpu = {.pc=0x07e3, .a=0xa1, .x=0x60, .y=0x74, .sp=0xdb, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xf7}, {.addr=0x07e3, .value=0x7e}, {.addr=0x07e4, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x07e5, .a=0xa1, .x=0x60, .y=0x74, .sp=0xdb, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xf7}, {.addr=0x07e3, .value=0x7e}, {.addr=0x07e4, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x07e3, .value=0x7e, .type=IO_READ},
        {.addr=0x07e4, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0037) {
    const struct CPU_State initial_cpu = {.pc=0xe49c, .a=0x1c, .x=0x3b, .y=0x2d, .sp=0xbc, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x3e}, {.addr=0xe49c, .value=0x7e}, {.addr=0xe49d, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xe49e, .a=0x1c, .x=0x3b, .y=0x2d, .sp=0xbc, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x3e}, {.addr=0xe49c, .value=0x7e}, {.addr=0xe49d, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe49c, .value=0x7e, .type=IO_READ},
        {.addr=0xe49d, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0038) {
    const struct CPU_State initial_cpu = {.pc=0xd53d, .a=0xd8, .x=0x27, .y=0x68, .sp=0x0f, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x9a}, {.addr=0xd53d, .value=0x7e}, {.addr=0xd53e, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xd53f, .a=0xd8, .x=0x27, .y=0x68, .sp=0x0f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x9a}, {.addr=0xd53d, .value=0x7e}, {.addr=0xd53e, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xd53d, .value=0x7e, .type=IO_READ},
        {.addr=0xd53e, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0039) {
    const struct CPU_State initial_cpu = {.pc=0x6a49, .a=0x7f, .x=0x90, .y=0x01, .sp=0x58, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x2e}, {.addr=0x6a49, .value=0x7e}, {.addr=0x6a4a, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x6a4b, .a=0x7f, .x=0x90, .y=0x01, .sp=0x58, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x2e}, {.addr=0x6a49, .value=0x7e}, {.addr=0x6a4a, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a49, .value=0x7e, .type=IO_READ},
        {.addr=0x6a4a, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003A) {
    const struct CPU_State initial_cpu = {.pc=0xb492, .a=0x15, .x=0x1e, .y=0xe4, .sp=0x94, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x27}, {.addr=0xb492, .value=0x7e}, {.addr=0xb493, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xb494, .a=0x15, .x=0x1e, .y=0xe4, .sp=0x94, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x27}, {.addr=0xb492, .value=0x7e}, {.addr=0xb493, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xb492, .value=0x7e, .type=IO_READ},
        {.addr=0xb493, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003B) {
    const struct CPU_State initial_cpu = {.pc=0xc916, .a=0x20, .x=0xde, .y=0xb2, .sp=0x1d, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xc2}, {.addr=0xc916, .value=0x7e}, {.addr=0xc917, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xc918, .a=0x20, .x=0xde, .y=0xb2, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xc2}, {.addr=0xc916, .value=0x7e}, {.addr=0xc917, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xc916, .value=0x7e, .type=IO_READ},
        {.addr=0xc917, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003C) {
    const struct CPU_State initial_cpu = {.pc=0xae08, .a=0xcb, .x=0x76, .y=0xd1, .sp=0xaa, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x9f}, {.addr=0xae08, .value=0x7e}, {.addr=0xae09, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xae0a, .a=0xcb, .x=0x76, .y=0xd1, .sp=0xaa, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x9f}, {.addr=0xae08, .value=0x7e}, {.addr=0xae09, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xae08, .value=0x7e, .type=IO_READ},
        {.addr=0xae09, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003D) {
    const struct CPU_State initial_cpu = {.pc=0x2d4b, .a=0x14, .x=0x39, .y=0x91, .sp=0x33, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xb4}, {.addr=0x2d4b, .value=0x7e}, {.addr=0x2d4c, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x2d4d, .a=0x14, .x=0x39, .y=0x91, .sp=0x33, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xb4}, {.addr=0x2d4b, .value=0x7e}, {.addr=0x2d4c, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d4b, .value=0x7e, .type=IO_READ},
        {.addr=0x2d4c, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003E) {
    const struct CPU_State initial_cpu = {.pc=0x05b2, .a=0x87, .x=0xbd, .y=0xdf, .sp=0x80, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x90}, {.addr=0x05b2, .value=0x7e}, {.addr=0x05b3, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x05b4, .a=0x87, .x=0xbd, .y=0xdf, .sp=0x80, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x90}, {.addr=0x05b2, .value=0x7e}, {.addr=0x05b3, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x05b2, .value=0x7e, .type=IO_READ},
        {.addr=0x05b3, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_003F) {
    const struct CPU_State initial_cpu = {.pc=0x8bea, .a=0xb3, .x=0xe3, .y=0x49, .sp=0x6a, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x42}, {.addr=0x8bea, .value=0x7e}, {.addr=0x8beb, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x8bec, .a=0xb3, .x=0xe3, .y=0x49, .sp=0x6a, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x42}, {.addr=0x8bea, .value=0x7e}, {.addr=0x8beb, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bea, .value=0x7e, .type=IO_READ},
        {.addr=0x8beb, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0040) {
    const struct CPU_State initial_cpu = {.pc=0xd6c8, .a=0x9d, .x=0xeb, .y=0x9d, .sp=0xd8, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xf9}, {.addr=0xd6c8, .value=0x7e}, {.addr=0xd6c9, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xd6ca, .a=0x9d, .x=0xeb, .y=0x9d, .sp=0xd8, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xf9}, {.addr=0xd6c8, .value=0x7e}, {.addr=0xd6c9, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6c8, .value=0x7e, .type=IO_READ},
        {.addr=0xd6c9, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0041) {
    const struct CPU_State initial_cpu = {.pc=0x8ed0, .a=0x45, .x=0x69, .y=0xd9, .sp=0x80, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xe0}, {.addr=0x8ed0, .value=0x7e}, {.addr=0x8ed1, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x8ed2, .a=0x45, .x=0x69, .y=0xd9, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xe0}, {.addr=0x8ed0, .value=0x7e}, {.addr=0x8ed1, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ed0, .value=0x7e, .type=IO_READ},
        {.addr=0x8ed1, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0043) {
    const struct CPU_State initial_cpu = {.pc=0x7168, .a=0xb1, .x=0x5f, .y=0xaa, .sp=0x09, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x87}, {.addr=0x7168, .value=0x7e}, {.addr=0x7169, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x716a, .a=0xb1, .x=0x5f, .y=0xaa, .sp=0x09, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x87}, {.addr=0x7168, .value=0x7e}, {.addr=0x7169, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x7168, .value=0x7e, .type=IO_READ},
        {.addr=0x7169, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0044) {
    const struct CPU_State initial_cpu = {.pc=0xd243, .a=0x3b, .x=0x1e, .y=0xcc, .sp=0xef, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xce}, {.addr=0xd243, .value=0x7e}, {.addr=0xd244, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xd245, .a=0x3b, .x=0x1e, .y=0xcc, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xce}, {.addr=0xd243, .value=0x7e}, {.addr=0xd244, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd243, .value=0x7e, .type=IO_READ},
        {.addr=0xd244, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0045) {
    const struct CPU_State initial_cpu = {.pc=0x0088, .a=0x2b, .x=0x59, .y=0x06, .sp=0xde, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x7e}, {.addr=0x0089, .value=0x36}, {.addr=0x0136, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x008a, .a=0x2b, .x=0x59, .y=0x06, .sp=0xde, .status=0x33};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x7e}, {.addr=0x0089, .value=0x36}, {.addr=0x0136, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x0088, .value=0x7e, .type=IO_READ},
        {.addr=0x0089, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0046) {
    const struct CPU_State initial_cpu = {.pc=0xa369, .a=0x20, .x=0x80, .y=0x05, .sp=0x97, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xa6}, {.addr=0xa369, .value=0x7e}, {.addr=0xa36a, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xa36b, .a=0x20, .x=0x80, .y=0x05, .sp=0x97, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xa6}, {.addr=0xa369, .value=0x7e}, {.addr=0xa36a, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xa369, .value=0x7e, .type=IO_READ},
        {.addr=0xa36a, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0047) {
    const struct CPU_State initial_cpu = {.pc=0xa5d6, .a=0x61, .x=0x30, .y=0x9c, .sp=0x26, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xa7}, {.addr=0xa5d6, .value=0x7e}, {.addr=0xa5d7, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xa5d8, .a=0x61, .x=0x30, .y=0x9c, .sp=0x26, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xa7}, {.addr=0xa5d6, .value=0x7e}, {.addr=0xa5d7, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5d6, .value=0x7e, .type=IO_READ},
        {.addr=0xa5d7, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0048) {
    const struct CPU_State initial_cpu = {.pc=0x8cc6, .a=0x78, .x=0x23, .y=0x2b, .sp=0xf1, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x00}, {.addr=0x8cc6, .value=0x7e}, {.addr=0x8cc7, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x8cc8, .a=0x78, .x=0x23, .y=0x2b, .sp=0xf1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x00}, {.addr=0x8cc6, .value=0x7e}, {.addr=0x8cc7, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cc6, .value=0x7e, .type=IO_READ},
        {.addr=0x8cc7, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004A) {
    const struct CPU_State initial_cpu = {.pc=0x1dac, .a=0x95, .x=0x14, .y=0x95, .sp=0xcb, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xd7}, {.addr=0x1dac, .value=0x7e}, {.addr=0x1dad, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x1dae, .a=0x95, .x=0x14, .y=0x95, .sp=0xcb, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xd7}, {.addr=0x1dac, .value=0x7e}, {.addr=0x1dad, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dac, .value=0x7e, .type=IO_READ},
        {.addr=0x1dad, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004B) {
    const struct CPU_State initial_cpu = {.pc=0x3144, .a=0x91, .x=0xfb, .y=0x5d, .sp=0xc8, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xe2}, {.addr=0x3144, .value=0x7e}, {.addr=0x3145, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x3146, .a=0x91, .x=0xfb, .y=0x5d, .sp=0xc8, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xe2}, {.addr=0x3144, .value=0x7e}, {.addr=0x3145, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x3144, .value=0x7e, .type=IO_READ},
        {.addr=0x3145, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004C) {
    const struct CPU_State initial_cpu = {.pc=0x479f, .a=0xe6, .x=0xcb, .y=0xac, .sp=0xf5, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x82}, {.addr=0x479f, .value=0x7e}, {.addr=0x47a0, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x47a1, .a=0xe6, .x=0xcb, .y=0xac, .sp=0xf5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x82}, {.addr=0x479f, .value=0x7e}, {.addr=0x47a0, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x479f, .value=0x7e, .type=IO_READ},
        {.addr=0x47a0, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004D) {
    const struct CPU_State initial_cpu = {.pc=0xd179, .a=0x6e, .x=0xde, .y=0x08, .sp=0x87, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x00}, {.addr=0xd179, .value=0x7e}, {.addr=0xd17a, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xd17b, .a=0x6e, .x=0xde, .y=0x08, .sp=0x87, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x00}, {.addr=0xd179, .value=0x7e}, {.addr=0xd17a, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xd179, .value=0x7e, .type=IO_READ},
        {.addr=0xd17a, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3250, .a=0xc7, .x=0x02, .y=0x94, .sp=0xb9, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x74}, {.addr=0x3250, .value=0x7e}, {.addr=0x3251, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x3252, .a=0xc7, .x=0x02, .y=0x94, .sp=0xb9, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x74}, {.addr=0x3250, .value=0x7e}, {.addr=0x3251, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3250, .value=0x7e, .type=IO_READ},
        {.addr=0x3251, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_004F) {
    const struct CPU_State initial_cpu = {.pc=0x3e1a, .a=0x6d, .x=0x43, .y=0x21, .sp=0xdd, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x39}, {.addr=0x3e1a, .value=0x7e}, {.addr=0x3e1b, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x3e1c, .a=0x6d, .x=0x43, .y=0x21, .sp=0xdd, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x39}, {.addr=0x3e1a, .value=0x7e}, {.addr=0x3e1b, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e1a, .value=0x7e, .type=IO_READ},
        {.addr=0x3e1b, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5c4b, .a=0xed, .x=0x8c, .y=0x38, .sp=0x44, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x89}, {.addr=0x5c4b, .value=0x7e}, {.addr=0x5c4c, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x5c4d, .a=0xed, .x=0x8c, .y=0x38, .sp=0x44, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x89}, {.addr=0x5c4b, .value=0x7e}, {.addr=0x5c4c, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c4b, .value=0x7e, .type=IO_READ},
        {.addr=0x5c4c, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0051) {
    const struct CPU_State initial_cpu = {.pc=0xcbd9, .a=0x7e, .x=0x6d, .y=0x80, .sp=0x9e, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x49}, {.addr=0xcbd9, .value=0x7e}, {.addr=0xcbda, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xcbdb, .a=0x7e, .x=0x6d, .y=0x80, .sp=0x9e, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x49}, {.addr=0xcbd9, .value=0x7e}, {.addr=0xcbda, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbd9, .value=0x7e, .type=IO_READ},
        {.addr=0xcbda, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0052) {
    const struct CPU_State initial_cpu = {.pc=0xa626, .a=0xf4, .x=0xb1, .y=0x9a, .sp=0xa8, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x82}, {.addr=0xa626, .value=0x7e}, {.addr=0xa627, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xa628, .a=0xf4, .x=0xb1, .y=0x9a, .sp=0xa8, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x82}, {.addr=0xa626, .value=0x7e}, {.addr=0xa627, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa626, .value=0x7e, .type=IO_READ},
        {.addr=0xa627, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0053) {
    const struct CPU_State initial_cpu = {.pc=0x799f, .a=0x5b, .x=0x0b, .y=0xfb, .sp=0x52, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x4a}, {.addr=0x799f, .value=0x7e}, {.addr=0x79a0, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x79a1, .a=0x5b, .x=0x0b, .y=0xfb, .sp=0x52, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x4a}, {.addr=0x799f, .value=0x7e}, {.addr=0x79a0, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x799f, .value=0x7e, .type=IO_READ},
        {.addr=0x79a0, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0054) {
    const struct CPU_State initial_cpu = {.pc=0x93ca, .a=0x23, .x=0x0b, .y=0xad, .sp=0x17, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x63}, {.addr=0x93ca, .value=0x7e}, {.addr=0x93cb, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x93cc, .a=0x23, .x=0x0b, .y=0xad, .sp=0x17, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x63}, {.addr=0x93ca, .value=0x7e}, {.addr=0x93cb, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x93ca, .value=0x7e, .type=IO_READ},
        {.addr=0x93cb, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0055) {
    const struct CPU_State initial_cpu = {.pc=0xeff5, .a=0xef, .x=0x24, .y=0xe7, .sp=0x31, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xf6}, {.addr=0xeff5, .value=0x7e}, {.addr=0xeff6, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xeff7, .a=0xef, .x=0x24, .y=0xe7, .sp=0x31, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xf6}, {.addr=0xeff5, .value=0x7e}, {.addr=0xeff6, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xeff5, .value=0x7e, .type=IO_READ},
        {.addr=0xeff6, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0056) {
    const struct CPU_State initial_cpu = {.pc=0x5e13, .a=0x45, .x=0x28, .y=0xc9, .sp=0xae, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x0d}, {.addr=0x5e13, .value=0x7e}, {.addr=0x5e14, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x5e15, .a=0x45, .x=0x28, .y=0xc9, .sp=0xae, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x0d}, {.addr=0x5e13, .value=0x7e}, {.addr=0x5e14, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e13, .value=0x7e, .type=IO_READ},
        {.addr=0x5e14, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0105, .a=0x84, .x=0xed, .y=0x2f, .sp=0xdd, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x2f}, {.addr=0x0105, .value=0x7e}, {.addr=0x0106, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x0107, .a=0x84, .x=0xed, .y=0x2f, .sp=0xdd, .status=0x4f};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x2f}, {.addr=0x0105, .value=0x7e}, {.addr=0x0106, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0105, .value=0x7e, .type=IO_READ},
        {.addr=0x0106, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0058) {
    const struct CPU_State initial_cpu = {.pc=0x1f8c, .a=0x1c, .x=0x15, .y=0xf2, .sp=0xa7, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x82}, {.addr=0x1f8c, .value=0x7e}, {.addr=0x1f8d, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x1f8e, .a=0x1c, .x=0x15, .y=0xf2, .sp=0xa7, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x82}, {.addr=0x1f8c, .value=0x7e}, {.addr=0x1f8d, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f8c, .value=0x7e, .type=IO_READ},
        {.addr=0x1f8d, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0059) {
    const struct CPU_State initial_cpu = {.pc=0xd3a6, .a=0x08, .x=0xd1, .y=0xd1, .sp=0xea, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x32}, {.addr=0xd3a6, .value=0x7e}, {.addr=0xd3a7, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xd3a8, .a=0x08, .x=0xd1, .y=0xd1, .sp=0xea, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x32}, {.addr=0xd3a6, .value=0x7e}, {.addr=0xd3a7, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3a6, .value=0x7e, .type=IO_READ},
        {.addr=0xd3a7, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005A) {
    const struct CPU_State initial_cpu = {.pc=0xaab3, .a=0xae, .x=0x08, .y=0xba, .sp=0x12, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x7d}, {.addr=0xaab3, .value=0x7e}, {.addr=0xaab4, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xaab5, .a=0xae, .x=0x08, .y=0xba, .sp=0x12, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x7d}, {.addr=0xaab3, .value=0x7e}, {.addr=0xaab4, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xaab3, .value=0x7e, .type=IO_READ},
        {.addr=0xaab4, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005B) {
    const struct CPU_State initial_cpu = {.pc=0x81ac, .a=0x1d, .x=0xc5, .y=0x6c, .sp=0x67, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xf6}, {.addr=0x81ac, .value=0x7e}, {.addr=0x81ad, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x81ae, .a=0x1d, .x=0xc5, .y=0x6c, .sp=0x67, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xf6}, {.addr=0x81ac, .value=0x7e}, {.addr=0x81ad, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x81ac, .value=0x7e, .type=IO_READ},
        {.addr=0x81ad, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005C) {
    const struct CPU_State initial_cpu = {.pc=0x3887, .a=0xc9, .x=0xa1, .y=0xef, .sp=0xe5, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x61}, {.addr=0x3887, .value=0x7e}, {.addr=0x3888, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x3889, .a=0xc9, .x=0xa1, .y=0xef, .sp=0xe5, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x61}, {.addr=0x3887, .value=0x7e}, {.addr=0x3888, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3887, .value=0x7e, .type=IO_READ},
        {.addr=0x3888, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005D) {
    const struct CPU_State initial_cpu = {.pc=0x8b7d, .a=0x36, .x=0xb9, .y=0x67, .sp=0x4f, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xbc}, {.addr=0x8b7d, .value=0x7e}, {.addr=0x8b7e, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x8b7f, .a=0x36, .x=0xb9, .y=0x67, .sp=0x4f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xbc}, {.addr=0x8b7d, .value=0x7e}, {.addr=0x8b7e, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b7d, .value=0x7e, .type=IO_READ},
        {.addr=0x8b7e, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005E) {
    const struct CPU_State initial_cpu = {.pc=0xce3f, .a=0x30, .x=0x1a, .y=0xf1, .sp=0x9b, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xf4}, {.addr=0xce3f, .value=0x7e}, {.addr=0xce40, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xce41, .a=0x30, .x=0x1a, .y=0xf1, .sp=0x9b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xf4}, {.addr=0xce3f, .value=0x7e}, {.addr=0xce40, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xce3f, .value=0x7e, .type=IO_READ},
        {.addr=0xce40, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_005F) {
    const struct CPU_State initial_cpu = {.pc=0x4d96, .a=0x8c, .x=0xb5, .y=0x04, .sp=0x66, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xea}, {.addr=0x4d96, .value=0x7e}, {.addr=0x4d97, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x4d98, .a=0x8c, .x=0xb5, .y=0x04, .sp=0x66, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xea}, {.addr=0x4d96, .value=0x7e}, {.addr=0x4d97, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d96, .value=0x7e, .type=IO_READ},
        {.addr=0x4d97, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0060) {
    const struct CPU_State initial_cpu = {.pc=0x6d10, .a=0x68, .x=0x0f, .y=0xb9, .sp=0xab, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xc2}, {.addr=0x6d10, .value=0x7e}, {.addr=0x6d11, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x6d12, .a=0x68, .x=0x0f, .y=0xb9, .sp=0xab, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xc2}, {.addr=0x6d10, .value=0x7e}, {.addr=0x6d11, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d10, .value=0x7e, .type=IO_READ},
        {.addr=0x6d11, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0061) {
    const struct CPU_State initial_cpu = {.pc=0x0837, .a=0xa5, .x=0x6d, .y=0x58, .sp=0x95, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x0e}, {.addr=0x0837, .value=0x7e}, {.addr=0x0838, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x0839, .a=0xa5, .x=0x6d, .y=0x58, .sp=0x95, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x0e}, {.addr=0x0837, .value=0x7e}, {.addr=0x0838, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0837, .value=0x7e, .type=IO_READ},
        {.addr=0x0838, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0062) {
    const struct CPU_State initial_cpu = {.pc=0x998b, .a=0x75, .x=0xa6, .y=0x43, .sp=0xb8, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xbe}, {.addr=0x998b, .value=0x7e}, {.addr=0x998c, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x998d, .a=0x75, .x=0xa6, .y=0x43, .sp=0xb8, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xbe}, {.addr=0x998b, .value=0x7e}, {.addr=0x998c, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x998b, .value=0x7e, .type=IO_READ},
        {.addr=0x998c, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0063) {
    const struct CPU_State initial_cpu = {.pc=0x82f9, .a=0x40, .x=0x08, .y=0xd3, .sp=0xbe, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x3e}, {.addr=0x82f9, .value=0x7e}, {.addr=0x82fa, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x82fb, .a=0x40, .x=0x08, .y=0xd3, .sp=0xbe, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x3e}, {.addr=0x82f9, .value=0x7e}, {.addr=0x82fa, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x82f9, .value=0x7e, .type=IO_READ},
        {.addr=0x82fa, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0064) {
    const struct CPU_State initial_cpu = {.pc=0xa033, .a=0xe2, .x=0x4e, .y=0xb7, .sp=0x4b, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x9c}, {.addr=0xa033, .value=0x7e}, {.addr=0xa034, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xa035, .a=0xe2, .x=0x4e, .y=0xb7, .sp=0x4b, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x9c}, {.addr=0xa033, .value=0x7e}, {.addr=0xa034, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa033, .value=0x7e, .type=IO_READ},
        {.addr=0xa034, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0065) {
    const struct CPU_State initial_cpu = {.pc=0xaf71, .a=0x27, .x=0xbb, .y=0xb2, .sp=0xc9, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x96}, {.addr=0xaf71, .value=0x7e}, {.addr=0xaf72, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xaf73, .a=0x27, .x=0xbb, .y=0xb2, .sp=0xc9, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x96}, {.addr=0xaf71, .value=0x7e}, {.addr=0xaf72, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf71, .value=0x7e, .type=IO_READ},
        {.addr=0xaf72, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0066) {
    const struct CPU_State initial_cpu = {.pc=0x1198, .a=0xa0, .x=0xec, .y=0xb2, .sp=0x91, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xcc}, {.addr=0x1198, .value=0x7e}, {.addr=0x1199, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x119a, .a=0xa0, .x=0xec, .y=0xb2, .sp=0x91, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xcc}, {.addr=0x1198, .value=0x7e}, {.addr=0x1199, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x1198, .value=0x7e, .type=IO_READ},
        {.addr=0x1199, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0067) {
    const struct CPU_State initial_cpu = {.pc=0xeacd, .a=0x59, .x=0xc8, .y=0x91, .sp=0xe9, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x39}, {.addr=0xeacd, .value=0x7e}, {.addr=0xeace, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xeacf, .a=0x59, .x=0xc8, .y=0x91, .sp=0xe9, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x39}, {.addr=0xeacd, .value=0x7e}, {.addr=0xeace, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeacd, .value=0x7e, .type=IO_READ},
        {.addr=0xeace, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0069) {
    const struct CPU_State initial_cpu = {.pc=0x8c32, .a=0x6e, .x=0xad, .y=0xa0, .sp=0xb4, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x37}, {.addr=0x8c32, .value=0x7e}, {.addr=0x8c33, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x8c34, .a=0x6e, .x=0xad, .y=0xa0, .sp=0xb4, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x37}, {.addr=0x8c32, .value=0x7e}, {.addr=0x8c33, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c32, .value=0x7e, .type=IO_READ},
        {.addr=0x8c33, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5a1c, .a=0x6a, .x=0x5f, .y=0x8a, .sp=0x9a, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xd3}, {.addr=0x5a1c, .value=0x7e}, {.addr=0x5a1d, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x5a1e, .a=0x6a, .x=0x5f, .y=0x8a, .sp=0x9a, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xd3}, {.addr=0x5a1c, .value=0x7e}, {.addr=0x5a1d, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a1c, .value=0x7e, .type=IO_READ},
        {.addr=0x5a1d, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006B) {
    const struct CPU_State initial_cpu = {.pc=0x54db, .a=0x82, .x=0x9a, .y=0xd8, .sp=0xca, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x08}, {.addr=0x54db, .value=0x7e}, {.addr=0x54dc, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x54dd, .a=0x82, .x=0x9a, .y=0xd8, .sp=0xca, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x08}, {.addr=0x54db, .value=0x7e}, {.addr=0x54dc, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x54db, .value=0x7e, .type=IO_READ},
        {.addr=0x54dc, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006C) {
    const struct CPU_State initial_cpu = {.pc=0xaead, .a=0x4b, .x=0x1e, .y=0x8c, .sp=0x16, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xc4}, {.addr=0xaead, .value=0x7e}, {.addr=0xaeae, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xaeaf, .a=0x4b, .x=0x1e, .y=0x8c, .sp=0x16, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xc4}, {.addr=0xaead, .value=0x7e}, {.addr=0xaeae, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xaead, .value=0x7e, .type=IO_READ},
        {.addr=0xaeae, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006D) {
    const struct CPU_State initial_cpu = {.pc=0x1e48, .a=0xf1, .x=0x84, .y=0x31, .sp=0xb7, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x87}, {.addr=0x1e48, .value=0x7e}, {.addr=0x1e49, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x1e4a, .a=0xf1, .x=0x84, .y=0x31, .sp=0xb7, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x87}, {.addr=0x1e48, .value=0x7e}, {.addr=0x1e49, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e48, .value=0x7e, .type=IO_READ},
        {.addr=0x1e49, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006E) {
    const struct CPU_State initial_cpu = {.pc=0x7fd3, .a=0xb9, .x=0x88, .y=0x65, .sp=0xea, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x1f}, {.addr=0x7fd3, .value=0x7e}, {.addr=0x7fd4, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x7fd5, .a=0xb9, .x=0x88, .y=0x65, .sp=0xea, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x1f}, {.addr=0x7fd3, .value=0x7e}, {.addr=0x7fd4, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fd3, .value=0x7e, .type=IO_READ},
        {.addr=0x7fd4, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_006F) {
    const struct CPU_State initial_cpu = {.pc=0xc2b0, .a=0xfe, .x=0xc1, .y=0x44, .sp=0xf5, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0xa4}, {.addr=0xc2b0, .value=0x7e}, {.addr=0xc2b1, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xc2b2, .a=0xfe, .x=0xc1, .y=0x44, .sp=0xf5, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0xa4}, {.addr=0xc2b0, .value=0x7e}, {.addr=0xc2b1, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2b0, .value=0x7e, .type=IO_READ},
        {.addr=0xc2b1, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0070) {
    const struct CPU_State initial_cpu = {.pc=0x9e63, .a=0x24, .x=0x60, .y=0x6d, .sp=0xbe, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xb9}, {.addr=0x9e63, .value=0x7e}, {.addr=0x9e64, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9e65, .a=0x24, .x=0x60, .y=0x6d, .sp=0xbe, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xb9}, {.addr=0x9e63, .value=0x7e}, {.addr=0x9e64, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e63, .value=0x7e, .type=IO_READ},
        {.addr=0x9e64, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0071) {
    const struct CPU_State initial_cpu = {.pc=0xafbd, .a=0xf7, .x=0x8f, .y=0x02, .sp=0xd1, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xa9}, {.addr=0xafbd, .value=0x7e}, {.addr=0xafbe, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xafbf, .a=0xf7, .x=0x8f, .y=0x02, .sp=0xd1, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xa9}, {.addr=0xafbd, .value=0x7e}, {.addr=0xafbe, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xafbd, .value=0x7e, .type=IO_READ},
        {.addr=0xafbe, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0072) {
    const struct CPU_State initial_cpu = {.pc=0x4dfe, .a=0x7f, .x=0x6d, .y=0x8f, .sp=0xc4, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x49}, {.addr=0x4dfe, .value=0x7e}, {.addr=0x4dff, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x4e00, .a=0x7f, .x=0x6d, .y=0x8f, .sp=0xc4, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x49}, {.addr=0x4dfe, .value=0x7e}, {.addr=0x4dff, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dfe, .value=0x7e, .type=IO_READ},
        {.addr=0x4dff, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0073) {
    const struct CPU_State initial_cpu = {.pc=0xde1c, .a=0x22, .x=0xca, .y=0xff, .sp=0x67, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0xe2}, {.addr=0xde1c, .value=0x7e}, {.addr=0xde1d, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xde1e, .a=0x22, .x=0xca, .y=0xff, .sp=0x67, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0xe2}, {.addr=0xde1c, .value=0x7e}, {.addr=0xde1d, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xde1c, .value=0x7e, .type=IO_READ},
        {.addr=0xde1d, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0074) {
    const struct CPU_State initial_cpu = {.pc=0x669f, .a=0xe0, .x=0x5e, .y=0x48, .sp=0xc7, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x12}, {.addr=0x669f, .value=0x7e}, {.addr=0x66a0, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x66a1, .a=0xe0, .x=0x5e, .y=0x48, .sp=0xc7, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x12}, {.addr=0x669f, .value=0x7e}, {.addr=0x66a0, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x669f, .value=0x7e, .type=IO_READ},
        {.addr=0x66a0, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0075) {
    const struct CPU_State initial_cpu = {.pc=0xbcf7, .a=0x7a, .x=0x54, .y=0x89, .sp=0x9f, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xcc}, {.addr=0xbcf7, .value=0x7e}, {.addr=0xbcf8, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xbcf9, .a=0x7a, .x=0x54, .y=0x89, .sp=0x9f, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xcc}, {.addr=0xbcf7, .value=0x7e}, {.addr=0xbcf8, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcf7, .value=0x7e, .type=IO_READ},
        {.addr=0xbcf8, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0076) {
    const struct CPU_State initial_cpu = {.pc=0x004c, .a=0xbe, .x=0xcf, .y=0x01, .sp=0x56, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xac}, {.addr=0x004c, .value=0x7e}, {.addr=0x004d, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x004e, .a=0xbe, .x=0xcf, .y=0x01, .sp=0x56, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xac}, {.addr=0x004c, .value=0x7e}, {.addr=0x004d, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x004c, .value=0x7e, .type=IO_READ},
        {.addr=0x004d, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0077) {
    const struct CPU_State initial_cpu = {.pc=0xb29c, .a=0x61, .x=0xbd, .y=0x71, .sp=0xfd, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x27}, {.addr=0xb29c, .value=0x7e}, {.addr=0xb29d, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xb29e, .a=0x61, .x=0xbd, .y=0x71, .sp=0xfd, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x27}, {.addr=0xb29c, .value=0x7e}, {.addr=0xb29d, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb29c, .value=0x7e, .type=IO_READ},
        {.addr=0xb29d, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0078) {
    const struct CPU_State initial_cpu = {.pc=0x1abf, .a=0xee, .x=0x78, .y=0x05, .sp=0x67, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x85}, {.addr=0x1abf, .value=0x7e}, {.addr=0x1ac0, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x1ac1, .a=0xee, .x=0x78, .y=0x05, .sp=0x67, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x85}, {.addr=0x1abf, .value=0x7e}, {.addr=0x1ac0, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1abf, .value=0x7e, .type=IO_READ},
        {.addr=0x1ac0, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0079) {
    const struct CPU_State initial_cpu = {.pc=0x80f8, .a=0xf7, .x=0xb7, .y=0xc1, .sp=0xa0, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x8a}, {.addr=0x80f8, .value=0x7e}, {.addr=0x80f9, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x80fa, .a=0xf7, .x=0xb7, .y=0xc1, .sp=0xa0, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x8a}, {.addr=0x80f8, .value=0x7e}, {.addr=0x80f9, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x80f8, .value=0x7e, .type=IO_READ},
        {.addr=0x80f9, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007A) {
    const struct CPU_State initial_cpu = {.pc=0x36a6, .a=0x77, .x=0x4d, .y=0x0a, .sp=0x0e, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x33}, {.addr=0x36a6, .value=0x7e}, {.addr=0x36a7, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x36a8, .a=0x77, .x=0x4d, .y=0x0a, .sp=0x0e, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x33}, {.addr=0x36a6, .value=0x7e}, {.addr=0x36a7, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x36a6, .value=0x7e, .type=IO_READ},
        {.addr=0x36a7, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007B) {
    const struct CPU_State initial_cpu = {.pc=0xcc67, .a=0xa5, .x=0x6d, .y=0x82, .sp=0xa8, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xd2}, {.addr=0xcc67, .value=0x7e}, {.addr=0xcc68, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xcc69, .a=0xa5, .x=0x6d, .y=0x82, .sp=0xa8, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xd2}, {.addr=0xcc67, .value=0x7e}, {.addr=0xcc68, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc67, .value=0x7e, .type=IO_READ},
        {.addr=0xcc68, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007C) {
    const struct CPU_State initial_cpu = {.pc=0x8a8d, .a=0x9c, .x=0xd2, .y=0xf6, .sp=0x97, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x3b}, {.addr=0x8a8d, .value=0x7e}, {.addr=0x8a8e, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x8a8f, .a=0x9c, .x=0xd2, .y=0xf6, .sp=0x97, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x3b}, {.addr=0x8a8d, .value=0x7e}, {.addr=0x8a8e, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a8d, .value=0x7e, .type=IO_READ},
        {.addr=0x8a8e, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007D) {
    const struct CPU_State initial_cpu = {.pc=0x8b2a, .a=0xe2, .x=0x4b, .y=0xd5, .sp=0xc9, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xe1}, {.addr=0x8b2a, .value=0x7e}, {.addr=0x8b2b, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x8b2c, .a=0xe2, .x=0x4b, .y=0xd5, .sp=0xc9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xe1}, {.addr=0x8b2a, .value=0x7e}, {.addr=0x8b2b, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b2a, .value=0x7e, .type=IO_READ},
        {.addr=0x8b2b, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007E) {
    const struct CPU_State initial_cpu = {.pc=0x1f70, .a=0x56, .x=0x64, .y=0x0f, .sp=0x61, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xf2}, {.addr=0x1f70, .value=0x7e}, {.addr=0x1f71, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x1f72, .a=0x56, .x=0x64, .y=0x0f, .sp=0x61, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xf2}, {.addr=0x1f70, .value=0x7e}, {.addr=0x1f71, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f70, .value=0x7e, .type=IO_READ},
        {.addr=0x1f71, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_007F) {
    const struct CPU_State initial_cpu = {.pc=0xc35a, .a=0x9c, .x=0x30, .y=0x67, .sp=0xc7, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xea}, {.addr=0xc35a, .value=0x7e}, {.addr=0xc35b, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xc35c, .a=0x9c, .x=0x30, .y=0x67, .sp=0xc7, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xea}, {.addr=0xc35a, .value=0x7e}, {.addr=0xc35b, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xc35a, .value=0x7e, .type=IO_READ},
        {.addr=0xc35b, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0080) {
    const struct CPU_State initial_cpu = {.pc=0x54f1, .a=0x52, .x=0x8a, .y=0xc6, .sp=0xf7, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xb6}, {.addr=0x54f1, .value=0x7e}, {.addr=0x54f2, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x54f3, .a=0x52, .x=0x8a, .y=0xc6, .sp=0xf7, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xb6}, {.addr=0x54f1, .value=0x7e}, {.addr=0x54f2, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x54f1, .value=0x7e, .type=IO_READ},
        {.addr=0x54f2, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0081) {
    const struct CPU_State initial_cpu = {.pc=0x5ff2, .a=0x65, .x=0xe7, .y=0xfd, .sp=0x33, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xd0}, {.addr=0x5ff2, .value=0x7e}, {.addr=0x5ff3, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x5ff4, .a=0x65, .x=0xe7, .y=0xfd, .sp=0x33, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xd0}, {.addr=0x5ff2, .value=0x7e}, {.addr=0x5ff3, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ff2, .value=0x7e, .type=IO_READ},
        {.addr=0x5ff3, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0082) {
    const struct CPU_State initial_cpu = {.pc=0x28b1, .a=0xc7, .x=0x60, .y=0x67, .sp=0x1a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x95}, {.addr=0x28b1, .value=0x7e}, {.addr=0x28b2, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x28b3, .a=0xc7, .x=0x60, .y=0x67, .sp=0x1a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x95}, {.addr=0x28b1, .value=0x7e}, {.addr=0x28b2, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x28b1, .value=0x7e, .type=IO_READ},
        {.addr=0x28b2, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0083) {
    const struct CPU_State initial_cpu = {.pc=0xa2d2, .a=0x6c, .x=0x22, .y=0x5f, .sp=0x81, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0xc2}, {.addr=0xa2d2, .value=0x7e}, {.addr=0xa2d3, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xa2d4, .a=0x6c, .x=0x22, .y=0x5f, .sp=0x81, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0xc2}, {.addr=0xa2d2, .value=0x7e}, {.addr=0xa2d3, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2d2, .value=0x7e, .type=IO_READ},
        {.addr=0xa2d3, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0084) {
    const struct CPU_State initial_cpu = {.pc=0x583f, .a=0x47, .x=0x9a, .y=0x42, .sp=0x0d, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xbd}, {.addr=0x583f, .value=0x7e}, {.addr=0x5840, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x5841, .a=0x47, .x=0x9a, .y=0x42, .sp=0x0d, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xbd}, {.addr=0x583f, .value=0x7e}, {.addr=0x5840, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x583f, .value=0x7e, .type=IO_READ},
        {.addr=0x5840, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0085) {
    const struct CPU_State initial_cpu = {.pc=0x017c, .a=0xa5, .x=0x20, .y=0x52, .sp=0x19, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x7e}, {.addr=0x017d, .value=0xa5}, {.addr=0x01a5, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x017e, .a=0xa5, .x=0x20, .y=0x52, .sp=0x19, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x7e}, {.addr=0x017d, .value=0xa5}, {.addr=0x01a5, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x017c, .value=0x7e, .type=IO_READ},
        {.addr=0x017d, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0086) {
    const struct CPU_State initial_cpu = {.pc=0x22b6, .a=0xab, .x=0x9d, .y=0x7d, .sp=0x1f, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x7e}, {.addr=0x22b6, .value=0x7e}, {.addr=0x22b7, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x22b8, .a=0xab, .x=0x9d, .y=0x7d, .sp=0x1f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x7e}, {.addr=0x22b6, .value=0x7e}, {.addr=0x22b7, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x22b6, .value=0x7e, .type=IO_READ},
        {.addr=0x22b7, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0087) {
    const struct CPU_State initial_cpu = {.pc=0x44c8, .a=0x44, .x=0xab, .y=0xd2, .sp=0xfc, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x58}, {.addr=0x44c8, .value=0x7e}, {.addr=0x44c9, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x44ca, .a=0x44, .x=0xab, .y=0xd2, .sp=0xfc, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x58}, {.addr=0x44c8, .value=0x7e}, {.addr=0x44c9, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x44c8, .value=0x7e, .type=IO_READ},
        {.addr=0x44c9, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0088) {
    const struct CPU_State initial_cpu = {.pc=0x6748, .a=0x34, .x=0xe7, .y=0x67, .sp=0xbd, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x28}, {.addr=0x6748, .value=0x7e}, {.addr=0x6749, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x674a, .a=0x34, .x=0xe7, .y=0x67, .sp=0xbd, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x28}, {.addr=0x6748, .value=0x7e}, {.addr=0x6749, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6748, .value=0x7e, .type=IO_READ},
        {.addr=0x6749, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf495, .a=0x22, .x=0x5a, .y=0x64, .sp=0x3e, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xa3}, {.addr=0xf495, .value=0x7e}, {.addr=0xf496, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xf497, .a=0x22, .x=0x5a, .y=0x64, .sp=0x3e, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xa3}, {.addr=0xf495, .value=0x7e}, {.addr=0xf496, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xf495, .value=0x7e, .type=IO_READ},
        {.addr=0xf496, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008A) {
    const struct CPU_State initial_cpu = {.pc=0x5cbe, .a=0xbb, .x=0xef, .y=0xd4, .sp=0x8e, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x1d}, {.addr=0x5cbe, .value=0x7e}, {.addr=0x5cbf, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x5cc0, .a=0xbb, .x=0xef, .y=0xd4, .sp=0x8e, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x1d}, {.addr=0x5cbe, .value=0x7e}, {.addr=0x5cbf, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cbe, .value=0x7e, .type=IO_READ},
        {.addr=0x5cbf, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008B) {
    const struct CPU_State initial_cpu = {.pc=0xaf76, .a=0xa6, .x=0xcf, .y=0x14, .sp=0xb2, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xf2}, {.addr=0xaf76, .value=0x7e}, {.addr=0xaf77, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xaf78, .a=0xa6, .x=0xcf, .y=0x14, .sp=0xb2, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xf2}, {.addr=0xaf76, .value=0x7e}, {.addr=0xaf77, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf76, .value=0x7e, .type=IO_READ},
        {.addr=0xaf77, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008C) {
    const struct CPU_State initial_cpu = {.pc=0x07b8, .a=0x31, .x=0x3d, .y=0x24, .sp=0x9d, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xb6}, {.addr=0x07b8, .value=0x7e}, {.addr=0x07b9, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x07ba, .a=0x31, .x=0x3d, .y=0x24, .sp=0x9d, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xb6}, {.addr=0x07b8, .value=0x7e}, {.addr=0x07b9, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x07b8, .value=0x7e, .type=IO_READ},
        {.addr=0x07b9, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008D) {
    const struct CPU_State initial_cpu = {.pc=0x68ab, .a=0xdd, .x=0x79, .y=0xcc, .sp=0x65, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x1a}, {.addr=0x68ab, .value=0x7e}, {.addr=0x68ac, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x68ad, .a=0xdd, .x=0x79, .y=0xcc, .sp=0x65, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x1a}, {.addr=0x68ab, .value=0x7e}, {.addr=0x68ac, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x68ab, .value=0x7e, .type=IO_READ},
        {.addr=0x68ac, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1750, .a=0x2f, .x=0x0b, .y=0x18, .sp=0x77, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xa5}, {.addr=0x1750, .value=0x7e}, {.addr=0x1751, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x1752, .a=0x2f, .x=0x0b, .y=0x18, .sp=0x77, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xa5}, {.addr=0x1750, .value=0x7e}, {.addr=0x1751, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x1750, .value=0x7e, .type=IO_READ},
        {.addr=0x1751, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_008F) {
    const struct CPU_State initial_cpu = {.pc=0xa321, .a=0x04, .x=0x17, .y=0xd4, .sp=0xcd, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x13}, {.addr=0xa321, .value=0x7e}, {.addr=0xa322, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xa323, .a=0x04, .x=0x17, .y=0xd4, .sp=0xcd, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x13}, {.addr=0xa321, .value=0x7e}, {.addr=0xa322, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xa321, .value=0x7e, .type=IO_READ},
        {.addr=0xa322, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0090) {
    const struct CPU_State initial_cpu = {.pc=0x7409, .a=0xca, .x=0xe7, .y=0x87, .sp=0x25, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xa5}, {.addr=0x7409, .value=0x7e}, {.addr=0x740a, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x740b, .a=0xca, .x=0xe7, .y=0x87, .sp=0x25, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xa5}, {.addr=0x7409, .value=0x7e}, {.addr=0x740a, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7409, .value=0x7e, .type=IO_READ},
        {.addr=0x740a, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0091) {
    const struct CPU_State initial_cpu = {.pc=0x97a7, .a=0x4a, .x=0x99, .y=0xd8, .sp=0x8f, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xa5}, {.addr=0x97a7, .value=0x7e}, {.addr=0x97a8, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x97a9, .a=0x4a, .x=0x99, .y=0xd8, .sp=0x8f, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xa5}, {.addr=0x97a7, .value=0x7e}, {.addr=0x97a8, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x97a7, .value=0x7e, .type=IO_READ},
        {.addr=0x97a8, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0092) {
    const struct CPU_State initial_cpu = {.pc=0x9cf3, .a=0xc5, .x=0x09, .y=0x3e, .sp=0xda, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x17}, {.addr=0x9cf3, .value=0x7e}, {.addr=0x9cf4, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x9cf5, .a=0xc5, .x=0x09, .y=0x3e, .sp=0xda, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x17}, {.addr=0x9cf3, .value=0x7e}, {.addr=0x9cf4, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cf3, .value=0x7e, .type=IO_READ},
        {.addr=0x9cf4, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0093) {
    const struct CPU_State initial_cpu = {.pc=0x77a9, .a=0xa7, .x=0x42, .y=0x4b, .sp=0xad, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x7b}, {.addr=0x77a9, .value=0x7e}, {.addr=0x77aa, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x77ab, .a=0xa7, .x=0x42, .y=0x4b, .sp=0xad, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x7b}, {.addr=0x77a9, .value=0x7e}, {.addr=0x77aa, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x77a9, .value=0x7e, .type=IO_READ},
        {.addr=0x77aa, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0094) {
    const struct CPU_State initial_cpu = {.pc=0x00bb, .a=0xb3, .x=0x00, .y=0xec, .sp=0xac, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x7e}, {.addr=0x00bc, .value=0x5c}, {.addr=0x015c, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x00bd, .a=0xb3, .x=0x00, .y=0xec, .sp=0xac, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x7e}, {.addr=0x00bc, .value=0x5c}, {.addr=0x015c, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x00bb, .value=0x7e, .type=IO_READ},
        {.addr=0x00bc, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0095) {
    const struct CPU_State initial_cpu = {.pc=0x7001, .a=0xdb, .x=0x6e, .y=0xd0, .sp=0x83, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xe7}, {.addr=0x7001, .value=0x7e}, {.addr=0x7002, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x7003, .a=0xdb, .x=0x6e, .y=0xd0, .sp=0x83, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xe7}, {.addr=0x7001, .value=0x7e}, {.addr=0x7002, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x7001, .value=0x7e, .type=IO_READ},
        {.addr=0x7002, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0096) {
    const struct CPU_State initial_cpu = {.pc=0x4aed, .a=0x3f, .x=0x64, .y=0x5a, .sp=0x2f, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x44}, {.addr=0x4aed, .value=0x7e}, {.addr=0x4aee, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x4aef, .a=0x3f, .x=0x64, .y=0x5a, .sp=0x2f, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x44}, {.addr=0x4aed, .value=0x7e}, {.addr=0x4aee, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aed, .value=0x7e, .type=IO_READ},
        {.addr=0x4aee, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0097) {
    const struct CPU_State initial_cpu = {.pc=0xea6f, .a=0x7a, .x=0xe0, .y=0x25, .sp=0x8a, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xe6}, {.addr=0xea6f, .value=0x7e}, {.addr=0xea70, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xea71, .a=0x7a, .x=0xe0, .y=0x25, .sp=0x8a, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xe6}, {.addr=0xea6f, .value=0x7e}, {.addr=0xea70, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xea6f, .value=0x7e, .type=IO_READ},
        {.addr=0xea70, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0099) {
    const struct CPU_State initial_cpu = {.pc=0x48ac, .a=0xa2, .x=0xad, .y=0x4d, .sp=0x2a, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xbf}, {.addr=0x48ac, .value=0x7e}, {.addr=0x48ad, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x48ae, .a=0xa2, .x=0xad, .y=0x4d, .sp=0x2a, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xbf}, {.addr=0x48ac, .value=0x7e}, {.addr=0x48ad, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x48ac, .value=0x7e, .type=IO_READ},
        {.addr=0x48ad, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_009A) {
    const struct CPU_State initial_cpu = {.pc=0x7789, .a=0x72, .x=0x2f, .y=0x83, .sp=0xde, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xb0}, {.addr=0x7789, .value=0x7e}, {.addr=0x778a, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x778b, .a=0x72, .x=0x2f, .y=0x83, .sp=0xde, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xb0}, {.addr=0x7789, .value=0x7e}, {.addr=0x778a, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x7789, .value=0x7e, .type=IO_READ},
        {.addr=0x778a, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_009C) {
    const struct CPU_State initial_cpu = {.pc=0xeb79, .a=0x6b, .x=0x3a, .y=0x00, .sp=0x5c, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x36}, {.addr=0xeb79, .value=0x7e}, {.addr=0xeb7a, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xeb7b, .a=0x6b, .x=0x3a, .y=0x00, .sp=0x5c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x36}, {.addr=0xeb79, .value=0x7e}, {.addr=0xeb7a, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb79, .value=0x7e, .type=IO_READ},
        {.addr=0xeb7a, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_009D) {
    const struct CPU_State initial_cpu = {.pc=0xb94e, .a=0x4f, .x=0x46, .y=0xab, .sp=0x09, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x7b}, {.addr=0xb94e, .value=0x7e}, {.addr=0xb94f, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xb950, .a=0x4f, .x=0x46, .y=0xab, .sp=0x09, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x7b}, {.addr=0xb94e, .value=0x7e}, {.addr=0xb94f, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb94e, .value=0x7e, .type=IO_READ},
        {.addr=0xb94f, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_009E) {
    const struct CPU_State initial_cpu = {.pc=0xf792, .a=0xb9, .x=0xf2, .y=0xfe, .sp=0x56, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xc7}, {.addr=0xf792, .value=0x7e}, {.addr=0xf793, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xf794, .a=0xb9, .x=0xf2, .y=0xfe, .sp=0x56, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xc7}, {.addr=0xf792, .value=0x7e}, {.addr=0xf793, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf792, .value=0x7e, .type=IO_READ},
        {.addr=0xf793, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x11d9, .a=0x6d, .x=0x2a, .y=0x03, .sp=0x24, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x9e}, {.addr=0x11d9, .value=0x7e}, {.addr=0x11da, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x11db, .a=0x6d, .x=0x2a, .y=0x03, .sp=0x24, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x9e}, {.addr=0x11d9, .value=0x7e}, {.addr=0x11da, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x11d9, .value=0x7e, .type=IO_READ},
        {.addr=0x11da, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xe4ca, .a=0xc3, .x=0x5f, .y=0x26, .sp=0x18, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x97}, {.addr=0xe4ca, .value=0x7e}, {.addr=0xe4cb, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xe4cc, .a=0xc3, .x=0x5f, .y=0x26, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x97}, {.addr=0xe4ca, .value=0x7e}, {.addr=0xe4cb, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4ca, .value=0x7e, .type=IO_READ},
        {.addr=0xe4cb, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x8936, .a=0x83, .x=0x63, .y=0x06, .sp=0x00, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x73}, {.addr=0x8936, .value=0x7e}, {.addr=0x8937, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x8938, .a=0x83, .x=0x63, .y=0x06, .sp=0x00, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x73}, {.addr=0x8936, .value=0x7e}, {.addr=0x8937, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8936, .value=0x7e, .type=IO_READ},
        {.addr=0x8937, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x24f7, .a=0x83, .x=0x41, .y=0xcb, .sp=0xd2, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x75}, {.addr=0x24f7, .value=0x7e}, {.addr=0x24f8, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x24f9, .a=0x83, .x=0x41, .y=0xcb, .sp=0xd2, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x75}, {.addr=0x24f7, .value=0x7e}, {.addr=0x24f8, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x24f7, .value=0x7e, .type=IO_READ},
        {.addr=0x24f8, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xdd81, .a=0x96, .x=0x76, .y=0xed, .sp=0x2c, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x00}, {.addr=0xdd81, .value=0x7e}, {.addr=0xdd82, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xdd83, .a=0x96, .x=0x76, .y=0xed, .sp=0x2c, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x00}, {.addr=0xdd81, .value=0x7e}, {.addr=0xdd82, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd81, .value=0x7e, .type=IO_READ},
        {.addr=0xdd82, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x615f, .a=0x3e, .x=0x0c, .y=0xe1, .sp=0x56, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x1c}, {.addr=0x615f, .value=0x7e}, {.addr=0x6160, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x6161, .a=0x3e, .x=0x0c, .y=0xe1, .sp=0x56, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x1c}, {.addr=0x615f, .value=0x7e}, {.addr=0x6160, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x615f, .value=0x7e, .type=IO_READ},
        {.addr=0x6160, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x186b, .a=0x49, .x=0x9a, .y=0xb7, .sp=0xf6, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0xe9}, {.addr=0x186b, .value=0x7e}, {.addr=0x186c, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x186d, .a=0x49, .x=0x9a, .y=0xb7, .sp=0xf6, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0xe9}, {.addr=0x186b, .value=0x7e}, {.addr=0x186c, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x186b, .value=0x7e, .type=IO_READ},
        {.addr=0x186c, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xdee5, .a=0xa0, .x=0x49, .y=0x59, .sp=0xd0, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x50}, {.addr=0xdee5, .value=0x7e}, {.addr=0xdee6, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xdee7, .a=0xa0, .x=0x49, .y=0x59, .sp=0xd0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x50}, {.addr=0xdee5, .value=0x7e}, {.addr=0xdee6, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xdee5, .value=0x7e, .type=IO_READ},
        {.addr=0xdee6, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xf850, .a=0xf3, .x=0x30, .y=0xf4, .sp=0xaf, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x19}, {.addr=0xf850, .value=0x7e}, {.addr=0xf851, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xf852, .a=0xf3, .x=0x30, .y=0xf4, .sp=0xaf, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x19}, {.addr=0xf850, .value=0x7e}, {.addr=0xf851, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xf850, .value=0x7e, .type=IO_READ},
        {.addr=0xf851, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x26ac, .a=0x01, .x=0x71, .y=0xe3, .sp=0x71, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x73}, {.addr=0x26ac, .value=0x7e}, {.addr=0x26ad, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x26ae, .a=0x01, .x=0x71, .y=0xe3, .sp=0x71, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x73}, {.addr=0x26ac, .value=0x7e}, {.addr=0x26ad, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ac, .value=0x7e, .type=IO_READ},
        {.addr=0x26ad, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x934e, .a=0x49, .x=0x7a, .y=0x3d, .sp=0xa1, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xb6}, {.addr=0x934e, .value=0x7e}, {.addr=0x934f, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x9350, .a=0x49, .x=0x7a, .y=0x3d, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xb6}, {.addr=0x934e, .value=0x7e}, {.addr=0x934f, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x934e, .value=0x7e, .type=IO_READ},
        {.addr=0x934f, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x5873, .a=0x75, .x=0x22, .y=0xa4, .sp=0x5f, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x49}, {.addr=0x5873, .value=0x7e}, {.addr=0x5874, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x5875, .a=0x75, .x=0x22, .y=0xa4, .sp=0x5f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x49}, {.addr=0x5873, .value=0x7e}, {.addr=0x5874, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x5873, .value=0x7e, .type=IO_READ},
        {.addr=0x5874, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2c06, .a=0xd8, .x=0xc6, .y=0xb4, .sp=0xc6, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x15}, {.addr=0x2c06, .value=0x7e}, {.addr=0x2c07, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x2c08, .a=0xd8, .x=0xc6, .y=0xb4, .sp=0xc6, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x15}, {.addr=0x2c06, .value=0x7e}, {.addr=0x2c07, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c06, .value=0x7e, .type=IO_READ},
        {.addr=0x2c07, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x1fd5, .a=0x2f, .x=0x4a, .y=0xb9, .sp=0xbb, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x3e}, {.addr=0x1fd5, .value=0x7e}, {.addr=0x1fd6, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x1fd7, .a=0x2f, .x=0x4a, .y=0xb9, .sp=0xbb, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x3e}, {.addr=0x1fd5, .value=0x7e}, {.addr=0x1fd6, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fd5, .value=0x7e, .type=IO_READ},
        {.addr=0x1fd6, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x5465, .a=0xb8, .x=0xec, .y=0xa3, .sp=0x05, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xb5}, {.addr=0x5465, .value=0x7e}, {.addr=0x5466, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x5467, .a=0xb8, .x=0xec, .y=0xa3, .sp=0x05, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xb5}, {.addr=0x5465, .value=0x7e}, {.addr=0x5466, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x5465, .value=0x7e, .type=IO_READ},
        {.addr=0x5466, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x4b1b, .a=0xa6, .x=0xa4, .y=0xdf, .sp=0x3f, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xad}, {.addr=0x4b1b, .value=0x7e}, {.addr=0x4b1c, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x4b1d, .a=0xa6, .x=0xa4, .y=0xdf, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xad}, {.addr=0x4b1b, .value=0x7e}, {.addr=0x4b1c, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b1b, .value=0x7e, .type=IO_READ},
        {.addr=0x4b1c, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x25cd, .a=0x1d, .x=0x20, .y=0xc0, .sp=0x44, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x99}, {.addr=0x25cd, .value=0x7e}, {.addr=0x25ce, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x25cf, .a=0x1d, .x=0x20, .y=0xc0, .sp=0x44, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x99}, {.addr=0x25cd, .value=0x7e}, {.addr=0x25ce, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x25cd, .value=0x7e, .type=IO_READ},
        {.addr=0x25ce, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x761b, .a=0xb4, .x=0x7c, .y=0x83, .sp=0x71, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x38}, {.addr=0x761b, .value=0x7e}, {.addr=0x761c, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x761d, .a=0xb4, .x=0x7c, .y=0x83, .sp=0x71, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x38}, {.addr=0x761b, .value=0x7e}, {.addr=0x761c, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x761b, .value=0x7e, .type=IO_READ},
        {.addr=0x761c, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xf5eb, .a=0xbf, .x=0xeb, .y=0xf1, .sp=0x93, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x98}, {.addr=0xf5eb, .value=0x7e}, {.addr=0xf5ec, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xf5ed, .a=0xbf, .x=0xeb, .y=0xf1, .sp=0x93, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x98}, {.addr=0xf5eb, .value=0x7e}, {.addr=0xf5ec, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5eb, .value=0x7e, .type=IO_READ},
        {.addr=0xf5ec, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xbc2f, .a=0xd0, .x=0xad, .y=0xb1, .sp=0x9b, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x13}, {.addr=0xbc2f, .value=0x7e}, {.addr=0xbc30, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xbc31, .a=0xd0, .x=0xad, .y=0xb1, .sp=0x9b, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x13}, {.addr=0xbc2f, .value=0x7e}, {.addr=0xbc30, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc2f, .value=0x7e, .type=IO_READ},
        {.addr=0xbc30, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x5522, .a=0x44, .x=0xc4, .y=0xb7, .sp=0xff, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xfe}, {.addr=0x5522, .value=0x7e}, {.addr=0x5523, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x5524, .a=0x44, .x=0xc4, .y=0xb7, .sp=0xff, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xfe}, {.addr=0x5522, .value=0x7e}, {.addr=0x5523, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x5522, .value=0x7e, .type=IO_READ},
        {.addr=0x5523, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xaa7c, .a=0xdc, .x=0x4f, .y=0x10, .sp=0x47, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0xaa7c, .value=0x7e}, {.addr=0xaa7d, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xaa7e, .a=0xdc, .x=0x4f, .y=0x10, .sp=0x47, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0xaa7c, .value=0x7e}, {.addr=0xaa7d, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa7c, .value=0x7e, .type=IO_READ},
        {.addr=0xaa7d, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x8d1c, .a=0x07, .x=0x35, .y=0xbf, .sp=0x12, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x62}, {.addr=0x8d1c, .value=0x7e}, {.addr=0x8d1d, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x8d1e, .a=0x07, .x=0x35, .y=0xbf, .sp=0x12, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x62}, {.addr=0x8d1c, .value=0x7e}, {.addr=0x8d1d, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d1c, .value=0x7e, .type=IO_READ},
        {.addr=0x8d1d, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x147f, .a=0x59, .x=0x43, .y=0xc3, .sp=0x2d, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x0f}, {.addr=0x147f, .value=0x7e}, {.addr=0x1480, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x1481, .a=0x59, .x=0x43, .y=0xc3, .sp=0x2d, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x0f}, {.addr=0x147f, .value=0x7e}, {.addr=0x1480, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x147f, .value=0x7e, .type=IO_READ},
        {.addr=0x1480, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x257d, .a=0x7c, .x=0x55, .y=0xf4, .sp=0xf6, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x96}, {.addr=0x257d, .value=0x7e}, {.addr=0x257e, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x257f, .a=0x7c, .x=0x55, .y=0xf4, .sp=0xf6, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x96}, {.addr=0x257d, .value=0x7e}, {.addr=0x257e, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x257d, .value=0x7e, .type=IO_READ},
        {.addr=0x257e, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xdcad, .a=0xa3, .x=0x25, .y=0xab, .sp=0x64, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xe4}, {.addr=0xdcad, .value=0x7e}, {.addr=0xdcae, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xdcaf, .a=0xa3, .x=0x25, .y=0xab, .sp=0x64, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xe4}, {.addr=0xdcad, .value=0x7e}, {.addr=0xdcae, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcad, .value=0x7e, .type=IO_READ},
        {.addr=0xdcae, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x107f, .a=0xc7, .x=0x1a, .y=0xaa, .sp=0xc1, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xf6}, {.addr=0x107f, .value=0x7e}, {.addr=0x1080, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x1081, .a=0xc7, .x=0x1a, .y=0xaa, .sp=0xc1, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xf6}, {.addr=0x107f, .value=0x7e}, {.addr=0x1080, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x107f, .value=0x7e, .type=IO_READ},
        {.addr=0x1080, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x0bc4, .a=0xb2, .x=0x4c, .y=0x84, .sp=0xa6, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x88}, {.addr=0x0bc4, .value=0x7e}, {.addr=0x0bc5, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x0bc6, .a=0xb2, .x=0x4c, .y=0x84, .sp=0xa6, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x88}, {.addr=0x0bc4, .value=0x7e}, {.addr=0x0bc5, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bc4, .value=0x7e, .type=IO_READ},
        {.addr=0x0bc5, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x0247, .a=0x33, .x=0x31, .y=0xa4, .sp=0x78, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xc6}, {.addr=0x0247, .value=0x7e}, {.addr=0x0248, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x0249, .a=0x33, .x=0x31, .y=0xa4, .sp=0x78, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xc6}, {.addr=0x0247, .value=0x7e}, {.addr=0x0248, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x0247, .value=0x7e, .type=IO_READ},
        {.addr=0x0248, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xc6da, .a=0x2c, .x=0x91, .y=0xfb, .sp=0xe3, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xfb}, {.addr=0xc6da, .value=0x7e}, {.addr=0xc6db, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xc6dc, .a=0x2c, .x=0x91, .y=0xfb, .sp=0xe3, .status=0x07};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xfb}, {.addr=0xc6da, .value=0x7e}, {.addr=0xc6db, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6da, .value=0x7e, .type=IO_READ},
        {.addr=0xc6db, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xf305, .a=0x57, .x=0x53, .y=0xd9, .sp=0xf3, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x5b}, {.addr=0xf305, .value=0x7e}, {.addr=0xf306, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xf307, .a=0x57, .x=0x53, .y=0xd9, .sp=0xf3, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x5b}, {.addr=0xf305, .value=0x7e}, {.addr=0xf306, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf305, .value=0x7e, .type=IO_READ},
        {.addr=0xf306, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x5300, .a=0xde, .x=0x55, .y=0xb3, .sp=0x31, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xa7}, {.addr=0x5300, .value=0x7e}, {.addr=0x5301, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x5302, .a=0xde, .x=0x55, .y=0xb3, .sp=0x31, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xa7}, {.addr=0x5300, .value=0x7e}, {.addr=0x5301, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x5300, .value=0x7e, .type=IO_READ},
        {.addr=0x5301, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x1416, .a=0x5b, .x=0x15, .y=0x6d, .sp=0x3e, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x74}, {.addr=0x1416, .value=0x7e}, {.addr=0x1417, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x1418, .a=0x5b, .x=0x15, .y=0x6d, .sp=0x3e, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x74}, {.addr=0x1416, .value=0x7e}, {.addr=0x1417, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1416, .value=0x7e, .type=IO_READ},
        {.addr=0x1417, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x234c, .a=0xb6, .x=0x39, .y=0x75, .sp=0xd3, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xf7}, {.addr=0x234c, .value=0x7e}, {.addr=0x234d, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x234e, .a=0xb6, .x=0x39, .y=0x75, .sp=0xd3, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xf7}, {.addr=0x234c, .value=0x7e}, {.addr=0x234d, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x234c, .value=0x7e, .type=IO_READ},
        {.addr=0x234d, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xb1f1, .a=0x75, .x=0xb0, .y=0x0a, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xf4}, {.addr=0xb1f1, .value=0x7e}, {.addr=0xb1f2, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xb1f3, .a=0x75, .x=0xb0, .y=0x0a, .sp=0xe4, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xf4}, {.addr=0xb1f1, .value=0x7e}, {.addr=0xb1f2, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1f1, .value=0x7e, .type=IO_READ},
        {.addr=0xb1f2, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x977e, .a=0x0d, .x=0x7b, .y=0xe1, .sp=0xb2, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xd8}, {.addr=0x977e, .value=0x7e}, {.addr=0x977f, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x9780, .a=0x0d, .x=0x7b, .y=0xe1, .sp=0xb2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xd8}, {.addr=0x977e, .value=0x7e}, {.addr=0x977f, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x977e, .value=0x7e, .type=IO_READ},
        {.addr=0x977f, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x7b45, .a=0x9f, .x=0x23, .y=0x27, .sp=0x4e, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x4f}, {.addr=0x7b45, .value=0x7e}, {.addr=0x7b46, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x7b47, .a=0x9f, .x=0x23, .y=0x27, .sp=0x4e, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x4f}, {.addr=0x7b45, .value=0x7e}, {.addr=0x7b46, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b45, .value=0x7e, .type=IO_READ},
        {.addr=0x7b46, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xebda, .a=0x99, .x=0xd5, .y=0x02, .sp=0x70, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x32}, {.addr=0xebda, .value=0x7e}, {.addr=0xebdb, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xebdc, .a=0x99, .x=0xd5, .y=0x02, .sp=0x70, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x32}, {.addr=0xebda, .value=0x7e}, {.addr=0xebdb, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xebda, .value=0x7e, .type=IO_READ},
        {.addr=0xebdb, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa8fb, .a=0xbb, .x=0x83, .y=0x6f, .sp=0x5a, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x71}, {.addr=0xa8fb, .value=0x7e}, {.addr=0xa8fc, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xa8fd, .a=0xbb, .x=0x83, .y=0x6f, .sp=0x5a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x71}, {.addr=0xa8fb, .value=0x7e}, {.addr=0xa8fc, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8fb, .value=0x7e, .type=IO_READ},
        {.addr=0xa8fc, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xf508, .a=0xe8, .x=0xfc, .y=0x52, .sp=0x82, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xaf}, {.addr=0xf508, .value=0x7e}, {.addr=0xf509, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xf50a, .a=0xe8, .x=0xfc, .y=0x52, .sp=0x82, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xaf}, {.addr=0xf508, .value=0x7e}, {.addr=0xf509, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xf508, .value=0x7e, .type=IO_READ},
        {.addr=0xf509, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xf3c4, .a=0x1e, .x=0xfa, .y=0x81, .sp=0x6a, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x83}, {.addr=0xf3c4, .value=0x7e}, {.addr=0xf3c5, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xf3c6, .a=0x1e, .x=0xfa, .y=0x81, .sp=0x6a, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x83}, {.addr=0xf3c4, .value=0x7e}, {.addr=0xf3c5, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3c4, .value=0x7e, .type=IO_READ},
        {.addr=0xf3c5, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x71a5, .a=0x18, .x=0x38, .y=0x95, .sp=0xed, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x3d}, {.addr=0x71a5, .value=0x7e}, {.addr=0x71a6, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x71a7, .a=0x18, .x=0x38, .y=0x95, .sp=0xed, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x3d}, {.addr=0x71a5, .value=0x7e}, {.addr=0x71a6, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x71a5, .value=0x7e, .type=IO_READ},
        {.addr=0x71a6, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xae2d, .a=0x5f, .x=0x6a, .y=0x41, .sp=0xa8, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xbb}, {.addr=0xae2d, .value=0x7e}, {.addr=0xae2e, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xae2f, .a=0x5f, .x=0x6a, .y=0x41, .sp=0xa8, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xbb}, {.addr=0xae2d, .value=0x7e}, {.addr=0xae2e, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xae2d, .value=0x7e, .type=IO_READ},
        {.addr=0xae2e, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd969, .a=0xd2, .x=0x04, .y=0x41, .sp=0xff, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xdb}, {.addr=0xd969, .value=0x7e}, {.addr=0xd96a, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xd96b, .a=0xd2, .x=0x04, .y=0x41, .sp=0xff, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xdb}, {.addr=0xd969, .value=0x7e}, {.addr=0xd96a, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xd969, .value=0x7e, .type=IO_READ},
        {.addr=0xd96a, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x5b44, .a=0x9f, .x=0xc9, .y=0x96, .sp=0x07, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xa0}, {.addr=0x5b44, .value=0x7e}, {.addr=0x5b45, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x5b46, .a=0x9f, .x=0xc9, .y=0x96, .sp=0x07, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xa0}, {.addr=0x5b44, .value=0x7e}, {.addr=0x5b45, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b44, .value=0x7e, .type=IO_READ},
        {.addr=0x5b45, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x7ba8, .a=0xb9, .x=0x28, .y=0x6c, .sp=0xbc, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xa5}, {.addr=0x7ba8, .value=0x7e}, {.addr=0x7ba9, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x7baa, .a=0xb9, .x=0x28, .y=0x6c, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xa5}, {.addr=0x7ba8, .value=0x7e}, {.addr=0x7ba9, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ba8, .value=0x7e, .type=IO_READ},
        {.addr=0x7ba9, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x384f, .a=0x2a, .x=0x79, .y=0xbe, .sp=0x3c, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xfa}, {.addr=0x384f, .value=0x7e}, {.addr=0x3850, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x3851, .a=0x2a, .x=0x79, .y=0xbe, .sp=0x3c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xfa}, {.addr=0x384f, .value=0x7e}, {.addr=0x3850, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x384f, .value=0x7e, .type=IO_READ},
        {.addr=0x3850, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9960, .a=0xda, .x=0x7b, .y=0x92, .sp=0x8c, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x5d}, {.addr=0x9960, .value=0x7e}, {.addr=0x9961, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x9962, .a=0xda, .x=0x7b, .y=0x92, .sp=0x8c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x5d}, {.addr=0x9960, .value=0x7e}, {.addr=0x9961, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x9960, .value=0x7e, .type=IO_READ},
        {.addr=0x9961, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x539a, .a=0x0a, .x=0x25, .y=0xda, .sp=0x85, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x01}, {.addr=0x539a, .value=0x7e}, {.addr=0x539b, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x539c, .a=0x0a, .x=0x25, .y=0xda, .sp=0x85, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x01}, {.addr=0x539a, .value=0x7e}, {.addr=0x539b, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x539a, .value=0x7e, .type=IO_READ},
        {.addr=0x539b, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x7566, .a=0xdd, .x=0x68, .y=0x2e, .sp=0x04, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x07}, {.addr=0x7566, .value=0x7e}, {.addr=0x7567, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x7568, .a=0xdd, .x=0x68, .y=0x2e, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x07}, {.addr=0x7566, .value=0x7e}, {.addr=0x7567, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7566, .value=0x7e, .type=IO_READ},
        {.addr=0x7567, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xb5fc, .a=0x81, .x=0xbb, .y=0x1e, .sp=0xf1, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x4a}, {.addr=0xb5fc, .value=0x7e}, {.addr=0xb5fd, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xb5fe, .a=0x81, .x=0xbb, .y=0x1e, .sp=0xf1, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x4a}, {.addr=0xb5fc, .value=0x7e}, {.addr=0xb5fd, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5fc, .value=0x7e, .type=IO_READ},
        {.addr=0xb5fd, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xcc82, .a=0x3d, .x=0x6a, .y=0xaf, .sp=0xf0, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xe5}, {.addr=0xcc82, .value=0x7e}, {.addr=0xcc83, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xcc84, .a=0x3d, .x=0x6a, .y=0xaf, .sp=0xf0, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xe5}, {.addr=0xcc82, .value=0x7e}, {.addr=0xcc83, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc82, .value=0x7e, .type=IO_READ},
        {.addr=0xcc83, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x315a, .a=0x56, .x=0xd1, .y=0xca, .sp=0xcb, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xb2}, {.addr=0x315a, .value=0x7e}, {.addr=0x315b, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x315c, .a=0x56, .x=0xd1, .y=0xca, .sp=0xcb, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xb2}, {.addr=0x315a, .value=0x7e}, {.addr=0x315b, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x315a, .value=0x7e, .type=IO_READ},
        {.addr=0x315b, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x2eee, .a=0x58, .x=0x41, .y=0xaa, .sp=0x9a, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xe0}, {.addr=0x2eee, .value=0x7e}, {.addr=0x2eef, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x2ef0, .a=0x58, .x=0x41, .y=0xaa, .sp=0x9a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xe0}, {.addr=0x2eee, .value=0x7e}, {.addr=0x2eef, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eee, .value=0x7e, .type=IO_READ},
        {.addr=0x2eef, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xad3c, .a=0x0b, .x=0x5e, .y=0x00, .sp=0x3a, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xa4}, {.addr=0xad3c, .value=0x7e}, {.addr=0xad3d, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xad3e, .a=0x0b, .x=0x5e, .y=0x00, .sp=0x3a, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xa4}, {.addr=0xad3c, .value=0x7e}, {.addr=0xad3d, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xad3c, .value=0x7e, .type=IO_READ},
        {.addr=0xad3d, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x5bb1, .a=0xab, .x=0xc7, .y=0x95, .sp=0x66, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xa3}, {.addr=0x5bb1, .value=0x7e}, {.addr=0x5bb2, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x5bb3, .a=0xab, .x=0xc7, .y=0x95, .sp=0x66, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xa3}, {.addr=0x5bb1, .value=0x7e}, {.addr=0x5bb2, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bb1, .value=0x7e, .type=IO_READ},
        {.addr=0x5bb2, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x0f8e, .a=0x37, .x=0x61, .y=0xf4, .sp=0xb0, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x3e}, {.addr=0x0f8e, .value=0x7e}, {.addr=0x0f8f, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x0f90, .a=0x37, .x=0x61, .y=0xf4, .sp=0xb0, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x3e}, {.addr=0x0f8e, .value=0x7e}, {.addr=0x0f8f, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f8e, .value=0x7e, .type=IO_READ},
        {.addr=0x0f8f, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x47fa, .a=0xac, .x=0xa1, .y=0xa9, .sp=0x90, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x1d}, {.addr=0x47fa, .value=0x7e}, {.addr=0x47fb, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x47fc, .a=0xac, .x=0xa1, .y=0xa9, .sp=0x90, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x1d}, {.addr=0x47fa, .value=0x7e}, {.addr=0x47fb, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x47fa, .value=0x7e, .type=IO_READ},
        {.addr=0x47fb, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xfd43, .a=0xae, .x=0x6c, .y=0xf8, .sp=0x79, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x4b}, {.addr=0xfd43, .value=0x7e}, {.addr=0xfd44, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xfd45, .a=0xae, .x=0x6c, .y=0xf8, .sp=0x79, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x4b}, {.addr=0xfd43, .value=0x7e}, {.addr=0xfd44, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd43, .value=0x7e, .type=IO_READ},
        {.addr=0xfd44, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xc4d4, .a=0x66, .x=0x13, .y=0xda, .sp=0x18, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xa0}, {.addr=0xc4d4, .value=0x7e}, {.addr=0xc4d5, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xc4d6, .a=0x66, .x=0x13, .y=0xda, .sp=0x18, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xa0}, {.addr=0xc4d4, .value=0x7e}, {.addr=0xc4d5, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4d4, .value=0x7e, .type=IO_READ},
        {.addr=0xc4d5, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x0c86, .a=0x95, .x=0x52, .y=0xc8, .sp=0x88, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xc7}, {.addr=0x0c86, .value=0x7e}, {.addr=0x0c87, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x0c88, .a=0x95, .x=0x52, .y=0xc8, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xc7}, {.addr=0x0c86, .value=0x7e}, {.addr=0x0c87, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c86, .value=0x7e, .type=IO_READ},
        {.addr=0x0c87, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x74c5, .a=0x8a, .x=0xd6, .y=0x75, .sp=0x62, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x6f}, {.addr=0x74c5, .value=0x7e}, {.addr=0x74c6, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x74c7, .a=0x8a, .x=0xd6, .y=0x75, .sp=0x62, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x6f}, {.addr=0x74c5, .value=0x7e}, {.addr=0x74c6, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x74c5, .value=0x7e, .type=IO_READ},
        {.addr=0x74c6, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x266b, .a=0x32, .x=0x5d, .y=0xef, .sp=0x85, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x24}, {.addr=0x266b, .value=0x7e}, {.addr=0x266c, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x266d, .a=0x32, .x=0x5d, .y=0xef, .sp=0x85, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x24}, {.addr=0x266b, .value=0x7e}, {.addr=0x266c, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x266b, .value=0x7e, .type=IO_READ},
        {.addr=0x266c, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xfd03, .a=0x2b, .x=0x91, .y=0x0d, .sp=0x5a, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xb6}, {.addr=0xfd03, .value=0x7e}, {.addr=0xfd04, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xfd05, .a=0x2b, .x=0x91, .y=0x0d, .sp=0x5a, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xb6}, {.addr=0xfd03, .value=0x7e}, {.addr=0xfd04, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd03, .value=0x7e, .type=IO_READ},
        {.addr=0xfd04, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x245c, .a=0xf9, .x=0xf0, .y=0x27, .sp=0x7f, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xdd}, {.addr=0x245c, .value=0x7e}, {.addr=0x245d, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x245e, .a=0xf9, .x=0xf0, .y=0x27, .sp=0x7f, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xdd}, {.addr=0x245c, .value=0x7e}, {.addr=0x245d, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x245c, .value=0x7e, .type=IO_READ},
        {.addr=0x245d, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x28b2, .a=0x2e, .x=0xcd, .y=0x63, .sp=0x3e, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x2b}, {.addr=0x28b2, .value=0x7e}, {.addr=0x28b3, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x28b4, .a=0x2e, .x=0xcd, .y=0x63, .sp=0x3e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x2b}, {.addr=0x28b2, .value=0x7e}, {.addr=0x28b3, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x28b2, .value=0x7e, .type=IO_READ},
        {.addr=0x28b3, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xeea7, .a=0x8d, .x=0x42, .y=0xf3, .sp=0x4b, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xaf}, {.addr=0xeea7, .value=0x7e}, {.addr=0xeea8, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xeea9, .a=0x8d, .x=0x42, .y=0xf3, .sp=0x4b, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xaf}, {.addr=0xeea7, .value=0x7e}, {.addr=0xeea8, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xeea7, .value=0x7e, .type=IO_READ},
        {.addr=0xeea8, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x8d3b, .a=0x5b, .x=0x28, .y=0x35, .sp=0x8b, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x2c}, {.addr=0x8d3b, .value=0x7e}, {.addr=0x8d3c, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x8d3d, .a=0x5b, .x=0x28, .y=0x35, .sp=0x8b, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x2c}, {.addr=0x8d3b, .value=0x7e}, {.addr=0x8d3c, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d3b, .value=0x7e, .type=IO_READ},
        {.addr=0x8d3c, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xce77, .a=0x1c, .x=0xd2, .y=0x96, .sp=0x5b, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xa0}, {.addr=0xce77, .value=0x7e}, {.addr=0xce78, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xce79, .a=0x1c, .x=0xd2, .y=0x96, .sp=0x5b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xa0}, {.addr=0xce77, .value=0x7e}, {.addr=0xce78, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xce77, .value=0x7e, .type=IO_READ},
        {.addr=0xce78, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x640f, .a=0x5b, .x=0x5c, .y=0xb4, .sp=0xcd, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x23}, {.addr=0x640f, .value=0x7e}, {.addr=0x6410, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x6411, .a=0x5b, .x=0x5c, .y=0xb4, .sp=0xcd, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x23}, {.addr=0x640f, .value=0x7e}, {.addr=0x6410, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x640f, .value=0x7e, .type=IO_READ},
        {.addr=0x6410, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9c63, .a=0x59, .x=0xf0, .y=0xe8, .sp=0x64, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xe8}, {.addr=0x9c63, .value=0x7e}, {.addr=0x9c64, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x9c65, .a=0x59, .x=0xf0, .y=0xe8, .sp=0x64, .status=0x23};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xe8}, {.addr=0x9c63, .value=0x7e}, {.addr=0x9c64, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c63, .value=0x7e, .type=IO_READ},
        {.addr=0x9c64, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x4e1e, .a=0xda, .x=0xd4, .y=0x65, .sp=0x36, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xa2}, {.addr=0x4e1e, .value=0x7e}, {.addr=0x4e1f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x4e20, .a=0xda, .x=0xd4, .y=0x65, .sp=0x36, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xa2}, {.addr=0x4e1e, .value=0x7e}, {.addr=0x4e1f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e1e, .value=0x7e, .type=IO_READ},
        {.addr=0x4e1f, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xc9ad, .a=0x98, .x=0xe4, .y=0xdb, .sp=0xd7, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xcf}, {.addr=0xc9ad, .value=0x7e}, {.addr=0xc9ae, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xc9af, .a=0x98, .x=0xe4, .y=0xdb, .sp=0xd7, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xcf}, {.addr=0xc9ad, .value=0x7e}, {.addr=0xc9ae, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9ad, .value=0x7e, .type=IO_READ},
        {.addr=0xc9ae, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x0e41, .a=0x11, .x=0x85, .y=0x9a, .sp=0x8e, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x26}, {.addr=0x0e41, .value=0x7e}, {.addr=0x0e42, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x0e43, .a=0x11, .x=0x85, .y=0x9a, .sp=0x8e, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x26}, {.addr=0x0e41, .value=0x7e}, {.addr=0x0e42, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e41, .value=0x7e, .type=IO_READ},
        {.addr=0x0e42, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xa458, .a=0x43, .x=0xda, .y=0x02, .sp=0x1e, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x5a}, {.addr=0xa458, .value=0x7e}, {.addr=0xa459, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xa45a, .a=0x43, .x=0xda, .y=0x02, .sp=0x1e, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x5a}, {.addr=0xa458, .value=0x7e}, {.addr=0xa459, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa458, .value=0x7e, .type=IO_READ},
        {.addr=0xa459, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xf600, .a=0x2b, .x=0xad, .y=0xa3, .sp=0xcb, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xdd}, {.addr=0xf600, .value=0x7e}, {.addr=0xf601, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xf602, .a=0x2b, .x=0xad, .y=0xa3, .sp=0xcb, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xdd}, {.addr=0xf600, .value=0x7e}, {.addr=0xf601, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xf600, .value=0x7e, .type=IO_READ},
        {.addr=0xf601, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x40e0, .a=0x93, .x=0x7f, .y=0x2f, .sp=0xfe, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xd1}, {.addr=0x40e0, .value=0x7e}, {.addr=0x40e1, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x40e2, .a=0x93, .x=0x7f, .y=0x2f, .sp=0xfe, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xd1}, {.addr=0x40e0, .value=0x7e}, {.addr=0x40e1, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e0, .value=0x7e, .type=IO_READ},
        {.addr=0x40e1, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x6279, .a=0x30, .x=0x62, .y=0x9f, .sp=0xfe, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x0c}, {.addr=0x6279, .value=0x7e}, {.addr=0x627a, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x627b, .a=0x30, .x=0x62, .y=0x9f, .sp=0xfe, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x0c}, {.addr=0x6279, .value=0x7e}, {.addr=0x627a, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x6279, .value=0x7e, .type=IO_READ},
        {.addr=0x627a, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x5cba, .a=0xd3, .x=0x47, .y=0xd4, .sp=0xb1, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xcb}, {.addr=0x5cba, .value=0x7e}, {.addr=0x5cbb, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x5cbc, .a=0xd3, .x=0x47, .y=0xd4, .sp=0xb1, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xcb}, {.addr=0x5cba, .value=0x7e}, {.addr=0x5cbb, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cba, .value=0x7e, .type=IO_READ},
        {.addr=0x5cbb, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x555f, .a=0x39, .x=0x54, .y=0x88, .sp=0xf1, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x2b}, {.addr=0x555f, .value=0x7e}, {.addr=0x5560, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x5561, .a=0x39, .x=0x54, .y=0x88, .sp=0xf1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x2b}, {.addr=0x555f, .value=0x7e}, {.addr=0x5560, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x555f, .value=0x7e, .type=IO_READ},
        {.addr=0x5560, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xd0fa, .a=0x4d, .x=0xed, .y=0xb6, .sp=0x71, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x14}, {.addr=0xd0fa, .value=0x7e}, {.addr=0xd0fb, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xd0fc, .a=0x4d, .x=0xed, .y=0xb6, .sp=0x71, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x14}, {.addr=0xd0fa, .value=0x7e}, {.addr=0xd0fb, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0fa, .value=0x7e, .type=IO_READ},
        {.addr=0xd0fb, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb4e7, .a=0xc6, .x=0x8b, .y=0x9d, .sp=0xd6, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x9e}, {.addr=0xb4e7, .value=0x7e}, {.addr=0xb4e8, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xb4e9, .a=0xc6, .x=0x8b, .y=0x9d, .sp=0xd6, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x9e}, {.addr=0xb4e7, .value=0x7e}, {.addr=0xb4e8, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4e7, .value=0x7e, .type=IO_READ},
        {.addr=0xb4e8, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x932b, .a=0xc6, .x=0xdb, .y=0x7c, .sp=0x4f, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x1a}, {.addr=0x932b, .value=0x7e}, {.addr=0x932c, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x932d, .a=0xc6, .x=0xdb, .y=0x7c, .sp=0x4f, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x1a}, {.addr=0x932b, .value=0x7e}, {.addr=0x932c, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x932b, .value=0x7e, .type=IO_READ},
        {.addr=0x932c, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x7ee5, .a=0x9d, .x=0x4c, .y=0xca, .sp=0xf3, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x8c}, {.addr=0x7ee5, .value=0x7e}, {.addr=0x7ee6, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee7, .a=0x9d, .x=0x4c, .y=0xca, .sp=0xf3, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x8c}, {.addr=0x7ee5, .value=0x7e}, {.addr=0x7ee6, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee5, .value=0x7e, .type=IO_READ},
        {.addr=0x7ee6, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x3fcc, .a=0x36, .x=0x03, .y=0x5a, .sp=0x5c, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x85}, {.addr=0x3fcc, .value=0x7e}, {.addr=0x3fcd, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x3fce, .a=0x36, .x=0x03, .y=0x5a, .sp=0x5c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x85}, {.addr=0x3fcc, .value=0x7e}, {.addr=0x3fcd, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fcc, .value=0x7e, .type=IO_READ},
        {.addr=0x3fcd, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xaf98, .a=0x98, .x=0xd4, .y=0x36, .sp=0xd7, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x58}, {.addr=0xaf98, .value=0x7e}, {.addr=0xaf99, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xaf9a, .a=0x98, .x=0xd4, .y=0x36, .sp=0xd7, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x58}, {.addr=0xaf98, .value=0x7e}, {.addr=0xaf99, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf98, .value=0x7e, .type=IO_READ},
        {.addr=0xaf99, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x5654, .a=0xdc, .x=0x6b, .y=0xa0, .sp=0x4a, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xb9}, {.addr=0x5654, .value=0x7e}, {.addr=0x5655, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x5656, .a=0xdc, .x=0x6b, .y=0xa0, .sp=0x4a, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xb9}, {.addr=0x5654, .value=0x7e}, {.addr=0x5655, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x5654, .value=0x7e, .type=IO_READ},
        {.addr=0x5655, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x722f, .a=0x8b, .x=0xaa, .y=0xa6, .sp=0x79, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x67}, {.addr=0x722f, .value=0x7e}, {.addr=0x7230, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x7231, .a=0x8b, .x=0xaa, .y=0xa6, .sp=0x79, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x67}, {.addr=0x722f, .value=0x7e}, {.addr=0x7230, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x722f, .value=0x7e, .type=IO_READ},
        {.addr=0x7230, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x885c, .a=0x60, .x=0xfd, .y=0xf5, .sp=0x2b, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x83}, {.addr=0x885c, .value=0x7e}, {.addr=0x885d, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x885e, .a=0x60, .x=0xfd, .y=0xf5, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x83}, {.addr=0x885c, .value=0x7e}, {.addr=0x885d, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x885c, .value=0x7e, .type=IO_READ},
        {.addr=0x885d, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x37c1, .a=0x12, .x=0xb0, .y=0x6b, .sp=0x82, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xcf}, {.addr=0x37c1, .value=0x7e}, {.addr=0x37c2, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x37c3, .a=0x12, .x=0xb0, .y=0x6b, .sp=0x82, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xcf}, {.addr=0x37c1, .value=0x7e}, {.addr=0x37c2, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x37c1, .value=0x7e, .type=IO_READ},
        {.addr=0x37c2, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xd48c, .a=0xbc, .x=0xf4, .y=0x96, .sp=0xda, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xc6}, {.addr=0xd48c, .value=0x7e}, {.addr=0xd48d, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xd48e, .a=0xbc, .x=0xf4, .y=0x96, .sp=0xda, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xc6}, {.addr=0xd48c, .value=0x7e}, {.addr=0xd48d, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd48c, .value=0x7e, .type=IO_READ},
        {.addr=0xd48d, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xbfe1, .a=0x0b, .x=0x56, .y=0x10, .sp=0xf5, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xb7}, {.addr=0xbfe1, .value=0x7e}, {.addr=0xbfe2, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xbfe3, .a=0x0b, .x=0x56, .y=0x10, .sp=0xf5, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xb7}, {.addr=0xbfe1, .value=0x7e}, {.addr=0xbfe2, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfe1, .value=0x7e, .type=IO_READ},
        {.addr=0xbfe2, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0100) {
    const struct CPU_State initial_cpu = {.pc=0xbf85, .a=0xdc, .x=0x1a, .y=0x91, .sp=0x45, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xad}, {.addr=0xbf85, .value=0x7e}, {.addr=0xbf86, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xbf87, .a=0xdc, .x=0x1a, .y=0x91, .sp=0x45, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xad}, {.addr=0xbf85, .value=0x7e}, {.addr=0xbf86, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf85, .value=0x7e, .type=IO_READ},
        {.addr=0xbf86, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0101) {
    const struct CPU_State initial_cpu = {.pc=0x7a58, .a=0x60, .x=0x8e, .y=0xea, .sp=0x5b, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x8e}, {.addr=0x7a58, .value=0x7e}, {.addr=0x7a59, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x7a5a, .a=0x60, .x=0x8e, .y=0xea, .sp=0x5b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x8e}, {.addr=0x7a58, .value=0x7e}, {.addr=0x7a59, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a58, .value=0x7e, .type=IO_READ},
        {.addr=0x7a59, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0102) {
    const struct CPU_State initial_cpu = {.pc=0x40c5, .a=0x29, .x=0xad, .y=0x33, .sp=0xa4, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0xf4}, {.addr=0x40c5, .value=0x7e}, {.addr=0x40c6, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x40c7, .a=0x29, .x=0xad, .y=0x33, .sp=0xa4, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0xf4}, {.addr=0x40c5, .value=0x7e}, {.addr=0x40c6, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x40c5, .value=0x7e, .type=IO_READ},
        {.addr=0x40c6, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0103) {
    const struct CPU_State initial_cpu = {.pc=0x8f62, .a=0xa4, .x=0x5d, .y=0xaa, .sp=0xb1, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xfa}, {.addr=0x8f62, .value=0x7e}, {.addr=0x8f63, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x8f64, .a=0xa4, .x=0x5d, .y=0xaa, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xfa}, {.addr=0x8f62, .value=0x7e}, {.addr=0x8f63, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f62, .value=0x7e, .type=IO_READ},
        {.addr=0x8f63, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0104) {
    const struct CPU_State initial_cpu = {.pc=0x1147, .a=0x4a, .x=0x6c, .y=0xbd, .sp=0xa9, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xda}, {.addr=0x1147, .value=0x7e}, {.addr=0x1148, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x1149, .a=0x4a, .x=0x6c, .y=0xbd, .sp=0xa9, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xda}, {.addr=0x1147, .value=0x7e}, {.addr=0x1148, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1147, .value=0x7e, .type=IO_READ},
        {.addr=0x1148, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0105) {
    const struct CPU_State initial_cpu = {.pc=0x53f8, .a=0x28, .x=0x09, .y=0x76, .sp=0x5e, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x8a}, {.addr=0x53f8, .value=0x7e}, {.addr=0x53f9, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x53fa, .a=0x28, .x=0x09, .y=0x76, .sp=0x5e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x8a}, {.addr=0x53f8, .value=0x7e}, {.addr=0x53f9, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x53f8, .value=0x7e, .type=IO_READ},
        {.addr=0x53f9, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0106) {
    const struct CPU_State initial_cpu = {.pc=0xcb40, .a=0xba, .x=0x1e, .y=0xf2, .sp=0x1f, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xf1}, {.addr=0xcb40, .value=0x7e}, {.addr=0xcb41, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xcb42, .a=0xba, .x=0x1e, .y=0xf2, .sp=0x1f, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xf1}, {.addr=0xcb40, .value=0x7e}, {.addr=0xcb41, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb40, .value=0x7e, .type=IO_READ},
        {.addr=0xcb41, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0107) {
    const struct CPU_State initial_cpu = {.pc=0x0647, .a=0x03, .x=0xd0, .y=0x75, .sp=0x80, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xda}, {.addr=0x0647, .value=0x7e}, {.addr=0x0648, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x0649, .a=0x03, .x=0xd0, .y=0x75, .sp=0x80, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xda}, {.addr=0x0647, .value=0x7e}, {.addr=0x0648, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0647, .value=0x7e, .type=IO_READ},
        {.addr=0x0648, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf8d6, .a=0x2c, .x=0x2f, .y=0x2b, .sp=0x5a, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x56}, {.addr=0xf8d6, .value=0x7e}, {.addr=0xf8d7, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xf8d8, .a=0x2c, .x=0x2f, .y=0x2b, .sp=0x5a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x56}, {.addr=0xf8d6, .value=0x7e}, {.addr=0xf8d7, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8d6, .value=0x7e, .type=IO_READ},
        {.addr=0xf8d7, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0109) {
    const struct CPU_State initial_cpu = {.pc=0x8cf0, .a=0x24, .x=0x78, .y=0x46, .sp=0xca, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xc6}, {.addr=0x8cf0, .value=0x7e}, {.addr=0x8cf1, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x8cf2, .a=0x24, .x=0x78, .y=0x46, .sp=0xca, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xc6}, {.addr=0x8cf0, .value=0x7e}, {.addr=0x8cf1, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cf0, .value=0x7e, .type=IO_READ},
        {.addr=0x8cf1, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010A) {
    const struct CPU_State initial_cpu = {.pc=0x2e88, .a=0xbc, .x=0xb8, .y=0xe5, .sp=0x8d, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x91}, {.addr=0x2e88, .value=0x7e}, {.addr=0x2e89, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x2e8a, .a=0xbc, .x=0xb8, .y=0xe5, .sp=0x8d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x91}, {.addr=0x2e88, .value=0x7e}, {.addr=0x2e89, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e88, .value=0x7e, .type=IO_READ},
        {.addr=0x2e89, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010B) {
    const struct CPU_State initial_cpu = {.pc=0x3aaf, .a=0x07, .x=0x01, .y=0x41, .sp=0x76, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x4b}, {.addr=0x3aaf, .value=0x7e}, {.addr=0x3ab0, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x3ab1, .a=0x07, .x=0x01, .y=0x41, .sp=0x76, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x4b}, {.addr=0x3aaf, .value=0x7e}, {.addr=0x3ab0, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aaf, .value=0x7e, .type=IO_READ},
        {.addr=0x3ab0, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010C) {
    const struct CPU_State initial_cpu = {.pc=0x55ae, .a=0x05, .x=0x24, .y=0xe1, .sp=0x10, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xa2}, {.addr=0x55ae, .value=0x7e}, {.addr=0x55af, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x55b0, .a=0x05, .x=0x24, .y=0xe1, .sp=0x10, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xa2}, {.addr=0x55ae, .value=0x7e}, {.addr=0x55af, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x55ae, .value=0x7e, .type=IO_READ},
        {.addr=0x55af, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010D) {
    const struct CPU_State initial_cpu = {.pc=0x74a3, .a=0x7d, .x=0xd2, .y=0x19, .sp=0x55, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x36}, {.addr=0x74a3, .value=0x7e}, {.addr=0x74a4, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x74a5, .a=0x7d, .x=0xd2, .y=0x19, .sp=0x55, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x36}, {.addr=0x74a3, .value=0x7e}, {.addr=0x74a4, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x74a3, .value=0x7e, .type=IO_READ},
        {.addr=0x74a4, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010E) {
    const struct CPU_State initial_cpu = {.pc=0x2523, .a=0x9c, .x=0xdc, .y=0x18, .sp=0x31, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x66}, {.addr=0x2523, .value=0x7e}, {.addr=0x2524, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2525, .a=0x9c, .x=0xdc, .y=0x18, .sp=0x31, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x66}, {.addr=0x2523, .value=0x7e}, {.addr=0x2524, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2523, .value=0x7e, .type=IO_READ},
        {.addr=0x2524, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_010F) {
    const struct CPU_State initial_cpu = {.pc=0x0fab, .a=0x0a, .x=0x93, .y=0xdc, .sp=0x71, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xde}, {.addr=0x0fab, .value=0x7e}, {.addr=0x0fac, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x0fad, .a=0x0a, .x=0x93, .y=0xdc, .sp=0x71, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xde}, {.addr=0x0fab, .value=0x7e}, {.addr=0x0fac, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fab, .value=0x7e, .type=IO_READ},
        {.addr=0x0fac, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0110) {
    const struct CPU_State initial_cpu = {.pc=0x3df6, .a=0x44, .x=0x44, .y=0x80, .sp=0x9e, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x17}, {.addr=0x3df6, .value=0x7e}, {.addr=0x3df7, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x3df8, .a=0x44, .x=0x44, .y=0x80, .sp=0x9e, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x17}, {.addr=0x3df6, .value=0x7e}, {.addr=0x3df7, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x3df6, .value=0x7e, .type=IO_READ},
        {.addr=0x3df7, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0111) {
    const struct CPU_State initial_cpu = {.pc=0x2afb, .a=0xc7, .x=0xd1, .y=0xfa, .sp=0x18, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x2d}, {.addr=0x2afb, .value=0x7e}, {.addr=0x2afc, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x2afd, .a=0xc7, .x=0xd1, .y=0xfa, .sp=0x18, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x2d}, {.addr=0x2afb, .value=0x7e}, {.addr=0x2afc, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2afb, .value=0x7e, .type=IO_READ},
        {.addr=0x2afc, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0112) {
    const struct CPU_State initial_cpu = {.pc=0x2290, .a=0xd9, .x=0xeb, .y=0xe8, .sp=0x3b, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xb0}, {.addr=0x2290, .value=0x7e}, {.addr=0x2291, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x2292, .a=0xd9, .x=0xeb, .y=0xe8, .sp=0x3b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xb0}, {.addr=0x2290, .value=0x7e}, {.addr=0x2291, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2290, .value=0x7e, .type=IO_READ},
        {.addr=0x2291, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0113) {
    const struct CPU_State initial_cpu = {.pc=0x4aee, .a=0xad, .x=0xb7, .y=0x22, .sp=0x2d, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x2f}, {.addr=0x4aee, .value=0x7e}, {.addr=0x4aef, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x4af0, .a=0xad, .x=0xb7, .y=0x22, .sp=0x2d, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x2f}, {.addr=0x4aee, .value=0x7e}, {.addr=0x4aef, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aee, .value=0x7e, .type=IO_READ},
        {.addr=0x4aef, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0114) {
    const struct CPU_State initial_cpu = {.pc=0xa86c, .a=0xdf, .x=0xf5, .y=0x43, .sp=0xbe, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xd0}, {.addr=0xa86c, .value=0x7e}, {.addr=0xa86d, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xa86e, .a=0xdf, .x=0xf5, .y=0x43, .sp=0xbe, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xd0}, {.addr=0xa86c, .value=0x7e}, {.addr=0xa86d, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa86c, .value=0x7e, .type=IO_READ},
        {.addr=0xa86d, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0115) {
    const struct CPU_State initial_cpu = {.pc=0x6ae6, .a=0x8a, .x=0x74, .y=0x02, .sp=0x48, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xd1}, {.addr=0x6ae6, .value=0x7e}, {.addr=0x6ae7, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x6ae8, .a=0x8a, .x=0x74, .y=0x02, .sp=0x48, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xd1}, {.addr=0x6ae6, .value=0x7e}, {.addr=0x6ae7, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ae6, .value=0x7e, .type=IO_READ},
        {.addr=0x6ae7, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0116) {
    const struct CPU_State initial_cpu = {.pc=0x0d12, .a=0x04, .x=0x6a, .y=0x8b, .sp=0x41, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x56}, {.addr=0x0d12, .value=0x7e}, {.addr=0x0d13, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x0d14, .a=0x04, .x=0x6a, .y=0x8b, .sp=0x41, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x56}, {.addr=0x0d12, .value=0x7e}, {.addr=0x0d13, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d12, .value=0x7e, .type=IO_READ},
        {.addr=0x0d13, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0117) {
    const struct CPU_State initial_cpu = {.pc=0x89e9, .a=0xdd, .x=0xca, .y=0x07, .sp=0x69, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x9a}, {.addr=0x89e9, .value=0x7e}, {.addr=0x89ea, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x89eb, .a=0xdd, .x=0xca, .y=0x07, .sp=0x69, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x9a}, {.addr=0x89e9, .value=0x7e}, {.addr=0x89ea, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x89e9, .value=0x7e, .type=IO_READ},
        {.addr=0x89ea, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0118) {
    const struct CPU_State initial_cpu = {.pc=0xed0f, .a=0x74, .x=0x05, .y=0xca, .sp=0xbe, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xfd}, {.addr=0xed0f, .value=0x7e}, {.addr=0xed10, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xed11, .a=0x74, .x=0x05, .y=0xca, .sp=0xbe, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xfd}, {.addr=0xed0f, .value=0x7e}, {.addr=0xed10, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xed0f, .value=0x7e, .type=IO_READ},
        {.addr=0xed10, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0119) {
    const struct CPU_State initial_cpu = {.pc=0xd2f4, .a=0x9a, .x=0xce, .y=0x61, .sp=0xd1, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x4e}, {.addr=0xd2f4, .value=0x7e}, {.addr=0xd2f5, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xd2f6, .a=0x9a, .x=0xce, .y=0x61, .sp=0xd1, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x4e}, {.addr=0xd2f4, .value=0x7e}, {.addr=0xd2f5, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2f4, .value=0x7e, .type=IO_READ},
        {.addr=0xd2f5, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011A) {
    const struct CPU_State initial_cpu = {.pc=0xc8e3, .a=0x31, .x=0x13, .y=0x1b, .sp=0x18, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x7f}, {.addr=0xc8e3, .value=0x7e}, {.addr=0xc8e4, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xc8e5, .a=0x31, .x=0x13, .y=0x1b, .sp=0x18, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x7f}, {.addr=0xc8e3, .value=0x7e}, {.addr=0xc8e4, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8e3, .value=0x7e, .type=IO_READ},
        {.addr=0xc8e4, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011B) {
    const struct CPU_State initial_cpu = {.pc=0x792e, .a=0xbe, .x=0x80, .y=0xdb, .sp=0x10, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xb8}, {.addr=0x792e, .value=0x7e}, {.addr=0x792f, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x7930, .a=0xbe, .x=0x80, .y=0xdb, .sp=0x10, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xb8}, {.addr=0x792e, .value=0x7e}, {.addr=0x792f, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x792e, .value=0x7e, .type=IO_READ},
        {.addr=0x792f, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011C) {
    const struct CPU_State initial_cpu = {.pc=0xdccd, .a=0x5a, .x=0xd7, .y=0xb2, .sp=0xbb, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xba}, {.addr=0xdccd, .value=0x7e}, {.addr=0xdcce, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xdccf, .a=0x5a, .x=0xd7, .y=0xb2, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xba}, {.addr=0xdccd, .value=0x7e}, {.addr=0xdcce, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdccd, .value=0x7e, .type=IO_READ},
        {.addr=0xdcce, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011D) {
    const struct CPU_State initial_cpu = {.pc=0x2000, .a=0x46, .x=0xf1, .y=0x82, .sp=0xfd, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xef}, {.addr=0x2000, .value=0x7e}, {.addr=0x2001, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x2002, .a=0x46, .x=0xf1, .y=0x82, .sp=0xfd, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xef}, {.addr=0x2000, .value=0x7e}, {.addr=0x2001, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2000, .value=0x7e, .type=IO_READ},
        {.addr=0x2001, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb6dc, .a=0x03, .x=0xc1, .y=0x03, .sp=0xeb, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x4f}, {.addr=0xb6dc, .value=0x7e}, {.addr=0xb6dd, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xb6de, .a=0x03, .x=0xc1, .y=0x03, .sp=0xeb, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x4f}, {.addr=0xb6dc, .value=0x7e}, {.addr=0xb6dd, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6dc, .value=0x7e, .type=IO_READ},
        {.addr=0xb6dd, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_011F) {
    const struct CPU_State initial_cpu = {.pc=0x34ea, .a=0x05, .x=0xad, .y=0xf1, .sp=0x2f, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xc2}, {.addr=0x34ea, .value=0x7e}, {.addr=0x34eb, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x34ec, .a=0x05, .x=0xad, .y=0xf1, .sp=0x2f, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xc2}, {.addr=0x34ea, .value=0x7e}, {.addr=0x34eb, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x34ea, .value=0x7e, .type=IO_READ},
        {.addr=0x34eb, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0120) {
    const struct CPU_State initial_cpu = {.pc=0x7ba6, .a=0x20, .x=0x2e, .y=0xa0, .sp=0xb9, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xbe}, {.addr=0x7ba6, .value=0x7e}, {.addr=0x7ba7, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x7ba8, .a=0x20, .x=0x2e, .y=0xa0, .sp=0xb9, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xbe}, {.addr=0x7ba6, .value=0x7e}, {.addr=0x7ba7, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ba6, .value=0x7e, .type=IO_READ},
        {.addr=0x7ba7, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0121) {
    const struct CPU_State initial_cpu = {.pc=0x03f8, .a=0x24, .x=0x43, .y=0x7b, .sp=0xbe, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xb4}, {.addr=0x03f8, .value=0x7e}, {.addr=0x03f9, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x03fa, .a=0x24, .x=0x43, .y=0x7b, .sp=0xbe, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xb4}, {.addr=0x03f8, .value=0x7e}, {.addr=0x03f9, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x03f8, .value=0x7e, .type=IO_READ},
        {.addr=0x03f9, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0fc8, .a=0x62, .x=0x4a, .y=0x21, .sp=0x01, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xd6}, {.addr=0x0fc8, .value=0x7e}, {.addr=0x0fc9, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x0fca, .a=0x62, .x=0x4a, .y=0x21, .sp=0x01, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xd6}, {.addr=0x0fc8, .value=0x7e}, {.addr=0x0fc9, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fc8, .value=0x7e, .type=IO_READ},
        {.addr=0x0fc9, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0123) {
    const struct CPU_State initial_cpu = {.pc=0x00a4, .a=0x93, .x=0x56, .y=0xe8, .sp=0xfc, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x7e}, {.addr=0x00a5, .value=0x49}, {.addr=0x0149, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x00a6, .a=0x93, .x=0x56, .y=0xe8, .sp=0xfc, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x7e}, {.addr=0x00a5, .value=0x49}, {.addr=0x0149, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x00a4, .value=0x7e, .type=IO_READ},
        {.addr=0x00a5, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1dde, .a=0x7a, .x=0xd0, .y=0x06, .sp=0x51, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x35}, {.addr=0x1dde, .value=0x7e}, {.addr=0x1ddf, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x1de0, .a=0x7a, .x=0xd0, .y=0x06, .sp=0x51, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x35}, {.addr=0x1dde, .value=0x7e}, {.addr=0x1ddf, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dde, .value=0x7e, .type=IO_READ},
        {.addr=0x1ddf, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0125) {
    const struct CPU_State initial_cpu = {.pc=0x2b49, .a=0x16, .x=0x3f, .y=0x59, .sp=0x8a, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x7b}, {.addr=0x2b49, .value=0x7e}, {.addr=0x2b4a, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x2b4b, .a=0x16, .x=0x3f, .y=0x59, .sp=0x8a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x7b}, {.addr=0x2b49, .value=0x7e}, {.addr=0x2b4a, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b49, .value=0x7e, .type=IO_READ},
        {.addr=0x2b4a, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0dee, .a=0x5e, .x=0xf5, .y=0x80, .sp=0xfb, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0xff}, {.addr=0x0dee, .value=0x7e}, {.addr=0x0def, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x0df0, .a=0x5e, .x=0xf5, .y=0x80, .sp=0xfb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0xff}, {.addr=0x0dee, .value=0x7e}, {.addr=0x0def, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dee, .value=0x7e, .type=IO_READ},
        {.addr=0x0def, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0127) {
    const struct CPU_State initial_cpu = {.pc=0x133c, .a=0x81, .x=0xf2, .y=0xdb, .sp=0x74, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x76}, {.addr=0x133c, .value=0x7e}, {.addr=0x133d, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x133e, .a=0x81, .x=0xf2, .y=0xdb, .sp=0x74, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x76}, {.addr=0x133c, .value=0x7e}, {.addr=0x133d, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x133c, .value=0x7e, .type=IO_READ},
        {.addr=0x133d, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0128) {
    const struct CPU_State initial_cpu = {.pc=0xce9b, .a=0xc3, .x=0x46, .y=0x4c, .sp=0xd9, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x7d}, {.addr=0xce9b, .value=0x7e}, {.addr=0xce9c, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xce9d, .a=0xc3, .x=0x46, .y=0x4c, .sp=0xd9, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x7d}, {.addr=0xce9b, .value=0x7e}, {.addr=0xce9c, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xce9b, .value=0x7e, .type=IO_READ},
        {.addr=0xce9c, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9486, .a=0x2d, .x=0xce, .y=0x30, .sp=0xb5, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x56}, {.addr=0x9486, .value=0x7e}, {.addr=0x9487, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x9488, .a=0x2d, .x=0xce, .y=0x30, .sp=0xb5, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x56}, {.addr=0x9486, .value=0x7e}, {.addr=0x9487, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x9486, .value=0x7e, .type=IO_READ},
        {.addr=0x9487, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8016, .a=0x1a, .x=0x4a, .y=0xb9, .sp=0xff, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x19}, {.addr=0x8016, .value=0x7e}, {.addr=0x8017, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x8018, .a=0x1a, .x=0x4a, .y=0xb9, .sp=0xff, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x19}, {.addr=0x8016, .value=0x7e}, {.addr=0x8017, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x8016, .value=0x7e, .type=IO_READ},
        {.addr=0x8017, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1588, .a=0x1f, .x=0x81, .y=0x7d, .sp=0xa6, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x2f}, {.addr=0x1588, .value=0x7e}, {.addr=0x1589, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x158a, .a=0x1f, .x=0x81, .y=0x7d, .sp=0xa6, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x2f}, {.addr=0x1588, .value=0x7e}, {.addr=0x1589, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1588, .value=0x7e, .type=IO_READ},
        {.addr=0x1589, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012C) {
    const struct CPU_State initial_cpu = {.pc=0x0ebd, .a=0x2e, .x=0x93, .y=0x50, .sp=0xba, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x35}, {.addr=0x0ebd, .value=0x7e}, {.addr=0x0ebe, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x0ebf, .a=0x2e, .x=0x93, .y=0x50, .sp=0xba, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x35}, {.addr=0x0ebd, .value=0x7e}, {.addr=0x0ebe, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ebd, .value=0x7e, .type=IO_READ},
        {.addr=0x0ebe, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3a0a, .a=0x59, .x=0xad, .y=0xcb, .sp=0x9b, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x95}, {.addr=0x3a0a, .value=0x7e}, {.addr=0x3a0b, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x3a0c, .a=0x59, .x=0xad, .y=0xcb, .sp=0x9b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x95}, {.addr=0x3a0a, .value=0x7e}, {.addr=0x3a0b, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a0a, .value=0x7e, .type=IO_READ},
        {.addr=0x3a0b, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012E) {
    const struct CPU_State initial_cpu = {.pc=0x16a9, .a=0x50, .x=0x86, .y=0x0f, .sp=0x85, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x3c}, {.addr=0x16a9, .value=0x7e}, {.addr=0x16aa, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x16ab, .a=0x50, .x=0x86, .y=0x0f, .sp=0x85, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x3c}, {.addr=0x16a9, .value=0x7e}, {.addr=0x16aa, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x16a9, .value=0x7e, .type=IO_READ},
        {.addr=0x16aa, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_012F) {
    const struct CPU_State initial_cpu = {.pc=0x380b, .a=0xdb, .x=0xbc, .y=0xb8, .sp=0x7a, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x15}, {.addr=0x380b, .value=0x7e}, {.addr=0x380c, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x380d, .a=0xdb, .x=0xbc, .y=0xb8, .sp=0x7a, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x15}, {.addr=0x380b, .value=0x7e}, {.addr=0x380c, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x380b, .value=0x7e, .type=IO_READ},
        {.addr=0x380c, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0130) {
    const struct CPU_State initial_cpu = {.pc=0x2466, .a=0x2a, .x=0xb2, .y=0xb8, .sp=0x8d, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x48}, {.addr=0x2466, .value=0x7e}, {.addr=0x2467, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x2468, .a=0x2a, .x=0xb2, .y=0xb8, .sp=0x8d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x48}, {.addr=0x2466, .value=0x7e}, {.addr=0x2467, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x2466, .value=0x7e, .type=IO_READ},
        {.addr=0x2467, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0131) {
    const struct CPU_State initial_cpu = {.pc=0x46ec, .a=0xad, .x=0x60, .y=0x63, .sp=0x2a, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x86}, {.addr=0x46ec, .value=0x7e}, {.addr=0x46ed, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x46ee, .a=0xad, .x=0x60, .y=0x63, .sp=0x2a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x86}, {.addr=0x46ec, .value=0x7e}, {.addr=0x46ed, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x46ec, .value=0x7e, .type=IO_READ},
        {.addr=0x46ed, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0132) {
    const struct CPU_State initial_cpu = {.pc=0x22e7, .a=0x69, .x=0xb2, .y=0xf2, .sp=0x9d, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x59}, {.addr=0x22e7, .value=0x7e}, {.addr=0x22e8, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x22e9, .a=0x69, .x=0xb2, .y=0xf2, .sp=0x9d, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x59}, {.addr=0x22e7, .value=0x7e}, {.addr=0x22e8, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x22e7, .value=0x7e, .type=IO_READ},
        {.addr=0x22e8, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0133) {
    const struct CPU_State initial_cpu = {.pc=0xed9f, .a=0x64, .x=0xde, .y=0xc7, .sp=0x8a, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xd8}, {.addr=0xed9f, .value=0x7e}, {.addr=0xeda0, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xeda1, .a=0x64, .x=0xde, .y=0xc7, .sp=0x8a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xd8}, {.addr=0xed9f, .value=0x7e}, {.addr=0xeda0, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xed9f, .value=0x7e, .type=IO_READ},
        {.addr=0xeda0, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0134) {
    const struct CPU_State initial_cpu = {.pc=0x2e63, .a=0x3e, .x=0xb4, .y=0x40, .sp=0x92, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x09}, {.addr=0x2e63, .value=0x7e}, {.addr=0x2e64, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x2e65, .a=0x3e, .x=0xb4, .y=0x40, .sp=0x92, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x09}, {.addr=0x2e63, .value=0x7e}, {.addr=0x2e64, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e63, .value=0x7e, .type=IO_READ},
        {.addr=0x2e64, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0135) {
    const struct CPU_State initial_cpu = {.pc=0xd6cf, .a=0xe8, .x=0xdd, .y=0x1f, .sp=0xda, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x2d}, {.addr=0xd6cf, .value=0x7e}, {.addr=0xd6d0, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d1, .a=0xe8, .x=0xdd, .y=0x1f, .sp=0xda, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x2d}, {.addr=0xd6cf, .value=0x7e}, {.addr=0xd6d0, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6cf, .value=0x7e, .type=IO_READ},
        {.addr=0xd6d0, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0136) {
    const struct CPU_State initial_cpu = {.pc=0x3798, .a=0x9a, .x=0x95, .y=0x40, .sp=0xfa, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xfc}, {.addr=0x3798, .value=0x7e}, {.addr=0x3799, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x379a, .a=0x9a, .x=0x95, .y=0x40, .sp=0xfa, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xfc}, {.addr=0x3798, .value=0x7e}, {.addr=0x3799, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x3798, .value=0x7e, .type=IO_READ},
        {.addr=0x3799, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0137) {
    const struct CPU_State initial_cpu = {.pc=0x7cbb, .a=0x8a, .x=0x98, .y=0x21, .sp=0x0f, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x7a}, {.addr=0x7cbb, .value=0x7e}, {.addr=0x7cbc, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x7cbd, .a=0x8a, .x=0x98, .y=0x21, .sp=0x0f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x7a}, {.addr=0x7cbb, .value=0x7e}, {.addr=0x7cbc, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cbb, .value=0x7e, .type=IO_READ},
        {.addr=0x7cbc, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0138) {
    const struct CPU_State initial_cpu = {.pc=0x50a2, .a=0x46, .x=0x91, .y=0x9a, .sp=0x79, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x15}, {.addr=0x50a2, .value=0x7e}, {.addr=0x50a3, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x50a4, .a=0x46, .x=0x91, .y=0x9a, .sp=0x79, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x15}, {.addr=0x50a2, .value=0x7e}, {.addr=0x50a3, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x50a2, .value=0x7e, .type=IO_READ},
        {.addr=0x50a3, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8daa, .a=0x01, .x=0xa4, .y=0x3b, .sp=0x80, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xb0}, {.addr=0x8daa, .value=0x7e}, {.addr=0x8dab, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x8dac, .a=0x01, .x=0xa4, .y=0x3b, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xb0}, {.addr=0x8daa, .value=0x7e}, {.addr=0x8dab, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x8daa, .value=0x7e, .type=IO_READ},
        {.addr=0x8dab, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013A) {
    const struct CPU_State initial_cpu = {.pc=0xca20, .a=0x96, .x=0xa4, .y=0x0f, .sp=0x9b, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x32}, {.addr=0xca20, .value=0x7e}, {.addr=0xca21, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xca22, .a=0x96, .x=0xa4, .y=0x0f, .sp=0x9b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x32}, {.addr=0xca20, .value=0x7e}, {.addr=0xca21, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xca20, .value=0x7e, .type=IO_READ},
        {.addr=0xca21, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013B) {
    const struct CPU_State initial_cpu = {.pc=0xa22c, .a=0xfe, .x=0x64, .y=0x9d, .sp=0x79, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x75}, {.addr=0xa22c, .value=0x7e}, {.addr=0xa22d, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xa22e, .a=0xfe, .x=0x64, .y=0x9d, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x75}, {.addr=0xa22c, .value=0x7e}, {.addr=0xa22d, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa22c, .value=0x7e, .type=IO_READ},
        {.addr=0xa22d, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013C) {
    const struct CPU_State initial_cpu = {.pc=0x4bd3, .a=0x70, .x=0xf3, .y=0x1e, .sp=0xc0, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x2e}, {.addr=0x4bd3, .value=0x7e}, {.addr=0x4bd4, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x4bd5, .a=0x70, .x=0xf3, .y=0x1e, .sp=0xc0, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x2e}, {.addr=0x4bd3, .value=0x7e}, {.addr=0x4bd4, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bd3, .value=0x7e, .type=IO_READ},
        {.addr=0x4bd4, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013D) {
    const struct CPU_State initial_cpu = {.pc=0x1cb9, .a=0xcb, .x=0x91, .y=0x10, .sp=0x30, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x52}, {.addr=0x1cb9, .value=0x7e}, {.addr=0x1cba, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x1cbb, .a=0xcb, .x=0x91, .y=0x10, .sp=0x30, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x52}, {.addr=0x1cb9, .value=0x7e}, {.addr=0x1cba, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cb9, .value=0x7e, .type=IO_READ},
        {.addr=0x1cba, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013E) {
    const struct CPU_State initial_cpu = {.pc=0x91ee, .a=0x3e, .x=0x29, .y=0xd0, .sp=0xac, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xf5}, {.addr=0x91ee, .value=0x7e}, {.addr=0x91ef, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x91f0, .a=0x3e, .x=0x29, .y=0xd0, .sp=0xac, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xf5}, {.addr=0x91ee, .value=0x7e}, {.addr=0x91ef, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x91ee, .value=0x7e, .type=IO_READ},
        {.addr=0x91ef, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_013F) {
    const struct CPU_State initial_cpu = {.pc=0x214f, .a=0x3f, .x=0x49, .y=0x2b, .sp=0x01, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xcb}, {.addr=0x214f, .value=0x7e}, {.addr=0x2150, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x2151, .a=0x3f, .x=0x49, .y=0x2b, .sp=0x01, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xcb}, {.addr=0x214f, .value=0x7e}, {.addr=0x2150, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x214f, .value=0x7e, .type=IO_READ},
        {.addr=0x2150, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0140) {
    const struct CPU_State initial_cpu = {.pc=0x1994, .a=0x32, .x=0xf5, .y=0x59, .sp=0xf8, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xa1}, {.addr=0x1994, .value=0x7e}, {.addr=0x1995, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x1996, .a=0x32, .x=0xf5, .y=0x59, .sp=0xf8, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xa1}, {.addr=0x1994, .value=0x7e}, {.addr=0x1995, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1994, .value=0x7e, .type=IO_READ},
        {.addr=0x1995, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0141) {
    const struct CPU_State initial_cpu = {.pc=0x11f8, .a=0xa5, .x=0x1c, .y=0xc2, .sp=0x7d, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0xf7}, {.addr=0x11f8, .value=0x7e}, {.addr=0x11f9, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x11fa, .a=0xa5, .x=0x1c, .y=0xc2, .sp=0x7d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0xf7}, {.addr=0x11f8, .value=0x7e}, {.addr=0x11f9, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x11f8, .value=0x7e, .type=IO_READ},
        {.addr=0x11f9, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0142) {
    const struct CPU_State initial_cpu = {.pc=0xe5e8, .a=0x79, .x=0xcc, .y=0x4e, .sp=0x4b, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xa6}, {.addr=0xe5e8, .value=0x7e}, {.addr=0xe5e9, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xe5ea, .a=0x79, .x=0xcc, .y=0x4e, .sp=0x4b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xa6}, {.addr=0xe5e8, .value=0x7e}, {.addr=0xe5e9, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5e8, .value=0x7e, .type=IO_READ},
        {.addr=0xe5e9, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0143) {
    const struct CPU_State initial_cpu = {.pc=0xddee, .a=0xe0, .x=0x3f, .y=0x08, .sp=0x8c, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x87}, {.addr=0xddee, .value=0x7e}, {.addr=0xddef, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xddf0, .a=0xe0, .x=0x3f, .y=0x08, .sp=0x8c, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x87}, {.addr=0xddee, .value=0x7e}, {.addr=0xddef, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xddee, .value=0x7e, .type=IO_READ},
        {.addr=0xddef, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0144) {
    const struct CPU_State initial_cpu = {.pc=0xb48a, .a=0xf3, .x=0xe5, .y=0xf3, .sp=0xac, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x4f}, {.addr=0xb48a, .value=0x7e}, {.addr=0xb48b, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xb48c, .a=0xf3, .x=0xe5, .y=0xf3, .sp=0xac, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x4f}, {.addr=0xb48a, .value=0x7e}, {.addr=0xb48b, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xb48a, .value=0x7e, .type=IO_READ},
        {.addr=0xb48b, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0145) {
    const struct CPU_State initial_cpu = {.pc=0xa822, .a=0x42, .x=0x59, .y=0x1f, .sp=0x3b, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x4c}, {.addr=0xa822, .value=0x7e}, {.addr=0xa823, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xa824, .a=0x42, .x=0x59, .y=0x1f, .sp=0x3b, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x4c}, {.addr=0xa822, .value=0x7e}, {.addr=0xa823, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xa822, .value=0x7e, .type=IO_READ},
        {.addr=0xa823, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0146) {
    const struct CPU_State initial_cpu = {.pc=0x6548, .a=0x20, .x=0xd1, .y=0xbb, .sp=0xc6, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xc9}, {.addr=0x6548, .value=0x7e}, {.addr=0x6549, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x654a, .a=0x20, .x=0xd1, .y=0xbb, .sp=0xc6, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xc9}, {.addr=0x6548, .value=0x7e}, {.addr=0x6549, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6548, .value=0x7e, .type=IO_READ},
        {.addr=0x6549, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0147) {
    const struct CPU_State initial_cpu = {.pc=0x1c71, .a=0xb0, .x=0x9f, .y=0x8b, .sp=0xeb, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xf2}, {.addr=0x1c71, .value=0x7e}, {.addr=0x1c72, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x1c73, .a=0xb0, .x=0x9f, .y=0x8b, .sp=0xeb, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xf2}, {.addr=0x1c71, .value=0x7e}, {.addr=0x1c72, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c71, .value=0x7e, .type=IO_READ},
        {.addr=0x1c72, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0148) {
    const struct CPU_State initial_cpu = {.pc=0xfc18, .a=0x12, .x=0x0e, .y=0x6a, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x4e}, {.addr=0xfc18, .value=0x7e}, {.addr=0xfc19, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xfc1a, .a=0x12, .x=0x0e, .y=0x6a, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x4e}, {.addr=0xfc18, .value=0x7e}, {.addr=0xfc19, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc18, .value=0x7e, .type=IO_READ},
        {.addr=0xfc19, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0149) {
    const struct CPU_State initial_cpu = {.pc=0x3aad, .a=0xa5, .x=0x2d, .y=0x4e, .sp=0x21, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xb7}, {.addr=0x3aad, .value=0x7e}, {.addr=0x3aae, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x3aaf, .a=0xa5, .x=0x2d, .y=0x4e, .sp=0x21, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xb7}, {.addr=0x3aad, .value=0x7e}, {.addr=0x3aae, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aad, .value=0x7e, .type=IO_READ},
        {.addr=0x3aae, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014A) {
    const struct CPU_State initial_cpu = {.pc=0x87e6, .a=0xc0, .x=0xba, .y=0x08, .sp=0x83, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x34}, {.addr=0x87e6, .value=0x7e}, {.addr=0x87e7, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x87e8, .a=0xc0, .x=0xba, .y=0x08, .sp=0x83, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x34}, {.addr=0x87e6, .value=0x7e}, {.addr=0x87e7, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x87e6, .value=0x7e, .type=IO_READ},
        {.addr=0x87e7, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014B) {
    const struct CPU_State initial_cpu = {.pc=0x0707, .a=0x49, .x=0xf9, .y=0x44, .sp=0xec, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xbf}, {.addr=0x0707, .value=0x7e}, {.addr=0x0708, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x0709, .a=0x49, .x=0xf9, .y=0x44, .sp=0xec, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xbf}, {.addr=0x0707, .value=0x7e}, {.addr=0x0708, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0707, .value=0x7e, .type=IO_READ},
        {.addr=0x0708, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2e08, .a=0x4f, .x=0x31, .y=0x60, .sp=0xac, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x1f}, {.addr=0x2e08, .value=0x7e}, {.addr=0x2e09, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x2e0a, .a=0x4f, .x=0x31, .y=0x60, .sp=0xac, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x1f}, {.addr=0x2e08, .value=0x7e}, {.addr=0x2e09, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e08, .value=0x7e, .type=IO_READ},
        {.addr=0x2e09, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014D) {
    const struct CPU_State initial_cpu = {.pc=0x4ada, .a=0xa4, .x=0x1b, .y=0xf4, .sp=0x14, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xfd}, {.addr=0x4ada, .value=0x7e}, {.addr=0x4adb, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x4adc, .a=0xa4, .x=0x1b, .y=0xf4, .sp=0x14, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xfd}, {.addr=0x4ada, .value=0x7e}, {.addr=0x4adb, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ada, .value=0x7e, .type=IO_READ},
        {.addr=0x4adb, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014E) {
    const struct CPU_State initial_cpu = {.pc=0x5a34, .a=0x6d, .x=0x10, .y=0xef, .sp=0xa7, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x6c}, {.addr=0x5a34, .value=0x7e}, {.addr=0x5a35, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x5a36, .a=0x6d, .x=0x10, .y=0xef, .sp=0xa7, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x6c}, {.addr=0x5a34, .value=0x7e}, {.addr=0x5a35, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a34, .value=0x7e, .type=IO_READ},
        {.addr=0x5a35, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_014F) {
    const struct CPU_State initial_cpu = {.pc=0xace7, .a=0xde, .x=0xbd, .y=0x37, .sp=0x0b, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xc7}, {.addr=0xace7, .value=0x7e}, {.addr=0xace8, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xace9, .a=0xde, .x=0xbd, .y=0x37, .sp=0x0b, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xc7}, {.addr=0xace7, .value=0x7e}, {.addr=0xace8, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xace7, .value=0x7e, .type=IO_READ},
        {.addr=0xace8, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0150) {
    const struct CPU_State initial_cpu = {.pc=0x6b2f, .a=0xdc, .x=0x35, .y=0xc1, .sp=0x5e, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x17}, {.addr=0x6b2f, .value=0x7e}, {.addr=0x6b30, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x6b31, .a=0xdc, .x=0x35, .y=0xc1, .sp=0x5e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x17}, {.addr=0x6b2f, .value=0x7e}, {.addr=0x6b30, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b2f, .value=0x7e, .type=IO_READ},
        {.addr=0x6b30, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0152) {
    const struct CPU_State initial_cpu = {.pc=0xa5e1, .a=0xbe, .x=0xa4, .y=0x55, .sp=0xbe, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x88}, {.addr=0xa5e1, .value=0x7e}, {.addr=0xa5e2, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa5e3, .a=0xbe, .x=0xa4, .y=0x55, .sp=0xbe, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x88}, {.addr=0xa5e1, .value=0x7e}, {.addr=0xa5e2, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5e1, .value=0x7e, .type=IO_READ},
        {.addr=0xa5e2, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0153) {
    const struct CPU_State initial_cpu = {.pc=0xacbd, .a=0xe9, .x=0x53, .y=0xb7, .sp=0x7d, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xab}, {.addr=0xacbd, .value=0x7e}, {.addr=0xacbe, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xacbf, .a=0xe9, .x=0x53, .y=0xb7, .sp=0x7d, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xab}, {.addr=0xacbd, .value=0x7e}, {.addr=0xacbe, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xacbd, .value=0x7e, .type=IO_READ},
        {.addr=0xacbe, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0154) {
    const struct CPU_State initial_cpu = {.pc=0xf8b2, .a=0x04, .x=0x55, .y=0xe0, .sp=0xa5, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x19}, {.addr=0xf8b2, .value=0x7e}, {.addr=0xf8b3, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xf8b4, .a=0x04, .x=0x55, .y=0xe0, .sp=0xa5, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x19}, {.addr=0xf8b2, .value=0x7e}, {.addr=0xf8b3, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8b2, .value=0x7e, .type=IO_READ},
        {.addr=0xf8b3, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0155) {
    const struct CPU_State initial_cpu = {.pc=0x110c, .a=0xf7, .x=0x8d, .y=0xb8, .sp=0x7f, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x06}, {.addr=0x110c, .value=0x7e}, {.addr=0x110d, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x110e, .a=0xf7, .x=0x8d, .y=0xb8, .sp=0x7f, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x06}, {.addr=0x110c, .value=0x7e}, {.addr=0x110d, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x110c, .value=0x7e, .type=IO_READ},
        {.addr=0x110d, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0156) {
    const struct CPU_State initial_cpu = {.pc=0xb71d, .a=0xc3, .x=0xc9, .y=0x76, .sp=0xbd, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xe9}, {.addr=0xb71d, .value=0x7e}, {.addr=0xb71e, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xb71f, .a=0xc3, .x=0xc9, .y=0x76, .sp=0xbd, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xe9}, {.addr=0xb71d, .value=0x7e}, {.addr=0xb71e, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xb71d, .value=0x7e, .type=IO_READ},
        {.addr=0xb71e, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0157) {
    const struct CPU_State initial_cpu = {.pc=0xed0e, .a=0xa8, .x=0xad, .y=0xe5, .sp=0x90, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x1c}, {.addr=0xed0e, .value=0x7e}, {.addr=0xed0f, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xed10, .a=0xa8, .x=0xad, .y=0xe5, .sp=0x90, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x1c}, {.addr=0xed0e, .value=0x7e}, {.addr=0xed0f, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xed0e, .value=0x7e, .type=IO_READ},
        {.addr=0xed0f, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc9a5, .a=0x7e, .x=0x80, .y=0x69, .sp=0x79, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x72}, {.addr=0xc9a5, .value=0x7e}, {.addr=0xc9a6, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xc9a7, .a=0x7e, .x=0x80, .y=0x69, .sp=0x79, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x72}, {.addr=0xc9a5, .value=0x7e}, {.addr=0xc9a6, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9a5, .value=0x7e, .type=IO_READ},
        {.addr=0xc9a6, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0159) {
    const struct CPU_State initial_cpu = {.pc=0xa219, .a=0x34, .x=0x94, .y=0x2d, .sp=0xd8, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x0c}, {.addr=0xa219, .value=0x7e}, {.addr=0xa21a, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xa21b, .a=0x34, .x=0x94, .y=0x2d, .sp=0xd8, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x0c}, {.addr=0xa219, .value=0x7e}, {.addr=0xa21a, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa219, .value=0x7e, .type=IO_READ},
        {.addr=0xa21a, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_015A) {
    const struct CPU_State initial_cpu = {.pc=0x7f9a, .a=0xec, .x=0xb6, .y=0x08, .sp=0x3e, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xc1}, {.addr=0x7f9a, .value=0x7e}, {.addr=0x7f9b, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x7f9c, .a=0xec, .x=0xb6, .y=0x08, .sp=0x3e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xc1}, {.addr=0x7f9a, .value=0x7e}, {.addr=0x7f9b, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f9a, .value=0x7e, .type=IO_READ},
        {.addr=0x7f9b, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_015B) {
    const struct CPU_State initial_cpu = {.pc=0xc624, .a=0x08, .x=0x06, .y=0xff, .sp=0x7d, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x23}, {.addr=0xc624, .value=0x7e}, {.addr=0xc625, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xc626, .a=0x08, .x=0x06, .y=0xff, .sp=0x7d, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x23}, {.addr=0xc624, .value=0x7e}, {.addr=0xc625, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc624, .value=0x7e, .type=IO_READ},
        {.addr=0xc625, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_015C) {
    const struct CPU_State initial_cpu = {.pc=0x7baa, .a=0x51, .x=0x6a, .y=0xc1, .sp=0xca, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x71}, {.addr=0x7baa, .value=0x7e}, {.addr=0x7bab, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x7bac, .a=0x51, .x=0x6a, .y=0xc1, .sp=0xca, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x71}, {.addr=0x7baa, .value=0x7e}, {.addr=0x7bab, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x7baa, .value=0x7e, .type=IO_READ},
        {.addr=0x7bab, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_015D) {
    const struct CPU_State initial_cpu = {.pc=0x537c, .a=0xb3, .x=0x59, .y=0xa7, .sp=0x88, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x59}, {.addr=0x537c, .value=0x7e}, {.addr=0x537d, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x537e, .a=0xb3, .x=0x59, .y=0xa7, .sp=0x88, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x59}, {.addr=0x537c, .value=0x7e}, {.addr=0x537d, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x537c, .value=0x7e, .type=IO_READ},
        {.addr=0x537d, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_015F) {
    const struct CPU_State initial_cpu = {.pc=0x08da, .a=0xc8, .x=0x3f, .y=0xa3, .sp=0xc7, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x96}, {.addr=0x08da, .value=0x7e}, {.addr=0x08db, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x08dc, .a=0xc8, .x=0x3f, .y=0xa3, .sp=0xc7, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x96}, {.addr=0x08da, .value=0x7e}, {.addr=0x08db, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x08da, .value=0x7e, .type=IO_READ},
        {.addr=0x08db, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0160) {
    const struct CPU_State initial_cpu = {.pc=0x65b3, .a=0xd3, .x=0x77, .y=0xd8, .sp=0xdd, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xc9}, {.addr=0x65b3, .value=0x7e}, {.addr=0x65b4, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x65b5, .a=0xd3, .x=0x77, .y=0xd8, .sp=0xdd, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xc9}, {.addr=0x65b3, .value=0x7e}, {.addr=0x65b4, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x65b3, .value=0x7e, .type=IO_READ},
        {.addr=0x65b4, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0161) {
    const struct CPU_State initial_cpu = {.pc=0x43e8, .a=0xc2, .x=0x49, .y=0x48, .sp=0xc0, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xd6}, {.addr=0x43e8, .value=0x7e}, {.addr=0x43e9, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x43ea, .a=0xc2, .x=0x49, .y=0x48, .sp=0xc0, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xd6}, {.addr=0x43e8, .value=0x7e}, {.addr=0x43e9, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x43e8, .value=0x7e, .type=IO_READ},
        {.addr=0x43e9, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0162) {
    const struct CPU_State initial_cpu = {.pc=0x6f8a, .a=0xa1, .x=0xb2, .y=0x66, .sp=0x25, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x2b}, {.addr=0x6f8a, .value=0x7e}, {.addr=0x6f8b, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x6f8c, .a=0xa1, .x=0xb2, .y=0x66, .sp=0x25, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x2b}, {.addr=0x6f8a, .value=0x7e}, {.addr=0x6f8b, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f8a, .value=0x7e, .type=IO_READ},
        {.addr=0x6f8b, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0163) {
    const struct CPU_State initial_cpu = {.pc=0xff13, .a=0x27, .x=0xff, .y=0x8a, .sp=0xb3, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x33}, {.addr=0xff13, .value=0x7e}, {.addr=0xff14, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xff15, .a=0x27, .x=0xff, .y=0x8a, .sp=0xb3, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x33}, {.addr=0xff13, .value=0x7e}, {.addr=0xff14, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xff13, .value=0x7e, .type=IO_READ},
        {.addr=0xff14, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0164) {
    const struct CPU_State initial_cpu = {.pc=0xf3b8, .a=0x6a, .x=0xd5, .y=0x94, .sp=0xda, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x2d}, {.addr=0xf3b8, .value=0x7e}, {.addr=0xf3b9, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xf3ba, .a=0x6a, .x=0xd5, .y=0x94, .sp=0xda, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x2d}, {.addr=0xf3b8, .value=0x7e}, {.addr=0xf3b9, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3b8, .value=0x7e, .type=IO_READ},
        {.addr=0xf3b9, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0165) {
    const struct CPU_State initial_cpu = {.pc=0x7860, .a=0xaa, .x=0xfb, .y=0xde, .sp=0x00, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xa5}, {.addr=0x7860, .value=0x7e}, {.addr=0x7861, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x7862, .a=0xaa, .x=0xfb, .y=0xde, .sp=0x00, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xa5}, {.addr=0x7860, .value=0x7e}, {.addr=0x7861, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x7860, .value=0x7e, .type=IO_READ},
        {.addr=0x7861, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7e4e, .a=0xda, .x=0x0f, .y=0x55, .sp=0xf9, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x75}, {.addr=0x7e4e, .value=0x7e}, {.addr=0x7e4f, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x7e50, .a=0xda, .x=0x0f, .y=0x55, .sp=0xf9, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x75}, {.addr=0x7e4e, .value=0x7e}, {.addr=0x7e4f, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e4e, .value=0x7e, .type=IO_READ},
        {.addr=0x7e4f, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa103, .a=0xc3, .x=0x35, .y=0xde, .sp=0x95, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x36}, {.addr=0xa103, .value=0x7e}, {.addr=0xa104, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xa105, .a=0xc3, .x=0x35, .y=0xde, .sp=0x95, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x36}, {.addr=0xa103, .value=0x7e}, {.addr=0xa104, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xa103, .value=0x7e, .type=IO_READ},
        {.addr=0xa104, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0168) {
    const struct CPU_State initial_cpu = {.pc=0x388c, .a=0x09, .x=0xb1, .y=0xac, .sp=0x31, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xbd}, {.addr=0x388c, .value=0x7e}, {.addr=0x388d, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x388e, .a=0x09, .x=0xb1, .y=0xac, .sp=0x31, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xbd}, {.addr=0x388c, .value=0x7e}, {.addr=0x388d, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x388c, .value=0x7e, .type=IO_READ},
        {.addr=0x388d, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0169) {
    const struct CPU_State initial_cpu = {.pc=0x36de, .a=0x88, .x=0x98, .y=0xe1, .sp=0xe4, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x31}, {.addr=0x36de, .value=0x7e}, {.addr=0x36df, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x36e0, .a=0x88, .x=0x98, .y=0xe1, .sp=0xe4, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x31}, {.addr=0x36de, .value=0x7e}, {.addr=0x36df, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x36de, .value=0x7e, .type=IO_READ},
        {.addr=0x36df, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016A) {
    const struct CPU_State initial_cpu = {.pc=0xd330, .a=0x0e, .x=0x9f, .y=0xad, .sp=0xd8, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xa1}, {.addr=0xd330, .value=0x7e}, {.addr=0xd331, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xd332, .a=0x0e, .x=0x9f, .y=0xad, .sp=0xd8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xa1}, {.addr=0xd330, .value=0x7e}, {.addr=0xd331, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd330, .value=0x7e, .type=IO_READ},
        {.addr=0xd331, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016B) {
    const struct CPU_State initial_cpu = {.pc=0x3aac, .a=0xcc, .x=0x74, .y=0x03, .sp=0xba, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xd4}, {.addr=0x3aac, .value=0x7e}, {.addr=0x3aad, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x3aae, .a=0xcc, .x=0x74, .y=0x03, .sp=0xba, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xd4}, {.addr=0x3aac, .value=0x7e}, {.addr=0x3aad, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aac, .value=0x7e, .type=IO_READ},
        {.addr=0x3aad, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016C) {
    const struct CPU_State initial_cpu = {.pc=0x97ab, .a=0x77, .x=0xdd, .y=0x1b, .sp=0xe3, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xf4}, {.addr=0x97ab, .value=0x7e}, {.addr=0x97ac, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x97ad, .a=0x77, .x=0xdd, .y=0x1b, .sp=0xe3, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xf4}, {.addr=0x97ab, .value=0x7e}, {.addr=0x97ac, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x97ab, .value=0x7e, .type=IO_READ},
        {.addr=0x97ac, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016D) {
    const struct CPU_State initial_cpu = {.pc=0xec05, .a=0x5d, .x=0x8e, .y=0x9f, .sp=0x34, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x9e}, {.addr=0xec05, .value=0x7e}, {.addr=0xec06, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xec07, .a=0x5d, .x=0x8e, .y=0x9f, .sp=0x34, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x9e}, {.addr=0xec05, .value=0x7e}, {.addr=0xec06, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xec05, .value=0x7e, .type=IO_READ},
        {.addr=0xec06, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016E) {
    const struct CPU_State initial_cpu = {.pc=0xb4ab, .a=0x80, .x=0xfa, .y=0x00, .sp=0xc2, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x72}, {.addr=0xb4ab, .value=0x7e}, {.addr=0xb4ac, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xb4ad, .a=0x80, .x=0xfa, .y=0x00, .sp=0xc2, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x72}, {.addr=0xb4ab, .value=0x7e}, {.addr=0xb4ac, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4ab, .value=0x7e, .type=IO_READ},
        {.addr=0xb4ac, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa6a1, .a=0xbf, .x=0x51, .y=0xcc, .sp=0x3e, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x50}, {.addr=0xa6a1, .value=0x7e}, {.addr=0xa6a2, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xa6a3, .a=0xbf, .x=0x51, .y=0xcc, .sp=0x3e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x50}, {.addr=0xa6a1, .value=0x7e}, {.addr=0xa6a2, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6a1, .value=0x7e, .type=IO_READ},
        {.addr=0xa6a2, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0170) {
    const struct CPU_State initial_cpu = {.pc=0xd994, .a=0xf8, .x=0x87, .y=0x4e, .sp=0x68, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xe2}, {.addr=0xd994, .value=0x7e}, {.addr=0xd995, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xd996, .a=0xf8, .x=0x87, .y=0x4e, .sp=0x68, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xe2}, {.addr=0xd994, .value=0x7e}, {.addr=0xd995, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xd994, .value=0x7e, .type=IO_READ},
        {.addr=0xd995, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0171) {
    const struct CPU_State initial_cpu = {.pc=0xec78, .a=0x66, .x=0xea, .y=0xf1, .sp=0x49, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xc1}, {.addr=0xec78, .value=0x7e}, {.addr=0xec79, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xec7a, .a=0x66, .x=0xea, .y=0xf1, .sp=0x49, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xc1}, {.addr=0xec78, .value=0x7e}, {.addr=0xec79, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xec78, .value=0x7e, .type=IO_READ},
        {.addr=0xec79, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0172) {
    const struct CPU_State initial_cpu = {.pc=0x1561, .a=0x82, .x=0xbe, .y=0x63, .sp=0x95, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x67}, {.addr=0x1561, .value=0x7e}, {.addr=0x1562, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x1563, .a=0x82, .x=0xbe, .y=0x63, .sp=0x95, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x67}, {.addr=0x1561, .value=0x7e}, {.addr=0x1562, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x1561, .value=0x7e, .type=IO_READ},
        {.addr=0x1562, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0173) {
    const struct CPU_State initial_cpu = {.pc=0x6d53, .a=0x19, .x=0x58, .y=0x04, .sp=0x33, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xd3}, {.addr=0x6d53, .value=0x7e}, {.addr=0x6d54, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x6d55, .a=0x19, .x=0x58, .y=0x04, .sp=0x33, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xd3}, {.addr=0x6d53, .value=0x7e}, {.addr=0x6d54, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d53, .value=0x7e, .type=IO_READ},
        {.addr=0x6d54, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0174) {
    const struct CPU_State initial_cpu = {.pc=0xf24d, .a=0x73, .x=0x9b, .y=0x60, .sp=0x34, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x3c}, {.addr=0xf24d, .value=0x7e}, {.addr=0xf24e, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xf24f, .a=0x73, .x=0x9b, .y=0x60, .sp=0x34, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x3c}, {.addr=0xf24d, .value=0x7e}, {.addr=0xf24e, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf24d, .value=0x7e, .type=IO_READ},
        {.addr=0xf24e, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0175) {
    const struct CPU_State initial_cpu = {.pc=0xd2c9, .a=0xf7, .x=0x4d, .y=0xea, .sp=0xd7, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x56}, {.addr=0xd2c9, .value=0x7e}, {.addr=0xd2ca, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xd2cb, .a=0xf7, .x=0x4d, .y=0xea, .sp=0xd7, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x56}, {.addr=0xd2c9, .value=0x7e}, {.addr=0xd2ca, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2c9, .value=0x7e, .type=IO_READ},
        {.addr=0xd2ca, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0176) {
    const struct CPU_State initial_cpu = {.pc=0x871e, .a=0x2f, .x=0x8c, .y=0x41, .sp=0x05, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x40}, {.addr=0x871e, .value=0x7e}, {.addr=0x871f, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x8720, .a=0x2f, .x=0x8c, .y=0x41, .sp=0x05, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x40}, {.addr=0x871e, .value=0x7e}, {.addr=0x871f, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x871e, .value=0x7e, .type=IO_READ},
        {.addr=0x871f, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0177) {
    const struct CPU_State initial_cpu = {.pc=0x959f, .a=0x0f, .x=0x67, .y=0xff, .sp=0x84, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xe3}, {.addr=0x959f, .value=0x7e}, {.addr=0x95a0, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x95a1, .a=0x0f, .x=0x67, .y=0xff, .sp=0x84, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xe3}, {.addr=0x959f, .value=0x7e}, {.addr=0x95a0, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x959f, .value=0x7e, .type=IO_READ},
        {.addr=0x95a0, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0178) {
    const struct CPU_State initial_cpu = {.pc=0x3428, .a=0x3f, .x=0xb1, .y=0x3f, .sp=0xea, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x8d}, {.addr=0x3428, .value=0x7e}, {.addr=0x3429, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x342a, .a=0x3f, .x=0xb1, .y=0x3f, .sp=0xea, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x8d}, {.addr=0x3428, .value=0x7e}, {.addr=0x3429, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3428, .value=0x7e, .type=IO_READ},
        {.addr=0x3429, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0179) {
    const struct CPU_State initial_cpu = {.pc=0x58c9, .a=0xf7, .x=0xc8, .y=0x65, .sp=0x04, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x6d}, {.addr=0x58c9, .value=0x7e}, {.addr=0x58ca, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x58cb, .a=0xf7, .x=0xc8, .y=0x65, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x6d}, {.addr=0x58c9, .value=0x7e}, {.addr=0x58ca, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x58c9, .value=0x7e, .type=IO_READ},
        {.addr=0x58ca, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017A) {
    const struct CPU_State initial_cpu = {.pc=0xc678, .a=0xff, .x=0xc4, .y=0x7f, .sp=0xcc, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xd2}, {.addr=0xc678, .value=0x7e}, {.addr=0xc679, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xc67a, .a=0xff, .x=0xc4, .y=0x7f, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xd2}, {.addr=0xc678, .value=0x7e}, {.addr=0xc679, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xc678, .value=0x7e, .type=IO_READ},
        {.addr=0xc679, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017B) {
    const struct CPU_State initial_cpu = {.pc=0x0c03, .a=0x41, .x=0xb4, .y=0x4f, .sp=0x6f, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xfd}, {.addr=0x0c03, .value=0x7e}, {.addr=0x0c04, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x0c05, .a=0x41, .x=0xb4, .y=0x4f, .sp=0x6f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xfd}, {.addr=0x0c03, .value=0x7e}, {.addr=0x0c04, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c03, .value=0x7e, .type=IO_READ},
        {.addr=0x0c04, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017C) {
    const struct CPU_State initial_cpu = {.pc=0x1d5f, .a=0xc7, .x=0xac, .y=0x44, .sp=0x29, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x81}, {.addr=0x1d5f, .value=0x7e}, {.addr=0x1d60, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x1d61, .a=0xc7, .x=0xac, .y=0x44, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x81}, {.addr=0x1d5f, .value=0x7e}, {.addr=0x1d60, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d5f, .value=0x7e, .type=IO_READ},
        {.addr=0x1d60, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017D) {
    const struct CPU_State initial_cpu = {.pc=0x3a6c, .a=0x05, .x=0xad, .y=0xf1, .sp=0x64, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x5a}, {.addr=0x3a6c, .value=0x7e}, {.addr=0x3a6d, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x3a6e, .a=0x05, .x=0xad, .y=0xf1, .sp=0x64, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x5a}, {.addr=0x3a6c, .value=0x7e}, {.addr=0x3a6d, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a6c, .value=0x7e, .type=IO_READ},
        {.addr=0x3a6d, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017E) {
    const struct CPU_State initial_cpu = {.pc=0xd586, .a=0xa4, .x=0x95, .y=0x91, .sp=0x6a, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x13}, {.addr=0xd586, .value=0x7e}, {.addr=0xd587, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xd588, .a=0xa4, .x=0x95, .y=0x91, .sp=0x6a, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x13}, {.addr=0xd586, .value=0x7e}, {.addr=0xd587, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd586, .value=0x7e, .type=IO_READ},
        {.addr=0xd587, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_017F) {
    const struct CPU_State initial_cpu = {.pc=0x28a1, .a=0x92, .x=0x9c, .y=0x90, .sp=0x3b, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xe4}, {.addr=0x28a1, .value=0x7e}, {.addr=0x28a2, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x28a3, .a=0x92, .x=0x9c, .y=0x90, .sp=0x3b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xe4}, {.addr=0x28a1, .value=0x7e}, {.addr=0x28a2, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x28a1, .value=0x7e, .type=IO_READ},
        {.addr=0x28a2, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6843, .a=0xf1, .x=0x89, .y=0xbc, .sp=0xfe, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x6f}, {.addr=0x6843, .value=0x7e}, {.addr=0x6844, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x6845, .a=0xf1, .x=0x89, .y=0xbc, .sp=0xfe, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x6f}, {.addr=0x6843, .value=0x7e}, {.addr=0x6844, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6843, .value=0x7e, .type=IO_READ},
        {.addr=0x6844, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0181) {
    const struct CPU_State initial_cpu = {.pc=0x3e62, .a=0x08, .x=0xf3, .y=0x00, .sp=0xc2, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x85}, {.addr=0x3e62, .value=0x7e}, {.addr=0x3e63, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x3e64, .a=0x08, .x=0xf3, .y=0x00, .sp=0xc2, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x85}, {.addr=0x3e62, .value=0x7e}, {.addr=0x3e63, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e62, .value=0x7e, .type=IO_READ},
        {.addr=0x3e63, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0182) {
    const struct CPU_State initial_cpu = {.pc=0x30e2, .a=0x3c, .x=0x61, .y=0xff, .sp=0x20, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x41}, {.addr=0x30e2, .value=0x7e}, {.addr=0x30e3, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x30e4, .a=0x3c, .x=0x61, .y=0xff, .sp=0x20, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x41}, {.addr=0x30e2, .value=0x7e}, {.addr=0x30e3, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x30e2, .value=0x7e, .type=IO_READ},
        {.addr=0x30e3, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0183) {
    const struct CPU_State initial_cpu = {.pc=0x7b78, .a=0x03, .x=0xe1, .y=0x7c, .sp=0xb9, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x3b}, {.addr=0x7b78, .value=0x7e}, {.addr=0x7b79, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x7b7a, .a=0x03, .x=0xe1, .y=0x7c, .sp=0xb9, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x3b}, {.addr=0x7b78, .value=0x7e}, {.addr=0x7b79, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b78, .value=0x7e, .type=IO_READ},
        {.addr=0x7b79, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0184) {
    const struct CPU_State initial_cpu = {.pc=0x59b5, .a=0xd7, .x=0x08, .y=0x22, .sp=0x3a, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xe9}, {.addr=0x59b5, .value=0x7e}, {.addr=0x59b6, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x59b7, .a=0xd7, .x=0x08, .y=0x22, .sp=0x3a, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xe9}, {.addr=0x59b5, .value=0x7e}, {.addr=0x59b6, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x59b5, .value=0x7e, .type=IO_READ},
        {.addr=0x59b6, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0185) {
    const struct CPU_State initial_cpu = {.pc=0x33e3, .a=0x9a, .x=0x03, .y=0xd5, .sp=0x44, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x98}, {.addr=0x33e3, .value=0x7e}, {.addr=0x33e4, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x33e5, .a=0x9a, .x=0x03, .y=0xd5, .sp=0x44, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x98}, {.addr=0x33e3, .value=0x7e}, {.addr=0x33e4, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x33e3, .value=0x7e, .type=IO_READ},
        {.addr=0x33e4, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0186) {
    const struct CPU_State initial_cpu = {.pc=0xf22d, .a=0x65, .x=0xe4, .y=0x95, .sp=0xf4, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x80}, {.addr=0xf22d, .value=0x7e}, {.addr=0xf22e, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xf22f, .a=0x65, .x=0xe4, .y=0x95, .sp=0xf4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x80}, {.addr=0xf22d, .value=0x7e}, {.addr=0xf22e, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xf22d, .value=0x7e, .type=IO_READ},
        {.addr=0xf22e, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0187) {
    const struct CPU_State initial_cpu = {.pc=0x6a8e, .a=0x54, .x=0xbb, .y=0xee, .sp=0xbd, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0xc3}, {.addr=0x6a8e, .value=0x7e}, {.addr=0x6a8f, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x6a90, .a=0x54, .x=0xbb, .y=0xee, .sp=0xbd, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0xc3}, {.addr=0x6a8e, .value=0x7e}, {.addr=0x6a8f, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a8e, .value=0x7e, .type=IO_READ},
        {.addr=0x6a8f, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0188) {
    const struct CPU_State initial_cpu = {.pc=0x5ce6, .a=0x06, .x=0x7f, .y=0x85, .sp=0x6c, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xee}, {.addr=0x5ce6, .value=0x7e}, {.addr=0x5ce7, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce8, .a=0x06, .x=0x7f, .y=0x85, .sp=0x6c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xee}, {.addr=0x5ce6, .value=0x7e}, {.addr=0x5ce7, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce6, .value=0x7e, .type=IO_READ},
        {.addr=0x5ce7, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0189) {
    const struct CPU_State initial_cpu = {.pc=0xec0c, .a=0xba, .x=0x5f, .y=0x3c, .sp=0x5e, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x05}, {.addr=0xec0c, .value=0x7e}, {.addr=0xec0d, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xec0e, .a=0xba, .x=0x5f, .y=0x3c, .sp=0x5e, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x05}, {.addr=0xec0c, .value=0x7e}, {.addr=0xec0d, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xec0c, .value=0x7e, .type=IO_READ},
        {.addr=0xec0d, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_018A) {
    const struct CPU_State initial_cpu = {.pc=0x33ca, .a=0x9e, .x=0x28, .y=0x14, .sp=0x43, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x5e}, {.addr=0x33ca, .value=0x7e}, {.addr=0x33cb, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x33cc, .a=0x9e, .x=0x28, .y=0x14, .sp=0x43, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x5e}, {.addr=0x33ca, .value=0x7e}, {.addr=0x33cb, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x33ca, .value=0x7e, .type=IO_READ},
        {.addr=0x33cb, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_018B) {
    const struct CPU_State initial_cpu = {.pc=0x5f90, .a=0xd3, .x=0x47, .y=0x8f, .sp=0x63, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x46}, {.addr=0x5f90, .value=0x7e}, {.addr=0x5f91, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x5f92, .a=0xd3, .x=0x47, .y=0x8f, .sp=0x63, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x46}, {.addr=0x5f90, .value=0x7e}, {.addr=0x5f91, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f90, .value=0x7e, .type=IO_READ},
        {.addr=0x5f91, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_018C) {
    const struct CPU_State initial_cpu = {.pc=0x43c6, .a=0x06, .x=0x23, .y=0x04, .sp=0x1f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x9f}, {.addr=0x43c6, .value=0x7e}, {.addr=0x43c7, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x43c8, .a=0x06, .x=0x23, .y=0x04, .sp=0x1f, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x9f}, {.addr=0x43c6, .value=0x7e}, {.addr=0x43c7, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x43c6, .value=0x7e, .type=IO_READ},
        {.addr=0x43c7, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_018D) {
    const struct CPU_State initial_cpu = {.pc=0x40e8, .a=0xb3, .x=0xf4, .y=0xc8, .sp=0x67, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x8e}, {.addr=0x40e8, .value=0x7e}, {.addr=0x40e9, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x40ea, .a=0xb3, .x=0xf4, .y=0xc8, .sp=0x67, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x8e}, {.addr=0x40e8, .value=0x7e}, {.addr=0x40e9, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e8, .value=0x7e, .type=IO_READ},
        {.addr=0x40e9, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_018E) {
    const struct CPU_State initial_cpu = {.pc=0xdc24, .a=0x39, .x=0x70, .y=0x9b, .sp=0x8a, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xf1}, {.addr=0xdc24, .value=0x7e}, {.addr=0xdc25, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xdc26, .a=0x39, .x=0x70, .y=0x9b, .sp=0x8a, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xf1}, {.addr=0xdc24, .value=0x7e}, {.addr=0xdc25, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc24, .value=0x7e, .type=IO_READ},
        {.addr=0xdc25, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0645, .a=0xb1, .x=0xf4, .y=0x57, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0x81}, {.addr=0x0645, .value=0x7e}, {.addr=0x0646, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x0647, .a=0xb1, .x=0xf4, .y=0x57, .sp=0xab, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0x81}, {.addr=0x0645, .value=0x7e}, {.addr=0x0646, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0645, .value=0x7e, .type=IO_READ},
        {.addr=0x0646, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0191) {
    const struct CPU_State initial_cpu = {.pc=0x6773, .a=0x5d, .x=0x39, .y=0xc4, .sp=0xfe, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xf4}, {.addr=0x6773, .value=0x7e}, {.addr=0x6774, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x6775, .a=0x5d, .x=0x39, .y=0xc4, .sp=0xfe, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xf4}, {.addr=0x6773, .value=0x7e}, {.addr=0x6774, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x6773, .value=0x7e, .type=IO_READ},
        {.addr=0x6774, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0192) {
    const struct CPU_State initial_cpu = {.pc=0xdece, .a=0x15, .x=0x12, .y=0xbf, .sp=0xc2, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xc3}, {.addr=0xdece, .value=0x7e}, {.addr=0xdecf, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xded0, .a=0x15, .x=0x12, .y=0xbf, .sp=0xc2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xc3}, {.addr=0xdece, .value=0x7e}, {.addr=0xdecf, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xdece, .value=0x7e, .type=IO_READ},
        {.addr=0xdecf, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0193) {
    const struct CPU_State initial_cpu = {.pc=0xd6f1, .a=0x34, .x=0x93, .y=0xc4, .sp=0x41, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x50}, {.addr=0xd6f1, .value=0x7e}, {.addr=0xd6f2, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xd6f3, .a=0x34, .x=0x93, .y=0xc4, .sp=0x41, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x50}, {.addr=0xd6f1, .value=0x7e}, {.addr=0xd6f2, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6f1, .value=0x7e, .type=IO_READ},
        {.addr=0xd6f2, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0194) {
    const struct CPU_State initial_cpu = {.pc=0xd2b6, .a=0x98, .x=0xcd, .y=0xce, .sp=0x19, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xd8}, {.addr=0xd2b6, .value=0x7e}, {.addr=0xd2b7, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xd2b8, .a=0x98, .x=0xcd, .y=0xce, .sp=0x19, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xd8}, {.addr=0xd2b6, .value=0x7e}, {.addr=0xd2b7, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2b6, .value=0x7e, .type=IO_READ},
        {.addr=0xd2b7, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0195) {
    const struct CPU_State initial_cpu = {.pc=0x341e, .a=0xaf, .x=0x5e, .y=0xf9, .sp=0xc6, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x76}, {.addr=0x341e, .value=0x7e}, {.addr=0x341f, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x3420, .a=0xaf, .x=0x5e, .y=0xf9, .sp=0xc6, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x76}, {.addr=0x341e, .value=0x7e}, {.addr=0x341f, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x341e, .value=0x7e, .type=IO_READ},
        {.addr=0x341f, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc818, .a=0xb7, .x=0xdc, .y=0x52, .sp=0xea, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x3c}, {.addr=0xc818, .value=0x7e}, {.addr=0xc819, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xc81a, .a=0xb7, .x=0xdc, .y=0x52, .sp=0xea, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x3c}, {.addr=0xc818, .value=0x7e}, {.addr=0xc819, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc818, .value=0x7e, .type=IO_READ},
        {.addr=0xc819, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0197) {
    const struct CPU_State initial_cpu = {.pc=0x737d, .a=0x9b, .x=0x4c, .y=0x9e, .sp=0x85, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x14}, {.addr=0x737d, .value=0x7e}, {.addr=0x737e, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x737f, .a=0x9b, .x=0x4c, .y=0x9e, .sp=0x85, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x14}, {.addr=0x737d, .value=0x7e}, {.addr=0x737e, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x737d, .value=0x7e, .type=IO_READ},
        {.addr=0x737e, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0198) {
    const struct CPU_State initial_cpu = {.pc=0x7ce0, .a=0xbf, .x=0x49, .y=0x2a, .sp=0x6a, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x5c}, {.addr=0x7ce0, .value=0x7e}, {.addr=0x7ce1, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x7ce2, .a=0xbf, .x=0x49, .y=0x2a, .sp=0x6a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x5c}, {.addr=0x7ce0, .value=0x7e}, {.addr=0x7ce1, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ce0, .value=0x7e, .type=IO_READ},
        {.addr=0x7ce1, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0199) {
    const struct CPU_State initial_cpu = {.pc=0xcd03, .a=0xd9, .x=0xbe, .y=0x34, .sp=0xa4, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x27}, {.addr=0xcd03, .value=0x7e}, {.addr=0xcd04, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xcd05, .a=0xd9, .x=0xbe, .y=0x34, .sp=0xa4, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x27}, {.addr=0xcd03, .value=0x7e}, {.addr=0xcd04, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd03, .value=0x7e, .type=IO_READ},
        {.addr=0xcd04, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_019A) {
    const struct CPU_State initial_cpu = {.pc=0x0e69, .a=0x1d, .x=0x71, .y=0xb7, .sp=0xdc, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x07}, {.addr=0x0e69, .value=0x7e}, {.addr=0x0e6a, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x0e6b, .a=0x1d, .x=0x71, .y=0xb7, .sp=0xdc, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x07}, {.addr=0x0e69, .value=0x7e}, {.addr=0x0e6a, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e69, .value=0x7e, .type=IO_READ},
        {.addr=0x0e6a, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2f9c, .a=0xfd, .x=0xe0, .y=0x55, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x5c}, {.addr=0x2f9c, .value=0x7e}, {.addr=0x2f9d, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x2f9e, .a=0xfd, .x=0xe0, .y=0x55, .sp=0x7b, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x5c}, {.addr=0x2f9c, .value=0x7e}, {.addr=0x2f9d, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f9c, .value=0x7e, .type=IO_READ},
        {.addr=0x2f9d, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_019D) {
    const struct CPU_State initial_cpu = {.pc=0x924a, .a=0x5d, .x=0x14, .y=0x3d, .sp=0x9b, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x2c}, {.addr=0x924a, .value=0x7e}, {.addr=0x924b, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x924c, .a=0x5d, .x=0x14, .y=0x3d, .sp=0x9b, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x2c}, {.addr=0x924a, .value=0x7e}, {.addr=0x924b, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x924a, .value=0x7e, .type=IO_READ},
        {.addr=0x924b, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_019E) {
    const struct CPU_State initial_cpu = {.pc=0x0012, .a=0xb4, .x=0x70, .y=0x05, .sp=0x0c, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x7e}, {.addr=0x0013, .value=0xc4}, {.addr=0x00c4, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x0014, .a=0xb4, .x=0x70, .y=0x05, .sp=0x0c, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x7e}, {.addr=0x0013, .value=0xc4}, {.addr=0x00c4, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0012, .value=0x7e, .type=IO_READ},
        {.addr=0x0013, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_019F) {
    const struct CPU_State initial_cpu = {.pc=0x9378, .a=0x9e, .x=0x35, .y=0xb9, .sp=0x84, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x71}, {.addr=0x9378, .value=0x7e}, {.addr=0x9379, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x937a, .a=0x9e, .x=0x35, .y=0xb9, .sp=0x84, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x71}, {.addr=0x9378, .value=0x7e}, {.addr=0x9379, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x9378, .value=0x7e, .type=IO_READ},
        {.addr=0x9379, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xf408, .a=0x6f, .x=0xc6, .y=0x8f, .sp=0xd4, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x8e}, {.addr=0xf408, .value=0x7e}, {.addr=0xf409, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xf40a, .a=0x6f, .x=0xc6, .y=0x8f, .sp=0xd4, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x8e}, {.addr=0xf408, .value=0x7e}, {.addr=0xf409, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf408, .value=0x7e, .type=IO_READ},
        {.addr=0xf409, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x7100, .a=0x21, .x=0xa3, .y=0x5f, .sp=0x73, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0xf0}, {.addr=0x7100, .value=0x7e}, {.addr=0x7101, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x7102, .a=0x21, .x=0xa3, .y=0x5f, .sp=0x73, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0xf0}, {.addr=0x7100, .value=0x7e}, {.addr=0x7101, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7100, .value=0x7e, .type=IO_READ},
        {.addr=0x7101, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xeef1, .a=0x1b, .x=0x8d, .y=0x8a, .sp=0xd2, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x71}, {.addr=0xeef1, .value=0x7e}, {.addr=0xeef2, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xeef3, .a=0x1b, .x=0x8d, .y=0x8a, .sp=0xd2, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x71}, {.addr=0xeef1, .value=0x7e}, {.addr=0xeef2, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeef1, .value=0x7e, .type=IO_READ},
        {.addr=0xeef2, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x1bf6, .a=0xb7, .x=0x56, .y=0x6e, .sp=0x24, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x5f}, {.addr=0x1bf6, .value=0x7e}, {.addr=0x1bf7, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x1bf8, .a=0xb7, .x=0x56, .y=0x6e, .sp=0x24, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x5f}, {.addr=0x1bf6, .value=0x7e}, {.addr=0x1bf7, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bf6, .value=0x7e, .type=IO_READ},
        {.addr=0x1bf7, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x5b71, .a=0xe7, .x=0xd0, .y=0xbc, .sp=0x71, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x90}, {.addr=0x5b71, .value=0x7e}, {.addr=0x5b72, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x5b73, .a=0xe7, .x=0xd0, .y=0xbc, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x90}, {.addr=0x5b71, .value=0x7e}, {.addr=0x5b72, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b71, .value=0x7e, .type=IO_READ},
        {.addr=0x5b72, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x9c09, .a=0xcb, .x=0xf3, .y=0x4d, .sp=0x87, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x80}, {.addr=0x9c09, .value=0x7e}, {.addr=0x9c0a, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x9c0b, .a=0xcb, .x=0xf3, .y=0x4d, .sp=0x87, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x80}, {.addr=0x9c09, .value=0x7e}, {.addr=0x9c0a, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c09, .value=0x7e, .type=IO_READ},
        {.addr=0x9c0a, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xf599, .a=0x15, .x=0xaf, .y=0x4e, .sp=0xa4, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x20}, {.addr=0xf599, .value=0x7e}, {.addr=0xf59a, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xf59b, .a=0x15, .x=0xaf, .y=0x4e, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x20}, {.addr=0xf599, .value=0x7e}, {.addr=0xf59a, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xf599, .value=0x7e, .type=IO_READ},
        {.addr=0xf59a, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xbdaa, .a=0x59, .x=0x48, .y=0x98, .sp=0x53, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xbd}, {.addr=0xbdaa, .value=0x7e}, {.addr=0xbdab, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xbdac, .a=0x59, .x=0x48, .y=0x98, .sp=0x53, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xbd}, {.addr=0xbdaa, .value=0x7e}, {.addr=0xbdab, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdaa, .value=0x7e, .type=IO_READ},
        {.addr=0xbdab, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2ece, .a=0xdf, .x=0xd8, .y=0xd6, .sp=0x8d, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x95}, {.addr=0x2ece, .value=0x7e}, {.addr=0x2ecf, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x2ed0, .a=0xdf, .x=0xd8, .y=0xd6, .sp=0x8d, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x95}, {.addr=0x2ece, .value=0x7e}, {.addr=0x2ecf, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ece, .value=0x7e, .type=IO_READ},
        {.addr=0x2ecf, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x64b0, .a=0x3d, .x=0xaa, .y=0xb4, .sp=0x17, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x5f}, {.addr=0x64b0, .value=0x7e}, {.addr=0x64b1, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x64b2, .a=0x3d, .x=0xaa, .y=0xb4, .sp=0x17, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x5f}, {.addr=0x64b0, .value=0x7e}, {.addr=0x64b1, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x64b0, .value=0x7e, .type=IO_READ},
        {.addr=0x64b1, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x2195, .a=0x3e, .x=0xf0, .y=0x05, .sp=0x3d, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xe3}, {.addr=0x2195, .value=0x7e}, {.addr=0x2196, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x2197, .a=0x3e, .x=0xf0, .y=0x05, .sp=0x3d, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xe3}, {.addr=0x2195, .value=0x7e}, {.addr=0x2196, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x2195, .value=0x7e, .type=IO_READ},
        {.addr=0x2196, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x76da, .a=0x73, .x=0x67, .y=0x4d, .sp=0x13, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x67}, {.addr=0x76da, .value=0x7e}, {.addr=0x76db, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x76dc, .a=0x73, .x=0x67, .y=0x4d, .sp=0x13, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x67}, {.addr=0x76da, .value=0x7e}, {.addr=0x76db, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x76da, .value=0x7e, .type=IO_READ},
        {.addr=0x76db, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xf485, .a=0x30, .x=0xa3, .y=0x14, .sp=0x58, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0xcd}, {.addr=0xf485, .value=0x7e}, {.addr=0xf486, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xf487, .a=0x30, .x=0xa3, .y=0x14, .sp=0x58, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0xcd}, {.addr=0xf485, .value=0x7e}, {.addr=0xf486, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf485, .value=0x7e, .type=IO_READ},
        {.addr=0xf486, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x600c, .a=0xbe, .x=0x6d, .y=0x6b, .sp=0x08, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x8d}, {.addr=0x600c, .value=0x7e}, {.addr=0x600d, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x600e, .a=0xbe, .x=0x6d, .y=0x6b, .sp=0x08, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x8d}, {.addr=0x600c, .value=0x7e}, {.addr=0x600d, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x600c, .value=0x7e, .type=IO_READ},
        {.addr=0x600d, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x78e2, .a=0x3b, .x=0xb1, .y=0x1e, .sp=0xd7, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x3d}, {.addr=0x78e2, .value=0x7e}, {.addr=0x78e3, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x78e4, .a=0x3b, .x=0xb1, .y=0x1e, .sp=0xd7, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x3d}, {.addr=0x78e2, .value=0x7e}, {.addr=0x78e3, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x78e2, .value=0x7e, .type=IO_READ},
        {.addr=0x78e3, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xe840, .a=0xa4, .x=0x49, .y=0x40, .sp=0x45, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xbc}, {.addr=0xe840, .value=0x7e}, {.addr=0xe841, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xe842, .a=0xa4, .x=0x49, .y=0x40, .sp=0x45, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xbc}, {.addr=0xe840, .value=0x7e}, {.addr=0xe841, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xe840, .value=0x7e, .type=IO_READ},
        {.addr=0xe841, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x1a03, .a=0xcc, .x=0x9c, .y=0xaa, .sp=0xdd, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xf5}, {.addr=0x1a03, .value=0x7e}, {.addr=0x1a04, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x1a05, .a=0xcc, .x=0x9c, .y=0xaa, .sp=0xdd, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xf5}, {.addr=0x1a03, .value=0x7e}, {.addr=0x1a04, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a03, .value=0x7e, .type=IO_READ},
        {.addr=0x1a04, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xac3d, .a=0x38, .x=0xdb, .y=0x47, .sp=0x41, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x98}, {.addr=0xac3d, .value=0x7e}, {.addr=0xac3e, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xac3f, .a=0x38, .x=0xdb, .y=0x47, .sp=0x41, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x98}, {.addr=0xac3d, .value=0x7e}, {.addr=0xac3e, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xac3d, .value=0x7e, .type=IO_READ},
        {.addr=0xac3e, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xe7fd, .a=0x69, .x=0x3d, .y=0xf3, .sp=0x22, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xde}, {.addr=0xe7fd, .value=0x7e}, {.addr=0xe7fe, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0xe7ff, .a=0x69, .x=0x3d, .y=0xf3, .sp=0x22, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xde}, {.addr=0xe7fd, .value=0x7e}, {.addr=0xe7fe, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7fd, .value=0x7e, .type=IO_READ},
        {.addr=0xe7fe, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x535d, .a=0x81, .x=0x95, .y=0x26, .sp=0x9d, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xac}, {.addr=0x535d, .value=0x7e}, {.addr=0x535e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x535f, .a=0x81, .x=0x95, .y=0x26, .sp=0x9d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xac}, {.addr=0x535d, .value=0x7e}, {.addr=0x535e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x535d, .value=0x7e, .type=IO_READ},
        {.addr=0x535e, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xd3f1, .a=0x7d, .x=0xf9, .y=0xe5, .sp=0x33, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x62}, {.addr=0xd3f1, .value=0x7e}, {.addr=0xd3f2, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xd3f3, .a=0x7d, .x=0xf9, .y=0xe5, .sp=0x33, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x62}, {.addr=0xd3f1, .value=0x7e}, {.addr=0xd3f2, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3f1, .value=0x7e, .type=IO_READ},
        {.addr=0xd3f2, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xb8b9, .a=0x51, .x=0x89, .y=0xb4, .sp=0x5d, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xeb}, {.addr=0xb8b9, .value=0x7e}, {.addr=0xb8ba, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xb8bb, .a=0x51, .x=0x89, .y=0xb4, .sp=0x5d, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xeb}, {.addr=0xb8b9, .value=0x7e}, {.addr=0xb8ba, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8b9, .value=0x7e, .type=IO_READ},
        {.addr=0xb8ba, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x0036, .a=0x37, .x=0xb5, .y=0xc6, .sp=0x7a, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x7e}, {.addr=0x0037, .value=0x2d}, {.addr=0x012d, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x0038, .a=0x37, .x=0xb5, .y=0xc6, .sp=0x7a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x7e}, {.addr=0x0037, .value=0x2d}, {.addr=0x012d, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x0036, .value=0x7e, .type=IO_READ},
        {.addr=0x0037, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x103a, .a=0x6a, .x=0x22, .y=0x72, .sp=0x80, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xd7}, {.addr=0x103a, .value=0x7e}, {.addr=0x103b, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x103c, .a=0x6a, .x=0x22, .y=0x72, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xd7}, {.addr=0x103a, .value=0x7e}, {.addr=0x103b, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x103a, .value=0x7e, .type=IO_READ},
        {.addr=0x103b, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xa4c3, .a=0x6d, .x=0x7a, .y=0x61, .sp=0xc8, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x55}, {.addr=0xa4c3, .value=0x7e}, {.addr=0xa4c4, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xa4c5, .a=0x6d, .x=0x7a, .y=0x61, .sp=0xc8, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x55}, {.addr=0xa4c3, .value=0x7e}, {.addr=0xa4c4, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4c3, .value=0x7e, .type=IO_READ},
        {.addr=0xa4c4, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x56aa, .a=0xfd, .x=0x9c, .y=0xc2, .sp=0x19, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xf9}, {.addr=0x56aa, .value=0x7e}, {.addr=0x56ab, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x56ac, .a=0xfd, .x=0x9c, .y=0xc2, .sp=0x19, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xf9}, {.addr=0x56aa, .value=0x7e}, {.addr=0x56ab, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x56aa, .value=0x7e, .type=IO_READ},
        {.addr=0x56ab, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xff39, .a=0x5d, .x=0x0c, .y=0x07, .sp=0x35, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xa4}, {.addr=0xff39, .value=0x7e}, {.addr=0xff3a, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xff3b, .a=0x5d, .x=0x0c, .y=0x07, .sp=0x35, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xa4}, {.addr=0xff39, .value=0x7e}, {.addr=0xff3a, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xff39, .value=0x7e, .type=IO_READ},
        {.addr=0xff3a, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xc3dc, .a=0x46, .x=0x2a, .y=0x49, .sp=0x0e, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x5b}, {.addr=0xc3dc, .value=0x7e}, {.addr=0xc3dd, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xc3de, .a=0x46, .x=0x2a, .y=0x49, .sp=0x0e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x5b}, {.addr=0xc3dc, .value=0x7e}, {.addr=0xc3dd, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3dc, .value=0x7e, .type=IO_READ},
        {.addr=0xc3dd, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0924, .a=0x1b, .x=0xfd, .y=0x9f, .sp=0xa0, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x12}, {.addr=0x0924, .value=0x7e}, {.addr=0x0925, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x0926, .a=0x1b, .x=0xfd, .y=0x9f, .sp=0xa0, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x12}, {.addr=0x0924, .value=0x7e}, {.addr=0x0925, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x0924, .value=0x7e, .type=IO_READ},
        {.addr=0x0925, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x0b33, .a=0x37, .x=0xfb, .y=0x92, .sp=0x8c, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xd7}, {.addr=0x0b33, .value=0x7e}, {.addr=0x0b34, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x0b35, .a=0x37, .x=0xfb, .y=0x92, .sp=0x8c, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xd7}, {.addr=0x0b33, .value=0x7e}, {.addr=0x0b34, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b33, .value=0x7e, .type=IO_READ},
        {.addr=0x0b34, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6030, .a=0xb8, .x=0xff, .y=0xab, .sp=0x28, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xb9}, {.addr=0x6030, .value=0x7e}, {.addr=0x6031, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x6032, .a=0xb8, .x=0xff, .y=0xab, .sp=0x28, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xb9}, {.addr=0x6030, .value=0x7e}, {.addr=0x6031, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x6030, .value=0x7e, .type=IO_READ},
        {.addr=0x6031, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xa118, .a=0xbf, .x=0xa1, .y=0x3c, .sp=0x71, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xe3}, {.addr=0xa118, .value=0x7e}, {.addr=0xa119, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xa11a, .a=0xbf, .x=0xa1, .y=0x3c, .sp=0x71, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xe3}, {.addr=0xa118, .value=0x7e}, {.addr=0xa119, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xa118, .value=0x7e, .type=IO_READ},
        {.addr=0xa119, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x43ec, .a=0xcb, .x=0xe8, .y=0x8e, .sp=0x1d, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x65}, {.addr=0x43ec, .value=0x7e}, {.addr=0x43ed, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x43ee, .a=0xcb, .x=0xe8, .y=0x8e, .sp=0x1d, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x65}, {.addr=0x43ec, .value=0x7e}, {.addr=0x43ed, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x43ec, .value=0x7e, .type=IO_READ},
        {.addr=0x43ed, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x3a42, .a=0x8d, .x=0x63, .y=0xa3, .sp=0x66, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xb7}, {.addr=0x3a42, .value=0x7e}, {.addr=0x3a43, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x3a44, .a=0x8d, .x=0x63, .y=0xa3, .sp=0x66, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xb7}, {.addr=0x3a42, .value=0x7e}, {.addr=0x3a43, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a42, .value=0x7e, .type=IO_READ},
        {.addr=0x3a43, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x7bc3, .a=0x3c, .x=0x20, .y=0xd6, .sp=0xd0, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x9c}, {.addr=0x7bc3, .value=0x7e}, {.addr=0x7bc4, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x7bc5, .a=0x3c, .x=0x20, .y=0xd6, .sp=0xd0, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x9c}, {.addr=0x7bc3, .value=0x7e}, {.addr=0x7bc4, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bc3, .value=0x7e, .type=IO_READ},
        {.addr=0x7bc4, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xe4d2, .a=0x58, .x=0x6e, .y=0x90, .sp=0x79, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xdd}, {.addr=0xe4d2, .value=0x7e}, {.addr=0xe4d3, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xe4d4, .a=0x58, .x=0x6e, .y=0x90, .sp=0x79, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xdd}, {.addr=0xe4d2, .value=0x7e}, {.addr=0xe4d3, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4d2, .value=0x7e, .type=IO_READ},
        {.addr=0xe4d3, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xeeb5, .a=0x0c, .x=0x68, .y=0x6c, .sp=0x61, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x45}, {.addr=0xeeb5, .value=0x7e}, {.addr=0xeeb6, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xeeb7, .a=0x0c, .x=0x68, .y=0x6c, .sp=0x61, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x45}, {.addr=0xeeb5, .value=0x7e}, {.addr=0xeeb6, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeeb5, .value=0x7e, .type=IO_READ},
        {.addr=0xeeb6, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xf180, .a=0x3b, .x=0x72, .y=0x9b, .sp=0xfd, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0xa7}, {.addr=0xf180, .value=0x7e}, {.addr=0xf181, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xf182, .a=0x3b, .x=0x72, .y=0x9b, .sp=0xfd, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0xa7}, {.addr=0xf180, .value=0x7e}, {.addr=0xf181, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf180, .value=0x7e, .type=IO_READ},
        {.addr=0xf181, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x0bac, .a=0x01, .x=0x0e, .y=0x37, .sp=0x5f, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x71}, {.addr=0x0bac, .value=0x7e}, {.addr=0x0bad, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x0bae, .a=0x01, .x=0x0e, .y=0x37, .sp=0x5f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x71}, {.addr=0x0bac, .value=0x7e}, {.addr=0x0bad, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bac, .value=0x7e, .type=IO_READ},
        {.addr=0x0bad, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x44a2, .a=0x8c, .x=0x4c, .y=0x31, .sp=0x18, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x49}, {.addr=0x44a2, .value=0x7e}, {.addr=0x44a3, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x44a4, .a=0x8c, .x=0x4c, .y=0x31, .sp=0x18, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x49}, {.addr=0x44a2, .value=0x7e}, {.addr=0x44a3, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x44a2, .value=0x7e, .type=IO_READ},
        {.addr=0x44a3, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x7d32, .a=0xfa, .x=0x8c, .y=0x02, .sp=0x6f, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x56}, {.addr=0x7d32, .value=0x7e}, {.addr=0x7d33, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x7d34, .a=0xfa, .x=0x8c, .y=0x02, .sp=0x6f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x56}, {.addr=0x7d32, .value=0x7e}, {.addr=0x7d33, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d32, .value=0x7e, .type=IO_READ},
        {.addr=0x7d33, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x7abd, .a=0xfc, .x=0xe5, .y=0x19, .sp=0x2f, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xd8}, {.addr=0x7abd, .value=0x7e}, {.addr=0x7abe, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x7abf, .a=0xfc, .x=0xe5, .y=0x19, .sp=0x2f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xd8}, {.addr=0x7abd, .value=0x7e}, {.addr=0x7abe, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7abd, .value=0x7e, .type=IO_READ},
        {.addr=0x7abe, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x001e, .a=0xe1, .x=0x4e, .y=0xb0, .sp=0x1c, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x7e}, {.addr=0x001f, .value=0x1d}, {.addr=0x011d, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x0020, .a=0xe1, .x=0x4e, .y=0xb0, .sp=0x1c, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x7e}, {.addr=0x001f, .value=0x1d}, {.addr=0x011d, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x001e, .value=0x7e, .type=IO_READ},
        {.addr=0x001f, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x79c6, .a=0xa8, .x=0x8a, .y=0x77, .sp=0x43, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xae}, {.addr=0x79c6, .value=0x7e}, {.addr=0x79c7, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x79c8, .a=0xa8, .x=0x8a, .y=0x77, .sp=0x43, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xae}, {.addr=0x79c6, .value=0x7e}, {.addr=0x79c7, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x79c6, .value=0x7e, .type=IO_READ},
        {.addr=0x79c7, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x5b29, .a=0xc1, .x=0x7b, .y=0xfb, .sp=0x50, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x02}, {.addr=0x5b29, .value=0x7e}, {.addr=0x5b2a, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x5b2b, .a=0xc1, .x=0x7b, .y=0xfb, .sp=0x50, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x02}, {.addr=0x5b29, .value=0x7e}, {.addr=0x5b2a, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b29, .value=0x7e, .type=IO_READ},
        {.addr=0x5b2a, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4a06, .a=0xe6, .x=0xdb, .y=0x38, .sp=0x0a, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x8b}, {.addr=0x4a06, .value=0x7e}, {.addr=0x4a07, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x4a08, .a=0xe6, .x=0xdb, .y=0x38, .sp=0x0a, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x8b}, {.addr=0x4a06, .value=0x7e}, {.addr=0x4a07, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a06, .value=0x7e, .type=IO_READ},
        {.addr=0x4a07, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xd97c, .a=0xb0, .x=0x06, .y=0x85, .sp=0xb8, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0xf5}, {.addr=0xd97c, .value=0x7e}, {.addr=0xd97d, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xd97e, .a=0xb0, .x=0x06, .y=0x85, .sp=0xb8, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0xf5}, {.addr=0xd97c, .value=0x7e}, {.addr=0xd97d, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xd97c, .value=0x7e, .type=IO_READ},
        {.addr=0xd97d, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb0f4, .a=0x9d, .x=0x6a, .y=0x15, .sp=0x71, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xd8}, {.addr=0xb0f4, .value=0x7e}, {.addr=0xb0f5, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xb0f6, .a=0x9d, .x=0x6a, .y=0x15, .sp=0x71, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xd8}, {.addr=0xb0f4, .value=0x7e}, {.addr=0xb0f5, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0f4, .value=0x7e, .type=IO_READ},
        {.addr=0xb0f5, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x93e2, .a=0x20, .x=0xb7, .y=0x02, .sp=0xc3, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x47}, {.addr=0x93e2, .value=0x7e}, {.addr=0x93e3, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x93e4, .a=0x20, .x=0xb7, .y=0x02, .sp=0xc3, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x47}, {.addr=0x93e2, .value=0x7e}, {.addr=0x93e3, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x93e2, .value=0x7e, .type=IO_READ},
        {.addr=0x93e3, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x7084, .a=0x1a, .x=0xae, .y=0xe8, .sp=0xd9, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x1f}, {.addr=0x7084, .value=0x7e}, {.addr=0x7085, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x7086, .a=0x1a, .x=0xae, .y=0xe8, .sp=0xd9, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x1f}, {.addr=0x7084, .value=0x7e}, {.addr=0x7085, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x7084, .value=0x7e, .type=IO_READ},
        {.addr=0x7085, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xee03, .a=0xcc, .x=0x4e, .y=0x47, .sp=0x56, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x08}, {.addr=0xee03, .value=0x7e}, {.addr=0xee04, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xee05, .a=0xcc, .x=0x4e, .y=0x47, .sp=0x56, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x08}, {.addr=0xee03, .value=0x7e}, {.addr=0xee04, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xee03, .value=0x7e, .type=IO_READ},
        {.addr=0xee04, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x0119, .a=0x74, .x=0xab, .y=0x47, .sp=0x4e, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x4e}, {.addr=0x0119, .value=0x7e}, {.addr=0x011a, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x011b, .a=0x74, .x=0xab, .y=0x47, .sp=0x4e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x4e}, {.addr=0x0119, .value=0x7e}, {.addr=0x011a, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x0119, .value=0x7e, .type=IO_READ},
        {.addr=0x011a, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb674, .a=0xf1, .x=0x52, .y=0xe6, .sp=0x04, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xda}, {.addr=0xb674, .value=0x7e}, {.addr=0xb675, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xb676, .a=0xf1, .x=0x52, .y=0xe6, .sp=0x04, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xda}, {.addr=0xb674, .value=0x7e}, {.addr=0xb675, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xb674, .value=0x7e, .type=IO_READ},
        {.addr=0xb675, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x529b, .a=0x9b, .x=0xa9, .y=0xc3, .sp=0x63, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xd3}, {.addr=0x529b, .value=0x7e}, {.addr=0x529c, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x529d, .a=0x9b, .x=0xa9, .y=0xc3, .sp=0x63, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xd3}, {.addr=0x529b, .value=0x7e}, {.addr=0x529c, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x529b, .value=0x7e, .type=IO_READ},
        {.addr=0x529c, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x328f, .a=0x61, .x=0x9e, .y=0x23, .sp=0x9a, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x29}, {.addr=0x328f, .value=0x7e}, {.addr=0x3290, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x3291, .a=0x61, .x=0x9e, .y=0x23, .sp=0x9a, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x29}, {.addr=0x328f, .value=0x7e}, {.addr=0x3290, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x328f, .value=0x7e, .type=IO_READ},
        {.addr=0x3290, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xde31, .a=0xfd, .x=0xb7, .y=0xd8, .sp=0x8c, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x03}, {.addr=0xde31, .value=0x7e}, {.addr=0xde32, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xde33, .a=0xfd, .x=0xb7, .y=0xd8, .sp=0x8c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x03}, {.addr=0xde31, .value=0x7e}, {.addr=0xde32, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xde31, .value=0x7e, .type=IO_READ},
        {.addr=0xde32, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xcc8d, .a=0xcd, .x=0x0c, .y=0x2a, .sp=0xe2, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x9c}, {.addr=0xcc8d, .value=0x7e}, {.addr=0xcc8e, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xcc8f, .a=0xcd, .x=0x0c, .y=0x2a, .sp=0xe2, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x9c}, {.addr=0xcc8d, .value=0x7e}, {.addr=0xcc8e, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc8d, .value=0x7e, .type=IO_READ},
        {.addr=0xcc8e, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x27, .x=0x7e, .y=0xd7, .sp=0x5e, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x54}, {.addr=0x352b, .value=0x7e}, {.addr=0x352c, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x352d, .a=0x27, .x=0x7e, .y=0xd7, .sp=0x5e, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x54}, {.addr=0x352b, .value=0x7e}, {.addr=0x352c, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0x7e, .type=IO_READ},
        {.addr=0x352c, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3143, .a=0x9e, .x=0xbf, .y=0x58, .sp=0x40, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xde}, {.addr=0x3143, .value=0x7e}, {.addr=0x3144, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x3145, .a=0x9e, .x=0xbf, .y=0x58, .sp=0x40, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xde}, {.addr=0x3143, .value=0x7e}, {.addr=0x3144, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3143, .value=0x7e, .type=IO_READ},
        {.addr=0x3144, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x0fe0, .a=0x50, .x=0xde, .y=0xfe, .sp=0xd4, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xfe}, {.addr=0x0fe0, .value=0x7e}, {.addr=0x0fe1, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe2, .a=0x50, .x=0xde, .y=0xfe, .sp=0xd4, .status=0x23};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xfe}, {.addr=0x0fe0, .value=0x7e}, {.addr=0x0fe1, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe0, .value=0x7e, .type=IO_READ},
        {.addr=0x0fe1, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xc2f3, .a=0x33, .x=0x9a, .y=0x3b, .sp=0x5f, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xd6}, {.addr=0xc2f3, .value=0x7e}, {.addr=0xc2f4, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xc2f5, .a=0x33, .x=0x9a, .y=0x3b, .sp=0x5f, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xd6}, {.addr=0xc2f3, .value=0x7e}, {.addr=0xc2f4, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2f3, .value=0x7e, .type=IO_READ},
        {.addr=0xc2f4, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8732, .a=0xdc, .x=0x4d, .y=0x61, .sp=0xab, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0xc0}, {.addr=0x8732, .value=0x7e}, {.addr=0x8733, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x8734, .a=0xdc, .x=0x4d, .y=0x61, .sp=0xab, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0xc0}, {.addr=0x8732, .value=0x7e}, {.addr=0x8733, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8732, .value=0x7e, .type=IO_READ},
        {.addr=0x8733, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xf6b6, .a=0x5d, .x=0xd1, .y=0x08, .sp=0x3f, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x2b}, {.addr=0xf6b6, .value=0x7e}, {.addr=0xf6b7, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xf6b8, .a=0x5d, .x=0xd1, .y=0x08, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x2b}, {.addr=0xf6b6, .value=0x7e}, {.addr=0xf6b7, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6b6, .value=0x7e, .type=IO_READ},
        {.addr=0xf6b7, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x1092, .a=0x08, .x=0xca, .y=0x50, .sp=0x8b, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0xf5}, {.addr=0x1092, .value=0x7e}, {.addr=0x1093, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x1094, .a=0x08, .x=0xca, .y=0x50, .sp=0x8b, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0xf5}, {.addr=0x1092, .value=0x7e}, {.addr=0x1093, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1092, .value=0x7e, .type=IO_READ},
        {.addr=0x1093, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x1c1c, .a=0x8a, .x=0x9d, .y=0x83, .sp=0x13, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xf6}, {.addr=0x1c1c, .value=0x7e}, {.addr=0x1c1d, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x1c1e, .a=0x8a, .x=0x9d, .y=0x83, .sp=0x13, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xf6}, {.addr=0x1c1c, .value=0x7e}, {.addr=0x1c1d, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c1c, .value=0x7e, .type=IO_READ},
        {.addr=0x1c1d, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xb042, .a=0x33, .x=0x02, .y=0xb3, .sp=0x27, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xd3}, {.addr=0xb042, .value=0x7e}, {.addr=0xb043, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xb044, .a=0x33, .x=0x02, .y=0xb3, .sp=0x27, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xd3}, {.addr=0xb042, .value=0x7e}, {.addr=0xb043, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xb042, .value=0x7e, .type=IO_READ},
        {.addr=0xb043, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x59c7, .a=0xfa, .x=0x4a, .y=0xe2, .sp=0xb6, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xa9}, {.addr=0x59c7, .value=0x7e}, {.addr=0x59c8, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x59c9, .a=0xfa, .x=0x4a, .y=0xe2, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xa9}, {.addr=0x59c7, .value=0x7e}, {.addr=0x59c8, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x59c7, .value=0x7e, .type=IO_READ},
        {.addr=0x59c8, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x310e, .a=0xba, .x=0xa7, .y=0x01, .sp=0xe0, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0xdf}, {.addr=0x310e, .value=0x7e}, {.addr=0x310f, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x3110, .a=0xba, .x=0xa7, .y=0x01, .sp=0xe0, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0xdf}, {.addr=0x310e, .value=0x7e}, {.addr=0x310f, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x310e, .value=0x7e, .type=IO_READ},
        {.addr=0x310f, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x4339, .a=0xef, .x=0x0a, .y=0xd2, .sp=0xa4, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x9d}, {.addr=0x4339, .value=0x7e}, {.addr=0x433a, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x433b, .a=0xef, .x=0x0a, .y=0xd2, .sp=0xa4, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x9d}, {.addr=0x4339, .value=0x7e}, {.addr=0x433a, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x4339, .value=0x7e, .type=IO_READ},
        {.addr=0x433a, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x2f56, .a=0x7e, .x=0x7a, .y=0x64, .sp=0xee, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x4e}, {.addr=0x2f56, .value=0x7e}, {.addr=0x2f57, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x2f58, .a=0x7e, .x=0x7a, .y=0x64, .sp=0xee, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x4e}, {.addr=0x2f56, .value=0x7e}, {.addr=0x2f57, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f56, .value=0x7e, .type=IO_READ},
        {.addr=0x2f57, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xe689, .a=0xb7, .x=0xf6, .y=0x83, .sp=0xf5, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x2c}, {.addr=0xe689, .value=0x7e}, {.addr=0xe68a, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xe68b, .a=0xb7, .x=0xf6, .y=0x83, .sp=0xf5, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x2c}, {.addr=0xe689, .value=0x7e}, {.addr=0xe68a, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe689, .value=0x7e, .type=IO_READ},
        {.addr=0xe68a, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x6a27, .a=0x71, .x=0xb5, .y=0x38, .sp=0x09, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xcb}, {.addr=0x6a27, .value=0x7e}, {.addr=0x6a28, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x6a29, .a=0x71, .x=0xb5, .y=0x38, .sp=0x09, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xcb}, {.addr=0x6a27, .value=0x7e}, {.addr=0x6a28, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a27, .value=0x7e, .type=IO_READ},
        {.addr=0x6a28, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x6d33, .a=0x93, .x=0x42, .y=0x21, .sp=0xc3, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xaf}, {.addr=0x6d33, .value=0x7e}, {.addr=0x6d34, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x6d35, .a=0x93, .x=0x42, .y=0x21, .sp=0xc3, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xaf}, {.addr=0x6d33, .value=0x7e}, {.addr=0x6d34, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d33, .value=0x7e, .type=IO_READ},
        {.addr=0x6d34, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xa800, .a=0x6f, .x=0x67, .y=0x68, .sp=0x38, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xa1}, {.addr=0xa800, .value=0x7e}, {.addr=0xa801, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xa802, .a=0x6f, .x=0x67, .y=0x68, .sp=0x38, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xa1}, {.addr=0xa800, .value=0x7e}, {.addr=0xa801, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xa800, .value=0x7e, .type=IO_READ},
        {.addr=0xa801, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x3ca1, .a=0xee, .x=0x19, .y=0x43, .sp=0xef, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x19}, {.addr=0x3ca1, .value=0x7e}, {.addr=0x3ca2, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0xee, .x=0x19, .y=0x43, .sp=0xef, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x19}, {.addr=0x3ca1, .value=0x7e}, {.addr=0x3ca2, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca1, .value=0x7e, .type=IO_READ},
        {.addr=0x3ca2, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x9d21, .a=0x50, .x=0x51, .y=0xb2, .sp=0xaa, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x89}, {.addr=0x9d21, .value=0x7e}, {.addr=0x9d22, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x9d23, .a=0x50, .x=0x51, .y=0xb2, .sp=0xaa, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x89}, {.addr=0x9d21, .value=0x7e}, {.addr=0x9d22, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d21, .value=0x7e, .type=IO_READ},
        {.addr=0x9d22, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa604, .a=0x3c, .x=0x0b, .y=0x2a, .sp=0x7f, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x18}, {.addr=0xa604, .value=0x7e}, {.addr=0xa605, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xa606, .a=0x3c, .x=0x0b, .y=0x2a, .sp=0x7f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x18}, {.addr=0xa604, .value=0x7e}, {.addr=0xa605, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa604, .value=0x7e, .type=IO_READ},
        {.addr=0xa605, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x40ec, .a=0xf8, .x=0x37, .y=0xf9, .sp=0x49, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x9c}, {.addr=0x40ec, .value=0x7e}, {.addr=0x40ed, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x40ee, .a=0xf8, .x=0x37, .y=0xf9, .sp=0x49, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x9c}, {.addr=0x40ec, .value=0x7e}, {.addr=0x40ed, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x40ec, .value=0x7e, .type=IO_READ},
        {.addr=0x40ed, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x0daa, .a=0xca, .x=0x1a, .y=0x2a, .sp=0x0f, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xcb}, {.addr=0x0daa, .value=0x7e}, {.addr=0x0dab, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x0dac, .a=0xca, .x=0x1a, .y=0x2a, .sp=0x0f, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xcb}, {.addr=0x0daa, .value=0x7e}, {.addr=0x0dab, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x0daa, .value=0x7e, .type=IO_READ},
        {.addr=0x0dab, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xfe03, .a=0x19, .x=0x58, .y=0x2b, .sp=0xb9, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xd7}, {.addr=0xfe03, .value=0x7e}, {.addr=0xfe04, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xfe05, .a=0x19, .x=0x58, .y=0x2b, .sp=0xb9, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xd7}, {.addr=0xfe03, .value=0x7e}, {.addr=0xfe04, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe03, .value=0x7e, .type=IO_READ},
        {.addr=0xfe04, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xb047, .a=0x50, .x=0x92, .y=0xd3, .sp=0x0e, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x20}, {.addr=0xb047, .value=0x7e}, {.addr=0xb048, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xb049, .a=0x50, .x=0x92, .y=0xd3, .sp=0x0e, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x20}, {.addr=0xb047, .value=0x7e}, {.addr=0xb048, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xb047, .value=0x7e, .type=IO_READ},
        {.addr=0xb048, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x7432, .a=0x9f, .x=0xa3, .y=0x76, .sp=0xf3, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x5b}, {.addr=0x7432, .value=0x7e}, {.addr=0x7433, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x7434, .a=0x9f, .x=0xa3, .y=0x76, .sp=0xf3, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x5b}, {.addr=0x7432, .value=0x7e}, {.addr=0x7433, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x7432, .value=0x7e, .type=IO_READ},
        {.addr=0x7433, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc080, .a=0x21, .x=0x2c, .y=0xdd, .sp=0xa7, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xdc}, {.addr=0xc080, .value=0x7e}, {.addr=0xc081, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xc082, .a=0x21, .x=0x2c, .y=0xdd, .sp=0xa7, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xdc}, {.addr=0xc080, .value=0x7e}, {.addr=0xc081, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc080, .value=0x7e, .type=IO_READ},
        {.addr=0xc081, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xb2f3, .a=0x18, .x=0x2e, .y=0x08, .sp=0xc0, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xc7}, {.addr=0xb2f3, .value=0x7e}, {.addr=0xb2f4, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xb2f5, .a=0x18, .x=0x2e, .y=0x08, .sp=0xc0, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xc7}, {.addr=0xb2f3, .value=0x7e}, {.addr=0xb2f4, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2f3, .value=0x7e, .type=IO_READ},
        {.addr=0xb2f4, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x2f80, .a=0x2d, .x=0x32, .y=0x5e, .sp=0xd7, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xe0}, {.addr=0x2f80, .value=0x7e}, {.addr=0x2f81, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x2f82, .a=0x2d, .x=0x32, .y=0x5e, .sp=0xd7, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xe0}, {.addr=0x2f80, .value=0x7e}, {.addr=0x2f81, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f80, .value=0x7e, .type=IO_READ},
        {.addr=0x2f81, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x5e20, .a=0x5f, .x=0x1c, .y=0xec, .sp=0x70, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x38}, {.addr=0x5e20, .value=0x7e}, {.addr=0x5e21, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x5e22, .a=0x5f, .x=0x1c, .y=0xec, .sp=0x70, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x38}, {.addr=0x5e20, .value=0x7e}, {.addr=0x5e21, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e20, .value=0x7e, .type=IO_READ},
        {.addr=0x5e21, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x6953, .a=0xaf, .x=0x94, .y=0xa4, .sp=0x90, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xb6}, {.addr=0x6953, .value=0x7e}, {.addr=0x6954, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x6955, .a=0xaf, .x=0x94, .y=0xa4, .sp=0x90, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xb6}, {.addr=0x6953, .value=0x7e}, {.addr=0x6954, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x6953, .value=0x7e, .type=IO_READ},
        {.addr=0x6954, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x6c28, .a=0xf4, .x=0xd4, .y=0xfa, .sp=0x1f, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xc1}, {.addr=0x6c28, .value=0x7e}, {.addr=0x6c29, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x6c2a, .a=0xf4, .x=0xd4, .y=0xfa, .sp=0x1f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xc1}, {.addr=0x6c28, .value=0x7e}, {.addr=0x6c29, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c28, .value=0x7e, .type=IO_READ},
        {.addr=0x6c29, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0b9f, .a=0x84, .x=0x81, .y=0x37, .sp=0xa8, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x0e}, {.addr=0x0b9f, .value=0x7e}, {.addr=0x0ba0, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x0ba1, .a=0x84, .x=0x81, .y=0x37, .sp=0xa8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x0e}, {.addr=0x0b9f, .value=0x7e}, {.addr=0x0ba0, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b9f, .value=0x7e, .type=IO_READ},
        {.addr=0x0ba0, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe9b3, .a=0xae, .x=0x16, .y=0xd7, .sp=0x58, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x54}, {.addr=0xe9b3, .value=0x7e}, {.addr=0xe9b4, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xe9b5, .a=0xae, .x=0x16, .y=0xd7, .sp=0x58, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x54}, {.addr=0xe9b3, .value=0x7e}, {.addr=0xe9b4, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9b3, .value=0x7e, .type=IO_READ},
        {.addr=0xe9b4, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x6933, .a=0xc3, .x=0x4b, .y=0x59, .sp=0xb0, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x49}, {.addr=0x6933, .value=0x7e}, {.addr=0x6934, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x6935, .a=0xc3, .x=0x4b, .y=0x59, .sp=0xb0, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x49}, {.addr=0x6933, .value=0x7e}, {.addr=0x6934, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x6933, .value=0x7e, .type=IO_READ},
        {.addr=0x6934, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x85c0, .a=0xd3, .x=0x40, .y=0xc6, .sp=0x36, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x32}, {.addr=0x85c0, .value=0x7e}, {.addr=0x85c1, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x85c2, .a=0xd3, .x=0x40, .y=0xc6, .sp=0x36, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x32}, {.addr=0x85c0, .value=0x7e}, {.addr=0x85c1, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x85c0, .value=0x7e, .type=IO_READ},
        {.addr=0x85c1, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xd26e, .a=0x9f, .x=0x1d, .y=0x3a, .sp=0xec, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x92}, {.addr=0xd26e, .value=0x7e}, {.addr=0xd26f, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xd270, .a=0x9f, .x=0x1d, .y=0x3a, .sp=0xec, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x92}, {.addr=0xd26e, .value=0x7e}, {.addr=0xd26f, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xd26e, .value=0x7e, .type=IO_READ},
        {.addr=0xd26f, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8f86, .a=0x9b, .x=0x1a, .y=0x0a, .sp=0xc4, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x0b}, {.addr=0x8f86, .value=0x7e}, {.addr=0x8f87, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x8f88, .a=0x9b, .x=0x1a, .y=0x0a, .sp=0xc4, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x0b}, {.addr=0x8f86, .value=0x7e}, {.addr=0x8f87, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f86, .value=0x7e, .type=IO_READ},
        {.addr=0x8f87, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x4f78, .a=0x21, .x=0x5f, .y=0x5f, .sp=0x7d, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x1b}, {.addr=0x4f78, .value=0x7e}, {.addr=0x4f79, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x4f7a, .a=0x21, .x=0x5f, .y=0x5f, .sp=0x7d, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x1b}, {.addr=0x4f78, .value=0x7e}, {.addr=0x4f79, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f78, .value=0x7e, .type=IO_READ},
        {.addr=0x4f79, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0200) {
    const struct CPU_State initial_cpu = {.pc=0x4edf, .a=0xb3, .x=0x3e, .y=0xac, .sp=0xb0, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x5c}, {.addr=0x4edf, .value=0x7e}, {.addr=0x4ee0, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x4ee1, .a=0xb3, .x=0x3e, .y=0xac, .sp=0xb0, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x5c}, {.addr=0x4edf, .value=0x7e}, {.addr=0x4ee0, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x4edf, .value=0x7e, .type=IO_READ},
        {.addr=0x4ee0, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4587, .a=0x6a, .x=0x3e, .y=0x8a, .sp=0xf4, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x92}, {.addr=0x4587, .value=0x7e}, {.addr=0x4588, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x4589, .a=0x6a, .x=0x3e, .y=0x8a, .sp=0xf4, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x92}, {.addr=0x4587, .value=0x7e}, {.addr=0x4588, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x4587, .value=0x7e, .type=IO_READ},
        {.addr=0x4588, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0202) {
    const struct CPU_State initial_cpu = {.pc=0x499f, .a=0x37, .x=0x3b, .y=0x9d, .sp=0x52, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x15}, {.addr=0x499f, .value=0x7e}, {.addr=0x49a0, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x49a1, .a=0x37, .x=0x3b, .y=0x9d, .sp=0x52, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x15}, {.addr=0x499f, .value=0x7e}, {.addr=0x49a0, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x499f, .value=0x7e, .type=IO_READ},
        {.addr=0x49a0, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0203) {
    const struct CPU_State initial_cpu = {.pc=0x8173, .a=0x29, .x=0xc9, .y=0xd6, .sp=0xe6, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x09}, {.addr=0x8173, .value=0x7e}, {.addr=0x8174, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x8175, .a=0x29, .x=0xc9, .y=0xd6, .sp=0xe6, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x09}, {.addr=0x8173, .value=0x7e}, {.addr=0x8174, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8173, .value=0x7e, .type=IO_READ},
        {.addr=0x8174, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5c26, .a=0x07, .x=0x24, .y=0x7a, .sp=0xe2, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xcd}, {.addr=0x5c26, .value=0x7e}, {.addr=0x5c27, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x5c28, .a=0x07, .x=0x24, .y=0x7a, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xcd}, {.addr=0x5c26, .value=0x7e}, {.addr=0x5c27, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c26, .value=0x7e, .type=IO_READ},
        {.addr=0x5c27, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0205) {
    const struct CPU_State initial_cpu = {.pc=0x642e, .a=0x53, .x=0xe5, .y=0xf2, .sp=0xe1, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x5f}, {.addr=0x642e, .value=0x7e}, {.addr=0x642f, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x6430, .a=0x53, .x=0xe5, .y=0xf2, .sp=0xe1, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x5f}, {.addr=0x642e, .value=0x7e}, {.addr=0x642f, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x642e, .value=0x7e, .type=IO_READ},
        {.addr=0x642f, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0206) {
    const struct CPU_State initial_cpu = {.pc=0xa7de, .a=0x59, .x=0x79, .y=0x64, .sp=0xb8, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x2e}, {.addr=0xa7de, .value=0x7e}, {.addr=0xa7df, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e0, .a=0x59, .x=0x79, .y=0x64, .sp=0xb8, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x2e}, {.addr=0xa7de, .value=0x7e}, {.addr=0xa7df, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7de, .value=0x7e, .type=IO_READ},
        {.addr=0xa7df, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0207) {
    const struct CPU_State initial_cpu = {.pc=0xcc91, .a=0x8a, .x=0x48, .y=0xae, .sp=0x6b, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x41}, {.addr=0xcc91, .value=0x7e}, {.addr=0xcc92, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xcc93, .a=0x8a, .x=0x48, .y=0xae, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x41}, {.addr=0xcc91, .value=0x7e}, {.addr=0xcc92, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc91, .value=0x7e, .type=IO_READ},
        {.addr=0xcc92, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0208) {
    const struct CPU_State initial_cpu = {.pc=0x63e1, .a=0xaa, .x=0xb6, .y=0x6d, .sp=0xb0, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xaa}, {.addr=0x63e1, .value=0x7e}, {.addr=0x63e2, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x63e3, .a=0xaa, .x=0xb6, .y=0x6d, .sp=0xb0, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xaa}, {.addr=0x63e1, .value=0x7e}, {.addr=0x63e2, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e1, .value=0x7e, .type=IO_READ},
        {.addr=0x63e2, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0209) {
    const struct CPU_State initial_cpu = {.pc=0x461d, .a=0xe3, .x=0xed, .y=0x1e, .sp=0x17, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x58}, {.addr=0x461d, .value=0x7e}, {.addr=0x461e, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x461f, .a=0xe3, .x=0xed, .y=0x1e, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x58}, {.addr=0x461d, .value=0x7e}, {.addr=0x461e, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x461d, .value=0x7e, .type=IO_READ},
        {.addr=0x461e, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020A) {
    const struct CPU_State initial_cpu = {.pc=0x680f, .a=0x89, .x=0x28, .y=0xb1, .sp=0x82, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xfa}, {.addr=0x680f, .value=0x7e}, {.addr=0x6810, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x6811, .a=0x89, .x=0x28, .y=0xb1, .sp=0x82, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xfa}, {.addr=0x680f, .value=0x7e}, {.addr=0x6810, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x680f, .value=0x7e, .type=IO_READ},
        {.addr=0x6810, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020B) {
    const struct CPU_State initial_cpu = {.pc=0x460a, .a=0x89, .x=0x57, .y=0x2d, .sp=0x42, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xec}, {.addr=0x460a, .value=0x7e}, {.addr=0x460b, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x460c, .a=0x89, .x=0x57, .y=0x2d, .sp=0x42, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xec}, {.addr=0x460a, .value=0x7e}, {.addr=0x460b, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x460a, .value=0x7e, .type=IO_READ},
        {.addr=0x460b, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020C) {
    const struct CPU_State initial_cpu = {.pc=0x479d, .a=0xf8, .x=0xef, .y=0xa4, .sp=0xdf, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x2b}, {.addr=0x479d, .value=0x7e}, {.addr=0x479e, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x479f, .a=0xf8, .x=0xef, .y=0xa4, .sp=0xdf, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x2b}, {.addr=0x479d, .value=0x7e}, {.addr=0x479e, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x479d, .value=0x7e, .type=IO_READ},
        {.addr=0x479e, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020D) {
    const struct CPU_State initial_cpu = {.pc=0x2708, .a=0x02, .x=0x6c, .y=0x28, .sp=0x90, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x51}, {.addr=0x2708, .value=0x7e}, {.addr=0x2709, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x270a, .a=0x02, .x=0x6c, .y=0x28, .sp=0x90, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x51}, {.addr=0x2708, .value=0x7e}, {.addr=0x2709, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x2708, .value=0x7e, .type=IO_READ},
        {.addr=0x2709, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020E) {
    const struct CPU_State initial_cpu = {.pc=0x55e6, .a=0x10, .x=0x5d, .y=0x36, .sp=0x47, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x16}, {.addr=0x55e6, .value=0x7e}, {.addr=0x55e7, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x55e8, .a=0x10, .x=0x5d, .y=0x36, .sp=0x47, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x16}, {.addr=0x55e6, .value=0x7e}, {.addr=0x55e7, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x55e6, .value=0x7e, .type=IO_READ},
        {.addr=0x55e7, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_020F) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0x06, .x=0x0c, .y=0x17, .sp=0xb9, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x82}, {.addr=0x3209, .value=0x7e}, {.addr=0x320a, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x320b, .a=0x06, .x=0x0c, .y=0x17, .sp=0xb9, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x82}, {.addr=0x3209, .value=0x7e}, {.addr=0x320a, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0x7e, .type=IO_READ},
        {.addr=0x320a, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0210) {
    const struct CPU_State initial_cpu = {.pc=0xc226, .a=0x91, .x=0xda, .y=0xc4, .sp=0x0d, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x60}, {.addr=0xc226, .value=0x7e}, {.addr=0xc227, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xc228, .a=0x91, .x=0xda, .y=0xc4, .sp=0x0d, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x60}, {.addr=0xc226, .value=0x7e}, {.addr=0xc227, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xc226, .value=0x7e, .type=IO_READ},
        {.addr=0xc227, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0211) {
    const struct CPU_State initial_cpu = {.pc=0xba26, .a=0xce, .x=0xd3, .y=0xf6, .sp=0x3c, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x4e}, {.addr=0xba26, .value=0x7e}, {.addr=0xba27, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xba28, .a=0xce, .x=0xd3, .y=0xf6, .sp=0x3c, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x4e}, {.addr=0xba26, .value=0x7e}, {.addr=0xba27, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xba26, .value=0x7e, .type=IO_READ},
        {.addr=0xba27, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf568, .a=0xeb, .x=0x09, .y=0x7b, .sp=0x35, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xcb}, {.addr=0xf568, .value=0x7e}, {.addr=0xf569, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xf56a, .a=0xeb, .x=0x09, .y=0x7b, .sp=0x35, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xcb}, {.addr=0xf568, .value=0x7e}, {.addr=0xf569, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf568, .value=0x7e, .type=IO_READ},
        {.addr=0xf569, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0213) {
    const struct CPU_State initial_cpu = {.pc=0x9948, .a=0xec, .x=0x16, .y=0x8f, .sp=0xf2, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x5e}, {.addr=0x9948, .value=0x7e}, {.addr=0x9949, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x994a, .a=0xec, .x=0x16, .y=0x8f, .sp=0xf2, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x5e}, {.addr=0x9948, .value=0x7e}, {.addr=0x9949, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x9948, .value=0x7e, .type=IO_READ},
        {.addr=0x9949, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0214) {
    const struct CPU_State initial_cpu = {.pc=0x054a, .a=0xf8, .x=0xe4, .y=0x2c, .sp=0x08, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xc0}, {.addr=0x054a, .value=0x7e}, {.addr=0x054b, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x054c, .a=0xf8, .x=0xe4, .y=0x2c, .sp=0x08, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xc0}, {.addr=0x054a, .value=0x7e}, {.addr=0x054b, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x054a, .value=0x7e, .type=IO_READ},
        {.addr=0x054b, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0215) {
    const struct CPU_State initial_cpu = {.pc=0x2a95, .a=0xb0, .x=0x4a, .y=0xb9, .sp=0x0f, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xc7}, {.addr=0x2a95, .value=0x7e}, {.addr=0x2a96, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x2a97, .a=0xb0, .x=0x4a, .y=0xb9, .sp=0x0f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xc7}, {.addr=0x2a95, .value=0x7e}, {.addr=0x2a96, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a95, .value=0x7e, .type=IO_READ},
        {.addr=0x2a96, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0216) {
    const struct CPU_State initial_cpu = {.pc=0x41d6, .a=0xe4, .x=0x7b, .y=0x85, .sp=0xc9, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x52}, {.addr=0x41d6, .value=0x7e}, {.addr=0x41d7, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x41d8, .a=0xe4, .x=0x7b, .y=0x85, .sp=0xc9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x52}, {.addr=0x41d6, .value=0x7e}, {.addr=0x41d7, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x41d6, .value=0x7e, .type=IO_READ},
        {.addr=0x41d7, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0217) {
    const struct CPU_State initial_cpu = {.pc=0xd90f, .a=0xb8, .x=0xce, .y=0x70, .sp=0x3c, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x6b}, {.addr=0xd90f, .value=0x7e}, {.addr=0xd910, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xd911, .a=0xb8, .x=0xce, .y=0x70, .sp=0x3c, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x6b}, {.addr=0xd90f, .value=0x7e}, {.addr=0xd910, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd90f, .value=0x7e, .type=IO_READ},
        {.addr=0xd910, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0218) {
    const struct CPU_State initial_cpu = {.pc=0x09f9, .a=0x4d, .x=0xc4, .y=0xa8, .sp=0x9c, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xda}, {.addr=0x09f9, .value=0x7e}, {.addr=0x09fa, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x09fb, .a=0x4d, .x=0xc4, .y=0xa8, .sp=0x9c, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xda}, {.addr=0x09f9, .value=0x7e}, {.addr=0x09fa, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x09f9, .value=0x7e, .type=IO_READ},
        {.addr=0x09fa, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0219) {
    const struct CPU_State initial_cpu = {.pc=0x0525, .a=0x16, .x=0x38, .y=0x60, .sp=0x3c, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x9c}, {.addr=0x0525, .value=0x7e}, {.addr=0x0526, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x0527, .a=0x16, .x=0x38, .y=0x60, .sp=0x3c, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x9c}, {.addr=0x0525, .value=0x7e}, {.addr=0x0526, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x0525, .value=0x7e, .type=IO_READ},
        {.addr=0x0526, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021A) {
    const struct CPU_State initial_cpu = {.pc=0x80a8, .a=0x56, .x=0x0e, .y=0x01, .sp=0x5f, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x33}, {.addr=0x80a8, .value=0x7e}, {.addr=0x80a9, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x80aa, .a=0x56, .x=0x0e, .y=0x01, .sp=0x5f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x33}, {.addr=0x80a8, .value=0x7e}, {.addr=0x80a9, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x80a8, .value=0x7e, .type=IO_READ},
        {.addr=0x80a9, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021B) {
    const struct CPU_State initial_cpu = {.pc=0xbd8e, .a=0x69, .x=0x6f, .y=0x3d, .sp=0x43, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xad}, {.addr=0xbd8e, .value=0x7e}, {.addr=0xbd8f, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xbd90, .a=0x69, .x=0x6f, .y=0x3d, .sp=0x43, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xad}, {.addr=0xbd8e, .value=0x7e}, {.addr=0xbd8f, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8e, .value=0x7e, .type=IO_READ},
        {.addr=0xbd8f, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4bc2, .a=0x8d, .x=0xa1, .y=0xe5, .sp=0x56, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xdd}, {.addr=0x4bc2, .value=0x7e}, {.addr=0x4bc3, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x4bc4, .a=0x8d, .x=0xa1, .y=0xe5, .sp=0x56, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xdd}, {.addr=0x4bc2, .value=0x7e}, {.addr=0x4bc3, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bc2, .value=0x7e, .type=IO_READ},
        {.addr=0x4bc3, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021D) {
    const struct CPU_State initial_cpu = {.pc=0x732e, .a=0x6a, .x=0x35, .y=0x34, .sp=0x7d, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x81}, {.addr=0x732e, .value=0x7e}, {.addr=0x732f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x7330, .a=0x6a, .x=0x35, .y=0x34, .sp=0x7d, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x81}, {.addr=0x732e, .value=0x7e}, {.addr=0x732f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x732e, .value=0x7e, .type=IO_READ},
        {.addr=0x732f, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021E) {
    const struct CPU_State initial_cpu = {.pc=0x301a, .a=0xb6, .x=0xac, .y=0xbe, .sp=0x8d, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x81}, {.addr=0x301a, .value=0x7e}, {.addr=0x301b, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x301c, .a=0xb6, .x=0xac, .y=0xbe, .sp=0x8d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x81}, {.addr=0x301a, .value=0x7e}, {.addr=0x301b, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x301a, .value=0x7e, .type=IO_READ},
        {.addr=0x301b, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_021F) {
    const struct CPU_State initial_cpu = {.pc=0x514c, .a=0xac, .x=0xe4, .y=0xa5, .sp=0xa1, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xca}, {.addr=0x514c, .value=0x7e}, {.addr=0x514d, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x514e, .a=0xac, .x=0xe4, .y=0xa5, .sp=0xa1, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xca}, {.addr=0x514c, .value=0x7e}, {.addr=0x514d, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x514c, .value=0x7e, .type=IO_READ},
        {.addr=0x514d, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0220) {
    const struct CPU_State initial_cpu = {.pc=0x6db0, .a=0x40, .x=0x83, .y=0x4b, .sp=0x7f, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x9a}, {.addr=0x6db0, .value=0x7e}, {.addr=0x6db1, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x6db2, .a=0x40, .x=0x83, .y=0x4b, .sp=0x7f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x9a}, {.addr=0x6db0, .value=0x7e}, {.addr=0x6db1, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6db0, .value=0x7e, .type=IO_READ},
        {.addr=0x6db1, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0221) {
    const struct CPU_State initial_cpu = {.pc=0x0a55, .a=0x5e, .x=0x28, .y=0x06, .sp=0x50, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x74}, {.addr=0x0a55, .value=0x7e}, {.addr=0x0a56, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x0a57, .a=0x5e, .x=0x28, .y=0x06, .sp=0x50, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x74}, {.addr=0x0a55, .value=0x7e}, {.addr=0x0a56, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a55, .value=0x7e, .type=IO_READ},
        {.addr=0x0a56, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0222) {
    const struct CPU_State initial_cpu = {.pc=0xd3a4, .a=0xac, .x=0xe0, .y=0x11, .sp=0x32, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xe0}, {.addr=0xd3a4, .value=0x7e}, {.addr=0xd3a5, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xd3a6, .a=0xac, .x=0xe0, .y=0x11, .sp=0x32, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xe0}, {.addr=0xd3a4, .value=0x7e}, {.addr=0xd3a5, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3a4, .value=0x7e, .type=IO_READ},
        {.addr=0xd3a5, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0223) {
    const struct CPU_State initial_cpu = {.pc=0x7cf6, .a=0x7e, .x=0x60, .y=0xdd, .sp=0xb1, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x36}, {.addr=0x7cf6, .value=0x7e}, {.addr=0x7cf7, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x7cf8, .a=0x7e, .x=0x60, .y=0xdd, .sp=0xb1, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x36}, {.addr=0x7cf6, .value=0x7e}, {.addr=0x7cf7, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cf6, .value=0x7e, .type=IO_READ},
        {.addr=0x7cf7, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe7df, .a=0x7d, .x=0x5b, .y=0x7c, .sp=0x9e, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xf4}, {.addr=0xe7df, .value=0x7e}, {.addr=0xe7e0, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xe7e1, .a=0x7d, .x=0x5b, .y=0x7c, .sp=0x9e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xf4}, {.addr=0xe7df, .value=0x7e}, {.addr=0xe7e0, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7df, .value=0x7e, .type=IO_READ},
        {.addr=0xe7e0, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0225) {
    const struct CPU_State initial_cpu = {.pc=0x5041, .a=0x8c, .x=0x72, .y=0x17, .sp=0x0f, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xe2}, {.addr=0x5041, .value=0x7e}, {.addr=0x5042, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x5043, .a=0x8c, .x=0x72, .y=0x17, .sp=0x0f, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xe2}, {.addr=0x5041, .value=0x7e}, {.addr=0x5042, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5041, .value=0x7e, .type=IO_READ},
        {.addr=0x5042, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0226) {
    const struct CPU_State initial_cpu = {.pc=0x301a, .a=0x48, .x=0x68, .y=0x51, .sp=0x5e, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x7b}, {.addr=0x301a, .value=0x7e}, {.addr=0x301b, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x301c, .a=0x48, .x=0x68, .y=0x51, .sp=0x5e, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x7b}, {.addr=0x301a, .value=0x7e}, {.addr=0x301b, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x301a, .value=0x7e, .type=IO_READ},
        {.addr=0x301b, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0227) {
    const struct CPU_State initial_cpu = {.pc=0x2184, .a=0xc4, .x=0x42, .y=0xa5, .sp=0x0f, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x25}, {.addr=0x2184, .value=0x7e}, {.addr=0x2185, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x2186, .a=0xc4, .x=0x42, .y=0xa5, .sp=0x0f, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x25}, {.addr=0x2184, .value=0x7e}, {.addr=0x2185, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x2184, .value=0x7e, .type=IO_READ},
        {.addr=0x2185, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0228) {
    const struct CPU_State initial_cpu = {.pc=0x06b8, .a=0xb8, .x=0x8a, .y=0x61, .sp=0xd8, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x4b}, {.addr=0x06b8, .value=0x7e}, {.addr=0x06b9, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x06ba, .a=0xb8, .x=0x8a, .y=0x61, .sp=0xd8, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x4b}, {.addr=0x06b8, .value=0x7e}, {.addr=0x06b9, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x06b8, .value=0x7e, .type=IO_READ},
        {.addr=0x06b9, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8cca, .a=0xfc, .x=0x9e, .y=0xa1, .sp=0xe2, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x2c}, {.addr=0x8cca, .value=0x7e}, {.addr=0x8ccb, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x8ccc, .a=0xfc, .x=0x9e, .y=0xa1, .sp=0xe2, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x2c}, {.addr=0x8cca, .value=0x7e}, {.addr=0x8ccb, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cca, .value=0x7e, .type=IO_READ},
        {.addr=0x8ccb, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022A) {
    const struct CPU_State initial_cpu = {.pc=0x5590, .a=0xe9, .x=0xff, .y=0x88, .sp=0x8d, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x83}, {.addr=0x5590, .value=0x7e}, {.addr=0x5591, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x5592, .a=0xe9, .x=0xff, .y=0x88, .sp=0x8d, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x83}, {.addr=0x5590, .value=0x7e}, {.addr=0x5591, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x5590, .value=0x7e, .type=IO_READ},
        {.addr=0x5591, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022B) {
    const struct CPU_State initial_cpu = {.pc=0x08a1, .a=0x31, .x=0x80, .y=0x6c, .sp=0xa1, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x07}, {.addr=0x08a1, .value=0x7e}, {.addr=0x08a2, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x08a3, .a=0x31, .x=0x80, .y=0x6c, .sp=0xa1, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x07}, {.addr=0x08a1, .value=0x7e}, {.addr=0x08a2, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x08a1, .value=0x7e, .type=IO_READ},
        {.addr=0x08a2, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022C) {
    const struct CPU_State initial_cpu = {.pc=0x8420, .a=0xab, .x=0xc1, .y=0x25, .sp=0x1a, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xcb}, {.addr=0x8420, .value=0x7e}, {.addr=0x8421, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x8422, .a=0xab, .x=0xc1, .y=0x25, .sp=0x1a, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xcb}, {.addr=0x8420, .value=0x7e}, {.addr=0x8421, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8420, .value=0x7e, .type=IO_READ},
        {.addr=0x8421, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022D) {
    const struct CPU_State initial_cpu = {.pc=0xc47b, .a=0xb1, .x=0x30, .y=0x76, .sp=0xef, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x3c}, {.addr=0xc47b, .value=0x7e}, {.addr=0xc47c, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xc47d, .a=0xb1, .x=0x30, .y=0x76, .sp=0xef, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x3c}, {.addr=0xc47b, .value=0x7e}, {.addr=0xc47c, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xc47b, .value=0x7e, .type=IO_READ},
        {.addr=0xc47c, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022E) {
    const struct CPU_State initial_cpu = {.pc=0xf335, .a=0xac, .x=0xb0, .y=0xaf, .sp=0x1d, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x34}, {.addr=0xf335, .value=0x7e}, {.addr=0xf336, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xf337, .a=0xac, .x=0xb0, .y=0xaf, .sp=0x1d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x34}, {.addr=0xf335, .value=0x7e}, {.addr=0xf336, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf335, .value=0x7e, .type=IO_READ},
        {.addr=0xf336, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe2da, .a=0xd3, .x=0x48, .y=0xf8, .sp=0xbf, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xe4}, {.addr=0xe2da, .value=0x7e}, {.addr=0xe2db, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xe2dc, .a=0xd3, .x=0x48, .y=0xf8, .sp=0xbf, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xe4}, {.addr=0xe2da, .value=0x7e}, {.addr=0xe2db, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2da, .value=0x7e, .type=IO_READ},
        {.addr=0xe2db, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0230) {
    const struct CPU_State initial_cpu = {.pc=0x7031, .a=0xa1, .x=0x2d, .y=0x01, .sp=0x48, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xcc}, {.addr=0x7031, .value=0x7e}, {.addr=0x7032, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x7033, .a=0xa1, .x=0x2d, .y=0x01, .sp=0x48, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xcc}, {.addr=0x7031, .value=0x7e}, {.addr=0x7032, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x7031, .value=0x7e, .type=IO_READ},
        {.addr=0x7032, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0231) {
    const struct CPU_State initial_cpu = {.pc=0x5aaa, .a=0x28, .x=0x0e, .y=0x5c, .sp=0xd8, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x07}, {.addr=0x5aaa, .value=0x7e}, {.addr=0x5aab, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x5aac, .a=0x28, .x=0x0e, .y=0x5c, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x07}, {.addr=0x5aaa, .value=0x7e}, {.addr=0x5aab, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5aaa, .value=0x7e, .type=IO_READ},
        {.addr=0x5aab, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc221, .a=0x8e, .x=0x45, .y=0xb8, .sp=0xaf, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xd5}, {.addr=0xc221, .value=0x7e}, {.addr=0xc222, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xc223, .a=0x8e, .x=0x45, .y=0xb8, .sp=0xaf, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xd5}, {.addr=0xc221, .value=0x7e}, {.addr=0xc222, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc221, .value=0x7e, .type=IO_READ},
        {.addr=0xc222, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0233) {
    const struct CPU_State initial_cpu = {.pc=0x8563, .a=0x92, .x=0xab, .y=0xd6, .sp=0x1b, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x5a}, {.addr=0x8563, .value=0x7e}, {.addr=0x8564, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x8565, .a=0x92, .x=0xab, .y=0xd6, .sp=0x1b, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x5a}, {.addr=0x8563, .value=0x7e}, {.addr=0x8564, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8563, .value=0x7e, .type=IO_READ},
        {.addr=0x8564, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd0dd, .a=0xc1, .x=0xed, .y=0x5c, .sp=0x83, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xea}, {.addr=0xd0dd, .value=0x7e}, {.addr=0xd0de, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xd0df, .a=0xc1, .x=0xed, .y=0x5c, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xea}, {.addr=0xd0dd, .value=0x7e}, {.addr=0xd0de, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0dd, .value=0x7e, .type=IO_READ},
        {.addr=0xd0de, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0235) {
    const struct CPU_State initial_cpu = {.pc=0x4fb4, .a=0xbb, .x=0x53, .y=0xf0, .sp=0x5e, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xb6}, {.addr=0x4fb4, .value=0x7e}, {.addr=0x4fb5, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x4fb6, .a=0xbb, .x=0x53, .y=0xf0, .sp=0x5e, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xb6}, {.addr=0x4fb4, .value=0x7e}, {.addr=0x4fb5, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fb4, .value=0x7e, .type=IO_READ},
        {.addr=0x4fb5, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0236) {
    const struct CPU_State initial_cpu = {.pc=0x8922, .a=0x04, .x=0xd5, .y=0x10, .sp=0x80, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xc4}, {.addr=0x8922, .value=0x7e}, {.addr=0x8923, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x8924, .a=0x04, .x=0xd5, .y=0x10, .sp=0x80, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xc4}, {.addr=0x8922, .value=0x7e}, {.addr=0x8923, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x8922, .value=0x7e, .type=IO_READ},
        {.addr=0x8923, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0238) {
    const struct CPU_State initial_cpu = {.pc=0xf9ce, .a=0x3d, .x=0x2c, .y=0xcf, .sp=0x12, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xab}, {.addr=0xf9ce, .value=0x7e}, {.addr=0xf9cf, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xf9d0, .a=0x3d, .x=0x2c, .y=0xcf, .sp=0x12, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xab}, {.addr=0xf9ce, .value=0x7e}, {.addr=0xf9cf, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ce, .value=0x7e, .type=IO_READ},
        {.addr=0xf9cf, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0239) {
    const struct CPU_State initial_cpu = {.pc=0x451d, .a=0xc7, .x=0xca, .y=0xe5, .sp=0xc1, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x91}, {.addr=0x451d, .value=0x7e}, {.addr=0x451e, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x451f, .a=0xc7, .x=0xca, .y=0xe5, .sp=0xc1, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x91}, {.addr=0x451d, .value=0x7e}, {.addr=0x451e, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x451d, .value=0x7e, .type=IO_READ},
        {.addr=0x451e, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_023B) {
    const struct CPU_State initial_cpu = {.pc=0xd2e9, .a=0xe3, .x=0x9c, .y=0xf6, .sp=0xd7, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x4a}, {.addr=0xd2e9, .value=0x7e}, {.addr=0xd2ea, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xd2eb, .a=0xe3, .x=0x9c, .y=0xf6, .sp=0xd7, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x4a}, {.addr=0xd2e9, .value=0x7e}, {.addr=0xd2ea, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2e9, .value=0x7e, .type=IO_READ},
        {.addr=0xd2ea, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_023C) {
    const struct CPU_State initial_cpu = {.pc=0xaab3, .a=0xda, .x=0x95, .y=0xaa, .sp=0x6d, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x1d}, {.addr=0xaab3, .value=0x7e}, {.addr=0xaab4, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xaab5, .a=0xda, .x=0x95, .y=0xaa, .sp=0x6d, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x1d}, {.addr=0xaab3, .value=0x7e}, {.addr=0xaab4, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xaab3, .value=0x7e, .type=IO_READ},
        {.addr=0xaab4, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_023D) {
    const struct CPU_State initial_cpu = {.pc=0x3ef7, .a=0x19, .x=0x92, .y=0x1a, .sp=0x4c, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x6a}, {.addr=0x3ef7, .value=0x7e}, {.addr=0x3ef8, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x3ef9, .a=0x19, .x=0x92, .y=0x1a, .sp=0x4c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x6a}, {.addr=0x3ef7, .value=0x7e}, {.addr=0x3ef8, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ef7, .value=0x7e, .type=IO_READ},
        {.addr=0x3ef8, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa23e, .a=0x75, .x=0x59, .y=0x19, .sp=0x14, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x93}, {.addr=0xa23e, .value=0x7e}, {.addr=0xa23f, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xa240, .a=0x75, .x=0x59, .y=0x19, .sp=0x14, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x93}, {.addr=0xa23e, .value=0x7e}, {.addr=0xa23f, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa23e, .value=0x7e, .type=IO_READ},
        {.addr=0xa23f, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0240) {
    const struct CPU_State initial_cpu = {.pc=0xe8e9, .a=0xf2, .x=0x16, .y=0xcd, .sp=0xed, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x82}, {.addr=0xe8e9, .value=0x7e}, {.addr=0xe8ea, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xe8eb, .a=0xf2, .x=0x16, .y=0xcd, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x82}, {.addr=0xe8e9, .value=0x7e}, {.addr=0xe8ea, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8e9, .value=0x7e, .type=IO_READ},
        {.addr=0xe8ea, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0241) {
    const struct CPU_State initial_cpu = {.pc=0xa3c0, .a=0x8e, .x=0x70, .y=0xd4, .sp=0x03, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xb6}, {.addr=0xa3c0, .value=0x7e}, {.addr=0xa3c1, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xa3c2, .a=0x8e, .x=0x70, .y=0xd4, .sp=0x03, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xb6}, {.addr=0xa3c0, .value=0x7e}, {.addr=0xa3c1, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3c0, .value=0x7e, .type=IO_READ},
        {.addr=0xa3c1, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2f30, .a=0xd3, .x=0x67, .y=0xc0, .sp=0xf7, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x0c}, {.addr=0x2f30, .value=0x7e}, {.addr=0x2f31, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x2f32, .a=0xd3, .x=0x67, .y=0xc0, .sp=0xf7, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x0c}, {.addr=0x2f30, .value=0x7e}, {.addr=0x2f31, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f30, .value=0x7e, .type=IO_READ},
        {.addr=0x2f31, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0243) {
    const struct CPU_State initial_cpu = {.pc=0xa20c, .a=0xda, .x=0x99, .y=0xa5, .sp=0x74, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x46}, {.addr=0xa20c, .value=0x7e}, {.addr=0xa20d, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xa20e, .a=0xda, .x=0x99, .y=0xa5, .sp=0x74, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x46}, {.addr=0xa20c, .value=0x7e}, {.addr=0xa20d, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa20c, .value=0x7e, .type=IO_READ},
        {.addr=0xa20d, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0244) {
    const struct CPU_State initial_cpu = {.pc=0x1717, .a=0xcd, .x=0xbb, .y=0x40, .sp=0x86, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x3f}, {.addr=0x1717, .value=0x7e}, {.addr=0x1718, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x1719, .a=0xcd, .x=0xbb, .y=0x40, .sp=0x86, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x3f}, {.addr=0x1717, .value=0x7e}, {.addr=0x1718, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x1717, .value=0x7e, .type=IO_READ},
        {.addr=0x1718, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0245) {
    const struct CPU_State initial_cpu = {.pc=0x8e6a, .a=0x73, .x=0x2b, .y=0x23, .sp=0xe6, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xe9}, {.addr=0x8e6a, .value=0x7e}, {.addr=0x8e6b, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x8e6c, .a=0x73, .x=0x2b, .y=0x23, .sp=0xe6, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xe9}, {.addr=0x8e6a, .value=0x7e}, {.addr=0x8e6b, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e6a, .value=0x7e, .type=IO_READ},
        {.addr=0x8e6b, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0246) {
    const struct CPU_State initial_cpu = {.pc=0x2a45, .a=0xc2, .x=0xc8, .y=0xcb, .sp=0xa4, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x47}, {.addr=0x2a45, .value=0x7e}, {.addr=0x2a46, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2a47, .a=0xc2, .x=0xc8, .y=0xcb, .sp=0xa4, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x47}, {.addr=0x2a45, .value=0x7e}, {.addr=0x2a46, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a45, .value=0x7e, .type=IO_READ},
        {.addr=0x2a46, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0247) {
    const struct CPU_State initial_cpu = {.pc=0xe020, .a=0xc0, .x=0x55, .y=0x29, .sp=0x32, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x76}, {.addr=0xe020, .value=0x7e}, {.addr=0xe021, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xe022, .a=0xc0, .x=0x55, .y=0x29, .sp=0x32, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x76}, {.addr=0xe020, .value=0x7e}, {.addr=0xe021, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xe020, .value=0x7e, .type=IO_READ},
        {.addr=0xe021, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0248) {
    const struct CPU_State initial_cpu = {.pc=0x77ba, .a=0x7a, .x=0x55, .y=0x2a, .sp=0x19, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x74}, {.addr=0x77ba, .value=0x7e}, {.addr=0x77bb, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x77bc, .a=0x7a, .x=0x55, .y=0x2a, .sp=0x19, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x74}, {.addr=0x77ba, .value=0x7e}, {.addr=0x77bb, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x77ba, .value=0x7e, .type=IO_READ},
        {.addr=0x77bb, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0249) {
    const struct CPU_State initial_cpu = {.pc=0xc5e9, .a=0xfd, .x=0x50, .y=0x45, .sp=0xd2, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x30}, {.addr=0xc5e9, .value=0x7e}, {.addr=0xc5ea, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xc5eb, .a=0xfd, .x=0x50, .y=0x45, .sp=0xd2, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x30}, {.addr=0xc5e9, .value=0x7e}, {.addr=0xc5ea, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5e9, .value=0x7e, .type=IO_READ},
        {.addr=0xc5ea, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024A) {
    const struct CPU_State initial_cpu = {.pc=0xe77b, .a=0xe4, .x=0xca, .y=0x27, .sp=0xf9, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x63}, {.addr=0xe77b, .value=0x7e}, {.addr=0xe77c, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xe77d, .a=0xe4, .x=0xca, .y=0x27, .sp=0xf9, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x63}, {.addr=0xe77b, .value=0x7e}, {.addr=0xe77c, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe77b, .value=0x7e, .type=IO_READ},
        {.addr=0xe77c, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024B) {
    const struct CPU_State initial_cpu = {.pc=0xf6fd, .a=0x6c, .x=0xa6, .y=0xfd, .sp=0x87, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xee}, {.addr=0xf6fd, .value=0x7e}, {.addr=0xf6fe, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xf6ff, .a=0x6c, .x=0xa6, .y=0xfd, .sp=0x87, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xee}, {.addr=0xf6fd, .value=0x7e}, {.addr=0xf6fe, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6fd, .value=0x7e, .type=IO_READ},
        {.addr=0xf6fe, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024C) {
    const struct CPU_State initial_cpu = {.pc=0x8c2d, .a=0x4f, .x=0x56, .y=0x41, .sp=0x42, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xd5}, {.addr=0x8c2d, .value=0x7e}, {.addr=0x8c2e, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x8c2f, .a=0x4f, .x=0x56, .y=0x41, .sp=0x42, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xd5}, {.addr=0x8c2d, .value=0x7e}, {.addr=0x8c2e, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c2d, .value=0x7e, .type=IO_READ},
        {.addr=0x8c2e, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024D) {
    const struct CPU_State initial_cpu = {.pc=0xa29c, .a=0x76, .x=0xe0, .y=0x3f, .sp=0xc8, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x9b}, {.addr=0xa29c, .value=0x7e}, {.addr=0xa29d, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xa29e, .a=0x76, .x=0xe0, .y=0x3f, .sp=0xc8, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x9b}, {.addr=0xa29c, .value=0x7e}, {.addr=0xa29d, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xa29c, .value=0x7e, .type=IO_READ},
        {.addr=0xa29d, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024E) {
    const struct CPU_State initial_cpu = {.pc=0x78fe, .a=0xfe, .x=0xc7, .y=0xe2, .sp=0xe9, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xc7}, {.addr=0x78fe, .value=0x7e}, {.addr=0x78ff, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x7900, .a=0xfe, .x=0xc7, .y=0xe2, .sp=0xe9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xc7}, {.addr=0x78fe, .value=0x7e}, {.addr=0x78ff, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x78fe, .value=0x7e, .type=IO_READ},
        {.addr=0x78ff, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_024F) {
    const struct CPU_State initial_cpu = {.pc=0x8d06, .a=0xad, .x=0x4b, .y=0x62, .sp=0x05, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xbe}, {.addr=0x8d06, .value=0x7e}, {.addr=0x8d07, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x8d08, .a=0xad, .x=0x4b, .y=0x62, .sp=0x05, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xbe}, {.addr=0x8d06, .value=0x7e}, {.addr=0x8d07, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d06, .value=0x7e, .type=IO_READ},
        {.addr=0x8d07, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0250) {
    const struct CPU_State initial_cpu = {.pc=0x72e7, .a=0x65, .x=0x76, .y=0xaa, .sp=0xba, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x43}, {.addr=0x72e7, .value=0x7e}, {.addr=0x72e8, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x72e9, .a=0x65, .x=0x76, .y=0xaa, .sp=0xba, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x43}, {.addr=0x72e7, .value=0x7e}, {.addr=0x72e8, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x72e7, .value=0x7e, .type=IO_READ},
        {.addr=0x72e8, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0251) {
    const struct CPU_State initial_cpu = {.pc=0x5c78, .a=0xf8, .x=0x94, .y=0xb2, .sp=0x33, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x00}, {.addr=0x5c78, .value=0x7e}, {.addr=0x5c79, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x5c7a, .a=0xf8, .x=0x94, .y=0xb2, .sp=0x33, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x00}, {.addr=0x5c78, .value=0x7e}, {.addr=0x5c79, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c78, .value=0x7e, .type=IO_READ},
        {.addr=0x5c79, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0252) {
    const struct CPU_State initial_cpu = {.pc=0x063d, .a=0x0c, .x=0x12, .y=0x9f, .sp=0xc1, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xf7}, {.addr=0x063d, .value=0x7e}, {.addr=0x063e, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x063f, .a=0x0c, .x=0x12, .y=0x9f, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xf7}, {.addr=0x063d, .value=0x7e}, {.addr=0x063e, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x063d, .value=0x7e, .type=IO_READ},
        {.addr=0x063e, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0254) {
    const struct CPU_State initial_cpu = {.pc=0x2543, .a=0x0a, .x=0xba, .y=0xcd, .sp=0xe3, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xf9}, {.addr=0x2543, .value=0x7e}, {.addr=0x2544, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x2545, .a=0x0a, .x=0xba, .y=0xcd, .sp=0xe3, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xf9}, {.addr=0x2543, .value=0x7e}, {.addr=0x2544, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2543, .value=0x7e, .type=IO_READ},
        {.addr=0x2544, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0255) {
    const struct CPU_State initial_cpu = {.pc=0xeacb, .a=0xf0, .x=0x1e, .y=0x27, .sp=0x56, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x12}, {.addr=0xeacb, .value=0x7e}, {.addr=0xeacc, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xeacd, .a=0xf0, .x=0x1e, .y=0x27, .sp=0x56, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x12}, {.addr=0xeacb, .value=0x7e}, {.addr=0xeacc, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xeacb, .value=0x7e, .type=IO_READ},
        {.addr=0xeacc, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0256) {
    const struct CPU_State initial_cpu = {.pc=0x8bf9, .a=0x9f, .x=0x69, .y=0xeb, .sp=0x8c, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xe8}, {.addr=0x8bf9, .value=0x7e}, {.addr=0x8bfa, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x8bfb, .a=0x9f, .x=0x69, .y=0xeb, .sp=0x8c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xe8}, {.addr=0x8bf9, .value=0x7e}, {.addr=0x8bfa, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bf9, .value=0x7e, .type=IO_READ},
        {.addr=0x8bfa, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9f79, .a=0x29, .x=0xd5, .y=0xf9, .sp=0x3f, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x4e}, {.addr=0x9f79, .value=0x7e}, {.addr=0x9f7a, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x9f7b, .a=0x29, .x=0xd5, .y=0xf9, .sp=0x3f, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x4e}, {.addr=0x9f79, .value=0x7e}, {.addr=0x9f7a, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f79, .value=0x7e, .type=IO_READ},
        {.addr=0x9f7a, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0258) {
    const struct CPU_State initial_cpu = {.pc=0xd93b, .a=0xe9, .x=0x15, .y=0x39, .sp=0x0e, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x24}, {.addr=0xd93b, .value=0x7e}, {.addr=0xd93c, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xd93d, .a=0xe9, .x=0x15, .y=0x39, .sp=0x0e, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x24}, {.addr=0xd93b, .value=0x7e}, {.addr=0xd93c, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xd93b, .value=0x7e, .type=IO_READ},
        {.addr=0xd93c, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0259) {
    const struct CPU_State initial_cpu = {.pc=0xf44f, .a=0x6f, .x=0x73, .y=0x11, .sp=0x21, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xeb}, {.addr=0xf44f, .value=0x7e}, {.addr=0xf450, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xf451, .a=0x6f, .x=0x73, .y=0x11, .sp=0x21, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xeb}, {.addr=0xf44f, .value=0x7e}, {.addr=0xf450, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xf44f, .value=0x7e, .type=IO_READ},
        {.addr=0xf450, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025A) {
    const struct CPU_State initial_cpu = {.pc=0xe295, .a=0x60, .x=0x1c, .y=0x70, .sp=0x2b, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xbd}, {.addr=0xe295, .value=0x7e}, {.addr=0xe296, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xe297, .a=0x60, .x=0x1c, .y=0x70, .sp=0x2b, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xbd}, {.addr=0xe295, .value=0x7e}, {.addr=0xe296, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xe295, .value=0x7e, .type=IO_READ},
        {.addr=0xe296, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025B) {
    const struct CPU_State initial_cpu = {.pc=0xed63, .a=0x35, .x=0xea, .y=0xcd, .sp=0x80, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x25}, {.addr=0xed63, .value=0x7e}, {.addr=0xed64, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xed65, .a=0x35, .x=0xea, .y=0xcd, .sp=0x80, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x25}, {.addr=0xed63, .value=0x7e}, {.addr=0xed64, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xed63, .value=0x7e, .type=IO_READ},
        {.addr=0xed64, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025C) {
    const struct CPU_State initial_cpu = {.pc=0x9edb, .a=0x68, .x=0x15, .y=0x2e, .sp=0x1c, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x7a}, {.addr=0x9edb, .value=0x7e}, {.addr=0x9edc, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x9edd, .a=0x68, .x=0x15, .y=0x2e, .sp=0x1c, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x7a}, {.addr=0x9edb, .value=0x7e}, {.addr=0x9edc, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x9edb, .value=0x7e, .type=IO_READ},
        {.addr=0x9edc, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025D) {
    const struct CPU_State initial_cpu = {.pc=0x1dd9, .a=0x87, .x=0x1d, .y=0x08, .sp=0xf0, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xe1}, {.addr=0x1dd9, .value=0x7e}, {.addr=0x1dda, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x1ddb, .a=0x87, .x=0x1d, .y=0x08, .sp=0xf0, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xe1}, {.addr=0x1dd9, .value=0x7e}, {.addr=0x1dda, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dd9, .value=0x7e, .type=IO_READ},
        {.addr=0x1dda, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025E) {
    const struct CPU_State initial_cpu = {.pc=0xf632, .a=0x68, .x=0x93, .y=0x83, .sp=0x13, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x54}, {.addr=0xf632, .value=0x7e}, {.addr=0xf633, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xf634, .a=0x68, .x=0x93, .y=0x83, .sp=0x13, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x54}, {.addr=0xf632, .value=0x7e}, {.addr=0xf633, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf632, .value=0x7e, .type=IO_READ},
        {.addr=0xf633, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_025F) {
    const struct CPU_State initial_cpu = {.pc=0x741e, .a=0xef, .x=0x6b, .y=0x04, .sp=0x50, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x1f}, {.addr=0x741e, .value=0x7e}, {.addr=0x741f, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x7420, .a=0xef, .x=0x6b, .y=0x04, .sp=0x50, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x1f}, {.addr=0x741e, .value=0x7e}, {.addr=0x741f, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x741e, .value=0x7e, .type=IO_READ},
        {.addr=0x741f, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0260) {
    const struct CPU_State initial_cpu = {.pc=0x3500, .a=0x51, .x=0x10, .y=0x4d, .sp=0x2b, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x1f}, {.addr=0x3500, .value=0x7e}, {.addr=0x3501, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x3502, .a=0x51, .x=0x10, .y=0x4d, .sp=0x2b, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x1f}, {.addr=0x3500, .value=0x7e}, {.addr=0x3501, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x3500, .value=0x7e, .type=IO_READ},
        {.addr=0x3501, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0261) {
    const struct CPU_State initial_cpu = {.pc=0x629b, .a=0x90, .x=0xcf, .y=0x07, .sp=0x65, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xe6}, {.addr=0x629b, .value=0x7e}, {.addr=0x629c, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x629d, .a=0x90, .x=0xcf, .y=0x07, .sp=0x65, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xe6}, {.addr=0x629b, .value=0x7e}, {.addr=0x629c, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x629b, .value=0x7e, .type=IO_READ},
        {.addr=0x629c, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0262) {
    const struct CPU_State initial_cpu = {.pc=0xd860, .a=0x3b, .x=0xbd, .y=0x95, .sp=0x72, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x72}, {.addr=0xd860, .value=0x7e}, {.addr=0xd861, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xd862, .a=0x3b, .x=0xbd, .y=0x95, .sp=0x72, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x72}, {.addr=0xd860, .value=0x7e}, {.addr=0xd861, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xd860, .value=0x7e, .type=IO_READ},
        {.addr=0xd861, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0263) {
    const struct CPU_State initial_cpu = {.pc=0xc351, .a=0x39, .x=0x30, .y=0xf0, .sp=0xf3, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x1a}, {.addr=0xc351, .value=0x7e}, {.addr=0xc352, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xc353, .a=0x39, .x=0x30, .y=0xf0, .sp=0xf3, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x1a}, {.addr=0xc351, .value=0x7e}, {.addr=0xc352, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xc351, .value=0x7e, .type=IO_READ},
        {.addr=0xc352, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0264) {
    const struct CPU_State initial_cpu = {.pc=0x7def, .a=0x95, .x=0x43, .y=0xb6, .sp=0xe6, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x85}, {.addr=0x7def, .value=0x7e}, {.addr=0x7df0, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x7df1, .a=0x95, .x=0x43, .y=0xb6, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x85}, {.addr=0x7def, .value=0x7e}, {.addr=0x7df0, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x7def, .value=0x7e, .type=IO_READ},
        {.addr=0x7df0, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6f63, .a=0x28, .x=0xd6, .y=0xc3, .sp=0xa5, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x0f}, {.addr=0x6f63, .value=0x7e}, {.addr=0x6f64, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x6f65, .a=0x28, .x=0xd6, .y=0xc3, .sp=0xa5, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x0f}, {.addr=0x6f63, .value=0x7e}, {.addr=0x6f64, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f63, .value=0x7e, .type=IO_READ},
        {.addr=0x6f64, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0266) {
    const struct CPU_State initial_cpu = {.pc=0xfa95, .a=0x4a, .x=0x26, .y=0xd9, .sp=0xf6, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x49}, {.addr=0xfa95, .value=0x7e}, {.addr=0xfa96, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xfa97, .a=0x4a, .x=0x26, .y=0xd9, .sp=0xf6, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x49}, {.addr=0xfa95, .value=0x7e}, {.addr=0xfa96, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa95, .value=0x7e, .type=IO_READ},
        {.addr=0xfa96, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0267) {
    const struct CPU_State initial_cpu = {.pc=0x5a21, .a=0xcb, .x=0x94, .y=0xba, .sp=0xe2, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xb9}, {.addr=0x5a21, .value=0x7e}, {.addr=0x5a22, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x5a23, .a=0xcb, .x=0x94, .y=0xba, .sp=0xe2, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xb9}, {.addr=0x5a21, .value=0x7e}, {.addr=0x5a22, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a21, .value=0x7e, .type=IO_READ},
        {.addr=0x5a22, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0268) {
    const struct CPU_State initial_cpu = {.pc=0x5015, .a=0x3f, .x=0xc3, .y=0x27, .sp=0x91, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x42}, {.addr=0x5015, .value=0x7e}, {.addr=0x5016, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x5017, .a=0x3f, .x=0xc3, .y=0x27, .sp=0x91, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x42}, {.addr=0x5015, .value=0x7e}, {.addr=0x5016, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x5015, .value=0x7e, .type=IO_READ},
        {.addr=0x5016, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0269) {
    const struct CPU_State initial_cpu = {.pc=0xfbd4, .a=0x5c, .x=0x97, .y=0x84, .sp=0xdf, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xd6}, {.addr=0xfbd4, .value=0x7e}, {.addr=0xfbd5, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xfbd6, .a=0x5c, .x=0x97, .y=0x84, .sp=0xdf, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xd6}, {.addr=0xfbd4, .value=0x7e}, {.addr=0xfbd5, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbd4, .value=0x7e, .type=IO_READ},
        {.addr=0xfbd5, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_026A) {
    const struct CPU_State initial_cpu = {.pc=0x4425, .a=0x5a, .x=0xad, .y=0x55, .sp=0x15, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x29}, {.addr=0x4425, .value=0x7e}, {.addr=0x4426, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x4427, .a=0x5a, .x=0xad, .y=0x55, .sp=0x15, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x29}, {.addr=0x4425, .value=0x7e}, {.addr=0x4426, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x4425, .value=0x7e, .type=IO_READ},
        {.addr=0x4426, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_026B) {
    const struct CPU_State initial_cpu = {.pc=0x5ce2, .a=0x39, .x=0x51, .y=0x05, .sp=0x33, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xe8}, {.addr=0x5ce2, .value=0x7e}, {.addr=0x5ce3, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce4, .a=0x39, .x=0x51, .y=0x05, .sp=0x33, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xe8}, {.addr=0x5ce2, .value=0x7e}, {.addr=0x5ce3, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce2, .value=0x7e, .type=IO_READ},
        {.addr=0x5ce3, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_026C) {
    const struct CPU_State initial_cpu = {.pc=0x65dc, .a=0x82, .x=0x67, .y=0xab, .sp=0xb8, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x79}, {.addr=0x65dc, .value=0x7e}, {.addr=0x65dd, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x65de, .a=0x82, .x=0x67, .y=0xab, .sp=0xb8, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x79}, {.addr=0x65dc, .value=0x7e}, {.addr=0x65dd, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x65dc, .value=0x7e, .type=IO_READ},
        {.addr=0x65dd, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_026D) {
    const struct CPU_State initial_cpu = {.pc=0x2542, .a=0xa4, .x=0x16, .y=0xe3, .sp=0x34, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xa2}, {.addr=0x2542, .value=0x7e}, {.addr=0x2543, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2544, .a=0xa4, .x=0x16, .y=0xe3, .sp=0x34, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xa2}, {.addr=0x2542, .value=0x7e}, {.addr=0x2543, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x2542, .value=0x7e, .type=IO_READ},
        {.addr=0x2543, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_026E) {
    const struct CPU_State initial_cpu = {.pc=0x18c9, .a=0x2d, .x=0x2d, .y=0x77, .sp=0x3c, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x8c}, {.addr=0x18c9, .value=0x7e}, {.addr=0x18ca, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x18cb, .a=0x2d, .x=0x2d, .y=0x77, .sp=0x3c, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x8c}, {.addr=0x18c9, .value=0x7e}, {.addr=0x18ca, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x18c9, .value=0x7e, .type=IO_READ},
        {.addr=0x18ca, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0270) {
    const struct CPU_State initial_cpu = {.pc=0x5bb9, .a=0xe9, .x=0xe0, .y=0x98, .sp=0xd5, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xa0}, {.addr=0x5bb9, .value=0x7e}, {.addr=0x5bba, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x5bbb, .a=0xe9, .x=0xe0, .y=0x98, .sp=0xd5, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xa0}, {.addr=0x5bb9, .value=0x7e}, {.addr=0x5bba, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bb9, .value=0x7e, .type=IO_READ},
        {.addr=0x5bba, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0271) {
    const struct CPU_State initial_cpu = {.pc=0x3282, .a=0xdd, .x=0x7b, .y=0xb3, .sp=0xc6, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xa0}, {.addr=0x3282, .value=0x7e}, {.addr=0x3283, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x3284, .a=0xdd, .x=0x7b, .y=0xb3, .sp=0xc6, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xa0}, {.addr=0x3282, .value=0x7e}, {.addr=0x3283, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3282, .value=0x7e, .type=IO_READ},
        {.addr=0x3283, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0272) {
    const struct CPU_State initial_cpu = {.pc=0x28d4, .a=0x1c, .x=0xad, .y=0x12, .sp=0x65, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x7d}, {.addr=0x28d4, .value=0x7e}, {.addr=0x28d5, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x28d6, .a=0x1c, .x=0xad, .y=0x12, .sp=0x65, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x7d}, {.addr=0x28d4, .value=0x7e}, {.addr=0x28d5, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x28d4, .value=0x7e, .type=IO_READ},
        {.addr=0x28d5, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0273) {
    const struct CPU_State initial_cpu = {.pc=0x493b, .a=0x8c, .x=0x45, .y=0x0e, .sp=0x70, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xf9}, {.addr=0x493b, .value=0x7e}, {.addr=0x493c, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x493d, .a=0x8c, .x=0x45, .y=0x0e, .sp=0x70, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xf9}, {.addr=0x493b, .value=0x7e}, {.addr=0x493c, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x493b, .value=0x7e, .type=IO_READ},
        {.addr=0x493c, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0274) {
    const struct CPU_State initial_cpu = {.pc=0xbcfa, .a=0x03, .x=0x0c, .y=0x94, .sp=0x23, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xe4}, {.addr=0xbcfa, .value=0x7e}, {.addr=0xbcfb, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xbcfc, .a=0x03, .x=0x0c, .y=0x94, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xe4}, {.addr=0xbcfa, .value=0x7e}, {.addr=0xbcfb, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcfa, .value=0x7e, .type=IO_READ},
        {.addr=0xbcfb, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5793, .a=0x79, .x=0xe0, .y=0x8e, .sp=0xb7, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x4d}, {.addr=0x5793, .value=0x7e}, {.addr=0x5794, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x5795, .a=0x79, .x=0xe0, .y=0x8e, .sp=0xb7, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x4d}, {.addr=0x5793, .value=0x7e}, {.addr=0x5794, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x5793, .value=0x7e, .type=IO_READ},
        {.addr=0x5794, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0276) {
    const struct CPU_State initial_cpu = {.pc=0xd245, .a=0x3c, .x=0x63, .y=0xe3, .sp=0x61, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x82}, {.addr=0xd245, .value=0x7e}, {.addr=0xd246, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xd247, .a=0x3c, .x=0x63, .y=0xe3, .sp=0x61, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x82}, {.addr=0xd245, .value=0x7e}, {.addr=0xd246, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xd245, .value=0x7e, .type=IO_READ},
        {.addr=0xd246, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0277) {
    const struct CPU_State initial_cpu = {.pc=0x666c, .a=0x8d, .x=0x15, .y=0x4b, .sp=0x75, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0xfc}, {.addr=0x666c, .value=0x7e}, {.addr=0x666d, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x666e, .a=0x8d, .x=0x15, .y=0x4b, .sp=0x75, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0xfc}, {.addr=0x666c, .value=0x7e}, {.addr=0x666d, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x666c, .value=0x7e, .type=IO_READ},
        {.addr=0x666d, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0278) {
    const struct CPU_State initial_cpu = {.pc=0x3646, .a=0xd5, .x=0x53, .y=0x00, .sp=0x75, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xa6}, {.addr=0x3646, .value=0x7e}, {.addr=0x3647, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x3648, .a=0xd5, .x=0x53, .y=0x00, .sp=0x75, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xa6}, {.addr=0x3646, .value=0x7e}, {.addr=0x3647, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x3646, .value=0x7e, .type=IO_READ},
        {.addr=0x3647, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0279) {
    const struct CPU_State initial_cpu = {.pc=0x9bd3, .a=0xc3, .x=0xd8, .y=0x11, .sp=0x82, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xc2}, {.addr=0x9bd3, .value=0x7e}, {.addr=0x9bd4, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x9bd5, .a=0xc3, .x=0xd8, .y=0x11, .sp=0x82, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xc2}, {.addr=0x9bd3, .value=0x7e}, {.addr=0x9bd4, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bd3, .value=0x7e, .type=IO_READ},
        {.addr=0x9bd4, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb706, .a=0xce, .x=0x97, .y=0xe0, .sp=0x43, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x3b}, {.addr=0xb706, .value=0x7e}, {.addr=0xb707, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xb708, .a=0xce, .x=0x97, .y=0xe0, .sp=0x43, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x3b}, {.addr=0xb706, .value=0x7e}, {.addr=0xb707, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb706, .value=0x7e, .type=IO_READ},
        {.addr=0xb707, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027B) {
    const struct CPU_State initial_cpu = {.pc=0x882a, .a=0x8c, .x=0xa8, .y=0x3f, .sp=0x9c, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xcb}, {.addr=0x882a, .value=0x7e}, {.addr=0x882b, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x882c, .a=0x8c, .x=0xa8, .y=0x3f, .sp=0x9c, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xcb}, {.addr=0x882a, .value=0x7e}, {.addr=0x882b, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x882a, .value=0x7e, .type=IO_READ},
        {.addr=0x882b, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027C) {
    const struct CPU_State initial_cpu = {.pc=0x6837, .a=0x44, .x=0x32, .y=0xd4, .sp=0xde, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x5d}, {.addr=0x6837, .value=0x7e}, {.addr=0x6838, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6839, .a=0x44, .x=0x32, .y=0xd4, .sp=0xde, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x5d}, {.addr=0x6837, .value=0x7e}, {.addr=0x6838, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6837, .value=0x7e, .type=IO_READ},
        {.addr=0x6838, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027D) {
    const struct CPU_State initial_cpu = {.pc=0x098f, .a=0x07, .x=0xc4, .y=0x9b, .sp=0x64, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x47}, {.addr=0x098f, .value=0x7e}, {.addr=0x0990, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x0991, .a=0x07, .x=0xc4, .y=0x9b, .sp=0x64, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x47}, {.addr=0x098f, .value=0x7e}, {.addr=0x0990, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x098f, .value=0x7e, .type=IO_READ},
        {.addr=0x0990, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027E) {
    const struct CPU_State initial_cpu = {.pc=0x5196, .a=0x92, .x=0xda, .y=0xe2, .sp=0xe9, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x8b}, {.addr=0x5196, .value=0x7e}, {.addr=0x5197, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x5198, .a=0x92, .x=0xda, .y=0xe2, .sp=0xe9, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x8b}, {.addr=0x5196, .value=0x7e}, {.addr=0x5197, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x5196, .value=0x7e, .type=IO_READ},
        {.addr=0x5197, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_027F) {
    const struct CPU_State initial_cpu = {.pc=0xbbf8, .a=0x14, .x=0xcd, .y=0x8c, .sp=0xf7, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xe1}, {.addr=0xbbf8, .value=0x7e}, {.addr=0xbbf9, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xbbfa, .a=0x14, .x=0xcd, .y=0x8c, .sp=0xf7, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xe1}, {.addr=0xbbf8, .value=0x7e}, {.addr=0xbbf9, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbf8, .value=0x7e, .type=IO_READ},
        {.addr=0xbbf9, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0280) {
    const struct CPU_State initial_cpu = {.pc=0x6397, .a=0xc8, .x=0xd2, .y=0x3f, .sp=0x5c, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x75}, {.addr=0x6397, .value=0x7e}, {.addr=0x6398, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x6399, .a=0xc8, .x=0xd2, .y=0x3f, .sp=0x5c, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x75}, {.addr=0x6397, .value=0x7e}, {.addr=0x6398, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6397, .value=0x7e, .type=IO_READ},
        {.addr=0x6398, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0281) {
    const struct CPU_State initial_cpu = {.pc=0xcd8e, .a=0xab, .x=0x46, .y=0x6e, .sp=0x5a, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x54}, {.addr=0xcd8e, .value=0x7e}, {.addr=0xcd8f, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xcd90, .a=0xab, .x=0x46, .y=0x6e, .sp=0x5a, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x54}, {.addr=0xcd8e, .value=0x7e}, {.addr=0xcd8f, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd8e, .value=0x7e, .type=IO_READ},
        {.addr=0xcd8f, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0282) {
    const struct CPU_State initial_cpu = {.pc=0x900e, .a=0x5f, .x=0x87, .y=0xcb, .sp=0xec, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x54}, {.addr=0x900e, .value=0x7e}, {.addr=0x900f, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x9010, .a=0x5f, .x=0x87, .y=0xcb, .sp=0xec, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x54}, {.addr=0x900e, .value=0x7e}, {.addr=0x900f, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x900e, .value=0x7e, .type=IO_READ},
        {.addr=0x900f, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0283) {
    const struct CPU_State initial_cpu = {.pc=0xebfc, .a=0xbb, .x=0xbd, .y=0xd2, .sp=0x65, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x5e}, {.addr=0xebfc, .value=0x7e}, {.addr=0xebfd, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xebfe, .a=0xbb, .x=0xbd, .y=0xd2, .sp=0x65, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x5e}, {.addr=0xebfc, .value=0x7e}, {.addr=0xebfd, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xebfc, .value=0x7e, .type=IO_READ},
        {.addr=0xebfd, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe287, .a=0x01, .x=0x41, .y=0xe0, .sp=0xf1, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x68}, {.addr=0xe287, .value=0x7e}, {.addr=0xe288, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xe289, .a=0x01, .x=0x41, .y=0xe0, .sp=0xf1, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x68}, {.addr=0xe287, .value=0x7e}, {.addr=0xe288, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xe287, .value=0x7e, .type=IO_READ},
        {.addr=0xe288, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0285) {
    const struct CPU_State initial_cpu = {.pc=0x10eb, .a=0x44, .x=0x72, .y=0x21, .sp=0x89, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x4e}, {.addr=0x10eb, .value=0x7e}, {.addr=0x10ec, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0x44, .x=0x72, .y=0x21, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x4e}, {.addr=0x10eb, .value=0x7e}, {.addr=0x10ec, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x10eb, .value=0x7e, .type=IO_READ},
        {.addr=0x10ec, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0286) {
    const struct CPU_State initial_cpu = {.pc=0x913f, .a=0xb6, .x=0xa9, .y=0x1c, .sp=0xad, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0x5c}, {.addr=0x913f, .value=0x7e}, {.addr=0x9140, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x9141, .a=0xb6, .x=0xa9, .y=0x1c, .sp=0xad, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0x5c}, {.addr=0x913f, .value=0x7e}, {.addr=0x9140, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x913f, .value=0x7e, .type=IO_READ},
        {.addr=0x9140, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0287) {
    const struct CPU_State initial_cpu = {.pc=0xee92, .a=0x31, .x=0x1e, .y=0x5a, .sp=0xa4, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xa9}, {.addr=0xee92, .value=0x7e}, {.addr=0xee93, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xee94, .a=0x31, .x=0x1e, .y=0x5a, .sp=0xa4, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xa9}, {.addr=0xee92, .value=0x7e}, {.addr=0xee93, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xee92, .value=0x7e, .type=IO_READ},
        {.addr=0xee93, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0288) {
    const struct CPU_State initial_cpu = {.pc=0xa48d, .a=0xee, .x=0xa3, .y=0x85, .sp=0x2e, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x92}, {.addr=0xa48d, .value=0x7e}, {.addr=0xa48e, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xa48f, .a=0xee, .x=0xa3, .y=0x85, .sp=0x2e, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x92}, {.addr=0xa48d, .value=0x7e}, {.addr=0xa48e, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa48d, .value=0x7e, .type=IO_READ},
        {.addr=0xa48e, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0289) {
    const struct CPU_State initial_cpu = {.pc=0xac2f, .a=0x46, .x=0xa9, .y=0xe0, .sp=0xef, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x5d}, {.addr=0xac2f, .value=0x7e}, {.addr=0xac30, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xac31, .a=0x46, .x=0xa9, .y=0xe0, .sp=0xef, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x5d}, {.addr=0xac2f, .value=0x7e}, {.addr=0xac30, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xac2f, .value=0x7e, .type=IO_READ},
        {.addr=0xac30, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_028A) {
    const struct CPU_State initial_cpu = {.pc=0x3bf1, .a=0xb9, .x=0x2b, .y=0x72, .sp=0x85, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0x3bf1, .value=0x7e}, {.addr=0x3bf2, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x3bf3, .a=0xb9, .x=0x2b, .y=0x72, .sp=0x85, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0x3bf1, .value=0x7e}, {.addr=0x3bf2, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bf1, .value=0x7e, .type=IO_READ},
        {.addr=0x3bf2, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_028B) {
    const struct CPU_State initial_cpu = {.pc=0x9ac2, .a=0x70, .x=0xe9, .y=0x89, .sp=0x91, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xa8}, {.addr=0x9ac2, .value=0x7e}, {.addr=0x9ac3, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x9ac4, .a=0x70, .x=0xe9, .y=0x89, .sp=0x91, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xa8}, {.addr=0x9ac2, .value=0x7e}, {.addr=0x9ac3, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ac2, .value=0x7e, .type=IO_READ},
        {.addr=0x9ac3, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_028D) {
    const struct CPU_State initial_cpu = {.pc=0x5c67, .a=0xa7, .x=0xba, .y=0x5a, .sp=0x85, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xdf}, {.addr=0x5c67, .value=0x7e}, {.addr=0x5c68, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x5c69, .a=0xa7, .x=0xba, .y=0x5a, .sp=0x85, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xdf}, {.addr=0x5c67, .value=0x7e}, {.addr=0x5c68, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c67, .value=0x7e, .type=IO_READ},
        {.addr=0x5c68, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_028E) {
    const struct CPU_State initial_cpu = {.pc=0x46e2, .a=0x00, .x=0xcb, .y=0x00, .sp=0xa5, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x5f}, {.addr=0x46e2, .value=0x7e}, {.addr=0x46e3, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x46e4, .a=0x00, .x=0xcb, .y=0x00, .sp=0xa5, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x5f}, {.addr=0x46e2, .value=0x7e}, {.addr=0x46e3, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x46e2, .value=0x7e, .type=IO_READ},
        {.addr=0x46e3, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_028F) {
    const struct CPU_State initial_cpu = {.pc=0xdff4, .a=0x69, .x=0x61, .y=0xa8, .sp=0xbe, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xf5}, {.addr=0xdff4, .value=0x7e}, {.addr=0xdff5, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xdff6, .a=0x69, .x=0x61, .y=0xa8, .sp=0xbe, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xf5}, {.addr=0xdff4, .value=0x7e}, {.addr=0xdff5, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xdff4, .value=0x7e, .type=IO_READ},
        {.addr=0xdff5, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0290) {
    const struct CPU_State initial_cpu = {.pc=0x5f7a, .a=0x07, .x=0x78, .y=0x74, .sp=0x5f, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x40}, {.addr=0x5f7a, .value=0x7e}, {.addr=0x5f7b, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x5f7c, .a=0x07, .x=0x78, .y=0x74, .sp=0x5f, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x40}, {.addr=0x5f7a, .value=0x7e}, {.addr=0x5f7b, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f7a, .value=0x7e, .type=IO_READ},
        {.addr=0x5f7b, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0291) {
    const struct CPU_State initial_cpu = {.pc=0x27c8, .a=0x13, .x=0xe5, .y=0x6f, .sp=0x2c, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xbb}, {.addr=0x27c8, .value=0x7e}, {.addr=0x27c9, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x27ca, .a=0x13, .x=0xe5, .y=0x6f, .sp=0x2c, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xbb}, {.addr=0x27c8, .value=0x7e}, {.addr=0x27c9, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x27c8, .value=0x7e, .type=IO_READ},
        {.addr=0x27c9, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0292) {
    const struct CPU_State initial_cpu = {.pc=0x5737, .a=0x5e, .x=0x29, .y=0x34, .sp=0x66, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x6d}, {.addr=0x5737, .value=0x7e}, {.addr=0x5738, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x5739, .a=0x5e, .x=0x29, .y=0x34, .sp=0x66, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x6d}, {.addr=0x5737, .value=0x7e}, {.addr=0x5738, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5737, .value=0x7e, .type=IO_READ},
        {.addr=0x5738, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf0db, .a=0x1a, .x=0x76, .y=0x05, .sp=0xab, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0xf0db, .value=0x7e}, {.addr=0xf0dc, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xf0dd, .a=0x1a, .x=0x76, .y=0x05, .sp=0xab, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0xf0db, .value=0x7e}, {.addr=0xf0dc, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0db, .value=0x7e, .type=IO_READ},
        {.addr=0xf0dc, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0294) {
    const struct CPU_State initial_cpu = {.pc=0x233e, .a=0x51, .x=0xf7, .y=0x58, .sp=0xa1, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x02}, {.addr=0x233e, .value=0x7e}, {.addr=0x233f, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x2340, .a=0x51, .x=0xf7, .y=0x58, .sp=0xa1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x02}, {.addr=0x233e, .value=0x7e}, {.addr=0x233f, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x233e, .value=0x7e, .type=IO_READ},
        {.addr=0x233f, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0295) {
    const struct CPU_State initial_cpu = {.pc=0x1130, .a=0xc3, .x=0x30, .y=0x52, .sp=0xc3, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x9e}, {.addr=0x1130, .value=0x7e}, {.addr=0x1131, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x1132, .a=0xc3, .x=0x30, .y=0x52, .sp=0xc3, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x9e}, {.addr=0x1130, .value=0x7e}, {.addr=0x1131, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x1130, .value=0x7e, .type=IO_READ},
        {.addr=0x1131, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0296) {
    const struct CPU_State initial_cpu = {.pc=0x5c94, .a=0x07, .x=0x7d, .y=0xb0, .sp=0x61, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xef}, {.addr=0x5c94, .value=0x7e}, {.addr=0x5c95, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x5c96, .a=0x07, .x=0x7d, .y=0xb0, .sp=0x61, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xef}, {.addr=0x5c94, .value=0x7e}, {.addr=0x5c95, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c94, .value=0x7e, .type=IO_READ},
        {.addr=0x5c95, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0297) {
    const struct CPU_State initial_cpu = {.pc=0xcdcc, .a=0x76, .x=0x8b, .y=0x72, .sp=0xad, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x30}, {.addr=0xcdcc, .value=0x7e}, {.addr=0xcdcd, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xcdce, .a=0x76, .x=0x8b, .y=0x72, .sp=0xad, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x30}, {.addr=0xcdcc, .value=0x7e}, {.addr=0xcdcd, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdcc, .value=0x7e, .type=IO_READ},
        {.addr=0xcdcd, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0298) {
    const struct CPU_State initial_cpu = {.pc=0x9c5a, .a=0x06, .x=0x64, .y=0xc3, .sp=0x67, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x62}, {.addr=0x9c5a, .value=0x7e}, {.addr=0x9c5b, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x9c5c, .a=0x06, .x=0x64, .y=0xc3, .sp=0x67, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x62}, {.addr=0x9c5a, .value=0x7e}, {.addr=0x9c5b, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c5a, .value=0x7e, .type=IO_READ},
        {.addr=0x9c5b, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0299) {
    const struct CPU_State initial_cpu = {.pc=0xfb46, .a=0xda, .x=0xbc, .y=0xe8, .sp=0x44, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x42}, {.addr=0xfb46, .value=0x7e}, {.addr=0xfb47, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xfb48, .a=0xda, .x=0xbc, .y=0xe8, .sp=0x44, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x42}, {.addr=0xfb46, .value=0x7e}, {.addr=0xfb47, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb46, .value=0x7e, .type=IO_READ},
        {.addr=0xfb47, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029A) {
    const struct CPU_State initial_cpu = {.pc=0x859a, .a=0x78, .x=0xd4, .y=0x01, .sp=0xd1, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xb1}, {.addr=0x859a, .value=0x7e}, {.addr=0x859b, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x859c, .a=0x78, .x=0xd4, .y=0x01, .sp=0xd1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xb1}, {.addr=0x859a, .value=0x7e}, {.addr=0x859b, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x859a, .value=0x7e, .type=IO_READ},
        {.addr=0x859b, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029B) {
    const struct CPU_State initial_cpu = {.pc=0x7ab8, .a=0x21, .x=0x51, .y=0x46, .sp=0x0e, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x9c}, {.addr=0x7ab8, .value=0x7e}, {.addr=0x7ab9, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x7aba, .a=0x21, .x=0x51, .y=0x46, .sp=0x0e, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x9c}, {.addr=0x7ab8, .value=0x7e}, {.addr=0x7ab9, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ab8, .value=0x7e, .type=IO_READ},
        {.addr=0x7ab9, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029C) {
    const struct CPU_State initial_cpu = {.pc=0xa741, .a=0xf8, .x=0x57, .y=0xe7, .sp=0x96, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x3d}, {.addr=0xa741, .value=0x7e}, {.addr=0xa742, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xa743, .a=0xf8, .x=0x57, .y=0xe7, .sp=0x96, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x3d}, {.addr=0xa741, .value=0x7e}, {.addr=0xa742, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa741, .value=0x7e, .type=IO_READ},
        {.addr=0xa742, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029D) {
    const struct CPU_State initial_cpu = {.pc=0x3b9a, .a=0x8f, .x=0x62, .y=0x50, .sp=0x72, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x90}, {.addr=0x3b9a, .value=0x7e}, {.addr=0x3b9b, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x3b9c, .a=0x8f, .x=0x62, .y=0x50, .sp=0x72, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x90}, {.addr=0x3b9a, .value=0x7e}, {.addr=0x3b9b, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b9a, .value=0x7e, .type=IO_READ},
        {.addr=0x3b9b, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029E) {
    const struct CPU_State initial_cpu = {.pc=0x10b4, .a=0xa2, .x=0x18, .y=0xcb, .sp=0x33, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x33}, {.addr=0x10b4, .value=0x7e}, {.addr=0x10b5, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x10b6, .a=0xa2, .x=0x18, .y=0xcb, .sp=0x33, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x33}, {.addr=0x10b4, .value=0x7e}, {.addr=0x10b5, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x10b4, .value=0x7e, .type=IO_READ},
        {.addr=0x10b5, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_029F) {
    const struct CPU_State initial_cpu = {.pc=0xa827, .a=0x03, .x=0x05, .y=0x01, .sp=0xcf, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xcc}, {.addr=0xa827, .value=0x7e}, {.addr=0xa828, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xa829, .a=0x03, .x=0x05, .y=0x01, .sp=0xcf, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xcc}, {.addr=0xa827, .value=0x7e}, {.addr=0xa828, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa827, .value=0x7e, .type=IO_READ},
        {.addr=0xa828, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x19f5, .a=0x7f, .x=0x3b, .y=0x29, .sp=0x49, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x2e}, {.addr=0x19f5, .value=0x7e}, {.addr=0x19f6, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x19f7, .a=0x7f, .x=0x3b, .y=0x29, .sp=0x49, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x2e}, {.addr=0x19f5, .value=0x7e}, {.addr=0x19f6, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x19f5, .value=0x7e, .type=IO_READ},
        {.addr=0x19f6, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xfd7b, .a=0x0c, .x=0xab, .y=0x53, .sp=0xcc, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xfe}, {.addr=0xfd7b, .value=0x7e}, {.addr=0xfd7c, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xfd7d, .a=0x0c, .x=0xab, .y=0x53, .sp=0xcc, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xfe}, {.addr=0xfd7b, .value=0x7e}, {.addr=0xfd7c, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd7b, .value=0x7e, .type=IO_READ},
        {.addr=0xfd7c, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x7a34, .a=0x11, .x=0x83, .y=0x5e, .sp=0x6c, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x22}, {.addr=0x7a34, .value=0x7e}, {.addr=0x7a35, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x7a36, .a=0x11, .x=0x83, .y=0x5e, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x22}, {.addr=0x7a34, .value=0x7e}, {.addr=0x7a35, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a34, .value=0x7e, .type=IO_READ},
        {.addr=0x7a35, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x947e, .a=0x84, .x=0x6f, .y=0x5b, .sp=0x82, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x5d}, {.addr=0x947e, .value=0x7e}, {.addr=0x947f, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x9480, .a=0x84, .x=0x6f, .y=0x5b, .sp=0x82, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x5d}, {.addr=0x947e, .value=0x7e}, {.addr=0x947f, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x947e, .value=0x7e, .type=IO_READ},
        {.addr=0x947f, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xd5ff, .a=0x11, .x=0x85, .y=0x45, .sp=0xaa, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x6c}, {.addr=0xd5ff, .value=0x7e}, {.addr=0xd600, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xd601, .a=0x11, .x=0x85, .y=0x45, .sp=0xaa, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x6c}, {.addr=0xd5ff, .value=0x7e}, {.addr=0xd600, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5ff, .value=0x7e, .type=IO_READ},
        {.addr=0xd600, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x79fe, .a=0x7b, .x=0x40, .y=0xe5, .sp=0xda, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xe8}, {.addr=0x79fe, .value=0x7e}, {.addr=0x79ff, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x7a00, .a=0x7b, .x=0x40, .y=0xe5, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xe8}, {.addr=0x79fe, .value=0x7e}, {.addr=0x79ff, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x79fe, .value=0x7e, .type=IO_READ},
        {.addr=0x79ff, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xcadf, .a=0xef, .x=0x22, .y=0x25, .sp=0x3c, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x3e}, {.addr=0xcadf, .value=0x7e}, {.addr=0xcae0, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xcae1, .a=0xef, .x=0x22, .y=0x25, .sp=0x3c, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x3e}, {.addr=0xcadf, .value=0x7e}, {.addr=0xcae0, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xcadf, .value=0x7e, .type=IO_READ},
        {.addr=0xcae0, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xbd08, .a=0x2d, .x=0x1f, .y=0xf7, .sp=0xab, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x0c}, {.addr=0xbd08, .value=0x7e}, {.addr=0xbd09, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xbd0a, .a=0x2d, .x=0x1f, .y=0xf7, .sp=0xab, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x0c}, {.addr=0xbd08, .value=0x7e}, {.addr=0xbd09, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd08, .value=0x7e, .type=IO_READ},
        {.addr=0xbd09, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc1d8, .a=0x7f, .x=0x96, .y=0x56, .sp=0x3a, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x0a}, {.addr=0xc1d8, .value=0x7e}, {.addr=0xc1d9, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xc1da, .a=0x7f, .x=0x96, .y=0x56, .sp=0x3a, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x0a}, {.addr=0xc1d8, .value=0x7e}, {.addr=0xc1d9, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d8, .value=0x7e, .type=IO_READ},
        {.addr=0xc1d9, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x437c, .a=0xcf, .x=0x40, .y=0xd2, .sp=0x4f, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x69}, {.addr=0x437c, .value=0x7e}, {.addr=0x437d, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x437e, .a=0xcf, .x=0x40, .y=0xd2, .sp=0x4f, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x69}, {.addr=0x437c, .value=0x7e}, {.addr=0x437d, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x437c, .value=0x7e, .type=IO_READ},
        {.addr=0x437d, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4abd, .a=0xd7, .x=0xd7, .y=0x92, .sp=0x3d, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x40}, {.addr=0x4abd, .value=0x7e}, {.addr=0x4abe, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x4abf, .a=0xd7, .x=0xd7, .y=0x92, .sp=0x3d, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x40}, {.addr=0x4abd, .value=0x7e}, {.addr=0x4abe, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4abd, .value=0x7e, .type=IO_READ},
        {.addr=0x4abe, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xa5b7, .a=0x3b, .x=0x0c, .y=0x2f, .sp=0x7d, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xe2}, {.addr=0xa5b7, .value=0x7e}, {.addr=0xa5b8, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xa5b9, .a=0x3b, .x=0x0c, .y=0x2f, .sp=0x7d, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xe2}, {.addr=0xa5b7, .value=0x7e}, {.addr=0xa5b8, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5b7, .value=0x7e, .type=IO_READ},
        {.addr=0xa5b8, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x6d48, .a=0x85, .x=0x14, .y=0x9e, .sp=0xad, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xdc}, {.addr=0x6d48, .value=0x7e}, {.addr=0x6d49, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x6d4a, .a=0x85, .x=0x14, .y=0x9e, .sp=0xad, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xdc}, {.addr=0x6d48, .value=0x7e}, {.addr=0x6d49, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d48, .value=0x7e, .type=IO_READ},
        {.addr=0x6d49, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xf669, .a=0x5b, .x=0x60, .y=0x9b, .sp=0x5a, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x6f}, {.addr=0xf669, .value=0x7e}, {.addr=0xf66a, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xf66b, .a=0x5b, .x=0x60, .y=0x9b, .sp=0x5a, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x6f}, {.addr=0xf669, .value=0x7e}, {.addr=0xf66a, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xf669, .value=0x7e, .type=IO_READ},
        {.addr=0xf66a, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xf442, .a=0x59, .x=0x22, .y=0xce, .sp=0x58, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x93}, {.addr=0xf442, .value=0x7e}, {.addr=0xf443, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xf444, .a=0x59, .x=0x22, .y=0xce, .sp=0x58, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x93}, {.addr=0xf442, .value=0x7e}, {.addr=0xf443, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf442, .value=0x7e, .type=IO_READ},
        {.addr=0xf443, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x43ee, .a=0xa6, .x=0x31, .y=0xa9, .sp=0x5a, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x27}, {.addr=0x43ee, .value=0x7e}, {.addr=0x43ef, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x43f0, .a=0xa6, .x=0x31, .y=0xa9, .sp=0x5a, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x27}, {.addr=0x43ee, .value=0x7e}, {.addr=0x43ef, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x43ee, .value=0x7e, .type=IO_READ},
        {.addr=0x43ef, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x98c8, .a=0x60, .x=0x0e, .y=0x89, .sp=0x2d, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xe2}, {.addr=0x98c8, .value=0x7e}, {.addr=0x98c9, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x98ca, .a=0x60, .x=0x0e, .y=0x89, .sp=0x2d, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xe2}, {.addr=0x98c8, .value=0x7e}, {.addr=0x98c9, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x98c8, .value=0x7e, .type=IO_READ},
        {.addr=0x98c9, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x1fca, .a=0xa0, .x=0x33, .y=0xc0, .sp=0xb2, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x8a}, {.addr=0x1fca, .value=0x7e}, {.addr=0x1fcb, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x1fcc, .a=0xa0, .x=0x33, .y=0xc0, .sp=0xb2, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x8a}, {.addr=0x1fca, .value=0x7e}, {.addr=0x1fcb, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fca, .value=0x7e, .type=IO_READ},
        {.addr=0x1fcb, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xb84d, .a=0xe7, .x=0xa8, .y=0xb3, .sp=0x3b, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x1b}, {.addr=0xb84d, .value=0x7e}, {.addr=0xb84e, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xb84f, .a=0xe7, .x=0xa8, .y=0xb3, .sp=0x3b, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x1b}, {.addr=0xb84d, .value=0x7e}, {.addr=0xb84e, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84d, .value=0x7e, .type=IO_READ},
        {.addr=0xb84e, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdb94, .a=0x6b, .x=0x4f, .y=0xe9, .sp=0x40, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xa1}, {.addr=0xdb94, .value=0x7e}, {.addr=0xdb95, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xdb96, .a=0x6b, .x=0x4f, .y=0xe9, .sp=0x40, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xa1}, {.addr=0xdb94, .value=0x7e}, {.addr=0xdb95, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb94, .value=0x7e, .type=IO_READ},
        {.addr=0xdb95, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x8397, .a=0xee, .x=0xdf, .y=0x0e, .sp=0x09, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xe6}, {.addr=0x8397, .value=0x7e}, {.addr=0x8398, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x8399, .a=0xee, .x=0xdf, .y=0x0e, .sp=0x09, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xe6}, {.addr=0x8397, .value=0x7e}, {.addr=0x8398, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8397, .value=0x7e, .type=IO_READ},
        {.addr=0x8398, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x6f01, .a=0x63, .x=0xa5, .y=0x78, .sp=0x9d, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x8a}, {.addr=0x6f01, .value=0x7e}, {.addr=0x6f02, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x6f03, .a=0x63, .x=0xa5, .y=0x78, .sp=0x9d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x8a}, {.addr=0x6f01, .value=0x7e}, {.addr=0x6f02, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f01, .value=0x7e, .type=IO_READ},
        {.addr=0x6f02, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x1132, .a=0xf9, .x=0x21, .y=0xb4, .sp=0x3d, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x4a}, {.addr=0x1132, .value=0x7e}, {.addr=0x1133, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x1134, .a=0xf9, .x=0x21, .y=0xb4, .sp=0x3d, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x4a}, {.addr=0x1132, .value=0x7e}, {.addr=0x1133, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1132, .value=0x7e, .type=IO_READ},
        {.addr=0x1133, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x0419, .a=0x0b, .x=0x4e, .y=0x2c, .sp=0x15, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x01}, {.addr=0x0419, .value=0x7e}, {.addr=0x041a, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x041b, .a=0x0b, .x=0x4e, .y=0x2c, .sp=0x15, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x01}, {.addr=0x0419, .value=0x7e}, {.addr=0x041a, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0419, .value=0x7e, .type=IO_READ},
        {.addr=0x041a, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xc4fe, .a=0xc5, .x=0x36, .y=0xc7, .sp=0xf6, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x1c}, {.addr=0xc4fe, .value=0x7e}, {.addr=0xc4ff, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xc500, .a=0xc5, .x=0x36, .y=0xc7, .sp=0xf6, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x1c}, {.addr=0xc4fe, .value=0x7e}, {.addr=0xc4ff, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4fe, .value=0x7e, .type=IO_READ},
        {.addr=0xc4ff, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xe881, .a=0x88, .x=0xdc, .y=0x5e, .sp=0xdd, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x0d}, {.addr=0xe881, .value=0x7e}, {.addr=0xe882, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe883, .a=0x88, .x=0xdc, .y=0x5e, .sp=0xdd, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x0d}, {.addr=0xe881, .value=0x7e}, {.addr=0xe882, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe881, .value=0x7e, .type=IO_READ},
        {.addr=0xe882, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5867, .a=0x40, .x=0x02, .y=0x97, .sp=0xad, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x61}, {.addr=0x5867, .value=0x7e}, {.addr=0x5868, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x5869, .a=0x40, .x=0x02, .y=0x97, .sp=0xad, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x61}, {.addr=0x5867, .value=0x7e}, {.addr=0x5868, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5867, .value=0x7e, .type=IO_READ},
        {.addr=0x5868, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x691f, .a=0xfe, .x=0x33, .y=0xda, .sp=0x83, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x79}, {.addr=0x691f, .value=0x7e}, {.addr=0x6920, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x6921, .a=0xfe, .x=0x33, .y=0xda, .sp=0x83, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x79}, {.addr=0x691f, .value=0x7e}, {.addr=0x6920, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x691f, .value=0x7e, .type=IO_READ},
        {.addr=0x6920, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa944, .a=0x60, .x=0xba, .y=0xab, .sp=0x39, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x1b}, {.addr=0xa944, .value=0x7e}, {.addr=0xa945, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xa946, .a=0x60, .x=0xba, .y=0xab, .sp=0x39, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x1b}, {.addr=0xa944, .value=0x7e}, {.addr=0xa945, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xa944, .value=0x7e, .type=IO_READ},
        {.addr=0xa945, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xdb6c, .a=0x2e, .x=0x13, .y=0x74, .sp=0xd5, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x14}, {.addr=0xdb6c, .value=0x7e}, {.addr=0xdb6d, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xdb6e, .a=0x2e, .x=0x13, .y=0x74, .sp=0xd5, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x14}, {.addr=0xdb6c, .value=0x7e}, {.addr=0xdb6d, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb6c, .value=0x7e, .type=IO_READ},
        {.addr=0xdb6d, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x72c0, .a=0xd5, .x=0x50, .y=0x0a, .sp=0x79, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x8a}, {.addr=0x72c0, .value=0x7e}, {.addr=0x72c1, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x72c2, .a=0xd5, .x=0x50, .y=0x0a, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x8a}, {.addr=0x72c0, .value=0x7e}, {.addr=0x72c1, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x72c0, .value=0x7e, .type=IO_READ},
        {.addr=0x72c1, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x66e7, .a=0x0f, .x=0xe1, .y=0x70, .sp=0x24, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x64}, {.addr=0x66e7, .value=0x7e}, {.addr=0x66e8, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x66e9, .a=0x0f, .x=0xe1, .y=0x70, .sp=0x24, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x64}, {.addr=0x66e7, .value=0x7e}, {.addr=0x66e8, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x66e7, .value=0x7e, .type=IO_READ},
        {.addr=0x66e8, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xdbe2, .a=0x9e, .x=0x24, .y=0xd0, .sp=0x62, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x82}, {.addr=0xdbe2, .value=0x7e}, {.addr=0xdbe3, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xdbe4, .a=0x9e, .x=0x24, .y=0xd0, .sp=0x62, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x82}, {.addr=0xdbe2, .value=0x7e}, {.addr=0xdbe3, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe2, .value=0x7e, .type=IO_READ},
        {.addr=0xdbe3, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x80c4, .a=0xd5, .x=0x3e, .y=0x50, .sp=0x99, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x0a}, {.addr=0x80c4, .value=0x7e}, {.addr=0x80c5, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x80c6, .a=0xd5, .x=0x3e, .y=0x50, .sp=0x99, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x0a}, {.addr=0x80c4, .value=0x7e}, {.addr=0x80c5, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x80c4, .value=0x7e, .type=IO_READ},
        {.addr=0x80c5, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xaaab, .a=0xd0, .x=0x7d, .y=0x7b, .sp=0xc2, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x75}, {.addr=0xaaab, .value=0x7e}, {.addr=0xaaac, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xaaad, .a=0xd0, .x=0x7d, .y=0x7b, .sp=0xc2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x75}, {.addr=0xaaab, .value=0x7e}, {.addr=0xaaac, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xaaab, .value=0x7e, .type=IO_READ},
        {.addr=0xaaac, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x45c4, .a=0x0f, .x=0x8f, .y=0x2b, .sp=0xc0, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x86}, {.addr=0x45c4, .value=0x7e}, {.addr=0x45c5, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x45c6, .a=0x0f, .x=0x8f, .y=0x2b, .sp=0xc0, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x86}, {.addr=0x45c4, .value=0x7e}, {.addr=0x45c5, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x45c4, .value=0x7e, .type=IO_READ},
        {.addr=0x45c5, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6554, .a=0x27, .x=0xf5, .y=0x02, .sp=0xa9, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x7d}, {.addr=0x6554, .value=0x7e}, {.addr=0x6555, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x6556, .a=0x27, .x=0xf5, .y=0x02, .sp=0xa9, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x7d}, {.addr=0x6554, .value=0x7e}, {.addr=0x6555, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x6554, .value=0x7e, .type=IO_READ},
        {.addr=0x6555, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x3ace, .a=0xaf, .x=0x29, .y=0xe2, .sp=0xff, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x5a}, {.addr=0x3ace, .value=0x7e}, {.addr=0x3acf, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x3ad0, .a=0xaf, .x=0x29, .y=0xe2, .sp=0xff, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x5a}, {.addr=0x3ace, .value=0x7e}, {.addr=0x3acf, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ace, .value=0x7e, .type=IO_READ},
        {.addr=0x3acf, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xbda8, .a=0xda, .x=0x54, .y=0x38, .sp=0x1e, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xc8}, {.addr=0xbda8, .value=0x7e}, {.addr=0xbda9, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xbdaa, .a=0xda, .x=0x54, .y=0x38, .sp=0x1e, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xc8}, {.addr=0xbda8, .value=0x7e}, {.addr=0xbda9, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbda8, .value=0x7e, .type=IO_READ},
        {.addr=0xbda9, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe9cb, .a=0xa0, .x=0xfe, .y=0xde, .sp=0xb9, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x14}, {.addr=0xe9cb, .value=0x7e}, {.addr=0xe9cc, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xe9cd, .a=0xa0, .x=0xfe, .y=0xde, .sp=0xb9, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x14}, {.addr=0xe9cb, .value=0x7e}, {.addr=0xe9cc, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9cb, .value=0x7e, .type=IO_READ},
        {.addr=0xe9cc, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xcd54, .a=0x8a, .x=0x9f, .y=0x3c, .sp=0x3d, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x49}, {.addr=0xcd54, .value=0x7e}, {.addr=0xcd55, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xcd56, .a=0x8a, .x=0x9f, .y=0x3c, .sp=0x3d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x49}, {.addr=0xcd54, .value=0x7e}, {.addr=0xcd55, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd54, .value=0x7e, .type=IO_READ},
        {.addr=0xcd55, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x0e66, .a=0xfd, .x=0x9d, .y=0x75, .sp=0x03, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x92}, {.addr=0x0e66, .value=0x7e}, {.addr=0x0e67, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x0e68, .a=0xfd, .x=0x9d, .y=0x75, .sp=0x03, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x92}, {.addr=0x0e66, .value=0x7e}, {.addr=0x0e67, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e66, .value=0x7e, .type=IO_READ},
        {.addr=0x0e67, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xfee6, .a=0xd5, .x=0xa1, .y=0x92, .sp=0x88, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x80}, {.addr=0xfee6, .value=0x7e}, {.addr=0xfee7, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xfee8, .a=0xd5, .x=0xa1, .y=0x92, .sp=0x88, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x80}, {.addr=0xfee6, .value=0x7e}, {.addr=0xfee7, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfee6, .value=0x7e, .type=IO_READ},
        {.addr=0xfee7, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x174c, .a=0x72, .x=0x30, .y=0x0f, .sp=0xed, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x06}, {.addr=0x174c, .value=0x7e}, {.addr=0x174d, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x174e, .a=0x72, .x=0x30, .y=0x0f, .sp=0xed, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x06}, {.addr=0x174c, .value=0x7e}, {.addr=0x174d, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x174c, .value=0x7e, .type=IO_READ},
        {.addr=0x174d, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x6b71, .a=0xa5, .x=0xaf, .y=0x7b, .sp=0xa2, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x56}, {.addr=0x6b71, .value=0x7e}, {.addr=0x6b72, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x6b73, .a=0xa5, .x=0xaf, .y=0x7b, .sp=0xa2, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x56}, {.addr=0x6b71, .value=0x7e}, {.addr=0x6b72, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b71, .value=0x7e, .type=IO_READ},
        {.addr=0x6b72, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x8c99, .a=0xc5, .x=0x97, .y=0xf2, .sp=0x81, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x78}, {.addr=0x8c99, .value=0x7e}, {.addr=0x8c9a, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x8c9b, .a=0xc5, .x=0x97, .y=0xf2, .sp=0x81, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x78}, {.addr=0x8c99, .value=0x7e}, {.addr=0x8c9a, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c99, .value=0x7e, .type=IO_READ},
        {.addr=0x8c9a, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x94fe, .a=0x68, .x=0xac, .y=0x31, .sp=0x4f, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x7e}, {.addr=0x94fe, .value=0x7e}, {.addr=0x94ff, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x9500, .a=0x68, .x=0xac, .y=0x31, .sp=0x4f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x7e}, {.addr=0x94fe, .value=0x7e}, {.addr=0x94ff, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x94fe, .value=0x7e, .type=IO_READ},
        {.addr=0x94ff, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x9e23, .a=0x96, .x=0xad, .y=0x07, .sp=0x12, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x74}, {.addr=0x9e23, .value=0x7e}, {.addr=0x9e24, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x9e25, .a=0x96, .x=0xad, .y=0x07, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x74}, {.addr=0x9e23, .value=0x7e}, {.addr=0x9e24, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e23, .value=0x7e, .type=IO_READ},
        {.addr=0x9e24, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xd1dd, .a=0xa8, .x=0x4e, .y=0x0d, .sp=0x62, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x64}, {.addr=0xd1dd, .value=0x7e}, {.addr=0xd1de, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xd1df, .a=0xa8, .x=0x4e, .y=0x0d, .sp=0x62, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x64}, {.addr=0xd1dd, .value=0x7e}, {.addr=0xd1de, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1dd, .value=0x7e, .type=IO_READ},
        {.addr=0xd1de, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x30e6, .a=0x71, .x=0x5d, .y=0x3b, .sp=0xb6, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x2c}, {.addr=0x30e6, .value=0x7e}, {.addr=0x30e7, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x30e8, .a=0x71, .x=0x5d, .y=0x3b, .sp=0xb6, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x2c}, {.addr=0x30e6, .value=0x7e}, {.addr=0x30e7, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x30e6, .value=0x7e, .type=IO_READ},
        {.addr=0x30e7, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x3e5b, .a=0x02, .x=0x1a, .y=0x7a, .sp=0xfd, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xa1}, {.addr=0x3e5b, .value=0x7e}, {.addr=0x3e5c, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x3e5d, .a=0x02, .x=0x1a, .y=0x7a, .sp=0xfd, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xa1}, {.addr=0x3e5b, .value=0x7e}, {.addr=0x3e5c, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e5b, .value=0x7e, .type=IO_READ},
        {.addr=0x3e5c, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x1ff6, .a=0x02, .x=0xc8, .y=0x06, .sp=0x66, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x83}, {.addr=0x1ff6, .value=0x7e}, {.addr=0x1ff7, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x1ff8, .a=0x02, .x=0xc8, .y=0x06, .sp=0x66, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x83}, {.addr=0x1ff6, .value=0x7e}, {.addr=0x1ff7, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ff6, .value=0x7e, .type=IO_READ},
        {.addr=0x1ff7, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xa917, .a=0x72, .x=0xf3, .y=0x6a, .sp=0x54, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x80}, {.addr=0xa917, .value=0x7e}, {.addr=0xa918, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xa919, .a=0x72, .x=0xf3, .y=0x6a, .sp=0x54, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x80}, {.addr=0xa917, .value=0x7e}, {.addr=0xa918, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa917, .value=0x7e, .type=IO_READ},
        {.addr=0xa918, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xe905, .a=0x11, .x=0xbf, .y=0x7e, .sp=0x52, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xae}, {.addr=0xe905, .value=0x7e}, {.addr=0xe906, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xe907, .a=0x11, .x=0xbf, .y=0x7e, .sp=0x52, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xae}, {.addr=0xe905, .value=0x7e}, {.addr=0xe906, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xe905, .value=0x7e, .type=IO_READ},
        {.addr=0xe906, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x5bdf, .a=0x25, .x=0xaa, .y=0x39, .sp=0xfa, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x72}, {.addr=0x5bdf, .value=0x7e}, {.addr=0x5be0, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x5be1, .a=0x25, .x=0xaa, .y=0x39, .sp=0xfa, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x72}, {.addr=0x5bdf, .value=0x7e}, {.addr=0x5be0, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bdf, .value=0x7e, .type=IO_READ},
        {.addr=0x5be0, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x703c, .a=0xbd, .x=0xa5, .y=0x54, .sp=0x9d, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x7a}, {.addr=0x703c, .value=0x7e}, {.addr=0x703d, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x703e, .a=0xbd, .x=0xa5, .y=0x54, .sp=0x9d, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x7a}, {.addr=0x703c, .value=0x7e}, {.addr=0x703d, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x703c, .value=0x7e, .type=IO_READ},
        {.addr=0x703d, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4080, .a=0x3b, .x=0x80, .y=0x3b, .sp=0xf1, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x7c}, {.addr=0x4080, .value=0x7e}, {.addr=0x4081, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x4082, .a=0x3b, .x=0x80, .y=0x3b, .sp=0xf1, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x7c}, {.addr=0x4080, .value=0x7e}, {.addr=0x4081, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x4080, .value=0x7e, .type=IO_READ},
        {.addr=0x4081, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xc856, .a=0xb1, .x=0xaa, .y=0x36, .sp=0xf8, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0xa4}, {.addr=0xc856, .value=0x7e}, {.addr=0xc857, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xc858, .a=0xb1, .x=0xaa, .y=0x36, .sp=0xf8, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0xa4}, {.addr=0xc856, .value=0x7e}, {.addr=0xc857, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc856, .value=0x7e, .type=IO_READ},
        {.addr=0xc857, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x544c, .a=0xdf, .x=0x99, .y=0xdd, .sp=0x7b, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x98}, {.addr=0x544c, .value=0x7e}, {.addr=0x544d, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x544e, .a=0xdf, .x=0x99, .y=0xdd, .sp=0x7b, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x98}, {.addr=0x544c, .value=0x7e}, {.addr=0x544d, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x544c, .value=0x7e, .type=IO_READ},
        {.addr=0x544d, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x8c02, .a=0xb8, .x=0x25, .y=0xe5, .sp=0x03, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x6d}, {.addr=0x8c02, .value=0x7e}, {.addr=0x8c03, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x8c04, .a=0xb8, .x=0x25, .y=0xe5, .sp=0x03, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x6d}, {.addr=0x8c02, .value=0x7e}, {.addr=0x8c03, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c02, .value=0x7e, .type=IO_READ},
        {.addr=0x8c03, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x03b9, .a=0xd1, .x=0xc6, .y=0x61, .sp=0xfe, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xde}, {.addr=0x03b9, .value=0x7e}, {.addr=0x03ba, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x03bb, .a=0xd1, .x=0xc6, .y=0x61, .sp=0xfe, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xde}, {.addr=0x03b9, .value=0x7e}, {.addr=0x03ba, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x03b9, .value=0x7e, .type=IO_READ},
        {.addr=0x03ba, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6d2d, .a=0xb9, .x=0x80, .y=0x77, .sp=0xd5, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x27}, {.addr=0x6d2d, .value=0x7e}, {.addr=0x6d2e, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x6d2f, .a=0xb9, .x=0x80, .y=0x77, .sp=0xd5, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x27}, {.addr=0x6d2d, .value=0x7e}, {.addr=0x6d2e, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d2d, .value=0x7e, .type=IO_READ},
        {.addr=0x6d2e, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x26ab, .a=0x2c, .x=0x18, .y=0x01, .sp=0x0d, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x86}, {.addr=0x26ab, .value=0x7e}, {.addr=0x26ac, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x26ad, .a=0x2c, .x=0x18, .y=0x01, .sp=0x0d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x86}, {.addr=0x26ab, .value=0x7e}, {.addr=0x26ac, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ab, .value=0x7e, .type=IO_READ},
        {.addr=0x26ac, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xeb06, .a=0xc2, .x=0x9d, .y=0xdd, .sp=0x95, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x60}, {.addr=0xeb06, .value=0x7e}, {.addr=0xeb07, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xeb08, .a=0xc2, .x=0x9d, .y=0xdd, .sp=0x95, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x60}, {.addr=0xeb06, .value=0x7e}, {.addr=0xeb07, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb06, .value=0x7e, .type=IO_READ},
        {.addr=0xeb07, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x5984, .a=0xbc, .x=0x8d, .y=0x15, .sp=0x64, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xcc}, {.addr=0x5984, .value=0x7e}, {.addr=0x5985, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x5986, .a=0xbc, .x=0x8d, .y=0x15, .sp=0x64, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xcc}, {.addr=0x5984, .value=0x7e}, {.addr=0x5985, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x5984, .value=0x7e, .type=IO_READ},
        {.addr=0x5985, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xb5d6, .a=0xee, .x=0xf5, .y=0x19, .sp=0x8a, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xfe}, {.addr=0xb5d6, .value=0x7e}, {.addr=0xb5d7, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xb5d8, .a=0xee, .x=0xf5, .y=0x19, .sp=0x8a, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xfe}, {.addr=0xb5d6, .value=0x7e}, {.addr=0xb5d7, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d6, .value=0x7e, .type=IO_READ},
        {.addr=0xb5d7, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x7604, .a=0xe4, .x=0x09, .y=0x93, .sp=0x3d, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x1f}, {.addr=0x7604, .value=0x7e}, {.addr=0x7605, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x7606, .a=0xe4, .x=0x09, .y=0x93, .sp=0x3d, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x1f}, {.addr=0x7604, .value=0x7e}, {.addr=0x7605, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7604, .value=0x7e, .type=IO_READ},
        {.addr=0x7605, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x5f60, .a=0x45, .x=0xc8, .y=0xeb, .sp=0xc5, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xb8}, {.addr=0x5f60, .value=0x7e}, {.addr=0x5f61, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x5f62, .a=0x45, .x=0xc8, .y=0xeb, .sp=0xc5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xb8}, {.addr=0x5f60, .value=0x7e}, {.addr=0x5f61, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f60, .value=0x7e, .type=IO_READ},
        {.addr=0x5f61, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xc5a7, .a=0x70, .x=0x82, .y=0x3d, .sp=0x4f, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x9e}, {.addr=0xc5a7, .value=0x7e}, {.addr=0xc5a8, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xc5a9, .a=0x70, .x=0x82, .y=0x3d, .sp=0x4f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x9e}, {.addr=0xc5a7, .value=0x7e}, {.addr=0xc5a8, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5a7, .value=0x7e, .type=IO_READ},
        {.addr=0xc5a8, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x8d49, .a=0xbf, .x=0x4a, .y=0x20, .sp=0xc6, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xa5}, {.addr=0x8d49, .value=0x7e}, {.addr=0x8d4a, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x8d4b, .a=0xbf, .x=0x4a, .y=0x20, .sp=0xc6, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xa5}, {.addr=0x8d49, .value=0x7e}, {.addr=0x8d4a, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d49, .value=0x7e, .type=IO_READ},
        {.addr=0x8d4a, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xd7ea, .a=0xe1, .x=0xf7, .y=0x26, .sp=0x6f, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xb0}, {.addr=0xd7ea, .value=0x7e}, {.addr=0xd7eb, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xd7ec, .a=0xe1, .x=0xf7, .y=0x26, .sp=0x6f, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xb0}, {.addr=0xd7ea, .value=0x7e}, {.addr=0xd7eb, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7ea, .value=0x7e, .type=IO_READ},
        {.addr=0xd7eb, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2f87, .a=0xd5, .x=0xfa, .y=0x93, .sp=0xe0, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xff}, {.addr=0x2f87, .value=0x7e}, {.addr=0x2f88, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x2f89, .a=0xd5, .x=0xfa, .y=0x93, .sp=0xe0, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xff}, {.addr=0x2f87, .value=0x7e}, {.addr=0x2f88, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f87, .value=0x7e, .type=IO_READ},
        {.addr=0x2f88, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xce3e, .a=0x06, .x=0xfb, .y=0x6d, .sp=0x7a, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x2e}, {.addr=0xce3e, .value=0x7e}, {.addr=0xce3f, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xce40, .a=0x06, .x=0xfb, .y=0x6d, .sp=0x7a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x2e}, {.addr=0xce3e, .value=0x7e}, {.addr=0xce3f, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xce3e, .value=0x7e, .type=IO_READ},
        {.addr=0xce3f, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x05c5, .a=0x6e, .x=0xd1, .y=0x62, .sp=0xd5, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x82}, {.addr=0x05c5, .value=0x7e}, {.addr=0x05c6, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x05c7, .a=0x6e, .x=0xd1, .y=0x62, .sp=0xd5, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x82}, {.addr=0x05c5, .value=0x7e}, {.addr=0x05c6, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x05c5, .value=0x7e, .type=IO_READ},
        {.addr=0x05c6, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x6c0e, .a=0xa6, .x=0x03, .y=0x11, .sp=0xf3, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x24}, {.addr=0x6c0e, .value=0x7e}, {.addr=0x6c0f, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x6c10, .a=0xa6, .x=0x03, .y=0x11, .sp=0xf3, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x24}, {.addr=0x6c0e, .value=0x7e}, {.addr=0x6c0f, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c0e, .value=0x7e, .type=IO_READ},
        {.addr=0x6c0f, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xc329, .a=0xa4, .x=0x93, .y=0x0a, .sp=0xf7, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x24}, {.addr=0xc329, .value=0x7e}, {.addr=0xc32a, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xc32b, .a=0xa4, .x=0x93, .y=0x0a, .sp=0xf7, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x24}, {.addr=0xc329, .value=0x7e}, {.addr=0xc32a, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xc329, .value=0x7e, .type=IO_READ},
        {.addr=0xc32a, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xcd7d, .a=0xf9, .x=0x03, .y=0x8f, .sp=0xe0, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x7d}, {.addr=0xcd7d, .value=0x7e}, {.addr=0xcd7e, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xcd7f, .a=0xf9, .x=0x03, .y=0x8f, .sp=0xe0, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x7d}, {.addr=0xcd7d, .value=0x7e}, {.addr=0xcd7e, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd7d, .value=0x7e, .type=IO_READ},
        {.addr=0xcd7e, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xbc76, .a=0x5d, .x=0x20, .y=0x0d, .sp=0x9f, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x91}, {.addr=0xbc76, .value=0x7e}, {.addr=0xbc77, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xbc78, .a=0x5d, .x=0x20, .y=0x0d, .sp=0x9f, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x91}, {.addr=0xbc76, .value=0x7e}, {.addr=0xbc77, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc76, .value=0x7e, .type=IO_READ},
        {.addr=0xbc77, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9cd1, .a=0xa6, .x=0xe5, .y=0x68, .sp=0x59, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x16}, {.addr=0x9cd1, .value=0x7e}, {.addr=0x9cd2, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x9cd3, .a=0xa6, .x=0xe5, .y=0x68, .sp=0x59, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x16}, {.addr=0x9cd1, .value=0x7e}, {.addr=0x9cd2, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cd1, .value=0x7e, .type=IO_READ},
        {.addr=0x9cd2, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xf6bb, .a=0x89, .x=0xfd, .y=0xdc, .sp=0x57, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x3d}, {.addr=0xf6bb, .value=0x7e}, {.addr=0xf6bc, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xf6bd, .a=0x89, .x=0xfd, .y=0xdc, .sp=0x57, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x3d}, {.addr=0xf6bb, .value=0x7e}, {.addr=0xf6bc, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6bb, .value=0x7e, .type=IO_READ},
        {.addr=0xf6bc, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x54fe, .a=0x28, .x=0x8c, .y=0xac, .sp=0xcd, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x29}, {.addr=0x54fe, .value=0x7e}, {.addr=0x54ff, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x5500, .a=0x28, .x=0x8c, .y=0xac, .sp=0xcd, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x29}, {.addr=0x54fe, .value=0x7e}, {.addr=0x54ff, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x54fe, .value=0x7e, .type=IO_READ},
        {.addr=0x54ff, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xa631, .a=0x88, .x=0x33, .y=0x36, .sp=0x2f, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x99}, {.addr=0xa631, .value=0x7e}, {.addr=0xa632, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xa633, .a=0x88, .x=0x33, .y=0x36, .sp=0x2f, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x99}, {.addr=0xa631, .value=0x7e}, {.addr=0xa632, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xa631, .value=0x7e, .type=IO_READ},
        {.addr=0xa632, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x5819, .a=0xc7, .x=0xf2, .y=0x0a, .sp=0x3d, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x92}, {.addr=0x5819, .value=0x7e}, {.addr=0x581a, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x581b, .a=0xc7, .x=0xf2, .y=0x0a, .sp=0x3d, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x92}, {.addr=0x5819, .value=0x7e}, {.addr=0x581a, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5819, .value=0x7e, .type=IO_READ},
        {.addr=0x581a, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xb41f, .a=0xf1, .x=0xcd, .y=0x59, .sp=0x95, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xaf}, {.addr=0xb41f, .value=0x7e}, {.addr=0xb420, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xb421, .a=0xf1, .x=0xcd, .y=0x59, .sp=0x95, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xaf}, {.addr=0xb41f, .value=0x7e}, {.addr=0xb420, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb41f, .value=0x7e, .type=IO_READ},
        {.addr=0xb420, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xbd8b, .a=0x7b, .x=0x87, .y=0x63, .sp=0x21, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x1e}, {.addr=0xbd8b, .value=0x7e}, {.addr=0xbd8c, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xbd8d, .a=0x7b, .x=0x87, .y=0x63, .sp=0x21, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x1e}, {.addr=0xbd8b, .value=0x7e}, {.addr=0xbd8c, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8b, .value=0x7e, .type=IO_READ},
        {.addr=0xbd8c, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb2c4, .a=0xd1, .x=0x31, .y=0x80, .sp=0x1f, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xbc}, {.addr=0xb2c4, .value=0x7e}, {.addr=0xb2c5, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb2c6, .a=0xd1, .x=0x31, .y=0x80, .sp=0x1f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xbc}, {.addr=0xb2c4, .value=0x7e}, {.addr=0xb2c5, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2c4, .value=0x7e, .type=IO_READ},
        {.addr=0xb2c5, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x5d44, .a=0x4a, .x=0x13, .y=0x36, .sp=0x00, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xa2}, {.addr=0x5d44, .value=0x7e}, {.addr=0x5d45, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x5d46, .a=0x4a, .x=0x13, .y=0x36, .sp=0x00, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xa2}, {.addr=0x5d44, .value=0x7e}, {.addr=0x5d45, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d44, .value=0x7e, .type=IO_READ},
        {.addr=0x5d45, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb7f7, .a=0xd2, .x=0x49, .y=0x61, .sp=0x24, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xdd}, {.addr=0xb7f7, .value=0x7e}, {.addr=0xb7f8, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xb7f9, .a=0xd2, .x=0x49, .y=0x61, .sp=0x24, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xdd}, {.addr=0xb7f7, .value=0x7e}, {.addr=0xb7f8, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7f7, .value=0x7e, .type=IO_READ},
        {.addr=0xb7f8, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x35a3, .a=0xa3, .x=0x41, .y=0x45, .sp=0x2b, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x93}, {.addr=0x35a3, .value=0x7e}, {.addr=0x35a4, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x35a5, .a=0xa3, .x=0x41, .y=0x45, .sp=0x2b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x93}, {.addr=0x35a3, .value=0x7e}, {.addr=0x35a4, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x35a3, .value=0x7e, .type=IO_READ},
        {.addr=0x35a4, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0300) {
    const struct CPU_State initial_cpu = {.pc=0x3b37, .a=0xe1, .x=0xb9, .y=0xdc, .sp=0x7a, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x06}, {.addr=0x3b37, .value=0x7e}, {.addr=0x3b38, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x3b39, .a=0xe1, .x=0xb9, .y=0xdc, .sp=0x7a, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x06}, {.addr=0x3b37, .value=0x7e}, {.addr=0x3b38, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b37, .value=0x7e, .type=IO_READ},
        {.addr=0x3b38, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0301) {
    const struct CPU_State initial_cpu = {.pc=0x7609, .a=0x04, .x=0x2b, .y=0x94, .sp=0xb6, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x81}, {.addr=0x7609, .value=0x7e}, {.addr=0x760a, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x760b, .a=0x04, .x=0x2b, .y=0x94, .sp=0xb6, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x81}, {.addr=0x7609, .value=0x7e}, {.addr=0x760a, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x7609, .value=0x7e, .type=IO_READ},
        {.addr=0x760a, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6008, .a=0x00, .x=0xe1, .y=0x57, .sp=0x07, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xb5}, {.addr=0x6008, .value=0x7e}, {.addr=0x6009, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x600a, .a=0x00, .x=0xe1, .y=0x57, .sp=0x07, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xb5}, {.addr=0x6008, .value=0x7e}, {.addr=0x6009, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6008, .value=0x7e, .type=IO_READ},
        {.addr=0x6009, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0304) {
    const struct CPU_State initial_cpu = {.pc=0x98f0, .a=0xe1, .x=0xfa, .y=0x6a, .sp=0xca, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xc3}, {.addr=0x98f0, .value=0x7e}, {.addr=0x98f1, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x98f2, .a=0xe1, .x=0xfa, .y=0x6a, .sp=0xca, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xc3}, {.addr=0x98f0, .value=0x7e}, {.addr=0x98f1, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x98f0, .value=0x7e, .type=IO_READ},
        {.addr=0x98f1, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0305) {
    const struct CPU_State initial_cpu = {.pc=0x9f71, .a=0x4f, .x=0xf7, .y=0x13, .sp=0xc5, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xa3}, {.addr=0x9f71, .value=0x7e}, {.addr=0x9f72, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x9f73, .a=0x4f, .x=0xf7, .y=0x13, .sp=0xc5, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xa3}, {.addr=0x9f71, .value=0x7e}, {.addr=0x9f72, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f71, .value=0x7e, .type=IO_READ},
        {.addr=0x9f72, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0306) {
    const struct CPU_State initial_cpu = {.pc=0xb600, .a=0x97, .x=0x80, .y=0xbf, .sp=0x16, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x5d}, {.addr=0xb600, .value=0x7e}, {.addr=0xb601, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xb602, .a=0x97, .x=0x80, .y=0xbf, .sp=0x16, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x5d}, {.addr=0xb600, .value=0x7e}, {.addr=0xb601, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb600, .value=0x7e, .type=IO_READ},
        {.addr=0xb601, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0307) {
    const struct CPU_State initial_cpu = {.pc=0x7133, .a=0x5f, .x=0xc3, .y=0xe1, .sp=0x8f, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xaf}, {.addr=0x7133, .value=0x7e}, {.addr=0x7134, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x7135, .a=0x5f, .x=0xc3, .y=0xe1, .sp=0x8f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xaf}, {.addr=0x7133, .value=0x7e}, {.addr=0x7134, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7133, .value=0x7e, .type=IO_READ},
        {.addr=0x7134, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0308) {
    const struct CPU_State initial_cpu = {.pc=0x2d0a, .a=0xd3, .x=0x47, .y=0x9a, .sp=0x1e, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x32}, {.addr=0x2d0a, .value=0x7e}, {.addr=0x2d0b, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x2d0c, .a=0xd3, .x=0x47, .y=0x9a, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x32}, {.addr=0x2d0a, .value=0x7e}, {.addr=0x2d0b, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d0a, .value=0x7e, .type=IO_READ},
        {.addr=0x2d0b, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0309) {
    const struct CPU_State initial_cpu = {.pc=0xa113, .a=0x54, .x=0xa5, .y=0x57, .sp=0xa0, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0xd7}, {.addr=0xa113, .value=0x7e}, {.addr=0xa114, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xa115, .a=0x54, .x=0xa5, .y=0x57, .sp=0xa0, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0xd7}, {.addr=0xa113, .value=0x7e}, {.addr=0xa114, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa113, .value=0x7e, .type=IO_READ},
        {.addr=0xa114, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030A) {
    const struct CPU_State initial_cpu = {.pc=0xd43e, .a=0xcb, .x=0xb4, .y=0x78, .sp=0x33, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x5c}, {.addr=0xd43e, .value=0x7e}, {.addr=0xd43f, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xd440, .a=0xcb, .x=0xb4, .y=0x78, .sp=0x33, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x5c}, {.addr=0xd43e, .value=0x7e}, {.addr=0xd43f, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd43e, .value=0x7e, .type=IO_READ},
        {.addr=0xd43f, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030B) {
    const struct CPU_State initial_cpu = {.pc=0x657f, .a=0x24, .x=0x53, .y=0x41, .sp=0x74, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x6a}, {.addr=0x657f, .value=0x7e}, {.addr=0x6580, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x6581, .a=0x24, .x=0x53, .y=0x41, .sp=0x74, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x6a}, {.addr=0x657f, .value=0x7e}, {.addr=0x6580, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x657f, .value=0x7e, .type=IO_READ},
        {.addr=0x6580, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030C) {
    const struct CPU_State initial_cpu = {.pc=0xeff8, .a=0x40, .x=0xbb, .y=0xd8, .sp=0x4b, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xb9}, {.addr=0xeff8, .value=0x7e}, {.addr=0xeff9, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xeffa, .a=0x40, .x=0xbb, .y=0xd8, .sp=0x4b, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xb9}, {.addr=0xeff8, .value=0x7e}, {.addr=0xeff9, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xeff8, .value=0x7e, .type=IO_READ},
        {.addr=0xeff9, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030D) {
    const struct CPU_State initial_cpu = {.pc=0x8c2d, .a=0xbf, .x=0xe3, .y=0x45, .sp=0x9c, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xbe}, {.addr=0x8c2d, .value=0x7e}, {.addr=0x8c2e, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x8c2f, .a=0xbf, .x=0xe3, .y=0x45, .sp=0x9c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xbe}, {.addr=0x8c2d, .value=0x7e}, {.addr=0x8c2e, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c2d, .value=0x7e, .type=IO_READ},
        {.addr=0x8c2e, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030E) {
    const struct CPU_State initial_cpu = {.pc=0xcca3, .a=0xca, .x=0x4c, .y=0xdc, .sp=0x03, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x80}, {.addr=0xcca3, .value=0x7e}, {.addr=0xcca4, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xcca5, .a=0xca, .x=0x4c, .y=0xdc, .sp=0x03, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x80}, {.addr=0xcca3, .value=0x7e}, {.addr=0xcca4, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xcca3, .value=0x7e, .type=IO_READ},
        {.addr=0xcca4, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_030F) {
    const struct CPU_State initial_cpu = {.pc=0x4d3e, .a=0x94, .x=0x2e, .y=0x00, .sp=0xc9, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xda}, {.addr=0x4d3e, .value=0x7e}, {.addr=0x4d3f, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x4d40, .a=0x94, .x=0x2e, .y=0x00, .sp=0xc9, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xda}, {.addr=0x4d3e, .value=0x7e}, {.addr=0x4d3f, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d3e, .value=0x7e, .type=IO_READ},
        {.addr=0x4d3f, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0310) {
    const struct CPU_State initial_cpu = {.pc=0xeedb, .a=0x86, .x=0xfb, .y=0xc4, .sp=0xcc, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x38}, {.addr=0xeedb, .value=0x7e}, {.addr=0xeedc, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xeedd, .a=0x86, .x=0xfb, .y=0xc4, .sp=0xcc, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x38}, {.addr=0xeedb, .value=0x7e}, {.addr=0xeedc, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xeedb, .value=0x7e, .type=IO_READ},
        {.addr=0xeedc, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0311) {
    const struct CPU_State initial_cpu = {.pc=0x008e, .a=0x1e, .x=0x25, .y=0x6a, .sp=0xa2, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x7e}, {.addr=0x008f, .value=0xd4}, {.addr=0x00d4, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0090, .a=0x1e, .x=0x25, .y=0x6a, .sp=0xa2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x7e}, {.addr=0x008f, .value=0xd4}, {.addr=0x00d4, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x008e, .value=0x7e, .type=IO_READ},
        {.addr=0x008f, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0312) {
    const struct CPU_State initial_cpu = {.pc=0x8560, .a=0x1e, .x=0xcd, .y=0x33, .sp=0xfd, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x92}, {.addr=0x8560, .value=0x7e}, {.addr=0x8561, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x8562, .a=0x1e, .x=0xcd, .y=0x33, .sp=0xfd, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x92}, {.addr=0x8560, .value=0x7e}, {.addr=0x8561, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x8560, .value=0x7e, .type=IO_READ},
        {.addr=0x8561, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0313) {
    const struct CPU_State initial_cpu = {.pc=0x9afe, .a=0x3d, .x=0x93, .y=0x3f, .sp=0x47, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xb0}, {.addr=0x9afe, .value=0x7e}, {.addr=0x9aff, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x9b00, .a=0x3d, .x=0x93, .y=0x3f, .sp=0x47, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xb0}, {.addr=0x9afe, .value=0x7e}, {.addr=0x9aff, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9afe, .value=0x7e, .type=IO_READ},
        {.addr=0x9aff, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0314) {
    const struct CPU_State initial_cpu = {.pc=0x83d5, .a=0x1a, .x=0x53, .y=0xa7, .sp=0xdb, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xb8}, {.addr=0x83d5, .value=0x7e}, {.addr=0x83d6, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x83d7, .a=0x1a, .x=0x53, .y=0xa7, .sp=0xdb, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xb8}, {.addr=0x83d5, .value=0x7e}, {.addr=0x83d6, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x83d5, .value=0x7e, .type=IO_READ},
        {.addr=0x83d6, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0315) {
    const struct CPU_State initial_cpu = {.pc=0xd3ae, .a=0xec, .x=0xdd, .y=0x9d, .sp=0x80, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x07}, {.addr=0xd3ae, .value=0x7e}, {.addr=0xd3af, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xd3b0, .a=0xec, .x=0xdd, .y=0x9d, .sp=0x80, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x07}, {.addr=0xd3ae, .value=0x7e}, {.addr=0xd3af, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3ae, .value=0x7e, .type=IO_READ},
        {.addr=0xd3af, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0316) {
    const struct CPU_State initial_cpu = {.pc=0x87f2, .a=0x31, .x=0x78, .y=0x73, .sp=0x8b, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x07}, {.addr=0x87f2, .value=0x7e}, {.addr=0x87f3, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x87f4, .a=0x31, .x=0x78, .y=0x73, .sp=0x8b, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x07}, {.addr=0x87f2, .value=0x7e}, {.addr=0x87f3, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x87f2, .value=0x7e, .type=IO_READ},
        {.addr=0x87f3, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0317) {
    const struct CPU_State initial_cpu = {.pc=0x3a9a, .a=0x18, .x=0xf4, .y=0x50, .sp=0x60, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x29}, {.addr=0x3a9a, .value=0x7e}, {.addr=0x3a9b, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x3a9c, .a=0x18, .x=0xf4, .y=0x50, .sp=0x60, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x29}, {.addr=0x3a9a, .value=0x7e}, {.addr=0x3a9b, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a9a, .value=0x7e, .type=IO_READ},
        {.addr=0x3a9b, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0318) {
    const struct CPU_State initial_cpu = {.pc=0xef9c, .a=0xe8, .x=0x39, .y=0x7d, .sp=0xdd, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x47}, {.addr=0xef9c, .value=0x7e}, {.addr=0xef9d, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xef9e, .a=0xe8, .x=0x39, .y=0x7d, .sp=0xdd, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x47}, {.addr=0xef9c, .value=0x7e}, {.addr=0xef9d, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xef9c, .value=0x7e, .type=IO_READ},
        {.addr=0xef9d, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0319) {
    const struct CPU_State initial_cpu = {.pc=0x8b0c, .a=0x6b, .x=0x51, .y=0xa4, .sp=0xcc, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xcf}, {.addr=0x8b0c, .value=0x7e}, {.addr=0x8b0d, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x8b0e, .a=0x6b, .x=0x51, .y=0xa4, .sp=0xcc, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xcf}, {.addr=0x8b0c, .value=0x7e}, {.addr=0x8b0d, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b0c, .value=0x7e, .type=IO_READ},
        {.addr=0x8b0d, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031A) {
    const struct CPU_State initial_cpu = {.pc=0x7304, .a=0x85, .x=0x5c, .y=0xa1, .sp=0xb2, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xe7}, {.addr=0x7304, .value=0x7e}, {.addr=0x7305, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x7306, .a=0x85, .x=0x5c, .y=0xa1, .sp=0xb2, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xe7}, {.addr=0x7304, .value=0x7e}, {.addr=0x7305, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x7304, .value=0x7e, .type=IO_READ},
        {.addr=0x7305, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031B) {
    const struct CPU_State initial_cpu = {.pc=0x6765, .a=0x02, .x=0xa8, .y=0xa4, .sp=0xbb, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xc1}, {.addr=0x6765, .value=0x7e}, {.addr=0x6766, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x6767, .a=0x02, .x=0xa8, .y=0xa4, .sp=0xbb, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xc1}, {.addr=0x6765, .value=0x7e}, {.addr=0x6766, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6765, .value=0x7e, .type=IO_READ},
        {.addr=0x6766, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031C) {
    const struct CPU_State initial_cpu = {.pc=0x1257, .a=0x0c, .x=0x80, .y=0x65, .sp=0x95, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x5a}, {.addr=0x1257, .value=0x7e}, {.addr=0x1258, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x1259, .a=0x0c, .x=0x80, .y=0x65, .sp=0x95, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x5a}, {.addr=0x1257, .value=0x7e}, {.addr=0x1258, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x1257, .value=0x7e, .type=IO_READ},
        {.addr=0x1258, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031D) {
    const struct CPU_State initial_cpu = {.pc=0x22d8, .a=0xf3, .x=0x6a, .y=0x10, .sp=0x1d, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xab}, {.addr=0x22d8, .value=0x7e}, {.addr=0x22d9, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x22da, .a=0xf3, .x=0x6a, .y=0x10, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xab}, {.addr=0x22d8, .value=0x7e}, {.addr=0x22d9, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x22d8, .value=0x7e, .type=IO_READ},
        {.addr=0x22d9, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031E) {
    const struct CPU_State initial_cpu = {.pc=0xa8cb, .a=0x4c, .x=0xed, .y=0x35, .sp=0x83, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x09}, {.addr=0xa8cb, .value=0x7e}, {.addr=0xa8cc, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xa8cd, .a=0x4c, .x=0xed, .y=0x35, .sp=0x83, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x09}, {.addr=0xa8cb, .value=0x7e}, {.addr=0xa8cc, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8cb, .value=0x7e, .type=IO_READ},
        {.addr=0xa8cc, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_031F) {
    const struct CPU_State initial_cpu = {.pc=0xb158, .a=0xe4, .x=0xc9, .y=0x51, .sp=0xed, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x6e}, {.addr=0xb158, .value=0x7e}, {.addr=0xb159, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xb15a, .a=0xe4, .x=0xc9, .y=0x51, .sp=0xed, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x6e}, {.addr=0xb158, .value=0x7e}, {.addr=0xb159, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb158, .value=0x7e, .type=IO_READ},
        {.addr=0xb159, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0320) {
    const struct CPU_State initial_cpu = {.pc=0xf69c, .a=0x68, .x=0xf5, .y=0x8e, .sp=0xbc, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x90}, {.addr=0xf69c, .value=0x7e}, {.addr=0xf69d, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xf69e, .a=0x68, .x=0xf5, .y=0x8e, .sp=0xbc, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x90}, {.addr=0xf69c, .value=0x7e}, {.addr=0xf69d, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf69c, .value=0x7e, .type=IO_READ},
        {.addr=0xf69d, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0321) {
    const struct CPU_State initial_cpu = {.pc=0x64b5, .a=0x2e, .x=0x05, .y=0x6f, .sp=0xcb, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x74}, {.addr=0x64b5, .value=0x7e}, {.addr=0x64b6, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x64b7, .a=0x2e, .x=0x05, .y=0x6f, .sp=0xcb, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x74}, {.addr=0x64b5, .value=0x7e}, {.addr=0x64b6, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x64b5, .value=0x7e, .type=IO_READ},
        {.addr=0x64b6, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0322) {
    const struct CPU_State initial_cpu = {.pc=0xd9d3, .a=0xd2, .x=0x2b, .y=0x58, .sp=0x03, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xfe}, {.addr=0xd9d3, .value=0x7e}, {.addr=0xd9d4, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xd9d5, .a=0xd2, .x=0x2b, .y=0x58, .sp=0x03, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xfe}, {.addr=0xd9d3, .value=0x7e}, {.addr=0xd9d4, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9d3, .value=0x7e, .type=IO_READ},
        {.addr=0xd9d4, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0323) {
    const struct CPU_State initial_cpu = {.pc=0x30a2, .a=0xa4, .x=0xff, .y=0xc3, .sp=0xc8, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xab}, {.addr=0x30a2, .value=0x7e}, {.addr=0x30a3, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x30a4, .a=0xa4, .x=0xff, .y=0xc3, .sp=0xc8, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xab}, {.addr=0x30a2, .value=0x7e}, {.addr=0x30a3, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x30a2, .value=0x7e, .type=IO_READ},
        {.addr=0x30a3, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0324) {
    const struct CPU_State initial_cpu = {.pc=0x64be, .a=0x3e, .x=0x9b, .y=0x48, .sp=0x5d, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x7f}, {.addr=0x64be, .value=0x7e}, {.addr=0x64bf, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x64c0, .a=0x3e, .x=0x9b, .y=0x48, .sp=0x5d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x7f}, {.addr=0x64be, .value=0x7e}, {.addr=0x64bf, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x64be, .value=0x7e, .type=IO_READ},
        {.addr=0x64bf, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0325) {
    const struct CPU_State initial_cpu = {.pc=0x5710, .a=0x6a, .x=0x9b, .y=0x03, .sp=0x69, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xe9}, {.addr=0x5710, .value=0x7e}, {.addr=0x5711, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x5712, .a=0x6a, .x=0x9b, .y=0x03, .sp=0x69, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xe9}, {.addr=0x5710, .value=0x7e}, {.addr=0x5711, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x5710, .value=0x7e, .type=IO_READ},
        {.addr=0x5711, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0326) {
    const struct CPU_State initial_cpu = {.pc=0x10cd, .a=0x88, .x=0x5c, .y=0x00, .sp=0x73, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x4f}, {.addr=0x10cd, .value=0x7e}, {.addr=0x10ce, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x10cf, .a=0x88, .x=0x5c, .y=0x00, .sp=0x73, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x4f}, {.addr=0x10cd, .value=0x7e}, {.addr=0x10ce, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x10cd, .value=0x7e, .type=IO_READ},
        {.addr=0x10ce, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0327) {
    const struct CPU_State initial_cpu = {.pc=0x178f, .a=0x82, .x=0x29, .y=0xa7, .sp=0xa3, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xcf}, {.addr=0x178f, .value=0x7e}, {.addr=0x1790, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x1791, .a=0x82, .x=0x29, .y=0xa7, .sp=0xa3, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xcf}, {.addr=0x178f, .value=0x7e}, {.addr=0x1790, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x178f, .value=0x7e, .type=IO_READ},
        {.addr=0x1790, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0328) {
    const struct CPU_State initial_cpu = {.pc=0xd0a0, .a=0x2b, .x=0x9b, .y=0xec, .sp=0x11, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x54}, {.addr=0xd0a0, .value=0x7e}, {.addr=0xd0a1, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xd0a2, .a=0x2b, .x=0x9b, .y=0xec, .sp=0x11, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x54}, {.addr=0xd0a0, .value=0x7e}, {.addr=0xd0a1, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0a0, .value=0x7e, .type=IO_READ},
        {.addr=0xd0a1, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0329) {
    const struct CPU_State initial_cpu = {.pc=0x39a4, .a=0x89, .x=0xc8, .y=0xc8, .sp=0x48, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xc0}, {.addr=0x39a4, .value=0x7e}, {.addr=0x39a5, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x39a6, .a=0x89, .x=0xc8, .y=0xc8, .sp=0x48, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xc0}, {.addr=0x39a4, .value=0x7e}, {.addr=0x39a5, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x39a4, .value=0x7e, .type=IO_READ},
        {.addr=0x39a5, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032A) {
    const struct CPU_State initial_cpu = {.pc=0xf6fc, .a=0x12, .x=0x20, .y=0x89, .sp=0x62, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x39}, {.addr=0xf6fc, .value=0x7e}, {.addr=0xf6fd, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xf6fe, .a=0x12, .x=0x20, .y=0x89, .sp=0x62, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x39}, {.addr=0xf6fc, .value=0x7e}, {.addr=0xf6fd, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6fc, .value=0x7e, .type=IO_READ},
        {.addr=0xf6fd, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd13c, .a=0x7c, .x=0x46, .y=0x59, .sp=0x9e, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x8b}, {.addr=0xd13c, .value=0x7e}, {.addr=0xd13d, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xd13e, .a=0x7c, .x=0x46, .y=0x59, .sp=0x9e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x8b}, {.addr=0xd13c, .value=0x7e}, {.addr=0xd13d, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xd13c, .value=0x7e, .type=IO_READ},
        {.addr=0xd13d, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032C) {
    const struct CPU_State initial_cpu = {.pc=0x4e83, .a=0x15, .x=0x24, .y=0x2b, .sp=0x37, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xda}, {.addr=0x4e83, .value=0x7e}, {.addr=0x4e84, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x4e85, .a=0x15, .x=0x24, .y=0x2b, .sp=0x37, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xda}, {.addr=0x4e83, .value=0x7e}, {.addr=0x4e84, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e83, .value=0x7e, .type=IO_READ},
        {.addr=0x4e84, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032D) {
    const struct CPU_State initial_cpu = {.pc=0xdf24, .a=0x13, .x=0xdf, .y=0x32, .sp=0x53, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x33}, {.addr=0xdf24, .value=0x7e}, {.addr=0xdf25, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xdf26, .a=0x13, .x=0xdf, .y=0x32, .sp=0x53, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x33}, {.addr=0xdf24, .value=0x7e}, {.addr=0xdf25, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf24, .value=0x7e, .type=IO_READ},
        {.addr=0xdf25, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032E) {
    const struct CPU_State initial_cpu = {.pc=0x76f6, .a=0x60, .x=0x16, .y=0x30, .sp=0x3d, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x31}, {.addr=0x76f6, .value=0x7e}, {.addr=0x76f7, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x76f8, .a=0x60, .x=0x16, .y=0x30, .sp=0x3d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x31}, {.addr=0x76f6, .value=0x7e}, {.addr=0x76f7, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x76f6, .value=0x7e, .type=IO_READ},
        {.addr=0x76f7, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_032F) {
    const struct CPU_State initial_cpu = {.pc=0xfc9b, .a=0xb2, .x=0xec, .y=0x2f, .sp=0x71, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x06}, {.addr=0xfc9b, .value=0x7e}, {.addr=0xfc9c, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xfc9d, .a=0xb2, .x=0xec, .y=0x2f, .sp=0x71, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x06}, {.addr=0xfc9b, .value=0x7e}, {.addr=0xfc9c, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc9b, .value=0x7e, .type=IO_READ},
        {.addr=0xfc9c, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0330) {
    const struct CPU_State initial_cpu = {.pc=0xc8f4, .a=0x67, .x=0x8e, .y=0xfa, .sp=0x36, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x3c}, {.addr=0xc8f4, .value=0x7e}, {.addr=0xc8f5, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc8f6, .a=0x67, .x=0x8e, .y=0xfa, .sp=0x36, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x3c}, {.addr=0xc8f4, .value=0x7e}, {.addr=0xc8f5, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8f4, .value=0x7e, .type=IO_READ},
        {.addr=0xc8f5, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0331) {
    const struct CPU_State initial_cpu = {.pc=0xb434, .a=0xbc, .x=0x4c, .y=0x43, .sp=0xe9, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x68}, {.addr=0xb434, .value=0x7e}, {.addr=0xb435, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xb436, .a=0xbc, .x=0x4c, .y=0x43, .sp=0xe9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x68}, {.addr=0xb434, .value=0x7e}, {.addr=0xb435, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xb434, .value=0x7e, .type=IO_READ},
        {.addr=0xb435, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0332) {
    const struct CPU_State initial_cpu = {.pc=0xb338, .a=0xb0, .x=0x3f, .y=0x54, .sp=0xd2, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x68}, {.addr=0xb338, .value=0x7e}, {.addr=0xb339, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xb33a, .a=0xb0, .x=0x3f, .y=0x54, .sp=0xd2, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x68}, {.addr=0xb338, .value=0x7e}, {.addr=0xb339, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb338, .value=0x7e, .type=IO_READ},
        {.addr=0xb339, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0333) {
    const struct CPU_State initial_cpu = {.pc=0x7b57, .a=0xc1, .x=0x4b, .y=0xe1, .sp=0x1e, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xeb}, {.addr=0x7b57, .value=0x7e}, {.addr=0x7b58, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x7b59, .a=0xc1, .x=0x4b, .y=0xe1, .sp=0x1e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xeb}, {.addr=0x7b57, .value=0x7e}, {.addr=0x7b58, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b57, .value=0x7e, .type=IO_READ},
        {.addr=0x7b58, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0334) {
    const struct CPU_State initial_cpu = {.pc=0xc2db, .a=0x30, .x=0x01, .y=0x73, .sp=0x0a, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xd0}, {.addr=0xc2db, .value=0x7e}, {.addr=0xc2dc, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xc2dd, .a=0x30, .x=0x01, .y=0x73, .sp=0x0a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xd0}, {.addr=0xc2db, .value=0x7e}, {.addr=0xc2dc, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2db, .value=0x7e, .type=IO_READ},
        {.addr=0xc2dc, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0336) {
    const struct CPU_State initial_cpu = {.pc=0xb220, .a=0x25, .x=0x0b, .y=0xe0, .sp=0x6c, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x3c}, {.addr=0xb220, .value=0x7e}, {.addr=0xb221, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xb222, .a=0x25, .x=0x0b, .y=0xe0, .sp=0x6c, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x3c}, {.addr=0xb220, .value=0x7e}, {.addr=0xb221, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xb220, .value=0x7e, .type=IO_READ},
        {.addr=0xb221, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0337) {
    const struct CPU_State initial_cpu = {.pc=0x5c2a, .a=0x6c, .x=0xbd, .y=0x24, .sp=0xa6, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x88}, {.addr=0x5c2a, .value=0x7e}, {.addr=0x5c2b, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x5c2c, .a=0x6c, .x=0xbd, .y=0x24, .sp=0xa6, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x88}, {.addr=0x5c2a, .value=0x7e}, {.addr=0x5c2b, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c2a, .value=0x7e, .type=IO_READ},
        {.addr=0x5c2b, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0338) {
    const struct CPU_State initial_cpu = {.pc=0x5ed1, .a=0x29, .x=0x05, .y=0x33, .sp=0x50, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0xb6}, {.addr=0x5ed1, .value=0x7e}, {.addr=0x5ed2, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5ed3, .a=0x29, .x=0x05, .y=0x33, .sp=0x50, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0xb6}, {.addr=0x5ed1, .value=0x7e}, {.addr=0x5ed2, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ed1, .value=0x7e, .type=IO_READ},
        {.addr=0x5ed2, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0339) {
    const struct CPU_State initial_cpu = {.pc=0x8337, .a=0x94, .x=0xc7, .y=0xed, .sp=0x87, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x0c}, {.addr=0x8337, .value=0x7e}, {.addr=0x8338, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x8339, .a=0x94, .x=0xc7, .y=0xed, .sp=0x87, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x0c}, {.addr=0x8337, .value=0x7e}, {.addr=0x8338, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x8337, .value=0x7e, .type=IO_READ},
        {.addr=0x8338, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033A) {
    const struct CPU_State initial_cpu = {.pc=0x8bf9, .a=0x28, .x=0xcd, .y=0x2d, .sp=0xa0, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xbe}, {.addr=0x8bf9, .value=0x7e}, {.addr=0x8bfa, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x8bfb, .a=0x28, .x=0xcd, .y=0x2d, .sp=0xa0, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xbe}, {.addr=0x8bf9, .value=0x7e}, {.addr=0x8bfa, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bf9, .value=0x7e, .type=IO_READ},
        {.addr=0x8bfa, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033B) {
    const struct CPU_State initial_cpu = {.pc=0x4540, .a=0x6f, .x=0x2a, .y=0xa0, .sp=0x11, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x8d}, {.addr=0x4540, .value=0x7e}, {.addr=0x4541, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x4542, .a=0x6f, .x=0x2a, .y=0xa0, .sp=0x11, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x8d}, {.addr=0x4540, .value=0x7e}, {.addr=0x4541, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4540, .value=0x7e, .type=IO_READ},
        {.addr=0x4541, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033C) {
    const struct CPU_State initial_cpu = {.pc=0xf62b, .a=0x4e, .x=0xa1, .y=0x34, .sp=0x6d, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x7e}, {.addr=0xf62b, .value=0x7e}, {.addr=0xf62c, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xf62d, .a=0x4e, .x=0xa1, .y=0x34, .sp=0x6d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x7e}, {.addr=0xf62b, .value=0x7e}, {.addr=0xf62c, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf62b, .value=0x7e, .type=IO_READ},
        {.addr=0xf62c, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033D) {
    const struct CPU_State initial_cpu = {.pc=0x88ff, .a=0xb6, .x=0xb9, .y=0x73, .sp=0xa5, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x42}, {.addr=0x88ff, .value=0x7e}, {.addr=0x8900, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x8901, .a=0xb6, .x=0xb9, .y=0x73, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x42}, {.addr=0x88ff, .value=0x7e}, {.addr=0x8900, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x88ff, .value=0x7e, .type=IO_READ},
        {.addr=0x8900, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033E) {
    const struct CPU_State initial_cpu = {.pc=0xf4ec, .a=0xcb, .x=0xb3, .y=0xf9, .sp=0x10, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xdb}, {.addr=0xf4ec, .value=0x7e}, {.addr=0xf4ed, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xf4ee, .a=0xcb, .x=0xb3, .y=0xf9, .sp=0x10, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xdb}, {.addr=0xf4ec, .value=0x7e}, {.addr=0xf4ed, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4ec, .value=0x7e, .type=IO_READ},
        {.addr=0xf4ed, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_033F) {
    const struct CPU_State initial_cpu = {.pc=0xade5, .a=0x81, .x=0xe7, .y=0xf9, .sp=0x94, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xf9}, {.addr=0xade5, .value=0x7e}, {.addr=0xade6, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xade7, .a=0x81, .x=0xe7, .y=0xf9, .sp=0x94, .status=0x37};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xf9}, {.addr=0xade5, .value=0x7e}, {.addr=0xade6, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xade5, .value=0x7e, .type=IO_READ},
        {.addr=0xade6, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0340) {
    const struct CPU_State initial_cpu = {.pc=0x3ae9, .a=0xff, .x=0xa6, .y=0xff, .sp=0x55, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x2a}, {.addr=0x3ae9, .value=0x7e}, {.addr=0x3aea, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x3aeb, .a=0xff, .x=0xa6, .y=0xff, .sp=0x55, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x2a}, {.addr=0x3ae9, .value=0x7e}, {.addr=0x3aea, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ae9, .value=0x7e, .type=IO_READ},
        {.addr=0x3aea, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0341) {
    const struct CPU_State initial_cpu = {.pc=0x43d9, .a=0xd3, .x=0x9e, .y=0x72, .sp=0xd4, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x33}, {.addr=0x43d9, .value=0x7e}, {.addr=0x43da, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x43db, .a=0xd3, .x=0x9e, .y=0x72, .sp=0xd4, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x33}, {.addr=0x43d9, .value=0x7e}, {.addr=0x43da, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x43d9, .value=0x7e, .type=IO_READ},
        {.addr=0x43da, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0342) {
    const struct CPU_State initial_cpu = {.pc=0x8181, .a=0xf2, .x=0x69, .y=0x02, .sp=0x37, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xcc}, {.addr=0x8181, .value=0x7e}, {.addr=0x8182, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x8183, .a=0xf2, .x=0x69, .y=0x02, .sp=0x37, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xcc}, {.addr=0x8181, .value=0x7e}, {.addr=0x8182, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x8181, .value=0x7e, .type=IO_READ},
        {.addr=0x8182, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0343) {
    const struct CPU_State initial_cpu = {.pc=0x328c, .a=0xdd, .x=0xa2, .y=0x90, .sp=0xfb, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x8d}, {.addr=0x328c, .value=0x7e}, {.addr=0x328d, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x328e, .a=0xdd, .x=0xa2, .y=0x90, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x8d}, {.addr=0x328c, .value=0x7e}, {.addr=0x328d, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x328c, .value=0x7e, .type=IO_READ},
        {.addr=0x328d, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0344) {
    const struct CPU_State initial_cpu = {.pc=0xe1e6, .a=0x7b, .x=0x8a, .y=0x21, .sp=0x2d, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x9e}, {.addr=0xe1e6, .value=0x7e}, {.addr=0xe1e7, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xe1e8, .a=0x7b, .x=0x8a, .y=0x21, .sp=0x2d, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x9e}, {.addr=0xe1e6, .value=0x7e}, {.addr=0xe1e7, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1e6, .value=0x7e, .type=IO_READ},
        {.addr=0xe1e7, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0345) {
    const struct CPU_State initial_cpu = {.pc=0xfc79, .a=0x6c, .x=0x0b, .y=0xa0, .sp=0x93, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x9e}, {.addr=0xfc79, .value=0x7e}, {.addr=0xfc7a, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xfc7b, .a=0x6c, .x=0x0b, .y=0xa0, .sp=0x93, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x9e}, {.addr=0xfc79, .value=0x7e}, {.addr=0xfc7a, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc79, .value=0x7e, .type=IO_READ},
        {.addr=0xfc7a, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0346) {
    const struct CPU_State initial_cpu = {.pc=0x7592, .a=0x38, .x=0x6d, .y=0x4a, .sp=0xcd, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x96}, {.addr=0x7592, .value=0x7e}, {.addr=0x7593, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x7594, .a=0x38, .x=0x6d, .y=0x4a, .sp=0xcd, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x96}, {.addr=0x7592, .value=0x7e}, {.addr=0x7593, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7592, .value=0x7e, .type=IO_READ},
        {.addr=0x7593, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0347) {
    const struct CPU_State initial_cpu = {.pc=0x99cd, .a=0xaa, .x=0x18, .y=0x53, .sp=0x5b, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x56}, {.addr=0x99cd, .value=0x7e}, {.addr=0x99ce, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x99cf, .a=0xaa, .x=0x18, .y=0x53, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x56}, {.addr=0x99cd, .value=0x7e}, {.addr=0x99ce, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x99cd, .value=0x7e, .type=IO_READ},
        {.addr=0x99ce, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0348) {
    const struct CPU_State initial_cpu = {.pc=0x5e45, .a=0xfc, .x=0xb1, .y=0xe0, .sp=0x73, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x1b}, {.addr=0x5e45, .value=0x7e}, {.addr=0x5e46, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x5e47, .a=0xfc, .x=0xb1, .y=0xe0, .sp=0x73, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x1b}, {.addr=0x5e45, .value=0x7e}, {.addr=0x5e46, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e45, .value=0x7e, .type=IO_READ},
        {.addr=0x5e46, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0349) {
    const struct CPU_State initial_cpu = {.pc=0x1a6c, .a=0x4f, .x=0x40, .y=0xd2, .sp=0x11, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0xef}, {.addr=0x1a6c, .value=0x7e}, {.addr=0x1a6d, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x1a6e, .a=0x4f, .x=0x40, .y=0xd2, .sp=0x11, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0xef}, {.addr=0x1a6c, .value=0x7e}, {.addr=0x1a6d, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a6c, .value=0x7e, .type=IO_READ},
        {.addr=0x1a6d, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_034A) {
    const struct CPU_State initial_cpu = {.pc=0x6968, .a=0x66, .x=0xc5, .y=0xfa, .sp=0x56, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x67}, {.addr=0x6968, .value=0x7e}, {.addr=0x6969, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x696a, .a=0x66, .x=0xc5, .y=0xfa, .sp=0x56, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x67}, {.addr=0x6968, .value=0x7e}, {.addr=0x6969, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x6968, .value=0x7e, .type=IO_READ},
        {.addr=0x6969, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_034B) {
    const struct CPU_State initial_cpu = {.pc=0x6069, .a=0x24, .x=0xe3, .y=0x99, .sp=0x89, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x58}, {.addr=0x6069, .value=0x7e}, {.addr=0x606a, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x606b, .a=0x24, .x=0xe3, .y=0x99, .sp=0x89, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x58}, {.addr=0x6069, .value=0x7e}, {.addr=0x606a, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6069, .value=0x7e, .type=IO_READ},
        {.addr=0x606a, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_034C) {
    const struct CPU_State initial_cpu = {.pc=0x31d0, .a=0xb5, .x=0x0b, .y=0xaf, .sp=0x38, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x50}, {.addr=0x31d0, .value=0x7e}, {.addr=0x31d1, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x31d2, .a=0xb5, .x=0x0b, .y=0xaf, .sp=0x38, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x50}, {.addr=0x31d0, .value=0x7e}, {.addr=0x31d1, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x31d0, .value=0x7e, .type=IO_READ},
        {.addr=0x31d1, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_034E) {
    const struct CPU_State initial_cpu = {.pc=0x8c62, .a=0xff, .x=0x7e, .y=0xec, .sp=0x82, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x9b}, {.addr=0x8c62, .value=0x7e}, {.addr=0x8c63, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x8c64, .a=0xff, .x=0x7e, .y=0xec, .sp=0x82, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x9b}, {.addr=0x8c62, .value=0x7e}, {.addr=0x8c63, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c62, .value=0x7e, .type=IO_READ},
        {.addr=0x8c63, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_034F) {
    const struct CPU_State initial_cpu = {.pc=0x6a27, .a=0xd9, .x=0x7a, .y=0x8c, .sp=0xe1, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xf4}, {.addr=0x6a27, .value=0x7e}, {.addr=0x6a28, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x6a29, .a=0xd9, .x=0x7a, .y=0x8c, .sp=0xe1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xf4}, {.addr=0x6a27, .value=0x7e}, {.addr=0x6a28, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a27, .value=0x7e, .type=IO_READ},
        {.addr=0x6a28, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0350) {
    const struct CPU_State initial_cpu = {.pc=0x246b, .a=0xa0, .x=0x36, .y=0x30, .sp=0xfc, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x83}, {.addr=0x246b, .value=0x7e}, {.addr=0x246c, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x246d, .a=0xa0, .x=0x36, .y=0x30, .sp=0xfc, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x83}, {.addr=0x246b, .value=0x7e}, {.addr=0x246c, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x246b, .value=0x7e, .type=IO_READ},
        {.addr=0x246c, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0351) {
    const struct CPU_State initial_cpu = {.pc=0x712b, .a=0x2e, .x=0xdc, .y=0xb8, .sp=0x3c, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x5f}, {.addr=0x712b, .value=0x7e}, {.addr=0x712c, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x712d, .a=0x2e, .x=0xdc, .y=0xb8, .sp=0x3c, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x5f}, {.addr=0x712b, .value=0x7e}, {.addr=0x712c, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x712b, .value=0x7e, .type=IO_READ},
        {.addr=0x712c, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0352) {
    const struct CPU_State initial_cpu = {.pc=0x70f8, .a=0x20, .x=0x61, .y=0xeb, .sp=0xed, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xa6}, {.addr=0x70f8, .value=0x7e}, {.addr=0x70f9, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x70fa, .a=0x20, .x=0x61, .y=0xeb, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xa6}, {.addr=0x70f8, .value=0x7e}, {.addr=0x70f9, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x70f8, .value=0x7e, .type=IO_READ},
        {.addr=0x70f9, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0353) {
    const struct CPU_State initial_cpu = {.pc=0xa6d9, .a=0x35, .x=0x0e, .y=0xe8, .sp=0xdb, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x9b}, {.addr=0xa6d9, .value=0x7e}, {.addr=0xa6da, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xa6db, .a=0x35, .x=0x0e, .y=0xe8, .sp=0xdb, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x9b}, {.addr=0xa6d9, .value=0x7e}, {.addr=0xa6da, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6d9, .value=0x7e, .type=IO_READ},
        {.addr=0xa6da, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0354) {
    const struct CPU_State initial_cpu = {.pc=0xf7af, .a=0xf3, .x=0x17, .y=0x30, .sp=0x5a, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xa6}, {.addr=0xf7af, .value=0x7e}, {.addr=0xf7b0, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xf7b1, .a=0xf3, .x=0x17, .y=0x30, .sp=0x5a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xa6}, {.addr=0xf7af, .value=0x7e}, {.addr=0xf7b0, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7af, .value=0x7e, .type=IO_READ},
        {.addr=0xf7b0, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0355) {
    const struct CPU_State initial_cpu = {.pc=0x5be0, .a=0x40, .x=0xba, .y=0x40, .sp=0x7b, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xbb}, {.addr=0x5be0, .value=0x7e}, {.addr=0x5be1, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x5be2, .a=0x40, .x=0xba, .y=0x40, .sp=0x7b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xbb}, {.addr=0x5be0, .value=0x7e}, {.addr=0x5be1, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5be0, .value=0x7e, .type=IO_READ},
        {.addr=0x5be1, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0356) {
    const struct CPU_State initial_cpu = {.pc=0x1c72, .a=0xae, .x=0x1e, .y=0x80, .sp=0xaf, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x6a}, {.addr=0x1c72, .value=0x7e}, {.addr=0x1c73, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x1c74, .a=0xae, .x=0x1e, .y=0x80, .sp=0xaf, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x6a}, {.addr=0x1c72, .value=0x7e}, {.addr=0x1c73, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c72, .value=0x7e, .type=IO_READ},
        {.addr=0x1c73, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0357) {
    const struct CPU_State initial_cpu = {.pc=0xd1ec, .a=0xa1, .x=0x7d, .y=0x5e, .sp=0x79, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x0e}, {.addr=0xd1ec, .value=0x7e}, {.addr=0xd1ed, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xd1ee, .a=0xa1, .x=0x7d, .y=0x5e, .sp=0x79, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x0e}, {.addr=0xd1ec, .value=0x7e}, {.addr=0xd1ed, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1ec, .value=0x7e, .type=IO_READ},
        {.addr=0xd1ed, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0358) {
    const struct CPU_State initial_cpu = {.pc=0xf1a0, .a=0x8e, .x=0x98, .y=0x01, .sp=0x41, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x2c}, {.addr=0xf1a0, .value=0x7e}, {.addr=0xf1a1, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xf1a2, .a=0x8e, .x=0x98, .y=0x01, .sp=0x41, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x2c}, {.addr=0xf1a0, .value=0x7e}, {.addr=0xf1a1, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1a0, .value=0x7e, .type=IO_READ},
        {.addr=0xf1a1, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0359) {
    const struct CPU_State initial_cpu = {.pc=0xc60f, .a=0xa1, .x=0xe4, .y=0x98, .sp=0xdb, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x91}, {.addr=0xc60f, .value=0x7e}, {.addr=0xc610, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xc611, .a=0xa1, .x=0xe4, .y=0x98, .sp=0xdb, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x91}, {.addr=0xc60f, .value=0x7e}, {.addr=0xc610, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc60f, .value=0x7e, .type=IO_READ},
        {.addr=0xc610, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035A) {
    const struct CPU_State initial_cpu = {.pc=0x90ba, .a=0x74, .x=0x33, .y=0x53, .sp=0xc3, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xf9}, {.addr=0x90ba, .value=0x7e}, {.addr=0x90bb, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x90bc, .a=0x74, .x=0x33, .y=0x53, .sp=0xc3, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xf9}, {.addr=0x90ba, .value=0x7e}, {.addr=0x90bb, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x90ba, .value=0x7e, .type=IO_READ},
        {.addr=0x90bb, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035B) {
    const struct CPU_State initial_cpu = {.pc=0xecbb, .a=0x29, .x=0x74, .y=0xb2, .sp=0x1f, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x9d}, {.addr=0xecbb, .value=0x7e}, {.addr=0xecbc, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xecbd, .a=0x29, .x=0x74, .y=0xb2, .sp=0x1f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x9d}, {.addr=0xecbb, .value=0x7e}, {.addr=0xecbc, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xecbb, .value=0x7e, .type=IO_READ},
        {.addr=0xecbc, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035C) {
    const struct CPU_State initial_cpu = {.pc=0xd878, .a=0xb5, .x=0x52, .y=0x46, .sp=0xe1, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x3b}, {.addr=0xd878, .value=0x7e}, {.addr=0xd879, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xd87a, .a=0xb5, .x=0x52, .y=0x46, .sp=0xe1, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x3b}, {.addr=0xd878, .value=0x7e}, {.addr=0xd879, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xd878, .value=0x7e, .type=IO_READ},
        {.addr=0xd879, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035D) {
    const struct CPU_State initial_cpu = {.pc=0xd052, .a=0x90, .x=0xbc, .y=0xb5, .sp=0xb1, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x70}, {.addr=0xd052, .value=0x7e}, {.addr=0xd053, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xd054, .a=0x90, .x=0xbc, .y=0xb5, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x70}, {.addr=0xd052, .value=0x7e}, {.addr=0xd053, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd052, .value=0x7e, .type=IO_READ},
        {.addr=0xd053, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035E) {
    const struct CPU_State initial_cpu = {.pc=0x2530, .a=0x9f, .x=0xaa, .y=0x1c, .sp=0x73, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x95}, {.addr=0x2530, .value=0x7e}, {.addr=0x2531, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x2532, .a=0x9f, .x=0xaa, .y=0x1c, .sp=0x73, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x95}, {.addr=0x2530, .value=0x7e}, {.addr=0x2531, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x2530, .value=0x7e, .type=IO_READ},
        {.addr=0x2531, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_035F) {
    const struct CPU_State initial_cpu = {.pc=0x3927, .a=0x74, .x=0xc7, .y=0xec, .sp=0x34, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0xbf}, {.addr=0x3927, .value=0x7e}, {.addr=0x3928, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x3929, .a=0x74, .x=0xc7, .y=0xec, .sp=0x34, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0xbf}, {.addr=0x3927, .value=0x7e}, {.addr=0x3928, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3927, .value=0x7e, .type=IO_READ},
        {.addr=0x3928, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1f51, .a=0x8c, .x=0xd4, .y=0xa8, .sp=0x42, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x61}, {.addr=0x1f51, .value=0x7e}, {.addr=0x1f52, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x1f53, .a=0x8c, .x=0xd4, .y=0xa8, .sp=0x42, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x61}, {.addr=0x1f51, .value=0x7e}, {.addr=0x1f52, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f51, .value=0x7e, .type=IO_READ},
        {.addr=0x1f52, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0361) {
    const struct CPU_State initial_cpu = {.pc=0x81f4, .a=0xce, .x=0x1f, .y=0xb3, .sp=0x55, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xcd}, {.addr=0x81f4, .value=0x7e}, {.addr=0x81f5, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x81f6, .a=0xce, .x=0x1f, .y=0xb3, .sp=0x55, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xcd}, {.addr=0x81f4, .value=0x7e}, {.addr=0x81f5, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x81f4, .value=0x7e, .type=IO_READ},
        {.addr=0x81f5, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0362) {
    const struct CPU_State initial_cpu = {.pc=0x50de, .a=0xbe, .x=0x80, .y=0x77, .sp=0x2d, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x61}, {.addr=0x50de, .value=0x7e}, {.addr=0x50df, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x50e0, .a=0xbe, .x=0x80, .y=0x77, .sp=0x2d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x61}, {.addr=0x50de, .value=0x7e}, {.addr=0x50df, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x50de, .value=0x7e, .type=IO_READ},
        {.addr=0x50df, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0363) {
    const struct CPU_State initial_cpu = {.pc=0x361f, .a=0x5e, .x=0xd9, .y=0xc8, .sp=0x8f, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xa7}, {.addr=0x361f, .value=0x7e}, {.addr=0x3620, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x3621, .a=0x5e, .x=0xd9, .y=0xc8, .sp=0x8f, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xa7}, {.addr=0x361f, .value=0x7e}, {.addr=0x3620, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x361f, .value=0x7e, .type=IO_READ},
        {.addr=0x3620, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0364) {
    const struct CPU_State initial_cpu = {.pc=0x6f29, .a=0x1d, .x=0xf7, .y=0xa7, .sp=0x53, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xf5}, {.addr=0x6f29, .value=0x7e}, {.addr=0x6f2a, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x6f2b, .a=0x1d, .x=0xf7, .y=0xa7, .sp=0x53, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xf5}, {.addr=0x6f29, .value=0x7e}, {.addr=0x6f2a, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f29, .value=0x7e, .type=IO_READ},
        {.addr=0x6f2a, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0365) {
    const struct CPU_State initial_cpu = {.pc=0x67d6, .a=0x4c, .x=0xb5, .y=0x0d, .sp=0x3d, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x1a}, {.addr=0x67d6, .value=0x7e}, {.addr=0x67d7, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x67d8, .a=0x4c, .x=0xb5, .y=0x0d, .sp=0x3d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x1a}, {.addr=0x67d6, .value=0x7e}, {.addr=0x67d7, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x67d6, .value=0x7e, .type=IO_READ},
        {.addr=0x67d7, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0366) {
    const struct CPU_State initial_cpu = {.pc=0xc0e3, .a=0x54, .x=0x3e, .y=0xd5, .sp=0x85, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x7e}, {.addr=0xc0e3, .value=0x7e}, {.addr=0xc0e4, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xc0e5, .a=0x54, .x=0x3e, .y=0xd5, .sp=0x85, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x7e}, {.addr=0xc0e3, .value=0x7e}, {.addr=0xc0e4, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0e3, .value=0x7e, .type=IO_READ},
        {.addr=0xc0e4, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0367) {
    const struct CPU_State initial_cpu = {.pc=0x6c2e, .a=0x24, .x=0x4a, .y=0x23, .sp=0x58, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xca}, {.addr=0x6c2e, .value=0x7e}, {.addr=0x6c2f, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x6c30, .a=0x24, .x=0x4a, .y=0x23, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xca}, {.addr=0x6c2e, .value=0x7e}, {.addr=0x6c2f, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c2e, .value=0x7e, .type=IO_READ},
        {.addr=0x6c2f, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0368) {
    const struct CPU_State initial_cpu = {.pc=0x2718, .a=0x96, .x=0x72, .y=0xd9, .sp=0x5a, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x8a}, {.addr=0x2718, .value=0x7e}, {.addr=0x2719, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x271a, .a=0x96, .x=0x72, .y=0xd9, .sp=0x5a, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x8a}, {.addr=0x2718, .value=0x7e}, {.addr=0x2719, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2718, .value=0x7e, .type=IO_READ},
        {.addr=0x2719, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0369) {
    const struct CPU_State initial_cpu = {.pc=0x528c, .a=0xe6, .x=0xf2, .y=0x63, .sp=0x70, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xd9}, {.addr=0x528c, .value=0x7e}, {.addr=0x528d, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x528e, .a=0xe6, .x=0xf2, .y=0x63, .sp=0x70, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xd9}, {.addr=0x528c, .value=0x7e}, {.addr=0x528d, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x528c, .value=0x7e, .type=IO_READ},
        {.addr=0x528d, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036A) {
    const struct CPU_State initial_cpu = {.pc=0xfedc, .a=0xf2, .x=0x56, .y=0x2b, .sp=0x91, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x84}, {.addr=0xfedc, .value=0x7e}, {.addr=0xfedd, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xfede, .a=0xf2, .x=0x56, .y=0x2b, .sp=0x91, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x84}, {.addr=0xfedc, .value=0x7e}, {.addr=0xfedd, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfedc, .value=0x7e, .type=IO_READ},
        {.addr=0xfedd, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036B) {
    const struct CPU_State initial_cpu = {.pc=0x97ed, .a=0xea, .x=0x26, .y=0x6b, .sp=0x15, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xb2}, {.addr=0x97ed, .value=0x7e}, {.addr=0x97ee, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x97ef, .a=0xea, .x=0x26, .y=0x6b, .sp=0x15, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xb2}, {.addr=0x97ed, .value=0x7e}, {.addr=0x97ee, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x97ed, .value=0x7e, .type=IO_READ},
        {.addr=0x97ee, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036C) {
    const struct CPU_State initial_cpu = {.pc=0xc6b5, .a=0xb8, .x=0xb4, .y=0x28, .sp=0x10, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x3d}, {.addr=0xc6b5, .value=0x7e}, {.addr=0xc6b6, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xc6b7, .a=0xb8, .x=0xb4, .y=0x28, .sp=0x10, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x3d}, {.addr=0xc6b5, .value=0x7e}, {.addr=0xc6b6, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6b5, .value=0x7e, .type=IO_READ},
        {.addr=0xc6b6, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036D) {
    const struct CPU_State initial_cpu = {.pc=0x610d, .a=0xe0, .x=0x79, .y=0x0e, .sp=0xce, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x29}, {.addr=0x610d, .value=0x7e}, {.addr=0x610e, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x610f, .a=0xe0, .x=0x79, .y=0x0e, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x29}, {.addr=0x610d, .value=0x7e}, {.addr=0x610e, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x610d, .value=0x7e, .type=IO_READ},
        {.addr=0x610e, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036E) {
    const struct CPU_State initial_cpu = {.pc=0x9e72, .a=0x74, .x=0x06, .y=0x4c, .sp=0xc2, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xce}, {.addr=0x9e72, .value=0x7e}, {.addr=0x9e73, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x9e74, .a=0x74, .x=0x06, .y=0x4c, .sp=0xc2, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xce}, {.addr=0x9e72, .value=0x7e}, {.addr=0x9e73, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e72, .value=0x7e, .type=IO_READ},
        {.addr=0x9e73, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_036F) {
    const struct CPU_State initial_cpu = {.pc=0x9d65, .a=0x0f, .x=0x12, .y=0x33, .sp=0xbc, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x01}, {.addr=0x9d65, .value=0x7e}, {.addr=0x9d66, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x9d67, .a=0x0f, .x=0x12, .y=0x33, .sp=0xbc, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x01}, {.addr=0x9d65, .value=0x7e}, {.addr=0x9d66, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d65, .value=0x7e, .type=IO_READ},
        {.addr=0x9d66, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0370) {
    const struct CPU_State initial_cpu = {.pc=0x333c, .a=0x5d, .x=0x0e, .y=0xf4, .sp=0x7b, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xeb}, {.addr=0x333c, .value=0x7e}, {.addr=0x333d, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x333e, .a=0x5d, .x=0x0e, .y=0xf4, .sp=0x7b, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xeb}, {.addr=0x333c, .value=0x7e}, {.addr=0x333d, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x333c, .value=0x7e, .type=IO_READ},
        {.addr=0x333d, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0371) {
    const struct CPU_State initial_cpu = {.pc=0x93d8, .a=0xdf, .x=0x77, .y=0xfd, .sp=0x05, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0xab}, {.addr=0x93d8, .value=0x7e}, {.addr=0x93d9, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x93da, .a=0xdf, .x=0x77, .y=0xfd, .sp=0x05, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0xab}, {.addr=0x93d8, .value=0x7e}, {.addr=0x93d9, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x93d8, .value=0x7e, .type=IO_READ},
        {.addr=0x93d9, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0372) {
    const struct CPU_State initial_cpu = {.pc=0x5eb1, .a=0xb1, .x=0x7b, .y=0xe1, .sp=0xd4, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x50}, {.addr=0x5eb1, .value=0x7e}, {.addr=0x5eb2, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0x5eb3, .a=0xb1, .x=0x7b, .y=0xe1, .sp=0xd4, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x50}, {.addr=0x5eb1, .value=0x7e}, {.addr=0x5eb2, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eb1, .value=0x7e, .type=IO_READ},
        {.addr=0x5eb2, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0373) {
    const struct CPU_State initial_cpu = {.pc=0xf98c, .a=0xd0, .x=0xbf, .y=0x82, .sp=0x3b, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xfb}, {.addr=0xf98c, .value=0x7e}, {.addr=0xf98d, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xf98e, .a=0xd0, .x=0xbf, .y=0x82, .sp=0x3b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xfb}, {.addr=0xf98c, .value=0x7e}, {.addr=0xf98d, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xf98c, .value=0x7e, .type=IO_READ},
        {.addr=0xf98d, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0374) {
    const struct CPU_State initial_cpu = {.pc=0xcae7, .a=0x74, .x=0x42, .y=0x95, .sp=0x13, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xb9}, {.addr=0xcae7, .value=0x7e}, {.addr=0xcae8, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xcae9, .a=0x74, .x=0x42, .y=0x95, .sp=0x13, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xb9}, {.addr=0xcae7, .value=0x7e}, {.addr=0xcae8, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xcae7, .value=0x7e, .type=IO_READ},
        {.addr=0xcae8, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0375) {
    const struct CPU_State initial_cpu = {.pc=0xa74d, .a=0x92, .x=0x0c, .y=0x85, .sp=0x19, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x53}, {.addr=0xa74d, .value=0x7e}, {.addr=0xa74e, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xa74f, .a=0x92, .x=0x0c, .y=0x85, .sp=0x19, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x53}, {.addr=0xa74d, .value=0x7e}, {.addr=0xa74e, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa74d, .value=0x7e, .type=IO_READ},
        {.addr=0xa74e, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0376) {
    const struct CPU_State initial_cpu = {.pc=0x2d45, .a=0xbc, .x=0x8b, .y=0xf4, .sp=0x23, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xea}, {.addr=0x2d45, .value=0x7e}, {.addr=0x2d46, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x2d47, .a=0xbc, .x=0x8b, .y=0xf4, .sp=0x23, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xea}, {.addr=0x2d45, .value=0x7e}, {.addr=0x2d46, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d45, .value=0x7e, .type=IO_READ},
        {.addr=0x2d46, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6e9c, .a=0xa9, .x=0x19, .y=0x0b, .sp=0x18, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0xf7}, {.addr=0x6e9c, .value=0x7e}, {.addr=0x6e9d, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x6e9e, .a=0xa9, .x=0x19, .y=0x0b, .sp=0x18, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0xf7}, {.addr=0x6e9c, .value=0x7e}, {.addr=0x6e9d, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e9c, .value=0x7e, .type=IO_READ},
        {.addr=0x6e9d, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0378) {
    const struct CPU_State initial_cpu = {.pc=0x1356, .a=0xe4, .x=0xc5, .y=0x20, .sp=0x43, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xc1}, {.addr=0x1356, .value=0x7e}, {.addr=0x1357, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x1358, .a=0xe4, .x=0xc5, .y=0x20, .sp=0x43, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xc1}, {.addr=0x1356, .value=0x7e}, {.addr=0x1357, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1356, .value=0x7e, .type=IO_READ},
        {.addr=0x1357, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037A) {
    const struct CPU_State initial_cpu = {.pc=0xec9e, .a=0x39, .x=0xad, .y=0xe3, .sp=0xa5, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x6e}, {.addr=0xec9e, .value=0x7e}, {.addr=0xec9f, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xeca0, .a=0x39, .x=0xad, .y=0xe3, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x6e}, {.addr=0xec9e, .value=0x7e}, {.addr=0xec9f, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xec9e, .value=0x7e, .type=IO_READ},
        {.addr=0xec9f, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037B) {
    const struct CPU_State initial_cpu = {.pc=0x05cf, .a=0xf7, .x=0xcf, .y=0xb0, .sp=0x7e, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x45}, {.addr=0x05cf, .value=0x7e}, {.addr=0x05d0, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x05d1, .a=0xf7, .x=0xcf, .y=0xb0, .sp=0x7e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x45}, {.addr=0x05cf, .value=0x7e}, {.addr=0x05d0, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x05cf, .value=0x7e, .type=IO_READ},
        {.addr=0x05d0, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd574, .a=0x8e, .x=0x88, .y=0xfc, .sp=0x8c, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x3a}, {.addr=0xd574, .value=0x7e}, {.addr=0xd575, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xd576, .a=0x8e, .x=0x88, .y=0xfc, .sp=0x8c, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x3a}, {.addr=0xd574, .value=0x7e}, {.addr=0xd575, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xd574, .value=0x7e, .type=IO_READ},
        {.addr=0xd575, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037D) {
    const struct CPU_State initial_cpu = {.pc=0x13a6, .a=0x50, .x=0xb3, .y=0x0c, .sp=0x71, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xfc}, {.addr=0x13a6, .value=0x7e}, {.addr=0x13a7, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x13a8, .a=0x50, .x=0xb3, .y=0x0c, .sp=0x71, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xfc}, {.addr=0x13a6, .value=0x7e}, {.addr=0x13a7, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x13a6, .value=0x7e, .type=IO_READ},
        {.addr=0x13a7, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037E) {
    const struct CPU_State initial_cpu = {.pc=0x86fe, .a=0xb9, .x=0x6e, .y=0x7b, .sp=0xab, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xe4}, {.addr=0x86fe, .value=0x7e}, {.addr=0x86ff, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x8700, .a=0xb9, .x=0x6e, .y=0x7b, .sp=0xab, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xe4}, {.addr=0x86fe, .value=0x7e}, {.addr=0x86ff, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x86fe, .value=0x7e, .type=IO_READ},
        {.addr=0x86ff, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_037F) {
    const struct CPU_State initial_cpu = {.pc=0xb2ca, .a=0xf5, .x=0x8e, .y=0xbb, .sp=0x80, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xc0}, {.addr=0xb2ca, .value=0x7e}, {.addr=0xb2cb, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xb2cc, .a=0xf5, .x=0x8e, .y=0xbb, .sp=0x80, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xc0}, {.addr=0xb2ca, .value=0x7e}, {.addr=0xb2cb, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2ca, .value=0x7e, .type=IO_READ},
        {.addr=0xb2cb, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0380) {
    const struct CPU_State initial_cpu = {.pc=0xda17, .a=0x99, .x=0xc7, .y=0xc3, .sp=0x12, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xae}, {.addr=0xda17, .value=0x7e}, {.addr=0xda18, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xda19, .a=0x99, .x=0xc7, .y=0xc3, .sp=0x12, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xae}, {.addr=0xda17, .value=0x7e}, {.addr=0xda18, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xda17, .value=0x7e, .type=IO_READ},
        {.addr=0xda18, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb7b5, .a=0x81, .x=0x7a, .y=0x2e, .sp=0x4a, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xeb}, {.addr=0xb7b5, .value=0x7e}, {.addr=0xb7b6, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xb7b7, .a=0x81, .x=0x7a, .y=0x2e, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xeb}, {.addr=0xb7b5, .value=0x7e}, {.addr=0xb7b6, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7b5, .value=0x7e, .type=IO_READ},
        {.addr=0xb7b6, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0382) {
    const struct CPU_State initial_cpu = {.pc=0xbda3, .a=0x49, .x=0x36, .y=0xf4, .sp=0xb5, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x04}, {.addr=0xbda3, .value=0x7e}, {.addr=0xbda4, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xbda5, .a=0x49, .x=0x36, .y=0xf4, .sp=0xb5, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x04}, {.addr=0xbda3, .value=0x7e}, {.addr=0xbda4, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbda3, .value=0x7e, .type=IO_READ},
        {.addr=0xbda4, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0383) {
    const struct CPU_State initial_cpu = {.pc=0x5a83, .a=0xae, .x=0xa8, .y=0x78, .sp=0xfe, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xad}, {.addr=0x5a83, .value=0x7e}, {.addr=0x5a84, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x5a85, .a=0xae, .x=0xa8, .y=0x78, .sp=0xfe, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xad}, {.addr=0x5a83, .value=0x7e}, {.addr=0x5a84, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a83, .value=0x7e, .type=IO_READ},
        {.addr=0x5a84, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0385) {
    const struct CPU_State initial_cpu = {.pc=0xcf86, .a=0xd6, .x=0x17, .y=0x7c, .sp=0x7a, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xe2}, {.addr=0xcf86, .value=0x7e}, {.addr=0xcf87, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xcf88, .a=0xd6, .x=0x17, .y=0x7c, .sp=0x7a, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xe2}, {.addr=0xcf86, .value=0x7e}, {.addr=0xcf87, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf86, .value=0x7e, .type=IO_READ},
        {.addr=0xcf87, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0386) {
    const struct CPU_State initial_cpu = {.pc=0xffc5, .a=0x01, .x=0xdf, .y=0xff, .sp=0x81, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xe2}, {.addr=0xffc5, .value=0x7e}, {.addr=0xffc6, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xffc7, .a=0x01, .x=0xdf, .y=0xff, .sp=0x81, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xe2}, {.addr=0xffc5, .value=0x7e}, {.addr=0xffc6, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xffc5, .value=0x7e, .type=IO_READ},
        {.addr=0xffc6, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0387) {
    const struct CPU_State initial_cpu = {.pc=0xae93, .a=0xfe, .x=0xd4, .y=0xb7, .sp=0x5c, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xa0}, {.addr=0xae93, .value=0x7e}, {.addr=0xae94, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xae95, .a=0xfe, .x=0xd4, .y=0xb7, .sp=0x5c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xa0}, {.addr=0xae93, .value=0x7e}, {.addr=0xae94, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xae93, .value=0x7e, .type=IO_READ},
        {.addr=0xae94, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0388) {
    const struct CPU_State initial_cpu = {.pc=0x6db6, .a=0x2b, .x=0x19, .y=0xd6, .sp=0x7b, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xd0}, {.addr=0x6db6, .value=0x7e}, {.addr=0x6db7, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x6db8, .a=0x2b, .x=0x19, .y=0xd6, .sp=0x7b, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xd0}, {.addr=0x6db6, .value=0x7e}, {.addr=0x6db7, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x6db6, .value=0x7e, .type=IO_READ},
        {.addr=0x6db7, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038A) {
    const struct CPU_State initial_cpu = {.pc=0x5ad1, .a=0xa9, .x=0x89, .y=0xa6, .sp=0xcc, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xbf}, {.addr=0x5ad1, .value=0x7e}, {.addr=0x5ad2, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x5ad3, .a=0xa9, .x=0x89, .y=0xa6, .sp=0xcc, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xbf}, {.addr=0x5ad1, .value=0x7e}, {.addr=0x5ad2, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ad1, .value=0x7e, .type=IO_READ},
        {.addr=0x5ad2, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038B) {
    const struct CPU_State initial_cpu = {.pc=0xa1ed, .a=0x52, .x=0x8c, .y=0x67, .sp=0xa1, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x45}, {.addr=0xa1ed, .value=0x7e}, {.addr=0xa1ee, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xa1ef, .a=0x52, .x=0x8c, .y=0x67, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x45}, {.addr=0xa1ed, .value=0x7e}, {.addr=0xa1ee, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1ed, .value=0x7e, .type=IO_READ},
        {.addr=0xa1ee, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038C) {
    const struct CPU_State initial_cpu = {.pc=0xed94, .a=0x59, .x=0x79, .y=0xda, .sp=0x30, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x89}, {.addr=0xed94, .value=0x7e}, {.addr=0xed95, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xed96, .a=0x59, .x=0x79, .y=0xda, .sp=0x30, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x89}, {.addr=0xed94, .value=0x7e}, {.addr=0xed95, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xed94, .value=0x7e, .type=IO_READ},
        {.addr=0xed95, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038D) {
    const struct CPU_State initial_cpu = {.pc=0xf0c3, .a=0xd1, .x=0x6f, .y=0x84, .sp=0x96, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xcd}, {.addr=0xf0c3, .value=0x7e}, {.addr=0xf0c4, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xf0c5, .a=0xd1, .x=0x6f, .y=0x84, .sp=0x96, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xcd}, {.addr=0xf0c3, .value=0x7e}, {.addr=0xf0c4, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0c3, .value=0x7e, .type=IO_READ},
        {.addr=0xf0c4, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038E) {
    const struct CPU_State initial_cpu = {.pc=0x176c, .a=0xe6, .x=0x73, .y=0x41, .sp=0xa8, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xd9}, {.addr=0x176c, .value=0x7e}, {.addr=0x176d, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x176e, .a=0xe6, .x=0x73, .y=0x41, .sp=0xa8, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xd9}, {.addr=0x176c, .value=0x7e}, {.addr=0x176d, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x176c, .value=0x7e, .type=IO_READ},
        {.addr=0x176d, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_038F) {
    const struct CPU_State initial_cpu = {.pc=0x6b41, .a=0xfa, .x=0x1a, .y=0xc7, .sp=0x8e, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xad}, {.addr=0x6b41, .value=0x7e}, {.addr=0x6b42, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x6b43, .a=0xfa, .x=0x1a, .y=0xc7, .sp=0x8e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xad}, {.addr=0x6b41, .value=0x7e}, {.addr=0x6b42, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b41, .value=0x7e, .type=IO_READ},
        {.addr=0x6b42, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0390) {
    const struct CPU_State initial_cpu = {.pc=0x4c09, .a=0x39, .x=0xe1, .y=0xe0, .sp=0x87, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x98}, {.addr=0x4c09, .value=0x7e}, {.addr=0x4c0a, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x4c0b, .a=0x39, .x=0xe1, .y=0xe0, .sp=0x87, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x98}, {.addr=0x4c09, .value=0x7e}, {.addr=0x4c0a, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c09, .value=0x7e, .type=IO_READ},
        {.addr=0x4c0a, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0391) {
    const struct CPU_State initial_cpu = {.pc=0x47e3, .a=0x64, .x=0xc9, .y=0xf7, .sp=0x32, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xe4}, {.addr=0x47e3, .value=0x7e}, {.addr=0x47e4, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x47e5, .a=0x64, .x=0xc9, .y=0xf7, .sp=0x32, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xe4}, {.addr=0x47e3, .value=0x7e}, {.addr=0x47e4, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x47e3, .value=0x7e, .type=IO_READ},
        {.addr=0x47e4, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0392) {
    const struct CPU_State initial_cpu = {.pc=0x1102, .a=0x15, .x=0xa8, .y=0xf4, .sp=0x33, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x5d}, {.addr=0x1102, .value=0x7e}, {.addr=0x1103, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x1104, .a=0x15, .x=0xa8, .y=0xf4, .sp=0x33, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x5d}, {.addr=0x1102, .value=0x7e}, {.addr=0x1103, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1102, .value=0x7e, .type=IO_READ},
        {.addr=0x1103, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0393) {
    const struct CPU_State initial_cpu = {.pc=0xd6f0, .a=0x86, .x=0xfc, .y=0x11, .sp=0x94, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xe7}, {.addr=0xd6f0, .value=0x7e}, {.addr=0xd6f1, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xd6f2, .a=0x86, .x=0xfc, .y=0x11, .sp=0x94, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xe7}, {.addr=0xd6f0, .value=0x7e}, {.addr=0xd6f1, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6f0, .value=0x7e, .type=IO_READ},
        {.addr=0xd6f1, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0394) {
    const struct CPU_State initial_cpu = {.pc=0x479b, .a=0x49, .x=0x0a, .y=0xb3, .sp=0x0a, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xc6}, {.addr=0x479b, .value=0x7e}, {.addr=0x479c, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x479d, .a=0x49, .x=0x0a, .y=0xb3, .sp=0x0a, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xc6}, {.addr=0x479b, .value=0x7e}, {.addr=0x479c, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x479b, .value=0x7e, .type=IO_READ},
        {.addr=0x479c, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0395) {
    const struct CPU_State initial_cpu = {.pc=0x3dc6, .a=0xa8, .x=0xe0, .y=0x7b, .sp=0xc4, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x0b}, {.addr=0x3dc6, .value=0x7e}, {.addr=0x3dc7, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x3dc8, .a=0xa8, .x=0xe0, .y=0x7b, .sp=0xc4, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x0b}, {.addr=0x3dc6, .value=0x7e}, {.addr=0x3dc7, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dc6, .value=0x7e, .type=IO_READ},
        {.addr=0x3dc7, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0396) {
    const struct CPU_State initial_cpu = {.pc=0x9c21, .a=0xb6, .x=0x35, .y=0x91, .sp=0x34, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xf4}, {.addr=0x9c21, .value=0x7e}, {.addr=0x9c22, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x9c23, .a=0xb6, .x=0x35, .y=0x91, .sp=0x34, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xf4}, {.addr=0x9c21, .value=0x7e}, {.addr=0x9c22, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c21, .value=0x7e, .type=IO_READ},
        {.addr=0x9c22, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0397) {
    const struct CPU_State initial_cpu = {.pc=0xbab6, .a=0xe2, .x=0x1f, .y=0x8f, .sp=0x5b, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x78}, {.addr=0xbab6, .value=0x7e}, {.addr=0xbab7, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xbab8, .a=0xe2, .x=0x1f, .y=0x8f, .sp=0x5b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x78}, {.addr=0xbab6, .value=0x7e}, {.addr=0xbab7, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xbab6, .value=0x7e, .type=IO_READ},
        {.addr=0xbab7, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0398) {
    const struct CPU_State initial_cpu = {.pc=0x1a9f, .a=0x52, .x=0x03, .y=0x6b, .sp=0x32, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xfd}, {.addr=0x1a9f, .value=0x7e}, {.addr=0x1aa0, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x1aa1, .a=0x52, .x=0x03, .y=0x6b, .sp=0x32, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xfd}, {.addr=0x1a9f, .value=0x7e}, {.addr=0x1aa0, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a9f, .value=0x7e, .type=IO_READ},
        {.addr=0x1aa0, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_0399) {
    const struct CPU_State initial_cpu = {.pc=0x7484, .a=0x00, .x=0x5a, .y=0x03, .sp=0xea, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x43}, {.addr=0x7484, .value=0x7e}, {.addr=0x7485, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x7486, .a=0x00, .x=0x5a, .y=0x03, .sp=0xea, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x43}, {.addr=0x7484, .value=0x7e}, {.addr=0x7485, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7484, .value=0x7e, .type=IO_READ},
        {.addr=0x7485, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039A) {
    const struct CPU_State initial_cpu = {.pc=0x7c5c, .a=0xac, .x=0x36, .y=0xb1, .sp=0xe3, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x11}, {.addr=0x7c5c, .value=0x7e}, {.addr=0x7c5d, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x7c5e, .a=0xac, .x=0x36, .y=0xb1, .sp=0xe3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x11}, {.addr=0x7c5c, .value=0x7e}, {.addr=0x7c5d, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c5c, .value=0x7e, .type=IO_READ},
        {.addr=0x7c5d, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039B) {
    const struct CPU_State initial_cpu = {.pc=0x8872, .a=0x4c, .x=0xe5, .y=0xa2, .sp=0x17, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xa1}, {.addr=0x8872, .value=0x7e}, {.addr=0x8873, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x8874, .a=0x4c, .x=0xe5, .y=0xa2, .sp=0x17, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xa1}, {.addr=0x8872, .value=0x7e}, {.addr=0x8873, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x8872, .value=0x7e, .type=IO_READ},
        {.addr=0x8873, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039C) {
    const struct CPU_State initial_cpu = {.pc=0xf01c, .a=0xbf, .x=0xb5, .y=0xc7, .sp=0xf3, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xee}, {.addr=0xf01c, .value=0x7e}, {.addr=0xf01d, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xf01e, .a=0xbf, .x=0xb5, .y=0xc7, .sp=0xf3, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xee}, {.addr=0xf01c, .value=0x7e}, {.addr=0xf01d, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf01c, .value=0x7e, .type=IO_READ},
        {.addr=0xf01d, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039D) {
    const struct CPU_State initial_cpu = {.pc=0xfd13, .a=0x7b, .x=0x7b, .y=0xae, .sp=0x40, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xfc}, {.addr=0xfd13, .value=0x7e}, {.addr=0xfd14, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xfd15, .a=0x7b, .x=0x7b, .y=0xae, .sp=0x40, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xfc}, {.addr=0xfd13, .value=0x7e}, {.addr=0xfd14, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd13, .value=0x7e, .type=IO_READ},
        {.addr=0xfd14, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039E) {
    const struct CPU_State initial_cpu = {.pc=0x62fd, .a=0xda, .x=0xb8, .y=0x25, .sp=0x55, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xf3}, {.addr=0x62fd, .value=0x7e}, {.addr=0x62fe, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x62ff, .a=0xda, .x=0xb8, .y=0x25, .sp=0x55, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xf3}, {.addr=0x62fd, .value=0x7e}, {.addr=0x62fe, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x62fd, .value=0x7e, .type=IO_READ},
        {.addr=0x62fe, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_039F) {
    const struct CPU_State initial_cpu = {.pc=0x4799, .a=0x77, .x=0xc6, .y=0x1d, .sp=0x6a, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x9f}, {.addr=0x4799, .value=0x7e}, {.addr=0x479a, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x479b, .a=0x77, .x=0xc6, .y=0x1d, .sp=0x6a, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x9f}, {.addr=0x4799, .value=0x7e}, {.addr=0x479a, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4799, .value=0x7e, .type=IO_READ},
        {.addr=0x479a, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x2044, .a=0x42, .x=0x21, .y=0xcc, .sp=0x41, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x03}, {.addr=0x2044, .value=0x7e}, {.addr=0x2045, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x2046, .a=0x42, .x=0x21, .y=0xcc, .sp=0x41, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x03}, {.addr=0x2044, .value=0x7e}, {.addr=0x2045, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2044, .value=0x7e, .type=IO_READ},
        {.addr=0x2045, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x2215, .a=0xf1, .x=0x66, .y=0x26, .sp=0xac, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x03}, {.addr=0x2215, .value=0x7e}, {.addr=0x2216, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x2217, .a=0xf1, .x=0x66, .y=0x26, .sp=0xac, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x03}, {.addr=0x2215, .value=0x7e}, {.addr=0x2216, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x2215, .value=0x7e, .type=IO_READ},
        {.addr=0x2216, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfdf3, .a=0x4f, .x=0x8f, .y=0xde, .sp=0x43, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x87}, {.addr=0xfdf3, .value=0x7e}, {.addr=0xfdf4, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xfdf5, .a=0x4f, .x=0x8f, .y=0xde, .sp=0x43, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x87}, {.addr=0xfdf3, .value=0x7e}, {.addr=0xfdf4, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdf3, .value=0x7e, .type=IO_READ},
        {.addr=0xfdf4, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x90fb, .a=0x09, .x=0x29, .y=0x86, .sp=0x57, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xc0}, {.addr=0x90fb, .value=0x7e}, {.addr=0x90fc, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x90fd, .a=0x09, .x=0x29, .y=0x86, .sp=0x57, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xc0}, {.addr=0x90fb, .value=0x7e}, {.addr=0x90fc, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x90fb, .value=0x7e, .type=IO_READ},
        {.addr=0x90fc, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x45f2, .a=0xe3, .x=0x3e, .y=0x60, .sp=0x8a, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x44}, {.addr=0x45f2, .value=0x7e}, {.addr=0x45f3, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x45f4, .a=0xe3, .x=0x3e, .y=0x60, .sp=0x8a, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x44}, {.addr=0x45f2, .value=0x7e}, {.addr=0x45f3, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x45f2, .value=0x7e, .type=IO_READ},
        {.addr=0x45f3, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x3752, .a=0x34, .x=0x6c, .y=0xd7, .sp=0x00, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x9c}, {.addr=0x3752, .value=0x7e}, {.addr=0x3753, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x3754, .a=0x34, .x=0x6c, .y=0xd7, .sp=0x00, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x9c}, {.addr=0x3752, .value=0x7e}, {.addr=0x3753, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x3752, .value=0x7e, .type=IO_READ},
        {.addr=0x3753, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x1b6a, .a=0x87, .x=0xda, .y=0x3a, .sp=0x4e, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xfb}, {.addr=0x1b6a, .value=0x7e}, {.addr=0x1b6b, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x1b6c, .a=0x87, .x=0xda, .y=0x3a, .sp=0x4e, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xfb}, {.addr=0x1b6a, .value=0x7e}, {.addr=0x1b6b, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b6a, .value=0x7e, .type=IO_READ},
        {.addr=0x1b6b, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x7f1f, .a=0x23, .x=0xb6, .y=0xda, .sp=0xbb, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x07}, {.addr=0x7f1f, .value=0x7e}, {.addr=0x7f20, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x7f21, .a=0x23, .x=0xb6, .y=0xda, .sp=0xbb, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x07}, {.addr=0x7f1f, .value=0x7e}, {.addr=0x7f20, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f1f, .value=0x7e, .type=IO_READ},
        {.addr=0x7f20, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x6335, .a=0x33, .x=0xb8, .y=0xd5, .sp=0x7a, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xb8}, {.addr=0x6335, .value=0x7e}, {.addr=0x6336, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x6337, .a=0x33, .x=0xb8, .y=0xd5, .sp=0x7a, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xb8}, {.addr=0x6335, .value=0x7e}, {.addr=0x6336, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6335, .value=0x7e, .type=IO_READ},
        {.addr=0x6336, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8a3b, .a=0xa3, .x=0x59, .y=0xf1, .sp=0x5b, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x27}, {.addr=0x8a3b, .value=0x7e}, {.addr=0x8a3c, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x8a3d, .a=0xa3, .x=0x59, .y=0xf1, .sp=0x5b, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x27}, {.addr=0x8a3b, .value=0x7e}, {.addr=0x8a3c, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a3b, .value=0x7e, .type=IO_READ},
        {.addr=0x8a3c, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x55dd, .a=0xeb, .x=0x26, .y=0x27, .sp=0x67, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x2c}, {.addr=0x55dd, .value=0x7e}, {.addr=0x55de, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x55df, .a=0xeb, .x=0x26, .y=0x27, .sp=0x67, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x2c}, {.addr=0x55dd, .value=0x7e}, {.addr=0x55de, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x55dd, .value=0x7e, .type=IO_READ},
        {.addr=0x55de, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xb690, .a=0xd0, .x=0x50, .y=0xbd, .sp=0xb1, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x76}, {.addr=0xb690, .value=0x7e}, {.addr=0xb691, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xb692, .a=0xd0, .x=0x50, .y=0xbd, .sp=0xb1, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x76}, {.addr=0xb690, .value=0x7e}, {.addr=0xb691, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xb690, .value=0x7e, .type=IO_READ},
        {.addr=0xb691, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x164c, .a=0x70, .x=0x4b, .y=0x64, .sp=0x4c, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xcb}, {.addr=0x164c, .value=0x7e}, {.addr=0x164d, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x164e, .a=0x70, .x=0x4b, .y=0x64, .sp=0x4c, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xcb}, {.addr=0x164c, .value=0x7e}, {.addr=0x164d, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x164c, .value=0x7e, .type=IO_READ},
        {.addr=0x164d, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x04d5, .a=0x2a, .x=0x49, .y=0xde, .sp=0x30, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x76}, {.addr=0x04d5, .value=0x7e}, {.addr=0x04d6, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x04d7, .a=0x2a, .x=0x49, .y=0xde, .sp=0x30, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x76}, {.addr=0x04d5, .value=0x7e}, {.addr=0x04d6, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x04d5, .value=0x7e, .type=IO_READ},
        {.addr=0x04d6, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3dc1, .a=0x9e, .x=0xf2, .y=0xdf, .sp=0xb2, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0xbd}, {.addr=0x3dc1, .value=0x7e}, {.addr=0x3dc2, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x3dc3, .a=0x9e, .x=0xf2, .y=0xdf, .sp=0xb2, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0xbd}, {.addr=0x3dc1, .value=0x7e}, {.addr=0x3dc2, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dc1, .value=0x7e, .type=IO_READ},
        {.addr=0x3dc2, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x8e45, .a=0x0f, .x=0xbc, .y=0x45, .sp=0x6c, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x1f}, {.addr=0x8e45, .value=0x7e}, {.addr=0x8e46, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x8e47, .a=0x0f, .x=0xbc, .y=0x45, .sp=0x6c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x1f}, {.addr=0x8e45, .value=0x7e}, {.addr=0x8e46, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e45, .value=0x7e, .type=IO_READ},
        {.addr=0x8e46, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xe8ff, .a=0x0e, .x=0x3b, .y=0x0f, .sp=0x0d, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x42}, {.addr=0xe8ff, .value=0x7e}, {.addr=0xe900, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xe901, .a=0x0e, .x=0x3b, .y=0x0f, .sp=0x0d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x42}, {.addr=0xe8ff, .value=0x7e}, {.addr=0xe900, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8ff, .value=0x7e, .type=IO_READ},
        {.addr=0xe900, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5b62, .a=0x1f, .x=0xd5, .y=0xe1, .sp=0x23, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xc0}, {.addr=0x5b62, .value=0x7e}, {.addr=0x5b63, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x5b64, .a=0x1f, .x=0xd5, .y=0xe1, .sp=0x23, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xc0}, {.addr=0x5b62, .value=0x7e}, {.addr=0x5b63, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b62, .value=0x7e, .type=IO_READ},
        {.addr=0x5b63, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x1ed2, .a=0xa6, .x=0x0b, .y=0x86, .sp=0xdf, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x09}, {.addr=0x1ed2, .value=0x7e}, {.addr=0x1ed3, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x1ed4, .a=0xa6, .x=0x0b, .y=0x86, .sp=0xdf, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x09}, {.addr=0x1ed2, .value=0x7e}, {.addr=0x1ed3, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ed2, .value=0x7e, .type=IO_READ},
        {.addr=0x1ed3, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xde5d, .a=0xfb, .x=0x5c, .y=0x5c, .sp=0x89, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xb5}, {.addr=0xde5d, .value=0x7e}, {.addr=0xde5e, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xde5f, .a=0xfb, .x=0x5c, .y=0x5c, .sp=0x89, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xb5}, {.addr=0xde5d, .value=0x7e}, {.addr=0xde5e, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xde5d, .value=0x7e, .type=IO_READ},
        {.addr=0xde5e, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x225a, .a=0x47, .x=0xd7, .y=0xc8, .sp=0xa0, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xa7}, {.addr=0x225a, .value=0x7e}, {.addr=0x225b, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x225c, .a=0x47, .x=0xd7, .y=0xc8, .sp=0xa0, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xa7}, {.addr=0x225a, .value=0x7e}, {.addr=0x225b, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x225a, .value=0x7e, .type=IO_READ},
        {.addr=0x225b, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1881, .a=0xdf, .x=0x42, .y=0x92, .sp=0xe2, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xba}, {.addr=0x1881, .value=0x7e}, {.addr=0x1882, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x1883, .a=0xdf, .x=0x42, .y=0x92, .sp=0xe2, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xba}, {.addr=0x1881, .value=0x7e}, {.addr=0x1882, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x1881, .value=0x7e, .type=IO_READ},
        {.addr=0x1882, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x62d7, .a=0x0e, .x=0x45, .y=0x15, .sp=0xc3, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xe9}, {.addr=0x62d7, .value=0x7e}, {.addr=0x62d8, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x62d9, .a=0x0e, .x=0x45, .y=0x15, .sp=0xc3, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xe9}, {.addr=0x62d7, .value=0x7e}, {.addr=0x62d8, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x62d7, .value=0x7e, .type=IO_READ},
        {.addr=0x62d8, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xb0ef, .a=0x5e, .x=0x1a, .y=0xb5, .sp=0x95, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x12}, {.addr=0xb0ef, .value=0x7e}, {.addr=0xb0f0, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xb0f1, .a=0x5e, .x=0x1a, .y=0xb5, .sp=0x95, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x12}, {.addr=0xb0ef, .value=0x7e}, {.addr=0xb0f0, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0ef, .value=0x7e, .type=IO_READ},
        {.addr=0xb0f0, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xb173, .a=0x68, .x=0xea, .y=0xe1, .sp=0x7a, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x3f}, {.addr=0xb173, .value=0x7e}, {.addr=0xb174, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xb175, .a=0x68, .x=0xea, .y=0xe1, .sp=0x7a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x3f}, {.addr=0xb173, .value=0x7e}, {.addr=0xb174, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb173, .value=0x7e, .type=IO_READ},
        {.addr=0xb174, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xd3b3, .a=0xd4, .x=0x73, .y=0xeb, .sp=0x61, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x6a}, {.addr=0xd3b3, .value=0x7e}, {.addr=0xd3b4, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xd3b5, .a=0xd4, .x=0x73, .y=0xeb, .sp=0x61, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x6a}, {.addr=0xd3b3, .value=0x7e}, {.addr=0xd3b4, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3b3, .value=0x7e, .type=IO_READ},
        {.addr=0xd3b4, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xd418, .a=0x78, .x=0x14, .y=0xc5, .sp=0xd0, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xac}, {.addr=0xd418, .value=0x7e}, {.addr=0xd419, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xd41a, .a=0x78, .x=0x14, .y=0xc5, .sp=0xd0, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xac}, {.addr=0xd418, .value=0x7e}, {.addr=0xd419, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd418, .value=0x7e, .type=IO_READ},
        {.addr=0xd419, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x18a4, .a=0xf0, .x=0x30, .y=0xe7, .sp=0x2c, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x92}, {.addr=0x18a4, .value=0x7e}, {.addr=0x18a5, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x18a6, .a=0xf0, .x=0x30, .y=0xe7, .sp=0x2c, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x92}, {.addr=0x18a4, .value=0x7e}, {.addr=0x18a5, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x18a4, .value=0x7e, .type=IO_READ},
        {.addr=0x18a5, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x5447, .a=0x87, .x=0xe1, .y=0xb3, .sp=0xcd, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x58}, {.addr=0x5447, .value=0x7e}, {.addr=0x5448, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x5449, .a=0x87, .x=0xe1, .y=0xb3, .sp=0xcd, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x58}, {.addr=0x5447, .value=0x7e}, {.addr=0x5448, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x5447, .value=0x7e, .type=IO_READ},
        {.addr=0x5448, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x7ddc, .a=0xb9, .x=0x76, .y=0xa8, .sp=0x18, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xed}, {.addr=0x7ddc, .value=0x7e}, {.addr=0x7ddd, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x7dde, .a=0xb9, .x=0x76, .y=0xa8, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xed}, {.addr=0x7ddc, .value=0x7e}, {.addr=0x7ddd, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ddc, .value=0x7e, .type=IO_READ},
        {.addr=0x7ddd, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xf259, .a=0x54, .x=0x3c, .y=0xc1, .sp=0xed, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x6a}, {.addr=0xf259, .value=0x7e}, {.addr=0xf25a, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xf25b, .a=0x54, .x=0x3c, .y=0xc1, .sp=0xed, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x6a}, {.addr=0xf259, .value=0x7e}, {.addr=0xf25a, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf259, .value=0x7e, .type=IO_READ},
        {.addr=0xf25a, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xd198, .a=0x90, .x=0x6b, .y=0xd9, .sp=0x08, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x61}, {.addr=0xd198, .value=0x7e}, {.addr=0xd199, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xd19a, .a=0x90, .x=0x6b, .y=0xd9, .sp=0x08, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x61}, {.addr=0xd198, .value=0x7e}, {.addr=0xd199, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xd198, .value=0x7e, .type=IO_READ},
        {.addr=0xd199, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xd9b0, .a=0x99, .x=0x69, .y=0xa4, .sp=0x1c, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xdf}, {.addr=0xd9b0, .value=0x7e}, {.addr=0xd9b1, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xd9b2, .a=0x99, .x=0x69, .y=0xa4, .sp=0x1c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xdf}, {.addr=0xd9b0, .value=0x7e}, {.addr=0xd9b1, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9b0, .value=0x7e, .type=IO_READ},
        {.addr=0xd9b1, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xce35, .a=0x1d, .x=0x9d, .y=0xe4, .sp=0xa2, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x5f}, {.addr=0xce35, .value=0x7e}, {.addr=0xce36, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xce37, .a=0x1d, .x=0x9d, .y=0xe4, .sp=0xa2, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x5f}, {.addr=0xce35, .value=0x7e}, {.addr=0xce36, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xce35, .value=0x7e, .type=IO_READ},
        {.addr=0xce36, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x9ed2, .a=0x46, .x=0x3f, .y=0x18, .sp=0xfe, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x7d}, {.addr=0x9ed2, .value=0x7e}, {.addr=0x9ed3, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x9ed4, .a=0x46, .x=0x3f, .y=0x18, .sp=0xfe, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x7d}, {.addr=0x9ed2, .value=0x7e}, {.addr=0x9ed3, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ed2, .value=0x7e, .type=IO_READ},
        {.addr=0x9ed3, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x15e8, .a=0x68, .x=0x5b, .y=0xfc, .sp=0x8e, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x84}, {.addr=0x15e8, .value=0x7e}, {.addr=0x15e9, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x15ea, .a=0x68, .x=0x5b, .y=0xfc, .sp=0x8e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x84}, {.addr=0x15e8, .value=0x7e}, {.addr=0x15e9, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x15e8, .value=0x7e, .type=IO_READ},
        {.addr=0x15e9, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xebfc, .a=0xf7, .x=0x80, .y=0x18, .sp=0xb2, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xcf}, {.addr=0xebfc, .value=0x7e}, {.addr=0xebfd, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xebfe, .a=0xf7, .x=0x80, .y=0x18, .sp=0xb2, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xcf}, {.addr=0xebfc, .value=0x7e}, {.addr=0xebfd, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xebfc, .value=0x7e, .type=IO_READ},
        {.addr=0xebfd, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x142b, .a=0xb9, .x=0xbb, .y=0x4c, .sp=0x02, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x5e}, {.addr=0x142b, .value=0x7e}, {.addr=0x142c, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x142d, .a=0xb9, .x=0xbb, .y=0x4c, .sp=0x02, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x5e}, {.addr=0x142b, .value=0x7e}, {.addr=0x142c, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x142b, .value=0x7e, .type=IO_READ},
        {.addr=0x142c, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x9469, .a=0xd7, .x=0x42, .y=0x89, .sp=0x3f, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x9b}, {.addr=0x9469, .value=0x7e}, {.addr=0x946a, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x946b, .a=0xd7, .x=0x42, .y=0x89, .sp=0x3f, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x9b}, {.addr=0x9469, .value=0x7e}, {.addr=0x946a, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x9469, .value=0x7e, .type=IO_READ},
        {.addr=0x946a, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xe791, .a=0x09, .x=0x2e, .y=0xd1, .sp=0xba, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x75}, {.addr=0xe791, .value=0x7e}, {.addr=0xe792, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xe793, .a=0x09, .x=0x2e, .y=0xd1, .sp=0xba, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x75}, {.addr=0xe791, .value=0x7e}, {.addr=0xe792, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe791, .value=0x7e, .type=IO_READ},
        {.addr=0xe792, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xd6f8, .a=0x8f, .x=0x20, .y=0x18, .sp=0x53, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x51}, {.addr=0xd6f8, .value=0x7e}, {.addr=0xd6f9, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xd6fa, .a=0x8f, .x=0x20, .y=0x18, .sp=0x53, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x51}, {.addr=0xd6f8, .value=0x7e}, {.addr=0xd6f9, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6f8, .value=0x7e, .type=IO_READ},
        {.addr=0xd6f9, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xf0d6, .a=0x10, .x=0x9f, .y=0x36, .sp=0x24, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x25}, {.addr=0xf0d6, .value=0x7e}, {.addr=0xf0d7, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xf0d8, .a=0x10, .x=0x9f, .y=0x36, .sp=0x24, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x25}, {.addr=0xf0d6, .value=0x7e}, {.addr=0xf0d7, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0d6, .value=0x7e, .type=IO_READ},
        {.addr=0xf0d7, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xf75e, .a=0xa8, .x=0x73, .y=0xcb, .sp=0xb2, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xd3}, {.addr=0xf75e, .value=0x7e}, {.addr=0xf75f, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xf760, .a=0xa8, .x=0x73, .y=0xcb, .sp=0xb2, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xd3}, {.addr=0xf75e, .value=0x7e}, {.addr=0xf75f, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xf75e, .value=0x7e, .type=IO_READ},
        {.addr=0xf75f, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xb54b, .a=0xa2, .x=0xc9, .y=0x8c, .sp=0x98, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xc0}, {.addr=0xb54b, .value=0x7e}, {.addr=0xb54c, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xb54d, .a=0xa2, .x=0xc9, .y=0x8c, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xc0}, {.addr=0xb54b, .value=0x7e}, {.addr=0xb54c, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xb54b, .value=0x7e, .type=IO_READ},
        {.addr=0xb54c, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x594f, .a=0xfa, .x=0x4a, .y=0xae, .sp=0x34, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x95}, {.addr=0x594f, .value=0x7e}, {.addr=0x5950, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x5951, .a=0xfa, .x=0x4a, .y=0xae, .sp=0x34, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x95}, {.addr=0x594f, .value=0x7e}, {.addr=0x5950, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x594f, .value=0x7e, .type=IO_READ},
        {.addr=0x5950, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x89e0, .a=0x7c, .x=0x0f, .y=0x5e, .sp=0x1a, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0xac}, {.addr=0x89e0, .value=0x7e}, {.addr=0x89e1, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x89e2, .a=0x7c, .x=0x0f, .y=0x5e, .sp=0x1a, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0xac}, {.addr=0x89e0, .value=0x7e}, {.addr=0x89e1, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x89e0, .value=0x7e, .type=IO_READ},
        {.addr=0x89e1, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xe2b1, .a=0x68, .x=0xa7, .y=0x54, .sp=0xbd, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x25}, {.addr=0xe2b1, .value=0x7e}, {.addr=0xe2b2, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xe2b3, .a=0x68, .x=0xa7, .y=0x54, .sp=0xbd, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x25}, {.addr=0xe2b1, .value=0x7e}, {.addr=0xe2b2, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2b1, .value=0x7e, .type=IO_READ},
        {.addr=0xe2b2, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x4f10, .a=0xd2, .x=0x42, .y=0xcf, .sp=0x99, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x55}, {.addr=0x4f10, .value=0x7e}, {.addr=0x4f11, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x4f12, .a=0xd2, .x=0x42, .y=0xcf, .sp=0x99, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x55}, {.addr=0x4f10, .value=0x7e}, {.addr=0x4f11, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f10, .value=0x7e, .type=IO_READ},
        {.addr=0x4f11, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x016b, .a=0xf1, .x=0xb2, .y=0x42, .sp=0xcf, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x5b}, {.addr=0x016b, .value=0x7e}, {.addr=0x016c, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x016d, .a=0xf1, .x=0xb2, .y=0x42, .sp=0xcf, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x5b}, {.addr=0x016b, .value=0x7e}, {.addr=0x016c, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x016b, .value=0x7e, .type=IO_READ},
        {.addr=0x016c, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xe5dc, .a=0xc7, .x=0xde, .y=0xfe, .sp=0x04, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x8b}, {.addr=0xe5dc, .value=0x7e}, {.addr=0xe5dd, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xe5de, .a=0xc7, .x=0xde, .y=0xfe, .sp=0x04, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x8b}, {.addr=0xe5dc, .value=0x7e}, {.addr=0xe5dd, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5dc, .value=0x7e, .type=IO_READ},
        {.addr=0xe5dd, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0x99, .x=0xef, .y=0x39, .sp=0x87, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x34}, {.addr=0x54c4, .value=0x7e}, {.addr=0x54c5, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x54c6, .a=0x99, .x=0xef, .y=0x39, .sp=0x87, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x34}, {.addr=0x54c4, .value=0x7e}, {.addr=0x54c5, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0x7e, .type=IO_READ},
        {.addr=0x54c5, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xe646, .a=0xdb, .x=0x72, .y=0xb6, .sp=0xe3, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xcb}, {.addr=0xe646, .value=0x7e}, {.addr=0xe647, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xe648, .a=0xdb, .x=0x72, .y=0xb6, .sp=0xe3, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xcb}, {.addr=0xe646, .value=0x7e}, {.addr=0xe647, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xe646, .value=0x7e, .type=IO_READ},
        {.addr=0xe647, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x3749, .a=0xbe, .x=0xb9, .y=0xff, .sp=0x7f, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x70}, {.addr=0x3749, .value=0x7e}, {.addr=0x374a, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x374b, .a=0xbe, .x=0xb9, .y=0xff, .sp=0x7f, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x70}, {.addr=0x3749, .value=0x7e}, {.addr=0x374a, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3749, .value=0x7e, .type=IO_READ},
        {.addr=0x374a, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xb57c, .a=0xbb, .x=0x2d, .y=0xb6, .sp=0x17, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x92}, {.addr=0xb57c, .value=0x7e}, {.addr=0xb57d, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xb57e, .a=0xbb, .x=0x2d, .y=0xb6, .sp=0x17, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x92}, {.addr=0xb57c, .value=0x7e}, {.addr=0xb57d, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xb57c, .value=0x7e, .type=IO_READ},
        {.addr=0xb57d, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x3ca9, .a=0x1e, .x=0x84, .y=0xfb, .sp=0x41, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xbb}, {.addr=0x3ca9, .value=0x7e}, {.addr=0x3caa, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x3cab, .a=0x1e, .x=0x84, .y=0xfb, .sp=0x41, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xbb}, {.addr=0x3ca9, .value=0x7e}, {.addr=0x3caa, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca9, .value=0x7e, .type=IO_READ},
        {.addr=0x3caa, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xef1b, .a=0x1c, .x=0xd4, .y=0x78, .sp=0x1b, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x9a}, {.addr=0xef1b, .value=0x7e}, {.addr=0xef1c, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xef1d, .a=0x1c, .x=0xd4, .y=0x78, .sp=0x1b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x9a}, {.addr=0xef1b, .value=0x7e}, {.addr=0xef1c, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xef1b, .value=0x7e, .type=IO_READ},
        {.addr=0xef1c, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x0c24, .a=0xe8, .x=0xc6, .y=0x12, .sp=0x5b, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xbe}, {.addr=0x0c24, .value=0x7e}, {.addr=0x0c25, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x0c26, .a=0xe8, .x=0xc6, .y=0x12, .sp=0x5b, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xbe}, {.addr=0x0c24, .value=0x7e}, {.addr=0x0c25, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c24, .value=0x7e, .type=IO_READ},
        {.addr=0x0c25, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x244a, .a=0xde, .x=0x2d, .y=0x34, .sp=0x8c, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xf9}, {.addr=0x244a, .value=0x7e}, {.addr=0x244b, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x244c, .a=0xde, .x=0x2d, .y=0x34, .sp=0x8c, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xf9}, {.addr=0x244a, .value=0x7e}, {.addr=0x244b, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x244a, .value=0x7e, .type=IO_READ},
        {.addr=0x244b, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x90af, .a=0xd4, .x=0x5d, .y=0x09, .sp=0x09, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x35}, {.addr=0x90af, .value=0x7e}, {.addr=0x90b0, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x90b1, .a=0xd4, .x=0x5d, .y=0x09, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x35}, {.addr=0x90af, .value=0x7e}, {.addr=0x90b0, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x90af, .value=0x7e, .type=IO_READ},
        {.addr=0x90b0, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xf861, .a=0x6c, .x=0xbe, .y=0x5a, .sp=0x3d, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xa8}, {.addr=0xf861, .value=0x7e}, {.addr=0xf862, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xf863, .a=0x6c, .x=0xbe, .y=0x5a, .sp=0x3d, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xa8}, {.addr=0xf861, .value=0x7e}, {.addr=0xf862, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xf861, .value=0x7e, .type=IO_READ},
        {.addr=0xf862, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xea60, .a=0x63, .x=0x90, .y=0x6d, .sp=0xaa, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xa5}, {.addr=0xea60, .value=0x7e}, {.addr=0xea61, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xea62, .a=0x63, .x=0x90, .y=0x6d, .sp=0xaa, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xa5}, {.addr=0xea60, .value=0x7e}, {.addr=0xea61, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xea60, .value=0x7e, .type=IO_READ},
        {.addr=0xea61, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb57d, .a=0xfe, .x=0xf9, .y=0x3e, .sp=0x45, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x6c}, {.addr=0xb57d, .value=0x7e}, {.addr=0xb57e, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xb57f, .a=0xfe, .x=0xf9, .y=0x3e, .sp=0x45, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x6c}, {.addr=0xb57d, .value=0x7e}, {.addr=0xb57e, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xb57d, .value=0x7e, .type=IO_READ},
        {.addr=0xb57e, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xa2ae, .a=0x84, .x=0x4e, .y=0x0f, .sp=0x56, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x77}, {.addr=0xa2ae, .value=0x7e}, {.addr=0xa2af, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xa2b0, .a=0x84, .x=0x4e, .y=0x0f, .sp=0x56, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x77}, {.addr=0xa2ae, .value=0x7e}, {.addr=0xa2af, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2ae, .value=0x7e, .type=IO_READ},
        {.addr=0xa2af, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xa222, .a=0x21, .x=0xdc, .y=0x73, .sp=0x2e, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xbe}, {.addr=0xa222, .value=0x7e}, {.addr=0xa223, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xa224, .a=0x21, .x=0xdc, .y=0x73, .sp=0x2e, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xbe}, {.addr=0xa222, .value=0x7e}, {.addr=0xa223, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa222, .value=0x7e, .type=IO_READ},
        {.addr=0xa223, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x7188, .a=0x05, .x=0x43, .y=0xbc, .sp=0x88, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xf5}, {.addr=0x7188, .value=0x7e}, {.addr=0x7189, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x718a, .a=0x05, .x=0x43, .y=0xbc, .sp=0x88, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xf5}, {.addr=0x7188, .value=0x7e}, {.addr=0x7189, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7188, .value=0x7e, .type=IO_READ},
        {.addr=0x7189, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x0228, .a=0x60, .x=0xc4, .y=0x92, .sp=0xcf, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x34}, {.addr=0x0228, .value=0x7e}, {.addr=0x0229, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x022a, .a=0x60, .x=0xc4, .y=0x92, .sp=0xcf, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x34}, {.addr=0x0228, .value=0x7e}, {.addr=0x0229, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0228, .value=0x7e, .type=IO_READ},
        {.addr=0x0229, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7dcf, .a=0x3b, .x=0xea, .y=0x1b, .sp=0x63, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xa4}, {.addr=0x7dcf, .value=0x7e}, {.addr=0x7dd0, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x7dd1, .a=0x3b, .x=0xea, .y=0x1b, .sp=0x63, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xa4}, {.addr=0x7dcf, .value=0x7e}, {.addr=0x7dd0, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dcf, .value=0x7e, .type=IO_READ},
        {.addr=0x7dd0, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x9aaa, .a=0xf4, .x=0x5d, .y=0x2c, .sp=0x33, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x02}, {.addr=0x9aaa, .value=0x7e}, {.addr=0x9aab, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x9aac, .a=0xf4, .x=0x5d, .y=0x2c, .sp=0x33, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x02}, {.addr=0x9aaa, .value=0x7e}, {.addr=0x9aab, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aaa, .value=0x7e, .type=IO_READ},
        {.addr=0x9aab, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xf83c, .a=0x30, .x=0x80, .y=0x0e, .sp=0x65, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x65}, {.addr=0xf83c, .value=0x7e}, {.addr=0xf83d, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xf83e, .a=0x30, .x=0x80, .y=0x0e, .sp=0x65, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x65}, {.addr=0xf83c, .value=0x7e}, {.addr=0xf83d, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf83c, .value=0x7e, .type=IO_READ},
        {.addr=0xf83d, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7E, _7E_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xdfe0, .a=0x38, .x=0xba, .y=0x93, .sp=0x85, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x8e}, {.addr=0xdfe0, .value=0x7e}, {.addr=0xdfe1, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xdfe2, .a=0x38, .x=0xba, .y=0x93, .sp=0x85, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x8e}, {.addr=0xdfe0, .value=0x7e}, {.addr=0xdfe1, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfe0, .value=0x7e, .type=IO_READ},
        {.addr=0xdfe1, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7E 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
