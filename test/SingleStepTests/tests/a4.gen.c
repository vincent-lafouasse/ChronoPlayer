#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_A4, _A4_0000) {
    const struct CPU_State initial_cpu = {.pc=0x8120, .a=0x76, .x=0x3a, .y=0x5a, .sp=0xdb, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x0c}, {.addr=0x8120, .value=0xa4}, {.addr=0x8121, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x8122, .a=0x69, .x=0x3a, .y=0x5a, .sp=0xdb, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x0c}, {.addr=0x8120, .value=0xa4}, {.addr=0x8121, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x8120, .value=0xa4, .type=IO_READ},
        {.addr=0x8121, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0001) {
    const struct CPU_State initial_cpu = {.pc=0xf08b, .a=0x53, .x=0x70, .y=0x16, .sp=0xff, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x36}, {.addr=0xf08b, .value=0xa4}, {.addr=0xf08c, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xf08d, .a=0x1d, .x=0x70, .y=0x16, .sp=0xff, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x36}, {.addr=0xf08b, .value=0xa4}, {.addr=0xf08c, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xf08b, .value=0xa4, .type=IO_READ},
        {.addr=0xf08c, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0002) {
    const struct CPU_State initial_cpu = {.pc=0x186f, .a=0xf5, .x=0xde, .y=0x5d, .sp=0x8c, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x87}, {.addr=0x186f, .value=0xa4}, {.addr=0x1870, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x1871, .a=0x6d, .x=0xde, .y=0x5d, .sp=0x8c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x87}, {.addr=0x186f, .value=0xa4}, {.addr=0x1870, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x186f, .value=0xa4, .type=IO_READ},
        {.addr=0x1870, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0003) {
    const struct CPU_State initial_cpu = {.pc=0x281c, .a=0x77, .x=0x00, .y=0x74, .sp=0x91, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0xc2}, {.addr=0x281c, .value=0xa4}, {.addr=0x281d, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x281e, .a=0xb5, .x=0x00, .y=0x74, .sp=0x91, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0xc2}, {.addr=0x281c, .value=0xa4}, {.addr=0x281d, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x281c, .value=0xa4, .type=IO_READ},
        {.addr=0x281d, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa497, .a=0x81, .x=0x4e, .y=0xfe, .sp=0x38, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xed}, {.addr=0xa497, .value=0xa4}, {.addr=0xa498, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xa499, .a=0x93, .x=0x4e, .y=0xfe, .sp=0x38, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xed}, {.addr=0xa497, .value=0xa4}, {.addr=0xa498, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa497, .value=0xa4, .type=IO_READ},
        {.addr=0xa498, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0005) {
    const struct CPU_State initial_cpu = {.pc=0xcc06, .a=0xb3, .x=0xec, .y=0xff, .sp=0x81, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xb5}, {.addr=0xcc06, .value=0xa4}, {.addr=0xcc07, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xcc08, .a=0xfd, .x=0xec, .y=0xff, .sp=0x81, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xb5}, {.addr=0xcc06, .value=0xa4}, {.addr=0xcc07, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc06, .value=0xa4, .type=IO_READ},
        {.addr=0xcc07, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1f56, .a=0xcb, .x=0xb1, .y=0x56, .sp=0x44, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x43}, {.addr=0x1f56, .value=0xa4}, {.addr=0x1f57, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x1f58, .a=0x87, .x=0xb1, .y=0x56, .sp=0x44, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x43}, {.addr=0x1f56, .value=0xa4}, {.addr=0x1f57, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f56, .value=0xa4, .type=IO_READ},
        {.addr=0x1f57, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0007) {
    const struct CPU_State initial_cpu = {.pc=0x1661, .a=0xc9, .x=0x2c, .y=0x66, .sp=0x5d, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x93}, {.addr=0x1661, .value=0xa4}, {.addr=0x1662, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x1663, .a=0x35, .x=0x2c, .y=0x66, .sp=0x5d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x93}, {.addr=0x1661, .value=0xa4}, {.addr=0x1662, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1661, .value=0xa4, .type=IO_READ},
        {.addr=0x1662, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0008) {
    const struct CPU_State initial_cpu = {.pc=0xd4e4, .a=0x32, .x=0x2c, .y=0xac, .sp=0xc2, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xc3}, {.addr=0xd4e4, .value=0xa4}, {.addr=0xd4e5, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd4e6, .a=0x6f, .x=0x2c, .y=0xac, .sp=0xc2, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xc3}, {.addr=0xd4e4, .value=0xa4}, {.addr=0xd4e5, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4e4, .value=0xa4, .type=IO_READ},
        {.addr=0xd4e5, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0009) {
    const struct CPU_State initial_cpu = {.pc=0x5ed6, .a=0x54, .x=0xd9, .y=0xd3, .sp=0x7c, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x3f}, {.addr=0x5ed6, .value=0xa4}, {.addr=0x5ed7, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x5ed8, .a=0x14, .x=0xd9, .y=0xd3, .sp=0x7c, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x3f}, {.addr=0x5ed6, .value=0xa4}, {.addr=0x5ed7, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ed6, .value=0xa4, .type=IO_READ},
        {.addr=0x5ed7, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000A) {
    const struct CPU_State initial_cpu = {.pc=0x64c3, .a=0x56, .x=0x2d, .y=0x3d, .sp=0x47, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x51}, {.addr=0x64c3, .value=0xa4}, {.addr=0x64c4, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x64c5, .a=0x05, .x=0x2d, .y=0x3d, .sp=0x47, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x51}, {.addr=0x64c3, .value=0xa4}, {.addr=0x64c4, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x64c3, .value=0xa4, .type=IO_READ},
        {.addr=0x64c4, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000B) {
    const struct CPU_State initial_cpu = {.pc=0xe14d, .a=0x6f, .x=0xae, .y=0x75, .sp=0x29, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x14}, {.addr=0xe14d, .value=0xa4}, {.addr=0xe14e, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xe14f, .a=0x5b, .x=0xae, .y=0x75, .sp=0x29, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x14}, {.addr=0xe14d, .value=0xa4}, {.addr=0xe14e, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xe14d, .value=0xa4, .type=IO_READ},
        {.addr=0xe14e, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000C) {
    const struct CPU_State initial_cpu = {.pc=0xffc6, .a=0xcf, .x=0xd0, .y=0xfc, .sp=0x98, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x12}, {.addr=0xffc6, .value=0xa4}, {.addr=0xffc7, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xffc8, .a=0xbd, .x=0xd0, .y=0xfc, .sp=0x98, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x12}, {.addr=0xffc6, .value=0xa4}, {.addr=0xffc7, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xffc6, .value=0xa4, .type=IO_READ},
        {.addr=0xffc7, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000D) {
    const struct CPU_State initial_cpu = {.pc=0x49ff, .a=0x0a, .x=0xb2, .y=0xdd, .sp=0xc2, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xb2}, {.addr=0x49ff, .value=0xa4}, {.addr=0x4a00, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x4a01, .a=0x58, .x=0xb2, .y=0xdd, .sp=0xc2, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xb2}, {.addr=0x49ff, .value=0xa4}, {.addr=0x4a00, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x49ff, .value=0xa4, .type=IO_READ},
        {.addr=0x4a00, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000E) {
    const struct CPU_State initial_cpu = {.pc=0x8a92, .a=0x2f, .x=0x49, .y=0x8c, .sp=0xab, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x4b}, {.addr=0x8a92, .value=0xa4}, {.addr=0x8a93, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x8a94, .a=0xe4, .x=0x49, .y=0x8c, .sp=0xab, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x4b}, {.addr=0x8a92, .value=0xa4}, {.addr=0x8a93, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a92, .value=0xa4, .type=IO_READ},
        {.addr=0x8a93, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3e46, .a=0x54, .x=0xa5, .y=0xdc, .sp=0xc4, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0xcc}, {.addr=0x3e46, .value=0xa4}, {.addr=0x3e47, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x3e48, .a=0x87, .x=0xa5, .y=0xdc, .sp=0xc4, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0xcc}, {.addr=0x3e46, .value=0xa4}, {.addr=0x3e47, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e46, .value=0xa4, .type=IO_READ},
        {.addr=0x3e47, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0010) {
    const struct CPU_State initial_cpu = {.pc=0x27b1, .a=0x9b, .x=0x07, .y=0x64, .sp=0xd8, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x91}, {.addr=0x27b1, .value=0xa4}, {.addr=0x27b2, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x27b3, .a=0x09, .x=0x07, .y=0x64, .sp=0xd8, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x91}, {.addr=0x27b1, .value=0xa4}, {.addr=0x27b2, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x27b1, .value=0xa4, .type=IO_READ},
        {.addr=0x27b2, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0012) {
    const struct CPU_State initial_cpu = {.pc=0x9d07, .a=0xaf, .x=0x40, .y=0xfc, .sp=0xf9, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x45}, {.addr=0x9d07, .value=0xa4}, {.addr=0x9d08, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x9d09, .a=0x69, .x=0x40, .y=0xfc, .sp=0xf9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x45}, {.addr=0x9d07, .value=0xa4}, {.addr=0x9d08, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d07, .value=0xa4, .type=IO_READ},
        {.addr=0x9d08, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe57c, .a=0x6b, .x=0xf3, .y=0x23, .sp=0xd2, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x2b}, {.addr=0xe57c, .value=0xa4}, {.addr=0xe57d, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xe57e, .a=0x3f, .x=0xf3, .y=0x23, .sp=0xd2, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x2b}, {.addr=0xe57c, .value=0xa4}, {.addr=0xe57d, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xe57c, .value=0xa4, .type=IO_READ},
        {.addr=0xe57d, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0014) {
    const struct CPU_State initial_cpu = {.pc=0x2c74, .a=0x42, .x=0x0e, .y=0x0b, .sp=0x97, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xfe}, {.addr=0x2c74, .value=0xa4}, {.addr=0x2c75, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x2c76, .a=0x43, .x=0x0e, .y=0x0b, .sp=0x97, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xfe}, {.addr=0x2c74, .value=0xa4}, {.addr=0x2c75, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c74, .value=0xa4, .type=IO_READ},
        {.addr=0x2c75, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6bc6, .a=0x7f, .x=0xf5, .y=0x17, .sp=0xff, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xe7}, {.addr=0x6bc6, .value=0xa4}, {.addr=0x6bc7, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x6bc8, .a=0x98, .x=0xf5, .y=0x17, .sp=0xff, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xe7}, {.addr=0x6bc6, .value=0xa4}, {.addr=0x6bc7, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bc6, .value=0xa4, .type=IO_READ},
        {.addr=0x6bc7, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0016) {
    const struct CPU_State initial_cpu = {.pc=0x72f4, .a=0xac, .x=0xe2, .y=0xfd, .sp=0xbc, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x5e}, {.addr=0x72f4, .value=0xa4}, {.addr=0x72f5, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x72f6, .a=0x4e, .x=0xe2, .y=0xfd, .sp=0xbc, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x5e}, {.addr=0x72f4, .value=0xa4}, {.addr=0x72f5, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x72f4, .value=0xa4, .type=IO_READ},
        {.addr=0x72f5, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0017) {
    const struct CPU_State initial_cpu = {.pc=0x6ae4, .a=0x37, .x=0x8b, .y=0x80, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xb3}, {.addr=0x6ae4, .value=0xa4}, {.addr=0x6ae5, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x6ae6, .a=0x83, .x=0x8b, .y=0x80, .sp=0xba, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xb3}, {.addr=0x6ae4, .value=0xa4}, {.addr=0x6ae5, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ae4, .value=0xa4, .type=IO_READ},
        {.addr=0x6ae5, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0018) {
    const struct CPU_State initial_cpu = {.pc=0x3477, .a=0x1a, .x=0xeb, .y=0x52, .sp=0x3f, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0xb6}, {.addr=0x3477, .value=0xa4}, {.addr=0x3478, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x3479, .a=0x64, .x=0xeb, .y=0x52, .sp=0x3f, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0xb6}, {.addr=0x3477, .value=0xa4}, {.addr=0x3478, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3477, .value=0xa4, .type=IO_READ},
        {.addr=0x3478, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0019) {
    const struct CPU_State initial_cpu = {.pc=0xa630, .a=0xb0, .x=0x59, .y=0xad, .sp=0x50, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0xba}, {.addr=0xa630, .value=0xa4}, {.addr=0xa631, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xa632, .a=0xf6, .x=0x59, .y=0xad, .sp=0x50, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0xba}, {.addr=0xa630, .value=0xa4}, {.addr=0xa631, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xa630, .value=0xa4, .type=IO_READ},
        {.addr=0xa631, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_001A) {
    const struct CPU_State initial_cpu = {.pc=0xf7af, .a=0xc5, .x=0x32, .y=0xfe, .sp=0xde, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xda}, {.addr=0xf7af, .value=0xa4}, {.addr=0xf7b0, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xf7b1, .a=0xeb, .x=0x32, .y=0xfe, .sp=0xde, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xda}, {.addr=0xf7af, .value=0xa4}, {.addr=0xf7b0, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7af, .value=0xa4, .type=IO_READ},
        {.addr=0xf7b0, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_001B) {
    const struct CPU_State initial_cpu = {.pc=0xd559, .a=0x71, .x=0x99, .y=0xd3, .sp=0x87, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xf7}, {.addr=0xd559, .value=0xa4}, {.addr=0xd55a, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xd55b, .a=0x79, .x=0x99, .y=0xd3, .sp=0x87, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xf7}, {.addr=0xd559, .value=0xa4}, {.addr=0xd55a, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd559, .value=0xa4, .type=IO_READ},
        {.addr=0xd55a, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4228, .a=0x7b, .x=0x35, .y=0x9d, .sp=0x0c, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x79}, {.addr=0x4228, .value=0xa4}, {.addr=0x4229, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x422a, .a=0x01, .x=0x35, .y=0x9d, .sp=0x0c, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x79}, {.addr=0x4228, .value=0xa4}, {.addr=0x4229, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4228, .value=0xa4, .type=IO_READ},
        {.addr=0x4229, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_001E) {
    const struct CPU_State initial_cpu = {.pc=0x94ac, .a=0xe0, .x=0xcb, .y=0x8d, .sp=0x40, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xf5}, {.addr=0x94ac, .value=0xa4}, {.addr=0x94ad, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x94ae, .a=0xea, .x=0xcb, .y=0x8d, .sp=0x40, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xf5}, {.addr=0x94ac, .value=0xa4}, {.addr=0x94ad, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x94ac, .value=0xa4, .type=IO_READ},
        {.addr=0x94ad, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_001F) {
    const struct CPU_State initial_cpu = {.pc=0x853b, .a=0xb3, .x=0x5e, .y=0xe0, .sp=0xfa, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0xe2}, {.addr=0x853b, .value=0xa4}, {.addr=0x853c, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x853d, .a=0xd1, .x=0x5e, .y=0xe0, .sp=0xfa, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0xe2}, {.addr=0x853b, .value=0xa4}, {.addr=0x853c, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x853b, .value=0xa4, .type=IO_READ},
        {.addr=0x853c, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0020) {
    const struct CPU_State initial_cpu = {.pc=0xf669, .a=0xe8, .x=0xba, .y=0x35, .sp=0x53, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x64}, {.addr=0xf669, .value=0xa4}, {.addr=0xf66a, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xf66b, .a=0x84, .x=0xba, .y=0x35, .sp=0x53, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x64}, {.addr=0xf669, .value=0xa4}, {.addr=0xf66a, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xf669, .value=0xa4, .type=IO_READ},
        {.addr=0xf66a, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3da0, .a=0xa0, .x=0x4b, .y=0xa7, .sp=0x7c, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xc8}, {.addr=0x3da0, .value=0xa4}, {.addr=0x3da1, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x3da2, .a=0xd7, .x=0x4b, .y=0xa7, .sp=0x7c, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xc8}, {.addr=0x3da0, .value=0xa4}, {.addr=0x3da1, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x3da0, .value=0xa4, .type=IO_READ},
        {.addr=0x3da1, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0022) {
    const struct CPU_State initial_cpu = {.pc=0x4e1d, .a=0x7c, .x=0xd8, .y=0x7b, .sp=0x0d, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xd9}, {.addr=0x4e1d, .value=0xa4}, {.addr=0x4e1e, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x4e1f, .a=0xa3, .x=0xd8, .y=0x7b, .sp=0x0d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xd9}, {.addr=0x4e1d, .value=0xa4}, {.addr=0x4e1e, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e1d, .value=0xa4, .type=IO_READ},
        {.addr=0x4e1e, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0023) {
    const struct CPU_State initial_cpu = {.pc=0xc3e3, .a=0x9d, .x=0x1f, .y=0xb5, .sp=0xc6, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x72}, {.addr=0xc3e3, .value=0xa4}, {.addr=0xc3e4, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xc3e5, .a=0x2a, .x=0x1f, .y=0xb5, .sp=0xc6, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x72}, {.addr=0xc3e3, .value=0xa4}, {.addr=0xc3e4, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3e3, .value=0xa4, .type=IO_READ},
        {.addr=0xc3e4, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0024) {
    const struct CPU_State initial_cpu = {.pc=0x10c5, .a=0xd1, .x=0xee, .y=0xcb, .sp=0x69, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0xf9}, {.addr=0x10c5, .value=0xa4}, {.addr=0x10c6, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x10c7, .a=0xd8, .x=0xee, .y=0xcb, .sp=0x69, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0xf9}, {.addr=0x10c5, .value=0xa4}, {.addr=0x10c6, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x10c5, .value=0xa4, .type=IO_READ},
        {.addr=0x10c6, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0025) {
    const struct CPU_State initial_cpu = {.pc=0xadb6, .a=0x59, .x=0x69, .y=0xa7, .sp=0xe3, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xb8}, {.addr=0xadb6, .value=0xa4}, {.addr=0xadb7, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xadb8, .a=0xa0, .x=0x69, .y=0xa7, .sp=0xe3, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xb8}, {.addr=0xadb6, .value=0xa4}, {.addr=0xadb7, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xadb6, .value=0xa4, .type=IO_READ},
        {.addr=0xadb7, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0026) {
    const struct CPU_State initial_cpu = {.pc=0x0f24, .a=0xd1, .x=0x64, .y=0xd0, .sp=0x4c, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xfc}, {.addr=0x0f24, .value=0xa4}, {.addr=0x0f25, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x0f26, .a=0xd4, .x=0x64, .y=0xd0, .sp=0x4c, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xfc}, {.addr=0x0f24, .value=0xa4}, {.addr=0x0f25, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f24, .value=0xa4, .type=IO_READ},
        {.addr=0x0f25, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0027) {
    const struct CPU_State initial_cpu = {.pc=0x7150, .a=0x21, .x=0xd2, .y=0x7c, .sp=0x93, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x81}, {.addr=0x7150, .value=0xa4}, {.addr=0x7151, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x7152, .a=0xa0, .x=0xd2, .y=0x7c, .sp=0x93, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x81}, {.addr=0x7150, .value=0xa4}, {.addr=0x7151, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7150, .value=0xa4, .type=IO_READ},
        {.addr=0x7151, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0028) {
    const struct CPU_State initial_cpu = {.pc=0x1ce0, .a=0xbb, .x=0x88, .y=0x43, .sp=0xa2, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xfd}, {.addr=0x1ce0, .value=0xa4}, {.addr=0x1ce1, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x1ce2, .a=0xbe, .x=0x88, .y=0x43, .sp=0xa2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xfd}, {.addr=0x1ce0, .value=0xa4}, {.addr=0x1ce1, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ce0, .value=0xa4, .type=IO_READ},
        {.addr=0x1ce1, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc429, .a=0x33, .x=0xfd, .y=0x2e, .sp=0xb8, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x46}, {.addr=0xc429, .value=0xa4}, {.addr=0xc42a, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xc42b, .a=0xed, .x=0xfd, .y=0x2e, .sp=0xb8, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x46}, {.addr=0xc429, .value=0xa4}, {.addr=0xc42a, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xc429, .value=0xa4, .type=IO_READ},
        {.addr=0xc42a, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002A) {
    const struct CPU_State initial_cpu = {.pc=0xf952, .a=0x49, .x=0x95, .y=0xd3, .sp=0x8b, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x82}, {.addr=0xf952, .value=0xa4}, {.addr=0xf953, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xf954, .a=0xc7, .x=0x95, .y=0xd3, .sp=0x8b, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x82}, {.addr=0xf952, .value=0xa4}, {.addr=0xf953, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf952, .value=0xa4, .type=IO_READ},
        {.addr=0xf953, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002B) {
    const struct CPU_State initial_cpu = {.pc=0x515b, .a=0xeb, .x=0x76, .y=0x26, .sp=0xf5, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x8f}, {.addr=0x515b, .value=0xa4}, {.addr=0x515c, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x515d, .a=0x5c, .x=0x76, .y=0x26, .sp=0xf5, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x8f}, {.addr=0x515b, .value=0xa4}, {.addr=0x515c, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x515b, .value=0xa4, .type=IO_READ},
        {.addr=0x515c, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002C) {
    const struct CPU_State initial_cpu = {.pc=0x3c85, .a=0x80, .x=0x6c, .y=0xf5, .sp=0x4d, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x12}, {.addr=0x3c85, .value=0xa4}, {.addr=0x3c86, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x3c87, .a=0x6e, .x=0x6c, .y=0xf5, .sp=0x4d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x12}, {.addr=0x3c85, .value=0xa4}, {.addr=0x3c86, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c85, .value=0xa4, .type=IO_READ},
        {.addr=0x3c86, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002D) {
    const struct CPU_State initial_cpu = {.pc=0x2fd3, .a=0xc4, .x=0x98, .y=0xec, .sp=0x54, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xfb}, {.addr=0x2fd3, .value=0xa4}, {.addr=0x2fd4, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x2fd5, .a=0xc8, .x=0x98, .y=0xec, .sp=0x54, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xfb}, {.addr=0x2fd3, .value=0xa4}, {.addr=0x2fd4, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fd3, .value=0xa4, .type=IO_READ},
        {.addr=0x2fd4, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002E) {
    const struct CPU_State initial_cpu = {.pc=0xf745, .a=0x42, .x=0x5d, .y=0xaf, .sp=0x02, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x81}, {.addr=0xf745, .value=0xa4}, {.addr=0xf746, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xf747, .a=0xc1, .x=0x5d, .y=0xaf, .sp=0x02, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x81}, {.addr=0xf745, .value=0xa4}, {.addr=0xf746, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf745, .value=0xa4, .type=IO_READ},
        {.addr=0xf746, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_002F) {
    const struct CPU_State initial_cpu = {.pc=0xf6a4, .a=0x1c, .x=0xc1, .y=0xf3, .sp=0xa7, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x90}, {.addr=0xf6a4, .value=0xa4}, {.addr=0xf6a5, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xf6a6, .a=0x8b, .x=0xc1, .y=0xf3, .sp=0xa7, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x90}, {.addr=0xf6a4, .value=0xa4}, {.addr=0xf6a5, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6a4, .value=0xa4, .type=IO_READ},
        {.addr=0xf6a5, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0030) {
    const struct CPU_State initial_cpu = {.pc=0x7bb9, .a=0xc4, .x=0xd1, .y=0x82, .sp=0x8f, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x87}, {.addr=0x7bb9, .value=0xa4}, {.addr=0x7bba, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x7bbb, .a=0x3c, .x=0xd1, .y=0x82, .sp=0x8f, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x87}, {.addr=0x7bb9, .value=0xa4}, {.addr=0x7bba, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bb9, .value=0xa4, .type=IO_READ},
        {.addr=0x7bba, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0031) {
    const struct CPU_State initial_cpu = {.pc=0x8fc3, .a=0x83, .x=0x26, .y=0x47, .sp=0x41, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x95}, {.addr=0x8fc3, .value=0xa4}, {.addr=0x8fc4, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x8fc5, .a=0xed, .x=0x26, .y=0x47, .sp=0x41, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x95}, {.addr=0x8fc3, .value=0xa4}, {.addr=0x8fc4, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fc3, .value=0xa4, .type=IO_READ},
        {.addr=0x8fc4, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc146, .a=0xf4, .x=0xf5, .y=0xc2, .sp=0x89, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x5c}, {.addr=0xc146, .value=0xa4}, {.addr=0xc147, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xc148, .a=0x98, .x=0xf5, .y=0xc2, .sp=0x89, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x5c}, {.addr=0xc146, .value=0xa4}, {.addr=0xc147, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xc146, .value=0xa4, .type=IO_READ},
        {.addr=0xc147, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0033) {
    const struct CPU_State initial_cpu = {.pc=0xae3e, .a=0x4a, .x=0xfb, .y=0x6b, .sp=0x6e, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x4d}, {.addr=0xae3e, .value=0xa4}, {.addr=0xae3f, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xae40, .a=0xfc, .x=0xfb, .y=0x6b, .sp=0x6e, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x4d}, {.addr=0xae3e, .value=0xa4}, {.addr=0xae3f, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xae3e, .value=0xa4, .type=IO_READ},
        {.addr=0xae3f, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0034) {
    const struct CPU_State initial_cpu = {.pc=0x3e79, .a=0x0a, .x=0x5b, .y=0x94, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x86}, {.addr=0x3e79, .value=0xa4}, {.addr=0x3e7a, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x3e7b, .a=0x83, .x=0x5b, .y=0x94, .sp=0xba, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x86}, {.addr=0x3e79, .value=0xa4}, {.addr=0x3e7a, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e79, .value=0xa4, .type=IO_READ},
        {.addr=0x3e7a, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0035) {
    const struct CPU_State initial_cpu = {.pc=0xed9d, .a=0xdd, .x=0x55, .y=0x2d, .sp=0x7b, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xac}, {.addr=0xed9d, .value=0xa4}, {.addr=0xed9e, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xed9f, .a=0x31, .x=0x55, .y=0x2d, .sp=0x7b, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xac}, {.addr=0xed9d, .value=0xa4}, {.addr=0xed9e, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xed9d, .value=0xa4, .type=IO_READ},
        {.addr=0xed9e, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0036) {
    const struct CPU_State initial_cpu = {.pc=0xb391, .a=0x79, .x=0xff, .y=0x18, .sp=0x6c, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xe0}, {.addr=0xb391, .value=0xa4}, {.addr=0xb392, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xb393, .a=0x98, .x=0xff, .y=0x18, .sp=0x6c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xe0}, {.addr=0xb391, .value=0xa4}, {.addr=0xb392, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb391, .value=0xa4, .type=IO_READ},
        {.addr=0xb392, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0037) {
    const struct CPU_State initial_cpu = {.pc=0x3cad, .a=0xbb, .x=0xcf, .y=0x69, .sp=0x8d, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x1c}, {.addr=0x3cad, .value=0xa4}, {.addr=0x3cae, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x3caf, .a=0x9f, .x=0xcf, .y=0x69, .sp=0x8d, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x1c}, {.addr=0x3cad, .value=0xa4}, {.addr=0x3cae, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cad, .value=0xa4, .type=IO_READ},
        {.addr=0x3cae, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0038) {
    const struct CPU_State initial_cpu = {.pc=0x8c56, .a=0x0e, .x=0x4c, .y=0xaa, .sp=0x44, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x42}, {.addr=0x8c56, .value=0xa4}, {.addr=0x8c57, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x8c58, .a=0xcc, .x=0x4c, .y=0xaa, .sp=0x44, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x42}, {.addr=0x8c56, .value=0xa4}, {.addr=0x8c57, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c56, .value=0xa4, .type=IO_READ},
        {.addr=0x8c57, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0039) {
    const struct CPU_State initial_cpu = {.pc=0x4c41, .a=0x26, .x=0x50, .y=0xb8, .sp=0x4e, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x45}, {.addr=0x4c41, .value=0xa4}, {.addr=0x4c42, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x4c43, .a=0xe1, .x=0x50, .y=0xb8, .sp=0x4e, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x45}, {.addr=0x4c41, .value=0xa4}, {.addr=0x4c42, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c41, .value=0xa4, .type=IO_READ},
        {.addr=0x4c42, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003A) {
    const struct CPU_State initial_cpu = {.pc=0xae95, .a=0xee, .x=0x92, .y=0xd8, .sp=0x5e, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x7b}, {.addr=0xae95, .value=0xa4}, {.addr=0xae96, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xae97, .a=0x72, .x=0x92, .y=0xd8, .sp=0x5e, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x7b}, {.addr=0xae95, .value=0xa4}, {.addr=0xae96, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xae95, .value=0xa4, .type=IO_READ},
        {.addr=0xae96, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003B) {
    const struct CPU_State initial_cpu = {.pc=0x7ed8, .a=0xeb, .x=0x62, .y=0x42, .sp=0xab, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xb1}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x7eda, .a=0x3a, .x=0x62, .y=0x42, .sp=0xab, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xb1}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ed8, .value=0xa4, .type=IO_READ},
        {.addr=0x7ed9, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003C) {
    const struct CPU_State initial_cpu = {.pc=0xa570, .a=0x01, .x=0x82, .y=0x3f, .sp=0xd7, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xd2}, {.addr=0xa570, .value=0xa4}, {.addr=0xa571, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xa572, .a=0x2f, .x=0x82, .y=0x3f, .sp=0xd7, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xd2}, {.addr=0xa570, .value=0xa4}, {.addr=0xa571, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa570, .value=0xa4, .type=IO_READ},
        {.addr=0xa571, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003D) {
    const struct CPU_State initial_cpu = {.pc=0xdb4b, .a=0xd2, .x=0x21, .y=0xca, .sp=0x96, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x0c}, {.addr=0xdb4b, .value=0xa4}, {.addr=0xdb4c, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xdb4d, .a=0xc5, .x=0x21, .y=0xca, .sp=0x96, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x0c}, {.addr=0xdb4b, .value=0xa4}, {.addr=0xdb4c, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb4b, .value=0xa4, .type=IO_READ},
        {.addr=0xdb4c, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003E) {
    const struct CPU_State initial_cpu = {.pc=0x960c, .a=0x11, .x=0x1d, .y=0x14, .sp=0x40, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0xce}, {.addr=0x960c, .value=0xa4}, {.addr=0x960d, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x960e, .a=0x43, .x=0x1d, .y=0x14, .sp=0x40, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0xce}, {.addr=0x960c, .value=0xa4}, {.addr=0x960d, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x960c, .value=0xa4, .type=IO_READ},
        {.addr=0x960d, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_003F) {
    const struct CPU_State initial_cpu = {.pc=0xc1c4, .a=0x9b, .x=0x08, .y=0xea, .sp=0x4f, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xf7}, {.addr=0xc1c4, .value=0xa4}, {.addr=0xc1c5, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xc1c6, .a=0xa3, .x=0x08, .y=0xea, .sp=0x4f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xf7}, {.addr=0xc1c4, .value=0xa4}, {.addr=0xc1c5, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1c4, .value=0xa4, .type=IO_READ},
        {.addr=0xc1c5, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0040) {
    const struct CPU_State initial_cpu = {.pc=0x26ea, .a=0x4d, .x=0xe8, .y=0x25, .sp=0x5e, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x40}, {.addr=0x26ea, .value=0xa4}, {.addr=0x26eb, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x26ec, .a=0x0c, .x=0xe8, .y=0x25, .sp=0x5e, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x40}, {.addr=0x26ea, .value=0xa4}, {.addr=0x26eb, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ea, .value=0xa4, .type=IO_READ},
        {.addr=0x26eb, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6a80, .a=0xb5, .x=0x78, .y=0x04, .sp=0xa7, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x30}, {.addr=0x6a80, .value=0xa4}, {.addr=0x6a81, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x6a82, .a=0x85, .x=0x78, .y=0x04, .sp=0xa7, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x30}, {.addr=0x6a80, .value=0xa4}, {.addr=0x6a81, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a80, .value=0xa4, .type=IO_READ},
        {.addr=0x6a81, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0043) {
    const struct CPU_State initial_cpu = {.pc=0xed7f, .a=0x4b, .x=0xe3, .y=0x83, .sp=0xdd, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xc3}, {.addr=0xed7f, .value=0xa4}, {.addr=0xed80, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xed81, .a=0x87, .x=0xe3, .y=0x83, .sp=0xdd, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xc3}, {.addr=0xed7f, .value=0xa4}, {.addr=0xed80, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xed7f, .value=0xa4, .type=IO_READ},
        {.addr=0xed80, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0044) {
    const struct CPU_State initial_cpu = {.pc=0x4a05, .a=0xa3, .x=0x69, .y=0xe1, .sp=0x0d, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x3e}, {.addr=0x4a05, .value=0xa4}, {.addr=0x4a06, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x4a07, .a=0x64, .x=0x69, .y=0xe1, .sp=0x0d, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x3e}, {.addr=0x4a05, .value=0xa4}, {.addr=0x4a06, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a05, .value=0xa4, .type=IO_READ},
        {.addr=0x4a06, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0045) {
    const struct CPU_State initial_cpu = {.pc=0x1d30, .a=0x97, .x=0x77, .y=0xab, .sp=0x2f, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x4b}, {.addr=0x1d30, .value=0xa4}, {.addr=0x1d31, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x1d32, .a=0x4c, .x=0x77, .y=0xab, .sp=0x2f, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x4b}, {.addr=0x1d30, .value=0xa4}, {.addr=0x1d31, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d30, .value=0xa4, .type=IO_READ},
        {.addr=0x1d31, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0046) {
    const struct CPU_State initial_cpu = {.pc=0xc1bf, .a=0x6f, .x=0x64, .y=0x35, .sp=0x74, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xfb}, {.addr=0xc1bf, .value=0xa4}, {.addr=0xc1c0, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xc1c1, .a=0x73, .x=0x64, .y=0x35, .sp=0x74, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xfb}, {.addr=0xc1bf, .value=0xa4}, {.addr=0xc1c0, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1bf, .value=0xa4, .type=IO_READ},
        {.addr=0xc1c0, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0047) {
    const struct CPU_State initial_cpu = {.pc=0x0042, .a=0x30, .x=0x15, .y=0xd2, .sp=0x62, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xa4}, {.addr=0x0043, .value=0xc4}, {.addr=0x00c4, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x0044, .a=0x60, .x=0x15, .y=0xd2, .sp=0x62, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xa4}, {.addr=0x0043, .value=0xc4}, {.addr=0x00c4, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0042, .value=0xa4, .type=IO_READ},
        {.addr=0x0043, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0048) {
    const struct CPU_State initial_cpu = {.pc=0xeb38, .a=0x9f, .x=0x34, .y=0xd8, .sp=0xca, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xe0}, {.addr=0xeb38, .value=0xa4}, {.addr=0xeb39, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xeb3a, .a=0xbe, .x=0x34, .y=0xd8, .sp=0xca, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xe0}, {.addr=0xeb38, .value=0xa4}, {.addr=0xeb39, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb38, .value=0xa4, .type=IO_READ},
        {.addr=0xeb39, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0049) {
    const struct CPU_State initial_cpu = {.pc=0xe095, .a=0x63, .x=0xce, .y=0xe5, .sp=0xa7, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xe8}, {.addr=0xe095, .value=0xa4}, {.addr=0xe096, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xe097, .a=0x7a, .x=0xce, .y=0xe5, .sp=0xa7, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xe8}, {.addr=0xe095, .value=0xa4}, {.addr=0xe096, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xe095, .value=0xa4, .type=IO_READ},
        {.addr=0xe096, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004A) {
    const struct CPU_State initial_cpu = {.pc=0xd11f, .a=0x7e, .x=0x7c, .y=0x78, .sp=0xe2, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x47}, {.addr=0xd11f, .value=0xa4}, {.addr=0xd120, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xd121, .a=0x36, .x=0x7c, .y=0x78, .sp=0xe2, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x47}, {.addr=0xd11f, .value=0xa4}, {.addr=0xd120, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xd11f, .value=0xa4, .type=IO_READ},
        {.addr=0xd120, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004B) {
    const struct CPU_State initial_cpu = {.pc=0xbd64, .a=0xc8, .x=0x6f, .y=0x84, .sp=0x89, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xa8}, {.addr=0xbd64, .value=0xa4}, {.addr=0xbd65, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xbd66, .a=0x1f, .x=0x6f, .y=0x84, .sp=0x89, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xa8}, {.addr=0xbd64, .value=0xa4}, {.addr=0xbd65, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd64, .value=0xa4, .type=IO_READ},
        {.addr=0xbd65, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004C) {
    const struct CPU_State initial_cpu = {.pc=0xf2ef, .a=0x10, .x=0xbb, .y=0x47, .sp=0x1c, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x1e}, {.addr=0xf2ef, .value=0xa4}, {.addr=0xf2f0, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xf2f1, .a=0xf1, .x=0xbb, .y=0x47, .sp=0x1c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x1e}, {.addr=0xf2ef, .value=0xa4}, {.addr=0xf2f0, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2ef, .value=0xa4, .type=IO_READ},
        {.addr=0xf2f0, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9c66, .a=0xeb, .x=0x27, .y=0x49, .sp=0xa3, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xbf}, {.addr=0x9c66, .value=0xa4}, {.addr=0x9c67, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x9c68, .a=0x2c, .x=0x27, .y=0x49, .sp=0xa3, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xbf}, {.addr=0x9c66, .value=0xa4}, {.addr=0x9c67, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c66, .value=0xa4, .type=IO_READ},
        {.addr=0x9c67, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc889, .a=0x76, .x=0x69, .y=0x6b, .sp=0x10, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xab}, {.addr=0xc889, .value=0xa4}, {.addr=0xc88a, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xc88b, .a=0xcb, .x=0x69, .y=0x6b, .sp=0x10, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xab}, {.addr=0xc889, .value=0xa4}, {.addr=0xc88a, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc889, .value=0xa4, .type=IO_READ},
        {.addr=0xc88a, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_004F) {
    const struct CPU_State initial_cpu = {.pc=0x5644, .a=0x94, .x=0x3e, .y=0x45, .sp=0x06, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x4b}, {.addr=0x5644, .value=0xa4}, {.addr=0x5645, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x5646, .a=0x49, .x=0x3e, .y=0x45, .sp=0x06, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x4b}, {.addr=0x5644, .value=0xa4}, {.addr=0x5645, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x5644, .value=0xa4, .type=IO_READ},
        {.addr=0x5645, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5e3c, .a=0x6e, .x=0x4f, .y=0x2b, .sp=0x33, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xb9}, {.addr=0x5e3c, .value=0xa4}, {.addr=0x5e3d, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x5e3e, .a=0xb5, .x=0x4f, .y=0x2b, .sp=0x33, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xb9}, {.addr=0x5e3c, .value=0xa4}, {.addr=0x5e3d, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e3c, .value=0xa4, .type=IO_READ},
        {.addr=0x5e3d, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0051) {
    const struct CPU_State initial_cpu = {.pc=0xc1d5, .a=0xc8, .x=0xb7, .y=0x96, .sp=0x7a, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xf7}, {.addr=0xc1d5, .value=0xa4}, {.addr=0xc1d6, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xc1d7, .a=0xd0, .x=0xb7, .y=0x96, .sp=0x7a, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xf7}, {.addr=0xc1d5, .value=0xa4}, {.addr=0xc1d6, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d5, .value=0xa4, .type=IO_READ},
        {.addr=0xc1d6, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0052) {
    const struct CPU_State initial_cpu = {.pc=0x6aa7, .a=0x3e, .x=0x64, .y=0xd9, .sp=0x1c, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x10}, {.addr=0x6aa7, .value=0xa4}, {.addr=0x6aa8, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x6aa9, .a=0x2e, .x=0x64, .y=0xd9, .sp=0x1c, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x10}, {.addr=0x6aa7, .value=0xa4}, {.addr=0x6aa8, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x6aa7, .value=0xa4, .type=IO_READ},
        {.addr=0x6aa8, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0053) {
    const struct CPU_State initial_cpu = {.pc=0x3aae, .a=0x09, .x=0xf1, .y=0xac, .sp=0x57, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xb4}, {.addr=0x3aae, .value=0xa4}, {.addr=0x3aaf, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ab0, .a=0x55, .x=0xf1, .y=0xac, .sp=0x57, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xb4}, {.addr=0x3aae, .value=0xa4}, {.addr=0x3aaf, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aae, .value=0xa4, .type=IO_READ},
        {.addr=0x3aaf, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0054) {
    const struct CPU_State initial_cpu = {.pc=0x9101, .a=0x6d, .x=0xeb, .y=0x8b, .sp=0xad, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x27}, {.addr=0x9101, .value=0xa4}, {.addr=0x9102, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x9103, .a=0x45, .x=0xeb, .y=0x8b, .sp=0xad, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x27}, {.addr=0x9101, .value=0xa4}, {.addr=0x9102, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9101, .value=0xa4, .type=IO_READ},
        {.addr=0x9102, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0055) {
    const struct CPU_State initial_cpu = {.pc=0x9b8f, .a=0x24, .x=0xa0, .y=0xc5, .sp=0x69, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x4a}, {.addr=0x9b8f, .value=0xa4}, {.addr=0x9b90, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x9b91, .a=0xda, .x=0xa0, .y=0xc5, .sp=0x69, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x4a}, {.addr=0x9b8f, .value=0xa4}, {.addr=0x9b90, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b8f, .value=0xa4, .type=IO_READ},
        {.addr=0x9b90, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0056) {
    const struct CPU_State initial_cpu = {.pc=0x7932, .a=0x3a, .x=0x97, .y=0xa8, .sp=0x0d, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x40}, {.addr=0x7932, .value=0xa4}, {.addr=0x7933, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x7934, .a=0xf9, .x=0x97, .y=0xa8, .sp=0x0d, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x40}, {.addr=0x7932, .value=0xa4}, {.addr=0x7933, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7932, .value=0xa4, .type=IO_READ},
        {.addr=0x7933, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8d13, .a=0xb2, .x=0x13, .y=0xe3, .sp=0xf0, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xa2}, {.addr=0x8d13, .value=0xa4}, {.addr=0x8d14, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x8d15, .a=0x10, .x=0x13, .y=0xe3, .sp=0xf0, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xa2}, {.addr=0x8d13, .value=0xa4}, {.addr=0x8d14, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d13, .value=0xa4, .type=IO_READ},
        {.addr=0x8d14, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0058) {
    const struct CPU_State initial_cpu = {.pc=0xd0eb, .a=0x25, .x=0xfa, .y=0xc2, .sp=0xe5, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x07}, {.addr=0xd0eb, .value=0xa4}, {.addr=0xd0ec, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xd0ed, .a=0x1e, .x=0xfa, .y=0xc2, .sp=0xe5, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x07}, {.addr=0xd0eb, .value=0xa4}, {.addr=0xd0ec, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0eb, .value=0xa4, .type=IO_READ},
        {.addr=0xd0ec, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0059) {
    const struct CPU_State initial_cpu = {.pc=0x0f89, .a=0x18, .x=0x86, .y=0x12, .sp=0x1a, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x73}, {.addr=0x0f89, .value=0xa4}, {.addr=0x0f8a, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x0f8b, .a=0xa4, .x=0x86, .y=0x12, .sp=0x1a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x73}, {.addr=0x0f89, .value=0xa4}, {.addr=0x0f8a, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f89, .value=0xa4, .type=IO_READ},
        {.addr=0x0f8a, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005A) {
    const struct CPU_State initial_cpu = {.pc=0x155e, .a=0x67, .x=0x9b, .y=0x05, .sp=0x6c, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xd7}, {.addr=0x155e, .value=0xa4}, {.addr=0x155f, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x1560, .a=0x90, .x=0x9b, .y=0x05, .sp=0x6c, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xd7}, {.addr=0x155e, .value=0xa4}, {.addr=0x155f, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x155e, .value=0xa4, .type=IO_READ},
        {.addr=0x155f, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2b51, .a=0xcd, .x=0x57, .y=0xf5, .sp=0xe3, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x19}, {.addr=0x2b51, .value=0xa4}, {.addr=0x2b52, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x2b53, .a=0xb4, .x=0x57, .y=0xf5, .sp=0xe3, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x19}, {.addr=0x2b51, .value=0xa4}, {.addr=0x2b52, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b51, .value=0xa4, .type=IO_READ},
        {.addr=0x2b52, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005C) {
    const struct CPU_State initial_cpu = {.pc=0x13fb, .a=0xc3, .x=0xdf, .y=0x95, .sp=0xe8, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xc2}, {.addr=0x13fb, .value=0xa4}, {.addr=0x13fc, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x13fd, .a=0x00, .x=0xdf, .y=0x95, .sp=0xe8, .status=0x3f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xc2}, {.addr=0x13fb, .value=0xa4}, {.addr=0x13fc, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x13fb, .value=0xa4, .type=IO_READ},
        {.addr=0x13fc, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005D) {
    const struct CPU_State initial_cpu = {.pc=0xa45c, .a=0x8a, .x=0xbc, .y=0x3b, .sp=0x01, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xcf}, {.addr=0xa45c, .value=0xa4}, {.addr=0xa45d, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xa45e, .a=0xbb, .x=0xbc, .y=0x3b, .sp=0x01, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xcf}, {.addr=0xa45c, .value=0xa4}, {.addr=0xa45d, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xa45c, .value=0xa4, .type=IO_READ},
        {.addr=0xa45d, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005E) {
    const struct CPU_State initial_cpu = {.pc=0x044d, .a=0x47, .x=0xbc, .y=0x88, .sp=0x8a, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x8f}, {.addr=0x044d, .value=0xa4}, {.addr=0x044e, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x044f, .a=0xb8, .x=0xbc, .y=0x88, .sp=0x8a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x8f}, {.addr=0x044d, .value=0xa4}, {.addr=0x044e, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x044d, .value=0xa4, .type=IO_READ},
        {.addr=0x044e, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_005F) {
    const struct CPU_State initial_cpu = {.pc=0x6fe4, .a=0xf5, .x=0xea, .y=0xa3, .sp=0x5b, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x8a}, {.addr=0x6fe4, .value=0xa4}, {.addr=0x6fe5, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x6fe6, .a=0x6a, .x=0xea, .y=0xa3, .sp=0x5b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x8a}, {.addr=0x6fe4, .value=0xa4}, {.addr=0x6fe5, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fe4, .value=0xa4, .type=IO_READ},
        {.addr=0x6fe5, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0060) {
    const struct CPU_State initial_cpu = {.pc=0xae2a, .a=0xdd, .x=0x09, .y=0xa0, .sp=0x70, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x87}, {.addr=0xae2a, .value=0xa4}, {.addr=0xae2b, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xae2c, .a=0x56, .x=0x09, .y=0xa0, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x87}, {.addr=0xae2a, .value=0xa4}, {.addr=0xae2b, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xae2a, .value=0xa4, .type=IO_READ},
        {.addr=0xae2b, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0061) {
    const struct CPU_State initial_cpu = {.pc=0x4c5e, .a=0x44, .x=0x46, .y=0xa1, .sp=0x75, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0x15}, {.addr=0x4c5e, .value=0xa4}, {.addr=0x4c5f, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x4c60, .a=0x2e, .x=0x46, .y=0xa1, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0x15}, {.addr=0x4c5e, .value=0xa4}, {.addr=0x4c5f, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c5e, .value=0xa4, .type=IO_READ},
        {.addr=0x4c5f, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4a97, .a=0xc6, .x=0xb9, .y=0xc2, .sp=0x03, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x24}, {.addr=0x4a97, .value=0xa4}, {.addr=0x4a98, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x4a99, .a=0xa1, .x=0xb9, .y=0xc2, .sp=0x03, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x24}, {.addr=0x4a97, .value=0xa4}, {.addr=0x4a98, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a97, .value=0xa4, .type=IO_READ},
        {.addr=0x4a98, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0063) {
    const struct CPU_State initial_cpu = {.pc=0x684a, .a=0x0c, .x=0x27, .y=0x79, .sp=0x4c, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x9f}, {.addr=0x684a, .value=0xa4}, {.addr=0x684b, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x684c, .a=0x6c, .x=0x27, .y=0x79, .sp=0x4c, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x9f}, {.addr=0x684a, .value=0xa4}, {.addr=0x684b, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x684a, .value=0xa4, .type=IO_READ},
        {.addr=0x684b, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0064) {
    const struct CPU_State initial_cpu = {.pc=0x9c19, .a=0xf5, .x=0xfb, .y=0xdc, .sp=0x21, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xae}, {.addr=0x9c19, .value=0xa4}, {.addr=0x9c1a, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x9c1b, .a=0x47, .x=0xfb, .y=0xdc, .sp=0x21, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xae}, {.addr=0x9c19, .value=0xa4}, {.addr=0x9c1a, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c19, .value=0xa4, .type=IO_READ},
        {.addr=0x9c1a, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0065) {
    const struct CPU_State initial_cpu = {.pc=0xf6d1, .a=0x8d, .x=0xf8, .y=0x22, .sp=0xdf, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xd2}, {.addr=0xf6d1, .value=0xa4}, {.addr=0xf6d2, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xf6d3, .a=0xba, .x=0xf8, .y=0x22, .sp=0xdf, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xd2}, {.addr=0xf6d1, .value=0xa4}, {.addr=0xf6d2, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6d1, .value=0xa4, .type=IO_READ},
        {.addr=0xf6d2, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0066) {
    const struct CPU_State initial_cpu = {.pc=0xbfd8, .a=0x54, .x=0xe7, .y=0x8e, .sp=0xfc, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xe1}, {.addr=0xbfd8, .value=0xa4}, {.addr=0xbfd9, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xbfda, .a=0x72, .x=0xe7, .y=0x8e, .sp=0xfc, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xe1}, {.addr=0xbfd8, .value=0xa4}, {.addr=0xbfd9, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfd8, .value=0xa4, .type=IO_READ},
        {.addr=0xbfd9, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0067) {
    const struct CPU_State initial_cpu = {.pc=0x0176, .a=0x62, .x=0x19, .y=0x1f, .sp=0xe0, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x19}, {.addr=0x0176, .value=0xa4}, {.addr=0x0177, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x0178, .a=0x48, .x=0x19, .y=0x1f, .sp=0xe0, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x19}, {.addr=0x0176, .value=0xa4}, {.addr=0x0177, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x0176, .value=0xa4, .type=IO_READ},
        {.addr=0x0177, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd297, .a=0x95, .x=0x1e, .y=0x21, .sp=0xb0, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xe6}, {.addr=0xd297, .value=0xa4}, {.addr=0xd298, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xd299, .a=0xae, .x=0x1e, .y=0x21, .sp=0xb0, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xe6}, {.addr=0xd297, .value=0xa4}, {.addr=0xd298, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd297, .value=0xa4, .type=IO_READ},
        {.addr=0xd298, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0069) {
    const struct CPU_State initial_cpu = {.pc=0x993d, .a=0x54, .x=0xc5, .y=0xfc, .sp=0x36, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xd8}, {.addr=0x993d, .value=0xa4}, {.addr=0x993e, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x993f, .a=0x7b, .x=0xc5, .y=0xfc, .sp=0x36, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xd8}, {.addr=0x993d, .value=0xa4}, {.addr=0x993e, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x993d, .value=0xa4, .type=IO_READ},
        {.addr=0x993e, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2fd2, .a=0x1f, .x=0xb6, .y=0x25, .sp=0x2b, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xff}, {.addr=0x2fd2, .value=0xa4}, {.addr=0x2fd3, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x2fd4, .a=0x20, .x=0xb6, .y=0x25, .sp=0x2b, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xff}, {.addr=0x2fd2, .value=0xa4}, {.addr=0x2fd3, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fd2, .value=0xa4, .type=IO_READ},
        {.addr=0x2fd3, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006B) {
    const struct CPU_State initial_cpu = {.pc=0x97ad, .a=0xf0, .x=0x3a, .y=0xb7, .sp=0x8c, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x63}, {.addr=0x97ad, .value=0xa4}, {.addr=0x97ae, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x97af, .a=0x8c, .x=0x3a, .y=0xb7, .sp=0x8c, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x63}, {.addr=0x97ad, .value=0xa4}, {.addr=0x97ae, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x97ad, .value=0xa4, .type=IO_READ},
        {.addr=0x97ae, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006C) {
    const struct CPU_State initial_cpu = {.pc=0x0877, .a=0x01, .x=0xce, .y=0xc4, .sp=0xe4, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0xf8}, {.addr=0x0877, .value=0xa4}, {.addr=0x0878, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x0879, .a=0x09, .x=0xce, .y=0xc4, .sp=0xe4, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0xf8}, {.addr=0x0877, .value=0xa4}, {.addr=0x0878, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0877, .value=0xa4, .type=IO_READ},
        {.addr=0x0878, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006D) {
    const struct CPU_State initial_cpu = {.pc=0xa550, .a=0x71, .x=0x83, .y=0xa7, .sp=0x28, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x8e}, {.addr=0xa550, .value=0xa4}, {.addr=0xa551, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xa552, .a=0xe2, .x=0x83, .y=0xa7, .sp=0x28, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x8e}, {.addr=0xa550, .value=0xa4}, {.addr=0xa551, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xa550, .value=0xa4, .type=IO_READ},
        {.addr=0xa551, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006E) {
    const struct CPU_State initial_cpu = {.pc=0x2bab, .a=0xed, .x=0x82, .y=0x26, .sp=0x89, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xf0}, {.addr=0x2bab, .value=0xa4}, {.addr=0x2bac, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x2bad, .a=0xfd, .x=0x82, .y=0x26, .sp=0x89, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xf0}, {.addr=0x2bab, .value=0xa4}, {.addr=0x2bac, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bab, .value=0xa4, .type=IO_READ},
        {.addr=0x2bac, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_006F) {
    const struct CPU_State initial_cpu = {.pc=0x18a8, .a=0x15, .x=0x3a, .y=0x4d, .sp=0x87, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xd9}, {.addr=0x18a8, .value=0xa4}, {.addr=0x18a9, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x18aa, .a=0x3b, .x=0x3a, .y=0x4d, .sp=0x87, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xd9}, {.addr=0x18a8, .value=0xa4}, {.addr=0x18a9, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x18a8, .value=0xa4, .type=IO_READ},
        {.addr=0x18a9, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6cbf, .a=0xa3, .x=0xcc, .y=0x3e, .sp=0xc6, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xb2}, {.addr=0x6cbf, .value=0xa4}, {.addr=0x6cc0, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x6cc1, .a=0xf1, .x=0xcc, .y=0x3e, .sp=0xc6, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xb2}, {.addr=0x6cbf, .value=0xa4}, {.addr=0x6cc0, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cbf, .value=0xa4, .type=IO_READ},
        {.addr=0x6cc0, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0071) {
    const struct CPU_State initial_cpu = {.pc=0x2056, .a=0xdc, .x=0x87, .y=0x46, .sp=0xc4, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x46}, {.addr=0x2056, .value=0xa4}, {.addr=0x2057, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x2058, .a=0x96, .x=0x87, .y=0x46, .sp=0xc4, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x46}, {.addr=0x2056, .value=0xa4}, {.addr=0x2057, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x2056, .value=0xa4, .type=IO_READ},
        {.addr=0x2057, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0072) {
    const struct CPU_State initial_cpu = {.pc=0xfac6, .a=0x83, .x=0x28, .y=0xad, .sp=0xea, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xe1}, {.addr=0xfac6, .value=0xa4}, {.addr=0xfac7, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xfac8, .a=0xa2, .x=0x28, .y=0xad, .sp=0xea, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xe1}, {.addr=0xfac6, .value=0xa4}, {.addr=0xfac7, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfac6, .value=0xa4, .type=IO_READ},
        {.addr=0xfac7, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0073) {
    const struct CPU_State initial_cpu = {.pc=0x9aeb, .a=0xb8, .x=0x6f, .y=0x43, .sp=0x7a, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0xe6}, {.addr=0x9aeb, .value=0xa4}, {.addr=0x9aec, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9aed, .a=0xd2, .x=0x6f, .y=0x43, .sp=0x7a, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0xe6}, {.addr=0x9aeb, .value=0xa4}, {.addr=0x9aec, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aeb, .value=0xa4, .type=IO_READ},
        {.addr=0x9aec, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0074) {
    const struct CPU_State initial_cpu = {.pc=0xfeb9, .a=0x40, .x=0xbb, .y=0xd7, .sp=0x9a, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x73}, {.addr=0xfeb9, .value=0xa4}, {.addr=0xfeba, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xfebb, .a=0xcd, .x=0xbb, .y=0xd7, .sp=0x9a, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x73}, {.addr=0xfeb9, .value=0xa4}, {.addr=0xfeba, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xfeb9, .value=0xa4, .type=IO_READ},
        {.addr=0xfeba, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf49e, .a=0xaf, .x=0x49, .y=0x33, .sp=0x44, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x2b}, {.addr=0xf49e, .value=0xa4}, {.addr=0xf49f, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xf4a0, .a=0x83, .x=0x49, .y=0x33, .sp=0x44, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x2b}, {.addr=0xf49e, .value=0xa4}, {.addr=0xf49f, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xf49e, .value=0xa4, .type=IO_READ},
        {.addr=0xf49f, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0076) {
    const struct CPU_State initial_cpu = {.pc=0x0d87, .a=0xde, .x=0xb6, .y=0x4e, .sp=0xc9, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x27}, {.addr=0x0d87, .value=0xa4}, {.addr=0x0d88, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x0d89, .a=0xb7, .x=0xb6, .y=0x4e, .sp=0xc9, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x27}, {.addr=0x0d87, .value=0xa4}, {.addr=0x0d88, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d87, .value=0xa4, .type=IO_READ},
        {.addr=0x0d88, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0077) {
    const struct CPU_State initial_cpu = {.pc=0x271a, .a=0x3c, .x=0x21, .y=0xd9, .sp=0x6f, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xe9}, {.addr=0x271a, .value=0xa4}, {.addr=0x271b, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x271c, .a=0x53, .x=0x21, .y=0xd9, .sp=0x6f, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xe9}, {.addr=0x271a, .value=0xa4}, {.addr=0x271b, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x271a, .value=0xa4, .type=IO_READ},
        {.addr=0x271b, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0078) {
    const struct CPU_State initial_cpu = {.pc=0xf76e, .a=0xd2, .x=0xeb, .y=0x9f, .sp=0x9e, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x9b}, {.addr=0xf76e, .value=0xa4}, {.addr=0xf76f, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xf770, .a=0x37, .x=0xeb, .y=0x9f, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x9b}, {.addr=0xf76e, .value=0xa4}, {.addr=0xf76f, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xf76e, .value=0xa4, .type=IO_READ},
        {.addr=0xf76f, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0079) {
    const struct CPU_State initial_cpu = {.pc=0x5064, .a=0xf7, .x=0x44, .y=0x57, .sp=0x4b, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x1a}, {.addr=0x5064, .value=0xa4}, {.addr=0x5065, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x5066, .a=0xdd, .x=0x44, .y=0x57, .sp=0x4b, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x1a}, {.addr=0x5064, .value=0xa4}, {.addr=0x5065, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x5064, .value=0xa4, .type=IO_READ},
        {.addr=0x5065, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007A) {
    const struct CPU_State initial_cpu = {.pc=0x3654, .a=0xc1, .x=0x6f, .y=0x8c, .sp=0x8d, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x85}, {.addr=0x3654, .value=0xa4}, {.addr=0x3655, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x3656, .a=0x3b, .x=0x6f, .y=0x8c, .sp=0x8d, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x85}, {.addr=0x3654, .value=0xa4}, {.addr=0x3655, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3654, .value=0xa4, .type=IO_READ},
        {.addr=0x3655, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007B) {
    const struct CPU_State initial_cpu = {.pc=0x3f62, .a=0x5d, .x=0x52, .y=0x64, .sp=0x07, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x3f}, {.addr=0x3f62, .value=0xa4}, {.addr=0x3f63, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x3f64, .a=0x1e, .x=0x52, .y=0x64, .sp=0x07, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x3f}, {.addr=0x3f62, .value=0xa4}, {.addr=0x3f63, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f62, .value=0xa4, .type=IO_READ},
        {.addr=0x3f63, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007C) {
    const struct CPU_State initial_cpu = {.pc=0xa1e0, .a=0x64, .x=0xcd, .y=0xd7, .sp=0x83, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x26}, {.addr=0xa1e0, .value=0xa4}, {.addr=0xa1e1, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xa1e2, .a=0x3e, .x=0xcd, .y=0xd7, .sp=0x83, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x26}, {.addr=0xa1e0, .value=0xa4}, {.addr=0xa1e1, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1e0, .value=0xa4, .type=IO_READ},
        {.addr=0xa1e1, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007D) {
    const struct CPU_State initial_cpu = {.pc=0x660e, .a=0x65, .x=0x3e, .y=0x3d, .sp=0xd2, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x14}, {.addr=0x660e, .value=0xa4}, {.addr=0x660f, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x6610, .a=0x51, .x=0x3e, .y=0x3d, .sp=0xd2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x14}, {.addr=0x660e, .value=0xa4}, {.addr=0x660f, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x660e, .value=0xa4, .type=IO_READ},
        {.addr=0x660f, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007E) {
    const struct CPU_State initial_cpu = {.pc=0x10b7, .a=0x87, .x=0x96, .y=0x25, .sp=0xb6, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x4c}, {.addr=0x10b7, .value=0xa4}, {.addr=0x10b8, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x10b9, .a=0x3a, .x=0x96, .y=0x25, .sp=0xb6, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x4c}, {.addr=0x10b7, .value=0xa4}, {.addr=0x10b8, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x10b7, .value=0xa4, .type=IO_READ},
        {.addr=0x10b8, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_007F) {
    const struct CPU_State initial_cpu = {.pc=0x6ca7, .a=0xdc, .x=0xa3, .y=0xb4, .sp=0x61, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x98}, {.addr=0x6ca7, .value=0xa4}, {.addr=0x6ca8, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x6ca9, .a=0x43, .x=0xa3, .y=0xb4, .sp=0x61, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x98}, {.addr=0x6ca7, .value=0xa4}, {.addr=0x6ca8, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ca7, .value=0xa4, .type=IO_READ},
        {.addr=0x6ca8, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0080) {
    const struct CPU_State initial_cpu = {.pc=0xc06d, .a=0x8b, .x=0xaa, .y=0x19, .sp=0xbe, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xbd}, {.addr=0xc06d, .value=0xa4}, {.addr=0xc06e, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xc06f, .a=0xcd, .x=0xaa, .y=0x19, .sp=0xbe, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xbd}, {.addr=0xc06d, .value=0xa4}, {.addr=0xc06e, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc06d, .value=0xa4, .type=IO_READ},
        {.addr=0xc06e, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb377, .a=0x02, .x=0x9c, .y=0x63, .sp=0x68, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x20}, {.addr=0xb377, .value=0xa4}, {.addr=0xb378, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xb379, .a=0xe1, .x=0x9c, .y=0x63, .sp=0x68, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x20}, {.addr=0xb377, .value=0xa4}, {.addr=0xb378, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb377, .value=0xa4, .type=IO_READ},
        {.addr=0xb378, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0082) {
    const struct CPU_State initial_cpu = {.pc=0xcb5e, .a=0x64, .x=0x69, .y=0x3c, .sp=0xe7, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x40}, {.addr=0xcb5e, .value=0xa4}, {.addr=0xcb5f, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xcb60, .a=0x23, .x=0x69, .y=0x3c, .sp=0xe7, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x40}, {.addr=0xcb5e, .value=0xa4}, {.addr=0xcb5f, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb5e, .value=0xa4, .type=IO_READ},
        {.addr=0xcb5f, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7d55, .a=0x91, .x=0xbb, .y=0x55, .sp=0x28, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x60}, {.addr=0x7d55, .value=0xa4}, {.addr=0x7d56, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x7d57, .a=0x31, .x=0xbb, .y=0x55, .sp=0x28, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x60}, {.addr=0x7d55, .value=0xa4}, {.addr=0x7d56, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d55, .value=0xa4, .type=IO_READ},
        {.addr=0x7d56, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0084) {
    const struct CPU_State initial_cpu = {.pc=0xa85a, .a=0xbd, .x=0xaf, .y=0xb8, .sp=0x69, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x9c}, {.addr=0xa85a, .value=0xa4}, {.addr=0xa85b, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xa85c, .a=0x21, .x=0xaf, .y=0xb8, .sp=0x69, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x9c}, {.addr=0xa85a, .value=0xa4}, {.addr=0xa85b, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xa85a, .value=0xa4, .type=IO_READ},
        {.addr=0xa85b, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0085) {
    const struct CPU_State initial_cpu = {.pc=0x8da2, .a=0x9f, .x=0xfb, .y=0xe4, .sp=0x80, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0xe7}, {.addr=0x8da2, .value=0xa4}, {.addr=0x8da3, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x8da4, .a=0xb8, .x=0xfb, .y=0xe4, .sp=0x80, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0xe7}, {.addr=0x8da2, .value=0xa4}, {.addr=0x8da3, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da2, .value=0xa4, .type=IO_READ},
        {.addr=0x8da3, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0086) {
    const struct CPU_State initial_cpu = {.pc=0x2ffc, .a=0x0b, .x=0x33, .y=0x1c, .sp=0x72, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x31}, {.addr=0x2ffc, .value=0xa4}, {.addr=0x2ffd, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x2ffe, .a=0xda, .x=0x33, .y=0x1c, .sp=0x72, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x31}, {.addr=0x2ffc, .value=0xa4}, {.addr=0x2ffd, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ffc, .value=0xa4, .type=IO_READ},
        {.addr=0x2ffd, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0087) {
    const struct CPU_State initial_cpu = {.pc=0x099d, .a=0x01, .x=0x05, .y=0x0b, .sp=0x07, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x4c}, {.addr=0x099d, .value=0xa4}, {.addr=0x099e, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x099f, .a=0xb5, .x=0x05, .y=0x0b, .sp=0x07, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x4c}, {.addr=0x099d, .value=0xa4}, {.addr=0x099e, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x099d, .value=0xa4, .type=IO_READ},
        {.addr=0x099e, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0088) {
    const struct CPU_State initial_cpu = {.pc=0xd871, .a=0xcd, .x=0x15, .y=0x7d, .sp=0xd8, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x39}, {.addr=0xd871, .value=0xa4}, {.addr=0xd872, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xd873, .a=0x93, .x=0x15, .y=0x7d, .sp=0xd8, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x39}, {.addr=0xd871, .value=0xa4}, {.addr=0xd872, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd871, .value=0xa4, .type=IO_READ},
        {.addr=0xd872, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe11f, .a=0x84, .x=0xfd, .y=0xd3, .sp=0x8b, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x64}, {.addr=0xe11f, .value=0xa4}, {.addr=0xe120, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xe121, .a=0x1f, .x=0xfd, .y=0xd3, .sp=0x8b, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x64}, {.addr=0xe11f, .value=0xa4}, {.addr=0xe120, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe11f, .value=0xa4, .type=IO_READ},
        {.addr=0xe120, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008A) {
    const struct CPU_State initial_cpu = {.pc=0xfae3, .a=0x4e, .x=0xd7, .y=0x33, .sp=0x78, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xcb}, {.addr=0xfae3, .value=0xa4}, {.addr=0xfae4, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xfae5, .a=0x82, .x=0xd7, .y=0x33, .sp=0x78, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xcb}, {.addr=0xfae3, .value=0xa4}, {.addr=0xfae4, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xfae3, .value=0xa4, .type=IO_READ},
        {.addr=0xfae4, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008B) {
    const struct CPU_State initial_cpu = {.pc=0x5ef6, .a=0x3c, .x=0x20, .y=0x22, .sp=0x9c, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x80}, {.addr=0x5ef6, .value=0xa4}, {.addr=0x5ef7, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x5ef8, .a=0xbb, .x=0x20, .y=0x22, .sp=0x9c, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x80}, {.addr=0x5ef6, .value=0xa4}, {.addr=0x5ef7, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ef6, .value=0xa4, .type=IO_READ},
        {.addr=0x5ef7, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008C) {
    const struct CPU_State initial_cpu = {.pc=0x2634, .a=0x32, .x=0xf9, .y=0x78, .sp=0x75, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0xbd}, {.addr=0x2634, .value=0xa4}, {.addr=0x2635, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x2636, .a=0x75, .x=0xf9, .y=0x78, .sp=0x75, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0xbd}, {.addr=0x2634, .value=0xa4}, {.addr=0x2635, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x2634, .value=0xa4, .type=IO_READ},
        {.addr=0x2635, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008D) {
    const struct CPU_State initial_cpu = {.pc=0xdc1b, .a=0xca, .x=0x50, .y=0x73, .sp=0x26, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xf1}, {.addr=0xdc1b, .value=0xa4}, {.addr=0xdc1c, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xdc1d, .a=0xd9, .x=0x50, .y=0x73, .sp=0x26, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xf1}, {.addr=0xdc1b, .value=0xa4}, {.addr=0xdc1c, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc1b, .value=0xa4, .type=IO_READ},
        {.addr=0xdc1c, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1915, .a=0x9b, .x=0xee, .y=0x03, .sp=0x47, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xca}, {.addr=0x1915, .value=0xa4}, {.addr=0x1916, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x1917, .a=0xd0, .x=0xee, .y=0x03, .sp=0x47, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xca}, {.addr=0x1915, .value=0xa4}, {.addr=0x1916, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1915, .value=0xa4, .type=IO_READ},
        {.addr=0x1916, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3af3, .a=0x5a, .x=0xfe, .y=0x8a, .sp=0x3c, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x1a}, {.addr=0x3af3, .value=0xa4}, {.addr=0x3af4, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x3af5, .a=0x3f, .x=0xfe, .y=0x8a, .sp=0x3c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x1a}, {.addr=0x3af3, .value=0xa4}, {.addr=0x3af4, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3af3, .value=0xa4, .type=IO_READ},
        {.addr=0x3af4, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0090) {
    const struct CPU_State initial_cpu = {.pc=0xfcd5, .a=0xcb, .x=0x02, .y=0x66, .sp=0x11, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x25}, {.addr=0xfcd5, .value=0xa4}, {.addr=0xfcd6, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd7, .a=0xa6, .x=0x02, .y=0x66, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x25}, {.addr=0xfcd5, .value=0xa4}, {.addr=0xfcd6, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd5, .value=0xa4, .type=IO_READ},
        {.addr=0xfcd6, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0091) {
    const struct CPU_State initial_cpu = {.pc=0x8824, .a=0x35, .x=0x13, .y=0x20, .sp=0x8f, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xee}, {.addr=0x8824, .value=0xa4}, {.addr=0x8825, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x8826, .a=0x47, .x=0x13, .y=0x20, .sp=0x8f, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xee}, {.addr=0x8824, .value=0xa4}, {.addr=0x8825, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8824, .value=0xa4, .type=IO_READ},
        {.addr=0x8825, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0092) {
    const struct CPU_State initial_cpu = {.pc=0x35b7, .a=0x2e, .x=0xd1, .y=0x4f, .sp=0xe6, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x8d}, {.addr=0x35b7, .value=0xa4}, {.addr=0x35b8, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x35b9, .a=0xa0, .x=0xd1, .y=0x4f, .sp=0xe6, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x8d}, {.addr=0x35b7, .value=0xa4}, {.addr=0x35b8, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x35b7, .value=0xa4, .type=IO_READ},
        {.addr=0x35b8, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0094) {
    const struct CPU_State initial_cpu = {.pc=0x4a33, .a=0x97, .x=0xe8, .y=0xd6, .sp=0xda, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x82}, {.addr=0x4a33, .value=0xa4}, {.addr=0x4a34, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x4a35, .a=0x14, .x=0xe8, .y=0xd6, .sp=0xda, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x82}, {.addr=0x4a33, .value=0xa4}, {.addr=0x4a34, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a33, .value=0xa4, .type=IO_READ},
        {.addr=0x4a34, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0095) {
    const struct CPU_State initial_cpu = {.pc=0x54d8, .a=0x9c, .x=0xad, .y=0x68, .sp=0xcb, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xa1}, {.addr=0x54d8, .value=0xa4}, {.addr=0x54d9, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x54da, .a=0xfb, .x=0xad, .y=0x68, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xa1}, {.addr=0x54d8, .value=0xa4}, {.addr=0x54d9, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x54d8, .value=0xa4, .type=IO_READ},
        {.addr=0x54d9, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0096) {
    const struct CPU_State initial_cpu = {.pc=0x0a4c, .a=0xbe, .x=0xb6, .y=0x31, .sp=0x93, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x2b}, {.addr=0x0a4c, .value=0xa4}, {.addr=0x0a4d, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x0a4e, .a=0x92, .x=0xb6, .y=0x31, .sp=0x93, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x2b}, {.addr=0x0a4c, .value=0xa4}, {.addr=0x0a4d, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a4c, .value=0xa4, .type=IO_READ},
        {.addr=0x0a4d, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0097) {
    const struct CPU_State initial_cpu = {.pc=0x2dae, .a=0x26, .x=0xc6, .y=0x0f, .sp=0x2c, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0xd0}, {.addr=0x2dae, .value=0xa4}, {.addr=0x2daf, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x2db0, .a=0x55, .x=0xc6, .y=0x0f, .sp=0x2c, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0xd0}, {.addr=0x2dae, .value=0xa4}, {.addr=0x2daf, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dae, .value=0xa4, .type=IO_READ},
        {.addr=0x2daf, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0098) {
    const struct CPU_State initial_cpu = {.pc=0x4f66, .a=0xaf, .x=0x64, .y=0xb4, .sp=0xb9, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x36}, {.addr=0x4f66, .value=0xa4}, {.addr=0x4f67, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x4f68, .a=0x79, .x=0x64, .y=0xb4, .sp=0xb9, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x36}, {.addr=0x4f66, .value=0xa4}, {.addr=0x4f67, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f66, .value=0xa4, .type=IO_READ},
        {.addr=0x4f67, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0099) {
    const struct CPU_State initial_cpu = {.pc=0x5f13, .a=0xe7, .x=0x1b, .y=0xa4, .sp=0xd9, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xb7}, {.addr=0x5f13, .value=0xa4}, {.addr=0x5f14, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x5f15, .a=0x2f, .x=0x1b, .y=0xa4, .sp=0xd9, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xb7}, {.addr=0x5f13, .value=0xa4}, {.addr=0x5f14, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f13, .value=0xa4, .type=IO_READ},
        {.addr=0x5f14, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009A) {
    const struct CPU_State initial_cpu = {.pc=0x5b6b, .a=0x8c, .x=0x81, .y=0x96, .sp=0xd2, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xbd}, {.addr=0x5b6b, .value=0xa4}, {.addr=0x5b6c, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x5b6d, .a=0xce, .x=0x81, .y=0x96, .sp=0xd2, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xbd}, {.addr=0x5b6b, .value=0xa4}, {.addr=0x5b6c, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b6b, .value=0xa4, .type=IO_READ},
        {.addr=0x5b6c, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009B) {
    const struct CPU_State initial_cpu = {.pc=0x238e, .a=0xd1, .x=0x3a, .y=0xa1, .sp=0x28, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x49}, {.addr=0x238e, .value=0xa4}, {.addr=0x238f, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x2390, .a=0x88, .x=0x3a, .y=0xa1, .sp=0x28, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x49}, {.addr=0x238e, .value=0xa4}, {.addr=0x238f, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x238e, .value=0xa4, .type=IO_READ},
        {.addr=0x238f, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009C) {
    const struct CPU_State initial_cpu = {.pc=0x4fbe, .a=0x46, .x=0x85, .y=0x70, .sp=0xda, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x5f}, {.addr=0x4fbe, .value=0xa4}, {.addr=0x4fbf, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x4fc0, .a=0xe6, .x=0x85, .y=0x70, .sp=0xda, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x5f}, {.addr=0x4fbe, .value=0xa4}, {.addr=0x4fbf, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fbe, .value=0xa4, .type=IO_READ},
        {.addr=0x4fbf, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009D) {
    const struct CPU_State initial_cpu = {.pc=0xbe21, .a=0xe8, .x=0x03, .y=0x09, .sp=0x23, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xec}, {.addr=0xbe21, .value=0xa4}, {.addr=0xbe22, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xbe23, .a=0xfc, .x=0x03, .y=0x09, .sp=0x23, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xec}, {.addr=0xbe21, .value=0xa4}, {.addr=0xbe22, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe21, .value=0xa4, .type=IO_READ},
        {.addr=0xbe22, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009E) {
    const struct CPU_State initial_cpu = {.pc=0xf1ed, .a=0xea, .x=0xb3, .y=0x4b, .sp=0x6b, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xb1}, {.addr=0xf1ed, .value=0xa4}, {.addr=0xf1ee, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xf1ef, .a=0x39, .x=0xb3, .y=0x4b, .sp=0x6b, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xb1}, {.addr=0xf1ed, .value=0xa4}, {.addr=0xf1ee, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1ed, .value=0xa4, .type=IO_READ},
        {.addr=0xf1ee, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_009F) {
    const struct CPU_State initial_cpu = {.pc=0x87b8, .a=0xfb, .x=0x8e, .y=0xc8, .sp=0x1d, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x92}, {.addr=0x87b8, .value=0xa4}, {.addr=0x87b9, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x87ba, .a=0x68, .x=0x8e, .y=0xc8, .sp=0x1d, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x92}, {.addr=0x87b8, .value=0xa4}, {.addr=0x87b9, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x87b8, .value=0xa4, .type=IO_READ},
        {.addr=0x87b9, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xe299, .a=0x3e, .x=0xa3, .y=0x81, .sp=0x0b, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xa3}, {.addr=0xe299, .value=0xa4}, {.addr=0xe29a, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xe29b, .a=0x9a, .x=0xa3, .y=0x81, .sp=0x0b, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xa3}, {.addr=0xe299, .value=0xa4}, {.addr=0xe29a, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xe299, .value=0xa4, .type=IO_READ},
        {.addr=0xe29a, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x4d08, .a=0xbe, .x=0xce, .y=0x5f, .sp=0x7b, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x5d}, {.addr=0x4d08, .value=0xa4}, {.addr=0x4d09, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x4d0a, .a=0x60, .x=0xce, .y=0x5f, .sp=0x7b, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x5d}, {.addr=0x4d08, .value=0xa4}, {.addr=0x4d09, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d08, .value=0xa4, .type=IO_READ},
        {.addr=0x4d09, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xeb71, .a=0x6c, .x=0x68, .y=0x14, .sp=0x1e, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x47}, {.addr=0xeb71, .value=0xa4}, {.addr=0xeb72, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xeb73, .a=0x24, .x=0x68, .y=0x14, .sp=0x1e, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x47}, {.addr=0xeb71, .value=0xa4}, {.addr=0xeb72, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb71, .value=0xa4, .type=IO_READ},
        {.addr=0xeb72, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x28cc, .a=0xf0, .x=0x95, .y=0x8d, .sp=0x79, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x49}, {.addr=0x28cc, .value=0xa4}, {.addr=0x28cd, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x28ce, .a=0xa6, .x=0x95, .y=0x8d, .sp=0x79, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x49}, {.addr=0x28cc, .value=0xa4}, {.addr=0x28cd, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x28cc, .value=0xa4, .type=IO_READ},
        {.addr=0x28cd, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb10c, .a=0x50, .x=0xb8, .y=0x7b, .sp=0xb1, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xc7}, {.addr=0xb10c, .value=0xa4}, {.addr=0xb10d, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xb10e, .a=0x88, .x=0xb8, .y=0x7b, .sp=0xb1, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xc7}, {.addr=0xb10c, .value=0xa4}, {.addr=0xb10d, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb10c, .value=0xa4, .type=IO_READ},
        {.addr=0xb10d, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x9ec4, .a=0x62, .x=0xc7, .y=0xd7, .sp=0xaa, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x50}, {.addr=0x9ec4, .value=0xa4}, {.addr=0x9ec5, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x9ec6, .a=0x12, .x=0xc7, .y=0xd7, .sp=0xaa, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x50}, {.addr=0x9ec4, .value=0xa4}, {.addr=0x9ec5, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ec4, .value=0xa4, .type=IO_READ},
        {.addr=0x9ec5, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x4ed7, .a=0x00, .x=0x5d, .y=0x48, .sp=0x9b, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xb1}, {.addr=0x4ed7, .value=0xa4}, {.addr=0x4ed8, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x4ed9, .a=0x4f, .x=0x5d, .y=0x48, .sp=0x9b, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xb1}, {.addr=0x4ed7, .value=0xa4}, {.addr=0x4ed8, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ed7, .value=0xa4, .type=IO_READ},
        {.addr=0x4ed8, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6722, .a=0x09, .x=0x3c, .y=0x59, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x0c}, {.addr=0x6722, .value=0xa4}, {.addr=0x6723, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x6724, .a=0xfd, .x=0x3c, .y=0x59, .sp=0x5b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x0c}, {.addr=0x6722, .value=0xa4}, {.addr=0x6723, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6722, .value=0xa4, .type=IO_READ},
        {.addr=0x6723, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6f54, .a=0x23, .x=0x74, .y=0xd5, .sp=0xe3, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xcb}, {.addr=0x6f54, .value=0xa4}, {.addr=0x6f55, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x6f56, .a=0x57, .x=0x74, .y=0xd5, .sp=0xe3, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xcb}, {.addr=0x6f54, .value=0xa4}, {.addr=0x6f55, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f54, .value=0xa4, .type=IO_READ},
        {.addr=0x6f55, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xe408, .a=0x1a, .x=0x83, .y=0x4a, .sp=0x8e, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x8c}, {.addr=0xe408, .value=0xa4}, {.addr=0xe409, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xe40a, .a=0x8d, .x=0x83, .y=0x4a, .sp=0x8e, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x8c}, {.addr=0xe408, .value=0xa4}, {.addr=0xe409, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xe408, .value=0xa4, .type=IO_READ},
        {.addr=0xe409, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x4408, .a=0x6b, .x=0x6a, .y=0x17, .sp=0xda, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x56}, {.addr=0x4408, .value=0xa4}, {.addr=0x4409, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x440a, .a=0x14, .x=0x6a, .y=0x17, .sp=0xda, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x56}, {.addr=0x4408, .value=0xa4}, {.addr=0x4409, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x4408, .value=0xa4, .type=IO_READ},
        {.addr=0x4409, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xb2f9, .a=0x69, .x=0x7e, .y=0x62, .sp=0xcf, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x29}, {.addr=0xb2f9, .value=0xa4}, {.addr=0xb2fa, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xb2fb, .a=0x40, .x=0x7e, .y=0x62, .sp=0xcf, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x29}, {.addr=0xb2f9, .value=0xa4}, {.addr=0xb2fa, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2f9, .value=0xa4, .type=IO_READ},
        {.addr=0xb2fa, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x638f, .a=0x81, .x=0x36, .y=0x31, .sp=0xd6, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xfa}, {.addr=0x638f, .value=0xa4}, {.addr=0x6390, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x6391, .a=0x86, .x=0x36, .y=0x31, .sp=0xd6, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xfa}, {.addr=0x638f, .value=0xa4}, {.addr=0x6390, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x638f, .value=0xa4, .type=IO_READ},
        {.addr=0x6390, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x420e, .a=0x97, .x=0x9d, .y=0xfe, .sp=0xa4, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x0e}, {.addr=0x420e, .value=0xa4}, {.addr=0x420f, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x4210, .a=0x89, .x=0x9d, .y=0xfe, .sp=0xa4, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x0e}, {.addr=0x420e, .value=0xa4}, {.addr=0x420f, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x420e, .value=0xa4, .type=IO_READ},
        {.addr=0x420f, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xf3a6, .a=0x78, .x=0xbc, .y=0xdb, .sp=0x37, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xfe}, {.addr=0xf3a6, .value=0xa4}, {.addr=0xf3a7, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xf3a8, .a=0x7a, .x=0xbc, .y=0xdb, .sp=0x37, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xfe}, {.addr=0xf3a6, .value=0xa4}, {.addr=0xf3a7, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3a6, .value=0xa4, .type=IO_READ},
        {.addr=0xf3a7, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x835f, .a=0xc9, .x=0xf0, .y=0xe7, .sp=0x1e, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x88}, {.addr=0x835f, .value=0xa4}, {.addr=0x8360, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x8361, .a=0x41, .x=0xf0, .y=0xe7, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x88}, {.addr=0x835f, .value=0xa4}, {.addr=0x8360, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x835f, .value=0xa4, .type=IO_READ},
        {.addr=0x8360, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xdf52, .a=0x3e, .x=0x76, .y=0x94, .sp=0x95, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xbd}, {.addr=0xdf52, .value=0xa4}, {.addr=0xdf53, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xdf54, .a=0x80, .x=0x76, .y=0x94, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xbd}, {.addr=0xdf52, .value=0xa4}, {.addr=0xdf53, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf52, .value=0xa4, .type=IO_READ},
        {.addr=0xdf53, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xea63, .a=0xbe, .x=0xd8, .y=0x66, .sp=0x7f, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x66}, {.addr=0xea63, .value=0xa4}, {.addr=0xea64, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xea65, .a=0x58, .x=0xd8, .y=0x66, .sp=0x7f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x66}, {.addr=0xea63, .value=0xa4}, {.addr=0xea64, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xea63, .value=0xa4, .type=IO_READ},
        {.addr=0xea64, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x363e, .a=0xea, .x=0x6b, .y=0x04, .sp=0xd7, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x0d}, {.addr=0x363e, .value=0xa4}, {.addr=0x363f, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x3640, .a=0xdd, .x=0x6b, .y=0x04, .sp=0xd7, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x0d}, {.addr=0x363e, .value=0xa4}, {.addr=0x363f, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x363e, .value=0xa4, .type=IO_READ},
        {.addr=0x363f, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x1520, .a=0x47, .x=0x79, .y=0x25, .sp=0x20, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xcc}, {.addr=0x1520, .value=0xa4}, {.addr=0x1521, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x1522, .a=0x7b, .x=0x79, .y=0x25, .sp=0x20, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xcc}, {.addr=0x1520, .value=0xa4}, {.addr=0x1521, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1520, .value=0xa4, .type=IO_READ},
        {.addr=0x1521, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xfb9a, .a=0xe9, .x=0x0f, .y=0x5c, .sp=0x3a, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x31}, {.addr=0xfb9a, .value=0xa4}, {.addr=0xfb9b, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xfb9c, .a=0xb7, .x=0x0f, .y=0x5c, .sp=0x3a, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x31}, {.addr=0xfb9a, .value=0xa4}, {.addr=0xfb9b, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb9a, .value=0xa4, .type=IO_READ},
        {.addr=0xfb9b, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x74cd, .a=0x92, .x=0x2a, .y=0xde, .sp=0xff, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xb8}, {.addr=0x74cd, .value=0xa4}, {.addr=0x74ce, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x74cf, .a=0xd9, .x=0x2a, .y=0xde, .sp=0xff, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xb8}, {.addr=0x74cd, .value=0xa4}, {.addr=0x74ce, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x74cd, .value=0xa4, .type=IO_READ},
        {.addr=0x74ce, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x2743, .a=0x04, .x=0x1f, .y=0xda, .sp=0x1d, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xbd}, {.addr=0x2743, .value=0xa4}, {.addr=0x2744, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x2745, .a=0x46, .x=0x1f, .y=0xda, .sp=0x1d, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xbd}, {.addr=0x2743, .value=0xa4}, {.addr=0x2744, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2743, .value=0xa4, .type=IO_READ},
        {.addr=0x2744, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x94dd, .a=0xa6, .x=0x99, .y=0x5f, .sp=0x26, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x33}, {.addr=0x94dd, .value=0xa4}, {.addr=0x94de, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x94df, .a=0x73, .x=0x99, .y=0x5f, .sp=0x26, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x33}, {.addr=0x94dd, .value=0xa4}, {.addr=0x94de, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x94dd, .value=0xa4, .type=IO_READ},
        {.addr=0x94de, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x7c34, .a=0x71, .x=0x8a, .y=0xa3, .sp=0xfc, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xdd}, {.addr=0x7c34, .value=0xa4}, {.addr=0x7c35, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x7c36, .a=0x93, .x=0x8a, .y=0xa3, .sp=0xfc, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xdd}, {.addr=0x7c34, .value=0xa4}, {.addr=0x7c35, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c34, .value=0xa4, .type=IO_READ},
        {.addr=0x7c35, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x801b, .a=0x01, .x=0x63, .y=0x59, .sp=0xfb, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xe9}, {.addr=0x801b, .value=0xa4}, {.addr=0x801c, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x801d, .a=0x18, .x=0x63, .y=0x59, .sp=0xfb, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xe9}, {.addr=0x801b, .value=0xa4}, {.addr=0x801c, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x801b, .value=0xa4, .type=IO_READ},
        {.addr=0x801c, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x0b6f, .a=0xca, .x=0x82, .y=0x89, .sp=0x73, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0xe6}, {.addr=0x0b6f, .value=0xa4}, {.addr=0x0b70, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x0b71, .a=0xe3, .x=0x82, .y=0x89, .sp=0x73, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0xe6}, {.addr=0x0b6f, .value=0xa4}, {.addr=0x0b70, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b6f, .value=0xa4, .type=IO_READ},
        {.addr=0x0b70, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x41e0, .a=0xc8, .x=0x05, .y=0x71, .sp=0xe7, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x6f}, {.addr=0x41e0, .value=0xa4}, {.addr=0x41e1, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x41e2, .a=0x58, .x=0x05, .y=0x71, .sp=0xe7, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x6f}, {.addr=0x41e0, .value=0xa4}, {.addr=0x41e1, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x41e0, .value=0xa4, .type=IO_READ},
        {.addr=0x41e1, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x24be, .a=0x31, .x=0x81, .y=0xd9, .sp=0x25, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xda}, {.addr=0x24be, .value=0xa4}, {.addr=0x24bf, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x24c0, .a=0x56, .x=0x81, .y=0xd9, .sp=0x25, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xda}, {.addr=0x24be, .value=0xa4}, {.addr=0x24bf, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x24be, .value=0xa4, .type=IO_READ},
        {.addr=0x24bf, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x649b, .a=0x9a, .x=0x07, .y=0xdb, .sp=0xa0, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x35}, {.addr=0x649b, .value=0xa4}, {.addr=0x649c, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x649d, .a=0x65, .x=0x07, .y=0xdb, .sp=0xa0, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x35}, {.addr=0x649b, .value=0xa4}, {.addr=0x649c, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x649b, .value=0xa4, .type=IO_READ},
        {.addr=0x649c, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x89ec, .a=0x6a, .x=0x62, .y=0xbb, .sp=0x7a, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xef}, {.addr=0x89ec, .value=0xa4}, {.addr=0x89ed, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x89ee, .a=0x7b, .x=0x62, .y=0xbb, .sp=0x7a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xef}, {.addr=0x89ec, .value=0xa4}, {.addr=0x89ed, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x89ec, .value=0xa4, .type=IO_READ},
        {.addr=0x89ed, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x009e, .a=0x37, .x=0x34, .y=0x9b, .sp=0x18, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0xa4}, {.addr=0x009f, .value=0xb5}, {.addr=0x01b5, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x00a0, .a=0xd8, .x=0x34, .y=0x9b, .sp=0x18, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0xa4}, {.addr=0x009f, .value=0xb5}, {.addr=0x01b5, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x009e, .value=0xa4, .type=IO_READ},
        {.addr=0x009f, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd933, .a=0x60, .x=0xc6, .y=0xd7, .sp=0x06, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xbb}, {.addr=0xd933, .value=0xa4}, {.addr=0xd934, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xd935, .a=0xa4, .x=0xc6, .y=0xd7, .sp=0x06, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xbb}, {.addr=0xd933, .value=0xa4}, {.addr=0xd934, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xd933, .value=0xa4, .type=IO_READ},
        {.addr=0xd934, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xa562, .a=0x6d, .x=0x35, .y=0x10, .sp=0xed, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x04}, {.addr=0xa562, .value=0xa4}, {.addr=0xa563, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xa564, .a=0x69, .x=0x35, .y=0x10, .sp=0xed, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x04}, {.addr=0xa562, .value=0xa4}, {.addr=0xa563, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa562, .value=0xa4, .type=IO_READ},
        {.addr=0xa563, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5ee2, .a=0xac, .x=0xa9, .y=0x04, .sp=0x52, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xd6}, {.addr=0x5ee2, .value=0xa4}, {.addr=0x5ee3, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x5ee4, .a=0xd6, .x=0xa9, .y=0x04, .sp=0x52, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xd6}, {.addr=0x5ee2, .value=0xa4}, {.addr=0x5ee3, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ee2, .value=0xa4, .type=IO_READ},
        {.addr=0x5ee3, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x468b, .a=0xc8, .x=0x53, .y=0x56, .sp=0xfc, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x94}, {.addr=0x468b, .value=0xa4}, {.addr=0x468c, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x468d, .a=0x33, .x=0x53, .y=0x56, .sp=0xfc, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x94}, {.addr=0x468b, .value=0xa4}, {.addr=0x468c, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x468b, .value=0xa4, .type=IO_READ},
        {.addr=0x468c, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x42d1, .a=0xe8, .x=0x79, .y=0xb6, .sp=0xdd, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x9c}, {.addr=0x42d1, .value=0xa4}, {.addr=0x42d2, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x42d3, .a=0x4c, .x=0x79, .y=0xb6, .sp=0xdd, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x9c}, {.addr=0x42d1, .value=0xa4}, {.addr=0x42d2, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x42d1, .value=0xa4, .type=IO_READ},
        {.addr=0x42d2, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x1e0b, .a=0x9b, .x=0xba, .y=0x80, .sp=0x7f, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xab}, {.addr=0x1e0b, .value=0xa4}, {.addr=0x1e0c, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x1e0d, .a=0xf0, .x=0xba, .y=0x80, .sp=0x7f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xab}, {.addr=0x1e0b, .value=0xa4}, {.addr=0x1e0c, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e0b, .value=0xa4, .type=IO_READ},
        {.addr=0x1e0c, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x0693, .a=0xde, .x=0xa2, .y=0x4d, .sp=0x25, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xee}, {.addr=0x0693, .value=0xa4}, {.addr=0x0694, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x0695, .a=0xef, .x=0xa2, .y=0x4d, .sp=0x25, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xee}, {.addr=0x0693, .value=0xa4}, {.addr=0x0694, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x0693, .value=0xa4, .type=IO_READ},
        {.addr=0x0694, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5fee, .a=0x87, .x=0x48, .y=0x65, .sp=0xe7, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xb2}, {.addr=0x5fee, .value=0xa4}, {.addr=0x5fef, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x5ff0, .a=0xd5, .x=0x48, .y=0x65, .sp=0xe7, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xb2}, {.addr=0x5fee, .value=0xa4}, {.addr=0x5fef, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fee, .value=0xa4, .type=IO_READ},
        {.addr=0x5fef, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xfe08, .a=0x6a, .x=0xb6, .y=0x0a, .sp=0xc3, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x10}, {.addr=0xfe08, .value=0xa4}, {.addr=0xfe09, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xfe0a, .a=0x59, .x=0xb6, .y=0x0a, .sp=0xc3, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x10}, {.addr=0xfe08, .value=0xa4}, {.addr=0xfe09, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe08, .value=0xa4, .type=IO_READ},
        {.addr=0xfe09, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x4869, .a=0xa3, .x=0x34, .y=0x77, .sp=0x2f, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xe3}, {.addr=0x4869, .value=0xa4}, {.addr=0x486a, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x486b, .a=0xbf, .x=0x34, .y=0x77, .sp=0x2f, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xe3}, {.addr=0x4869, .value=0xa4}, {.addr=0x486a, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x4869, .value=0xa4, .type=IO_READ},
        {.addr=0x486a, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x8a6d, .a=0x51, .x=0x0e, .y=0x9b, .sp=0x3d, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xbb}, {.addr=0x8a6d, .value=0xa4}, {.addr=0x8a6e, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x8a6f, .a=0x96, .x=0x0e, .y=0x9b, .sp=0x3d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xbb}, {.addr=0x8a6d, .value=0xa4}, {.addr=0x8a6e, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a6d, .value=0xa4, .type=IO_READ},
        {.addr=0x8a6e, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xcb11, .a=0xc2, .x=0x41, .y=0xcd, .sp=0xae, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x22}, {.addr=0xcb11, .value=0xa4}, {.addr=0xcb12, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xcb13, .a=0xa0, .x=0x41, .y=0xcd, .sp=0xae, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x22}, {.addr=0xcb11, .value=0xa4}, {.addr=0xcb12, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb11, .value=0xa4, .type=IO_READ},
        {.addr=0xcb12, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xa26f, .a=0x3a, .x=0x34, .y=0x86, .sp=0x13, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x92}, {.addr=0xa26f, .value=0xa4}, {.addr=0xa270, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa271, .a=0xa7, .x=0x34, .y=0x86, .sp=0x13, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x92}, {.addr=0xa26f, .value=0xa4}, {.addr=0xa270, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa26f, .value=0xa4, .type=IO_READ},
        {.addr=0xa270, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0dfe, .a=0x42, .x=0x40, .y=0x00, .sp=0x09, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xd1}, {.addr=0x0dfe, .value=0xa4}, {.addr=0x0dff, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x0e00, .a=0x71, .x=0x40, .y=0x00, .sp=0x09, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xd1}, {.addr=0x0dfe, .value=0xa4}, {.addr=0x0dff, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dfe, .value=0xa4, .type=IO_READ},
        {.addr=0x0dff, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x0b0f, .a=0xb7, .x=0x9a, .y=0x8e, .sp=0x08, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x43}, {.addr=0x0b0f, .value=0xa4}, {.addr=0x0b10, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x0b11, .a=0x74, .x=0x9a, .y=0x8e, .sp=0x08, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x43}, {.addr=0x0b0f, .value=0xa4}, {.addr=0x0b10, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b0f, .value=0xa4, .type=IO_READ},
        {.addr=0x0b10, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xcb8a, .a=0xd7, .x=0x18, .y=0x1b, .sp=0xfa, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x01}, {.addr=0xcb8a, .value=0xa4}, {.addr=0xcb8b, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xcb8c, .a=0xd6, .x=0x18, .y=0x1b, .sp=0xfa, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x01}, {.addr=0xcb8a, .value=0xa4}, {.addr=0xcb8b, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb8a, .value=0xa4, .type=IO_READ},
        {.addr=0xcb8b, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x1ea0, .a=0x9a, .x=0xf5, .y=0xc1, .sp=0x5d, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xc8}, {.addr=0x1ea0, .value=0xa4}, {.addr=0x1ea1, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x1ea2, .a=0xd1, .x=0xf5, .y=0xc1, .sp=0x5d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xc8}, {.addr=0x1ea0, .value=0xa4}, {.addr=0x1ea1, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ea0, .value=0xa4, .type=IO_READ},
        {.addr=0x1ea1, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xf8b7, .a=0xac, .x=0x48, .y=0x37, .sp=0x4d, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xf5}, {.addr=0xf8b7, .value=0xa4}, {.addr=0xf8b8, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xf8b9, .a=0xb7, .x=0x48, .y=0x37, .sp=0x4d, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xf5}, {.addr=0xf8b7, .value=0xa4}, {.addr=0xf8b8, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8b7, .value=0xa4, .type=IO_READ},
        {.addr=0xf8b8, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x9ae8, .a=0xf5, .x=0xba, .y=0x23, .sp=0x31, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x0c}, {.addr=0x9ae8, .value=0xa4}, {.addr=0x9ae9, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x9aea, .a=0xe8, .x=0xba, .y=0x23, .sp=0x31, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x0c}, {.addr=0x9ae8, .value=0xa4}, {.addr=0x9ae9, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ae8, .value=0xa4, .type=IO_READ},
        {.addr=0x9ae9, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x1539, .a=0x27, .x=0x7c, .y=0x8c, .sp=0x42, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xf4}, {.addr=0x1539, .value=0xa4}, {.addr=0x153a, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x153b, .a=0x33, .x=0x7c, .y=0x8c, .sp=0x42, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xf4}, {.addr=0x1539, .value=0xa4}, {.addr=0x153a, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x1539, .value=0xa4, .type=IO_READ},
        {.addr=0x153a, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x621b, .a=0x3c, .x=0x4d, .y=0x5b, .sp=0x1a, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xca}, {.addr=0x621b, .value=0xa4}, {.addr=0x621c, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x621d, .a=0x71, .x=0x4d, .y=0x5b, .sp=0x1a, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xca}, {.addr=0x621b, .value=0xa4}, {.addr=0x621c, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x621b, .value=0xa4, .type=IO_READ},
        {.addr=0x621c, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x62b7, .a=0x0e, .x=0x76, .y=0xfd, .sp=0x1c, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x79}, {.addr=0x62b7, .value=0xa4}, {.addr=0x62b8, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x62b9, .a=0x95, .x=0x76, .y=0xfd, .sp=0x1c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x79}, {.addr=0x62b7, .value=0xa4}, {.addr=0x62b8, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x62b7, .value=0xa4, .type=IO_READ},
        {.addr=0x62b8, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xe2e9, .a=0x53, .x=0x09, .y=0xb1, .sp=0xcf, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x90}, {.addr=0xe2e9, .value=0xa4}, {.addr=0xe2ea, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xe2eb, .a=0xc2, .x=0x09, .y=0xb1, .sp=0xcf, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x90}, {.addr=0xe2e9, .value=0xa4}, {.addr=0xe2ea, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2e9, .value=0xa4, .type=IO_READ},
        {.addr=0xe2ea, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x8ffc, .a=0x54, .x=0x79, .y=0xf7, .sp=0xf3, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x52}, {.addr=0x8ffc, .value=0xa4}, {.addr=0x8ffd, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x8ffe, .a=0x02, .x=0x79, .y=0xf7, .sp=0xf3, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x52}, {.addr=0x8ffc, .value=0xa4}, {.addr=0x8ffd, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ffc, .value=0xa4, .type=IO_READ},
        {.addr=0x8ffd, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x469a, .a=0x91, .x=0x0a, .y=0x1f, .sp=0x55, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x49}, {.addr=0x469a, .value=0xa4}, {.addr=0x469b, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x469c, .a=0x47, .x=0x0a, .y=0x1f, .sp=0x55, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x49}, {.addr=0x469a, .value=0xa4}, {.addr=0x469b, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x469a, .value=0xa4, .type=IO_READ},
        {.addr=0x469b, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x3e68, .a=0xa2, .x=0xc8, .y=0xf1, .sp=0x4e, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x8d}, {.addr=0x3e68, .value=0xa4}, {.addr=0x3e69, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x3e6a, .a=0x15, .x=0xc8, .y=0xf1, .sp=0x4e, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x8d}, {.addr=0x3e68, .value=0xa4}, {.addr=0x3e69, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e68, .value=0xa4, .type=IO_READ},
        {.addr=0x3e69, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x07b8, .a=0x5d, .x=0x6e, .y=0xfd, .sp=0x58, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x4c}, {.addr=0x07b8, .value=0xa4}, {.addr=0x07b9, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x07ba, .a=0x11, .x=0x6e, .y=0xfd, .sp=0x58, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x4c}, {.addr=0x07b8, .value=0xa4}, {.addr=0x07b9, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x07b8, .value=0xa4, .type=IO_READ},
        {.addr=0x07b9, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb70b, .a=0xbf, .x=0x79, .y=0xd4, .sp=0xc6, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x69}, {.addr=0xb70b, .value=0xa4}, {.addr=0xb70c, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xb70d, .a=0x55, .x=0x79, .y=0xd4, .sp=0xc6, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x69}, {.addr=0xb70b, .value=0xa4}, {.addr=0xb70c, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xb70b, .value=0xa4, .type=IO_READ},
        {.addr=0xb70c, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x9eb0, .a=0xf5, .x=0x9b, .y=0x5d, .sp=0x1c, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x18}, {.addr=0x9eb0, .value=0xa4}, {.addr=0x9eb1, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x9eb2, .a=0xdc, .x=0x9b, .y=0x5d, .sp=0x1c, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x18}, {.addr=0x9eb0, .value=0xa4}, {.addr=0x9eb1, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9eb0, .value=0xa4, .type=IO_READ},
        {.addr=0x9eb1, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x3cde, .a=0xf4, .x=0x23, .y=0xbe, .sp=0x1e, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xd2}, {.addr=0x3cde, .value=0xa4}, {.addr=0x3cdf, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x3ce0, .a=0x22, .x=0x23, .y=0xbe, .sp=0x1e, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xd2}, {.addr=0x3cde, .value=0xa4}, {.addr=0x3cdf, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cde, .value=0xa4, .type=IO_READ},
        {.addr=0x3cdf, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x3e12, .a=0x21, .x=0xc4, .y=0x54, .sp=0xc7, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x96}, {.addr=0x3e12, .value=0xa4}, {.addr=0x3e13, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x3e14, .a=0x8b, .x=0xc4, .y=0x54, .sp=0xc7, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x96}, {.addr=0x3e12, .value=0xa4}, {.addr=0x3e13, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e12, .value=0xa4, .type=IO_READ},
        {.addr=0x3e13, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x344f, .a=0x41, .x=0xa1, .y=0x8e, .sp=0x1b, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0xce}, {.addr=0x344f, .value=0xa4}, {.addr=0x3450, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x3451, .a=0x73, .x=0xa1, .y=0x8e, .sp=0x1b, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0xce}, {.addr=0x344f, .value=0xa4}, {.addr=0x3450, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x344f, .value=0xa4, .type=IO_READ},
        {.addr=0x3450, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0xc1, .x=0x9f, .y=0x1d, .sp=0xf2, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xf3}, {.addr=0x6300, .value=0xa4}, {.addr=0x6301, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x6302, .a=0xcd, .x=0x9f, .y=0x1d, .sp=0xf2, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xf3}, {.addr=0x6300, .value=0xa4}, {.addr=0x6301, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0xa4, .type=IO_READ},
        {.addr=0x6301, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x3b32, .a=0xb7, .x=0x99, .y=0x87, .sp=0x96, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x47}, {.addr=0x3b32, .value=0xa4}, {.addr=0x3b33, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x3b34, .a=0x70, .x=0x99, .y=0x87, .sp=0x96, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x47}, {.addr=0x3b32, .value=0xa4}, {.addr=0x3b33, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b32, .value=0xa4, .type=IO_READ},
        {.addr=0x3b33, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x5759, .a=0xbd, .x=0x4d, .y=0xb2, .sp=0x42, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x29}, {.addr=0x5759, .value=0xa4}, {.addr=0x575a, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x575b, .a=0x93, .x=0x4d, .y=0xb2, .sp=0x42, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x29}, {.addr=0x5759, .value=0xa4}, {.addr=0x575a, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5759, .value=0xa4, .type=IO_READ},
        {.addr=0x575a, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x1074, .a=0x8a, .x=0x2a, .y=0x00, .sp=0xbf, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xe6}, {.addr=0x1074, .value=0xa4}, {.addr=0x1075, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x1076, .a=0xa3, .x=0x2a, .y=0x00, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xe6}, {.addr=0x1074, .value=0xa4}, {.addr=0x1075, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1074, .value=0xa4, .type=IO_READ},
        {.addr=0x1075, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6e97, .a=0xbc, .x=0xd2, .y=0x74, .sp=0xa6, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x7f}, {.addr=0x6e97, .value=0xa4}, {.addr=0x6e98, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x6e99, .a=0x3d, .x=0xd2, .y=0x74, .sp=0xa6, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x7f}, {.addr=0x6e97, .value=0xa4}, {.addr=0x6e98, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e97, .value=0xa4, .type=IO_READ},
        {.addr=0x6e98, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x7d31, .a=0xa7, .x=0xcf, .y=0x2d, .sp=0xce, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xbe}, {.addr=0x7d31, .value=0xa4}, {.addr=0x7d32, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x7d33, .a=0xe9, .x=0xcf, .y=0x2d, .sp=0xce, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xbe}, {.addr=0x7d31, .value=0xa4}, {.addr=0x7d32, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d31, .value=0xa4, .type=IO_READ},
        {.addr=0x7d32, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x145a, .a=0x40, .x=0xc8, .y=0x88, .sp=0x31, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x92}, {.addr=0x145a, .value=0xa4}, {.addr=0x145b, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x145c, .a=0xae, .x=0xc8, .y=0x88, .sp=0x31, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x92}, {.addr=0x145a, .value=0xa4}, {.addr=0x145b, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x145a, .value=0xa4, .type=IO_READ},
        {.addr=0x145b, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xaf5f, .a=0x23, .x=0x0c, .y=0xee, .sp=0xad, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xce}, {.addr=0xaf5f, .value=0xa4}, {.addr=0xaf60, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xaf61, .a=0x54, .x=0x0c, .y=0xee, .sp=0xad, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xce}, {.addr=0xaf5f, .value=0xa4}, {.addr=0xaf60, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf5f, .value=0xa4, .type=IO_READ},
        {.addr=0xaf60, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x6d0a, .a=0x24, .x=0x51, .y=0x7e, .sp=0xae, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0x0a}, {.addr=0x6d0a, .value=0xa4}, {.addr=0x6d0b, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x6d0c, .a=0x19, .x=0x51, .y=0x7e, .sp=0xae, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0x0a}, {.addr=0x6d0a, .value=0xa4}, {.addr=0x6d0b, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d0a, .value=0xa4, .type=IO_READ},
        {.addr=0x6d0b, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7571, .a=0xcc, .x=0xc6, .y=0xc2, .sp=0x8d, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xb9}, {.addr=0x7571, .value=0xa4}, {.addr=0x7572, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x7573, .a=0x13, .x=0xc6, .y=0xc2, .sp=0x8d, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xb9}, {.addr=0x7571, .value=0xa4}, {.addr=0x7572, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7571, .value=0xa4, .type=IO_READ},
        {.addr=0x7572, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x2163, .a=0x52, .x=0x11, .y=0x45, .sp=0x69, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x80}, {.addr=0x2163, .value=0xa4}, {.addr=0x2164, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x2165, .a=0xd2, .x=0x11, .y=0x45, .sp=0x69, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x80}, {.addr=0x2163, .value=0xa4}, {.addr=0x2164, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2163, .value=0xa4, .type=IO_READ},
        {.addr=0x2164, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x099e, .a=0xc7, .x=0x43, .y=0xf6, .sp=0xe0, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x7e}, {.addr=0x099e, .value=0xa4}, {.addr=0x099f, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x09a0, .a=0x49, .x=0x43, .y=0xf6, .sp=0xe0, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x7e}, {.addr=0x099e, .value=0xa4}, {.addr=0x099f, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x099e, .value=0xa4, .type=IO_READ},
        {.addr=0x099f, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9700, .a=0xf9, .x=0x0d, .y=0x14, .sp=0x7b, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xc6}, {.addr=0x9700, .value=0xa4}, {.addr=0x9701, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x9702, .a=0x32, .x=0x0d, .y=0x14, .sp=0x7b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xc6}, {.addr=0x9700, .value=0xa4}, {.addr=0x9701, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x9700, .value=0xa4, .type=IO_READ},
        {.addr=0x9701, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x1a3f, .a=0xd1, .x=0x6c, .y=0xd6, .sp=0xce, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xe5}, {.addr=0x1a3f, .value=0xa4}, {.addr=0x1a40, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x1a41, .a=0xec, .x=0x6c, .y=0xd6, .sp=0xce, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xe5}, {.addr=0x1a3f, .value=0xa4}, {.addr=0x1a40, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a3f, .value=0xa4, .type=IO_READ},
        {.addr=0x1a40, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xe732, .a=0x80, .x=0x7d, .y=0xf7, .sp=0x48, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x66}, {.addr=0xe732, .value=0xa4}, {.addr=0xe733, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xe734, .a=0x19, .x=0x7d, .y=0xf7, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x66}, {.addr=0xe732, .value=0xa4}, {.addr=0xe733, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe732, .value=0xa4, .type=IO_READ},
        {.addr=0xe733, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xe0bb, .a=0x9a, .x=0xc8, .y=0xc4, .sp=0xa2, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x99}, {.addr=0xe0bb, .value=0xa4}, {.addr=0xe0bc, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0xe0bd, .a=0x01, .x=0xc8, .y=0xc4, .sp=0xa2, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x99}, {.addr=0xe0bb, .value=0xa4}, {.addr=0xe0bc, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0bb, .value=0xa4, .type=IO_READ},
        {.addr=0xe0bc, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xdddf, .a=0x5a, .x=0x5a, .y=0x8e, .sp=0xd9, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x04}, {.addr=0xdddf, .value=0xa4}, {.addr=0xdde0, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xdde1, .a=0x55, .x=0x5a, .y=0x8e, .sp=0xd9, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x04}, {.addr=0xdddf, .value=0xa4}, {.addr=0xdde0, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xdddf, .value=0xa4, .type=IO_READ},
        {.addr=0xdde0, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x68b7, .a=0x51, .x=0xcf, .y=0xe4, .sp=0xa0, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x35}, {.addr=0x68b7, .value=0xa4}, {.addr=0x68b8, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x68b9, .a=0x1c, .x=0xcf, .y=0xe4, .sp=0xa0, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x35}, {.addr=0x68b7, .value=0xa4}, {.addr=0x68b8, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x68b7, .value=0xa4, .type=IO_READ},
        {.addr=0x68b8, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x5c62, .a=0xfb, .x=0xb8, .y=0x62, .sp=0x69, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x9b}, {.addr=0x5c62, .value=0xa4}, {.addr=0x5c63, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0x60, .x=0xb8, .y=0x62, .sp=0x69, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x9b}, {.addr=0x5c62, .value=0xa4}, {.addr=0x5c63, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c62, .value=0xa4, .type=IO_READ},
        {.addr=0x5c63, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x9f1c, .a=0x04, .x=0x41, .y=0x7c, .sp=0xf7, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x98}, {.addr=0x9f1c, .value=0xa4}, {.addr=0x9f1d, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x9f1e, .a=0x6c, .x=0x41, .y=0x7c, .sp=0xf7, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x98}, {.addr=0x9f1c, .value=0xa4}, {.addr=0x9f1d, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f1c, .value=0xa4, .type=IO_READ},
        {.addr=0x9f1d, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x48a5, .a=0xba, .x=0x54, .y=0x47, .sp=0x8b, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x91}, {.addr=0x48a5, .value=0xa4}, {.addr=0x48a6, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x48a7, .a=0x28, .x=0x54, .y=0x47, .sp=0x8b, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x91}, {.addr=0x48a5, .value=0xa4}, {.addr=0x48a6, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x48a5, .value=0xa4, .type=IO_READ},
        {.addr=0x48a6, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x153c, .a=0x76, .x=0x76, .y=0x61, .sp=0x77, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x74}, {.addr=0x153c, .value=0xa4}, {.addr=0x153d, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x153e, .a=0x01, .x=0x76, .y=0x61, .sp=0x77, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x74}, {.addr=0x153c, .value=0xa4}, {.addr=0x153d, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x153c, .value=0xa4, .type=IO_READ},
        {.addr=0x153d, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xbd0e, .a=0x17, .x=0xb7, .y=0xdd, .sp=0xf4, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x11}, {.addr=0xbd0e, .value=0xa4}, {.addr=0xbd0f, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xbd10, .a=0x05, .x=0xb7, .y=0xdd, .sp=0xf4, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x11}, {.addr=0xbd0e, .value=0xa4}, {.addr=0xbd0f, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd0e, .value=0xa4, .type=IO_READ},
        {.addr=0xbd0f, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x6d08, .a=0xd2, .x=0x02, .y=0x80, .sp=0x6e, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x0a}, {.addr=0x6d08, .value=0xa4}, {.addr=0x6d09, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x6d0a, .a=0xc8, .x=0x02, .y=0x80, .sp=0x6e, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x0a}, {.addr=0x6d08, .value=0xa4}, {.addr=0x6d09, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d08, .value=0xa4, .type=IO_READ},
        {.addr=0x6d09, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xd6c5, .a=0xd3, .x=0x34, .y=0x34, .sp=0x01, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x9b}, {.addr=0xd6c5, .value=0xa4}, {.addr=0xd6c6, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xd6c7, .a=0x37, .x=0x34, .y=0x34, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x9b}, {.addr=0xd6c5, .value=0xa4}, {.addr=0xd6c6, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6c5, .value=0xa4, .type=IO_READ},
        {.addr=0xd6c6, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xe578, .a=0x52, .x=0x04, .y=0x61, .sp=0x05, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xfc}, {.addr=0xe578, .value=0xa4}, {.addr=0xe579, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xe57a, .a=0x56, .x=0x04, .y=0x61, .sp=0x05, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xfc}, {.addr=0xe578, .value=0xa4}, {.addr=0xe579, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe578, .value=0xa4, .type=IO_READ},
        {.addr=0xe579, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x7ed8, .a=0xdb, .x=0x15, .y=0xfe, .sp=0x95, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xed}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x7eda, .a=0xed, .x=0x15, .y=0xfe, .sp=0x95, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xed}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ed8, .value=0xa4, .type=IO_READ},
        {.addr=0x7ed9, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x52f9, .a=0x83, .x=0x8a, .y=0x51, .sp=0x1a, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xaa}, {.addr=0x52f9, .value=0xa4}, {.addr=0x52fa, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x52fb, .a=0xd9, .x=0x8a, .y=0x51, .sp=0x1a, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xaa}, {.addr=0x52f9, .value=0xa4}, {.addr=0x52fa, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x52f9, .value=0xa4, .type=IO_READ},
        {.addr=0x52fa, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x4c65, .a=0xa0, .x=0x63, .y=0x7f, .sp=0x5f, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x91}, {.addr=0x4c65, .value=0xa4}, {.addr=0x4c66, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x4c67, .a=0x0f, .x=0x63, .y=0x7f, .sp=0x5f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x91}, {.addr=0x4c65, .value=0xa4}, {.addr=0x4c66, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c65, .value=0xa4, .type=IO_READ},
        {.addr=0x4c66, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x28bd, .a=0x61, .x=0x86, .y=0xb6, .sp=0xbe, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xdd}, {.addr=0x28bd, .value=0xa4}, {.addr=0x28be, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x28bf, .a=0x83, .x=0x86, .y=0xb6, .sp=0xbe, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xdd}, {.addr=0x28bd, .value=0xa4}, {.addr=0x28be, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x28bd, .value=0xa4, .type=IO_READ},
        {.addr=0x28be, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0100) {
    const struct CPU_State initial_cpu = {.pc=0x1ee1, .a=0xb7, .x=0xac, .y=0x4c, .sp=0x95, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x20}, {.addr=0x1ee1, .value=0xa4}, {.addr=0x1ee2, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x1ee3, .a=0x96, .x=0xac, .y=0x4c, .sp=0x95, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x20}, {.addr=0x1ee1, .value=0xa4}, {.addr=0x1ee2, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ee1, .value=0xa4, .type=IO_READ},
        {.addr=0x1ee2, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0101) {
    const struct CPU_State initial_cpu = {.pc=0x8fa4, .a=0xb1, .x=0xfd, .y=0x1e, .sp=0x2b, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xcb}, {.addr=0x8fa4, .value=0xa4}, {.addr=0x8fa5, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x8fa6, .a=0xe5, .x=0xfd, .y=0x1e, .sp=0x2b, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xcb}, {.addr=0x8fa4, .value=0xa4}, {.addr=0x8fa5, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fa4, .value=0xa4, .type=IO_READ},
        {.addr=0x8fa5, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0102) {
    const struct CPU_State initial_cpu = {.pc=0x82cc, .a=0x1f, .x=0x9c, .y=0x8b, .sp=0x4f, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x40}, {.addr=0x82cc, .value=0xa4}, {.addr=0x82cd, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x82ce, .a=0xdf, .x=0x9c, .y=0x8b, .sp=0x4f, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x40}, {.addr=0x82cc, .value=0xa4}, {.addr=0x82cd, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x82cc, .value=0xa4, .type=IO_READ},
        {.addr=0x82cd, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0103) {
    const struct CPU_State initial_cpu = {.pc=0xa55a, .a=0xd4, .x=0x2d, .y=0x50, .sp=0xdd, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x89}, {.addr=0xa55a, .value=0xa4}, {.addr=0xa55b, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa55c, .a=0x4b, .x=0x2d, .y=0x50, .sp=0xdd, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x89}, {.addr=0xa55a, .value=0xa4}, {.addr=0xa55b, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa55a, .value=0xa4, .type=IO_READ},
        {.addr=0xa55b, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd20d, .a=0xd4, .x=0xae, .y=0x01, .sp=0x10, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x0d}, {.addr=0xd20d, .value=0xa4}, {.addr=0xd20e, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xd20f, .a=0xc7, .x=0xae, .y=0x01, .sp=0x10, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x0d}, {.addr=0xd20d, .value=0xa4}, {.addr=0xd20e, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd20d, .value=0xa4, .type=IO_READ},
        {.addr=0xd20e, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0105) {
    const struct CPU_State initial_cpu = {.pc=0xf5a3, .a=0xf7, .x=0x31, .y=0x0b, .sp=0x29, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xc2}, {.addr=0xf5a3, .value=0xa4}, {.addr=0xf5a4, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xf5a5, .a=0x34, .x=0x31, .y=0x0b, .sp=0x29, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xc2}, {.addr=0xf5a3, .value=0xa4}, {.addr=0xf5a4, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5a3, .value=0xa4, .type=IO_READ},
        {.addr=0xf5a4, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0106) {
    const struct CPU_State initial_cpu = {.pc=0xd397, .a=0x22, .x=0x46, .y=0x27, .sp=0xef, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xac}, {.addr=0xd397, .value=0xa4}, {.addr=0xd398, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xd399, .a=0x75, .x=0x46, .y=0x27, .sp=0xef, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xac}, {.addr=0xd397, .value=0xa4}, {.addr=0xd398, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd397, .value=0xa4, .type=IO_READ},
        {.addr=0xd398, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0107) {
    const struct CPU_State initial_cpu = {.pc=0x7bf2, .a=0x4a, .x=0x4c, .y=0x9d, .sp=0xaa, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xd8}, {.addr=0x7bf2, .value=0xa4}, {.addr=0x7bf3, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7bf4, .a=0x71, .x=0x4c, .y=0x9d, .sp=0xaa, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xd8}, {.addr=0x7bf2, .value=0xa4}, {.addr=0x7bf3, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bf2, .value=0xa4, .type=IO_READ},
        {.addr=0x7bf3, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7fb3, .a=0x76, .x=0x13, .y=0x82, .sp=0x73, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x87}, {.addr=0x7fb3, .value=0xa4}, {.addr=0x7fb4, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x7fb5, .a=0xef, .x=0x13, .y=0x82, .sp=0x73, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x87}, {.addr=0x7fb3, .value=0xa4}, {.addr=0x7fb4, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fb3, .value=0xa4, .type=IO_READ},
        {.addr=0x7fb4, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0109) {
    const struct CPU_State initial_cpu = {.pc=0x5dbd, .a=0x26, .x=0xf9, .y=0x63, .sp=0x01, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xfa}, {.addr=0x5dbd, .value=0xa4}, {.addr=0x5dbe, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x5dbf, .a=0x2c, .x=0xf9, .y=0x63, .sp=0x01, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xfa}, {.addr=0x5dbd, .value=0xa4}, {.addr=0x5dbe, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dbd, .value=0xa4, .type=IO_READ},
        {.addr=0x5dbe, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010A) {
    const struct CPU_State initial_cpu = {.pc=0xd021, .a=0xb8, .x=0xe9, .y=0x09, .sp=0x16, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x2d}, {.addr=0xd021, .value=0xa4}, {.addr=0xd022, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xd023, .a=0x8b, .x=0xe9, .y=0x09, .sp=0x16, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x2d}, {.addr=0xd021, .value=0xa4}, {.addr=0xd022, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xd021, .value=0xa4, .type=IO_READ},
        {.addr=0xd022, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010B) {
    const struct CPU_State initial_cpu = {.pc=0x0bf4, .a=0x38, .x=0xac, .y=0x70, .sp=0x8e, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xf6}, {.addr=0x0bf4, .value=0xa4}, {.addr=0x0bf5, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x0bf6, .a=0x41, .x=0xac, .y=0x70, .sp=0x8e, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xf6}, {.addr=0x0bf4, .value=0xa4}, {.addr=0x0bf5, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bf4, .value=0xa4, .type=IO_READ},
        {.addr=0x0bf5, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010C) {
    const struct CPU_State initial_cpu = {.pc=0xa552, .a=0xae, .x=0x9c, .y=0x16, .sp=0x28, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x35}, {.addr=0xa552, .value=0xa4}, {.addr=0xa553, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xa554, .a=0x78, .x=0x9c, .y=0x16, .sp=0x28, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x35}, {.addr=0xa552, .value=0xa4}, {.addr=0xa553, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xa552, .value=0xa4, .type=IO_READ},
        {.addr=0xa553, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010D) {
    const struct CPU_State initial_cpu = {.pc=0x60cd, .a=0x6c, .x=0xfa, .y=0x17, .sp=0x13, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xd7}, {.addr=0x60cd, .value=0xa4}, {.addr=0x60ce, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x60cf, .a=0x94, .x=0xfa, .y=0x17, .sp=0x13, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xd7}, {.addr=0x60cd, .value=0xa4}, {.addr=0x60ce, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x60cd, .value=0xa4, .type=IO_READ},
        {.addr=0x60ce, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010E) {
    const struct CPU_State initial_cpu = {.pc=0xa95f, .a=0x11, .x=0xce, .y=0x88, .sp=0xdb, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xa4}, {.addr=0xa95f, .value=0xa4}, {.addr=0xa960, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xa961, .a=0x6c, .x=0xce, .y=0x88, .sp=0xdb, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xa4}, {.addr=0xa95f, .value=0xa4}, {.addr=0xa960, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xa95f, .value=0xa4, .type=IO_READ},
        {.addr=0xa960, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_010F) {
    const struct CPU_State initial_cpu = {.pc=0xd301, .a=0x08, .x=0x48, .y=0x93, .sp=0x33, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x2e}, {.addr=0xd301, .value=0xa4}, {.addr=0xd302, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xd303, .a=0xd9, .x=0x48, .y=0x93, .sp=0x33, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x2e}, {.addr=0xd301, .value=0xa4}, {.addr=0xd302, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd301, .value=0xa4, .type=IO_READ},
        {.addr=0xd302, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0110) {
    const struct CPU_State initial_cpu = {.pc=0x58fc, .a=0x4c, .x=0x4b, .y=0x78, .sp=0x6f, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xa8}, {.addr=0x58fc, .value=0xa4}, {.addr=0x58fd, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x58fe, .a=0xa3, .x=0x4b, .y=0x78, .sp=0x6f, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xa8}, {.addr=0x58fc, .value=0xa4}, {.addr=0x58fd, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x58fc, .value=0xa4, .type=IO_READ},
        {.addr=0x58fd, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0111) {
    const struct CPU_State initial_cpu = {.pc=0x0f66, .a=0x36, .x=0xb8, .y=0x10, .sp=0x0a, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xd5}, {.addr=0x0f66, .value=0xa4}, {.addr=0x0f67, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x0f68, .a=0x60, .x=0xb8, .y=0x10, .sp=0x0a, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xd5}, {.addr=0x0f66, .value=0xa4}, {.addr=0x0f67, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f66, .value=0xa4, .type=IO_READ},
        {.addr=0x0f67, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0112) {
    const struct CPU_State initial_cpu = {.pc=0x08cf, .a=0x13, .x=0xe0, .y=0x14, .sp=0x5d, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xe1}, {.addr=0x08cf, .value=0xa4}, {.addr=0x08d0, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x08d1, .a=0x32, .x=0xe0, .y=0x14, .sp=0x5d, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xe1}, {.addr=0x08cf, .value=0xa4}, {.addr=0x08d0, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x08cf, .value=0xa4, .type=IO_READ},
        {.addr=0x08d0, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0113) {
    const struct CPU_State initial_cpu = {.pc=0xd9ec, .a=0xdc, .x=0xcc, .y=0xca, .sp=0x5b, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x83}, {.addr=0xd9ec, .value=0xa4}, {.addr=0xd9ed, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xd9ee, .a=0x58, .x=0xcc, .y=0xca, .sp=0x5b, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x83}, {.addr=0xd9ec, .value=0xa4}, {.addr=0xd9ed, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9ec, .value=0xa4, .type=IO_READ},
        {.addr=0xd9ed, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0114) {
    const struct CPU_State initial_cpu = {.pc=0xd8bd, .a=0x34, .x=0x0b, .y=0x25, .sp=0x3d, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xa0}, {.addr=0xd8bd, .value=0xa4}, {.addr=0xd8be, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xd8bf, .a=0x93, .x=0x0b, .y=0x25, .sp=0x3d, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xa0}, {.addr=0xd8bd, .value=0xa4}, {.addr=0xd8be, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8bd, .value=0xa4, .type=IO_READ},
        {.addr=0xd8be, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0115) {
    const struct CPU_State initial_cpu = {.pc=0xa2a5, .a=0x4b, .x=0x92, .y=0x91, .sp=0x7d, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x34}, {.addr=0xa2a5, .value=0xa4}, {.addr=0xa2a6, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xa2a7, .a=0x16, .x=0x92, .y=0x91, .sp=0x7d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x34}, {.addr=0xa2a5, .value=0xa4}, {.addr=0xa2a6, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2a5, .value=0xa4, .type=IO_READ},
        {.addr=0xa2a6, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0116) {
    const struct CPU_State initial_cpu = {.pc=0x4073, .a=0x04, .x=0xb8, .y=0x42, .sp=0xae, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x9f}, {.addr=0x4073, .value=0xa4}, {.addr=0x4074, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x4075, .a=0x65, .x=0xb8, .y=0x42, .sp=0xae, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x9f}, {.addr=0x4073, .value=0xa4}, {.addr=0x4074, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4073, .value=0xa4, .type=IO_READ},
        {.addr=0x4074, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0117) {
    const struct CPU_State initial_cpu = {.pc=0x4031, .a=0x0d, .x=0x2d, .y=0x23, .sp=0xd8, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x96}, {.addr=0x4031, .value=0xa4}, {.addr=0x4032, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x4033, .a=0x76, .x=0x2d, .y=0x23, .sp=0xd8, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x96}, {.addr=0x4031, .value=0xa4}, {.addr=0x4032, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x4031, .value=0xa4, .type=IO_READ},
        {.addr=0x4032, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0118) {
    const struct CPU_State initial_cpu = {.pc=0xb0e2, .a=0x56, .x=0x9a, .y=0x5c, .sp=0x0e, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x18}, {.addr=0xb0e2, .value=0xa4}, {.addr=0xb0e3, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xb0e4, .a=0x3e, .x=0x9a, .y=0x5c, .sp=0x0e, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x18}, {.addr=0xb0e2, .value=0xa4}, {.addr=0xb0e3, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0e2, .value=0xa4, .type=IO_READ},
        {.addr=0xb0e3, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0119) {
    const struct CPU_State initial_cpu = {.pc=0x3765, .a=0xfb, .x=0x5a, .y=0x6f, .sp=0xa7, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xe0}, {.addr=0x3765, .value=0xa4}, {.addr=0x3766, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x3767, .a=0x1a, .x=0x5a, .y=0x6f, .sp=0xa7, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xe0}, {.addr=0x3765, .value=0xa4}, {.addr=0x3766, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x3765, .value=0xa4, .type=IO_READ},
        {.addr=0x3766, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011A) {
    const struct CPU_State initial_cpu = {.pc=0x88f4, .a=0x4a, .x=0xc1, .y=0xfd, .sp=0x48, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0xec}, {.addr=0x88f4, .value=0xa4}, {.addr=0x88f5, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x88f6, .a=0x5d, .x=0xc1, .y=0xfd, .sp=0x48, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0xec}, {.addr=0x88f4, .value=0xa4}, {.addr=0x88f5, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x88f4, .value=0xa4, .type=IO_READ},
        {.addr=0x88f5, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011B) {
    const struct CPU_State initial_cpu = {.pc=0x5b0d, .a=0x86, .x=0x44, .y=0xa2, .sp=0xd7, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x99}, {.addr=0x5b0d, .value=0xa4}, {.addr=0x5b0e, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x5b0f, .a=0xed, .x=0x44, .y=0xa2, .sp=0xd7, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x99}, {.addr=0x5b0d, .value=0xa4}, {.addr=0x5b0e, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b0d, .value=0xa4, .type=IO_READ},
        {.addr=0x5b0e, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011C) {
    const struct CPU_State initial_cpu = {.pc=0x1591, .a=0x11, .x=0x09, .y=0x4d, .sp=0x73, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xc0}, {.addr=0x1591, .value=0xa4}, {.addr=0x1592, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x1593, .a=0x50, .x=0x09, .y=0x4d, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xc0}, {.addr=0x1591, .value=0xa4}, {.addr=0x1592, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1591, .value=0xa4, .type=IO_READ},
        {.addr=0x1592, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011D) {
    const struct CPU_State initial_cpu = {.pc=0x5809, .a=0x59, .x=0x47, .y=0xa2, .sp=0x03, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x6d}, {.addr=0x5809, .value=0xa4}, {.addr=0x580a, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x580b, .a=0xec, .x=0x47, .y=0xa2, .sp=0x03, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x6d}, {.addr=0x5809, .value=0xa4}, {.addr=0x580a, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x5809, .value=0xa4, .type=IO_READ},
        {.addr=0x580a, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4b07, .a=0x70, .x=0xc6, .y=0xa5, .sp=0xcc, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x1a}, {.addr=0x4b07, .value=0xa4}, {.addr=0x4b08, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x4b09, .a=0x55, .x=0xc6, .y=0xa5, .sp=0xcc, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x1a}, {.addr=0x4b07, .value=0xa4}, {.addr=0x4b08, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b07, .value=0xa4, .type=IO_READ},
        {.addr=0x4b08, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf238, .a=0x60, .x=0x33, .y=0xc2, .sp=0x51, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x37}, {.addr=0xf238, .value=0xa4}, {.addr=0xf239, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xf23a, .a=0x28, .x=0x33, .y=0xc2, .sp=0x51, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x37}, {.addr=0xf238, .value=0xa4}, {.addr=0xf239, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xf238, .value=0xa4, .type=IO_READ},
        {.addr=0xf239, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0120) {
    const struct CPU_State initial_cpu = {.pc=0x2f7d, .a=0x0a, .x=0xd5, .y=0xb9, .sp=0xb6, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x59}, {.addr=0x2f7d, .value=0xa4}, {.addr=0x2f7e, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x2f7f, .a=0xb0, .x=0xd5, .y=0xb9, .sp=0xb6, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x59}, {.addr=0x2f7d, .value=0xa4}, {.addr=0x2f7e, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f7d, .value=0xa4, .type=IO_READ},
        {.addr=0x2f7e, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0121) {
    const struct CPU_State initial_cpu = {.pc=0x39b1, .a=0xce, .x=0x6c, .y=0x9a, .sp=0xc2, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x75}, {.addr=0x39b1, .value=0xa4}, {.addr=0x39b2, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x39b3, .a=0x58, .x=0x6c, .y=0x9a, .sp=0xc2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x75}, {.addr=0x39b1, .value=0xa4}, {.addr=0x39b2, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x39b1, .value=0xa4, .type=IO_READ},
        {.addr=0x39b2, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0122) {
    const struct CPU_State initial_cpu = {.pc=0xefda, .a=0x80, .x=0xd5, .y=0x46, .sp=0x2f, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xf4}, {.addr=0xefda, .value=0xa4}, {.addr=0xefdb, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xefdc, .a=0x8b, .x=0xd5, .y=0x46, .sp=0x2f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xf4}, {.addr=0xefda, .value=0xa4}, {.addr=0xefdb, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xefda, .value=0xa4, .type=IO_READ},
        {.addr=0xefdb, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0123) {
    const struct CPU_State initial_cpu = {.pc=0xc185, .a=0x63, .x=0x94, .y=0x88, .sp=0xf5, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xab}, {.addr=0xc185, .value=0xa4}, {.addr=0xc186, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc187, .a=0xb8, .x=0x94, .y=0x88, .sp=0xf5, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xab}, {.addr=0xc185, .value=0xa4}, {.addr=0xc186, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc185, .value=0xa4, .type=IO_READ},
        {.addr=0xc186, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0124) {
    const struct CPU_State initial_cpu = {.pc=0xb267, .a=0xc5, .x=0x68, .y=0x48, .sp=0xee, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x29}, {.addr=0xb267, .value=0xa4}, {.addr=0xb268, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xb269, .a=0x9b, .x=0x68, .y=0x48, .sp=0xee, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x29}, {.addr=0xb267, .value=0xa4}, {.addr=0xb268, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb267, .value=0xa4, .type=IO_READ},
        {.addr=0xb268, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe3a4, .a=0x4a, .x=0x6f, .y=0x65, .sp=0xe2, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x46}, {.addr=0xe3a4, .value=0xa4}, {.addr=0xe3a5, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xe3a6, .a=0x03, .x=0x6f, .y=0x65, .sp=0xe2, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x46}, {.addr=0xe3a4, .value=0xa4}, {.addr=0xe3a5, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3a4, .value=0xa4, .type=IO_READ},
        {.addr=0xe3a5, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0126) {
    const struct CPU_State initial_cpu = {.pc=0x65bb, .a=0x0c, .x=0x7a, .y=0xef, .sp=0x92, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x58}, {.addr=0x65bb, .value=0xa4}, {.addr=0x65bc, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x65bd, .a=0xb3, .x=0x7a, .y=0xef, .sp=0x92, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x58}, {.addr=0x65bb, .value=0xa4}, {.addr=0x65bc, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x65bb, .value=0xa4, .type=IO_READ},
        {.addr=0x65bc, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0127) {
    const struct CPU_State initial_cpu = {.pc=0x8183, .a=0x81, .x=0xd2, .y=0xd0, .sp=0xb1, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x04}, {.addr=0x8183, .value=0xa4}, {.addr=0x8184, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x8185, .a=0x7d, .x=0xd2, .y=0xd0, .sp=0xb1, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x04}, {.addr=0x8183, .value=0xa4}, {.addr=0x8184, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x8183, .value=0xa4, .type=IO_READ},
        {.addr=0x8184, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0128) {
    const struct CPU_State initial_cpu = {.pc=0x2428, .a=0x2c, .x=0x7c, .y=0x13, .sp=0x8b, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x7d}, {.addr=0x2428, .value=0xa4}, {.addr=0x2429, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x242a, .a=0xaf, .x=0x7c, .y=0x13, .sp=0x8b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x7d}, {.addr=0x2428, .value=0xa4}, {.addr=0x2429, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x2428, .value=0xa4, .type=IO_READ},
        {.addr=0x2429, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0129) {
    const struct CPU_State initial_cpu = {.pc=0x5df0, .a=0x37, .x=0x3f, .y=0x0d, .sp=0xcc, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xf0}, {.addr=0x5df0, .value=0xa4}, {.addr=0x5df1, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x5df2, .a=0x47, .x=0x3f, .y=0x0d, .sp=0xcc, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xf0}, {.addr=0x5df0, .value=0xa4}, {.addr=0x5df1, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5df0, .value=0xa4, .type=IO_READ},
        {.addr=0x5df1, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8c8e, .a=0x52, .x=0xa0, .y=0xfb, .sp=0xec, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xfa}, {.addr=0x8c8e, .value=0xa4}, {.addr=0x8c8f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x8c90, .a=0x57, .x=0xa0, .y=0xfb, .sp=0xec, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xfa}, {.addr=0x8c8e, .value=0xa4}, {.addr=0x8c8f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c8e, .value=0xa4, .type=IO_READ},
        {.addr=0x8c8f, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012B) {
    const struct CPU_State initial_cpu = {.pc=0xbf8b, .a=0x1c, .x=0x48, .y=0xa9, .sp=0x66, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x9a}, {.addr=0xbf8b, .value=0xa4}, {.addr=0xbf8c, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xbf8d, .a=0x82, .x=0x48, .y=0xa9, .sp=0x66, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x9a}, {.addr=0xbf8b, .value=0xa4}, {.addr=0xbf8c, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf8b, .value=0xa4, .type=IO_READ},
        {.addr=0xbf8c, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012C) {
    const struct CPU_State initial_cpu = {.pc=0x6fa4, .a=0xcd, .x=0x60, .y=0x40, .sp=0x28, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x6d}, {.addr=0x6fa4, .value=0xa4}, {.addr=0x6fa5, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x6fa6, .a=0x60, .x=0x60, .y=0x40, .sp=0x28, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x6d}, {.addr=0x6fa4, .value=0xa4}, {.addr=0x6fa5, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fa4, .value=0xa4, .type=IO_READ},
        {.addr=0x6fa5, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012D) {
    const struct CPU_State initial_cpu = {.pc=0x56b5, .a=0x5b, .x=0x88, .y=0x68, .sp=0xe3, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x4c}, {.addr=0x56b5, .value=0xa4}, {.addr=0x56b6, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x56b7, .a=0x0f, .x=0x88, .y=0x68, .sp=0xe3, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x4c}, {.addr=0x56b5, .value=0xa4}, {.addr=0x56b6, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x56b5, .value=0xa4, .type=IO_READ},
        {.addr=0x56b6, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2d40, .a=0xde, .x=0x3a, .y=0x66, .sp=0xf3, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0xbe}, {.addr=0x2d40, .value=0xa4}, {.addr=0x2d41, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x2d42, .a=0x1f, .x=0x3a, .y=0x66, .sp=0xf3, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0xbe}, {.addr=0x2d40, .value=0xa4}, {.addr=0x2d41, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d40, .value=0xa4, .type=IO_READ},
        {.addr=0x2d41, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_012F) {
    const struct CPU_State initial_cpu = {.pc=0xe090, .a=0x13, .x=0x1b, .y=0x84, .sp=0xd9, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xc6}, {.addr=0xe090, .value=0xa4}, {.addr=0xe091, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe092, .a=0x4c, .x=0x1b, .y=0x84, .sp=0xd9, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xc6}, {.addr=0xe090, .value=0xa4}, {.addr=0xe091, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe090, .value=0xa4, .type=IO_READ},
        {.addr=0xe091, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd2b0, .a=0x9f, .x=0x79, .y=0x3e, .sp=0xbd, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xfa}, {.addr=0xd2b0, .value=0xa4}, {.addr=0xd2b1, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xd2b2, .a=0xa4, .x=0x79, .y=0x3e, .sp=0xbd, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xfa}, {.addr=0xd2b0, .value=0xa4}, {.addr=0xd2b1, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2b0, .value=0xa4, .type=IO_READ},
        {.addr=0xd2b1, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0131) {
    const struct CPU_State initial_cpu = {.pc=0x3483, .a=0x9f, .x=0x78, .y=0x6e, .sp=0x94, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x44}, {.addr=0x3483, .value=0xa4}, {.addr=0x3484, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x3485, .a=0x5b, .x=0x78, .y=0x6e, .sp=0x94, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x44}, {.addr=0x3483, .value=0xa4}, {.addr=0x3484, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x3483, .value=0xa4, .type=IO_READ},
        {.addr=0x3484, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0132) {
    const struct CPU_State initial_cpu = {.pc=0xa209, .a=0x57, .x=0x13, .y=0xfb, .sp=0x78, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xcf}, {.addr=0xa209, .value=0xa4}, {.addr=0xa20a, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xa20b, .a=0x88, .x=0x13, .y=0xfb, .sp=0x78, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xcf}, {.addr=0xa209, .value=0xa4}, {.addr=0xa20a, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa209, .value=0xa4, .type=IO_READ},
        {.addr=0xa20a, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0133) {
    const struct CPU_State initial_cpu = {.pc=0xd3d4, .a=0x0c, .x=0x7c, .y=0x03, .sp=0xf8, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xb6}, {.addr=0xd3d4, .value=0xa4}, {.addr=0xd3d5, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xd3d6, .a=0x55, .x=0x7c, .y=0x03, .sp=0xf8, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xb6}, {.addr=0xd3d4, .value=0xa4}, {.addr=0xd3d5, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3d4, .value=0xa4, .type=IO_READ},
        {.addr=0xd3d5, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0134) {
    const struct CPU_State initial_cpu = {.pc=0xeb50, .a=0x26, .x=0x0a, .y=0x99, .sp=0x08, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x5e}, {.addr=0xeb50, .value=0xa4}, {.addr=0xeb51, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xeb52, .a=0xc8, .x=0x0a, .y=0x99, .sp=0x08, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x5e}, {.addr=0xeb50, .value=0xa4}, {.addr=0xeb51, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb50, .value=0xa4, .type=IO_READ},
        {.addr=0xeb51, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0135) {
    const struct CPU_State initial_cpu = {.pc=0xe137, .a=0x63, .x=0x70, .y=0xc8, .sp=0x35, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xff}, {.addr=0xe137, .value=0xa4}, {.addr=0xe138, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xe139, .a=0x63, .x=0x70, .y=0xc8, .sp=0x35, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xff}, {.addr=0xe137, .value=0xa4}, {.addr=0xe138, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xe137, .value=0xa4, .type=IO_READ},
        {.addr=0xe138, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0136) {
    const struct CPU_State initial_cpu = {.pc=0x9edc, .a=0x96, .x=0x17, .y=0x26, .sp=0xfa, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x4c}, {.addr=0x9edc, .value=0xa4}, {.addr=0x9edd, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x9ede, .a=0x49, .x=0x17, .y=0x26, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x4c}, {.addr=0x9edc, .value=0xa4}, {.addr=0x9edd, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9edc, .value=0xa4, .type=IO_READ},
        {.addr=0x9edd, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0137) {
    const struct CPU_State initial_cpu = {.pc=0x5b1a, .a=0xb9, .x=0xc4, .y=0x72, .sp=0xbc, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x4a}, {.addr=0x5b1a, .value=0xa4}, {.addr=0x5b1b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x5b1c, .a=0x6e, .x=0xc4, .y=0x72, .sp=0xbc, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x4a}, {.addr=0x5b1a, .value=0xa4}, {.addr=0x5b1b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b1a, .value=0xa4, .type=IO_READ},
        {.addr=0x5b1b, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0138) {
    const struct CPU_State initial_cpu = {.pc=0x157d, .a=0xd7, .x=0x07, .y=0xde, .sp=0xf2, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x4b}, {.addr=0x157d, .value=0xa4}, {.addr=0x157e, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x157f, .a=0x8b, .x=0x07, .y=0xde, .sp=0xf2, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x4b}, {.addr=0x157d, .value=0xa4}, {.addr=0x157e, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x157d, .value=0xa4, .type=IO_READ},
        {.addr=0x157e, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0139) {
    const struct CPU_State initial_cpu = {.pc=0x2fa7, .a=0x12, .x=0x87, .y=0x8c, .sp=0xe3, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xbb}, {.addr=0x2fa7, .value=0xa4}, {.addr=0x2fa8, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x2fa9, .a=0x57, .x=0x87, .y=0x8c, .sp=0xe3, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xbb}, {.addr=0x2fa7, .value=0xa4}, {.addr=0x2fa8, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fa7, .value=0xa4, .type=IO_READ},
        {.addr=0x2fa8, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013A) {
    const struct CPU_State initial_cpu = {.pc=0x727c, .a=0xae, .x=0x66, .y=0x0d, .sp=0x90, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xea}, {.addr=0x727c, .value=0xa4}, {.addr=0x727d, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x727e, .a=0xc4, .x=0x66, .y=0x0d, .sp=0x90, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xea}, {.addr=0x727c, .value=0xa4}, {.addr=0x727d, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x727c, .value=0xa4, .type=IO_READ},
        {.addr=0x727d, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013B) {
    const struct CPU_State initial_cpu = {.pc=0xf223, .a=0xde, .x=0xa2, .y=0x9d, .sp=0x7c, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xae}, {.addr=0xf223, .value=0xa4}, {.addr=0xf224, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xf225, .a=0x30, .x=0xa2, .y=0x9d, .sp=0x7c, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xae}, {.addr=0xf223, .value=0xa4}, {.addr=0xf224, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf223, .value=0xa4, .type=IO_READ},
        {.addr=0xf224, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013C) {
    const struct CPU_State initial_cpu = {.pc=0x5e20, .a=0x54, .x=0xe1, .y=0xad, .sp=0xb9, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x61}, {.addr=0x5e20, .value=0xa4}, {.addr=0x5e21, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x5e22, .a=0xf2, .x=0xe1, .y=0xad, .sp=0xb9, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x61}, {.addr=0x5e20, .value=0xa4}, {.addr=0x5e21, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e20, .value=0xa4, .type=IO_READ},
        {.addr=0x5e21, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013D) {
    const struct CPU_State initial_cpu = {.pc=0x06ba, .a=0xa1, .x=0x64, .y=0x96, .sp=0x00, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xe8}, {.addr=0x06ba, .value=0xa4}, {.addr=0x06bb, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x06bc, .a=0xb9, .x=0x64, .y=0x96, .sp=0x00, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xe8}, {.addr=0x06ba, .value=0xa4}, {.addr=0x06bb, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x06ba, .value=0xa4, .type=IO_READ},
        {.addr=0x06bb, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013E) {
    const struct CPU_State initial_cpu = {.pc=0x46bb, .a=0x4f, .x=0xb8, .y=0x49, .sp=0x58, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x34}, {.addr=0x46bb, .value=0xa4}, {.addr=0x46bc, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x46bd, .a=0x1a, .x=0xb8, .y=0x49, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x34}, {.addr=0x46bb, .value=0xa4}, {.addr=0x46bc, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x46bb, .value=0xa4, .type=IO_READ},
        {.addr=0x46bc, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_013F) {
    const struct CPU_State initial_cpu = {.pc=0x78ba, .a=0x82, .x=0x56, .y=0xe2, .sp=0xcf, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xef}, {.addr=0x78ba, .value=0xa4}, {.addr=0x78bb, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x78bc, .a=0x92, .x=0x56, .y=0xe2, .sp=0xcf, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xef}, {.addr=0x78ba, .value=0xa4}, {.addr=0x78bb, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x78ba, .value=0xa4, .type=IO_READ},
        {.addr=0x78bb, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0140) {
    const struct CPU_State initial_cpu = {.pc=0x4a37, .a=0x52, .x=0xba, .y=0x5e, .sp=0xe6, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xf7}, {.addr=0x4a37, .value=0xa4}, {.addr=0x4a38, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x4a39, .a=0x5b, .x=0xba, .y=0x5e, .sp=0xe6, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xf7}, {.addr=0x4a37, .value=0xa4}, {.addr=0x4a38, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a37, .value=0xa4, .type=IO_READ},
        {.addr=0x4a38, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0141) {
    const struct CPU_State initial_cpu = {.pc=0x22fb, .a=0x25, .x=0x74, .y=0x99, .sp=0x9f, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x86}, {.addr=0x22fb, .value=0xa4}, {.addr=0x22fc, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x22fd, .a=0x9f, .x=0x74, .y=0x99, .sp=0x9f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x86}, {.addr=0x22fb, .value=0xa4}, {.addr=0x22fc, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x22fb, .value=0xa4, .type=IO_READ},
        {.addr=0x22fc, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0142) {
    const struct CPU_State initial_cpu = {.pc=0x378b, .a=0x65, .x=0x5d, .y=0x98, .sp=0x1d, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x09}, {.addr=0x378b, .value=0xa4}, {.addr=0x378c, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x378d, .a=0x5b, .x=0x5d, .y=0x98, .sp=0x1d, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x09}, {.addr=0x378b, .value=0xa4}, {.addr=0x378c, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x378b, .value=0xa4, .type=IO_READ},
        {.addr=0x378c, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0143) {
    const struct CPU_State initial_cpu = {.pc=0xac5b, .a=0x4d, .x=0xa4, .y=0x81, .sp=0x9f, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x58}, {.addr=0xac5b, .value=0xa4}, {.addr=0xac5c, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xac5d, .a=0xf4, .x=0xa4, .y=0x81, .sp=0x9f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x58}, {.addr=0xac5b, .value=0xa4}, {.addr=0xac5c, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xac5b, .value=0xa4, .type=IO_READ},
        {.addr=0xac5c, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0144) {
    const struct CPU_State initial_cpu = {.pc=0x61be, .a=0xcb, .x=0x72, .y=0x78, .sp=0x18, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xe6}, {.addr=0x61be, .value=0xa4}, {.addr=0x61bf, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x61c0, .a=0xe4, .x=0x72, .y=0x78, .sp=0x18, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xe6}, {.addr=0x61be, .value=0xa4}, {.addr=0x61bf, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x61be, .value=0xa4, .type=IO_READ},
        {.addr=0x61bf, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0145) {
    const struct CPU_State initial_cpu = {.pc=0x469c, .a=0xf7, .x=0x74, .y=0x58, .sp=0x9e, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0xea}, {.addr=0x469c, .value=0xa4}, {.addr=0x469d, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x469e, .a=0x0d, .x=0x74, .y=0x58, .sp=0x9e, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0xea}, {.addr=0x469c, .value=0xa4}, {.addr=0x469d, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x469c, .value=0xa4, .type=IO_READ},
        {.addr=0x469d, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0146) {
    const struct CPU_State initial_cpu = {.pc=0x1825, .a=0xda, .x=0x2b, .y=0x5a, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x78}, {.addr=0x1825, .value=0xa4}, {.addr=0x1826, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x1827, .a=0x62, .x=0x2b, .y=0x5a, .sp=0x6b, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x78}, {.addr=0x1825, .value=0xa4}, {.addr=0x1826, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x1825, .value=0xa4, .type=IO_READ},
        {.addr=0x1826, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0147) {
    const struct CPU_State initial_cpu = {.pc=0xac9f, .a=0xa3, .x=0x42, .y=0xaa, .sp=0x4c, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x24}, {.addr=0xac9f, .value=0xa4}, {.addr=0xaca0, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xaca1, .a=0x7f, .x=0x42, .y=0xaa, .sp=0x4c, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x24}, {.addr=0xac9f, .value=0xa4}, {.addr=0xaca0, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xac9f, .value=0xa4, .type=IO_READ},
        {.addr=0xaca0, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0148) {
    const struct CPU_State initial_cpu = {.pc=0x405c, .a=0x11, .x=0xd8, .y=0x33, .sp=0x1f, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xd8}, {.addr=0x405c, .value=0xa4}, {.addr=0x405d, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x405e, .a=0x39, .x=0xd8, .y=0x33, .sp=0x1f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xd8}, {.addr=0x405c, .value=0xa4}, {.addr=0x405d, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x405c, .value=0xa4, .type=IO_READ},
        {.addr=0x405d, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0149) {
    const struct CPU_State initial_cpu = {.pc=0x71a1, .a=0x06, .x=0x43, .y=0xca, .sp=0xa7, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x4c}, {.addr=0x71a1, .value=0xa4}, {.addr=0x71a2, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x71a3, .a=0xba, .x=0x43, .y=0xca, .sp=0xa7, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x4c}, {.addr=0x71a1, .value=0xa4}, {.addr=0x71a2, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x71a1, .value=0xa4, .type=IO_READ},
        {.addr=0x71a2, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014A) {
    const struct CPU_State initial_cpu = {.pc=0x8cd3, .a=0x51, .x=0x8b, .y=0x85, .sp=0x2f, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x3e}, {.addr=0x8cd3, .value=0xa4}, {.addr=0x8cd4, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x8cd5, .a=0x12, .x=0x8b, .y=0x85, .sp=0x2f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x3e}, {.addr=0x8cd3, .value=0xa4}, {.addr=0x8cd4, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cd3, .value=0xa4, .type=IO_READ},
        {.addr=0x8cd4, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014B) {
    const struct CPU_State initial_cpu = {.pc=0x2e26, .a=0xa7, .x=0x6e, .y=0x63, .sp=0x16, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x2f}, {.addr=0x2e26, .value=0xa4}, {.addr=0x2e27, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2e28, .a=0x78, .x=0x6e, .y=0x63, .sp=0x16, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x2f}, {.addr=0x2e26, .value=0xa4}, {.addr=0x2e27, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e26, .value=0xa4, .type=IO_READ},
        {.addr=0x2e27, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014C) {
    const struct CPU_State initial_cpu = {.pc=0xbfb2, .a=0xb0, .x=0xde, .y=0x06, .sp=0xab, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xb1}, {.addr=0xbfb2, .value=0xa4}, {.addr=0xbfb3, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xbfb4, .a=0xfe, .x=0xde, .y=0x06, .sp=0xab, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xb1}, {.addr=0xbfb2, .value=0xa4}, {.addr=0xbfb3, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfb2, .value=0xa4, .type=IO_READ},
        {.addr=0xbfb3, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014D) {
    const struct CPU_State initial_cpu = {.pc=0x84bf, .a=0xf2, .x=0x78, .y=0xfe, .sp=0x39, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xb6}, {.addr=0x84bf, .value=0xa4}, {.addr=0x84c0, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x84c1, .a=0x3b, .x=0x78, .y=0xfe, .sp=0x39, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xb6}, {.addr=0x84bf, .value=0xa4}, {.addr=0x84c0, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x84bf, .value=0xa4, .type=IO_READ},
        {.addr=0x84c0, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014E) {
    const struct CPU_State initial_cpu = {.pc=0x2d76, .a=0x82, .x=0x55, .y=0x27, .sp=0xb3, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x71}, {.addr=0x2d76, .value=0xa4}, {.addr=0x2d77, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x2d78, .a=0x10, .x=0x55, .y=0x27, .sp=0xb3, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x71}, {.addr=0x2d76, .value=0xa4}, {.addr=0x2d77, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d76, .value=0xa4, .type=IO_READ},
        {.addr=0x2d77, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_014F) {
    const struct CPU_State initial_cpu = {.pc=0x5eb3, .a=0x78, .x=0x3c, .y=0x4a, .sp=0xc8, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xb7}, {.addr=0x5eb3, .value=0xa4}, {.addr=0x5eb4, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x5eb5, .a=0xc0, .x=0x3c, .y=0x4a, .sp=0xc8, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xb7}, {.addr=0x5eb3, .value=0xa4}, {.addr=0x5eb4, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eb3, .value=0xa4, .type=IO_READ},
        {.addr=0x5eb4, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0150) {
    const struct CPU_State initial_cpu = {.pc=0x9b0b, .a=0xa6, .x=0x7a, .y=0xe0, .sp=0xbd, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xf3}, {.addr=0x9b0b, .value=0xa4}, {.addr=0x9b0c, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x9b0d, .a=0xb2, .x=0x7a, .y=0xe0, .sp=0xbd, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xf3}, {.addr=0x9b0b, .value=0xa4}, {.addr=0x9b0c, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b0b, .value=0xa4, .type=IO_READ},
        {.addr=0x9b0c, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0151) {
    const struct CPU_State initial_cpu = {.pc=0xe607, .a=0x36, .x=0x6b, .y=0xbf, .sp=0xf6, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x6a}, {.addr=0xe607, .value=0xa4}, {.addr=0xe608, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xe609, .a=0xcb, .x=0x6b, .y=0xbf, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x6a}, {.addr=0xe607, .value=0xa4}, {.addr=0xe608, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe607, .value=0xa4, .type=IO_READ},
        {.addr=0xe608, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0152) {
    const struct CPU_State initial_cpu = {.pc=0xd701, .a=0x61, .x=0x9d, .y=0x00, .sp=0xa4, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x98}, {.addr=0xd701, .value=0xa4}, {.addr=0xd702, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd703, .a=0xc8, .x=0x9d, .y=0x00, .sp=0xa4, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x98}, {.addr=0xd701, .value=0xa4}, {.addr=0xd702, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd701, .value=0xa4, .type=IO_READ},
        {.addr=0xd702, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0153) {
    const struct CPU_State initial_cpu = {.pc=0x484b, .a=0x47, .x=0xde, .y=0x11, .sp=0x46, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xbd}, {.addr=0x484b, .value=0xa4}, {.addr=0x484c, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x484d, .a=0x89, .x=0xde, .y=0x11, .sp=0x46, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xbd}, {.addr=0x484b, .value=0xa4}, {.addr=0x484c, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x484b, .value=0xa4, .type=IO_READ},
        {.addr=0x484c, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0ec7, .a=0x5c, .x=0x38, .y=0x15, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xc8}, {.addr=0x0ec7, .value=0xa4}, {.addr=0x0ec8, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x0ec9, .a=0x93, .x=0x38, .y=0x15, .sp=0xc5, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xc8}, {.addr=0x0ec7, .value=0xa4}, {.addr=0x0ec8, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ec7, .value=0xa4, .type=IO_READ},
        {.addr=0x0ec8, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0155) {
    const struct CPU_State initial_cpu = {.pc=0x538f, .a=0xfe, .x=0xe2, .y=0x00, .sp=0x93, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xf8}, {.addr=0x538f, .value=0xa4}, {.addr=0x5390, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x5391, .a=0x06, .x=0xe2, .y=0x00, .sp=0x93, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xf8}, {.addr=0x538f, .value=0xa4}, {.addr=0x5390, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x538f, .value=0xa4, .type=IO_READ},
        {.addr=0x5390, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0156) {
    const struct CPU_State initial_cpu = {.pc=0x071e, .a=0xa4, .x=0x58, .y=0xee, .sp=0xe7, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x93}, {.addr=0x071e, .value=0xa4}, {.addr=0x071f, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x0720, .a=0x11, .x=0x58, .y=0xee, .sp=0xe7, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x93}, {.addr=0x071e, .value=0xa4}, {.addr=0x071f, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x071e, .value=0xa4, .type=IO_READ},
        {.addr=0x071f, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0157) {
    const struct CPU_State initial_cpu = {.pc=0xf373, .a=0xa6, .x=0xc7, .y=0x60, .sp=0x8f, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x69}, {.addr=0xf373, .value=0xa4}, {.addr=0xf374, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xf375, .a=0x3c, .x=0xc7, .y=0x60, .sp=0x8f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x69}, {.addr=0xf373, .value=0xa4}, {.addr=0xf374, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xf373, .value=0xa4, .type=IO_READ},
        {.addr=0xf374, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc195, .a=0x98, .x=0xb3, .y=0x2a, .sp=0x5a, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x4b}, {.addr=0xc195, .value=0xa4}, {.addr=0xc196, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xc197, .a=0x4d, .x=0xb3, .y=0x2a, .sp=0x5a, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x4b}, {.addr=0xc195, .value=0xa4}, {.addr=0xc196, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc195, .value=0xa4, .type=IO_READ},
        {.addr=0xc196, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0159) {
    const struct CPU_State initial_cpu = {.pc=0x1a7c, .a=0x7a, .x=0xa2, .y=0x07, .sp=0x07, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x69}, {.addr=0x1a7c, .value=0xa4}, {.addr=0x1a7d, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x1a7e, .a=0x11, .x=0xa2, .y=0x07, .sp=0x07, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x69}, {.addr=0x1a7c, .value=0xa4}, {.addr=0x1a7d, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a7c, .value=0xa4, .type=IO_READ},
        {.addr=0x1a7d, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015A) {
    const struct CPU_State initial_cpu = {.pc=0xcdbf, .a=0xa5, .x=0x43, .y=0xdf, .sp=0x39, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x3b}, {.addr=0xcdbf, .value=0xa4}, {.addr=0xcdc0, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xcdc1, .a=0x69, .x=0x43, .y=0xdf, .sp=0x39, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x3b}, {.addr=0xcdbf, .value=0xa4}, {.addr=0xcdc0, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdbf, .value=0xa4, .type=IO_READ},
        {.addr=0xcdc0, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015B) {
    const struct CPU_State initial_cpu = {.pc=0x4e49, .a=0x5b, .x=0x51, .y=0xda, .sp=0xd5, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0x3b}, {.addr=0x4e49, .value=0xa4}, {.addr=0x4e4a, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x4e4b, .a=0x1f, .x=0x51, .y=0xda, .sp=0xd5, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0x3b}, {.addr=0x4e49, .value=0xa4}, {.addr=0x4e4a, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e49, .value=0xa4, .type=IO_READ},
        {.addr=0x4e4a, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015C) {
    const struct CPU_State initial_cpu = {.pc=0xef17, .a=0x28, .x=0x82, .y=0xad, .sp=0xaa, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x4b}, {.addr=0xef17, .value=0xa4}, {.addr=0xef18, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xef19, .a=0xdd, .x=0x82, .y=0xad, .sp=0xaa, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x4b}, {.addr=0xef17, .value=0xa4}, {.addr=0xef18, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xef17, .value=0xa4, .type=IO_READ},
        {.addr=0xef18, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015D) {
    const struct CPU_State initial_cpu = {.pc=0x367f, .a=0xc8, .x=0xad, .y=0x65, .sp=0xfe, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xbf}, {.addr=0x367f, .value=0xa4}, {.addr=0x3680, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x3681, .a=0x09, .x=0xad, .y=0x65, .sp=0xfe, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xbf}, {.addr=0x367f, .value=0xa4}, {.addr=0x3680, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x367f, .value=0xa4, .type=IO_READ},
        {.addr=0x3680, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015E) {
    const struct CPU_State initial_cpu = {.pc=0x3438, .a=0x0c, .x=0xa5, .y=0x9b, .sp=0xa2, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xe7}, {.addr=0x3438, .value=0xa4}, {.addr=0x3439, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x343a, .a=0x25, .x=0xa5, .y=0x9b, .sp=0xa2, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xe7}, {.addr=0x3438, .value=0xa4}, {.addr=0x3439, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x3438, .value=0xa4, .type=IO_READ},
        {.addr=0x3439, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_015F) {
    const struct CPU_State initial_cpu = {.pc=0x2514, .a=0x88, .x=0x94, .y=0xd3, .sp=0x36, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xad}, {.addr=0x2514, .value=0xa4}, {.addr=0x2515, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0xda, .x=0x94, .y=0xd3, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xad}, {.addr=0x2514, .value=0xa4}, {.addr=0x2515, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2514, .value=0xa4, .type=IO_READ},
        {.addr=0x2515, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0160) {
    const struct CPU_State initial_cpu = {.pc=0x11b4, .a=0x6d, .x=0x6b, .y=0x0d, .sp=0x2e, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x82}, {.addr=0x11b4, .value=0xa4}, {.addr=0x11b5, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x11b6, .a=0xea, .x=0x6b, .y=0x0d, .sp=0x2e, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x82}, {.addr=0x11b4, .value=0xa4}, {.addr=0x11b5, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x11b4, .value=0xa4, .type=IO_READ},
        {.addr=0x11b5, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0161) {
    const struct CPU_State initial_cpu = {.pc=0xd7b7, .a=0x84, .x=0xb2, .y=0x75, .sp=0x8f, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x41}, {.addr=0xd7b7, .value=0xa4}, {.addr=0xd7b8, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xd7b9, .a=0x43, .x=0xb2, .y=0x75, .sp=0x8f, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x41}, {.addr=0xd7b7, .value=0xa4}, {.addr=0xd7b8, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7b7, .value=0xa4, .type=IO_READ},
        {.addr=0xd7b8, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0162) {
    const struct CPU_State initial_cpu = {.pc=0x3e15, .a=0x52, .x=0xc9, .y=0x41, .sp=0xc5, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x1c}, {.addr=0x3e15, .value=0xa4}, {.addr=0x3e16, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x3e17, .a=0x35, .x=0xc9, .y=0x41, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x1c}, {.addr=0x3e15, .value=0xa4}, {.addr=0x3e16, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e15, .value=0xa4, .type=IO_READ},
        {.addr=0x3e16, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2d78, .a=0x66, .x=0xa5, .y=0xd9, .sp=0x32, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x5d}, {.addr=0x2d78, .value=0xa4}, {.addr=0x2d79, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x2d7a, .a=0x08, .x=0xa5, .y=0xd9, .sp=0x32, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x5d}, {.addr=0x2d78, .value=0xa4}, {.addr=0x2d79, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d78, .value=0xa4, .type=IO_READ},
        {.addr=0x2d79, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0164) {
    const struct CPU_State initial_cpu = {.pc=0x8cf5, .a=0x8c, .x=0xb8, .y=0xdd, .sp=0xf1, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x8c}, {.addr=0x8cf5, .value=0xa4}, {.addr=0x8cf6, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x8cf7, .a=0xff, .x=0xb8, .y=0xdd, .sp=0xf1, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x8c}, {.addr=0x8cf5, .value=0xa4}, {.addr=0x8cf6, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cf5, .value=0xa4, .type=IO_READ},
        {.addr=0x8cf6, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0165) {
    const struct CPU_State initial_cpu = {.pc=0x870e, .a=0xe8, .x=0xb7, .y=0xc3, .sp=0xe5, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x60}, {.addr=0x870e, .value=0xa4}, {.addr=0x870f, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x8710, .a=0x87, .x=0xb7, .y=0xc3, .sp=0xe5, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x60}, {.addr=0x870e, .value=0xa4}, {.addr=0x870f, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x870e, .value=0xa4, .type=IO_READ},
        {.addr=0x870f, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0166) {
    const struct CPU_State initial_cpu = {.pc=0x192d, .a=0x12, .x=0x11, .y=0xb6, .sp=0x2c, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x13}, {.addr=0x192d, .value=0xa4}, {.addr=0x192e, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x192f, .a=0xfe, .x=0x11, .y=0xb6, .sp=0x2c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x13}, {.addr=0x192d, .value=0xa4}, {.addr=0x192e, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x192d, .value=0xa4, .type=IO_READ},
        {.addr=0x192e, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0167) {
    const struct CPU_State initial_cpu = {.pc=0xb775, .a=0x25, .x=0xd8, .y=0xce, .sp=0xc7, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x33}, {.addr=0xb775, .value=0xa4}, {.addr=0xb776, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xb777, .a=0xf1, .x=0xd8, .y=0xce, .sp=0xc7, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x33}, {.addr=0xb775, .value=0xa4}, {.addr=0xb776, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb775, .value=0xa4, .type=IO_READ},
        {.addr=0xb776, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0168) {
    const struct CPU_State initial_cpu = {.pc=0x1260, .a=0x78, .x=0xc7, .y=0x86, .sp=0x21, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x52}, {.addr=0x1260, .value=0xa4}, {.addr=0x1261, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x1262, .a=0x26, .x=0xc7, .y=0x86, .sp=0x21, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x52}, {.addr=0x1260, .value=0xa4}, {.addr=0x1261, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x1260, .value=0xa4, .type=IO_READ},
        {.addr=0x1261, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0169) {
    const struct CPU_State initial_cpu = {.pc=0xa96b, .a=0xbd, .x=0xcc, .y=0xe0, .sp=0xfb, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xc6}, {.addr=0xa96b, .value=0xa4}, {.addr=0xa96c, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xa96d, .a=0xf6, .x=0xcc, .y=0xe0, .sp=0xfb, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xc6}, {.addr=0xa96b, .value=0xa4}, {.addr=0xa96c, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xa96b, .value=0xa4, .type=IO_READ},
        {.addr=0xa96c, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6026, .a=0x28, .x=0xb0, .y=0xdc, .sp=0x74, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xde}, {.addr=0x6026, .value=0xa4}, {.addr=0x6027, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x6028, .a=0x49, .x=0xb0, .y=0xdc, .sp=0x74, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xde}, {.addr=0x6026, .value=0xa4}, {.addr=0x6027, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6026, .value=0xa4, .type=IO_READ},
        {.addr=0x6027, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016B) {
    const struct CPU_State initial_cpu = {.pc=0x6681, .a=0xae, .x=0x9e, .y=0x4c, .sp=0xe9, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x3f}, {.addr=0x6681, .value=0xa4}, {.addr=0x6682, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x6683, .a=0x6f, .x=0x9e, .y=0x4c, .sp=0xe9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x3f}, {.addr=0x6681, .value=0xa4}, {.addr=0x6682, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x6681, .value=0xa4, .type=IO_READ},
        {.addr=0x6682, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016C) {
    const struct CPU_State initial_cpu = {.pc=0x03c5, .a=0xd4, .x=0x93, .y=0x88, .sp=0xfb, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x0c}, {.addr=0x03c5, .value=0xa4}, {.addr=0x03c6, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x03c7, .a=0xc7, .x=0x93, .y=0x88, .sp=0xfb, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x0c}, {.addr=0x03c5, .value=0xa4}, {.addr=0x03c6, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x03c5, .value=0xa4, .type=IO_READ},
        {.addr=0x03c6, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016D) {
    const struct CPU_State initial_cpu = {.pc=0x8781, .a=0x0b, .x=0xf9, .y=0x96, .sp=0x0c, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x64}, {.addr=0x8781, .value=0xa4}, {.addr=0x8782, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x8783, .a=0xa7, .x=0xf9, .y=0x96, .sp=0x0c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x64}, {.addr=0x8781, .value=0xa4}, {.addr=0x8782, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8781, .value=0xa4, .type=IO_READ},
        {.addr=0x8782, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016E) {
    const struct CPU_State initial_cpu = {.pc=0x667e, .a=0xb7, .x=0x27, .y=0x69, .sp=0x3f, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x22}, {.addr=0x667e, .value=0xa4}, {.addr=0x667f, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x6680, .a=0x95, .x=0x27, .y=0x69, .sp=0x3f, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x22}, {.addr=0x667e, .value=0xa4}, {.addr=0x667f, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x667e, .value=0xa4, .type=IO_READ},
        {.addr=0x667f, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_016F) {
    const struct CPU_State initial_cpu = {.pc=0xadb4, .a=0xc5, .x=0xdf, .y=0x06, .sp=0x6f, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xd6}, {.addr=0xadb4, .value=0xa4}, {.addr=0xadb5, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xadb6, .a=0xee, .x=0xdf, .y=0x06, .sp=0x6f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xd6}, {.addr=0xadb4, .value=0xa4}, {.addr=0xadb5, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xadb4, .value=0xa4, .type=IO_READ},
        {.addr=0xadb5, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0170) {
    const struct CPU_State initial_cpu = {.pc=0x3a50, .a=0xe7, .x=0x79, .y=0x61, .sp=0x3e, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x42}, {.addr=0x3a50, .value=0xa4}, {.addr=0x3a51, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x3a52, .a=0xa4, .x=0x79, .y=0x61, .sp=0x3e, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x42}, {.addr=0x3a50, .value=0xa4}, {.addr=0x3a51, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a50, .value=0xa4, .type=IO_READ},
        {.addr=0x3a51, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0171) {
    const struct CPU_State initial_cpu = {.pc=0x1875, .a=0x69, .x=0x56, .y=0x3a, .sp=0x58, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x8c}, {.addr=0x1875, .value=0xa4}, {.addr=0x1876, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x1877, .a=0xdd, .x=0x56, .y=0x3a, .sp=0x58, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x8c}, {.addr=0x1875, .value=0xa4}, {.addr=0x1876, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x1875, .value=0xa4, .type=IO_READ},
        {.addr=0x1876, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0172) {
    const struct CPU_State initial_cpu = {.pc=0xc661, .a=0xc4, .x=0x6f, .y=0x67, .sp=0x9c, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0xde}, {.addr=0xc661, .value=0xa4}, {.addr=0xc662, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xc663, .a=0xe6, .x=0x6f, .y=0x67, .sp=0x9c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0xde}, {.addr=0xc661, .value=0xa4}, {.addr=0xc662, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc661, .value=0xa4, .type=IO_READ},
        {.addr=0xc662, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0173) {
    const struct CPU_State initial_cpu = {.pc=0xbd12, .a=0x30, .x=0x7f, .y=0x49, .sp=0xa5, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x24}, {.addr=0xbd12, .value=0xa4}, {.addr=0xbd13, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xbd14, .a=0x0c, .x=0x7f, .y=0x49, .sp=0xa5, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x24}, {.addr=0xbd12, .value=0xa4}, {.addr=0xbd13, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd12, .value=0xa4, .type=IO_READ},
        {.addr=0xbd13, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0174) {
    const struct CPU_State initial_cpu = {.pc=0xb05b, .a=0xa5, .x=0x4b, .y=0x13, .sp=0x50, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x1c}, {.addr=0xb05b, .value=0xa4}, {.addr=0xb05c, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xb05d, .a=0x89, .x=0x4b, .y=0x13, .sp=0x50, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x1c}, {.addr=0xb05b, .value=0xa4}, {.addr=0xb05c, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb05b, .value=0xa4, .type=IO_READ},
        {.addr=0xb05c, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0175) {
    const struct CPU_State initial_cpu = {.pc=0x4005, .a=0xfa, .x=0x1e, .y=0xd8, .sp=0x30, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xd6}, {.addr=0x4005, .value=0xa4}, {.addr=0x4006, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x4007, .a=0x24, .x=0x1e, .y=0xd8, .sp=0x30, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xd6}, {.addr=0x4005, .value=0xa4}, {.addr=0x4006, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4005, .value=0xa4, .type=IO_READ},
        {.addr=0x4006, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0176) {
    const struct CPU_State initial_cpu = {.pc=0xeaca, .a=0xf2, .x=0xd4, .y=0x31, .sp=0xfc, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xa3}, {.addr=0xeaca, .value=0xa4}, {.addr=0xeacb, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xeacc, .a=0x4e, .x=0xd4, .y=0x31, .sp=0xfc, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xa3}, {.addr=0xeaca, .value=0xa4}, {.addr=0xeacb, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xeaca, .value=0xa4, .type=IO_READ},
        {.addr=0xeacb, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0177) {
    const struct CPU_State initial_cpu = {.pc=0x5137, .a=0x9b, .x=0x49, .y=0x55, .sp=0xb3, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xc4}, {.addr=0x5137, .value=0xa4}, {.addr=0x5138, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x5139, .a=0xd6, .x=0x49, .y=0x55, .sp=0xb3, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xc4}, {.addr=0x5137, .value=0xa4}, {.addr=0x5138, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5137, .value=0xa4, .type=IO_READ},
        {.addr=0x5138, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0178) {
    const struct CPU_State initial_cpu = {.pc=0x0638, .a=0x12, .x=0x98, .y=0xe5, .sp=0x7e, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x87}, {.addr=0x0638, .value=0xa4}, {.addr=0x0639, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x063a, .a=0x8b, .x=0x98, .y=0xe5, .sp=0x7e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x87}, {.addr=0x0638, .value=0xa4}, {.addr=0x0639, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x0638, .value=0xa4, .type=IO_READ},
        {.addr=0x0639, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0179) {
    const struct CPU_State initial_cpu = {.pc=0x23a0, .a=0x61, .x=0xea, .y=0x39, .sp=0x07, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x35}, {.addr=0x23a0, .value=0xa4}, {.addr=0x23a1, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x23a2, .a=0x2b, .x=0xea, .y=0x39, .sp=0x07, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x35}, {.addr=0x23a0, .value=0xa4}, {.addr=0x23a1, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x23a0, .value=0xa4, .type=IO_READ},
        {.addr=0x23a1, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_017A) {
    const struct CPU_State initial_cpu = {.pc=0xe056, .a=0x80, .x=0xc7, .y=0x22, .sp=0x62, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x33}, {.addr=0xe056, .value=0xa4}, {.addr=0xe057, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xe058, .a=0x4c, .x=0xc7, .y=0x22, .sp=0x62, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x33}, {.addr=0xe056, .value=0xa4}, {.addr=0xe057, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xe056, .value=0xa4, .type=IO_READ},
        {.addr=0xe057, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_017C) {
    const struct CPU_State initial_cpu = {.pc=0xed99, .a=0x99, .x=0xda, .y=0xf1, .sp=0x6e, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xd7}, {.addr=0xed99, .value=0xa4}, {.addr=0xed9a, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xed9b, .a=0xc2, .x=0xda, .y=0xf1, .sp=0x6e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xd7}, {.addr=0xed99, .value=0xa4}, {.addr=0xed9a, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xed99, .value=0xa4, .type=IO_READ},
        {.addr=0xed9a, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_017D) {
    const struct CPU_State initial_cpu = {.pc=0xeb1b, .a=0xff, .x=0x35, .y=0x22, .sp=0x75, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xb9}, {.addr=0xeb1b, .value=0xa4}, {.addr=0xeb1c, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xeb1d, .a=0x46, .x=0x35, .y=0x22, .sp=0x75, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xb9}, {.addr=0xeb1b, .value=0xa4}, {.addr=0xeb1c, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb1b, .value=0xa4, .type=IO_READ},
        {.addr=0xeb1c, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9044, .a=0xab, .x=0xb2, .y=0x1f, .sp=0xd2, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xa8}, {.addr=0x9044, .value=0xa4}, {.addr=0x9045, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x9046, .a=0x02, .x=0xb2, .y=0x1f, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xa8}, {.addr=0x9044, .value=0xa4}, {.addr=0x9045, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x9044, .value=0xa4, .type=IO_READ},
        {.addr=0x9045, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_017F) {
    const struct CPU_State initial_cpu = {.pc=0x61b8, .a=0x66, .x=0x28, .y=0x71, .sp=0xfc, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x28}, {.addr=0x61b8, .value=0xa4}, {.addr=0x61b9, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x61ba, .a=0x3d, .x=0x28, .y=0x71, .sp=0xfc, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x28}, {.addr=0x61b8, .value=0xa4}, {.addr=0x61b9, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x61b8, .value=0xa4, .type=IO_READ},
        {.addr=0x61b9, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0180) {
    const struct CPU_State initial_cpu = {.pc=0x3fa3, .a=0x7f, .x=0x57, .y=0x22, .sp=0x42, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xab}, {.addr=0x3fa3, .value=0xa4}, {.addr=0x3fa4, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x3fa5, .a=0xd4, .x=0x57, .y=0x22, .sp=0x42, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xab}, {.addr=0x3fa3, .value=0xa4}, {.addr=0x3fa4, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fa3, .value=0xa4, .type=IO_READ},
        {.addr=0x3fa4, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0181) {
    const struct CPU_State initial_cpu = {.pc=0x18b3, .a=0x57, .x=0x9c, .y=0xf6, .sp=0x3c, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xf6}, {.addr=0x18b3, .value=0xa4}, {.addr=0x18b4, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x18b5, .a=0x61, .x=0x9c, .y=0xf6, .sp=0x3c, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xf6}, {.addr=0x18b3, .value=0xa4}, {.addr=0x18b4, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x18b3, .value=0xa4, .type=IO_READ},
        {.addr=0x18b4, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0182) {
    const struct CPU_State initial_cpu = {.pc=0xc1ac, .a=0x95, .x=0xc9, .y=0xfb, .sp=0xcc, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0xb1}, {.addr=0xc1ac, .value=0xa4}, {.addr=0xc1ad, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xc1ae, .a=0xe4, .x=0xc9, .y=0xfb, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0xb1}, {.addr=0xc1ac, .value=0xa4}, {.addr=0xc1ad, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1ac, .value=0xa4, .type=IO_READ},
        {.addr=0xc1ad, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0183) {
    const struct CPU_State initial_cpu = {.pc=0xb798, .a=0xc2, .x=0xdf, .y=0x90, .sp=0x46, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x55}, {.addr=0xb798, .value=0xa4}, {.addr=0xb799, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xb79a, .a=0x6d, .x=0xdf, .y=0x90, .sp=0x46, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x55}, {.addr=0xb798, .value=0xa4}, {.addr=0xb799, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb798, .value=0xa4, .type=IO_READ},
        {.addr=0xb799, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0184) {
    const struct CPU_State initial_cpu = {.pc=0x1d19, .a=0x8f, .x=0x45, .y=0x54, .sp=0x20, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xdd}, {.addr=0x1d19, .value=0xa4}, {.addr=0x1d1a, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x1d1b, .a=0xb1, .x=0x45, .y=0x54, .sp=0x20, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xdd}, {.addr=0x1d19, .value=0xa4}, {.addr=0x1d1a, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d19, .value=0xa4, .type=IO_READ},
        {.addr=0x1d1a, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0185) {
    const struct CPU_State initial_cpu = {.pc=0x8541, .a=0x4a, .x=0x76, .y=0xf4, .sp=0x24, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x08}, {.addr=0x8541, .value=0xa4}, {.addr=0x8542, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x8543, .a=0x42, .x=0x76, .y=0xf4, .sp=0x24, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x08}, {.addr=0x8541, .value=0xa4}, {.addr=0x8542, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x8541, .value=0xa4, .type=IO_READ},
        {.addr=0x8542, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0186) {
    const struct CPU_State initial_cpu = {.pc=0xd971, .a=0xca, .x=0xab, .y=0x32, .sp=0x45, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xb0}, {.addr=0xd971, .value=0xa4}, {.addr=0xd972, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xd973, .a=0x19, .x=0xab, .y=0x32, .sp=0x45, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xb0}, {.addr=0xd971, .value=0xa4}, {.addr=0xd972, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd971, .value=0xa4, .type=IO_READ},
        {.addr=0xd972, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0187) {
    const struct CPU_State initial_cpu = {.pc=0x64e5, .a=0xb6, .x=0xac, .y=0x25, .sp=0x94, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0xf2}, {.addr=0x64e5, .value=0xa4}, {.addr=0x64e6, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x64e7, .a=0xc4, .x=0xac, .y=0x25, .sp=0x94, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0xf2}, {.addr=0x64e5, .value=0xa4}, {.addr=0x64e6, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x64e5, .value=0xa4, .type=IO_READ},
        {.addr=0x64e6, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0188) {
    const struct CPU_State initial_cpu = {.pc=0x34dc, .a=0x44, .x=0x8f, .y=0x73, .sp=0xbf, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x74}, {.addr=0x34dc, .value=0xa4}, {.addr=0x34dd, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x34de, .a=0xd0, .x=0x8f, .y=0x73, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x74}, {.addr=0x34dc, .value=0xa4}, {.addr=0x34dd, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x34dc, .value=0xa4, .type=IO_READ},
        {.addr=0x34dd, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0189) {
    const struct CPU_State initial_cpu = {.pc=0xcd9e, .a=0xac, .x=0x3c, .y=0x03, .sp=0x9c, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x3d}, {.addr=0xcd9e, .value=0xa4}, {.addr=0xcd9f, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xcda0, .a=0x6f, .x=0x3c, .y=0x03, .sp=0x9c, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x3d}, {.addr=0xcd9e, .value=0xa4}, {.addr=0xcd9f, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd9e, .value=0xa4, .type=IO_READ},
        {.addr=0xcd9f, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018A) {
    const struct CPU_State initial_cpu = {.pc=0xae0e, .a=0x27, .x=0x4c, .y=0xf5, .sp=0x47, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x93}, {.addr=0xae0e, .value=0xa4}, {.addr=0xae0f, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xae10, .a=0x94, .x=0x4c, .y=0xf5, .sp=0x47, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x93}, {.addr=0xae0e, .value=0xa4}, {.addr=0xae0f, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xae0e, .value=0xa4, .type=IO_READ},
        {.addr=0xae0f, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018B) {
    const struct CPU_State initial_cpu = {.pc=0x286c, .a=0x37, .x=0x95, .y=0x4b, .sp=0xfa, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x57}, {.addr=0x286c, .value=0xa4}, {.addr=0x286d, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x286e, .a=0xdf, .x=0x95, .y=0x4b, .sp=0xfa, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x57}, {.addr=0x286c, .value=0xa4}, {.addr=0x286d, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x286c, .value=0xa4, .type=IO_READ},
        {.addr=0x286d, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018C) {
    const struct CPU_State initial_cpu = {.pc=0x0f8f, .a=0xf7, .x=0xfd, .y=0xb4, .sp=0x97, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xdd}, {.addr=0x0f8f, .value=0xa4}, {.addr=0x0f90, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x0f91, .a=0x1a, .x=0xfd, .y=0xb4, .sp=0x97, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xdd}, {.addr=0x0f8f, .value=0xa4}, {.addr=0x0f90, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f8f, .value=0xa4, .type=IO_READ},
        {.addr=0x0f90, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018D) {
    const struct CPU_State initial_cpu = {.pc=0xfd6a, .a=0x5a, .x=0x61, .y=0x01, .sp=0xa1, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x4d}, {.addr=0xfd6a, .value=0xa4}, {.addr=0xfd6b, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xfd6c, .a=0x0c, .x=0x61, .y=0x01, .sp=0xa1, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x4d}, {.addr=0xfd6a, .value=0xa4}, {.addr=0xfd6b, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd6a, .value=0xa4, .type=IO_READ},
        {.addr=0xfd6b, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018E) {
    const struct CPU_State initial_cpu = {.pc=0xcebd, .a=0xb8, .x=0x13, .y=0xf1, .sp=0xdf, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x0c}, {.addr=0xcebd, .value=0xa4}, {.addr=0xcebe, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xcebf, .a=0xac, .x=0x13, .y=0xf1, .sp=0xdf, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x0c}, {.addr=0xcebd, .value=0xa4}, {.addr=0xcebe, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xcebd, .value=0xa4, .type=IO_READ},
        {.addr=0xcebe, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_018F) {
    const struct CPU_State initial_cpu = {.pc=0xd95e, .a=0x8f, .x=0x34, .y=0x02, .sp=0x05, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x32}, {.addr=0xd95e, .value=0xa4}, {.addr=0xd95f, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xd960, .a=0x5c, .x=0x34, .y=0x02, .sp=0x05, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x32}, {.addr=0xd95e, .value=0xa4}, {.addr=0xd95f, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd95e, .value=0xa4, .type=IO_READ},
        {.addr=0xd95f, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0190) {
    const struct CPU_State initial_cpu = {.pc=0x6a0e, .a=0x5a, .x=0xf0, .y=0x96, .sp=0x1d, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xba}, {.addr=0x6a0e, .value=0xa4}, {.addr=0x6a0f, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x6a10, .a=0x9f, .x=0xf0, .y=0x96, .sp=0x1d, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xba}, {.addr=0x6a0e, .value=0xa4}, {.addr=0x6a0f, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a0e, .value=0xa4, .type=IO_READ},
        {.addr=0x6a0f, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0191) {
    const struct CPU_State initial_cpu = {.pc=0xf4b1, .a=0xd5, .x=0xf2, .y=0x96, .sp=0x1e, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x3e}, {.addr=0xf4b1, .value=0xa4}, {.addr=0xf4b2, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xf4b3, .a=0x97, .x=0xf2, .y=0x96, .sp=0x1e, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x3e}, {.addr=0xf4b1, .value=0xa4}, {.addr=0xf4b2, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4b1, .value=0xa4, .type=IO_READ},
        {.addr=0xf4b2, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0192) {
    const struct CPU_State initial_cpu = {.pc=0xdf7d, .a=0x59, .x=0x1c, .y=0x6d, .sp=0xa2, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x13}, {.addr=0xdf7d, .value=0xa4}, {.addr=0xdf7e, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xdf7f, .a=0x45, .x=0x1c, .y=0x6d, .sp=0xa2, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x13}, {.addr=0xdf7d, .value=0xa4}, {.addr=0xdf7e, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf7d, .value=0xa4, .type=IO_READ},
        {.addr=0xdf7e, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0193) {
    const struct CPU_State initial_cpu = {.pc=0x7991, .a=0x2d, .x=0xca, .y=0x5c, .sp=0xff, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x3b}, {.addr=0x7991, .value=0xa4}, {.addr=0x7992, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x7993, .a=0xf1, .x=0xca, .y=0x5c, .sp=0xff, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x3b}, {.addr=0x7991, .value=0xa4}, {.addr=0x7992, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7991, .value=0xa4, .type=IO_READ},
        {.addr=0x7992, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0194) {
    const struct CPU_State initial_cpu = {.pc=0x1ee7, .a=0xf9, .x=0x65, .y=0x44, .sp=0x37, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x08}, {.addr=0x1ee7, .value=0xa4}, {.addr=0x1ee8, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x1ee9, .a=0xf1, .x=0x65, .y=0x44, .sp=0x37, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x08}, {.addr=0x1ee7, .value=0xa4}, {.addr=0x1ee8, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ee7, .value=0xa4, .type=IO_READ},
        {.addr=0x1ee8, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0195) {
    const struct CPU_State initial_cpu = {.pc=0x1eb8, .a=0xb0, .x=0x6b, .y=0xc0, .sp=0xe4, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x76}, {.addr=0x1eb8, .value=0xa4}, {.addr=0x1eb9, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0x39, .x=0x6b, .y=0xc0, .sp=0xe4, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x76}, {.addr=0x1eb8, .value=0xa4}, {.addr=0x1eb9, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1eb8, .value=0xa4, .type=IO_READ},
        {.addr=0x1eb9, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc243, .a=0xeb, .x=0xf0, .y=0xbc, .sp=0x0e, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x37}, {.addr=0xc243, .value=0xa4}, {.addr=0xc244, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xc245, .a=0xb4, .x=0xf0, .y=0xbc, .sp=0x0e, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x37}, {.addr=0xc243, .value=0xa4}, {.addr=0xc244, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xc243, .value=0xa4, .type=IO_READ},
        {.addr=0xc244, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0197) {
    const struct CPU_State initial_cpu = {.pc=0xc67a, .a=0x04, .x=0x4c, .y=0x71, .sp=0x36, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x08}, {.addr=0xc67a, .value=0xa4}, {.addr=0xc67b, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xc67c, .a=0xfb, .x=0x4c, .y=0x71, .sp=0x36, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x08}, {.addr=0xc67a, .value=0xa4}, {.addr=0xc67b, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc67a, .value=0xa4, .type=IO_READ},
        {.addr=0xc67b, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0198) {
    const struct CPU_State initial_cpu = {.pc=0x8ede, .a=0xb9, .x=0x34, .y=0x01, .sp=0xc4, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xb2}, {.addr=0x8ede, .value=0xa4}, {.addr=0x8edf, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x8ee0, .a=0x06, .x=0x34, .y=0x01, .sp=0xc4, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xb2}, {.addr=0x8ede, .value=0xa4}, {.addr=0x8edf, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ede, .value=0xa4, .type=IO_READ},
        {.addr=0x8edf, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0199) {
    const struct CPU_State initial_cpu = {.pc=0xe2f4, .a=0x07, .x=0x55, .y=0x3d, .sp=0x70, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x00}, {.addr=0xe2f4, .value=0xa4}, {.addr=0xe2f5, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xe2f6, .a=0x06, .x=0x55, .y=0x3d, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x00}, {.addr=0xe2f4, .value=0xa4}, {.addr=0xe2f5, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2f4, .value=0xa4, .type=IO_READ},
        {.addr=0xe2f5, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019A) {
    const struct CPU_State initial_cpu = {.pc=0x7d4a, .a=0xa9, .x=0x2f, .y=0x3d, .sp=0xd5, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xdb}, {.addr=0x7d4a, .value=0xa4}, {.addr=0x7d4b, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x7d4c, .a=0xcd, .x=0x2f, .y=0x3d, .sp=0xd5, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xdb}, {.addr=0x7d4a, .value=0xa4}, {.addr=0x7d4b, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d4a, .value=0xa4, .type=IO_READ},
        {.addr=0x7d4b, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019B) {
    const struct CPU_State initial_cpu = {.pc=0x11fb, .a=0x08, .x=0x8a, .y=0x3f, .sp=0xff, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0xc5}, {.addr=0x11fb, .value=0xa4}, {.addr=0x11fc, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x11fd, .a=0x43, .x=0x8a, .y=0x3f, .sp=0xff, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0xc5}, {.addr=0x11fb, .value=0xa4}, {.addr=0x11fc, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x11fb, .value=0xa4, .type=IO_READ},
        {.addr=0x11fc, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019C) {
    const struct CPU_State initial_cpu = {.pc=0xebdf, .a=0xeb, .x=0xe6, .y=0x58, .sp=0xc3, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xab}, {.addr=0xebdf, .value=0xa4}, {.addr=0xebe0, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xebe1, .a=0x40, .x=0xe6, .y=0x58, .sp=0xc3, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xab}, {.addr=0xebdf, .value=0xa4}, {.addr=0xebe0, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xebdf, .value=0xa4, .type=IO_READ},
        {.addr=0xebe0, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019D) {
    const struct CPU_State initial_cpu = {.pc=0x84c8, .a=0xa8, .x=0xb6, .y=0xaf, .sp=0x83, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x07}, {.addr=0x84c8, .value=0xa4}, {.addr=0x84c9, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x84ca, .a=0xa1, .x=0xb6, .y=0xaf, .sp=0x83, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x07}, {.addr=0x84c8, .value=0xa4}, {.addr=0x84c9, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x84c8, .value=0xa4, .type=IO_READ},
        {.addr=0x84c9, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019E) {
    const struct CPU_State initial_cpu = {.pc=0x0086, .a=0xa2, .x=0xd3, .y=0x9d, .sp=0x19, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xa4}, {.addr=0x0087, .value=0x07}, {.addr=0x0107, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x0088, .a=0x81, .x=0xd3, .y=0x9d, .sp=0x19, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xa4}, {.addr=0x0087, .value=0x07}, {.addr=0x0107, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x0086, .value=0xa4, .type=IO_READ},
        {.addr=0x0087, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_019F) {
    const struct CPU_State initial_cpu = {.pc=0x02f6, .a=0xca, .x=0x1b, .y=0x8a, .sp=0x3a, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x96}, {.addr=0x02f6, .value=0xa4}, {.addr=0x02f7, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x02f8, .a=0x34, .x=0x1b, .y=0x8a, .sp=0x3a, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x96}, {.addr=0x02f6, .value=0xa4}, {.addr=0x02f7, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x02f6, .value=0xa4, .type=IO_READ},
        {.addr=0x02f7, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xd20b, .a=0x1c, .x=0xaf, .y=0xac, .sp=0x96, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x17}, {.addr=0xd20b, .value=0xa4}, {.addr=0xd20c, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xd20d, .a=0x05, .x=0xaf, .y=0xac, .sp=0x96, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x17}, {.addr=0xd20b, .value=0xa4}, {.addr=0xd20c, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xd20b, .value=0xa4, .type=IO_READ},
        {.addr=0xd20c, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x8ffa, .a=0x62, .x=0xf9, .y=0xbf, .sp=0x4a, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x03}, {.addr=0x8ffa, .value=0xa4}, {.addr=0x8ffb, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x8ffc, .a=0x5e, .x=0xf9, .y=0xbf, .sp=0x4a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x03}, {.addr=0x8ffa, .value=0xa4}, {.addr=0x8ffb, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ffa, .value=0xa4, .type=IO_READ},
        {.addr=0x8ffb, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x0f7d, .a=0x38, .x=0x0c, .y=0xd9, .sp=0x36, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x76}, {.addr=0x0f7d, .value=0xa4}, {.addr=0x0f7e, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x0f7f, .a=0xc2, .x=0x0c, .y=0xd9, .sp=0x36, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x76}, {.addr=0x0f7d, .value=0xa4}, {.addr=0x0f7e, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f7d, .value=0xa4, .type=IO_READ},
        {.addr=0x0f7e, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x3233, .a=0x9a, .x=0x20, .y=0xb6, .sp=0xdb, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x84}, {.addr=0x3233, .value=0xa4}, {.addr=0x3234, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x3235, .a=0x16, .x=0x20, .y=0xb6, .sp=0xdb, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x84}, {.addr=0x3233, .value=0xa4}, {.addr=0x3234, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3233, .value=0xa4, .type=IO_READ},
        {.addr=0x3234, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x62bf, .a=0x62, .x=0x75, .y=0xa0, .sp=0xa4, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0xe4}, {.addr=0x62bf, .value=0xa4}, {.addr=0x62c0, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x62c1, .a=0x7d, .x=0x75, .y=0xa0, .sp=0xa4, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0xe4}, {.addr=0x62bf, .value=0xa4}, {.addr=0x62c0, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x62bf, .value=0xa4, .type=IO_READ},
        {.addr=0x62c0, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x8177, .a=0xd3, .x=0xb5, .y=0x33, .sp=0x3c, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x07}, {.addr=0x8177, .value=0xa4}, {.addr=0x8178, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x8179, .a=0xcb, .x=0xb5, .y=0x33, .sp=0x3c, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x07}, {.addr=0x8177, .value=0xa4}, {.addr=0x8178, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x8177, .value=0xa4, .type=IO_READ},
        {.addr=0x8178, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x66fc, .a=0x4b, .x=0xc3, .y=0xff, .sp=0x5a, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0xe8}, {.addr=0x66fc, .value=0xa4}, {.addr=0x66fd, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x66fe, .a=0x62, .x=0xc3, .y=0xff, .sp=0x5a, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0xe8}, {.addr=0x66fc, .value=0xa4}, {.addr=0x66fd, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x66fc, .value=0xa4, .type=IO_READ},
        {.addr=0x66fd, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xfca4, .a=0x2a, .x=0x24, .y=0x52, .sp=0x33, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xd5}, {.addr=0xfca4, .value=0xa4}, {.addr=0xfca5, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xfca6, .a=0x55, .x=0x24, .y=0x52, .sp=0x33, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xd5}, {.addr=0xfca4, .value=0xa4}, {.addr=0xfca5, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xfca4, .value=0xa4, .type=IO_READ},
        {.addr=0xfca5, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x0fb3, .a=0x46, .x=0xca, .y=0x0a, .sp=0x9e, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x12}, {.addr=0x0fb3, .value=0xa4}, {.addr=0x0fb4, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x0fb5, .a=0x34, .x=0xca, .y=0x0a, .sp=0x9e, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x12}, {.addr=0x0fb3, .value=0xa4}, {.addr=0x0fb4, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fb3, .value=0xa4, .type=IO_READ},
        {.addr=0x0fb4, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xb144, .a=0x8c, .x=0x6e, .y=0x2d, .sp=0xdc, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x1a}, {.addr=0xb144, .value=0xa4}, {.addr=0xb145, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xb146, .a=0x72, .x=0x6e, .y=0x2d, .sp=0xdc, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x1a}, {.addr=0xb144, .value=0xa4}, {.addr=0xb145, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xb144, .value=0xa4, .type=IO_READ},
        {.addr=0xb145, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x21a4, .a=0xad, .x=0x20, .y=0x68, .sp=0xbe, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xd1}, {.addr=0x21a4, .value=0xa4}, {.addr=0x21a5, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x21a6, .a=0xdb, .x=0x20, .y=0x68, .sp=0xbe, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xd1}, {.addr=0x21a4, .value=0xa4}, {.addr=0x21a5, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x21a4, .value=0xa4, .type=IO_READ},
        {.addr=0x21a5, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x952b, .a=0x9e, .x=0xca, .y=0x30, .sp=0xc7, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x6c}, {.addr=0x952b, .value=0xa4}, {.addr=0x952c, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x952d, .a=0x32, .x=0xca, .y=0x30, .sp=0xc7, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x6c}, {.addr=0x952b, .value=0xa4}, {.addr=0x952c, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x952b, .value=0xa4, .type=IO_READ},
        {.addr=0x952c, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x8503, .a=0xcf, .x=0x60, .y=0xe0, .sp=0x33, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xb5}, {.addr=0x8503, .value=0xa4}, {.addr=0x8504, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x8505, .a=0x1a, .x=0x60, .y=0xe0, .sp=0x33, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xb5}, {.addr=0x8503, .value=0xa4}, {.addr=0x8504, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x8503, .value=0xa4, .type=IO_READ},
        {.addr=0x8504, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xda40, .a=0x1f, .x=0x56, .y=0xb9, .sp=0x1f, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x79}, {.addr=0xda40, .value=0xa4}, {.addr=0xda41, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xda42, .a=0xa6, .x=0x56, .y=0xb9, .sp=0x1f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x79}, {.addr=0xda40, .value=0xa4}, {.addr=0xda41, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xda40, .value=0xa4, .type=IO_READ},
        {.addr=0xda41, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x50bc, .a=0xf1, .x=0x64, .y=0x4f, .sp=0x60, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xb0}, {.addr=0x50bc, .value=0xa4}, {.addr=0x50bd, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x50be, .a=0x40, .x=0x64, .y=0x4f, .sp=0x60, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xb0}, {.addr=0x50bc, .value=0xa4}, {.addr=0x50bd, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x50bc, .value=0xa4, .type=IO_READ},
        {.addr=0x50bd, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4578, .a=0x54, .x=0xe2, .y=0xd3, .sp=0x7f, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xfa}, {.addr=0x4578, .value=0xa4}, {.addr=0x4579, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x457a, .a=0x5a, .x=0xe2, .y=0xd3, .sp=0x7f, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xfa}, {.addr=0x4578, .value=0xa4}, {.addr=0x4579, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x4578, .value=0xa4, .type=IO_READ},
        {.addr=0x4579, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xf7d3, .a=0xe1, .x=0x35, .y=0xb4, .sp=0xbc, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x7c}, {.addr=0xf7d3, .value=0xa4}, {.addr=0xf7d4, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xf7d5, .a=0x65, .x=0x35, .y=0xb4, .sp=0xbc, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x7c}, {.addr=0xf7d3, .value=0xa4}, {.addr=0xf7d4, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7d3, .value=0xa4, .type=IO_READ},
        {.addr=0xf7d4, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x8907, .a=0xaa, .x=0x90, .y=0x56, .sp=0x59, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xdf}, {.addr=0x8907, .value=0xa4}, {.addr=0x8908, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x8909, .a=0xca, .x=0x90, .y=0x56, .sp=0x59, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xdf}, {.addr=0x8907, .value=0xa4}, {.addr=0x8908, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8907, .value=0xa4, .type=IO_READ},
        {.addr=0x8908, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8519, .a=0xa2, .x=0x57, .y=0x52, .sp=0xad, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x33}, {.addr=0x8519, .value=0xa4}, {.addr=0x851a, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x851b, .a=0x6e, .x=0x57, .y=0x52, .sp=0xad, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x33}, {.addr=0x8519, .value=0xa4}, {.addr=0x851a, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8519, .value=0xa4, .type=IO_READ},
        {.addr=0x851a, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xa4d7, .a=0x15, .x=0x43, .y=0xd8, .sp=0x50, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x67}, {.addr=0xa4d7, .value=0xa4}, {.addr=0xa4d8, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xa4d9, .a=0xae, .x=0x43, .y=0xd8, .sp=0x50, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x67}, {.addr=0xa4d7, .value=0xa4}, {.addr=0xa4d8, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4d7, .value=0xa4, .type=IO_READ},
        {.addr=0xa4d8, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x2c17, .a=0x25, .x=0xee, .y=0x89, .sp=0x7c, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xbc}, {.addr=0x2c17, .value=0xa4}, {.addr=0x2c18, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x2c19, .a=0x68, .x=0xee, .y=0x89, .sp=0x7c, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xbc}, {.addr=0x2c17, .value=0xa4}, {.addr=0x2c18, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c17, .value=0xa4, .type=IO_READ},
        {.addr=0x2c18, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xd232, .a=0xf6, .x=0x5e, .y=0x93, .sp=0xe8, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xc4}, {.addr=0xd232, .value=0xa4}, {.addr=0xd233, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xd234, .a=0x31, .x=0x5e, .y=0x93, .sp=0xe8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xc4}, {.addr=0xd232, .value=0xa4}, {.addr=0xd233, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xd232, .value=0xa4, .type=IO_READ},
        {.addr=0xd233, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x80f0, .a=0x96, .x=0x51, .y=0x6e, .sp=0xd1, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x81}, {.addr=0x80f0, .value=0xa4}, {.addr=0x80f1, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x80f2, .a=0x15, .x=0x51, .y=0x6e, .sp=0xd1, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x81}, {.addr=0x80f0, .value=0xa4}, {.addr=0x80f1, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x80f0, .value=0xa4, .type=IO_READ},
        {.addr=0x80f1, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x3b7d, .a=0x70, .x=0xbe, .y=0x21, .sp=0x1a, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x83}, {.addr=0x3b7d, .value=0xa4}, {.addr=0x3b7e, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x3b7f, .a=0xec, .x=0xbe, .y=0x21, .sp=0x1a, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x83}, {.addr=0x3b7d, .value=0xa4}, {.addr=0x3b7e, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b7d, .value=0xa4, .type=IO_READ},
        {.addr=0x3b7e, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x2789, .a=0xa2, .x=0xe8, .y=0x73, .sp=0x06, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xf6}, {.addr=0x2789, .value=0xa4}, {.addr=0x278a, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x278b, .a=0xab, .x=0xe8, .y=0x73, .sp=0x06, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xf6}, {.addr=0x2789, .value=0xa4}, {.addr=0x278a, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x2789, .value=0xa4, .type=IO_READ},
        {.addr=0x278a, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x7916, .a=0x70, .x=0x46, .y=0x79, .sp=0xb2, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x00}, {.addr=0x7916, .value=0xa4}, {.addr=0x7917, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x7918, .a=0x6f, .x=0x46, .y=0x79, .sp=0xb2, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x00}, {.addr=0x7916, .value=0xa4}, {.addr=0x7917, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7916, .value=0xa4, .type=IO_READ},
        {.addr=0x7917, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x3c0a, .a=0x1e, .x=0xe5, .y=0x6e, .sp=0xd1, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xa3}, {.addr=0x3c0a, .value=0xa4}, {.addr=0x3c0b, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x3c0c, .a=0x7a, .x=0xe5, .y=0x6e, .sp=0xd1, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xa3}, {.addr=0x3c0a, .value=0xa4}, {.addr=0x3c0b, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c0a, .value=0xa4, .type=IO_READ},
        {.addr=0x3c0b, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x69d9, .a=0xe7, .x=0x1a, .y=0xd6, .sp=0x1b, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x94}, {.addr=0x69d9, .value=0xa4}, {.addr=0x69da, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x69db, .a=0x53, .x=0x1a, .y=0xd6, .sp=0x1b, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x94}, {.addr=0x69d9, .value=0xa4}, {.addr=0x69da, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x69d9, .value=0xa4, .type=IO_READ},
        {.addr=0x69da, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xd58e, .a=0x15, .x=0x70, .y=0x7a, .sp=0xbc, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x8e}, {.addr=0xd58e, .value=0xa4}, {.addr=0xd58f, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xd590, .a=0x86, .x=0x70, .y=0x7a, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x8e}, {.addr=0xd58e, .value=0xa4}, {.addr=0xd58f, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xd58e, .value=0xa4, .type=IO_READ},
        {.addr=0xd58f, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x7027, .a=0x4b, .x=0x90, .y=0xe7, .sp=0xe5, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x11}, {.addr=0x7027, .value=0xa4}, {.addr=0x7028, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x7029, .a=0x3a, .x=0x90, .y=0xe7, .sp=0xe5, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x11}, {.addr=0x7027, .value=0xa4}, {.addr=0x7028, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7027, .value=0xa4, .type=IO_READ},
        {.addr=0x7028, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x39b3, .a=0x0b, .x=0xc9, .y=0xdb, .sp=0x49, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xaa}, {.addr=0x39b3, .value=0xa4}, {.addr=0x39b4, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x39b5, .a=0x60, .x=0xc9, .y=0xdb, .sp=0x49, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xaa}, {.addr=0x39b3, .value=0xa4}, {.addr=0x39b4, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x39b3, .value=0xa4, .type=IO_READ},
        {.addr=0x39b4, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x2f7b, .a=0x0b, .x=0xe1, .y=0xb7, .sp=0x89, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xdd}, {.addr=0x2f7b, .value=0xa4}, {.addr=0x2f7c, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x2f7d, .a=0x2e, .x=0xe1, .y=0xb7, .sp=0x89, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xdd}, {.addr=0x2f7b, .value=0xa4}, {.addr=0x2f7c, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f7b, .value=0xa4, .type=IO_READ},
        {.addr=0x2f7c, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0x4b, .x=0xed, .y=0xc0, .sp=0x98, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x52}, {.addr=0xd54b, .value=0xa4}, {.addr=0xd54c, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xd54d, .a=0xf9, .x=0xed, .y=0xc0, .sp=0x98, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x52}, {.addr=0xd54b, .value=0xa4}, {.addr=0xd54c, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0xa4, .type=IO_READ},
        {.addr=0xd54c, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xb128, .a=0x06, .x=0x9d, .y=0xdd, .sp=0x8d, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x04}, {.addr=0xb128, .value=0xa4}, {.addr=0xb129, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xb12a, .a=0x01, .x=0x9d, .y=0xdd, .sp=0x8d, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x04}, {.addr=0xb128, .value=0xa4}, {.addr=0xb129, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xb128, .value=0xa4, .type=IO_READ},
        {.addr=0xb129, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x3ea5, .a=0x16, .x=0x3b, .y=0xf8, .sp=0x85, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x52}, {.addr=0x3ea5, .value=0xa4}, {.addr=0x3ea6, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x3ea7, .a=0xc3, .x=0x3b, .y=0xf8, .sp=0x85, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x52}, {.addr=0x3ea5, .value=0xa4}, {.addr=0x3ea6, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ea5, .value=0xa4, .type=IO_READ},
        {.addr=0x3ea6, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xf918, .a=0xfb, .x=0xfd, .y=0x8b, .sp=0x4d, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xdc}, {.addr=0xf918, .value=0xa4}, {.addr=0xf919, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xf91a, .a=0x1e, .x=0xfd, .y=0x8b, .sp=0x4d, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xdc}, {.addr=0xf918, .value=0xa4}, {.addr=0xf919, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xf918, .value=0xa4, .type=IO_READ},
        {.addr=0xf919, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x17f9, .a=0xdf, .x=0xd2, .y=0x50, .sp=0x53, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x02}, {.addr=0x17f9, .value=0xa4}, {.addr=0x17fa, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x17fb, .a=0xdd, .x=0xd2, .y=0x50, .sp=0x53, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x02}, {.addr=0x17f9, .value=0xa4}, {.addr=0x17fa, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x17f9, .value=0xa4, .type=IO_READ},
        {.addr=0x17fa, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x358d, .a=0xbf, .x=0x99, .y=0x0c, .sp=0x87, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xd8}, {.addr=0x358d, .value=0xa4}, {.addr=0x358e, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x358f, .a=0xe7, .x=0x99, .y=0x0c, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xd8}, {.addr=0x358d, .value=0xa4}, {.addr=0x358e, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x358d, .value=0xa4, .type=IO_READ},
        {.addr=0x358e, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x096d, .a=0x6e, .x=0x1f, .y=0x21, .sp=0x18, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xd5}, {.addr=0x096d, .value=0xa4}, {.addr=0x096e, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x096f, .a=0x99, .x=0x1f, .y=0x21, .sp=0x18, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xd5}, {.addr=0x096d, .value=0xa4}, {.addr=0x096e, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x096d, .value=0xa4, .type=IO_READ},
        {.addr=0x096e, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xfa0f, .a=0x0f, .x=0x45, .y=0x8c, .sp=0x39, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xa3}, {.addr=0xfa0f, .value=0xa4}, {.addr=0xfa10, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xfa11, .a=0x6b, .x=0x45, .y=0x8c, .sp=0x39, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xa3}, {.addr=0xfa0f, .value=0xa4}, {.addr=0xfa10, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa0f, .value=0xa4, .type=IO_READ},
        {.addr=0xfa10, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xbe12, .a=0x76, .x=0x13, .y=0x77, .sp=0xc7, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xfc}, {.addr=0xbe12, .value=0xa4}, {.addr=0xbe13, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xbe14, .a=0x7a, .x=0x13, .y=0x77, .sp=0xc7, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xfc}, {.addr=0xbe12, .value=0xa4}, {.addr=0xbe13, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe12, .value=0xa4, .type=IO_READ},
        {.addr=0xbe13, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x9063, .a=0x59, .x=0x8d, .y=0xd4, .sp=0x28, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x8b}, {.addr=0x9063, .value=0xa4}, {.addr=0x9064, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x9065, .a=0xce, .x=0x8d, .y=0xd4, .sp=0x28, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x8b}, {.addr=0x9063, .value=0xa4}, {.addr=0x9064, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x9063, .value=0xa4, .type=IO_READ},
        {.addr=0x9064, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb857, .a=0x36, .x=0xc2, .y=0x38, .sp=0xf0, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x88}, {.addr=0xb857, .value=0xa4}, {.addr=0xb858, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xb859, .a=0xad, .x=0xc2, .y=0x38, .sp=0xf0, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x88}, {.addr=0xb857, .value=0xa4}, {.addr=0xb858, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb857, .value=0xa4, .type=IO_READ},
        {.addr=0xb858, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x99c4, .a=0x92, .x=0x12, .y=0xf9, .sp=0x65, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xe4}, {.addr=0x99c4, .value=0xa4}, {.addr=0x99c5, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x99c6, .a=0xad, .x=0x12, .y=0xf9, .sp=0x65, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xe4}, {.addr=0x99c4, .value=0xa4}, {.addr=0x99c5, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x99c4, .value=0xa4, .type=IO_READ},
        {.addr=0x99c5, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x8468, .a=0xdd, .x=0x66, .y=0x31, .sp=0x19, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xb4}, {.addr=0x8468, .value=0xa4}, {.addr=0x8469, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x846a, .a=0x29, .x=0x66, .y=0x31, .sp=0x19, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xb4}, {.addr=0x8468, .value=0xa4}, {.addr=0x8469, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8468, .value=0xa4, .type=IO_READ},
        {.addr=0x8469, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x04d4, .a=0x2d, .x=0x4e, .y=0x14, .sp=0xe3, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x1f}, {.addr=0x04d4, .value=0xa4}, {.addr=0x04d5, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x04d6, .a=0x0d, .x=0x4e, .y=0x14, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x1f}, {.addr=0x04d4, .value=0xa4}, {.addr=0x04d5, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x04d4, .value=0xa4, .type=IO_READ},
        {.addr=0x04d5, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x7f24, .a=0xf0, .x=0x82, .y=0x37, .sp=0xa0, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xc0}, {.addr=0x7f24, .value=0xa4}, {.addr=0x7f25, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x7f26, .a=0x30, .x=0x82, .y=0x37, .sp=0xa0, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xc0}, {.addr=0x7f24, .value=0xa4}, {.addr=0x7f25, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f24, .value=0xa4, .type=IO_READ},
        {.addr=0x7f25, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x56dc, .a=0xbe, .x=0xf4, .y=0x2e, .sp=0xaf, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x23}, {.addr=0x56dc, .value=0xa4}, {.addr=0x56dd, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x56de, .a=0x9b, .x=0xf4, .y=0x2e, .sp=0xaf, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x23}, {.addr=0x56dc, .value=0xa4}, {.addr=0x56dd, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x56dc, .value=0xa4, .type=IO_READ},
        {.addr=0x56dd, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x0e07, .a=0x81, .x=0x4b, .y=0x46, .sp=0xe8, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xc1}, {.addr=0x0e07, .value=0xa4}, {.addr=0x0e08, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x0e09, .a=0xc0, .x=0x4b, .y=0x46, .sp=0xe8, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xc1}, {.addr=0x0e07, .value=0xa4}, {.addr=0x0e08, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e07, .value=0xa4, .type=IO_READ},
        {.addr=0x0e08, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xe96b, .a=0x06, .x=0xce, .y=0x1e, .sp=0xae, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x87}, {.addr=0xe96b, .value=0xa4}, {.addr=0xe96c, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0x7e, .x=0xce, .y=0x1e, .sp=0xae, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x87}, {.addr=0xe96b, .value=0xa4}, {.addr=0xe96c, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xe96b, .value=0xa4, .type=IO_READ},
        {.addr=0xe96c, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xe1f6, .a=0xf8, .x=0xe2, .y=0x6c, .sp=0xb4, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x0a}, {.addr=0xe1f6, .value=0xa4}, {.addr=0xe1f7, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe1f8, .a=0xed, .x=0xe2, .y=0x6c, .sp=0xb4, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x0a}, {.addr=0xe1f6, .value=0xa4}, {.addr=0xe1f7, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1f6, .value=0xa4, .type=IO_READ},
        {.addr=0xe1f7, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x4dc6, .a=0x8e, .x=0xe3, .y=0x54, .sp=0x62, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x64}, {.addr=0x4dc6, .value=0xa4}, {.addr=0x4dc7, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x4dc8, .a=0x29, .x=0xe3, .y=0x54, .sp=0x62, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x64}, {.addr=0x4dc6, .value=0xa4}, {.addr=0x4dc7, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dc6, .value=0xa4, .type=IO_READ},
        {.addr=0x4dc7, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xbcbd, .a=0xff, .x=0x30, .y=0xec, .sp=0xf4, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x1d}, {.addr=0xbcbd, .value=0xa4}, {.addr=0xbcbe, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xbcbf, .a=0xe2, .x=0x30, .y=0xec, .sp=0xf4, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x1d}, {.addr=0xbcbd, .value=0xa4}, {.addr=0xbcbe, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcbd, .value=0xa4, .type=IO_READ},
        {.addr=0xbcbe, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x0e4e, .a=0xfe, .x=0x16, .y=0x13, .sp=0x25, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x42}, {.addr=0x0e4e, .value=0xa4}, {.addr=0x0e4f, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x0e50, .a=0xbb, .x=0x16, .y=0x13, .sp=0x25, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x42}, {.addr=0x0e4e, .value=0xa4}, {.addr=0x0e4f, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e4e, .value=0xa4, .type=IO_READ},
        {.addr=0x0e4f, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x6627, .a=0x31, .x=0x78, .y=0xe4, .sp=0x41, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xbc}, {.addr=0x6627, .value=0xa4}, {.addr=0x6628, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x6629, .a=0x74, .x=0x78, .y=0xe4, .sp=0x41, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xbc}, {.addr=0x6627, .value=0xa4}, {.addr=0x6628, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x6627, .value=0xa4, .type=IO_READ},
        {.addr=0x6628, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x1d13, .a=0x5e, .x=0xe1, .y=0xef, .sp=0x6a, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xbd}, {.addr=0x1d13, .value=0xa4}, {.addr=0x1d14, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x1d15, .a=0xa0, .x=0xe1, .y=0xef, .sp=0x6a, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xbd}, {.addr=0x1d13, .value=0xa4}, {.addr=0x1d14, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d13, .value=0xa4, .type=IO_READ},
        {.addr=0x1d14, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x1182, .a=0x9c, .x=0x3f, .y=0xa6, .sp=0x0f, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xb5}, {.addr=0x1182, .value=0xa4}, {.addr=0x1183, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x1184, .a=0xe7, .x=0x3f, .y=0xa6, .sp=0x0f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xb5}, {.addr=0x1182, .value=0xa4}, {.addr=0x1183, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1182, .value=0xa4, .type=IO_READ},
        {.addr=0x1183, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x7ece, .a=0xba, .x=0x35, .y=0xab, .sp=0x9b, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xfb}, {.addr=0x7ece, .value=0xa4}, {.addr=0x7ecf, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x7ed0, .a=0xbf, .x=0x35, .y=0xab, .sp=0x9b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xfb}, {.addr=0x7ece, .value=0xa4}, {.addr=0x7ecf, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ece, .value=0xa4, .type=IO_READ},
        {.addr=0x7ecf, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0917, .a=0x14, .x=0x28, .y=0x10, .sp=0xdf, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xe7}, {.addr=0x0917, .value=0xa4}, {.addr=0x0918, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x0919, .a=0x2d, .x=0x28, .y=0x10, .sp=0xdf, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xe7}, {.addr=0x0917, .value=0xa4}, {.addr=0x0918, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0917, .value=0xa4, .type=IO_READ},
        {.addr=0x0918, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xfe26, .a=0xe4, .x=0x14, .y=0x3a, .sp=0x7b, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x49}, {.addr=0xfe26, .value=0xa4}, {.addr=0xfe27, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xfe28, .a=0x9b, .x=0x14, .y=0x3a, .sp=0x7b, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x49}, {.addr=0xfe26, .value=0xa4}, {.addr=0xfe27, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe26, .value=0xa4, .type=IO_READ},
        {.addr=0xfe27, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x7a71, .a=0x42, .x=0x1a, .y=0x15, .sp=0x28, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x2d}, {.addr=0x7a71, .value=0xa4}, {.addr=0x7a72, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x7a73, .a=0x14, .x=0x1a, .y=0x15, .sp=0x28, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x2d}, {.addr=0x7a71, .value=0xa4}, {.addr=0x7a72, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a71, .value=0xa4, .type=IO_READ},
        {.addr=0x7a72, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc994, .a=0x97, .x=0xa4, .y=0x51, .sp=0xc3, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x4a}, {.addr=0xc994, .value=0xa4}, {.addr=0xc995, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xc996, .a=0x4d, .x=0xa4, .y=0x51, .sp=0xc3, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x4a}, {.addr=0xc994, .value=0xa4}, {.addr=0xc995, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xc994, .value=0xa4, .type=IO_READ},
        {.addr=0xc995, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4dd7, .a=0x19, .x=0x05, .y=0x08, .sp=0xed, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x84}, {.addr=0x4dd7, .value=0xa4}, {.addr=0x4dd8, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x4dd9, .a=0x94, .x=0x05, .y=0x08, .sp=0xed, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x84}, {.addr=0x4dd7, .value=0xa4}, {.addr=0x4dd8, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dd7, .value=0xa4, .type=IO_READ},
        {.addr=0x4dd8, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x05d9, .a=0x63, .x=0x9f, .y=0x85, .sp=0xcb, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x43}, {.addr=0x05d9, .value=0xa4}, {.addr=0x05da, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x05db, .a=0x1f, .x=0x9f, .y=0x85, .sp=0xcb, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x43}, {.addr=0x05d9, .value=0xa4}, {.addr=0x05da, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x05d9, .value=0xa4, .type=IO_READ},
        {.addr=0x05da, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x87f6, .a=0xa8, .x=0x4d, .y=0xf5, .sp=0xf0, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xf7}, {.addr=0x87f6, .value=0xa4}, {.addr=0x87f7, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x87f8, .a=0xb1, .x=0x4d, .y=0xf5, .sp=0xf0, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xf7}, {.addr=0x87f6, .value=0xa4}, {.addr=0x87f7, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x87f6, .value=0xa4, .type=IO_READ},
        {.addr=0x87f7, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x075a, .a=0x62, .x=0x4a, .y=0xf1, .sp=0x39, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xb8}, {.addr=0x075a, .value=0xa4}, {.addr=0x075b, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x075c, .a=0xa9, .x=0x4a, .y=0xf1, .sp=0x39, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xb8}, {.addr=0x075a, .value=0xa4}, {.addr=0x075b, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x075a, .value=0xa4, .type=IO_READ},
        {.addr=0x075b, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xc57c, .a=0x2a, .x=0x29, .y=0xb2, .sp=0xde, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xf9}, {.addr=0xc57c, .value=0xa4}, {.addr=0xc57d, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xc57e, .a=0x30, .x=0x29, .y=0xb2, .sp=0xde, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xf9}, {.addr=0xc57c, .value=0xa4}, {.addr=0xc57d, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xc57c, .value=0xa4, .type=IO_READ},
        {.addr=0xc57d, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xb467, .a=0x4b, .x=0xd5, .y=0x3b, .sp=0x5c, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x0f}, {.addr=0xb467, .value=0xa4}, {.addr=0xb468, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xb469, .a=0x3c, .x=0xd5, .y=0x3b, .sp=0x5c, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x0f}, {.addr=0xb467, .value=0xa4}, {.addr=0xb468, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb467, .value=0xa4, .type=IO_READ},
        {.addr=0xb468, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xa2fa, .a=0xb5, .x=0x10, .y=0x37, .sp=0x34, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x2f}, {.addr=0xa2fa, .value=0xa4}, {.addr=0xa2fb, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xa2fc, .a=0x85, .x=0x10, .y=0x37, .sp=0x34, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x2f}, {.addr=0xa2fa, .value=0xa4}, {.addr=0xa2fb, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2fa, .value=0xa4, .type=IO_READ},
        {.addr=0xa2fb, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xc9d4, .a=0x4f, .x=0x63, .y=0x91, .sp=0xf7, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x19}, {.addr=0xc9d4, .value=0xa4}, {.addr=0xc9d5, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xc9d6, .a=0x35, .x=0x63, .y=0x91, .sp=0xf7, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x19}, {.addr=0xc9d4, .value=0xa4}, {.addr=0xc9d5, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9d4, .value=0xa4, .type=IO_READ},
        {.addr=0xc9d5, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xf7b5, .a=0xe6, .x=0x62, .y=0x36, .sp=0x76, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x7d}, {.addr=0xf7b5, .value=0xa4}, {.addr=0xf7b6, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xf7b7, .a=0x69, .x=0x62, .y=0x36, .sp=0x76, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x7d}, {.addr=0xf7b5, .value=0xa4}, {.addr=0xf7b6, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7b5, .value=0xa4, .type=IO_READ},
        {.addr=0xf7b6, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xa50c, .a=0xe0, .x=0x85, .y=0xb7, .sp=0x16, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0xcf}, {.addr=0xa50c, .value=0xa4}, {.addr=0xa50d, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xa50e, .a=0x11, .x=0x85, .y=0xb7, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0xcf}, {.addr=0xa50c, .value=0xa4}, {.addr=0xa50d, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xa50c, .value=0xa4, .type=IO_READ},
        {.addr=0xa50d, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xfda4, .a=0xcc, .x=0x5f, .y=0x7a, .sp=0xf7, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x80}, {.addr=0xfda4, .value=0xa4}, {.addr=0xfda5, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xfda6, .a=0x4b, .x=0x5f, .y=0x7a, .sp=0xf7, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x80}, {.addr=0xfda4, .value=0xa4}, {.addr=0xfda5, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfda4, .value=0xa4, .type=IO_READ},
        {.addr=0xfda5, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x510a, .a=0x58, .x=0x4d, .y=0x69, .sp=0x36, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xb6}, {.addr=0x510a, .value=0xa4}, {.addr=0x510b, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x510c, .a=0xa2, .x=0x4d, .y=0x69, .sp=0x36, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xb6}, {.addr=0x510a, .value=0xa4}, {.addr=0x510b, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x510a, .value=0xa4, .type=IO_READ},
        {.addr=0x510b, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xbd9a, .a=0xdd, .x=0xc3, .y=0x35, .sp=0x0d, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x96}, {.addr=0xbd9a, .value=0xa4}, {.addr=0xbd9b, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xbd9c, .a=0x46, .x=0xc3, .y=0x35, .sp=0x0d, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x96}, {.addr=0xbd9a, .value=0xa4}, {.addr=0xbd9b, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd9a, .value=0xa4, .type=IO_READ},
        {.addr=0xbd9b, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xa8e9, .a=0x45, .x=0x48, .y=0xa4, .sp=0x9b, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x7d}, {.addr=0xa8e9, .value=0xa4}, {.addr=0xa8ea, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xa8eb, .a=0xc8, .x=0x48, .y=0xa4, .sp=0x9b, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x7d}, {.addr=0xa8e9, .value=0xa4}, {.addr=0xa8ea, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8e9, .value=0xa4, .type=IO_READ},
        {.addr=0xa8ea, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x350c, .a=0x1a, .x=0xa3, .y=0xab, .sp=0x8c, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x2a}, {.addr=0x350c, .value=0xa4}, {.addr=0x350d, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x350e, .a=0xef, .x=0xa3, .y=0xab, .sp=0x8c, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x2a}, {.addr=0x350c, .value=0xa4}, {.addr=0x350d, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x350c, .value=0xa4, .type=IO_READ},
        {.addr=0x350d, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xbd8e, .a=0xb8, .x=0xc5, .y=0x18, .sp=0x4c, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x24}, {.addr=0xbd8e, .value=0xa4}, {.addr=0xbd8f, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xbd90, .a=0x93, .x=0xc5, .y=0x18, .sp=0x4c, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x24}, {.addr=0xbd8e, .value=0xa4}, {.addr=0xbd8f, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8e, .value=0xa4, .type=IO_READ},
        {.addr=0xbd8f, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xfaed, .a=0x63, .x=0x70, .y=0xe7, .sp=0x2f, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xdb}, {.addr=0xfaed, .value=0xa4}, {.addr=0xfaee, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xfaef, .a=0x88, .x=0x70, .y=0xe7, .sp=0x2f, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xdb}, {.addr=0xfaed, .value=0xa4}, {.addr=0xfaee, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaed, .value=0xa4, .type=IO_READ},
        {.addr=0xfaee, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x8e64, .a=0x52, .x=0x05, .y=0xb8, .sp=0x8b, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x74}, {.addr=0x8e64, .value=0xa4}, {.addr=0x8e65, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x8e66, .a=0xde, .x=0x05, .y=0xb8, .sp=0x8b, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x74}, {.addr=0x8e64, .value=0xa4}, {.addr=0x8e65, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e64, .value=0xa4, .type=IO_READ},
        {.addr=0x8e65, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x6693, .a=0x95, .x=0x84, .y=0xe9, .sp=0x25, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xc5}, {.addr=0x6693, .value=0xa4}, {.addr=0x6694, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x6695, .a=0xd0, .x=0x84, .y=0xe9, .sp=0x25, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xc5}, {.addr=0x6693, .value=0xa4}, {.addr=0x6694, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x6693, .value=0xa4, .type=IO_READ},
        {.addr=0x6694, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xb20a, .a=0xef, .x=0xad, .y=0x99, .sp=0x26, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x21}, {.addr=0xb20a, .value=0xa4}, {.addr=0xb20b, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xb20c, .a=0xcd, .x=0xad, .y=0x99, .sp=0x26, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x21}, {.addr=0xb20a, .value=0xa4}, {.addr=0xb20b, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xb20a, .value=0xa4, .type=IO_READ},
        {.addr=0xb20b, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xef44, .a=0x23, .x=0x20, .y=0xc1, .sp=0xbe, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x44}, {.addr=0xef44, .value=0xa4}, {.addr=0xef45, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xef46, .a=0xde, .x=0x20, .y=0xc1, .sp=0xbe, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x44}, {.addr=0xef44, .value=0xa4}, {.addr=0xef45, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xef44, .value=0xa4, .type=IO_READ},
        {.addr=0xef45, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5c0f, .a=0x0a, .x=0x06, .y=0x26, .sp=0xd5, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xe7}, {.addr=0x5c0f, .value=0xa4}, {.addr=0x5c10, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x5c11, .a=0x22, .x=0x06, .y=0x26, .sp=0xd5, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xe7}, {.addr=0x5c0f, .value=0xa4}, {.addr=0x5c10, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c0f, .value=0xa4, .type=IO_READ},
        {.addr=0x5c10, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x99eb, .a=0xc2, .x=0xfc, .y=0xcb, .sp=0x1f, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x80}, {.addr=0x99eb, .value=0xa4}, {.addr=0x99ec, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x99ed, .a=0x41, .x=0xfc, .y=0xcb, .sp=0x1f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x80}, {.addr=0x99eb, .value=0xa4}, {.addr=0x99ec, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x99eb, .value=0xa4, .type=IO_READ},
        {.addr=0x99ec, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x3ff7, .a=0xb0, .x=0xfd, .y=0x72, .sp=0x67, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x97}, {.addr=0x3ff7, .value=0xa4}, {.addr=0x3ff8, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x3ff9, .a=0x19, .x=0xfd, .y=0x72, .sp=0x67, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x97}, {.addr=0x3ff7, .value=0xa4}, {.addr=0x3ff8, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ff7, .value=0xa4, .type=IO_READ},
        {.addr=0x3ff8, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x9be5, .a=0x31, .x=0xe9, .y=0x41, .sp=0x56, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x98}, {.addr=0x9be5, .value=0xa4}, {.addr=0x9be6, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x9be7, .a=0x99, .x=0xe9, .y=0x41, .sp=0x56, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x98}, {.addr=0x9be5, .value=0xa4}, {.addr=0x9be6, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be5, .value=0xa4, .type=IO_READ},
        {.addr=0x9be6, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xe3b9, .a=0x17, .x=0x92, .y=0x19, .sp=0x22, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xcb}, {.addr=0xe3b9, .value=0xa4}, {.addr=0xe3ba, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xe3bb, .a=0x4b, .x=0x92, .y=0x19, .sp=0x22, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xcb}, {.addr=0xe3b9, .value=0xa4}, {.addr=0xe3ba, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3b9, .value=0xa4, .type=IO_READ},
        {.addr=0xe3ba, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x4299, .a=0x91, .x=0xbb, .y=0x6f, .sp=0xb5, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x16}, {.addr=0x4299, .value=0xa4}, {.addr=0x429a, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x429b, .a=0x7a, .x=0xbb, .y=0x6f, .sp=0xb5, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x16}, {.addr=0x4299, .value=0xa4}, {.addr=0x429a, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x4299, .value=0xa4, .type=IO_READ},
        {.addr=0x429a, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb312, .a=0xd3, .x=0x48, .y=0xb4, .sp=0x2d, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x6b}, {.addr=0xb312, .value=0xa4}, {.addr=0xb313, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xb314, .a=0x67, .x=0x48, .y=0xb4, .sp=0x2d, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x6b}, {.addr=0xb312, .value=0xa4}, {.addr=0xb313, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xb312, .value=0xa4, .type=IO_READ},
        {.addr=0xb313, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xb1b7, .a=0x81, .x=0x63, .y=0x82, .sp=0x22, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x33}, {.addr=0xb1b7, .value=0xa4}, {.addr=0xb1b8, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xb1b9, .a=0x4d, .x=0x63, .y=0x82, .sp=0x22, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x33}, {.addr=0xb1b7, .value=0xa4}, {.addr=0xb1b8, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1b7, .value=0xa4, .type=IO_READ},
        {.addr=0xb1b8, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0200) {
    const struct CPU_State initial_cpu = {.pc=0x43ea, .a=0x3c, .x=0x99, .y=0xae, .sp=0x67, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x1b}, {.addr=0x43ea, .value=0xa4}, {.addr=0x43eb, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0x21, .x=0x99, .y=0xae, .sp=0x67, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x1b}, {.addr=0x43ea, .value=0xa4}, {.addr=0x43eb, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x43ea, .value=0xa4, .type=IO_READ},
        {.addr=0x43eb, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0201) {
    const struct CPU_State initial_cpu = {.pc=0x83fa, .a=0x5b, .x=0x08, .y=0xca, .sp=0xe8, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x5b}, {.addr=0x83fa, .value=0xa4}, {.addr=0x83fb, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x83fc, .a=0x00, .x=0x08, .y=0xca, .sp=0xe8, .status=0x0f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x5b}, {.addr=0x83fa, .value=0xa4}, {.addr=0x83fb, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x83fa, .value=0xa4, .type=IO_READ},
        {.addr=0x83fb, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0202) {
    const struct CPU_State initial_cpu = {.pc=0xb90e, .a=0x55, .x=0xaa, .y=0xa7, .sp=0x07, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x0d}, {.addr=0xb90e, .value=0xa4}, {.addr=0xb90f, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xb910, .a=0x48, .x=0xaa, .y=0xa7, .sp=0x07, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x0d}, {.addr=0xb90e, .value=0xa4}, {.addr=0xb90f, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xb90e, .value=0xa4, .type=IO_READ},
        {.addr=0xb90f, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0203) {
    const struct CPU_State initial_cpu = {.pc=0x7e1f, .a=0x3a, .x=0x04, .y=0xe5, .sp=0xa3, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0xd6}, {.addr=0x7e1f, .value=0xa4}, {.addr=0x7e20, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x7e21, .a=0x63, .x=0x04, .y=0xe5, .sp=0xa3, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0xd6}, {.addr=0x7e1f, .value=0xa4}, {.addr=0x7e20, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e1f, .value=0xa4, .type=IO_READ},
        {.addr=0x7e20, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2e00, .a=0x62, .x=0x3c, .y=0xc8, .sp=0x0c, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x86}, {.addr=0x2e00, .value=0xa4}, {.addr=0x2e01, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x2e02, .a=0xdc, .x=0x3c, .y=0xc8, .sp=0x0c, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x86}, {.addr=0x2e00, .value=0xa4}, {.addr=0x2e01, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e00, .value=0xa4, .type=IO_READ},
        {.addr=0x2e01, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0205) {
    const struct CPU_State initial_cpu = {.pc=0xbc45, .a=0x7b, .x=0xa1, .y=0x31, .sp=0xfe, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x69}, {.addr=0xbc45, .value=0xa4}, {.addr=0xbc46, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xbc47, .a=0x12, .x=0xa1, .y=0x31, .sp=0xfe, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x69}, {.addr=0xbc45, .value=0xa4}, {.addr=0xbc46, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc45, .value=0xa4, .type=IO_READ},
        {.addr=0xbc46, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0206) {
    const struct CPU_State initial_cpu = {.pc=0x948a, .a=0xa4, .x=0x05, .y=0x5d, .sp=0xdb, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x46}, {.addr=0x948a, .value=0xa4}, {.addr=0x948b, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x948c, .a=0x5d, .x=0x05, .y=0x5d, .sp=0xdb, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x46}, {.addr=0x948a, .value=0xa4}, {.addr=0x948b, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x948a, .value=0xa4, .type=IO_READ},
        {.addr=0x948b, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4eed, .a=0x41, .x=0x9a, .y=0xfe, .sp=0x6d, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x9e}, {.addr=0x4eed, .value=0xa4}, {.addr=0x4eee, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x4eef, .a=0xa3, .x=0x9a, .y=0xfe, .sp=0x6d, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x9e}, {.addr=0x4eed, .value=0xa4}, {.addr=0x4eee, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x4eed, .value=0xa4, .type=IO_READ},
        {.addr=0x4eee, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0208) {
    const struct CPU_State initial_cpu = {.pc=0xdab3, .a=0x50, .x=0xc3, .y=0x0c, .sp=0x63, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x96}, {.addr=0xdab3, .value=0xa4}, {.addr=0xdab4, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xdab5, .a=0xb9, .x=0xc3, .y=0x0c, .sp=0x63, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x96}, {.addr=0xdab3, .value=0xa4}, {.addr=0xdab4, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdab3, .value=0xa4, .type=IO_READ},
        {.addr=0xdab4, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0209) {
    const struct CPU_State initial_cpu = {.pc=0xb865, .a=0x78, .x=0x96, .y=0xfc, .sp=0x4e, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xef}, {.addr=0xb865, .value=0xa4}, {.addr=0xb866, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xb867, .a=0x89, .x=0x96, .y=0xfc, .sp=0x4e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xef}, {.addr=0xb865, .value=0xa4}, {.addr=0xb866, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xb865, .value=0xa4, .type=IO_READ},
        {.addr=0xb866, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020A) {
    const struct CPU_State initial_cpu = {.pc=0x33b4, .a=0x95, .x=0x63, .y=0xf2, .sp=0xc9, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x7b}, {.addr=0x33b4, .value=0xa4}, {.addr=0x33b5, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x33b6, .a=0x1a, .x=0x63, .y=0xf2, .sp=0xc9, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x7b}, {.addr=0x33b4, .value=0xa4}, {.addr=0x33b5, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x33b4, .value=0xa4, .type=IO_READ},
        {.addr=0x33b5, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020B) {
    const struct CPU_State initial_cpu = {.pc=0x4f45, .a=0xb3, .x=0x26, .y=0x2b, .sp=0xef, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x76}, {.addr=0x4f45, .value=0xa4}, {.addr=0x4f46, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x4f47, .a=0x3d, .x=0x26, .y=0x2b, .sp=0xef, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x76}, {.addr=0x4f45, .value=0xa4}, {.addr=0x4f46, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f45, .value=0xa4, .type=IO_READ},
        {.addr=0x4f46, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020C) {
    const struct CPU_State initial_cpu = {.pc=0xe8d9, .a=0x13, .x=0x49, .y=0x83, .sp=0x78, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x58}, {.addr=0xe8d9, .value=0xa4}, {.addr=0xe8da, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xe8db, .a=0xbb, .x=0x49, .y=0x83, .sp=0x78, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x58}, {.addr=0xe8d9, .value=0xa4}, {.addr=0xe8da, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8d9, .value=0xa4, .type=IO_READ},
        {.addr=0xe8da, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020D) {
    const struct CPU_State initial_cpu = {.pc=0x7dbf, .a=0x81, .x=0xe5, .y=0x41, .sp=0x20, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x2a}, {.addr=0x7dbf, .value=0xa4}, {.addr=0x7dc0, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x7dc1, .a=0x57, .x=0xe5, .y=0x41, .sp=0x20, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x2a}, {.addr=0x7dbf, .value=0xa4}, {.addr=0x7dc0, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dbf, .value=0xa4, .type=IO_READ},
        {.addr=0x7dc0, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020E) {
    const struct CPU_State initial_cpu = {.pc=0x4377, .a=0xe7, .x=0x4b, .y=0xd8, .sp=0xcf, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x0e}, {.addr=0x4377, .value=0xa4}, {.addr=0x4378, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x4379, .a=0xd9, .x=0x4b, .y=0xd8, .sp=0xcf, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x0e}, {.addr=0x4377, .value=0xa4}, {.addr=0x4378, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4377, .value=0xa4, .type=IO_READ},
        {.addr=0x4378, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_020F) {
    const struct CPU_State initial_cpu = {.pc=0xc0db, .a=0x1a, .x=0x70, .y=0x59, .sp=0x8f, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x8d}, {.addr=0xc0db, .value=0xa4}, {.addr=0xc0dc, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xc0dd, .a=0x8d, .x=0x70, .y=0x59, .sp=0x8f, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x8d}, {.addr=0xc0db, .value=0xa4}, {.addr=0xc0dc, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0db, .value=0xa4, .type=IO_READ},
        {.addr=0xc0dc, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0210) {
    const struct CPU_State initial_cpu = {.pc=0x1afd, .a=0x2c, .x=0x81, .y=0x38, .sp=0x8c, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x9b}, {.addr=0x1afd, .value=0xa4}, {.addr=0x1afe, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x1aff, .a=0x91, .x=0x81, .y=0x38, .sp=0x8c, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x9b}, {.addr=0x1afd, .value=0xa4}, {.addr=0x1afe, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x1afd, .value=0xa4, .type=IO_READ},
        {.addr=0x1afe, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0bf8, .a=0x52, .x=0x68, .y=0x0c, .sp=0x78, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x2d}, {.addr=0x0bf8, .value=0xa4}, {.addr=0x0bf9, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x0bfa, .a=0x25, .x=0x68, .y=0x0c, .sp=0x78, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x2d}, {.addr=0x0bf8, .value=0xa4}, {.addr=0x0bf9, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bf8, .value=0xa4, .type=IO_READ},
        {.addr=0x0bf9, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0212) {
    const struct CPU_State initial_cpu = {.pc=0x98c3, .a=0x00, .x=0x7e, .y=0x47, .sp=0x71, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x44}, {.addr=0x98c3, .value=0xa4}, {.addr=0x98c4, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x98c5, .a=0xbb, .x=0x7e, .y=0x47, .sp=0x71, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x44}, {.addr=0x98c3, .value=0xa4}, {.addr=0x98c4, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x98c3, .value=0xa4, .type=IO_READ},
        {.addr=0x98c4, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0213) {
    const struct CPU_State initial_cpu = {.pc=0x707e, .a=0x1d, .x=0x45, .y=0xa2, .sp=0x7b, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x53}, {.addr=0x707e, .value=0xa4}, {.addr=0x707f, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x7080, .a=0xc9, .x=0x45, .y=0xa2, .sp=0x7b, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x53}, {.addr=0x707e, .value=0xa4}, {.addr=0x707f, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x707e, .value=0xa4, .type=IO_READ},
        {.addr=0x707f, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0214) {
    const struct CPU_State initial_cpu = {.pc=0xc4a4, .a=0x30, .x=0x16, .y=0x13, .sp=0xa3, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x42}, {.addr=0xc4a4, .value=0xa4}, {.addr=0xc4a5, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xc4a6, .a=0xee, .x=0x16, .y=0x13, .sp=0xa3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x42}, {.addr=0xc4a4, .value=0xa4}, {.addr=0xc4a5, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4a4, .value=0xa4, .type=IO_READ},
        {.addr=0xc4a5, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0215) {
    const struct CPU_State initial_cpu = {.pc=0xe967, .a=0x90, .x=0x67, .y=0x93, .sp=0x45, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x04}, {.addr=0xe967, .value=0xa4}, {.addr=0xe968, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xe969, .a=0x8b, .x=0x67, .y=0x93, .sp=0x45, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x04}, {.addr=0xe967, .value=0xa4}, {.addr=0xe968, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe967, .value=0xa4, .type=IO_READ},
        {.addr=0xe968, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0216) {
    const struct CPU_State initial_cpu = {.pc=0x1f19, .a=0x86, .x=0xf1, .y=0xe2, .sp=0x2a, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x28}, {.addr=0x1f19, .value=0xa4}, {.addr=0x1f1a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x1f1b, .a=0x5e, .x=0xf1, .y=0xe2, .sp=0x2a, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x28}, {.addr=0x1f19, .value=0xa4}, {.addr=0x1f1a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f19, .value=0xa4, .type=IO_READ},
        {.addr=0x1f1a, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0217) {
    const struct CPU_State initial_cpu = {.pc=0x843f, .a=0x71, .x=0x21, .y=0xa2, .sp=0xdc, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xc8}, {.addr=0x843f, .value=0xa4}, {.addr=0x8440, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x8441, .a=0xa9, .x=0x21, .y=0xa2, .sp=0xdc, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xc8}, {.addr=0x843f, .value=0xa4}, {.addr=0x8440, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x843f, .value=0xa4, .type=IO_READ},
        {.addr=0x8440, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0218) {
    const struct CPU_State initial_cpu = {.pc=0xf9b1, .a=0x1d, .x=0x47, .y=0x17, .sp=0xf8, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xf7}, {.addr=0xf9b1, .value=0xa4}, {.addr=0xf9b2, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xf9b3, .a=0x26, .x=0x47, .y=0x17, .sp=0xf8, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xf7}, {.addr=0xf9b1, .value=0xa4}, {.addr=0xf9b2, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9b1, .value=0xa4, .type=IO_READ},
        {.addr=0xf9b2, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0219) {
    const struct CPU_State initial_cpu = {.pc=0x9be2, .a=0x05, .x=0x42, .y=0x52, .sp=0xed, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xba}, {.addr=0x9be2, .value=0xa4}, {.addr=0x9be3, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x9be4, .a=0x4b, .x=0x42, .y=0x52, .sp=0xed, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xba}, {.addr=0x9be2, .value=0xa4}, {.addr=0x9be3, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be2, .value=0xa4, .type=IO_READ},
        {.addr=0x9be3, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_021B) {
    const struct CPU_State initial_cpu = {.pc=0xdeba, .a=0x78, .x=0xf6, .y=0x71, .sp=0x23, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xf7}, {.addr=0xdeba, .value=0xa4}, {.addr=0xdebb, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xdebc, .a=0x80, .x=0xf6, .y=0x71, .sp=0x23, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xf7}, {.addr=0xdeba, .value=0xa4}, {.addr=0xdebb, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeba, .value=0xa4, .type=IO_READ},
        {.addr=0xdebb, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_021C) {
    const struct CPU_State initial_cpu = {.pc=0x55ee, .a=0x03, .x=0xcb, .y=0x5f, .sp=0xa8, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0xa1}, {.addr=0x55ee, .value=0xa4}, {.addr=0x55ef, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x55f0, .a=0x61, .x=0xcb, .y=0x5f, .sp=0xa8, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0xa1}, {.addr=0x55ee, .value=0xa4}, {.addr=0x55ef, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x55ee, .value=0xa4, .type=IO_READ},
        {.addr=0x55ef, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf8c6, .a=0xac, .x=0xc2, .y=0xba, .sp=0x34, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xb3}, {.addr=0xf8c6, .value=0xa4}, {.addr=0xf8c7, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xf8c8, .a=0xf8, .x=0xc2, .y=0xba, .sp=0x34, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xb3}, {.addr=0xf8c6, .value=0xa4}, {.addr=0xf8c7, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8c6, .value=0xa4, .type=IO_READ},
        {.addr=0xf8c7, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_021E) {
    const struct CPU_State initial_cpu = {.pc=0x019e, .a=0xcd, .x=0x02, .y=0xf9, .sp=0x4d, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x78}, {.addr=0x019e, .value=0xa4}, {.addr=0x019f, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x01a0, .a=0x54, .x=0x02, .y=0xf9, .sp=0x4d, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x78}, {.addr=0x019e, .value=0xa4}, {.addr=0x019f, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x019e, .value=0xa4, .type=IO_READ},
        {.addr=0x019f, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_021F) {
    const struct CPU_State initial_cpu = {.pc=0xb6f9, .a=0xee, .x=0xcf, .y=0x0e, .sp=0x98, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0xb6}, {.addr=0xb6f9, .value=0xa4}, {.addr=0xb6fa, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xb6fb, .a=0x38, .x=0xcf, .y=0x0e, .sp=0x98, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0xb6}, {.addr=0xb6f9, .value=0xa4}, {.addr=0xb6fa, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6f9, .value=0xa4, .type=IO_READ},
        {.addr=0xb6fa, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0220) {
    const struct CPU_State initial_cpu = {.pc=0x96d0, .a=0x03, .x=0xe1, .y=0xa8, .sp=0x48, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x25}, {.addr=0x96d0, .value=0xa4}, {.addr=0x96d1, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x96d2, .a=0xde, .x=0xe1, .y=0xa8, .sp=0x48, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x25}, {.addr=0x96d0, .value=0xa4}, {.addr=0x96d1, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x96d0, .value=0xa4, .type=IO_READ},
        {.addr=0x96d1, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa939, .a=0x38, .x=0x3b, .y=0xf3, .sp=0xbc, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x84}, {.addr=0xa939, .value=0xa4}, {.addr=0xa93a, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xa93b, .a=0xb4, .x=0x3b, .y=0xf3, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x84}, {.addr=0xa939, .value=0xa4}, {.addr=0xa93a, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa939, .value=0xa4, .type=IO_READ},
        {.addr=0xa93a, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0222) {
    const struct CPU_State initial_cpu = {.pc=0x459c, .a=0xc2, .x=0x09, .y=0x2f, .sp=0x7b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x52}, {.addr=0x459c, .value=0xa4}, {.addr=0x459d, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x459e, .a=0x70, .x=0x09, .y=0x2f, .sp=0x7b, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x52}, {.addr=0x459c, .value=0xa4}, {.addr=0x459d, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x459c, .value=0xa4, .type=IO_READ},
        {.addr=0x459d, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0223) {
    const struct CPU_State initial_cpu = {.pc=0x42cd, .a=0x95, .x=0x4d, .y=0x61, .sp=0x61, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xd3}, {.addr=0x42cd, .value=0xa4}, {.addr=0x42ce, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x42cf, .a=0xc1, .x=0x4d, .y=0x61, .sp=0x61, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xd3}, {.addr=0x42cd, .value=0xa4}, {.addr=0x42ce, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x42cd, .value=0xa4, .type=IO_READ},
        {.addr=0x42ce, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0224) {
    const struct CPU_State initial_cpu = {.pc=0x350a, .a=0x25, .x=0x21, .y=0x59, .sp=0x9d, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xbb}, {.addr=0x350a, .value=0xa4}, {.addr=0x350b, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x350c, .a=0x69, .x=0x21, .y=0x59, .sp=0x9d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xbb}, {.addr=0x350a, .value=0xa4}, {.addr=0x350b, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x350a, .value=0xa4, .type=IO_READ},
        {.addr=0x350b, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0225) {
    const struct CPU_State initial_cpu = {.pc=0x724c, .a=0xb7, .x=0x75, .y=0xfc, .sp=0xba, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xb0}, {.addr=0x724c, .value=0xa4}, {.addr=0x724d, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x724e, .a=0x06, .x=0x75, .y=0xfc, .sp=0xba, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xb0}, {.addr=0x724c, .value=0xa4}, {.addr=0x724d, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x724c, .value=0xa4, .type=IO_READ},
        {.addr=0x724d, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb0ec, .a=0x99, .x=0x0c, .y=0xb9, .sp=0x35, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x5e}, {.addr=0xb0ec, .value=0xa4}, {.addr=0xb0ed, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xb0ee, .a=0x3a, .x=0x0c, .y=0xb9, .sp=0x35, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x5e}, {.addr=0xb0ec, .value=0xa4}, {.addr=0xb0ed, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0ec, .value=0xa4, .type=IO_READ},
        {.addr=0xb0ed, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0227) {
    const struct CPU_State initial_cpu = {.pc=0x30f5, .a=0x5a, .x=0xa2, .y=0x1a, .sp=0x2f, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x5f}, {.addr=0x30f5, .value=0xa4}, {.addr=0x30f6, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x30f7, .a=0xfa, .x=0xa2, .y=0x1a, .sp=0x2f, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x5f}, {.addr=0x30f5, .value=0xa4}, {.addr=0x30f6, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x30f5, .value=0xa4, .type=IO_READ},
        {.addr=0x30f6, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0228) {
    const struct CPU_State initial_cpu = {.pc=0xfc68, .a=0x3d, .x=0x59, .y=0x58, .sp=0xaa, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x22}, {.addr=0xfc68, .value=0xa4}, {.addr=0xfc69, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xfc6a, .a=0x1a, .x=0x59, .y=0x58, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x22}, {.addr=0xfc68, .value=0xa4}, {.addr=0xfc69, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc68, .value=0xa4, .type=IO_READ},
        {.addr=0xfc69, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0229) {
    const struct CPU_State initial_cpu = {.pc=0xf2b8, .a=0x41, .x=0xb6, .y=0x34, .sp=0x41, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x27}, {.addr=0xf2b8, .value=0xa4}, {.addr=0xf2b9, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xf2ba, .a=0x19, .x=0xb6, .y=0x34, .sp=0x41, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x27}, {.addr=0xf2b8, .value=0xa4}, {.addr=0xf2b9, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2b8, .value=0xa4, .type=IO_READ},
        {.addr=0xf2b9, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022A) {
    const struct CPU_State initial_cpu = {.pc=0x738e, .a=0x9e, .x=0x49, .y=0xdc, .sp=0xc1, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x26}, {.addr=0x738e, .value=0xa4}, {.addr=0x738f, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x7390, .a=0x78, .x=0x49, .y=0xdc, .sp=0xc1, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x26}, {.addr=0x738e, .value=0xa4}, {.addr=0x738f, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x738e, .value=0xa4, .type=IO_READ},
        {.addr=0x738f, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022B) {
    const struct CPU_State initial_cpu = {.pc=0x0846, .a=0x6e, .x=0xcc, .y=0xac, .sp=0x28, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xa4}, {.addr=0x0846, .value=0xa4}, {.addr=0x0847, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x0848, .a=0xc9, .x=0xcc, .y=0xac, .sp=0x28, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xa4}, {.addr=0x0846, .value=0xa4}, {.addr=0x0847, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x0846, .value=0xa4, .type=IO_READ},
        {.addr=0x0847, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022C) {
    const struct CPU_State initial_cpu = {.pc=0x4d29, .a=0xd3, .x=0x39, .y=0xe8, .sp=0x5f, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x6b}, {.addr=0x4d29, .value=0xa4}, {.addr=0x4d2a, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x4d2b, .a=0x68, .x=0x39, .y=0xe8, .sp=0x5f, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x6b}, {.addr=0x4d29, .value=0xa4}, {.addr=0x4d2a, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d29, .value=0xa4, .type=IO_READ},
        {.addr=0x4d2a, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022D) {
    const struct CPU_State initial_cpu = {.pc=0xb1dd, .a=0x3b, .x=0xb7, .y=0xeb, .sp=0xe2, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x6d}, {.addr=0xb1dd, .value=0xa4}, {.addr=0xb1de, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xb1df, .a=0xce, .x=0xb7, .y=0xeb, .sp=0xe2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x6d}, {.addr=0xb1dd, .value=0xa4}, {.addr=0xb1de, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1dd, .value=0xa4, .type=IO_READ},
        {.addr=0xb1de, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022E) {
    const struct CPU_State initial_cpu = {.pc=0x9ddb, .a=0xa9, .x=0x30, .y=0x1d, .sp=0x95, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xc3}, {.addr=0x9ddb, .value=0xa4}, {.addr=0x9ddc, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x9ddd, .a=0xe6, .x=0x30, .y=0x1d, .sp=0x95, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xc3}, {.addr=0x9ddb, .value=0xa4}, {.addr=0x9ddc, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ddb, .value=0xa4, .type=IO_READ},
        {.addr=0x9ddc, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_022F) {
    const struct CPU_State initial_cpu = {.pc=0x75e6, .a=0xed, .x=0x9a, .y=0xbb, .sp=0xed, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xa5}, {.addr=0x75e6, .value=0xa4}, {.addr=0x75e7, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x75e8, .a=0x48, .x=0x9a, .y=0xbb, .sp=0xed, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xa5}, {.addr=0x75e6, .value=0xa4}, {.addr=0x75e7, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x75e6, .value=0xa4, .type=IO_READ},
        {.addr=0x75e7, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0230) {
    const struct CPU_State initial_cpu = {.pc=0x0e86, .a=0x44, .x=0x26, .y=0x8d, .sp=0x0d, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xaa}, {.addr=0x0e86, .value=0xa4}, {.addr=0x0e87, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x0e88, .a=0x99, .x=0x26, .y=0x8d, .sp=0x0d, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xaa}, {.addr=0x0e86, .value=0xa4}, {.addr=0x0e87, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e86, .value=0xa4, .type=IO_READ},
        {.addr=0x0e87, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0231) {
    const struct CPU_State initial_cpu = {.pc=0x32b8, .a=0xbe, .x=0xeb, .y=0xfd, .sp=0x41, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x87}, {.addr=0x32b8, .value=0xa4}, {.addr=0x32b9, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x32ba, .a=0x36, .x=0xeb, .y=0xfd, .sp=0x41, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x87}, {.addr=0x32b8, .value=0xa4}, {.addr=0x32b9, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x32b8, .value=0xa4, .type=IO_READ},
        {.addr=0x32b9, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8371, .a=0x72, .x=0xf0, .y=0x49, .sp=0x21, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x8a}, {.addr=0x8371, .value=0xa4}, {.addr=0x8372, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x8373, .a=0xe8, .x=0xf0, .y=0x49, .sp=0x21, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x8a}, {.addr=0x8371, .value=0xa4}, {.addr=0x8372, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8371, .value=0xa4, .type=IO_READ},
        {.addr=0x8372, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0233) {
    const struct CPU_State initial_cpu = {.pc=0xce96, .a=0xd5, .x=0x6b, .y=0x09, .sp=0x4f, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x76}, {.addr=0xce96, .value=0xa4}, {.addr=0xce97, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xce98, .a=0x5e, .x=0x6b, .y=0x09, .sp=0x4f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x76}, {.addr=0xce96, .value=0xa4}, {.addr=0xce97, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xce96, .value=0xa4, .type=IO_READ},
        {.addr=0xce97, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd490, .a=0xf2, .x=0xd4, .y=0x43, .sp=0xfb, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x19}, {.addr=0xd490, .value=0xa4}, {.addr=0xd491, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xd492, .a=0xd8, .x=0xd4, .y=0x43, .sp=0xfb, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x19}, {.addr=0xd490, .value=0xa4}, {.addr=0xd491, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd490, .value=0xa4, .type=IO_READ},
        {.addr=0xd491, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd047, .a=0x02, .x=0xb3, .y=0x08, .sp=0x30, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x1a}, {.addr=0xd047, .value=0xa4}, {.addr=0xd048, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xd049, .a=0xe8, .x=0xb3, .y=0x08, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x1a}, {.addr=0xd047, .value=0xa4}, {.addr=0xd048, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xd047, .value=0xa4, .type=IO_READ},
        {.addr=0xd048, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0236) {
    const struct CPU_State initial_cpu = {.pc=0x92d0, .a=0x6c, .x=0x91, .y=0xf0, .sp=0xc5, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x48}, {.addr=0x92d0, .value=0xa4}, {.addr=0x92d1, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x92d2, .a=0x24, .x=0x91, .y=0xf0, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x48}, {.addr=0x92d0, .value=0xa4}, {.addr=0x92d1, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x92d0, .value=0xa4, .type=IO_READ},
        {.addr=0x92d1, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0237) {
    const struct CPU_State initial_cpu = {.pc=0x8bea, .a=0x40, .x=0xf8, .y=0x0c, .sp=0xb4, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x31}, {.addr=0x8bea, .value=0xa4}, {.addr=0x8beb, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x8bec, .a=0x0e, .x=0xf8, .y=0x0c, .sp=0xb4, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x31}, {.addr=0x8bea, .value=0xa4}, {.addr=0x8beb, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bea, .value=0xa4, .type=IO_READ},
        {.addr=0x8beb, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0238) {
    const struct CPU_State initial_cpu = {.pc=0x000d, .a=0x58, .x=0xfc, .y=0x3e, .sp=0x3a, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xa4}, {.addr=0x000e, .value=0xe7}, {.addr=0x00e7, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x000f, .a=0x00, .x=0xfc, .y=0x3e, .sp=0x3a, .status=0x0f};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xa4}, {.addr=0x000e, .value=0xe7}, {.addr=0x00e7, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x000d, .value=0xa4, .type=IO_READ},
        {.addr=0x000e, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0239) {
    const struct CPU_State initial_cpu = {.pc=0x4384, .a=0xef, .x=0x7f, .y=0xc7, .sp=0x8a, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xd3}, {.addr=0x4384, .value=0xa4}, {.addr=0x4385, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x4386, .a=0x1c, .x=0x7f, .y=0xc7, .sp=0x8a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xd3}, {.addr=0x4384, .value=0xa4}, {.addr=0x4385, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4384, .value=0xa4, .type=IO_READ},
        {.addr=0x4385, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023A) {
    const struct CPU_State initial_cpu = {.pc=0x3390, .a=0x2e, .x=0x70, .y=0xd7, .sp=0xea, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x8c}, {.addr=0x3390, .value=0xa4}, {.addr=0x3391, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x3392, .a=0xa2, .x=0x70, .y=0xd7, .sp=0xea, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x8c}, {.addr=0x3390, .value=0xa4}, {.addr=0x3391, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x3390, .value=0xa4, .type=IO_READ},
        {.addr=0x3391, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0348, .a=0x10, .x=0x10, .y=0xd6, .sp=0x83, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x31}, {.addr=0x0348, .value=0xa4}, {.addr=0x0349, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x034a, .a=0xdf, .x=0x10, .y=0xd6, .sp=0x83, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x31}, {.addr=0x0348, .value=0xa4}, {.addr=0x0349, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0348, .value=0xa4, .type=IO_READ},
        {.addr=0x0349, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023C) {
    const struct CPU_State initial_cpu = {.pc=0xa194, .a=0x95, .x=0x57, .y=0xd6, .sp=0x22, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x9e}, {.addr=0xa194, .value=0xa4}, {.addr=0xa195, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xa196, .a=0xf7, .x=0x57, .y=0xd6, .sp=0x22, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x9e}, {.addr=0xa194, .value=0xa4}, {.addr=0xa195, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa194, .value=0xa4, .type=IO_READ},
        {.addr=0xa195, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023D) {
    const struct CPU_State initial_cpu = {.pc=0x0fb8, .a=0x18, .x=0x32, .y=0x52, .sp=0x4d, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xcc}, {.addr=0x0fb8, .value=0xa4}, {.addr=0x0fb9, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x0fba, .a=0x4b, .x=0x32, .y=0x52, .sp=0x4d, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xcc}, {.addr=0x0fb8, .value=0xa4}, {.addr=0x0fb9, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fb8, .value=0xa4, .type=IO_READ},
        {.addr=0x0fb9, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023E) {
    const struct CPU_State initial_cpu = {.pc=0xd8a1, .a=0xb5, .x=0x96, .y=0x36, .sp=0x00, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x5d}, {.addr=0xd8a1, .value=0xa4}, {.addr=0xd8a2, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xd8a3, .a=0x58, .x=0x96, .y=0x36, .sp=0x00, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x5d}, {.addr=0xd8a1, .value=0xa4}, {.addr=0xd8a2, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8a1, .value=0xa4, .type=IO_READ},
        {.addr=0xd8a2, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_023F) {
    const struct CPU_State initial_cpu = {.pc=0x7ede, .a=0xd5, .x=0x02, .y=0x5c, .sp=0x8f, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x31}, {.addr=0x7ede, .value=0xa4}, {.addr=0x7edf, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee0, .a=0xa4, .x=0x02, .y=0x5c, .sp=0x8f, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x31}, {.addr=0x7ede, .value=0xa4}, {.addr=0x7edf, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ede, .value=0xa4, .type=IO_READ},
        {.addr=0x7edf, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0240) {
    const struct CPU_State initial_cpu = {.pc=0x3e25, .a=0x65, .x=0x02, .y=0x4a, .sp=0xab, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x73}, {.addr=0x3e25, .value=0xa4}, {.addr=0x3e26, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x3e27, .a=0xf2, .x=0x02, .y=0x4a, .sp=0xab, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x73}, {.addr=0x3e25, .value=0xa4}, {.addr=0x3e26, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e25, .value=0xa4, .type=IO_READ},
        {.addr=0x3e26, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0241) {
    const struct CPU_State initial_cpu = {.pc=0x2c2d, .a=0xa1, .x=0xad, .y=0x26, .sp=0x78, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x88}, {.addr=0x2c2d, .value=0xa4}, {.addr=0x2c2e, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x2c2f, .a=0x18, .x=0xad, .y=0x26, .sp=0x78, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x88}, {.addr=0x2c2d, .value=0xa4}, {.addr=0x2c2e, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c2d, .value=0xa4, .type=IO_READ},
        {.addr=0x2c2e, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0242) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0x1a, .x=0xcc, .y=0x8f, .sp=0xb1, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xe3}, {.addr=0x6321, .value=0xa4}, {.addr=0x6322, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x6323, .a=0x37, .x=0xcc, .y=0x8f, .sp=0xb1, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xe3}, {.addr=0x6321, .value=0xa4}, {.addr=0x6322, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0xa4, .type=IO_READ},
        {.addr=0x6322, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0243) {
    const struct CPU_State initial_cpu = {.pc=0xe6c9, .a=0x21, .x=0x7e, .y=0x99, .sp=0xde, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x72}, {.addr=0xe6c9, .value=0xa4}, {.addr=0xe6ca, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xe6cb, .a=0xae, .x=0x7e, .y=0x99, .sp=0xde, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x72}, {.addr=0xe6c9, .value=0xa4}, {.addr=0xe6ca, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6c9, .value=0xa4, .type=IO_READ},
        {.addr=0xe6ca, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9608, .a=0xff, .x=0xc5, .y=0x1f, .sp=0x13, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x14}, {.addr=0x9608, .value=0xa4}, {.addr=0x9609, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x960a, .a=0xea, .x=0xc5, .y=0x1f, .sp=0x13, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x14}, {.addr=0x9608, .value=0xa4}, {.addr=0x9609, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9608, .value=0xa4, .type=IO_READ},
        {.addr=0x9609, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0245) {
    const struct CPU_State initial_cpu = {.pc=0x6a58, .a=0xd3, .x=0x61, .y=0xa4, .sp=0x12, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x92}, {.addr=0x6a58, .value=0xa4}, {.addr=0x6a59, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x6a5a, .a=0x41, .x=0x61, .y=0xa4, .sp=0x12, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x92}, {.addr=0x6a58, .value=0xa4}, {.addr=0x6a59, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a58, .value=0xa4, .type=IO_READ},
        {.addr=0x6a59, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3688, .a=0x76, .x=0xfd, .y=0x61, .sp=0x80, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x4c}, {.addr=0x3688, .value=0xa4}, {.addr=0x3689, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x368a, .a=0x2a, .x=0xfd, .y=0x61, .sp=0x80, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x4c}, {.addr=0x3688, .value=0xa4}, {.addr=0x3689, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3688, .value=0xa4, .type=IO_READ},
        {.addr=0x3689, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0248) {
    const struct CPU_State initial_cpu = {.pc=0x2afb, .a=0x04, .x=0x4c, .y=0x49, .sp=0xf9, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x81}, {.addr=0x2afb, .value=0xa4}, {.addr=0x2afc, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x2afd, .a=0x83, .x=0x4c, .y=0x49, .sp=0xf9, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x81}, {.addr=0x2afb, .value=0xa4}, {.addr=0x2afc, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2afb, .value=0xa4, .type=IO_READ},
        {.addr=0x2afc, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0249) {
    const struct CPU_State initial_cpu = {.pc=0x5f3f, .a=0x8a, .x=0x06, .y=0x14, .sp=0x0d, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xf9}, {.addr=0x5f3f, .value=0xa4}, {.addr=0x5f40, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x5f41, .a=0x91, .x=0x06, .y=0x14, .sp=0x0d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xf9}, {.addr=0x5f3f, .value=0xa4}, {.addr=0x5f40, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f3f, .value=0xa4, .type=IO_READ},
        {.addr=0x5f40, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024A) {
    const struct CPU_State initial_cpu = {.pc=0xb152, .a=0x2d, .x=0x7b, .y=0xd6, .sp=0xb8, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x16}, {.addr=0xb152, .value=0xa4}, {.addr=0xb153, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xb154, .a=0x17, .x=0x7b, .y=0xd6, .sp=0xb8, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x16}, {.addr=0xb152, .value=0xa4}, {.addr=0xb153, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb152, .value=0xa4, .type=IO_READ},
        {.addr=0xb153, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024B) {
    const struct CPU_State initial_cpu = {.pc=0x3a87, .a=0xa3, .x=0x6d, .y=0xe4, .sp=0xbd, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x6e}, {.addr=0x3a87, .value=0xa4}, {.addr=0x3a88, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x3a89, .a=0x35, .x=0x6d, .y=0xe4, .sp=0xbd, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x6e}, {.addr=0x3a87, .value=0xa4}, {.addr=0x3a88, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a87, .value=0xa4, .type=IO_READ},
        {.addr=0x3a88, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024C) {
    const struct CPU_State initial_cpu = {.pc=0x68b9, .a=0x7f, .x=0xd9, .y=0xd8, .sp=0x34, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xd5}, {.addr=0x68b9, .value=0xa4}, {.addr=0x68ba, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x68bb, .a=0xa9, .x=0xd9, .y=0xd8, .sp=0x34, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xd5}, {.addr=0x68b9, .value=0xa4}, {.addr=0x68ba, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x68b9, .value=0xa4, .type=IO_READ},
        {.addr=0x68ba, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024D) {
    const struct CPU_State initial_cpu = {.pc=0xbe3d, .a=0x8b, .x=0xca, .y=0x2c, .sp=0x52, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x5f}, {.addr=0xbe3d, .value=0xa4}, {.addr=0xbe3e, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xbe3f, .a=0x2b, .x=0xca, .y=0x2c, .sp=0x52, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x5f}, {.addr=0xbe3d, .value=0xa4}, {.addr=0xbe3e, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe3d, .value=0xa4, .type=IO_READ},
        {.addr=0xbe3e, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024E) {
    const struct CPU_State initial_cpu = {.pc=0xc6b1, .a=0x4d, .x=0x78, .y=0x9a, .sp=0x0f, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x07}, {.addr=0xc6b1, .value=0xa4}, {.addr=0xc6b2, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xc6b3, .a=0x46, .x=0x78, .y=0x9a, .sp=0x0f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x07}, {.addr=0xc6b1, .value=0xa4}, {.addr=0xc6b2, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6b1, .value=0xa4, .type=IO_READ},
        {.addr=0xc6b2, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_024F) {
    const struct CPU_State initial_cpu = {.pc=0x5d57, .a=0x21, .x=0xdc, .y=0x54, .sp=0xe0, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xd5}, {.addr=0x5d57, .value=0xa4}, {.addr=0x5d58, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x5d59, .a=0x4b, .x=0xdc, .y=0x54, .sp=0xe0, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xd5}, {.addr=0x5d57, .value=0xa4}, {.addr=0x5d58, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d57, .value=0xa4, .type=IO_READ},
        {.addr=0x5d58, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb82b, .a=0x4a, .x=0x0e, .y=0xda, .sp=0x63, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xa6}, {.addr=0xb82b, .value=0xa4}, {.addr=0xb82c, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xb82d, .a=0xa4, .x=0x0e, .y=0xda, .sp=0x63, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xa6}, {.addr=0xb82b, .value=0xa4}, {.addr=0xb82c, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb82b, .value=0xa4, .type=IO_READ},
        {.addr=0xb82c, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0251) {
    const struct CPU_State initial_cpu = {.pc=0x96f3, .a=0xfc, .x=0x4d, .y=0x73, .sp=0x0e, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x79}, {.addr=0x96f3, .value=0xa4}, {.addr=0x96f4, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x96f5, .a=0x83, .x=0x4d, .y=0x73, .sp=0x0e, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x79}, {.addr=0x96f3, .value=0xa4}, {.addr=0x96f4, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x96f3, .value=0xa4, .type=IO_READ},
        {.addr=0x96f4, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0252) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0xdc, .x=0x34, .y=0xd1, .sp=0xab, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x7b}, {.addr=0xccbf, .value=0xa4}, {.addr=0xccc0, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xccc1, .a=0x61, .x=0x34, .y=0xd1, .sp=0xab, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x7b}, {.addr=0xccbf, .value=0xa4}, {.addr=0xccc0, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0xa4, .type=IO_READ},
        {.addr=0xccc0, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0253) {
    const struct CPU_State initial_cpu = {.pc=0xfdf5, .a=0x17, .x=0xad, .y=0x24, .sp=0xee, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x00}, {.addr=0xfdf5, .value=0xa4}, {.addr=0xfdf6, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xfdf7, .a=0x17, .x=0xad, .y=0x24, .sp=0xee, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x00}, {.addr=0xfdf5, .value=0xa4}, {.addr=0xfdf6, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdf5, .value=0xa4, .type=IO_READ},
        {.addr=0xfdf6, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0254) {
    const struct CPU_State initial_cpu = {.pc=0xa00f, .a=0x7f, .x=0x10, .y=0x04, .sp=0x95, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x86}, {.addr=0xa00f, .value=0xa4}, {.addr=0xa010, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xa011, .a=0xf8, .x=0x10, .y=0x04, .sp=0x95, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x86}, {.addr=0xa00f, .value=0xa4}, {.addr=0xa010, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa00f, .value=0xa4, .type=IO_READ},
        {.addr=0xa010, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0255) {
    const struct CPU_State initial_cpu = {.pc=0xe9e2, .a=0xfc, .x=0xb7, .y=0xc3, .sp=0xc9, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x78}, {.addr=0xe9e2, .value=0xa4}, {.addr=0xe9e3, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xe9e4, .a=0x84, .x=0xb7, .y=0xc3, .sp=0xc9, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x78}, {.addr=0xe9e2, .value=0xa4}, {.addr=0xe9e3, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9e2, .value=0xa4, .type=IO_READ},
        {.addr=0xe9e3, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0256) {
    const struct CPU_State initial_cpu = {.pc=0x73a0, .a=0x49, .x=0x79, .y=0x38, .sp=0x0f, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xca}, {.addr=0x73a0, .value=0xa4}, {.addr=0x73a1, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x73a2, .a=0x7f, .x=0x79, .y=0x38, .sp=0x0f, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xca}, {.addr=0x73a0, .value=0xa4}, {.addr=0x73a1, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x73a0, .value=0xa4, .type=IO_READ},
        {.addr=0x73a1, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0257) {
    const struct CPU_State initial_cpu = {.pc=0x595f, .a=0x9a, .x=0x38, .y=0x44, .sp=0x49, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xe7}, {.addr=0x595f, .value=0xa4}, {.addr=0x5960, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x5961, .a=0xb3, .x=0x38, .y=0x44, .sp=0x49, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xe7}, {.addr=0x595f, .value=0xa4}, {.addr=0x5960, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x595f, .value=0xa4, .type=IO_READ},
        {.addr=0x5960, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9bb9, .a=0x91, .x=0xf6, .y=0x0a, .sp=0xc2, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xb2}, {.addr=0x9bb9, .value=0xa4}, {.addr=0x9bba, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x9bbb, .a=0xdf, .x=0xf6, .y=0x0a, .sp=0xc2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xb2}, {.addr=0x9bb9, .value=0xa4}, {.addr=0x9bba, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bb9, .value=0xa4, .type=IO_READ},
        {.addr=0x9bba, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7726, .a=0x45, .x=0x8e, .y=0xa2, .sp=0xb2, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x14}, {.addr=0x7726, .value=0xa4}, {.addr=0x7727, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7728, .a=0x30, .x=0x8e, .y=0xa2, .sp=0xb2, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x14}, {.addr=0x7726, .value=0xa4}, {.addr=0x7727, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x7726, .value=0xa4, .type=IO_READ},
        {.addr=0x7727, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025B) {
    const struct CPU_State initial_cpu = {.pc=0x6cf1, .a=0xa0, .x=0xfb, .y=0xd1, .sp=0x7e, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x2b}, {.addr=0x6cf1, .value=0xa4}, {.addr=0x6cf2, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x6cf3, .a=0x74, .x=0xfb, .y=0xd1, .sp=0x7e, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x2b}, {.addr=0x6cf1, .value=0xa4}, {.addr=0x6cf2, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cf1, .value=0xa4, .type=IO_READ},
        {.addr=0x6cf2, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025C) {
    const struct CPU_State initial_cpu = {.pc=0x78cc, .a=0xe4, .x=0x0d, .y=0xce, .sp=0xbf, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x2e}, {.addr=0x78cc, .value=0xa4}, {.addr=0x78cd, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x78ce, .a=0xb6, .x=0x0d, .y=0xce, .sp=0xbf, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x2e}, {.addr=0x78cc, .value=0xa4}, {.addr=0x78cd, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x78cc, .value=0xa4, .type=IO_READ},
        {.addr=0x78cd, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025D) {
    const struct CPU_State initial_cpu = {.pc=0x78d9, .a=0x85, .x=0x53, .y=0x2a, .sp=0x58, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x1d}, {.addr=0x78d9, .value=0xa4}, {.addr=0x78da, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x78db, .a=0x68, .x=0x53, .y=0x2a, .sp=0x58, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x1d}, {.addr=0x78d9, .value=0xa4}, {.addr=0x78da, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x78d9, .value=0xa4, .type=IO_READ},
        {.addr=0x78da, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025E) {
    const struct CPU_State initial_cpu = {.pc=0x3432, .a=0x8e, .x=0xd4, .y=0x1c, .sp=0x88, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0xbb}, {.addr=0x3432, .value=0xa4}, {.addr=0x3433, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0xd2, .x=0xd4, .y=0x1c, .sp=0x88, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0xbb}, {.addr=0x3432, .value=0xa4}, {.addr=0x3433, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x3432, .value=0xa4, .type=IO_READ},
        {.addr=0x3433, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_025F) {
    const struct CPU_State initial_cpu = {.pc=0xf813, .a=0x61, .x=0xdc, .y=0xb3, .sp=0x5b, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x9f}, {.addr=0xf813, .value=0xa4}, {.addr=0xf814, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xf815, .a=0xc2, .x=0xdc, .y=0xb3, .sp=0x5b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x9f}, {.addr=0xf813, .value=0xa4}, {.addr=0xf814, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xf813, .value=0xa4, .type=IO_READ},
        {.addr=0xf814, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0260) {
    const struct CPU_State initial_cpu = {.pc=0x40ee, .a=0x71, .x=0x7f, .y=0xb6, .sp=0x2f, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xae}, {.addr=0x40ee, .value=0xa4}, {.addr=0x40ef, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x40f0, .a=0xc3, .x=0x7f, .y=0xb6, .sp=0x2f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xae}, {.addr=0x40ee, .value=0xa4}, {.addr=0x40ef, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x40ee, .value=0xa4, .type=IO_READ},
        {.addr=0x40ef, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0261) {
    const struct CPU_State initial_cpu = {.pc=0xf54a, .a=0xa6, .x=0x2a, .y=0x8b, .sp=0xa0, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x7c}, {.addr=0xf54a, .value=0xa4}, {.addr=0xf54b, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xf54c, .a=0x29, .x=0x2a, .y=0x8b, .sp=0xa0, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x7c}, {.addr=0xf54a, .value=0xa4}, {.addr=0xf54b, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf54a, .value=0xa4, .type=IO_READ},
        {.addr=0xf54b, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0262) {
    const struct CPU_State initial_cpu = {.pc=0x2bcd, .a=0x20, .x=0x0c, .y=0x89, .sp=0xdb, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xce}, {.addr=0x2bcd, .value=0xa4}, {.addr=0x2bce, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x2bcf, .a=0x51, .x=0x0c, .y=0x89, .sp=0xdb, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xce}, {.addr=0x2bcd, .value=0xa4}, {.addr=0x2bce, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bcd, .value=0xa4, .type=IO_READ},
        {.addr=0x2bce, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0263) {
    const struct CPU_State initial_cpu = {.pc=0xbdf0, .a=0x7e, .x=0x55, .y=0x88, .sp=0x1e, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0xbe}, {.addr=0xbdf0, .value=0xa4}, {.addr=0xbdf1, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xbdf2, .a=0xbf, .x=0x55, .y=0x88, .sp=0x1e, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0xbe}, {.addr=0xbdf0, .value=0xa4}, {.addr=0xbdf1, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdf0, .value=0xa4, .type=IO_READ},
        {.addr=0xbdf1, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0264) {
    const struct CPU_State initial_cpu = {.pc=0x4f3f, .a=0xfe, .x=0xfe, .y=0x13, .sp=0xe2, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xc7}, {.addr=0x4f3f, .value=0xa4}, {.addr=0x4f40, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x4f41, .a=0x36, .x=0xfe, .y=0x13, .sp=0xe2, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xc7}, {.addr=0x4f3f, .value=0xa4}, {.addr=0x4f40, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f3f, .value=0xa4, .type=IO_READ},
        {.addr=0x4f40, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0265) {
    const struct CPU_State initial_cpu = {.pc=0xced2, .a=0xed, .x=0x71, .y=0x93, .sp=0x88, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x0c}, {.addr=0xced2, .value=0xa4}, {.addr=0xced3, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xced4, .a=0xe1, .x=0x71, .y=0x93, .sp=0x88, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x0c}, {.addr=0xced2, .value=0xa4}, {.addr=0xced3, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xced2, .value=0xa4, .type=IO_READ},
        {.addr=0xced3, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0266) {
    const struct CPU_State initial_cpu = {.pc=0x6be8, .a=0x8e, .x=0x34, .y=0x3b, .sp=0x92, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x25}, {.addr=0x6be8, .value=0xa4}, {.addr=0x6be9, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x6bea, .a=0x68, .x=0x34, .y=0x3b, .sp=0x92, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x25}, {.addr=0x6be8, .value=0xa4}, {.addr=0x6be9, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6be8, .value=0xa4, .type=IO_READ},
        {.addr=0x6be9, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0267) {
    const struct CPU_State initial_cpu = {.pc=0x8132, .a=0xd9, .x=0x7b, .y=0xdd, .sp=0x9a, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x4e}, {.addr=0x8132, .value=0xa4}, {.addr=0x8133, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x8134, .a=0x8a, .x=0x7b, .y=0xdd, .sp=0x9a, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x4e}, {.addr=0x8132, .value=0xa4}, {.addr=0x8133, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x8132, .value=0xa4, .type=IO_READ},
        {.addr=0x8133, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0268) {
    const struct CPU_State initial_cpu = {.pc=0x63aa, .a=0x1a, .x=0x53, .y=0x4e, .sp=0x6b, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x8d}, {.addr=0x63aa, .value=0xa4}, {.addr=0x63ab, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x63ac, .a=0x8d, .x=0x53, .y=0x4e, .sp=0x6b, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x8d}, {.addr=0x63aa, .value=0xa4}, {.addr=0x63ab, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x63aa, .value=0xa4, .type=IO_READ},
        {.addr=0x63ab, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0269) {
    const struct CPU_State initial_cpu = {.pc=0x749b, .a=0xed, .x=0x67, .y=0x3d, .sp=0xfe, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xb6}, {.addr=0x749b, .value=0xa4}, {.addr=0x749c, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x749d, .a=0x36, .x=0x67, .y=0x3d, .sp=0xfe, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xb6}, {.addr=0x749b, .value=0xa4}, {.addr=0x749c, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x749b, .value=0xa4, .type=IO_READ},
        {.addr=0x749c, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026A) {
    const struct CPU_State initial_cpu = {.pc=0xdf8e, .a=0x8f, .x=0x1b, .y=0x2c, .sp=0xd0, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x9d}, {.addr=0xdf8e, .value=0xa4}, {.addr=0xdf8f, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xdf90, .a=0xf2, .x=0x1b, .y=0x2c, .sp=0xd0, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x9d}, {.addr=0xdf8e, .value=0xa4}, {.addr=0xdf8f, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf8e, .value=0xa4, .type=IO_READ},
        {.addr=0xdf8f, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026B) {
    const struct CPU_State initial_cpu = {.pc=0x3628, .a=0x23, .x=0x77, .y=0xa6, .sp=0xaf, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x78}, {.addr=0x3628, .value=0xa4}, {.addr=0x3629, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x362a, .a=0xab, .x=0x77, .y=0xa6, .sp=0xaf, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x78}, {.addr=0x3628, .value=0xa4}, {.addr=0x3629, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3628, .value=0xa4, .type=IO_READ},
        {.addr=0x3629, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026C) {
    const struct CPU_State initial_cpu = {.pc=0x2114, .a=0x2c, .x=0x25, .y=0x84, .sp=0xc6, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x6f}, {.addr=0x2114, .value=0xa4}, {.addr=0x2115, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x2116, .a=0xbc, .x=0x25, .y=0x84, .sp=0xc6, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x6f}, {.addr=0x2114, .value=0xa4}, {.addr=0x2115, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x2114, .value=0xa4, .type=IO_READ},
        {.addr=0x2115, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026D) {
    const struct CPU_State initial_cpu = {.pc=0x5f36, .a=0x11, .x=0x2b, .y=0xd1, .sp=0xa3, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x79}, {.addr=0x5f36, .value=0xa4}, {.addr=0x5f37, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x5f38, .a=0x98, .x=0x2b, .y=0xd1, .sp=0xa3, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x79}, {.addr=0x5f36, .value=0xa4}, {.addr=0x5f37, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f36, .value=0xa4, .type=IO_READ},
        {.addr=0x5f37, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026E) {
    const struct CPU_State initial_cpu = {.pc=0x0575, .a=0xf7, .x=0xba, .y=0x88, .sp=0x28, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x3e}, {.addr=0x0575, .value=0xa4}, {.addr=0x0576, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0577, .a=0xb8, .x=0xba, .y=0x88, .sp=0x28, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x3e}, {.addr=0x0575, .value=0xa4}, {.addr=0x0576, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0575, .value=0xa4, .type=IO_READ},
        {.addr=0x0576, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_026F) {
    const struct CPU_State initial_cpu = {.pc=0x0ae9, .a=0x45, .x=0x4c, .y=0x41, .sp=0x04, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x2b}, {.addr=0x0ae9, .value=0xa4}, {.addr=0x0aea, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x0aeb, .a=0x1a, .x=0x4c, .y=0x41, .sp=0x04, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x2b}, {.addr=0x0ae9, .value=0xa4}, {.addr=0x0aea, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ae9, .value=0xa4, .type=IO_READ},
        {.addr=0x0aea, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0270) {
    const struct CPU_State initial_cpu = {.pc=0x738c, .a=0x15, .x=0xec, .y=0xb8, .sp=0x7d, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x88}, {.addr=0x738c, .value=0xa4}, {.addr=0x738d, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x738e, .a=0x8c, .x=0xec, .y=0xb8, .sp=0x7d, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x88}, {.addr=0x738c, .value=0xa4}, {.addr=0x738d, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x738c, .value=0xa4, .type=IO_READ},
        {.addr=0x738d, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0271) {
    const struct CPU_State initial_cpu = {.pc=0xcac6, .a=0xd5, .x=0xff, .y=0xf1, .sp=0xc5, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x03}, {.addr=0xcac6, .value=0xa4}, {.addr=0xcac7, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xcac8, .a=0xd2, .x=0xff, .y=0xf1, .sp=0xc5, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x03}, {.addr=0xcac6, .value=0xa4}, {.addr=0xcac7, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xcac6, .value=0xa4, .type=IO_READ},
        {.addr=0xcac7, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0272) {
    const struct CPU_State initial_cpu = {.pc=0x4b73, .a=0x71, .x=0xa0, .y=0x38, .sp=0xd4, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xb4}, {.addr=0x4b73, .value=0xa4}, {.addr=0x4b74, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x4b75, .a=0xbd, .x=0xa0, .y=0x38, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xb4}, {.addr=0x4b73, .value=0xa4}, {.addr=0x4b74, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b73, .value=0xa4, .type=IO_READ},
        {.addr=0x4b74, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0273) {
    const struct CPU_State initial_cpu = {.pc=0x79b0, .a=0x9e, .x=0x22, .y=0x12, .sp=0x33, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x6f}, {.addr=0x79b0, .value=0xa4}, {.addr=0x79b1, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x79b2, .a=0x2f, .x=0x22, .y=0x12, .sp=0x33, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x6f}, {.addr=0x79b0, .value=0xa4}, {.addr=0x79b1, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x79b0, .value=0xa4, .type=IO_READ},
        {.addr=0x79b1, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0274) {
    const struct CPU_State initial_cpu = {.pc=0x8366, .a=0x8d, .x=0x30, .y=0x78, .sp=0x72, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xdf}, {.addr=0x8366, .value=0xa4}, {.addr=0x8367, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x8368, .a=0xad, .x=0x30, .y=0x78, .sp=0x72, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xdf}, {.addr=0x8366, .value=0xa4}, {.addr=0x8367, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x8366, .value=0xa4, .type=IO_READ},
        {.addr=0x8367, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5c77, .a=0xae, .x=0xde, .y=0x50, .sp=0xd2, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x2c}, {.addr=0x5c77, .value=0xa4}, {.addr=0x5c78, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x5c79, .a=0x81, .x=0xde, .y=0x50, .sp=0xd2, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x2c}, {.addr=0x5c77, .value=0xa4}, {.addr=0x5c78, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c77, .value=0xa4, .type=IO_READ},
        {.addr=0x5c78, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0276) {
    const struct CPU_State initial_cpu = {.pc=0x055f, .a=0xd0, .x=0x62, .y=0x17, .sp=0x9b, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x5b}, {.addr=0x055f, .value=0xa4}, {.addr=0x0560, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x0561, .a=0x75, .x=0x62, .y=0x17, .sp=0x9b, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x5b}, {.addr=0x055f, .value=0xa4}, {.addr=0x0560, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x055f, .value=0xa4, .type=IO_READ},
        {.addr=0x0560, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0277) {
    const struct CPU_State initial_cpu = {.pc=0xf699, .a=0x6f, .x=0xd8, .y=0x94, .sp=0x7b, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x7b}, {.addr=0xf699, .value=0xa4}, {.addr=0xf69a, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xf69b, .a=0xf4, .x=0xd8, .y=0x94, .sp=0x7b, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x7b}, {.addr=0xf699, .value=0xa4}, {.addr=0xf69a, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xf699, .value=0xa4, .type=IO_READ},
        {.addr=0xf69a, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0278) {
    const struct CPU_State initial_cpu = {.pc=0xda5f, .a=0x9a, .x=0x8f, .y=0xc4, .sp=0xae, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x1f}, {.addr=0xda5f, .value=0xa4}, {.addr=0xda60, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xda61, .a=0x7a, .x=0x8f, .y=0xc4, .sp=0xae, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x1f}, {.addr=0xda5f, .value=0xa4}, {.addr=0xda60, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xda5f, .value=0xa4, .type=IO_READ},
        {.addr=0xda60, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0279) {
    const struct CPU_State initial_cpu = {.pc=0xd9b9, .a=0x16, .x=0x7b, .y=0x9a, .sp=0x0c, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x77}, {.addr=0xd9b9, .value=0xa4}, {.addr=0xd9ba, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xd9bb, .a=0x9f, .x=0x7b, .y=0x9a, .sp=0x0c, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x77}, {.addr=0xd9b9, .value=0xa4}, {.addr=0xd9ba, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9b9, .value=0xa4, .type=IO_READ},
        {.addr=0xd9ba, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027A) {
    const struct CPU_State initial_cpu = {.pc=0x2d70, .a=0x7c, .x=0xbc, .y=0xaa, .sp=0x34, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xe6}, {.addr=0x2d70, .value=0xa4}, {.addr=0x2d71, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x2d72, .a=0x96, .x=0xbc, .y=0xaa, .sp=0x34, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xe6}, {.addr=0x2d70, .value=0xa4}, {.addr=0x2d71, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d70, .value=0xa4, .type=IO_READ},
        {.addr=0x2d71, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027B) {
    const struct CPU_State initial_cpu = {.pc=0x2341, .a=0x2d, .x=0x10, .y=0x32, .sp=0x2f, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x50}, {.addr=0x2341, .value=0xa4}, {.addr=0x2342, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x2343, .a=0xdd, .x=0x10, .y=0x32, .sp=0x2f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x50}, {.addr=0x2341, .value=0xa4}, {.addr=0x2342, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2341, .value=0xa4, .type=IO_READ},
        {.addr=0x2342, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027C) {
    const struct CPU_State initial_cpu = {.pc=0x71df, .a=0xb2, .x=0xb4, .y=0xa1, .sp=0xf3, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xed}, {.addr=0x71df, .value=0xa4}, {.addr=0x71e0, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x71e1, .a=0xc4, .x=0xb4, .y=0xa1, .sp=0xf3, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xed}, {.addr=0x71df, .value=0xa4}, {.addr=0x71e0, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x71df, .value=0xa4, .type=IO_READ},
        {.addr=0x71e0, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027D) {
    const struct CPU_State initial_cpu = {.pc=0xa243, .a=0x57, .x=0x95, .y=0x8a, .sp=0x3c, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x35}, {.addr=0xa243, .value=0xa4}, {.addr=0xa244, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xa245, .a=0x22, .x=0x95, .y=0x8a, .sp=0x3c, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x35}, {.addr=0xa243, .value=0xa4}, {.addr=0xa244, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa243, .value=0xa4, .type=IO_READ},
        {.addr=0xa244, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027E) {
    const struct CPU_State initial_cpu = {.pc=0xdc37, .a=0xd0, .x=0x92, .y=0xf8, .sp=0x96, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x15}, {.addr=0xdc37, .value=0xa4}, {.addr=0xdc38, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xdc39, .a=0xba, .x=0x92, .y=0xf8, .sp=0x96, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x15}, {.addr=0xdc37, .value=0xa4}, {.addr=0xdc38, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc37, .value=0xa4, .type=IO_READ},
        {.addr=0xdc38, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_027F) {
    const struct CPU_State initial_cpu = {.pc=0x0791, .a=0x61, .x=0x38, .y=0xc0, .sp=0xb5, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xde}, {.addr=0x0791, .value=0xa4}, {.addr=0x0792, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x0793, .a=0x82, .x=0x38, .y=0xc0, .sp=0xb5, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xde}, {.addr=0x0791, .value=0xa4}, {.addr=0x0792, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0791, .value=0xa4, .type=IO_READ},
        {.addr=0x0792, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0280) {
    const struct CPU_State initial_cpu = {.pc=0x6a13, .a=0xea, .x=0x98, .y=0x7f, .sp=0x07, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x19}, {.addr=0x6a13, .value=0xa4}, {.addr=0x6a14, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x6a15, .a=0xd1, .x=0x98, .y=0x7f, .sp=0x07, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x19}, {.addr=0x6a13, .value=0xa4}, {.addr=0x6a14, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a13, .value=0xa4, .type=IO_READ},
        {.addr=0x6a14, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9542, .a=0xc6, .x=0x6d, .y=0x8b, .sp=0xed, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xd8}, {.addr=0x9542, .value=0xa4}, {.addr=0x9543, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x9544, .a=0xed, .x=0x6d, .y=0x8b, .sp=0xed, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xd8}, {.addr=0x9542, .value=0xa4}, {.addr=0x9543, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x9542, .value=0xa4, .type=IO_READ},
        {.addr=0x9543, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0282) {
    const struct CPU_State initial_cpu = {.pc=0xedfd, .a=0x1f, .x=0xd9, .y=0xa9, .sp=0xf0, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0xf3}, {.addr=0xedfd, .value=0xa4}, {.addr=0xedfe, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xedff, .a=0x2c, .x=0xd9, .y=0xa9, .sp=0xf0, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0xf3}, {.addr=0xedfd, .value=0xa4}, {.addr=0xedfe, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xedfd, .value=0xa4, .type=IO_READ},
        {.addr=0xedfe, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0283) {
    const struct CPU_State initial_cpu = {.pc=0xbd25, .a=0x7c, .x=0xc7, .y=0xed, .sp=0x89, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x3b}, {.addr=0xbd25, .value=0xa4}, {.addr=0xbd26, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xbd27, .a=0x41, .x=0xc7, .y=0xed, .sp=0x89, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x3b}, {.addr=0xbd25, .value=0xa4}, {.addr=0xbd26, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd25, .value=0xa4, .type=IO_READ},
        {.addr=0xbd26, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0284) {
    const struct CPU_State initial_cpu = {.pc=0xd3c4, .a=0x95, .x=0x45, .y=0x4c, .sp=0x34, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x61}, {.addr=0xd3c4, .value=0xa4}, {.addr=0xd3c5, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xd3c6, .a=0x34, .x=0x45, .y=0x4c, .sp=0x34, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x61}, {.addr=0xd3c4, .value=0xa4}, {.addr=0xd3c5, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3c4, .value=0xa4, .type=IO_READ},
        {.addr=0xd3c5, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0285) {
    const struct CPU_State initial_cpu = {.pc=0xdb4a, .a=0x95, .x=0xa5, .y=0x93, .sp=0xf7, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x6b}, {.addr=0xdb4a, .value=0xa4}, {.addr=0xdb4b, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xdb4c, .a=0x2a, .x=0xa5, .y=0x93, .sp=0xf7, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x6b}, {.addr=0xdb4a, .value=0xa4}, {.addr=0xdb4b, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb4a, .value=0xa4, .type=IO_READ},
        {.addr=0xdb4b, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0286) {
    const struct CPU_State initial_cpu = {.pc=0x1c2d, .a=0xc6, .x=0xaa, .y=0xf5, .sp=0xdc, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x39}, {.addr=0x1c2d, .value=0xa4}, {.addr=0x1c2e, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x1c2f, .a=0x8c, .x=0xaa, .y=0xf5, .sp=0xdc, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x39}, {.addr=0x1c2d, .value=0xa4}, {.addr=0x1c2e, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c2d, .value=0xa4, .type=IO_READ},
        {.addr=0x1c2e, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9bc3, .a=0xad, .x=0xb0, .y=0x46, .sp=0x4f, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x54}, {.addr=0x9bc3, .value=0xa4}, {.addr=0x9bc4, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x9bc5, .a=0x58, .x=0xb0, .y=0x46, .sp=0x4f, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x54}, {.addr=0x9bc3, .value=0xa4}, {.addr=0x9bc4, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bc3, .value=0xa4, .type=IO_READ},
        {.addr=0x9bc4, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0288) {
    const struct CPU_State initial_cpu = {.pc=0x0ccf, .a=0x07, .x=0x81, .y=0xe7, .sp=0x73, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x52}, {.addr=0x0ccf, .value=0xa4}, {.addr=0x0cd0, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0xb5, .x=0x81, .y=0xe7, .sp=0x73, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x52}, {.addr=0x0ccf, .value=0xa4}, {.addr=0x0cd0, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ccf, .value=0xa4, .type=IO_READ},
        {.addr=0x0cd0, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0289) {
    const struct CPU_State initial_cpu = {.pc=0x90ef, .a=0x89, .x=0xe7, .y=0xc1, .sp=0xd5, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xb3}, {.addr=0x90ef, .value=0xa4}, {.addr=0x90f0, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x90f1, .a=0xd6, .x=0xe7, .y=0xc1, .sp=0xd5, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xb3}, {.addr=0x90ef, .value=0xa4}, {.addr=0x90f0, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x90ef, .value=0xa4, .type=IO_READ},
        {.addr=0x90f0, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028A) {
    const struct CPU_State initial_cpu = {.pc=0x8df8, .a=0xd8, .x=0xb6, .y=0xbb, .sp=0xcb, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x88}, {.addr=0x8df8, .value=0xa4}, {.addr=0x8df9, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x8dfa, .a=0x50, .x=0xb6, .y=0xbb, .sp=0xcb, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x88}, {.addr=0x8df8, .value=0xa4}, {.addr=0x8df9, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x8df8, .value=0xa4, .type=IO_READ},
        {.addr=0x8df9, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028B) {
    const struct CPU_State initial_cpu = {.pc=0x72c7, .a=0x75, .x=0xbc, .y=0x87, .sp=0x6d, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x46}, {.addr=0x72c7, .value=0xa4}, {.addr=0x72c8, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x72c9, .a=0x2f, .x=0xbc, .y=0x87, .sp=0x6d, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x46}, {.addr=0x72c7, .value=0xa4}, {.addr=0x72c8, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x72c7, .value=0xa4, .type=IO_READ},
        {.addr=0x72c8, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028C) {
    const struct CPU_State initial_cpu = {.pc=0x0fa7, .a=0x84, .x=0x27, .y=0x9c, .sp=0x7a, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x3f}, {.addr=0x0fa7, .value=0xa4}, {.addr=0x0fa8, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x0fa9, .a=0x45, .x=0x27, .y=0x9c, .sp=0x7a, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x3f}, {.addr=0x0fa7, .value=0xa4}, {.addr=0x0fa8, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fa7, .value=0xa4, .type=IO_READ},
        {.addr=0x0fa8, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028D) {
    const struct CPU_State initial_cpu = {.pc=0x70ca, .a=0xf6, .x=0x11, .y=0xc1, .sp=0x9b, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xab}, {.addr=0x70ca, .value=0xa4}, {.addr=0x70cb, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x70cc, .a=0x4b, .x=0x11, .y=0xc1, .sp=0x9b, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xab}, {.addr=0x70ca, .value=0xa4}, {.addr=0x70cb, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x70ca, .value=0xa4, .type=IO_READ},
        {.addr=0x70cb, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028E) {
    const struct CPU_State initial_cpu = {.pc=0xb08b, .a=0xc3, .x=0x43, .y=0xd3, .sp=0x43, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x3d}, {.addr=0xb08b, .value=0xa4}, {.addr=0xb08c, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xb08d, .a=0x86, .x=0x43, .y=0xd3, .sp=0x43, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x3d}, {.addr=0xb08b, .value=0xa4}, {.addr=0xb08c, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xb08b, .value=0xa4, .type=IO_READ},
        {.addr=0xb08c, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4ecf, .a=0x76, .x=0xdc, .y=0xe5, .sp=0x7e, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xb8}, {.addr=0x4ecf, .value=0xa4}, {.addr=0x4ed0, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x4ed1, .a=0xbd, .x=0xdc, .y=0xe5, .sp=0x7e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xb8}, {.addr=0x4ecf, .value=0xa4}, {.addr=0x4ed0, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ecf, .value=0xa4, .type=IO_READ},
        {.addr=0x4ed0, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0290) {
    const struct CPU_State initial_cpu = {.pc=0x3ee9, .a=0xa6, .x=0x6e, .y=0x58, .sp=0x4a, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xb7}, {.addr=0x3ee9, .value=0xa4}, {.addr=0x3eea, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x3eeb, .a=0xef, .x=0x6e, .y=0x58, .sp=0x4a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xb7}, {.addr=0x3ee9, .value=0xa4}, {.addr=0x3eea, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ee9, .value=0xa4, .type=IO_READ},
        {.addr=0x3eea, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0291) {
    const struct CPU_State initial_cpu = {.pc=0xcfd2, .a=0xee, .x=0xe5, .y=0x5e, .sp=0x5a, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x74}, {.addr=0xcfd2, .value=0xa4}, {.addr=0xcfd3, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xcfd4, .a=0x7a, .x=0xe5, .y=0x5e, .sp=0x5a, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x74}, {.addr=0xcfd2, .value=0xa4}, {.addr=0xcfd3, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfd2, .value=0xa4, .type=IO_READ},
        {.addr=0xcfd3, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0292) {
    const struct CPU_State initial_cpu = {.pc=0x3098, .a=0x9f, .x=0x40, .y=0x1c, .sp=0xcf, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x95}, {.addr=0x3098, .value=0xa4}, {.addr=0x3099, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x309a, .a=0x09, .x=0x40, .y=0x1c, .sp=0xcf, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x95}, {.addr=0x3098, .value=0xa4}, {.addr=0x3099, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3098, .value=0xa4, .type=IO_READ},
        {.addr=0x3099, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0293) {
    const struct CPU_State initial_cpu = {.pc=0x9c62, .a=0xe0, .x=0xdc, .y=0x9d, .sp=0x13, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x1e}, {.addr=0x9c62, .value=0xa4}, {.addr=0x9c63, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x9c64, .a=0xc2, .x=0xdc, .y=0x9d, .sp=0x13, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x1e}, {.addr=0x9c62, .value=0xa4}, {.addr=0x9c63, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c62, .value=0xa4, .type=IO_READ},
        {.addr=0x9c63, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0294) {
    const struct CPU_State initial_cpu = {.pc=0xb703, .a=0xcc, .x=0x42, .y=0x9d, .sp=0xc4, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0xb1}, {.addr=0xb703, .value=0xa4}, {.addr=0xb704, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xb705, .a=0x1b, .x=0x42, .y=0x9d, .sp=0xc4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0xb1}, {.addr=0xb703, .value=0xa4}, {.addr=0xb704, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb703, .value=0xa4, .type=IO_READ},
        {.addr=0xb704, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0295) {
    const struct CPU_State initial_cpu = {.pc=0xa438, .a=0xaa, .x=0xa4, .y=0x81, .sp=0x2a, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xb8}, {.addr=0xa438, .value=0xa4}, {.addr=0xa439, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xa43a, .a=0xf2, .x=0xa4, .y=0x81, .sp=0x2a, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xb8}, {.addr=0xa438, .value=0xa4}, {.addr=0xa439, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xa438, .value=0xa4, .type=IO_READ},
        {.addr=0xa439, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0296) {
    const struct CPU_State initial_cpu = {.pc=0x220b, .a=0x59, .x=0x47, .y=0x46, .sp=0x85, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x23}, {.addr=0x220b, .value=0xa4}, {.addr=0x220c, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x220d, .a=0x36, .x=0x47, .y=0x46, .sp=0x85, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x23}, {.addr=0x220b, .value=0xa4}, {.addr=0x220c, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x220b, .value=0xa4, .type=IO_READ},
        {.addr=0x220c, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0297) {
    const struct CPU_State initial_cpu = {.pc=0x9b24, .a=0x01, .x=0x60, .y=0xe4, .sp=0xcd, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x29}, {.addr=0x9b24, .value=0xa4}, {.addr=0x9b25, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x9b26, .a=0xd7, .x=0x60, .y=0xe4, .sp=0xcd, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x29}, {.addr=0x9b24, .value=0xa4}, {.addr=0x9b25, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b24, .value=0xa4, .type=IO_READ},
        {.addr=0x9b25, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0298) {
    const struct CPU_State initial_cpu = {.pc=0x1f33, .a=0xa9, .x=0xb3, .y=0x61, .sp=0x5e, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x78}, {.addr=0x1f33, .value=0xa4}, {.addr=0x1f34, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x1f35, .a=0x31, .x=0xb3, .y=0x61, .sp=0x5e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x78}, {.addr=0x1f33, .value=0xa4}, {.addr=0x1f34, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f33, .value=0xa4, .type=IO_READ},
        {.addr=0x1f34, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0299) {
    const struct CPU_State initial_cpu = {.pc=0xd0e1, .a=0x75, .x=0x25, .y=0x7d, .sp=0xa5, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x51}, {.addr=0xd0e1, .value=0xa4}, {.addr=0xd0e2, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0xd0e3, .a=0x24, .x=0x25, .y=0x7d, .sp=0xa5, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x51}, {.addr=0xd0e1, .value=0xa4}, {.addr=0xd0e2, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0e1, .value=0xa4, .type=IO_READ},
        {.addr=0xd0e2, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029A) {
    const struct CPU_State initial_cpu = {.pc=0xc23d, .a=0x77, .x=0xc9, .y=0xd7, .sp=0xe1, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xbb}, {.addr=0xc23d, .value=0xa4}, {.addr=0xc23e, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xc23f, .a=0xbc, .x=0xc9, .y=0xd7, .sp=0xe1, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xbb}, {.addr=0xc23d, .value=0xa4}, {.addr=0xc23e, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xc23d, .value=0xa4, .type=IO_READ},
        {.addr=0xc23e, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029B) {
    const struct CPU_State initial_cpu = {.pc=0x5d7c, .a=0x96, .x=0x11, .y=0x51, .sp=0xf4, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x62}, {.addr=0x5d7c, .value=0xa4}, {.addr=0x5d7d, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x5d7e, .a=0x34, .x=0x11, .y=0x51, .sp=0xf4, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x62}, {.addr=0x5d7c, .value=0xa4}, {.addr=0x5d7d, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d7c, .value=0xa4, .type=IO_READ},
        {.addr=0x5d7d, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9a55, .a=0x74, .x=0xb8, .y=0x42, .sp=0x58, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xb8}, {.addr=0x9a55, .value=0xa4}, {.addr=0x9a56, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x9a57, .a=0xbb, .x=0xb8, .y=0x42, .sp=0x58, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xb8}, {.addr=0x9a55, .value=0xa4}, {.addr=0x9a56, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a55, .value=0xa4, .type=IO_READ},
        {.addr=0x9a56, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029D) {
    const struct CPU_State initial_cpu = {.pc=0xeabd, .a=0xeb, .x=0x87, .y=0x0a, .sp=0x1c, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xce}, {.addr=0xeabd, .value=0xa4}, {.addr=0xeabe, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xeabf, .a=0x1c, .x=0x87, .y=0x0a, .sp=0x1c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xce}, {.addr=0xeabd, .value=0xa4}, {.addr=0xeabe, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xeabd, .value=0xa4, .type=IO_READ},
        {.addr=0xeabe, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029E) {
    const struct CPU_State initial_cpu = {.pc=0xbc4d, .a=0x70, .x=0xbc, .y=0x50, .sp=0x5c, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xa5}, {.addr=0xbc4d, .value=0xa4}, {.addr=0xbc4e, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xbc4f, .a=0xca, .x=0xbc, .y=0x50, .sp=0x5c, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xa5}, {.addr=0xbc4d, .value=0xa4}, {.addr=0xbc4e, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc4d, .value=0xa4, .type=IO_READ},
        {.addr=0xbc4e, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_029F) {
    const struct CPU_State initial_cpu = {.pc=0x425e, .a=0x25, .x=0x4b, .y=0x75, .sp=0xa7, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x60}, {.addr=0x425e, .value=0xa4}, {.addr=0x425f, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x4260, .a=0xc4, .x=0x4b, .y=0x75, .sp=0xa7, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x60}, {.addr=0x425e, .value=0xa4}, {.addr=0x425f, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x425e, .value=0xa4, .type=IO_READ},
        {.addr=0x425f, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9db4, .a=0xa5, .x=0x34, .y=0x3e, .sp=0xd3, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x02}, {.addr=0x9db4, .value=0xa4}, {.addr=0x9db5, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x9db6, .a=0xa2, .x=0x34, .y=0x3e, .sp=0xd3, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x02}, {.addr=0x9db4, .value=0xa4}, {.addr=0x9db5, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x9db4, .value=0xa4, .type=IO_READ},
        {.addr=0x9db5, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x0a7f, .a=0x6a, .x=0x38, .y=0x6b, .sp=0x63, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x5b}, {.addr=0x0a7f, .value=0xa4}, {.addr=0x0a80, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x0a81, .a=0x0f, .x=0x38, .y=0x6b, .sp=0x63, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x5b}, {.addr=0x0a7f, .value=0xa4}, {.addr=0x0a80, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a7f, .value=0xa4, .type=IO_READ},
        {.addr=0x0a80, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x13b6, .a=0x7b, .x=0x69, .y=0xa5, .sp=0x6d, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xc9}, {.addr=0x13b6, .value=0xa4}, {.addr=0x13b7, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x13b8, .a=0xb1, .x=0x69, .y=0xa5, .sp=0x6d, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xc9}, {.addr=0x13b6, .value=0xa4}, {.addr=0x13b7, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x13b6, .value=0xa4, .type=IO_READ},
        {.addr=0x13b7, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xb1f9, .a=0xc3, .x=0x37, .y=0x2b, .sp=0x02, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x80}, {.addr=0xb1f9, .value=0xa4}, {.addr=0xb1fa, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xb1fb, .a=0x43, .x=0x37, .y=0x2b, .sp=0x02, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x80}, {.addr=0xb1f9, .value=0xa4}, {.addr=0xb1fa, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1f9, .value=0xa4, .type=IO_READ},
        {.addr=0xb1fa, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x5d16, .a=0x66, .x=0x54, .y=0x75, .sp=0xb4, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x40}, {.addr=0x5d16, .value=0xa4}, {.addr=0x5d17, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x5d18, .a=0x25, .x=0x54, .y=0x75, .sp=0xb4, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x40}, {.addr=0x5d16, .value=0xa4}, {.addr=0x5d17, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d16, .value=0xa4, .type=IO_READ},
        {.addr=0x5d17, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x4bf4, .a=0xa0, .x=0x30, .y=0xaa, .sp=0x43, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xdd}, {.addr=0x4bf4, .value=0xa4}, {.addr=0x4bf5, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x4bf6, .a=0xc3, .x=0x30, .y=0xaa, .sp=0x43, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xdd}, {.addr=0x4bf4, .value=0xa4}, {.addr=0x4bf5, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bf4, .value=0xa4, .type=IO_READ},
        {.addr=0x4bf5, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xb0e4, .a=0xee, .x=0x5a, .y=0xe3, .sp=0x45, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x7c}, {.addr=0xb0e4, .value=0xa4}, {.addr=0xb0e5, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xb0e6, .a=0x72, .x=0x5a, .y=0xe3, .sp=0x45, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x7c}, {.addr=0xb0e4, .value=0xa4}, {.addr=0xb0e5, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0e4, .value=0xa4, .type=IO_READ},
        {.addr=0xb0e5, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x9e1c, .a=0x50, .x=0x65, .y=0x92, .sp=0xfa, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x11}, {.addr=0x9e1c, .value=0xa4}, {.addr=0x9e1d, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x9e1e, .a=0x3f, .x=0x65, .y=0x92, .sp=0xfa, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x11}, {.addr=0x9e1c, .value=0xa4}, {.addr=0x9e1d, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e1c, .value=0xa4, .type=IO_READ},
        {.addr=0x9e1d, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x3862, .a=0x27, .x=0x39, .y=0xa6, .sp=0xba, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xf3}, {.addr=0x3862, .value=0xa4}, {.addr=0x3863, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x3864, .a=0x33, .x=0x39, .y=0xa6, .sp=0xba, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xf3}, {.addr=0x3862, .value=0xa4}, {.addr=0x3863, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x3862, .value=0xa4, .type=IO_READ},
        {.addr=0x3863, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xc1af, .a=0xb6, .x=0x3d, .y=0x90, .sp=0x23, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x50}, {.addr=0xc1af, .value=0xa4}, {.addr=0xc1b0, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xc1b1, .a=0x65, .x=0x3d, .y=0x90, .sp=0x23, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x50}, {.addr=0xc1af, .value=0xa4}, {.addr=0xc1b0, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1af, .value=0xa4, .type=IO_READ},
        {.addr=0xc1b0, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x9777, .a=0x52, .x=0x1a, .y=0x94, .sp=0x68, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x71}, {.addr=0x9777, .value=0xa4}, {.addr=0x9778, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x9779, .a=0xe0, .x=0x1a, .y=0x94, .sp=0x68, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x71}, {.addr=0x9777, .value=0xa4}, {.addr=0x9778, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x9777, .value=0xa4, .type=IO_READ},
        {.addr=0x9778, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x0004, .a=0xa3, .x=0xbe, .y=0x9f, .sp=0x42, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xa4}, {.addr=0x0005, .value=0x2a}, {.addr=0x012a, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x0006, .a=0xd3, .x=0xbe, .y=0x9f, .sp=0x42, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xa4}, {.addr=0x0005, .value=0x2a}, {.addr=0x012a, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0004, .value=0xa4, .type=IO_READ},
        {.addr=0x0005, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x3717, .a=0xe0, .x=0x3b, .y=0x94, .sp=0x68, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xad}, {.addr=0x3717, .value=0xa4}, {.addr=0x3718, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x3719, .a=0x32, .x=0x3b, .y=0x94, .sp=0x68, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xad}, {.addr=0x3717, .value=0xa4}, {.addr=0x3718, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3717, .value=0xa4, .type=IO_READ},
        {.addr=0x3718, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x6741, .a=0xa8, .x=0x92, .y=0x6a, .sp=0xc1, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xa6}, {.addr=0x6741, .value=0xa4}, {.addr=0x6742, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x6743, .a=0x01, .x=0x92, .y=0x6a, .sp=0xc1, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xa6}, {.addr=0x6741, .value=0xa4}, {.addr=0x6742, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x6741, .value=0xa4, .type=IO_READ},
        {.addr=0x6742, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x08e7, .a=0x33, .x=0x54, .y=0xb1, .sp=0xd4, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xac}, {.addr=0x08e7, .value=0xa4}, {.addr=0x08e8, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x08e9, .a=0x86, .x=0x54, .y=0xb1, .sp=0xd4, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xac}, {.addr=0x08e7, .value=0xa4}, {.addr=0x08e8, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x08e7, .value=0xa4, .type=IO_READ},
        {.addr=0x08e8, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x5762, .a=0xc4, .x=0xc3, .y=0x51, .sp=0xdb, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xdb}, {.addr=0x5762, .value=0xa4}, {.addr=0x5763, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x5764, .a=0xe9, .x=0xc3, .y=0x51, .sp=0xdb, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xdb}, {.addr=0x5762, .value=0xa4}, {.addr=0x5763, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5762, .value=0xa4, .type=IO_READ},
        {.addr=0x5763, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x0354, .a=0xdf, .x=0x06, .y=0x31, .sp=0x17, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xf7}, {.addr=0x0354, .value=0xa4}, {.addr=0x0355, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x0356, .a=0xe7, .x=0x06, .y=0x31, .sp=0x17, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xf7}, {.addr=0x0354, .value=0xa4}, {.addr=0x0355, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x0354, .value=0xa4, .type=IO_READ},
        {.addr=0x0355, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x667a, .a=0xbe, .x=0x11, .y=0xf3, .sp=0x7e, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x45}, {.addr=0x667a, .value=0xa4}, {.addr=0x667b, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x667c, .a=0x78, .x=0x11, .y=0xf3, .sp=0x7e, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x45}, {.addr=0x667a, .value=0xa4}, {.addr=0x667b, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x667a, .value=0xa4, .type=IO_READ},
        {.addr=0x667b, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7eb2, .a=0x0a, .x=0x0d, .y=0xc1, .sp=0x2f, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x16}, {.addr=0x7eb2, .value=0xa4}, {.addr=0x7eb3, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x7eb4, .a=0xf3, .x=0x0d, .y=0xc1, .sp=0x2f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x16}, {.addr=0x7eb2, .value=0xa4}, {.addr=0x7eb3, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eb2, .value=0xa4, .type=IO_READ},
        {.addr=0x7eb3, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x49ee, .a=0x2f, .x=0x73, .y=0x8a, .sp=0x53, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xb4}, {.addr=0x49ee, .value=0xa4}, {.addr=0x49ef, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x49f0, .a=0x7b, .x=0x73, .y=0x8a, .sp=0x53, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xb4}, {.addr=0x49ee, .value=0xa4}, {.addr=0x49ef, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x49ee, .value=0xa4, .type=IO_READ},
        {.addr=0x49ef, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x8f10, .a=0xd1, .x=0x85, .y=0x09, .sp=0xa0, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x17}, {.addr=0x8f10, .value=0xa4}, {.addr=0x8f11, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x8f12, .a=0xb9, .x=0x85, .y=0x09, .sp=0xa0, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x17}, {.addr=0x8f10, .value=0xa4}, {.addr=0x8f11, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f10, .value=0xa4, .type=IO_READ},
        {.addr=0x8f11, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xd76a, .a=0x3c, .x=0xad, .y=0x36, .sp=0xb5, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xb5}, {.addr=0xd76a, .value=0xa4}, {.addr=0xd76b, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xd76c, .a=0x87, .x=0xad, .y=0x36, .sp=0xb5, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xb5}, {.addr=0xd76a, .value=0xa4}, {.addr=0xd76b, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xd76a, .value=0xa4, .type=IO_READ},
        {.addr=0xd76b, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xbab8, .a=0x9d, .x=0x3a, .y=0xf3, .sp=0x76, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x36}, {.addr=0xbab8, .value=0xa4}, {.addr=0xbab9, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xbaba, .a=0x67, .x=0x3a, .y=0xf3, .sp=0x76, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x36}, {.addr=0xbab8, .value=0xa4}, {.addr=0xbab9, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbab8, .value=0xa4, .type=IO_READ},
        {.addr=0xbab9, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x255b, .a=0xdd, .x=0xfb, .y=0x8f, .sp=0x90, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xb0}, {.addr=0x255b, .value=0xa4}, {.addr=0x255c, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x255d, .a=0x2d, .x=0xfb, .y=0x8f, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xb0}, {.addr=0x255b, .value=0xa4}, {.addr=0x255c, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x255b, .value=0xa4, .type=IO_READ},
        {.addr=0x255c, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x154b, .a=0x25, .x=0x64, .y=0x7b, .sp=0x7a, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xb7}, {.addr=0x154b, .value=0xa4}, {.addr=0x154c, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x154d, .a=0x6d, .x=0x64, .y=0x7b, .sp=0x7a, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xb7}, {.addr=0x154b, .value=0xa4}, {.addr=0x154c, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x154b, .value=0xa4, .type=IO_READ},
        {.addr=0x154c, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xca44, .a=0x53, .x=0x63, .y=0x92, .sp=0xfc, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x13}, {.addr=0xca44, .value=0xa4}, {.addr=0xca45, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xca46, .a=0x40, .x=0x63, .y=0x92, .sp=0xfc, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x13}, {.addr=0xca44, .value=0xa4}, {.addr=0xca45, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xca44, .value=0xa4, .type=IO_READ},
        {.addr=0xca45, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x9fb6, .a=0x34, .x=0x15, .y=0x08, .sp=0xb8, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x2b}, {.addr=0x9fb6, .value=0xa4}, {.addr=0x9fb7, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x9fb8, .a=0x08, .x=0x15, .y=0x08, .sp=0xb8, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x2b}, {.addr=0x9fb6, .value=0xa4}, {.addr=0x9fb7, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fb6, .value=0xa4, .type=IO_READ},
        {.addr=0x9fb7, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x7a74, .a=0x86, .x=0x33, .y=0x6f, .sp=0x28, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x2e}, {.addr=0x7a74, .value=0xa4}, {.addr=0x7a75, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0x7a76, .a=0x57, .x=0x33, .y=0x6f, .sp=0x28, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x2e}, {.addr=0x7a74, .value=0xa4}, {.addr=0x7a75, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a74, .value=0xa4, .type=IO_READ},
        {.addr=0x7a75, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x1bba, .a=0x55, .x=0x40, .y=0x19, .sp=0x6c, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xf8}, {.addr=0x1bba, .value=0xa4}, {.addr=0x1bbb, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x1bbc, .a=0x5c, .x=0x40, .y=0x19, .sp=0x6c, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xf8}, {.addr=0x1bba, .value=0xa4}, {.addr=0x1bbb, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bba, .value=0xa4, .type=IO_READ},
        {.addr=0x1bbb, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x8aa7, .a=0x16, .x=0xe1, .y=0xaa, .sp=0x9e, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x4a}, {.addr=0x8aa7, .value=0xa4}, {.addr=0x8aa8, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x8aa9, .a=0xcb, .x=0xe1, .y=0xaa, .sp=0x9e, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x4a}, {.addr=0x8aa7, .value=0xa4}, {.addr=0x8aa8, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aa7, .value=0xa4, .type=IO_READ},
        {.addr=0x8aa8, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xb5d6, .a=0xaa, .x=0x21, .y=0x45, .sp=0xb2, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xa4}, {.addr=0xb5d6, .value=0xa4}, {.addr=0xb5d7, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xb5d8, .a=0x05, .x=0x21, .y=0x45, .sp=0xb2, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xa4}, {.addr=0xb5d6, .value=0xa4}, {.addr=0xb5d7, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d6, .value=0xa4, .type=IO_READ},
        {.addr=0xb5d7, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xb6cf, .a=0x65, .x=0x8d, .y=0x69, .sp=0x2d, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x51}, {.addr=0xb6cf, .value=0xa4}, {.addr=0xb6d0, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xb6d1, .a=0x14, .x=0x8d, .y=0x69, .sp=0x2d, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x51}, {.addr=0xb6cf, .value=0xa4}, {.addr=0xb6d0, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6cf, .value=0xa4, .type=IO_READ},
        {.addr=0xb6d0, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x58bf, .a=0x3a, .x=0x1a, .y=0xd8, .sp=0x49, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x51}, {.addr=0x58bf, .value=0xa4}, {.addr=0x58c0, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x58c1, .a=0xe9, .x=0x1a, .y=0xd8, .sp=0x49, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x51}, {.addr=0x58bf, .value=0xa4}, {.addr=0x58c0, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x58bf, .value=0xa4, .type=IO_READ},
        {.addr=0x58c0, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x55c4, .a=0x56, .x=0xd0, .y=0x98, .sp=0x2f, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x1e}, {.addr=0x55c4, .value=0xa4}, {.addr=0x55c5, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x55c6, .a=0x38, .x=0xd0, .y=0x98, .sp=0x2f, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x1e}, {.addr=0x55c4, .value=0xa4}, {.addr=0x55c5, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x55c4, .value=0xa4, .type=IO_READ},
        {.addr=0x55c5, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x4f2f, .a=0x34, .x=0x27, .y=0xf4, .sp=0xf1, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x73}, {.addr=0x4f2f, .value=0xa4}, {.addr=0x4f30, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x4f31, .a=0xc0, .x=0x27, .y=0xf4, .sp=0xf1, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x73}, {.addr=0x4f2f, .value=0xa4}, {.addr=0x4f30, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f2f, .value=0xa4, .type=IO_READ},
        {.addr=0x4f30, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x28fb, .a=0x66, .x=0xf3, .y=0xd9, .sp=0xdf, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xeb}, {.addr=0x28fb, .value=0xa4}, {.addr=0x28fc, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x28fd, .a=0x7a, .x=0xf3, .y=0xd9, .sp=0xdf, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xeb}, {.addr=0x28fb, .value=0xa4}, {.addr=0x28fc, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x28fb, .value=0xa4, .type=IO_READ},
        {.addr=0x28fc, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9244, .a=0xea, .x=0x0f, .y=0x5a, .sp=0x6a, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x5f}, {.addr=0x9244, .value=0xa4}, {.addr=0x9245, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x9246, .a=0x8b, .x=0x0f, .y=0x5a, .sp=0x6a, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x5f}, {.addr=0x9244, .value=0xa4}, {.addr=0x9245, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x9244, .value=0xa4, .type=IO_READ},
        {.addr=0x9245, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xd4a1, .a=0x2f, .x=0x87, .y=0x94, .sp=0xd6, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xf8}, {.addr=0xd4a1, .value=0xa4}, {.addr=0xd4a2, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xd4a3, .a=0x36, .x=0x87, .y=0x94, .sp=0xd6, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xf8}, {.addr=0xd4a1, .value=0xa4}, {.addr=0xd4a2, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4a1, .value=0xa4, .type=IO_READ},
        {.addr=0xd4a2, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x68c9, .a=0x91, .x=0x52, .y=0xd2, .sp=0xa1, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x9f}, {.addr=0x68c9, .value=0xa4}, {.addr=0x68ca, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x68cb, .a=0xf1, .x=0x52, .y=0xd2, .sp=0xa1, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x9f}, {.addr=0x68c9, .value=0xa4}, {.addr=0x68ca, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x68c9, .value=0xa4, .type=IO_READ},
        {.addr=0x68ca, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xae43, .a=0x9e, .x=0x94, .y=0x3f, .sp=0xa9, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x62}, {.addr=0xae43, .value=0xa4}, {.addr=0xae44, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xae45, .a=0x3c, .x=0x94, .y=0x3f, .sp=0xa9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x62}, {.addr=0xae43, .value=0xa4}, {.addr=0xae44, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xae43, .value=0xa4, .type=IO_READ},
        {.addr=0xae44, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x2f04, .a=0x23, .x=0xd4, .y=0x1a, .sp=0x3d, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xd5}, {.addr=0x2f04, .value=0xa4}, {.addr=0x2f05, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x2f06, .a=0x4d, .x=0xd4, .y=0x1a, .sp=0x3d, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xd5}, {.addr=0x2f04, .value=0xa4}, {.addr=0x2f05, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f04, .value=0xa4, .type=IO_READ},
        {.addr=0x2f05, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2a65, .a=0xc9, .x=0x6c, .y=0x8f, .sp=0x4c, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xdc}, {.addr=0x2a65, .value=0xa4}, {.addr=0x2a66, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x2a67, .a=0xed, .x=0x6c, .y=0x8f, .sp=0x4c, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xdc}, {.addr=0x2a65, .value=0xa4}, {.addr=0x2a66, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a65, .value=0xa4, .type=IO_READ},
        {.addr=0x2a66, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xf32b, .a=0xf0, .x=0x39, .y=0x59, .sp=0xde, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x50}, {.addr=0xf32b, .value=0xa4}, {.addr=0xf32c, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xf32d, .a=0xa0, .x=0x39, .y=0x59, .sp=0xde, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x50}, {.addr=0xf32b, .value=0xa4}, {.addr=0xf32c, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf32b, .value=0xa4, .type=IO_READ},
        {.addr=0xf32c, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1eaf, .a=0x38, .x=0x19, .y=0xe0, .sp=0xc4, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xe7}, {.addr=0x1eaf, .value=0xa4}, {.addr=0x1eb0, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x1eb1, .a=0x51, .x=0x19, .y=0xe0, .sp=0xc4, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xe7}, {.addr=0x1eaf, .value=0xa4}, {.addr=0x1eb0, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x1eaf, .value=0xa4, .type=IO_READ},
        {.addr=0x1eb0, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x74ba, .a=0x08, .x=0x32, .y=0x0e, .sp=0x01, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xa5}, {.addr=0x74ba, .value=0xa4}, {.addr=0x74bb, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x74bc, .a=0x63, .x=0x32, .y=0x0e, .sp=0x01, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xa5}, {.addr=0x74ba, .value=0xa4}, {.addr=0x74bb, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x74ba, .value=0xa4, .type=IO_READ},
        {.addr=0x74bb, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x0e77, .a=0xb2, .x=0x9f, .y=0x73, .sp=0xc5, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xf9}, {.addr=0x0e77, .value=0xa4}, {.addr=0x0e78, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x0e79, .a=0xb9, .x=0x9f, .y=0x73, .sp=0xc5, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xf9}, {.addr=0x0e77, .value=0xa4}, {.addr=0x0e78, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e77, .value=0xa4, .type=IO_READ},
        {.addr=0x0e78, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x0c84, .a=0xec, .x=0x3e, .y=0x09, .sp=0x8a, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x1c}, {.addr=0x0c84, .value=0xa4}, {.addr=0x0c85, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x0c86, .a=0xcf, .x=0x3e, .y=0x09, .sp=0x8a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x1c}, {.addr=0x0c84, .value=0xa4}, {.addr=0x0c85, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c84, .value=0xa4, .type=IO_READ},
        {.addr=0x0c85, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4072, .a=0x2c, .x=0xa8, .y=0x07, .sp=0x2e, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x51}, {.addr=0x4072, .value=0xa4}, {.addr=0x4073, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x4074, .a=0xdb, .x=0xa8, .y=0x07, .sp=0x2e, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x51}, {.addr=0x4072, .value=0xa4}, {.addr=0x4073, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x4072, .value=0xa4, .type=IO_READ},
        {.addr=0x4073, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x0a51, .a=0x0d, .x=0x1a, .y=0x82, .sp=0x12, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x17}, {.addr=0x0a51, .value=0xa4}, {.addr=0x0a52, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x0a53, .a=0xf5, .x=0x1a, .y=0x82, .sp=0x12, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x17}, {.addr=0x0a51, .value=0xa4}, {.addr=0x0a52, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a51, .value=0xa4, .type=IO_READ},
        {.addr=0x0a52, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x5dff, .a=0xfd, .x=0x1e, .y=0x8b, .sp=0x42, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x1d}, {.addr=0x5dff, .value=0xa4}, {.addr=0x5e00, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x5e01, .a=0xe0, .x=0x1e, .y=0x8b, .sp=0x42, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x1d}, {.addr=0x5dff, .value=0xa4}, {.addr=0x5e00, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dff, .value=0xa4, .type=IO_READ},
        {.addr=0x5e00, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xa9e9, .a=0x4b, .x=0x8a, .y=0x30, .sp=0xd5, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xee}, {.addr=0xa9e9, .value=0xa4}, {.addr=0xa9ea, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xa9eb, .a=0x5d, .x=0x8a, .y=0x30, .sp=0xd5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xee}, {.addr=0xa9e9, .value=0xa4}, {.addr=0xa9ea, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9e9, .value=0xa4, .type=IO_READ},
        {.addr=0xa9ea, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xb051, .a=0x99, .x=0x9a, .y=0x39, .sp=0x8b, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xf7}, {.addr=0xb051, .value=0xa4}, {.addr=0xb052, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xb053, .a=0xa2, .x=0x9a, .y=0x39, .sp=0x8b, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xf7}, {.addr=0xb051, .value=0xa4}, {.addr=0xb052, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xb051, .value=0xa4, .type=IO_READ},
        {.addr=0xb052, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xd0ff, .a=0x96, .x=0xc1, .y=0x70, .sp=0xc4, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x71}, {.addr=0xd0ff, .value=0xa4}, {.addr=0xd100, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xd101, .a=0x25, .x=0xc1, .y=0x70, .sp=0xc4, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x71}, {.addr=0xd0ff, .value=0xa4}, {.addr=0xd100, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0ff, .value=0xa4, .type=IO_READ},
        {.addr=0xd100, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xf233, .a=0xb0, .x=0xc9, .y=0x1b, .sp=0xc8, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xaf}, {.addr=0xf233, .value=0xa4}, {.addr=0xf234, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xf235, .a=0x00, .x=0xc9, .y=0x1b, .sp=0xc8, .status=0x37};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xaf}, {.addr=0xf233, .value=0xa4}, {.addr=0xf234, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xf233, .value=0xa4, .type=IO_READ},
        {.addr=0xf234, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xa2d9, .a=0x9d, .x=0x78, .y=0xa6, .sp=0xc2, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x94}, {.addr=0xa2d9, .value=0xa4}, {.addr=0xa2da, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xa2db, .a=0x08, .x=0x78, .y=0xa6, .sp=0xc2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x94}, {.addr=0xa2d9, .value=0xa4}, {.addr=0xa2da, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2d9, .value=0xa4, .type=IO_READ},
        {.addr=0xa2da, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x42da, .a=0x8c, .x=0xed, .y=0x29, .sp=0x65, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x58}, {.addr=0x42da, .value=0xa4}, {.addr=0x42db, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x42dc, .a=0x34, .x=0xed, .y=0x29, .sp=0x65, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x58}, {.addr=0x42da, .value=0xa4}, {.addr=0x42db, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x42da, .value=0xa4, .type=IO_READ},
        {.addr=0x42db, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x5b7f, .a=0xa0, .x=0x7f, .y=0x1a, .sp=0x4e, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x83}, {.addr=0x5b7f, .value=0xa4}, {.addr=0x5b80, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x5b81, .a=0x1d, .x=0x7f, .y=0x1a, .sp=0x4e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x83}, {.addr=0x5b7f, .value=0xa4}, {.addr=0x5b80, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b7f, .value=0xa4, .type=IO_READ},
        {.addr=0x5b80, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x2b26, .a=0x91, .x=0x38, .y=0xac, .sp=0x18, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x8c}, {.addr=0x2b26, .value=0xa4}, {.addr=0x2b27, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x2b28, .a=0x04, .x=0x38, .y=0xac, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x8c}, {.addr=0x2b26, .value=0xa4}, {.addr=0x2b27, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b26, .value=0xa4, .type=IO_READ},
        {.addr=0x2b27, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x7c07, .a=0x0e, .x=0x14, .y=0xe9, .sp=0xcf, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x23}, {.addr=0x7c07, .value=0xa4}, {.addr=0x7c08, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x7c09, .a=0xea, .x=0x14, .y=0xe9, .sp=0xcf, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x23}, {.addr=0x7c07, .value=0xa4}, {.addr=0x7c08, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c07, .value=0xa4, .type=IO_READ},
        {.addr=0x7c08, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xbedd, .a=0x85, .x=0xeb, .y=0xe1, .sp=0x20, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x9f}, {.addr=0xbedd, .value=0xa4}, {.addr=0xbede, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xbedf, .a=0xe5, .x=0xeb, .y=0xe1, .sp=0x20, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x9f}, {.addr=0xbedd, .value=0xa4}, {.addr=0xbede, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbedd, .value=0xa4, .type=IO_READ},
        {.addr=0xbede, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x8d60, .a=0x71, .x=0x58, .y=0xfc, .sp=0xae, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x9e}, {.addr=0x8d60, .value=0xa4}, {.addr=0x8d61, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x8d62, .a=0xd2, .x=0x58, .y=0xfc, .sp=0xae, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x9e}, {.addr=0x8d60, .value=0xa4}, {.addr=0x8d61, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d60, .value=0xa4, .type=IO_READ},
        {.addr=0x8d61, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x82be, .a=0xbe, .x=0x43, .y=0x26, .sp=0xd0, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xfd}, {.addr=0x82be, .value=0xa4}, {.addr=0x82bf, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x82c0, .a=0xc1, .x=0x43, .y=0x26, .sp=0xd0, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xfd}, {.addr=0x82be, .value=0xa4}, {.addr=0x82bf, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x82be, .value=0xa4, .type=IO_READ},
        {.addr=0x82bf, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5889, .a=0x89, .x=0x90, .y=0x8c, .sp=0xd7, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x25}, {.addr=0x5889, .value=0xa4}, {.addr=0x588a, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x588b, .a=0x64, .x=0x90, .y=0x8c, .sp=0xd7, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x25}, {.addr=0x5889, .value=0xa4}, {.addr=0x588a, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x5889, .value=0xa4, .type=IO_READ},
        {.addr=0x588a, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x76aa, .a=0x87, .x=0x12, .y=0x88, .sp=0xbc, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x34}, {.addr=0x76aa, .value=0xa4}, {.addr=0x76ab, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x76ac, .a=0x52, .x=0x12, .y=0x88, .sp=0xbc, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x34}, {.addr=0x76aa, .value=0xa4}, {.addr=0x76ab, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x76aa, .value=0xa4, .type=IO_READ},
        {.addr=0x76ab, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xb0bb, .a=0xa0, .x=0x7e, .y=0x8b, .sp=0xe6, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x0c}, {.addr=0xb0bb, .value=0xa4}, {.addr=0xb0bc, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xb0bd, .a=0x94, .x=0x7e, .y=0x8b, .sp=0xe6, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x0c}, {.addr=0xb0bb, .value=0xa4}, {.addr=0xb0bc, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0bb, .value=0xa4, .type=IO_READ},
        {.addr=0xb0bc, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xc75b, .a=0x21, .x=0x53, .y=0x53, .sp=0xd1, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x4b}, {.addr=0xc75b, .value=0xa4}, {.addr=0xc75c, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xc75d, .a=0xd6, .x=0x53, .y=0x53, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x4b}, {.addr=0xc75b, .value=0xa4}, {.addr=0xc75c, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xc75b, .value=0xa4, .type=IO_READ},
        {.addr=0xc75c, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8ee5, .a=0xa3, .x=0xd6, .y=0x41, .sp=0x58, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x5c}, {.addr=0x8ee5, .value=0xa4}, {.addr=0x8ee6, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x8ee7, .a=0x47, .x=0xd6, .y=0x41, .sp=0x58, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x5c}, {.addr=0x8ee5, .value=0xa4}, {.addr=0x8ee6, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ee5, .value=0xa4, .type=IO_READ},
        {.addr=0x8ee6, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xfb6e, .a=0x2d, .x=0x3c, .y=0x1b, .sp=0x4c, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xef}, {.addr=0xfb6e, .value=0xa4}, {.addr=0xfb6f, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xfb70, .a=0x3d, .x=0x3c, .y=0x1b, .sp=0x4c, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xef}, {.addr=0xfb6e, .value=0xa4}, {.addr=0xfb6f, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb6e, .value=0xa4, .type=IO_READ},
        {.addr=0xfb6f, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x8409, .a=0xee, .x=0x46, .y=0x8d, .sp=0x18, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xef}, {.addr=0x8409, .value=0xa4}, {.addr=0x840a, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x840b, .a=0xfe, .x=0x46, .y=0x8d, .sp=0x18, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xef}, {.addr=0x8409, .value=0xa4}, {.addr=0x840a, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x8409, .value=0xa4, .type=IO_READ},
        {.addr=0x840a, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x9ce7, .a=0xcc, .x=0xcd, .y=0x86, .sp=0x8d, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x8a}, {.addr=0x9ce7, .value=0xa4}, {.addr=0x9ce8, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x9ce9, .a=0x42, .x=0xcd, .y=0x86, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x8a}, {.addr=0x9ce7, .value=0xa4}, {.addr=0x9ce8, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ce7, .value=0xa4, .type=IO_READ},
        {.addr=0x9ce8, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x2979, .a=0xc5, .x=0x25, .y=0x7a, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0x2979, .value=0xa4}, {.addr=0x297a, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x297b, .a=0xf2, .x=0x25, .y=0x7a, .sp=0xca, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0x2979, .value=0xa4}, {.addr=0x297a, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2979, .value=0xa4, .type=IO_READ},
        {.addr=0x297a, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x338a, .a=0xb5, .x=0x0f, .y=0xeb, .sp=0x68, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x14}, {.addr=0x338a, .value=0xa4}, {.addr=0x338b, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x338c, .a=0xa1, .x=0x0f, .y=0xeb, .sp=0x68, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x14}, {.addr=0x338a, .value=0xa4}, {.addr=0x338b, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x338a, .value=0xa4, .type=IO_READ},
        {.addr=0x338b, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x7b8d, .a=0xaf, .x=0x52, .y=0x88, .sp=0x04, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xa2}, {.addr=0x7b8d, .value=0xa4}, {.addr=0x7b8e, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x7b8f, .a=0x0d, .x=0x52, .y=0x88, .sp=0x04, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xa2}, {.addr=0x7b8d, .value=0xa4}, {.addr=0x7b8e, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b8d, .value=0xa4, .type=IO_READ},
        {.addr=0x7b8e, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xc65f, .a=0x5a, .x=0x8b, .y=0x1d, .sp=0x31, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x5b}, {.addr=0xc65f, .value=0xa4}, {.addr=0xc660, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xc661, .a=0xff, .x=0x8b, .y=0x1d, .sp=0x31, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x5b}, {.addr=0xc65f, .value=0xa4}, {.addr=0xc660, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xc65f, .value=0xa4, .type=IO_READ},
        {.addr=0xc660, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xc98b, .a=0x74, .x=0x8f, .y=0x8c, .sp=0x11, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xea}, {.addr=0xc98b, .value=0xa4}, {.addr=0xc98c, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xc98d, .a=0x8a, .x=0x8f, .y=0x8c, .sp=0x11, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xea}, {.addr=0xc98b, .value=0xa4}, {.addr=0xc98c, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc98b, .value=0xa4, .type=IO_READ},
        {.addr=0xc98c, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xd198, .a=0x89, .x=0xab, .y=0x0d, .sp=0x1a, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x7e}, {.addr=0xd198, .value=0xa4}, {.addr=0xd199, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xd19a, .a=0x0a, .x=0xab, .y=0x0d, .sp=0x1a, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x7e}, {.addr=0xd198, .value=0xa4}, {.addr=0xd199, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xd198, .value=0xa4, .type=IO_READ},
        {.addr=0xd199, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x84ea, .a=0xdc, .x=0xd5, .y=0x65, .sp=0x6d, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xbf}, {.addr=0x84ea, .value=0xa4}, {.addr=0x84eb, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x84ec, .a=0x1d, .x=0xd5, .y=0x65, .sp=0x6d, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xbf}, {.addr=0x84ea, .value=0xa4}, {.addr=0x84eb, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x84ea, .value=0xa4, .type=IO_READ},
        {.addr=0x84eb, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x126d, .a=0xa1, .x=0x0d, .y=0xa3, .sp=0xbf, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x26}, {.addr=0x126d, .value=0xa4}, {.addr=0x126e, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x126f, .a=0x7a, .x=0x0d, .y=0xa3, .sp=0xbf, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x26}, {.addr=0x126d, .value=0xa4}, {.addr=0x126e, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x126d, .value=0xa4, .type=IO_READ},
        {.addr=0x126e, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x5332, .a=0x5c, .x=0xe0, .y=0x4a, .sp=0x06, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xed}, {.addr=0x5332, .value=0xa4}, {.addr=0x5333, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x5334, .a=0x6f, .x=0xe0, .y=0x4a, .sp=0x06, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xed}, {.addr=0x5332, .value=0xa4}, {.addr=0x5333, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x5332, .value=0xa4, .type=IO_READ},
        {.addr=0x5333, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xb431, .a=0x9b, .x=0x4b, .y=0xcb, .sp=0xc3, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x86}, {.addr=0xb431, .value=0xa4}, {.addr=0xb432, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xb433, .a=0x14, .x=0x4b, .y=0xcb, .sp=0xc3, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x86}, {.addr=0xb431, .value=0xa4}, {.addr=0xb432, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb431, .value=0xa4, .type=IO_READ},
        {.addr=0xb432, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0xf5, .x=0x47, .y=0xfc, .sp=0xfb, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xdc}, {.addr=0xb748, .value=0xa4}, {.addr=0xb749, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xb74a, .a=0x18, .x=0x47, .y=0xfc, .sp=0xfb, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xdc}, {.addr=0xb748, .value=0xa4}, {.addr=0xb749, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0xa4, .type=IO_READ},
        {.addr=0xb749, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x36b6, .a=0x92, .x=0x16, .y=0x8d, .sp=0x79, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x67}, {.addr=0x36b6, .value=0xa4}, {.addr=0x36b7, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x36b8, .a=0x2a, .x=0x16, .y=0x8d, .sp=0x79, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x67}, {.addr=0x36b6, .value=0xa4}, {.addr=0x36b7, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x36b6, .value=0xa4, .type=IO_READ},
        {.addr=0x36b7, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xcb97, .a=0x04, .x=0xd0, .y=0x84, .sp=0xa6, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x3e}, {.addr=0xcb97, .value=0xa4}, {.addr=0xcb98, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xcb99, .a=0xc5, .x=0xd0, .y=0x84, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x3e}, {.addr=0xcb97, .value=0xa4}, {.addr=0xcb98, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb97, .value=0xa4, .type=IO_READ},
        {.addr=0xcb98, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xcea1, .a=0x57, .x=0x07, .y=0x62, .sp=0x5d, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x7d}, {.addr=0xcea1, .value=0xa4}, {.addr=0xcea2, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xcea3, .a=0xd9, .x=0x07, .y=0x62, .sp=0x5d, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x7d}, {.addr=0xcea1, .value=0xa4}, {.addr=0xcea2, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xcea1, .value=0xa4, .type=IO_READ},
        {.addr=0xcea2, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xadc0, .a=0x95, .x=0x34, .y=0xeb, .sp=0xdb, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xdc}, {.addr=0xadc0, .value=0xa4}, {.addr=0xadc1, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xadc2, .a=0xb8, .x=0x34, .y=0xeb, .sp=0xdb, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xdc}, {.addr=0xadc0, .value=0xa4}, {.addr=0xadc1, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xadc0, .value=0xa4, .type=IO_READ},
        {.addr=0xadc1, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x82b4, .a=0xf0, .x=0x64, .y=0x0f, .sp=0x43, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xc3}, {.addr=0x82b4, .value=0xa4}, {.addr=0x82b5, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x82b6, .a=0x2d, .x=0x64, .y=0x0f, .sp=0x43, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xc3}, {.addr=0x82b4, .value=0xa4}, {.addr=0x82b5, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x82b4, .value=0xa4, .type=IO_READ},
        {.addr=0x82b5, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x422d, .a=0x05, .x=0x78, .y=0x71, .sp=0x56, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x1f}, {.addr=0x422d, .value=0xa4}, {.addr=0x422e, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x422f, .a=0xe6, .x=0x78, .y=0x71, .sp=0x56, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x1f}, {.addr=0x422d, .value=0xa4}, {.addr=0x422e, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x422d, .value=0xa4, .type=IO_READ},
        {.addr=0x422e, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x27d7, .a=0x8d, .x=0x94, .y=0xd1, .sp=0x40, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0xd7}, {.addr=0x27d7, .value=0xa4}, {.addr=0x27d8, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x27d9, .a=0xb5, .x=0x94, .y=0xd1, .sp=0x40, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0xd7}, {.addr=0x27d7, .value=0xa4}, {.addr=0x27d8, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x27d7, .value=0xa4, .type=IO_READ},
        {.addr=0x27d8, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xb1a1, .a=0x4b, .x=0x9f, .y=0xd0, .sp=0x10, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xd3}, {.addr=0xb1a1, .value=0xa4}, {.addr=0xb1a2, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xb1a3, .a=0x78, .x=0x9f, .y=0xd0, .sp=0x10, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xd3}, {.addr=0xb1a1, .value=0xa4}, {.addr=0xb1a2, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1a1, .value=0xa4, .type=IO_READ},
        {.addr=0xb1a2, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x15dd, .a=0x5e, .x=0xc5, .y=0xac, .sp=0x5e, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xdf}, {.addr=0x15dd, .value=0xa4}, {.addr=0x15de, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x15df, .a=0x7f, .x=0xc5, .y=0xac, .sp=0x5e, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xdf}, {.addr=0x15dd, .value=0xa4}, {.addr=0x15de, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x15dd, .value=0xa4, .type=IO_READ},
        {.addr=0x15de, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xbf66, .a=0x77, .x=0x3b, .y=0x55, .sp=0x16, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x3e}, {.addr=0xbf66, .value=0xa4}, {.addr=0xbf67, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xbf68, .a=0x39, .x=0x3b, .y=0x55, .sp=0x16, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x3e}, {.addr=0xbf66, .value=0xa4}, {.addr=0xbf67, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf66, .value=0xa4, .type=IO_READ},
        {.addr=0xbf67, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0300) {
    const struct CPU_State initial_cpu = {.pc=0x01b2, .a=0x33, .x=0xa4, .y=0x90, .sp=0x32, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xae}, {.addr=0x01b2, .value=0xa4}, {.addr=0x01b3, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x01b4, .a=0x84, .x=0xa4, .y=0x90, .sp=0x32, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xae}, {.addr=0x01b2, .value=0xa4}, {.addr=0x01b3, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x01b2, .value=0xa4, .type=IO_READ},
        {.addr=0x01b3, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0301) {
    const struct CPU_State initial_cpu = {.pc=0x12c2, .a=0x4a, .x=0xf5, .y=0xc6, .sp=0xe3, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x38}, {.addr=0x12c2, .value=0xa4}, {.addr=0x12c3, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x12c4, .a=0x11, .x=0xf5, .y=0xc6, .sp=0xe3, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x38}, {.addr=0x12c2, .value=0xa4}, {.addr=0x12c3, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x12c2, .value=0xa4, .type=IO_READ},
        {.addr=0x12c3, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0302) {
    const struct CPU_State initial_cpu = {.pc=0xe3fc, .a=0x06, .x=0x50, .y=0x5a, .sp=0x91, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x9f}, {.addr=0xe3fc, .value=0xa4}, {.addr=0xe3fd, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xe3fe, .a=0x66, .x=0x50, .y=0x5a, .sp=0x91, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x9f}, {.addr=0xe3fc, .value=0xa4}, {.addr=0xe3fd, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3fc, .value=0xa4, .type=IO_READ},
        {.addr=0xe3fd, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6c17, .a=0x29, .x=0x1c, .y=0xc0, .sp=0x51, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xe3}, {.addr=0x6c17, .value=0xa4}, {.addr=0x6c18, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x6c19, .a=0x46, .x=0x1c, .y=0xc0, .sp=0x51, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xe3}, {.addr=0x6c17, .value=0xa4}, {.addr=0x6c18, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c17, .value=0xa4, .type=IO_READ},
        {.addr=0x6c18, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0305) {
    const struct CPU_State initial_cpu = {.pc=0xd803, .a=0xa3, .x=0x07, .y=0xa2, .sp=0xed, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x4c}, {.addr=0xd803, .value=0xa4}, {.addr=0xd804, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xd805, .a=0x56, .x=0x07, .y=0xa2, .sp=0xed, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x4c}, {.addr=0xd803, .value=0xa4}, {.addr=0xd804, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xd803, .value=0xa4, .type=IO_READ},
        {.addr=0xd804, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0306) {
    const struct CPU_State initial_cpu = {.pc=0x84f9, .a=0xd4, .x=0x52, .y=0xa5, .sp=0xb4, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x53}, {.addr=0x84f9, .value=0xa4}, {.addr=0x84fa, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x84fb, .a=0x80, .x=0x52, .y=0xa5, .sp=0xb4, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x53}, {.addr=0x84f9, .value=0xa4}, {.addr=0x84fa, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x84f9, .value=0xa4, .type=IO_READ},
        {.addr=0x84fa, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2514, .a=0x0d, .x=0x48, .y=0x35, .sp=0xa9, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x11}, {.addr=0x2514, .value=0xa4}, {.addr=0x2515, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0xfb, .x=0x48, .y=0x35, .sp=0xa9, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x11}, {.addr=0x2514, .value=0xa4}, {.addr=0x2515, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2514, .value=0xa4, .type=IO_READ},
        {.addr=0x2515, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0308) {
    const struct CPU_State initial_cpu = {.pc=0xaf0a, .a=0x80, .x=0xfe, .y=0xec, .sp=0x27, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x30}, {.addr=0xaf0a, .value=0xa4}, {.addr=0xaf0b, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xaf0c, .a=0x4f, .x=0xfe, .y=0xec, .sp=0x27, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x30}, {.addr=0xaf0a, .value=0xa4}, {.addr=0xaf0b, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf0a, .value=0xa4, .type=IO_READ},
        {.addr=0xaf0b, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0309) {
    const struct CPU_State initial_cpu = {.pc=0x6643, .a=0x6f, .x=0x10, .y=0x06, .sp=0xc8, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xf6}, {.addr=0x6643, .value=0xa4}, {.addr=0x6644, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x6645, .a=0x78, .x=0x10, .y=0x06, .sp=0xc8, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xf6}, {.addr=0x6643, .value=0xa4}, {.addr=0x6644, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6643, .value=0xa4, .type=IO_READ},
        {.addr=0x6644, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_030A) {
    const struct CPU_State initial_cpu = {.pc=0x58fb, .a=0x90, .x=0xaf, .y=0xd4, .sp=0xc4, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x69}, {.addr=0x58fb, .value=0xa4}, {.addr=0x58fc, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x58fd, .a=0x27, .x=0xaf, .y=0xd4, .sp=0xc4, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x69}, {.addr=0x58fb, .value=0xa4}, {.addr=0x58fc, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x58fb, .value=0xa4, .type=IO_READ},
        {.addr=0x58fc, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_030C) {
    const struct CPU_State initial_cpu = {.pc=0xbe43, .a=0xc2, .x=0xcf, .y=0x82, .sp=0xd8, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x35}, {.addr=0xbe43, .value=0xa4}, {.addr=0xbe44, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xbe45, .a=0x8c, .x=0xcf, .y=0x82, .sp=0xd8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x35}, {.addr=0xbe43, .value=0xa4}, {.addr=0xbe44, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe43, .value=0xa4, .type=IO_READ},
        {.addr=0xbe44, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_030D) {
    const struct CPU_State initial_cpu = {.pc=0x27da, .a=0x82, .x=0xba, .y=0x87, .sp=0x6d, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x26}, {.addr=0x27da, .value=0xa4}, {.addr=0x27db, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x27dc, .a=0x5c, .x=0xba, .y=0x87, .sp=0x6d, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x26}, {.addr=0x27da, .value=0xa4}, {.addr=0x27db, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x27da, .value=0xa4, .type=IO_READ},
        {.addr=0x27db, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_030E) {
    const struct CPU_State initial_cpu = {.pc=0xdb37, .a=0x31, .x=0xd1, .y=0x11, .sp=0x6f, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x28}, {.addr=0xdb37, .value=0xa4}, {.addr=0xdb38, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xdb39, .a=0x08, .x=0xd1, .y=0x11, .sp=0x6f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x28}, {.addr=0xdb37, .value=0xa4}, {.addr=0xdb38, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb37, .value=0xa4, .type=IO_READ},
        {.addr=0xdb38, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0e2a, .a=0x5e, .x=0xd1, .y=0x59, .sp=0x6f, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x8c}, {.addr=0x0e2a, .value=0xa4}, {.addr=0x0e2b, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x0e2c, .a=0xd2, .x=0xd1, .y=0x59, .sp=0x6f, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x8c}, {.addr=0x0e2a, .value=0xa4}, {.addr=0x0e2b, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e2a, .value=0xa4, .type=IO_READ},
        {.addr=0x0e2b, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0310) {
    const struct CPU_State initial_cpu = {.pc=0xce84, .a=0x0f, .x=0x67, .y=0xb8, .sp=0x8c, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x1d}, {.addr=0xce84, .value=0xa4}, {.addr=0xce85, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xce86, .a=0xf2, .x=0x67, .y=0xb8, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x1d}, {.addr=0xce84, .value=0xa4}, {.addr=0xce85, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xce84, .value=0xa4, .type=IO_READ},
        {.addr=0xce85, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0311) {
    const struct CPU_State initial_cpu = {.pc=0xfffd, .a=0x8a, .x=0xb3, .y=0xe1, .sp=0x1b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x93}, {.addr=0xfffd, .value=0xa4}, {.addr=0xfffe, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xffff, .a=0xf7, .x=0xb3, .y=0xe1, .sp=0x1b, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x93}, {.addr=0xfffd, .value=0xa4}, {.addr=0xfffe, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xfffd, .value=0xa4, .type=IO_READ},
        {.addr=0xfffe, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0312) {
    const struct CPU_State initial_cpu = {.pc=0x09ff, .a=0x6e, .x=0x4a, .y=0x0d, .sp=0x5c, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x74}, {.addr=0x09ff, .value=0xa4}, {.addr=0x0a00, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x0a01, .a=0xf9, .x=0x4a, .y=0x0d, .sp=0x5c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x74}, {.addr=0x09ff, .value=0xa4}, {.addr=0x0a00, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x09ff, .value=0xa4, .type=IO_READ},
        {.addr=0x0a00, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0313) {
    const struct CPU_State initial_cpu = {.pc=0x045f, .a=0xd1, .x=0xf1, .y=0x80, .sp=0x9c, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xb4}, {.addr=0x045f, .value=0xa4}, {.addr=0x0460, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x0461, .a=0x1c, .x=0xf1, .y=0x80, .sp=0x9c, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xb4}, {.addr=0x045f, .value=0xa4}, {.addr=0x0460, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x045f, .value=0xa4, .type=IO_READ},
        {.addr=0x0460, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0314) {
    const struct CPU_State initial_cpu = {.pc=0xb5be, .a=0xd7, .x=0xa7, .y=0x2c, .sp=0x81, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xc6}, {.addr=0xb5be, .value=0xa4}, {.addr=0xb5bf, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xb5c0, .a=0x10, .x=0xa7, .y=0x2c, .sp=0x81, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xc6}, {.addr=0xb5be, .value=0xa4}, {.addr=0xb5bf, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5be, .value=0xa4, .type=IO_READ},
        {.addr=0xb5bf, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0315) {
    const struct CPU_State initial_cpu = {.pc=0xd0a8, .a=0x55, .x=0xd5, .y=0x2d, .sp=0x03, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x97}, {.addr=0xd0a8, .value=0xa4}, {.addr=0xd0a9, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xd0aa, .a=0xbd, .x=0xd5, .y=0x2d, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x97}, {.addr=0xd0a8, .value=0xa4}, {.addr=0xd0a9, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0a8, .value=0xa4, .type=IO_READ},
        {.addr=0xd0a9, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0316) {
    const struct CPU_State initial_cpu = {.pc=0x01b8, .a=0x0c, .x=0x27, .y=0x11, .sp=0xcc, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x81}, {.addr=0x01b8, .value=0xa4}, {.addr=0x01b9, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x01ba, .a=0x8a, .x=0x27, .y=0x11, .sp=0xcc, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x81}, {.addr=0x01b8, .value=0xa4}, {.addr=0x01b9, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x01b8, .value=0xa4, .type=IO_READ},
        {.addr=0x01b9, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0317) {
    const struct CPU_State initial_cpu = {.pc=0x8011, .a=0x00, .x=0x75, .y=0x47, .sp=0x38, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x0c}, {.addr=0x8011, .value=0xa4}, {.addr=0x8012, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x8013, .a=0xf3, .x=0x75, .y=0x47, .sp=0x38, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x0c}, {.addr=0x8011, .value=0xa4}, {.addr=0x8012, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x8011, .value=0xa4, .type=IO_READ},
        {.addr=0x8012, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0318) {
    const struct CPU_State initial_cpu = {.pc=0xdda4, .a=0xf9, .x=0x11, .y=0xb8, .sp=0xf3, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x19}, {.addr=0xdda4, .value=0xa4}, {.addr=0xdda5, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xdda6, .a=0xe0, .x=0x11, .y=0xb8, .sp=0xf3, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x19}, {.addr=0xdda4, .value=0xa4}, {.addr=0xdda5, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xdda4, .value=0xa4, .type=IO_READ},
        {.addr=0xdda5, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0319) {
    const struct CPU_State initial_cpu = {.pc=0xc59e, .a=0x47, .x=0x95, .y=0xc9, .sp=0x8e, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x35}, {.addr=0xc59e, .value=0xa4}, {.addr=0xc59f, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xc5a0, .a=0x11, .x=0x95, .y=0xc9, .sp=0x8e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x35}, {.addr=0xc59e, .value=0xa4}, {.addr=0xc59f, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xc59e, .value=0xa4, .type=IO_READ},
        {.addr=0xc59f, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031A) {
    const struct CPU_State initial_cpu = {.pc=0x7ed8, .a=0xc7, .x=0x2b, .y=0xcd, .sp=0x3c, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x02}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x7eda, .a=0xc4, .x=0x2b, .y=0xcd, .sp=0x3c, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x02}, {.addr=0x7ed8, .value=0xa4}, {.addr=0x7ed9, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ed8, .value=0xa4, .type=IO_READ},
        {.addr=0x7ed9, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031B) {
    const struct CPU_State initial_cpu = {.pc=0x9bd8, .a=0xcb, .x=0x32, .y=0xa8, .sp=0xaa, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xdc}, {.addr=0x9bd8, .value=0xa4}, {.addr=0x9bd9, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x9bda, .a=0xef, .x=0x32, .y=0xa8, .sp=0xaa, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xdc}, {.addr=0x9bd8, .value=0xa4}, {.addr=0x9bd9, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bd8, .value=0xa4, .type=IO_READ},
        {.addr=0x9bd9, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3c4b, .a=0xa8, .x=0xd0, .y=0x9d, .sp=0x55, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xdb}, {.addr=0x3c4b, .value=0xa4}, {.addr=0x3c4c, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x3c4d, .a=0xcd, .x=0xd0, .y=0x9d, .sp=0x55, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xdb}, {.addr=0x3c4b, .value=0xa4}, {.addr=0x3c4c, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c4b, .value=0xa4, .type=IO_READ},
        {.addr=0x3c4c, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031D) {
    const struct CPU_State initial_cpu = {.pc=0x051e, .a=0x82, .x=0x21, .y=0x2b, .sp=0x15, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x43}, {.addr=0x051e, .value=0xa4}, {.addr=0x051f, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x0520, .a=0x3f, .x=0x21, .y=0x2b, .sp=0x15, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x43}, {.addr=0x051e, .value=0xa4}, {.addr=0x051f, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x051e, .value=0xa4, .type=IO_READ},
        {.addr=0x051f, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031E) {
    const struct CPU_State initial_cpu = {.pc=0x08b4, .a=0x88, .x=0x3c, .y=0xfc, .sp=0x78, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x08}, {.addr=0x08b4, .value=0xa4}, {.addr=0x08b5, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x08b6, .a=0x80, .x=0x3c, .y=0xfc, .sp=0x78, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x08}, {.addr=0x08b4, .value=0xa4}, {.addr=0x08b5, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x08b4, .value=0xa4, .type=IO_READ},
        {.addr=0x08b5, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_031F) {
    const struct CPU_State initial_cpu = {.pc=0xaf39, .a=0xd8, .x=0xae, .y=0x59, .sp=0xa1, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xdf}, {.addr=0xaf39, .value=0xa4}, {.addr=0xaf3a, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xaf3b, .a=0xf8, .x=0xae, .y=0x59, .sp=0xa1, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xdf}, {.addr=0xaf39, .value=0xa4}, {.addr=0xaf3a, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf39, .value=0xa4, .type=IO_READ},
        {.addr=0xaf3a, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0320) {
    const struct CPU_State initial_cpu = {.pc=0xecee, .a=0xd6, .x=0x5b, .y=0xb1, .sp=0x89, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x8b}, {.addr=0xecee, .value=0xa4}, {.addr=0xecef, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xecf0, .a=0x4a, .x=0x5b, .y=0xb1, .sp=0x89, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x8b}, {.addr=0xecee, .value=0xa4}, {.addr=0xecef, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xecee, .value=0xa4, .type=IO_READ},
        {.addr=0xecef, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc4f0, .a=0x8a, .x=0xcb, .y=0x59, .sp=0x14, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x04}, {.addr=0xc4f0, .value=0xa4}, {.addr=0xc4f1, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xc4f2, .a=0x86, .x=0xcb, .y=0x59, .sp=0x14, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x04}, {.addr=0xc4f0, .value=0xa4}, {.addr=0xc4f1, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4f0, .value=0xa4, .type=IO_READ},
        {.addr=0xc4f1, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa918, .a=0xc8, .x=0x59, .y=0x82, .sp=0x61, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x40}, {.addr=0xa918, .value=0xa4}, {.addr=0xa919, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xa91a, .a=0x87, .x=0x59, .y=0x82, .sp=0x61, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x40}, {.addr=0xa918, .value=0xa4}, {.addr=0xa919, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xa918, .value=0xa4, .type=IO_READ},
        {.addr=0xa919, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0324) {
    const struct CPU_State initial_cpu = {.pc=0x4aed, .a=0x93, .x=0xe8, .y=0x47, .sp=0x74, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x4f}, {.addr=0x4aed, .value=0xa4}, {.addr=0x4aee, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x4aef, .a=0x43, .x=0xe8, .y=0x47, .sp=0x74, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x4f}, {.addr=0x4aed, .value=0xa4}, {.addr=0x4aee, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aed, .value=0xa4, .type=IO_READ},
        {.addr=0x4aee, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0325) {
    const struct CPU_State initial_cpu = {.pc=0x3120, .a=0x01, .x=0x4a, .y=0x50, .sp=0xfa, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xd8}, {.addr=0x3120, .value=0xa4}, {.addr=0x3121, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x3122, .a=0x28, .x=0x4a, .y=0x50, .sp=0xfa, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xd8}, {.addr=0x3120, .value=0xa4}, {.addr=0x3121, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3120, .value=0xa4, .type=IO_READ},
        {.addr=0x3121, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3270, .a=0x58, .x=0x26, .y=0xd6, .sp=0x8f, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xb1}, {.addr=0x3270, .value=0xa4}, {.addr=0x3271, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x3272, .a=0xa7, .x=0x26, .y=0xd6, .sp=0x8f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xb1}, {.addr=0x3270, .value=0xa4}, {.addr=0x3271, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3270, .value=0xa4, .type=IO_READ},
        {.addr=0x3271, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0327) {
    const struct CPU_State initial_cpu = {.pc=0x5c16, .a=0x8f, .x=0x9c, .y=0x39, .sp=0xb2, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0xf1}, {.addr=0x5c16, .value=0xa4}, {.addr=0x5c17, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x5c18, .a=0x9d, .x=0x9c, .y=0x39, .sp=0xb2, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0xf1}, {.addr=0x5c16, .value=0xa4}, {.addr=0x5c17, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c16, .value=0xa4, .type=IO_READ},
        {.addr=0x5c17, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0328) {
    const struct CPU_State initial_cpu = {.pc=0x618c, .a=0x9f, .x=0x7f, .y=0x41, .sp=0x50, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x2b}, {.addr=0x618c, .value=0xa4}, {.addr=0x618d, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x618e, .a=0x73, .x=0x7f, .y=0x41, .sp=0x50, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x2b}, {.addr=0x618c, .value=0xa4}, {.addr=0x618d, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x618c, .value=0xa4, .type=IO_READ},
        {.addr=0x618d, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0329) {
    const struct CPU_State initial_cpu = {.pc=0x33e7, .a=0x3a, .x=0xb5, .y=0x11, .sp=0xe2, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xed}, {.addr=0x33e7, .value=0xa4}, {.addr=0x33e8, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x33e9, .a=0x4c, .x=0xb5, .y=0x11, .sp=0xe2, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xed}, {.addr=0x33e7, .value=0xa4}, {.addr=0x33e8, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x33e7, .value=0xa4, .type=IO_READ},
        {.addr=0x33e8, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032A) {
    const struct CPU_State initial_cpu = {.pc=0xc76c, .a=0xd0, .x=0xa8, .y=0xe2, .sp=0x0b, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xc3}, {.addr=0xc76c, .value=0xa4}, {.addr=0xc76d, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xc76e, .a=0x0c, .x=0xa8, .y=0xe2, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xc3}, {.addr=0xc76c, .value=0xa4}, {.addr=0xc76d, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xc76c, .value=0xa4, .type=IO_READ},
        {.addr=0xc76d, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032B) {
    const struct CPU_State initial_cpu = {.pc=0x49c1, .a=0x32, .x=0x5b, .y=0x31, .sp=0x4c, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xf0}, {.addr=0x49c1, .value=0xa4}, {.addr=0x49c2, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x49c3, .a=0x42, .x=0x5b, .y=0x31, .sp=0x4c, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xf0}, {.addr=0x49c1, .value=0xa4}, {.addr=0x49c2, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x49c1, .value=0xa4, .type=IO_READ},
        {.addr=0x49c2, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032C) {
    const struct CPU_State initial_cpu = {.pc=0x187a, .a=0xc1, .x=0x97, .y=0x69, .sp=0x4d, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xf9}, {.addr=0x187a, .value=0xa4}, {.addr=0x187b, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x187c, .a=0xc7, .x=0x97, .y=0x69, .sp=0x4d, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xf9}, {.addr=0x187a, .value=0xa4}, {.addr=0x187b, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x187a, .value=0xa4, .type=IO_READ},
        {.addr=0x187b, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032D) {
    const struct CPU_State initial_cpu = {.pc=0x1ca4, .a=0x6d, .x=0xe3, .y=0xe7, .sp=0x91, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x76}, {.addr=0x1ca4, .value=0xa4}, {.addr=0x1ca5, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x1ca6, .a=0xf6, .x=0xe3, .y=0xe7, .sp=0x91, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x76}, {.addr=0x1ca4, .value=0xa4}, {.addr=0x1ca5, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ca4, .value=0xa4, .type=IO_READ},
        {.addr=0x1ca5, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032E) {
    const struct CPU_State initial_cpu = {.pc=0x0950, .a=0xd1, .x=0x9a, .y=0xb7, .sp=0x12, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x9b}, {.addr=0x0950, .value=0xa4}, {.addr=0x0951, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x0952, .a=0x36, .x=0x9a, .y=0xb7, .sp=0x12, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x9b}, {.addr=0x0950, .value=0xa4}, {.addr=0x0951, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0950, .value=0xa4, .type=IO_READ},
        {.addr=0x0951, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_032F) {
    const struct CPU_State initial_cpu = {.pc=0xc488, .a=0xb1, .x=0x24, .y=0xaa, .sp=0xfd, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x06}, {.addr=0xc488, .value=0xa4}, {.addr=0xc489, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xc48a, .a=0xaa, .x=0x24, .y=0xaa, .sp=0xfd, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x06}, {.addr=0xc488, .value=0xa4}, {.addr=0xc489, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc488, .value=0xa4, .type=IO_READ},
        {.addr=0xc489, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0330) {
    const struct CPU_State initial_cpu = {.pc=0xf6da, .a=0x8f, .x=0x73, .y=0xd0, .sp=0x5a, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xba}, {.addr=0xf6da, .value=0xa4}, {.addr=0xf6db, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xf6dc, .a=0xd5, .x=0x73, .y=0xd0, .sp=0x5a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xba}, {.addr=0xf6da, .value=0xa4}, {.addr=0xf6db, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6da, .value=0xa4, .type=IO_READ},
        {.addr=0xf6db, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0331) {
    const struct CPU_State initial_cpu = {.pc=0xeb0b, .a=0x1b, .x=0x65, .y=0x32, .sp=0x4b, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x0c}, {.addr=0xeb0b, .value=0xa4}, {.addr=0xeb0c, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xeb0d, .a=0x0f, .x=0x65, .y=0x32, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x0c}, {.addr=0xeb0b, .value=0xa4}, {.addr=0xeb0c, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb0b, .value=0xa4, .type=IO_READ},
        {.addr=0xeb0c, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0332) {
    const struct CPU_State initial_cpu = {.pc=0x85de, .a=0x77, .x=0xf2, .y=0xd6, .sp=0x2e, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x7a}, {.addr=0x85de, .value=0xa4}, {.addr=0x85df, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x85e0, .a=0xfc, .x=0xf2, .y=0xd6, .sp=0x2e, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x7a}, {.addr=0x85de, .value=0xa4}, {.addr=0x85df, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x85de, .value=0xa4, .type=IO_READ},
        {.addr=0x85df, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0333) {
    const struct CPU_State initial_cpu = {.pc=0xf67f, .a=0x5b, .x=0x94, .y=0x69, .sp=0x45, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x7b}, {.addr=0xf67f, .value=0xa4}, {.addr=0xf680, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xf681, .a=0xe0, .x=0x94, .y=0x69, .sp=0x45, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x7b}, {.addr=0xf67f, .value=0xa4}, {.addr=0xf680, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xf67f, .value=0xa4, .type=IO_READ},
        {.addr=0xf680, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0334) {
    const struct CPU_State initial_cpu = {.pc=0xf2cd, .a=0x33, .x=0xb6, .y=0xb2, .sp=0x3b, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x1d}, {.addr=0xf2cd, .value=0xa4}, {.addr=0xf2ce, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xf2cf, .a=0x16, .x=0xb6, .y=0xb2, .sp=0x3b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x1d}, {.addr=0xf2cd, .value=0xa4}, {.addr=0xf2ce, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2cd, .value=0xa4, .type=IO_READ},
        {.addr=0xf2ce, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0335) {
    const struct CPU_State initial_cpu = {.pc=0x19c6, .a=0x1e, .x=0x02, .y=0x8c, .sp=0xd0, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xf3}, {.addr=0x19c6, .value=0xa4}, {.addr=0x19c7, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x19c8, .a=0x2b, .x=0x02, .y=0x8c, .sp=0xd0, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xf3}, {.addr=0x19c6, .value=0xa4}, {.addr=0x19c7, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x19c6, .value=0xa4, .type=IO_READ},
        {.addr=0x19c7, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0336) {
    const struct CPU_State initial_cpu = {.pc=0x0f2c, .a=0x48, .x=0x3d, .y=0x4a, .sp=0x9b, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xba}, {.addr=0x0f2c, .value=0xa4}, {.addr=0x0f2d, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x0f2e, .a=0x8d, .x=0x3d, .y=0x4a, .sp=0x9b, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xba}, {.addr=0x0f2c, .value=0xa4}, {.addr=0x0f2d, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f2c, .value=0xa4, .type=IO_READ},
        {.addr=0x0f2d, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0337) {
    const struct CPU_State initial_cpu = {.pc=0xeff3, .a=0xfc, .x=0xbd, .y=0xd2, .sp=0x6a, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xe1}, {.addr=0xeff3, .value=0xa4}, {.addr=0xeff4, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xeff5, .a=0x1a, .x=0xbd, .y=0xd2, .sp=0x6a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xe1}, {.addr=0xeff3, .value=0xa4}, {.addr=0xeff4, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xeff3, .value=0xa4, .type=IO_READ},
        {.addr=0xeff4, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0338) {
    const struct CPU_State initial_cpu = {.pc=0xe8a5, .a=0x8f, .x=0x2c, .y=0x35, .sp=0xc1, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x2a}, {.addr=0xe8a5, .value=0xa4}, {.addr=0xe8a6, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xe8a7, .a=0x65, .x=0x2c, .y=0x35, .sp=0xc1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x2a}, {.addr=0xe8a5, .value=0xa4}, {.addr=0xe8a6, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8a5, .value=0xa4, .type=IO_READ},
        {.addr=0xe8a6, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0339) {
    const struct CPU_State initial_cpu = {.pc=0xd0a4, .a=0xfb, .x=0xf5, .y=0xb3, .sp=0x73, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x5d}, {.addr=0xd0a4, .value=0xa4}, {.addr=0xd0a5, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xd0a6, .a=0x9d, .x=0xf5, .y=0xb3, .sp=0x73, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x5d}, {.addr=0xd0a4, .value=0xa4}, {.addr=0xd0a5, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0a4, .value=0xa4, .type=IO_READ},
        {.addr=0xd0a5, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033A) {
    const struct CPU_State initial_cpu = {.pc=0x0ddc, .a=0x1a, .x=0x2b, .y=0x6b, .sp=0x8a, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x81}, {.addr=0x0ddc, .value=0xa4}, {.addr=0x0ddd, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x0dde, .a=0x99, .x=0x2b, .y=0x6b, .sp=0x8a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x81}, {.addr=0x0ddc, .value=0xa4}, {.addr=0x0ddd, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ddc, .value=0xa4, .type=IO_READ},
        {.addr=0x0ddd, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033B) {
    const struct CPU_State initial_cpu = {.pc=0xb5ec, .a=0xab, .x=0x56, .y=0xf2, .sp=0x13, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xd5}, {.addr=0xb5ec, .value=0xa4}, {.addr=0xb5ed, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xb5ee, .a=0xd5, .x=0x56, .y=0xf2, .sp=0x13, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xd5}, {.addr=0xb5ec, .value=0xa4}, {.addr=0xb5ed, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5ec, .value=0xa4, .type=IO_READ},
        {.addr=0xb5ed, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033C) {
    const struct CPU_State initial_cpu = {.pc=0x53b8, .a=0x74, .x=0x01, .y=0x2e, .sp=0x68, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xd4}, {.addr=0x53b8, .value=0xa4}, {.addr=0x53b9, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x53ba, .a=0x9f, .x=0x01, .y=0x2e, .sp=0x68, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xd4}, {.addr=0x53b8, .value=0xa4}, {.addr=0x53b9, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x53b8, .value=0xa4, .type=IO_READ},
        {.addr=0x53b9, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033D) {
    const struct CPU_State initial_cpu = {.pc=0xde7f, .a=0x49, .x=0x07, .y=0x43, .sp=0x0f, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x4a}, {.addr=0xde7f, .value=0xa4}, {.addr=0xde80, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xde81, .a=0xff, .x=0x07, .y=0x43, .sp=0x0f, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x4a}, {.addr=0xde7f, .value=0xa4}, {.addr=0xde80, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xde7f, .value=0xa4, .type=IO_READ},
        {.addr=0xde80, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033E) {
    const struct CPU_State initial_cpu = {.pc=0x8b2e, .a=0x1b, .x=0x3c, .y=0x9d, .sp=0x0e, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xd1}, {.addr=0x8b2e, .value=0xa4}, {.addr=0x8b2f, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x8b30, .a=0x4a, .x=0x3c, .y=0x9d, .sp=0x0e, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xd1}, {.addr=0x8b2e, .value=0xa4}, {.addr=0x8b2f, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b2e, .value=0xa4, .type=IO_READ},
        {.addr=0x8b2f, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_033F) {
    const struct CPU_State initial_cpu = {.pc=0x587c, .a=0xfb, .x=0x1c, .y=0xe5, .sp=0x6f, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xee}, {.addr=0x587c, .value=0xa4}, {.addr=0x587d, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x587e, .a=0x0c, .x=0x1c, .y=0xe5, .sp=0x6f, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xee}, {.addr=0x587c, .value=0xa4}, {.addr=0x587d, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x587c, .value=0xa4, .type=IO_READ},
        {.addr=0x587d, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0340) {
    const struct CPU_State initial_cpu = {.pc=0x71fa, .a=0x6d, .x=0x7e, .y=0x97, .sp=0x2f, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x45}, {.addr=0x71fa, .value=0xa4}, {.addr=0x71fb, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x28, .x=0x7e, .y=0x97, .sp=0x2f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x45}, {.addr=0x71fa, .value=0xa4}, {.addr=0x71fb, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x71fa, .value=0xa4, .type=IO_READ},
        {.addr=0x71fb, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0341) {
    const struct CPU_State initial_cpu = {.pc=0x3d38, .a=0xa4, .x=0x56, .y=0x81, .sp=0xa6, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x55}, {.addr=0x3d38, .value=0xa4}, {.addr=0x3d39, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x3d3a, .a=0x4e, .x=0x56, .y=0x81, .sp=0xa6, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x55}, {.addr=0x3d38, .value=0xa4}, {.addr=0x3d39, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d38, .value=0xa4, .type=IO_READ},
        {.addr=0x3d39, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0342) {
    const struct CPU_State initial_cpu = {.pc=0xdaa1, .a=0x30, .x=0x5b, .y=0xc1, .sp=0x61, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xc0}, {.addr=0xdaa1, .value=0xa4}, {.addr=0xdaa2, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xdaa3, .a=0x6f, .x=0x5b, .y=0xc1, .sp=0x61, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xc0}, {.addr=0xdaa1, .value=0xa4}, {.addr=0xdaa2, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xdaa1, .value=0xa4, .type=IO_READ},
        {.addr=0xdaa2, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0343) {
    const struct CPU_State initial_cpu = {.pc=0xd660, .a=0xe4, .x=0xeb, .y=0x17, .sp=0xec, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x30}, {.addr=0xd660, .value=0xa4}, {.addr=0xd661, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd662, .a=0xb4, .x=0xeb, .y=0x17, .sp=0xec, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x30}, {.addr=0xd660, .value=0xa4}, {.addr=0xd661, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd660, .value=0xa4, .type=IO_READ},
        {.addr=0xd661, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0344) {
    const struct CPU_State initial_cpu = {.pc=0x756e, .a=0x38, .x=0x8e, .y=0x6a, .sp=0x3e, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x55}, {.addr=0x756e, .value=0xa4}, {.addr=0x756f, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x7570, .a=0xe2, .x=0x8e, .y=0x6a, .sp=0x3e, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x55}, {.addr=0x756e, .value=0xa4}, {.addr=0x756f, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x756e, .value=0xa4, .type=IO_READ},
        {.addr=0x756f, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0345) {
    const struct CPU_State initial_cpu = {.pc=0xd1ce, .a=0x3b, .x=0xb8, .y=0x7c, .sp=0xdc, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x99}, {.addr=0xd1ce, .value=0xa4}, {.addr=0xd1cf, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xd1d0, .a=0xa2, .x=0xb8, .y=0x7c, .sp=0xdc, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x99}, {.addr=0xd1ce, .value=0xa4}, {.addr=0xd1cf, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1ce, .value=0xa4, .type=IO_READ},
        {.addr=0xd1cf, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0346) {
    const struct CPU_State initial_cpu = {.pc=0xf010, .a=0x68, .x=0xee, .y=0xfe, .sp=0xaa, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x85}, {.addr=0xf010, .value=0xa4}, {.addr=0xf011, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xf012, .a=0xe3, .x=0xee, .y=0xfe, .sp=0xaa, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x85}, {.addr=0xf010, .value=0xa4}, {.addr=0xf011, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xf010, .value=0xa4, .type=IO_READ},
        {.addr=0xf011, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9947, .a=0x97, .x=0xee, .y=0x0f, .sp=0x93, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x2d}, {.addr=0x9947, .value=0xa4}, {.addr=0x9948, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x9949, .a=0x69, .x=0xee, .y=0x0f, .sp=0x93, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x2d}, {.addr=0x9947, .value=0xa4}, {.addr=0x9948, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9947, .value=0xa4, .type=IO_READ},
        {.addr=0x9948, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0348) {
    const struct CPU_State initial_cpu = {.pc=0x4a17, .a=0x4b, .x=0x1c, .y=0x07, .sp=0xb8, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xc9}, {.addr=0x4a17, .value=0xa4}, {.addr=0x4a18, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x4a19, .a=0x82, .x=0x1c, .y=0x07, .sp=0xb8, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xc9}, {.addr=0x4a17, .value=0xa4}, {.addr=0x4a18, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a17, .value=0xa4, .type=IO_READ},
        {.addr=0x4a18, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0349) {
    const struct CPU_State initial_cpu = {.pc=0x5e25, .a=0x48, .x=0x34, .y=0x5d, .sp=0x90, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xd0}, {.addr=0x5e25, .value=0xa4}, {.addr=0x5e26, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x5e27, .a=0x78, .x=0x34, .y=0x5d, .sp=0x90, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xd0}, {.addr=0x5e25, .value=0xa4}, {.addr=0x5e26, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e25, .value=0xa4, .type=IO_READ},
        {.addr=0x5e26, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034A) {
    const struct CPU_State initial_cpu = {.pc=0x7026, .a=0x75, .x=0x1c, .y=0x2d, .sp=0x28, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x13}, {.addr=0x7026, .value=0xa4}, {.addr=0x7027, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x7028, .a=0x61, .x=0x1c, .y=0x2d, .sp=0x28, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x13}, {.addr=0x7026, .value=0xa4}, {.addr=0x7027, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x7026, .value=0xa4, .type=IO_READ},
        {.addr=0x7027, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034B) {
    const struct CPU_State initial_cpu = {.pc=0x0b20, .a=0xb7, .x=0x1e, .y=0x2f, .sp=0xd5, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x1c}, {.addr=0x0b20, .value=0xa4}, {.addr=0x0b21, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x0b22, .a=0x9b, .x=0x1e, .y=0x2f, .sp=0xd5, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x1c}, {.addr=0x0b20, .value=0xa4}, {.addr=0x0b21, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b20, .value=0xa4, .type=IO_READ},
        {.addr=0x0b21, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034C) {
    const struct CPU_State initial_cpu = {.pc=0x04ea, .a=0xb4, .x=0xf5, .y=0x6d, .sp=0xab, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x16}, {.addr=0x04ea, .value=0xa4}, {.addr=0x04eb, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x04ec, .a=0x9e, .x=0xf5, .y=0x6d, .sp=0xab, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x16}, {.addr=0x04ea, .value=0xa4}, {.addr=0x04eb, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x04ea, .value=0xa4, .type=IO_READ},
        {.addr=0x04eb, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034D) {
    const struct CPU_State initial_cpu = {.pc=0x4a14, .a=0x33, .x=0xff, .y=0x78, .sp=0xda, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x39}, {.addr=0x4a14, .value=0xa4}, {.addr=0x4a15, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x4a16, .a=0xf9, .x=0xff, .y=0x78, .sp=0xda, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x39}, {.addr=0x4a14, .value=0xa4}, {.addr=0x4a15, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a14, .value=0xa4, .type=IO_READ},
        {.addr=0x4a15, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034E) {
    const struct CPU_State initial_cpu = {.pc=0xf2a0, .a=0xff, .x=0xb5, .y=0x27, .sp=0x9c, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x4a}, {.addr=0xf2a0, .value=0xa4}, {.addr=0xf2a1, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a2, .a=0xb4, .x=0xb5, .y=0x27, .sp=0x9c, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x4a}, {.addr=0xf2a0, .value=0xa4}, {.addr=0xf2a1, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a0, .value=0xa4, .type=IO_READ},
        {.addr=0xf2a1, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_034F) {
    const struct CPU_State initial_cpu = {.pc=0xedf3, .a=0x3c, .x=0x0a, .y=0xf9, .sp=0x5a, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x08}, {.addr=0xedf3, .value=0xa4}, {.addr=0xedf4, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xedf5, .a=0x34, .x=0x0a, .y=0xf9, .sp=0x5a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x08}, {.addr=0xedf3, .value=0xa4}, {.addr=0xedf4, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xedf3, .value=0xa4, .type=IO_READ},
        {.addr=0xedf4, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0350) {
    const struct CPU_State initial_cpu = {.pc=0x2978, .a=0x59, .x=0xaa, .y=0x03, .sp=0xdf, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x00}, {.addr=0x2978, .value=0xa4}, {.addr=0x2979, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x297a, .a=0x59, .x=0xaa, .y=0x03, .sp=0xdf, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x00}, {.addr=0x2978, .value=0xa4}, {.addr=0x2979, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2978, .value=0xa4, .type=IO_READ},
        {.addr=0x2979, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0351) {
    const struct CPU_State initial_cpu = {.pc=0x74eb, .a=0x26, .x=0x89, .y=0x57, .sp=0x7c, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xe6}, {.addr=0x74eb, .value=0xa4}, {.addr=0x74ec, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x74ed, .a=0x40, .x=0x89, .y=0x57, .sp=0x7c, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xe6}, {.addr=0x74eb, .value=0xa4}, {.addr=0x74ec, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x74eb, .value=0xa4, .type=IO_READ},
        {.addr=0x74ec, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0352) {
    const struct CPU_State initial_cpu = {.pc=0xe67f, .a=0x7e, .x=0x28, .y=0xdc, .sp=0x07, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x7a}, {.addr=0xe67f, .value=0xa4}, {.addr=0xe680, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xe681, .a=0x03, .x=0x28, .y=0xdc, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x7a}, {.addr=0xe67f, .value=0xa4}, {.addr=0xe680, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xe67f, .value=0xa4, .type=IO_READ},
        {.addr=0xe680, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0353) {
    const struct CPU_State initial_cpu = {.pc=0x361a, .a=0x72, .x=0x30, .y=0x2c, .sp=0x33, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x85}, {.addr=0x361a, .value=0xa4}, {.addr=0x361b, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x361c, .a=0xec, .x=0x30, .y=0x2c, .sp=0x33, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x85}, {.addr=0x361a, .value=0xa4}, {.addr=0x361b, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x361a, .value=0xa4, .type=IO_READ},
        {.addr=0x361b, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0354) {
    const struct CPU_State initial_cpu = {.pc=0x7c31, .a=0xcb, .x=0x78, .y=0xbb, .sp=0x75, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x5c}, {.addr=0x7c31, .value=0xa4}, {.addr=0x7c32, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x7c33, .a=0x6e, .x=0x78, .y=0xbb, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x5c}, {.addr=0x7c31, .value=0xa4}, {.addr=0x7c32, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c31, .value=0xa4, .type=IO_READ},
        {.addr=0x7c32, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0355) {
    const struct CPU_State initial_cpu = {.pc=0x5ee9, .a=0x2d, .x=0xa4, .y=0xb8, .sp=0x67, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x5a}, {.addr=0x5ee9, .value=0xa4}, {.addr=0x5eea, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x5eeb, .a=0xd3, .x=0xa4, .y=0xb8, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x5a}, {.addr=0x5ee9, .value=0xa4}, {.addr=0x5eea, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ee9, .value=0xa4, .type=IO_READ},
        {.addr=0x5eea, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0356) {
    const struct CPU_State initial_cpu = {.pc=0x73a4, .a=0xef, .x=0xbd, .y=0x53, .sp=0xcb, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x0a}, {.addr=0x73a4, .value=0xa4}, {.addr=0x73a5, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x73a6, .a=0xe4, .x=0xbd, .y=0x53, .sp=0xcb, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x0a}, {.addr=0x73a4, .value=0xa4}, {.addr=0x73a5, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x73a4, .value=0xa4, .type=IO_READ},
        {.addr=0x73a5, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7dbb, .a=0x43, .x=0x11, .y=0x14, .sp=0xb0, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x3a}, {.addr=0x7dbb, .value=0xa4}, {.addr=0x7dbc, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x7dbd, .a=0x09, .x=0x11, .y=0x14, .sp=0xb0, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x3a}, {.addr=0x7dbb, .value=0xa4}, {.addr=0x7dbc, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dbb, .value=0xa4, .type=IO_READ},
        {.addr=0x7dbc, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0358) {
    const struct CPU_State initial_cpu = {.pc=0xe2b7, .a=0x35, .x=0x44, .y=0xbe, .sp=0xfe, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x10}, {.addr=0xe2b7, .value=0xa4}, {.addr=0xe2b8, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xe2b9, .a=0x24, .x=0x44, .y=0xbe, .sp=0xfe, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x10}, {.addr=0xe2b7, .value=0xa4}, {.addr=0xe2b8, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2b7, .value=0xa4, .type=IO_READ},
        {.addr=0xe2b8, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0359) {
    const struct CPU_State initial_cpu = {.pc=0xbe87, .a=0x42, .x=0xf7, .y=0xae, .sp=0x99, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x3a}, {.addr=0xbe87, .value=0xa4}, {.addr=0xbe88, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xbe89, .a=0x07, .x=0xf7, .y=0xae, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x3a}, {.addr=0xbe87, .value=0xa4}, {.addr=0xbe88, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe87, .value=0xa4, .type=IO_READ},
        {.addr=0xbe88, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035A) {
    const struct CPU_State initial_cpu = {.pc=0xccae, .a=0x5f, .x=0x05, .y=0x13, .sp=0xc5, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x1c}, {.addr=0xccae, .value=0xa4}, {.addr=0xccaf, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xccb0, .a=0x43, .x=0x05, .y=0x13, .sp=0xc5, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x1c}, {.addr=0xccae, .value=0xa4}, {.addr=0xccaf, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xccae, .value=0xa4, .type=IO_READ},
        {.addr=0xccaf, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035B) {
    const struct CPU_State initial_cpu = {.pc=0xc662, .a=0xf6, .x=0x31, .y=0xa2, .sp=0xea, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xb7}, {.addr=0xc662, .value=0xa4}, {.addr=0xc663, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xc664, .a=0x3f, .x=0x31, .y=0xa2, .sp=0xea, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xb7}, {.addr=0xc662, .value=0xa4}, {.addr=0xc663, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xc662, .value=0xa4, .type=IO_READ},
        {.addr=0xc663, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035C) {
    const struct CPU_State initial_cpu = {.pc=0x5a36, .a=0x21, .x=0xb7, .y=0xb6, .sp=0x4f, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x4f}, {.addr=0x5a36, .value=0xa4}, {.addr=0x5a37, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x5a38, .a=0xd2, .x=0xb7, .y=0xb6, .sp=0x4f, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x4f}, {.addr=0x5a36, .value=0xa4}, {.addr=0x5a37, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a36, .value=0xa4, .type=IO_READ},
        {.addr=0x5a37, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035D) {
    const struct CPU_State initial_cpu = {.pc=0x8fca, .a=0x07, .x=0x77, .y=0x19, .sp=0x96, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x8b}, {.addr=0x8fca, .value=0xa4}, {.addr=0x8fcb, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x8fcc, .a=0x7b, .x=0x77, .y=0x19, .sp=0x96, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x8b}, {.addr=0x8fca, .value=0xa4}, {.addr=0x8fcb, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fca, .value=0xa4, .type=IO_READ},
        {.addr=0x8fcb, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035E) {
    const struct CPU_State initial_cpu = {.pc=0x3cb2, .a=0xe5, .x=0x04, .y=0xda, .sp=0x4a, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x48}, {.addr=0x3cb2, .value=0xa4}, {.addr=0x3cb3, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x3cb4, .a=0x9c, .x=0x04, .y=0xda, .sp=0x4a, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x48}, {.addr=0x3cb2, .value=0xa4}, {.addr=0x3cb3, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cb2, .value=0xa4, .type=IO_READ},
        {.addr=0x3cb3, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_035F) {
    const struct CPU_State initial_cpu = {.pc=0xb4dd, .a=0x0e, .x=0xdb, .y=0x18, .sp=0xaa, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x90}, {.addr=0xb4dd, .value=0xa4}, {.addr=0xb4de, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xb4df, .a=0x7d, .x=0xdb, .y=0x18, .sp=0xaa, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x90}, {.addr=0xb4dd, .value=0xa4}, {.addr=0xb4de, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4dd, .value=0xa4, .type=IO_READ},
        {.addr=0xb4de, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0360) {
    const struct CPU_State initial_cpu = {.pc=0xb94d, .a=0x30, .x=0x30, .y=0xf9, .sp=0x89, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x0a}, {.addr=0xb94d, .value=0xa4}, {.addr=0xb94e, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xb94f, .a=0x25, .x=0x30, .y=0xf9, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x0a}, {.addr=0xb94d, .value=0xa4}, {.addr=0xb94e, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb94d, .value=0xa4, .type=IO_READ},
        {.addr=0xb94e, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0361) {
    const struct CPU_State initial_cpu = {.pc=0x054b, .a=0x0d, .x=0x3d, .y=0xfb, .sp=0xa7, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x67}, {.addr=0x054b, .value=0xa4}, {.addr=0x054c, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x054d, .a=0xa6, .x=0x3d, .y=0xfb, .sp=0xa7, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x67}, {.addr=0x054b, .value=0xa4}, {.addr=0x054c, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x054b, .value=0xa4, .type=IO_READ},
        {.addr=0x054c, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0362) {
    const struct CPU_State initial_cpu = {.pc=0xadae, .a=0xd9, .x=0xcb, .y=0xbe, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x1b}, {.addr=0xadae, .value=0xa4}, {.addr=0xadaf, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xadb0, .a=0xbd, .x=0xcb, .y=0xbe, .sp=0x12, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x1b}, {.addr=0xadae, .value=0xa4}, {.addr=0xadaf, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xadae, .value=0xa4, .type=IO_READ},
        {.addr=0xadaf, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0363) {
    const struct CPU_State initial_cpu = {.pc=0x3f2f, .a=0xf2, .x=0x31, .y=0x7f, .sp=0x5a, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x59}, {.addr=0x3f2f, .value=0xa4}, {.addr=0x3f30, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x3f31, .a=0x98, .x=0x31, .y=0x7f, .sp=0x5a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x59}, {.addr=0x3f2f, .value=0xa4}, {.addr=0x3f30, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f2f, .value=0xa4, .type=IO_READ},
        {.addr=0x3f30, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0364) {
    const struct CPU_State initial_cpu = {.pc=0x38f0, .a=0xd5, .x=0x3f, .y=0xc4, .sp=0x63, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x12}, {.addr=0x38f0, .value=0xa4}, {.addr=0x38f1, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x38f2, .a=0xc3, .x=0x3f, .y=0xc4, .sp=0x63, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x12}, {.addr=0x38f0, .value=0xa4}, {.addr=0x38f1, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x38f0, .value=0xa4, .type=IO_READ},
        {.addr=0x38f1, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0365) {
    const struct CPU_State initial_cpu = {.pc=0x2bbf, .a=0x45, .x=0xf4, .y=0x71, .sp=0x1e, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x56}, {.addr=0x2bbf, .value=0xa4}, {.addr=0x2bc0, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x2bc1, .a=0xee, .x=0xf4, .y=0x71, .sp=0x1e, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x56}, {.addr=0x2bbf, .value=0xa4}, {.addr=0x2bc0, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bbf, .value=0xa4, .type=IO_READ},
        {.addr=0x2bc0, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0366) {
    const struct CPU_State initial_cpu = {.pc=0x5f4f, .a=0xa3, .x=0xe6, .y=0x41, .sp=0xd4, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x4b}, {.addr=0x5f4f, .value=0xa4}, {.addr=0x5f50, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x5f51, .a=0x58, .x=0xe6, .y=0x41, .sp=0xd4, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x4b}, {.addr=0x5f4f, .value=0xa4}, {.addr=0x5f50, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f4f, .value=0xa4, .type=IO_READ},
        {.addr=0x5f50, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe393, .a=0x7e, .x=0xa0, .y=0xb4, .sp=0x19, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x78}, {.addr=0xe393, .value=0xa4}, {.addr=0xe394, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xe395, .a=0x06, .x=0xa0, .y=0xb4, .sp=0x19, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x78}, {.addr=0xe393, .value=0xa4}, {.addr=0xe394, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe393, .value=0xa4, .type=IO_READ},
        {.addr=0xe394, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0368) {
    const struct CPU_State initial_cpu = {.pc=0x173d, .a=0x26, .x=0xde, .y=0x7e, .sp=0x8f, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x0f}, {.addr=0x173d, .value=0xa4}, {.addr=0x173e, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x173f, .a=0x17, .x=0xde, .y=0x7e, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x0f}, {.addr=0x173d, .value=0xa4}, {.addr=0x173e, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x173d, .value=0xa4, .type=IO_READ},
        {.addr=0x173e, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0369) {
    const struct CPU_State initial_cpu = {.pc=0xeed5, .a=0x29, .x=0xd1, .y=0xca, .sp=0x80, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x35}, {.addr=0xeed5, .value=0xa4}, {.addr=0xeed6, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xeed7, .a=0xf3, .x=0xd1, .y=0xca, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x35}, {.addr=0xeed5, .value=0xa4}, {.addr=0xeed6, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xeed5, .value=0xa4, .type=IO_READ},
        {.addr=0xeed6, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036A) {
    const struct CPU_State initial_cpu = {.pc=0xbe02, .a=0x79, .x=0x9f, .y=0x89, .sp=0x7e, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x3b}, {.addr=0xbe02, .value=0xa4}, {.addr=0xbe03, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xbe04, .a=0x3e, .x=0x9f, .y=0x89, .sp=0x7e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x3b}, {.addr=0xbe02, .value=0xa4}, {.addr=0xbe03, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe02, .value=0xa4, .type=IO_READ},
        {.addr=0xbe03, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036B) {
    const struct CPU_State initial_cpu = {.pc=0x3e5d, .a=0x30, .x=0x84, .y=0x9b, .sp=0x5e, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x42}, {.addr=0x3e5d, .value=0xa4}, {.addr=0x3e5e, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x3e5f, .a=0xed, .x=0x84, .y=0x9b, .sp=0x5e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x42}, {.addr=0x3e5d, .value=0xa4}, {.addr=0x3e5e, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e5d, .value=0xa4, .type=IO_READ},
        {.addr=0x3e5e, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036C) {
    const struct CPU_State initial_cpu = {.pc=0xdb62, .a=0xcd, .x=0xf3, .y=0xbe, .sp=0x89, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xfe}, {.addr=0xdb62, .value=0xa4}, {.addr=0xdb63, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xdb64, .a=0xcf, .x=0xf3, .y=0xbe, .sp=0x89, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xfe}, {.addr=0xdb62, .value=0xa4}, {.addr=0xdb63, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb62, .value=0xa4, .type=IO_READ},
        {.addr=0xdb63, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036D) {
    const struct CPU_State initial_cpu = {.pc=0x08b0, .a=0xbe, .x=0x3a, .y=0x0d, .sp=0x7b, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xd8}, {.addr=0x08b0, .value=0xa4}, {.addr=0x08b1, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x08b2, .a=0xe5, .x=0x3a, .y=0x0d, .sp=0x7b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xd8}, {.addr=0x08b0, .value=0xa4}, {.addr=0x08b1, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x08b0, .value=0xa4, .type=IO_READ},
        {.addr=0x08b1, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036E) {
    const struct CPU_State initial_cpu = {.pc=0xbc03, .a=0x55, .x=0x65, .y=0x16, .sp=0x5a, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xb7}, {.addr=0xbc03, .value=0xa4}, {.addr=0xbc04, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xbc05, .a=0x9e, .x=0x65, .y=0x16, .sp=0x5a, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xb7}, {.addr=0xbc03, .value=0xa4}, {.addr=0xbc04, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc03, .value=0xa4, .type=IO_READ},
        {.addr=0xbc04, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_036F) {
    const struct CPU_State initial_cpu = {.pc=0x4ecb, .a=0x77, .x=0xf3, .y=0x38, .sp=0xaf, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0xf7}, {.addr=0x4ecb, .value=0xa4}, {.addr=0x4ecc, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x4ecd, .a=0x80, .x=0xf3, .y=0x38, .sp=0xaf, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0xf7}, {.addr=0x4ecb, .value=0xa4}, {.addr=0x4ecc, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ecb, .value=0xa4, .type=IO_READ},
        {.addr=0x4ecc, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0370) {
    const struct CPU_State initial_cpu = {.pc=0x21ba, .a=0x51, .x=0xe9, .y=0x19, .sp=0x3d, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x2a}, {.addr=0x21ba, .value=0xa4}, {.addr=0x21bb, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x21bc, .a=0x27, .x=0xe9, .y=0x19, .sp=0x3d, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x2a}, {.addr=0x21ba, .value=0xa4}, {.addr=0x21bb, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ba, .value=0xa4, .type=IO_READ},
        {.addr=0x21bb, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa99a, .a=0x79, .x=0x49, .y=0x4b, .sp=0xbe, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xc0}, {.addr=0xa99a, .value=0xa4}, {.addr=0xa99b, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa99c, .a=0xb9, .x=0x49, .y=0x4b, .sp=0xbe, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xc0}, {.addr=0xa99a, .value=0xa4}, {.addr=0xa99b, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa99a, .value=0xa4, .type=IO_READ},
        {.addr=0xa99b, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0372) {
    const struct CPU_State initial_cpu = {.pc=0xc3c1, .a=0x40, .x=0x53, .y=0xf4, .sp=0xb0, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x4f}, {.addr=0xc3c1, .value=0xa4}, {.addr=0xc3c2, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0xf1, .x=0x53, .y=0xf4, .sp=0xb0, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x4f}, {.addr=0xc3c1, .value=0xa4}, {.addr=0xc3c2, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3c1, .value=0xa4, .type=IO_READ},
        {.addr=0xc3c2, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0373) {
    const struct CPU_State initial_cpu = {.pc=0xeafe, .a=0x0b, .x=0x54, .y=0x4c, .sp=0xda, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xb8}, {.addr=0xeafe, .value=0xa4}, {.addr=0xeaff, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xeb00, .a=0x53, .x=0x54, .y=0x4c, .sp=0xda, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xb8}, {.addr=0xeafe, .value=0xa4}, {.addr=0xeaff, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xeafe, .value=0xa4, .type=IO_READ},
        {.addr=0xeaff, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0374) {
    const struct CPU_State initial_cpu = {.pc=0xea68, .a=0x66, .x=0xa7, .y=0x49, .sp=0x6d, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xf1}, {.addr=0xea68, .value=0xa4}, {.addr=0xea69, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xea6a, .a=0x74, .x=0xa7, .y=0x49, .sp=0x6d, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xf1}, {.addr=0xea68, .value=0xa4}, {.addr=0xea69, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xea68, .value=0xa4, .type=IO_READ},
        {.addr=0xea69, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0375) {
    const struct CPU_State initial_cpu = {.pc=0x865a, .a=0xac, .x=0x8d, .y=0xe2, .sp=0xfd, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x28}, {.addr=0x865a, .value=0xa4}, {.addr=0x865b, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x865c, .a=0x83, .x=0x8d, .y=0xe2, .sp=0xfd, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x28}, {.addr=0x865a, .value=0xa4}, {.addr=0x865b, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x865a, .value=0xa4, .type=IO_READ},
        {.addr=0x865b, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0376) {
    const struct CPU_State initial_cpu = {.pc=0xc967, .a=0xc9, .x=0x2d, .y=0x65, .sp=0x58, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x34}, {.addr=0xc967, .value=0xa4}, {.addr=0xc968, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xc969, .a=0x94, .x=0x2d, .y=0x65, .sp=0x58, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x34}, {.addr=0xc967, .value=0xa4}, {.addr=0xc968, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xc967, .value=0xa4, .type=IO_READ},
        {.addr=0xc968, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7cdc, .a=0x98, .x=0xc1, .y=0x9b, .sp=0xf5, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x06}, {.addr=0x7cdc, .value=0xa4}, {.addr=0x7cdd, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x7cde, .a=0x92, .x=0xc1, .y=0x9b, .sp=0xf5, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x06}, {.addr=0x7cdc, .value=0xa4}, {.addr=0x7cdd, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cdc, .value=0xa4, .type=IO_READ},
        {.addr=0x7cdd, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0378) {
    const struct CPU_State initial_cpu = {.pc=0x08f4, .a=0x49, .x=0x75, .y=0x6c, .sp=0xe8, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x8c}, {.addr=0x08f4, .value=0xa4}, {.addr=0x08f5, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x08f6, .a=0xbc, .x=0x75, .y=0x6c, .sp=0xe8, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x8c}, {.addr=0x08f4, .value=0xa4}, {.addr=0x08f5, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x08f4, .value=0xa4, .type=IO_READ},
        {.addr=0x08f5, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0379) {
    const struct CPU_State initial_cpu = {.pc=0x8160, .a=0x1d, .x=0x1a, .y=0x43, .sp=0x5e, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x0b}, {.addr=0x8160, .value=0xa4}, {.addr=0x8161, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x8162, .a=0x11, .x=0x1a, .y=0x43, .sp=0x5e, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x0b}, {.addr=0x8160, .value=0xa4}, {.addr=0x8161, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x8160, .value=0xa4, .type=IO_READ},
        {.addr=0x8161, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037A) {
    const struct CPU_State initial_cpu = {.pc=0x3374, .a=0xea, .x=0xc5, .y=0xd9, .sp=0x52, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x77}, {.addr=0x3374, .value=0xa4}, {.addr=0x3375, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x3376, .a=0x73, .x=0xc5, .y=0xd9, .sp=0x52, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x77}, {.addr=0x3374, .value=0xa4}, {.addr=0x3375, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3374, .value=0xa4, .type=IO_READ},
        {.addr=0x3375, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9cea, .a=0x4f, .x=0x6c, .y=0xed, .sp=0x19, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x27}, {.addr=0x9cea, .value=0xa4}, {.addr=0x9ceb, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x9cec, .a=0x27, .x=0x6c, .y=0xed, .sp=0x19, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x27}, {.addr=0x9cea, .value=0xa4}, {.addr=0x9ceb, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cea, .value=0xa4, .type=IO_READ},
        {.addr=0x9ceb, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037C) {
    const struct CPU_State initial_cpu = {.pc=0x0f4b, .a=0xc9, .x=0x7b, .y=0x06, .sp=0x86, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x49}, {.addr=0x0f4b, .value=0xa4}, {.addr=0x0f4c, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x0f4d, .a=0x80, .x=0x7b, .y=0x06, .sp=0x86, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x49}, {.addr=0x0f4b, .value=0xa4}, {.addr=0x0f4c, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f4b, .value=0xa4, .type=IO_READ},
        {.addr=0x0f4c, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037D) {
    const struct CPU_State initial_cpu = {.pc=0xb5ef, .a=0xd4, .x=0x66, .y=0x9d, .sp=0xd3, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xd6}, {.addr=0xb5ef, .value=0xa4}, {.addr=0xb5f0, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xb5f1, .a=0xfd, .x=0x66, .y=0x9d, .sp=0xd3, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xd6}, {.addr=0xb5ef, .value=0xa4}, {.addr=0xb5f0, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5ef, .value=0xa4, .type=IO_READ},
        {.addr=0xb5f0, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0fe6, .a=0x06, .x=0x36, .y=0x4a, .sp=0x9a, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x15}, {.addr=0x0fe6, .value=0xa4}, {.addr=0x0fe7, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe8, .a=0xf0, .x=0x36, .y=0x4a, .sp=0x9a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x15}, {.addr=0x0fe6, .value=0xa4}, {.addr=0x0fe7, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe6, .value=0xa4, .type=IO_READ},
        {.addr=0x0fe7, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_037F) {
    const struct CPU_State initial_cpu = {.pc=0xadec, .a=0xde, .x=0x79, .y=0xdc, .sp=0xb4, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x8f}, {.addr=0xadec, .value=0xa4}, {.addr=0xaded, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xadee, .a=0x4e, .x=0x79, .y=0xdc, .sp=0xb4, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x8f}, {.addr=0xadec, .value=0xa4}, {.addr=0xaded, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xadec, .value=0xa4, .type=IO_READ},
        {.addr=0xaded, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0380) {
    const struct CPU_State initial_cpu = {.pc=0x36be, .a=0xe6, .x=0x70, .y=0xde, .sp=0x8c, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x30}, {.addr=0x36be, .value=0xa4}, {.addr=0x36bf, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x36c0, .a=0xb6, .x=0x70, .y=0xde, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x30}, {.addr=0x36be, .value=0xa4}, {.addr=0x36bf, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x36be, .value=0xa4, .type=IO_READ},
        {.addr=0x36bf, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0381) {
    const struct CPU_State initial_cpu = {.pc=0xd74c, .a=0x96, .x=0x6d, .y=0x9b, .sp=0xec, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xde}, {.addr=0xd74c, .value=0xa4}, {.addr=0xd74d, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xd74e, .a=0xb7, .x=0x6d, .y=0x9b, .sp=0xec, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xde}, {.addr=0xd74c, .value=0xa4}, {.addr=0xd74d, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xd74c, .value=0xa4, .type=IO_READ},
        {.addr=0xd74d, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0382) {
    const struct CPU_State initial_cpu = {.pc=0x53c4, .a=0xdd, .x=0x16, .y=0x0e, .sp=0x90, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xa5}, {.addr=0x53c4, .value=0xa4}, {.addr=0x53c5, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x53c6, .a=0x38, .x=0x16, .y=0x0e, .sp=0x90, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xa5}, {.addr=0x53c4, .value=0xa4}, {.addr=0x53c5, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x53c4, .value=0xa4, .type=IO_READ},
        {.addr=0x53c5, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0383) {
    const struct CPU_State initial_cpu = {.pc=0xa66a, .a=0xf9, .x=0xd7, .y=0xbb, .sp=0x4d, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xfd}, {.addr=0xa66a, .value=0xa4}, {.addr=0xa66b, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xa66c, .a=0xfb, .x=0xd7, .y=0xbb, .sp=0x4d, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xfd}, {.addr=0xa66a, .value=0xa4}, {.addr=0xa66b, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa66a, .value=0xa4, .type=IO_READ},
        {.addr=0xa66b, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0384) {
    const struct CPU_State initial_cpu = {.pc=0x7550, .a=0xa7, .x=0xe2, .y=0xe2, .sp=0x2d, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xb2}, {.addr=0x7550, .value=0xa4}, {.addr=0x7551, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x7552, .a=0xf5, .x=0xe2, .y=0xe2, .sp=0x2d, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xb2}, {.addr=0x7550, .value=0xa4}, {.addr=0x7551, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7550, .value=0xa4, .type=IO_READ},
        {.addr=0x7551, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2048, .a=0x64, .x=0x8d, .y=0x44, .sp=0xbe, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xf5}, {.addr=0x2048, .value=0xa4}, {.addr=0x2049, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x204a, .a=0x6e, .x=0x8d, .y=0x44, .sp=0xbe, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xf5}, {.addr=0x2048, .value=0xa4}, {.addr=0x2049, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x2048, .value=0xa4, .type=IO_READ},
        {.addr=0x2049, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0386) {
    const struct CPU_State initial_cpu = {.pc=0x6865, .a=0xeb, .x=0x04, .y=0x24, .sp=0xea, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xa1}, {.addr=0x6865, .value=0xa4}, {.addr=0x6866, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x6867, .a=0x49, .x=0x04, .y=0x24, .sp=0xea, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xa1}, {.addr=0x6865, .value=0xa4}, {.addr=0x6866, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6865, .value=0xa4, .type=IO_READ},
        {.addr=0x6866, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0387) {
    const struct CPU_State initial_cpu = {.pc=0x180a, .a=0xb9, .x=0x6a, .y=0x91, .sp=0xd8, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x25}, {.addr=0x180a, .value=0xa4}, {.addr=0x180b, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x180c, .a=0x94, .x=0x6a, .y=0x91, .sp=0xd8, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x25}, {.addr=0x180a, .value=0xa4}, {.addr=0x180b, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x180a, .value=0xa4, .type=IO_READ},
        {.addr=0x180b, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0388) {
    const struct CPU_State initial_cpu = {.pc=0x3059, .a=0xf4, .x=0x4b, .y=0x86, .sp=0xb9, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x2a}, {.addr=0x3059, .value=0xa4}, {.addr=0x305a, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x305b, .a=0xc9, .x=0x4b, .y=0x86, .sp=0xb9, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x2a}, {.addr=0x3059, .value=0xa4}, {.addr=0x305a, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3059, .value=0xa4, .type=IO_READ},
        {.addr=0x305a, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0389) {
    const struct CPU_State initial_cpu = {.pc=0xd56b, .a=0x7c, .x=0x87, .y=0xf1, .sp=0xf0, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x58}, {.addr=0xd56b, .value=0xa4}, {.addr=0xd56c, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xd56d, .a=0x24, .x=0x87, .y=0xf1, .sp=0xf0, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x58}, {.addr=0xd56b, .value=0xa4}, {.addr=0xd56c, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd56b, .value=0xa4, .type=IO_READ},
        {.addr=0xd56c, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2bf1, .a=0xbf, .x=0x10, .y=0x52, .sp=0xc2, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x76}, {.addr=0x2bf1, .value=0xa4}, {.addr=0x2bf2, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x2bf3, .a=0x48, .x=0x10, .y=0x52, .sp=0xc2, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x76}, {.addr=0x2bf1, .value=0xa4}, {.addr=0x2bf2, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bf1, .value=0xa4, .type=IO_READ},
        {.addr=0x2bf2, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038B) {
    const struct CPU_State initial_cpu = {.pc=0x8451, .a=0xb0, .x=0xad, .y=0x60, .sp=0xb4, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xce}, {.addr=0x8451, .value=0xa4}, {.addr=0x8452, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x8453, .a=0xe2, .x=0xad, .y=0x60, .sp=0xb4, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xce}, {.addr=0x8451, .value=0xa4}, {.addr=0x8452, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8451, .value=0xa4, .type=IO_READ},
        {.addr=0x8452, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038C) {
    const struct CPU_State initial_cpu = {.pc=0xef25, .a=0x0c, .x=0x90, .y=0x17, .sp=0xcf, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x5f}, {.addr=0xef25, .value=0xa4}, {.addr=0xef26, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xef27, .a=0xac, .x=0x90, .y=0x17, .sp=0xcf, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x5f}, {.addr=0xef25, .value=0xa4}, {.addr=0xef26, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xef25, .value=0xa4, .type=IO_READ},
        {.addr=0xef26, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038D) {
    const struct CPU_State initial_cpu = {.pc=0x000f, .a=0xe9, .x=0x1e, .y=0xe8, .sp=0xd7, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xa4}, {.addr=0x0010, .value=0xab}, {.addr=0x00ab, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x0011, .a=0x0d, .x=0x1e, .y=0xe8, .sp=0xd7, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xa4}, {.addr=0x0010, .value=0xab}, {.addr=0x00ab, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x000f, .value=0xa4, .type=IO_READ},
        {.addr=0x0010, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038E) {
    const struct CPU_State initial_cpu = {.pc=0x855a, .a=0x62, .x=0x9e, .y=0x90, .sp=0x8b, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x07}, {.addr=0x855a, .value=0xa4}, {.addr=0x855b, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x855c, .a=0x5a, .x=0x9e, .y=0x90, .sp=0x8b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x07}, {.addr=0x855a, .value=0xa4}, {.addr=0x855b, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x855a, .value=0xa4, .type=IO_READ},
        {.addr=0x855b, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_038F) {
    const struct CPU_State initial_cpu = {.pc=0xf12b, .a=0x2f, .x=0x8b, .y=0x73, .sp=0xea, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x19}, {.addr=0xf12b, .value=0xa4}, {.addr=0xf12c, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xf12d, .a=0x16, .x=0x8b, .y=0x73, .sp=0xea, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x19}, {.addr=0xf12b, .value=0xa4}, {.addr=0xf12c, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xf12b, .value=0xa4, .type=IO_READ},
        {.addr=0xf12c, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0390) {
    const struct CPU_State initial_cpu = {.pc=0x897a, .a=0x2a, .x=0x69, .y=0x14, .sp=0xc3, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xe0}, {.addr=0x897a, .value=0xa4}, {.addr=0x897b, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x897c, .a=0x4a, .x=0x69, .y=0x14, .sp=0xc3, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xe0}, {.addr=0x897a, .value=0xa4}, {.addr=0x897b, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x897a, .value=0xa4, .type=IO_READ},
        {.addr=0x897b, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0391) {
    const struct CPU_State initial_cpu = {.pc=0x40e8, .a=0xdf, .x=0x45, .y=0x11, .sp=0x3e, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xf5}, {.addr=0x40e8, .value=0xa4}, {.addr=0x40e9, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x40ea, .a=0xea, .x=0x45, .y=0x11, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xf5}, {.addr=0x40e8, .value=0xa4}, {.addr=0x40e9, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e8, .value=0xa4, .type=IO_READ},
        {.addr=0x40e9, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0392) {
    const struct CPU_State initial_cpu = {.pc=0xe0d7, .a=0x6d, .x=0x5c, .y=0x56, .sp=0x1f, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xe5}, {.addr=0xe0d7, .value=0xa4}, {.addr=0xe0d8, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe0d9, .a=0x88, .x=0x5c, .y=0x56, .sp=0x1f, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xe5}, {.addr=0xe0d7, .value=0xa4}, {.addr=0xe0d8, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0d7, .value=0xa4, .type=IO_READ},
        {.addr=0xe0d8, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0393) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x2c, .x=0xc2, .y=0x2b, .sp=0xae, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x55}, {.addr=0xe6e6, .value=0xa4}, {.addr=0xe6e7, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xe6e8, .a=0xd7, .x=0xc2, .y=0x2b, .sp=0xae, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x55}, {.addr=0xe6e6, .value=0xa4}, {.addr=0xe6e7, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0xa4, .type=IO_READ},
        {.addr=0xe6e7, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0394) {
    const struct CPU_State initial_cpu = {.pc=0x114e, .a=0xc0, .x=0x00, .y=0x51, .sp=0xb1, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x88}, {.addr=0x114e, .value=0xa4}, {.addr=0x114f, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x1150, .a=0x38, .x=0x00, .y=0x51, .sp=0xb1, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x88}, {.addr=0x114e, .value=0xa4}, {.addr=0x114f, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x114e, .value=0xa4, .type=IO_READ},
        {.addr=0x114f, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0395) {
    const struct CPU_State initial_cpu = {.pc=0x08cf, .a=0xf9, .x=0x3f, .y=0x0f, .sp=0x6d, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x52}, {.addr=0x08cf, .value=0xa4}, {.addr=0x08d0, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x08d1, .a=0xa6, .x=0x3f, .y=0x0f, .sp=0x6d, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x52}, {.addr=0x08cf, .value=0xa4}, {.addr=0x08d0, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x08cf, .value=0xa4, .type=IO_READ},
        {.addr=0x08d0, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0396) {
    const struct CPU_State initial_cpu = {.pc=0x16d1, .a=0xe5, .x=0x58, .y=0x58, .sp=0x1a, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x3d}, {.addr=0x16d1, .value=0xa4}, {.addr=0x16d2, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x16d3, .a=0xa7, .x=0x58, .y=0x58, .sp=0x1a, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x3d}, {.addr=0x16d1, .value=0xa4}, {.addr=0x16d2, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x16d1, .value=0xa4, .type=IO_READ},
        {.addr=0x16d2, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0397) {
    const struct CPU_State initial_cpu = {.pc=0xb7f1, .a=0xf1, .x=0xd3, .y=0x40, .sp=0x67, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x6e}, {.addr=0xb7f1, .value=0xa4}, {.addr=0xb7f2, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xb7f3, .a=0x83, .x=0xd3, .y=0x40, .sp=0x67, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x6e}, {.addr=0xb7f1, .value=0xa4}, {.addr=0xb7f2, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7f1, .value=0xa4, .type=IO_READ},
        {.addr=0xb7f2, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0398) {
    const struct CPU_State initial_cpu = {.pc=0xdcb5, .a=0xb0, .x=0x42, .y=0x40, .sp=0xff, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x73}, {.addr=0xdcb5, .value=0xa4}, {.addr=0xdcb6, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xdcb7, .a=0x3d, .x=0x42, .y=0x40, .sp=0xff, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x73}, {.addr=0xdcb5, .value=0xa4}, {.addr=0xdcb6, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcb5, .value=0xa4, .type=IO_READ},
        {.addr=0xdcb6, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_0399) {
    const struct CPU_State initial_cpu = {.pc=0xe1f1, .a=0x4e, .x=0x66, .y=0x70, .sp=0x34, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x68}, {.addr=0xe1f1, .value=0xa4}, {.addr=0xe1f2, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xe1f3, .a=0xe6, .x=0x66, .y=0x70, .sp=0x34, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x68}, {.addr=0xe1f1, .value=0xa4}, {.addr=0xe1f2, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1f1, .value=0xa4, .type=IO_READ},
        {.addr=0xe1f2, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039A) {
    const struct CPU_State initial_cpu = {.pc=0xe7e8, .a=0x07, .x=0x37, .y=0x6d, .sp=0x38, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x5c}, {.addr=0xe7e8, .value=0xa4}, {.addr=0xe7e9, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xe7ea, .a=0xaa, .x=0x37, .y=0x6d, .sp=0x38, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x5c}, {.addr=0xe7e8, .value=0xa4}, {.addr=0xe7e9, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7e8, .value=0xa4, .type=IO_READ},
        {.addr=0xe7e9, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039B) {
    const struct CPU_State initial_cpu = {.pc=0x7d93, .a=0xd7, .x=0x5c, .y=0xc4, .sp=0x36, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xdc}, {.addr=0x7d93, .value=0xa4}, {.addr=0x7d94, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x7d95, .a=0xfb, .x=0x5c, .y=0xc4, .sp=0x36, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xdc}, {.addr=0x7d93, .value=0xa4}, {.addr=0x7d94, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d93, .value=0xa4, .type=IO_READ},
        {.addr=0x7d94, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039C) {
    const struct CPU_State initial_cpu = {.pc=0x096e, .a=0x52, .x=0x9b, .y=0xd4, .sp=0x8d, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xce}, {.addr=0x096e, .value=0xa4}, {.addr=0x096f, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x0970, .a=0x84, .x=0x9b, .y=0xd4, .sp=0x8d, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xce}, {.addr=0x096e, .value=0xa4}, {.addr=0x096f, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x096e, .value=0xa4, .type=IO_READ},
        {.addr=0x096f, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039D) {
    const struct CPU_State initial_cpu = {.pc=0x7b93, .a=0x57, .x=0x5e, .y=0x67, .sp=0x15, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x16}, {.addr=0x7b93, .value=0xa4}, {.addr=0x7b94, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x7b95, .a=0x40, .x=0x5e, .y=0x67, .sp=0x15, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x16}, {.addr=0x7b93, .value=0xa4}, {.addr=0x7b94, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b93, .value=0xa4, .type=IO_READ},
        {.addr=0x7b94, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039E) {
    const struct CPU_State initial_cpu = {.pc=0xd6ba, .a=0x2f, .x=0xda, .y=0xb8, .sp=0xe0, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xee}, {.addr=0xd6ba, .value=0xa4}, {.addr=0xd6bb, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xd6bc, .a=0x41, .x=0xda, .y=0xb8, .sp=0xe0, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xee}, {.addr=0xd6ba, .value=0xa4}, {.addr=0xd6bb, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6ba, .value=0xa4, .type=IO_READ},
        {.addr=0xd6bb, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3e09, .a=0xe6, .x=0x24, .y=0xc5, .sp=0x05, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x53}, {.addr=0x3e09, .value=0xa4}, {.addr=0x3e0a, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x3e0b, .a=0x93, .x=0x24, .y=0xc5, .sp=0x05, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x53}, {.addr=0x3e09, .value=0xa4}, {.addr=0x3e0a, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e09, .value=0xa4, .type=IO_READ},
        {.addr=0x3e0a, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xfd6c, .a=0x6f, .x=0x17, .y=0x22, .sp=0xd8, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x5c}, {.addr=0xfd6c, .value=0xa4}, {.addr=0xfd6d, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xfd6e, .a=0x13, .x=0x17, .y=0x22, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x5c}, {.addr=0xfd6c, .value=0xa4}, {.addr=0xfd6d, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd6c, .value=0xa4, .type=IO_READ},
        {.addr=0xfd6d, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7827, .a=0x53, .x=0x37, .y=0x3e, .sp=0x19, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x02}, {.addr=0x7827, .value=0xa4}, {.addr=0x7828, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x7829, .a=0x50, .x=0x37, .y=0x3e, .sp=0x19, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x02}, {.addr=0x7827, .value=0xa4}, {.addr=0x7828, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7827, .value=0xa4, .type=IO_READ},
        {.addr=0x7828, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2f01, .a=0x8d, .x=0x70, .y=0xeb, .sp=0x2d, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x0b}, {.addr=0x2f01, .value=0xa4}, {.addr=0x2f02, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x2f03, .a=0x82, .x=0x70, .y=0xeb, .sp=0x2d, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x0b}, {.addr=0x2f01, .value=0xa4}, {.addr=0x2f02, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f01, .value=0xa4, .type=IO_READ},
        {.addr=0x2f02, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf1fe, .a=0x19, .x=0xa6, .y=0x2f, .sp=0x04, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xd3}, {.addr=0xf1fe, .value=0xa4}, {.addr=0xf1ff, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xf200, .a=0x46, .x=0xa6, .y=0x2f, .sp=0x04, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xd3}, {.addr=0xf1fe, .value=0xa4}, {.addr=0xf1ff, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1fe, .value=0xa4, .type=IO_READ},
        {.addr=0xf1ff, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x8c60, .a=0x26, .x=0x92, .y=0x61, .sp=0x15, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x15}, {.addr=0x8c60, .value=0xa4}, {.addr=0x8c61, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x8c62, .a=0x10, .x=0x92, .y=0x61, .sp=0x15, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x15}, {.addr=0x8c60, .value=0xa4}, {.addr=0x8c61, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c60, .value=0xa4, .type=IO_READ},
        {.addr=0x8c61, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x89c9, .a=0xae, .x=0x2a, .y=0xf2, .sp=0x95, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x6f}, {.addr=0x89c9, .value=0xa4}, {.addr=0x89ca, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x89cb, .a=0x3e, .x=0x2a, .y=0xf2, .sp=0x95, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x6f}, {.addr=0x89c9, .value=0xa4}, {.addr=0x89ca, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x89c9, .value=0xa4, .type=IO_READ},
        {.addr=0x89ca, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xed54, .a=0x3d, .x=0xc6, .y=0x66, .sp=0x6b, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xda}, {.addr=0xed54, .value=0xa4}, {.addr=0xed55, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xed56, .a=0x63, .x=0xc6, .y=0x66, .sp=0x6b, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xda}, {.addr=0xed54, .value=0xa4}, {.addr=0xed55, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xed54, .value=0xa4, .type=IO_READ},
        {.addr=0xed55, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x3241, .a=0x74, .x=0x6c, .y=0xdc, .sp=0x88, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x02}, {.addr=0x3241, .value=0xa4}, {.addr=0x3242, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x3243, .a=0x71, .x=0x6c, .y=0xdc, .sp=0x88, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x02}, {.addr=0x3241, .value=0xa4}, {.addr=0x3242, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3241, .value=0xa4, .type=IO_READ},
        {.addr=0x3242, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x2cf5, .a=0x74, .x=0xa8, .y=0x1d, .sp=0x21, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x53}, {.addr=0x2cf5, .value=0xa4}, {.addr=0x2cf6, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x2cf7, .a=0x20, .x=0xa8, .y=0x1d, .sp=0x21, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x53}, {.addr=0x2cf5, .value=0xa4}, {.addr=0x2cf6, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cf5, .value=0xa4, .type=IO_READ},
        {.addr=0x2cf6, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x378c, .a=0xa2, .x=0x8a, .y=0xbd, .sp=0x2b, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x56}, {.addr=0x378c, .value=0xa4}, {.addr=0x378d, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x378e, .a=0x4c, .x=0x8a, .y=0xbd, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x56}, {.addr=0x378c, .value=0xa4}, {.addr=0x378d, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x378c, .value=0xa4, .type=IO_READ},
        {.addr=0x378d, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x34e3, .a=0x7b, .x=0x7d, .y=0x39, .sp=0x00, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x4f}, {.addr=0x34e3, .value=0xa4}, {.addr=0x34e4, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x34e5, .a=0x2b, .x=0x7d, .y=0x39, .sp=0x00, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x4f}, {.addr=0x34e3, .value=0xa4}, {.addr=0x34e4, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x34e3, .value=0xa4, .type=IO_READ},
        {.addr=0x34e4, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x078e, .a=0x96, .x=0x8d, .y=0x97, .sp=0x95, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xdf}, {.addr=0x078e, .value=0xa4}, {.addr=0x078f, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x0790, .a=0xb6, .x=0x8d, .y=0x97, .sp=0x95, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xdf}, {.addr=0x078e, .value=0xa4}, {.addr=0x078f, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x078e, .value=0xa4, .type=IO_READ},
        {.addr=0x078f, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x5400, .a=0x0f, .x=0xce, .y=0x91, .sp=0xf3, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x18}, {.addr=0x5400, .value=0xa4}, {.addr=0x5401, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x5402, .a=0xf7, .x=0xce, .y=0x91, .sp=0xf3, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x18}, {.addr=0x5400, .value=0xa4}, {.addr=0x5401, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x5400, .value=0xa4, .type=IO_READ},
        {.addr=0x5401, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x07d0, .a=0x19, .x=0xa5, .y=0xba, .sp=0xe4, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x1c}, {.addr=0x07d0, .value=0xa4}, {.addr=0x07d1, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x07d2, .a=0xfc, .x=0xa5, .y=0xba, .sp=0xe4, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x1c}, {.addr=0x07d0, .value=0xa4}, {.addr=0x07d1, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x07d0, .value=0xa4, .type=IO_READ},
        {.addr=0x07d1, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x104a, .a=0x47, .x=0x74, .y=0x2d, .sp=0x74, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x81}, {.addr=0x104a, .value=0xa4}, {.addr=0x104b, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x104c, .a=0xc5, .x=0x74, .y=0x2d, .sp=0x74, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x81}, {.addr=0x104a, .value=0xa4}, {.addr=0x104b, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x104a, .value=0xa4, .type=IO_READ},
        {.addr=0x104b, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x52ad, .a=0x59, .x=0xa2, .y=0xb2, .sp=0x30, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xf1}, {.addr=0x52ad, .value=0xa4}, {.addr=0x52ae, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x52af, .a=0x68, .x=0xa2, .y=0xb2, .sp=0x30, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xf1}, {.addr=0x52ad, .value=0xa4}, {.addr=0x52ae, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x52ad, .value=0xa4, .type=IO_READ},
        {.addr=0x52ae, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x9a3f, .a=0x97, .x=0xc5, .y=0x9b, .sp=0x6c, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x37}, {.addr=0x9a3f, .value=0xa4}, {.addr=0x9a40, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x9a41, .a=0x60, .x=0xc5, .y=0x9b, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x37}, {.addr=0x9a3f, .value=0xa4}, {.addr=0x9a40, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a3f, .value=0xa4, .type=IO_READ},
        {.addr=0x9a40, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xce8c, .a=0xbf, .x=0x75, .y=0x49, .sp=0xc6, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xeb}, {.addr=0xce8c, .value=0xa4}, {.addr=0xce8d, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xce8e, .a=0xd4, .x=0x75, .y=0x49, .sp=0xc6, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xeb}, {.addr=0xce8c, .value=0xa4}, {.addr=0xce8d, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xce8c, .value=0xa4, .type=IO_READ},
        {.addr=0xce8d, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5a5d, .a=0x60, .x=0xdc, .y=0x77, .sp=0x0e, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x99}, {.addr=0x5a5d, .value=0xa4}, {.addr=0x5a5e, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x5a5f, .a=0xc7, .x=0xdc, .y=0x77, .sp=0x0e, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x99}, {.addr=0x5a5d, .value=0xa4}, {.addr=0x5a5e, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a5d, .value=0xa4, .type=IO_READ},
        {.addr=0x5a5e, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x80b4, .a=0x36, .x=0x5e, .y=0x80, .sp=0x08, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xdb}, {.addr=0x80b4, .value=0xa4}, {.addr=0x80b5, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x80b6, .a=0x5a, .x=0x5e, .y=0x80, .sp=0x08, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xdb}, {.addr=0x80b4, .value=0xa4}, {.addr=0x80b5, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x80b4, .value=0xa4, .type=IO_READ},
        {.addr=0x80b5, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x0cf5, .a=0xb9, .x=0x55, .y=0x89, .sp=0xf1, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x07}, {.addr=0x0cf5, .value=0xa4}, {.addr=0x0cf6, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x0cf7, .a=0xb2, .x=0x55, .y=0x89, .sp=0xf1, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x07}, {.addr=0x0cf5, .value=0xa4}, {.addr=0x0cf6, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cf5, .value=0xa4, .type=IO_READ},
        {.addr=0x0cf6, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xb4f8, .a=0xd1, .x=0xb2, .y=0xae, .sp=0x41, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xb8}, {.addr=0xb4f8, .value=0xa4}, {.addr=0xb4f9, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xb4fa, .a=0x19, .x=0xb2, .y=0xae, .sp=0x41, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xb8}, {.addr=0xb4f8, .value=0xa4}, {.addr=0xb4f9, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4f8, .value=0xa4, .type=IO_READ},
        {.addr=0xb4f9, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xf6a9, .a=0x3c, .x=0xeb, .y=0x13, .sp=0x67, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x20}, {.addr=0xf6a9, .value=0xa4}, {.addr=0xf6aa, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xf6ab, .a=0x1b, .x=0xeb, .y=0x13, .sp=0x67, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x20}, {.addr=0xf6a9, .value=0xa4}, {.addr=0xf6aa, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6a9, .value=0xa4, .type=IO_READ},
        {.addr=0xf6aa, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xb92d, .a=0xb2, .x=0xe0, .y=0xe8, .sp=0xc0, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xcc}, {.addr=0xb92d, .value=0xa4}, {.addr=0xb92e, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xb92f, .a=0xe5, .x=0xe0, .y=0xe8, .sp=0xc0, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xcc}, {.addr=0xb92d, .value=0xa4}, {.addr=0xb92e, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xb92d, .value=0xa4, .type=IO_READ},
        {.addr=0xb92e, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x50db, .a=0xe4, .x=0x1d, .y=0x32, .sp=0x63, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xcb}, {.addr=0x50db, .value=0xa4}, {.addr=0x50dc, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x50dd, .a=0x19, .x=0x1d, .y=0x32, .sp=0x63, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xcb}, {.addr=0x50db, .value=0xa4}, {.addr=0x50dc, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x50db, .value=0xa4, .type=IO_READ},
        {.addr=0x50dc, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x8381, .a=0x6b, .x=0x30, .y=0x1e, .sp=0x20, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xe3}, {.addr=0x8381, .value=0xa4}, {.addr=0x8382, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x8383, .a=0x88, .x=0x30, .y=0x1e, .sp=0x20, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xe3}, {.addr=0x8381, .value=0xa4}, {.addr=0x8382, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8381, .value=0xa4, .type=IO_READ},
        {.addr=0x8382, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x398d, .a=0xd3, .x=0x29, .y=0xcf, .sp=0x9a, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xfb}, {.addr=0x398d, .value=0xa4}, {.addr=0x398e, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x398f, .a=0xd7, .x=0x29, .y=0xcf, .sp=0x9a, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xfb}, {.addr=0x398d, .value=0xa4}, {.addr=0x398e, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x398d, .value=0xa4, .type=IO_READ},
        {.addr=0x398e, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x548c, .a=0x3b, .x=0x92, .y=0xc4, .sp=0x1e, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x5e}, {.addr=0x548c, .value=0xa4}, {.addr=0x548d, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x548e, .a=0xdc, .x=0x92, .y=0xc4, .sp=0x1e, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x5e}, {.addr=0x548c, .value=0xa4}, {.addr=0x548d, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x548c, .value=0xa4, .type=IO_READ},
        {.addr=0x548d, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xa6cc, .a=0x59, .x=0xad, .y=0x95, .sp=0xaa, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x20}, {.addr=0xa6cc, .value=0xa4}, {.addr=0xa6cd, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xa6ce, .a=0x38, .x=0xad, .y=0x95, .sp=0xaa, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x20}, {.addr=0xa6cc, .value=0xa4}, {.addr=0xa6cd, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6cc, .value=0xa4, .type=IO_READ},
        {.addr=0xa6cd, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xb36a, .a=0x73, .x=0x03, .y=0x76, .sp=0xc3, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x64}, {.addr=0xb36a, .value=0xa4}, {.addr=0xb36b, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xb36c, .a=0x0f, .x=0x03, .y=0x76, .sp=0xc3, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x64}, {.addr=0xb36a, .value=0xa4}, {.addr=0xb36b, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb36a, .value=0xa4, .type=IO_READ},
        {.addr=0xb36b, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x2563, .a=0xd0, .x=0x96, .y=0xb9, .sp=0x1b, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xab}, {.addr=0x2563, .value=0xa4}, {.addr=0x2564, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x2565, .a=0x24, .x=0x96, .y=0xb9, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xab}, {.addr=0x2563, .value=0xa4}, {.addr=0x2564, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2563, .value=0xa4, .type=IO_READ},
        {.addr=0x2564, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x6332, .a=0x6b, .x=0x22, .y=0x4f, .sp=0x1e, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xd8}, {.addr=0x6332, .value=0xa4}, {.addr=0x6333, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6334, .a=0x92, .x=0x22, .y=0x4f, .sp=0x1e, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xd8}, {.addr=0x6332, .value=0xa4}, {.addr=0x6333, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6332, .value=0xa4, .type=IO_READ},
        {.addr=0x6333, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xf70b, .a=0xd4, .x=0x08, .y=0x50, .sp=0x86, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x9b}, {.addr=0xf70b, .value=0xa4}, {.addr=0xf70c, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf70d, .a=0x39, .x=0x08, .y=0x50, .sp=0x86, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x9b}, {.addr=0xf70b, .value=0xa4}, {.addr=0xf70c, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf70b, .value=0xa4, .type=IO_READ},
        {.addr=0xf70c, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xf35d, .a=0x31, .x=0xa1, .y=0x87, .sp=0x3b, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xfa}, {.addr=0xf35d, .value=0xa4}, {.addr=0xf35e, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xf35f, .a=0x36, .x=0xa1, .y=0x87, .sp=0x3b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xfa}, {.addr=0xf35d, .value=0xa4}, {.addr=0xf35e, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf35d, .value=0xa4, .type=IO_READ},
        {.addr=0xf35e, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xb18b, .a=0x0b, .x=0xc1, .y=0xc2, .sp=0xc9, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0xe7}, {.addr=0xb18b, .value=0xa4}, {.addr=0xb18c, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xb18d, .a=0x24, .x=0xc1, .y=0xc2, .sp=0xc9, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0xe7}, {.addr=0xb18b, .value=0xa4}, {.addr=0xb18c, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xb18b, .value=0xa4, .type=IO_READ},
        {.addr=0xb18c, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xc66f, .a=0x7e, .x=0xf4, .y=0x0a, .sp=0x86, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xfd}, {.addr=0xc66f, .value=0xa4}, {.addr=0xc670, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xc671, .a=0x80, .x=0xf4, .y=0x0a, .sp=0x86, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xfd}, {.addr=0xc66f, .value=0xa4}, {.addr=0xc670, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc66f, .value=0xa4, .type=IO_READ},
        {.addr=0xc670, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x3961, .a=0x09, .x=0x63, .y=0x07, .sp=0xdc, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xf5}, {.addr=0x3961, .value=0xa4}, {.addr=0x3962, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x3963, .a=0x14, .x=0x63, .y=0x07, .sp=0xdc, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xf5}, {.addr=0x3961, .value=0xa4}, {.addr=0x3962, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3961, .value=0xa4, .type=IO_READ},
        {.addr=0x3962, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x58d1, .a=0xc1, .x=0x0b, .y=0x68, .sp=0x34, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x17}, {.addr=0x58d1, .value=0xa4}, {.addr=0x58d2, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x58d3, .a=0xaa, .x=0x0b, .y=0x68, .sp=0x34, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x17}, {.addr=0x58d1, .value=0xa4}, {.addr=0x58d2, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x58d1, .value=0xa4, .type=IO_READ},
        {.addr=0x58d2, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x0cc8, .a=0x6f, .x=0xaf, .y=0xcf, .sp=0xb7, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xa5}, {.addr=0x0cc8, .value=0xa4}, {.addr=0x0cc9, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x0cca, .a=0xca, .x=0xaf, .y=0xcf, .sp=0xb7, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xa5}, {.addr=0x0cc8, .value=0xa4}, {.addr=0x0cc9, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cc8, .value=0xa4, .type=IO_READ},
        {.addr=0x0cc9, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x3718, .a=0x59, .x=0x34, .y=0xad, .sp=0xe9, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xd6}, {.addr=0x3718, .value=0xa4}, {.addr=0x3719, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x371a, .a=0x82, .x=0x34, .y=0xad, .sp=0xe9, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xd6}, {.addr=0x3718, .value=0xa4}, {.addr=0x3719, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3718, .value=0xa4, .type=IO_READ},
        {.addr=0x3719, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xa87c, .a=0x96, .x=0x2f, .y=0xeb, .sp=0x2a, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x6e}, {.addr=0xa87c, .value=0xa4}, {.addr=0xa87d, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xa87e, .a=0x28, .x=0x2f, .y=0xeb, .sp=0x2a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x6e}, {.addr=0xa87c, .value=0xa4}, {.addr=0xa87d, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xa87c, .value=0xa4, .type=IO_READ},
        {.addr=0xa87d, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xa416, .a=0xb5, .x=0x6c, .y=0xa4, .sp=0x43, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x16}, {.addr=0xa416, .value=0xa4}, {.addr=0xa417, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xa418, .a=0x9f, .x=0x6c, .y=0xa4, .sp=0x43, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x16}, {.addr=0xa416, .value=0xa4}, {.addr=0xa417, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa416, .value=0xa4, .type=IO_READ},
        {.addr=0xa417, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x2d65, .a=0x32, .x=0x79, .y=0x74, .sp=0xd4, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x4e}, {.addr=0x2d65, .value=0xa4}, {.addr=0x2d66, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x2d67, .a=0xe3, .x=0x79, .y=0x74, .sp=0xd4, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x4e}, {.addr=0x2d65, .value=0xa4}, {.addr=0x2d66, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d65, .value=0xa4, .type=IO_READ},
        {.addr=0x2d66, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xeac7, .a=0x4b, .x=0xeb, .y=0x28, .sp=0x96, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x34}, {.addr=0xeac7, .value=0xa4}, {.addr=0xeac8, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xeac9, .a=0x17, .x=0xeb, .y=0x28, .sp=0x96, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x34}, {.addr=0xeac7, .value=0xa4}, {.addr=0xeac8, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xeac7, .value=0xa4, .type=IO_READ},
        {.addr=0xeac8, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x0744, .a=0xd4, .x=0xed, .y=0x67, .sp=0x4c, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xc9}, {.addr=0x0744, .value=0xa4}, {.addr=0x0745, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x0746, .a=0x0b, .x=0xed, .y=0x67, .sp=0x4c, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xc9}, {.addr=0x0744, .value=0xa4}, {.addr=0x0745, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x0744, .value=0xa4, .type=IO_READ},
        {.addr=0x0745, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x145c, .a=0x93, .x=0xcd, .y=0x8c, .sp=0xfb, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xd5}, {.addr=0x145c, .value=0xa4}, {.addr=0x145d, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x145e, .a=0xbd, .x=0xcd, .y=0x8c, .sp=0xfb, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xd5}, {.addr=0x145c, .value=0xa4}, {.addr=0x145d, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x145c, .value=0xa4, .type=IO_READ},
        {.addr=0x145d, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x830e, .a=0x63, .x=0x46, .y=0x77, .sp=0xca, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x3c}, {.addr=0x830e, .value=0xa4}, {.addr=0x830f, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x8310, .a=0x26, .x=0x46, .y=0x77, .sp=0xca, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x3c}, {.addr=0x830e, .value=0xa4}, {.addr=0x830f, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x830e, .value=0xa4, .type=IO_READ},
        {.addr=0x830f, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x692f, .a=0xe2, .x=0x0e, .y=0xbe, .sp=0xbb, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x73}, {.addr=0x692f, .value=0xa4}, {.addr=0x6930, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x6931, .a=0x6e, .x=0x0e, .y=0xbe, .sp=0xbb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x73}, {.addr=0x692f, .value=0xa4}, {.addr=0x6930, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x692f, .value=0xa4, .type=IO_READ},
        {.addr=0x6930, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xcae6, .a=0xf4, .x=0x76, .y=0x28, .sp=0x88, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x63}, {.addr=0xcae6, .value=0xa4}, {.addr=0xcae7, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xcae8, .a=0x90, .x=0x76, .y=0x28, .sp=0x88, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x63}, {.addr=0xcae6, .value=0xa4}, {.addr=0xcae7, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xcae6, .value=0xa4, .type=IO_READ},
        {.addr=0xcae7, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xca48, .a=0x57, .x=0xcf, .y=0x39, .sp=0x4f, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x3a}, {.addr=0xca48, .value=0xa4}, {.addr=0xca49, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xca4a, .a=0x1c, .x=0xcf, .y=0x39, .sp=0x4f, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x3a}, {.addr=0xca48, .value=0xa4}, {.addr=0xca49, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xca48, .value=0xa4, .type=IO_READ},
        {.addr=0xca49, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x55fe, .a=0x0d, .x=0x40, .y=0xc1, .sp=0x38, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xab}, {.addr=0x55fe, .value=0xa4}, {.addr=0x55ff, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x5600, .a=0x62, .x=0x40, .y=0xc1, .sp=0x38, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xab}, {.addr=0x55fe, .value=0xa4}, {.addr=0x55ff, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x55fe, .value=0xa4, .type=IO_READ},
        {.addr=0x55ff, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x61bd, .a=0x0c, .x=0x49, .y=0xcc, .sp=0x85, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x2f}, {.addr=0x61bd, .value=0xa4}, {.addr=0x61be, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x61bf, .a=0xdc, .x=0x49, .y=0xcc, .sp=0x85, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x2f}, {.addr=0x61bd, .value=0xa4}, {.addr=0x61be, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x61bd, .value=0xa4, .type=IO_READ},
        {.addr=0x61be, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xe907, .a=0x47, .x=0xf1, .y=0x1a, .sp=0x03, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x8b}, {.addr=0xe907, .value=0xa4}, {.addr=0xe908, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xe909, .a=0xbc, .x=0xf1, .y=0x1a, .sp=0x03, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x8b}, {.addr=0xe907, .value=0xa4}, {.addr=0xe908, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe907, .value=0xa4, .type=IO_READ},
        {.addr=0xe908, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xdae2, .a=0x0d, .x=0xf1, .y=0x39, .sp=0x31, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x2b}, {.addr=0xdae2, .value=0xa4}, {.addr=0xdae3, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xdae4, .a=0xe1, .x=0xf1, .y=0x39, .sp=0x31, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x2b}, {.addr=0xdae2, .value=0xa4}, {.addr=0xdae3, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdae2, .value=0xa4, .type=IO_READ},
        {.addr=0xdae3, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xd876, .a=0x8c, .x=0x1e, .y=0xdc, .sp=0x74, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xb3}, {.addr=0xd876, .value=0xa4}, {.addr=0xd877, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xd878, .a=0xd9, .x=0x1e, .y=0xdc, .sp=0x74, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xb3}, {.addr=0xd876, .value=0xa4}, {.addr=0xd877, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xd876, .value=0xa4, .type=IO_READ},
        {.addr=0xd877, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x4a95, .a=0xbf, .x=0x3d, .y=0x63, .sp=0x4c, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x91}, {.addr=0x4a95, .value=0xa4}, {.addr=0x4a96, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x4a97, .a=0x2d, .x=0x3d, .y=0x63, .sp=0x4c, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x91}, {.addr=0x4a95, .value=0xa4}, {.addr=0x4a96, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a95, .value=0xa4, .type=IO_READ},
        {.addr=0x4a96, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xae61, .a=0x45, .x=0x5c, .y=0x1d, .sp=0x98, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xfd}, {.addr=0xae61, .value=0xa4}, {.addr=0xae62, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xae63, .a=0x48, .x=0x5c, .y=0x1d, .sp=0x98, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xfd}, {.addr=0xae61, .value=0xa4}, {.addr=0xae62, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xae61, .value=0xa4, .type=IO_READ},
        {.addr=0xae62, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x57c4, .a=0x56, .x=0x74, .y=0x7a, .sp=0x67, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xb5}, {.addr=0x57c4, .value=0xa4}, {.addr=0x57c5, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x57c6, .a=0xa0, .x=0x74, .y=0x7a, .sp=0x67, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xb5}, {.addr=0x57c4, .value=0xa4}, {.addr=0x57c5, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x57c4, .value=0xa4, .type=IO_READ},
        {.addr=0x57c5, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3e31, .a=0xfb, .x=0xaa, .y=0x0c, .sp=0x6d, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x1c}, {.addr=0x3e31, .value=0xa4}, {.addr=0x3e32, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x3e33, .a=0xde, .x=0xaa, .y=0x0c, .sp=0x6d, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x1c}, {.addr=0x3e31, .value=0xa4}, {.addr=0x3e32, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e31, .value=0xa4, .type=IO_READ},
        {.addr=0x3e32, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x3456, .a=0x2a, .x=0x41, .y=0xe2, .sp=0x68, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x9b}, {.addr=0x3456, .value=0xa4}, {.addr=0x3457, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x3458, .a=0x8f, .x=0x41, .y=0xe2, .sp=0x68, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x9b}, {.addr=0x3456, .value=0xa4}, {.addr=0x3457, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x3456, .value=0xa4, .type=IO_READ},
        {.addr=0x3457, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x1730, .a=0xe7, .x=0xab, .y=0x2d, .sp=0x79, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0xa4}, {.addr=0x1730, .value=0xa4}, {.addr=0x1731, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x1732, .a=0x42, .x=0xab, .y=0x2d, .sp=0x79, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0xa4}, {.addr=0x1730, .value=0xa4}, {.addr=0x1731, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x1730, .value=0xa4, .type=IO_READ},
        {.addr=0x1731, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x63e0, .a=0xdb, .x=0x51, .y=0xbc, .sp=0x4f, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xbc}, {.addr=0x63e0, .value=0xa4}, {.addr=0x63e1, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x63e2, .a=0x1e, .x=0x51, .y=0xbc, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xbc}, {.addr=0x63e0, .value=0xa4}, {.addr=0x63e1, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e0, .value=0xa4, .type=IO_READ},
        {.addr=0x63e1, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x614b, .a=0x54, .x=0x83, .y=0x93, .sp=0xf2, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x2f}, {.addr=0x614b, .value=0xa4}, {.addr=0x614c, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x614d, .a=0x25, .x=0x83, .y=0x93, .sp=0xf2, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x2f}, {.addr=0x614b, .value=0xa4}, {.addr=0x614c, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x614b, .value=0xa4, .type=IO_READ},
        {.addr=0x614c, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x147f, .a=0x9f, .x=0xf6, .y=0x21, .sp=0x44, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x9f}, {.addr=0x147f, .value=0xa4}, {.addr=0x1480, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x1481, .a=0xff, .x=0xf6, .y=0x21, .sp=0x44, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x9f}, {.addr=0x147f, .value=0xa4}, {.addr=0x1480, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x147f, .value=0xa4, .type=IO_READ},
        {.addr=0x1480, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x47f8, .a=0xbc, .x=0x41, .y=0x56, .sp=0x50, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x46}, {.addr=0x47f8, .value=0xa4}, {.addr=0x47f9, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x47fa, .a=0x75, .x=0x41, .y=0x56, .sp=0x50, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x46}, {.addr=0x47f8, .value=0xa4}, {.addr=0x47f9, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x47f8, .value=0xa4, .type=IO_READ},
        {.addr=0x47f9, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xe7ea, .a=0xf8, .x=0xb1, .y=0xb6, .sp=0x53, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xf2}, {.addr=0xe7ea, .value=0xa4}, {.addr=0xe7eb, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xe7ec, .a=0x05, .x=0xb1, .y=0xb6, .sp=0x53, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xf2}, {.addr=0xe7ea, .value=0xa4}, {.addr=0xe7eb, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7ea, .value=0xa4, .type=IO_READ},
        {.addr=0xe7eb, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x834b, .a=0x3b, .x=0x29, .y=0x5d, .sp=0xf8, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x6b}, {.addr=0x834b, .value=0xa4}, {.addr=0x834c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x834d, .a=0xcf, .x=0x29, .y=0x5d, .sp=0xf8, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x6b}, {.addr=0x834b, .value=0xa4}, {.addr=0x834c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x834b, .value=0xa4, .type=IO_READ},
        {.addr=0x834c, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x3db6, .a=0x27, .x=0x50, .y=0x5b, .sp=0x33, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xa4}, {.addr=0x3db6, .value=0xa4}, {.addr=0x3db7, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x3db8, .a=0x83, .x=0x50, .y=0x5b, .sp=0x33, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xa4}, {.addr=0x3db6, .value=0xa4}, {.addr=0x3db7, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3db6, .value=0xa4, .type=IO_READ},
        {.addr=0x3db7, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb97d, .a=0xf5, .x=0x91, .y=0x89, .sp=0x4e, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x20}, {.addr=0xb97d, .value=0xa4}, {.addr=0xb97e, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xb97f, .a=0xd5, .x=0x91, .y=0x89, .sp=0x4e, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x20}, {.addr=0xb97d, .value=0xa4}, {.addr=0xb97e, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xb97d, .value=0xa4, .type=IO_READ},
        {.addr=0xb97e, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_A4, _A4_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xbc64, .a=0xe3, .x=0x5d, .y=0x77, .sp=0x5f, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xba}, {.addr=0xbc64, .value=0xa4}, {.addr=0xbc65, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xbc66, .a=0x28, .x=0x5d, .y=0x77, .sp=0x5f, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xba}, {.addr=0xbc64, .value=0xa4}, {.addr=0xbc65, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc64, .value=0xa4, .type=IO_READ},
        {.addr=0xbc65, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("A4 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
