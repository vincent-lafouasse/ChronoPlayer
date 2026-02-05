#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_E4, _E4_0000) {
    const struct CPU_State initial_cpu = {.pc=0xc7dd, .a=0x9f, .x=0xc6, .y=0xe9, .sp=0x35, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x0f}, {.addr=0xc7dd, .value=0xe4}, {.addr=0xc7de, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xc7df, .a=0x0f, .x=0xc6, .y=0xe9, .sp=0x35, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x0f}, {.addr=0xc7dd, .value=0xe4}, {.addr=0xc7de, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7dd, .value=0xe4, .type=IO_READ},
        {.addr=0xc7de, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0001) {
    const struct CPU_State initial_cpu = {.pc=0xfd8e, .a=0xec, .x=0x4c, .y=0x32, .sp=0x90, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xf4}, {.addr=0xfd8e, .value=0xe4}, {.addr=0xfd8f, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xfd90, .a=0xf4, .x=0x4c, .y=0x32, .sp=0x90, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xf4}, {.addr=0xfd8e, .value=0xe4}, {.addr=0xfd8f, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd8e, .value=0xe4, .type=IO_READ},
        {.addr=0xfd8f, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0002) {
    const struct CPU_State initial_cpu = {.pc=0x9a68, .a=0x61, .x=0x84, .y=0x6c, .sp=0x10, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x0f}, {.addr=0x9a68, .value=0xe4}, {.addr=0x9a69, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x9a6a, .a=0x0f, .x=0x84, .y=0x6c, .sp=0x10, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x0f}, {.addr=0x9a68, .value=0xe4}, {.addr=0x9a69, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a68, .value=0xe4, .type=IO_READ},
        {.addr=0x9a69, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0003) {
    const struct CPU_State initial_cpu = {.pc=0x5c50, .a=0x58, .x=0xa0, .y=0xd5, .sp=0x3c, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x73}, {.addr=0x5c50, .value=0xe4}, {.addr=0x5c51, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x5c52, .a=0x73, .x=0xa0, .y=0xd5, .sp=0x3c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x73}, {.addr=0x5c50, .value=0xe4}, {.addr=0x5c51, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c50, .value=0xe4, .type=IO_READ},
        {.addr=0x5c51, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0004) {
    const struct CPU_State initial_cpu = {.pc=0x7e4d, .a=0x87, .x=0xc1, .y=0x89, .sp=0x4d, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xb1}, {.addr=0x7e4d, .value=0xe4}, {.addr=0x7e4e, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x7e4f, .a=0xb1, .x=0xc1, .y=0x89, .sp=0x4d, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xb1}, {.addr=0x7e4d, .value=0xe4}, {.addr=0x7e4e, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e4d, .value=0xe4, .type=IO_READ},
        {.addr=0x7e4e, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0005) {
    const struct CPU_State initial_cpu = {.pc=0x02fb, .a=0x4d, .x=0x9a, .y=0xa2, .sp=0x65, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x0c}, {.addr=0x02fb, .value=0xe4}, {.addr=0x02fc, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x02fd, .a=0x0c, .x=0x9a, .y=0xa2, .sp=0x65, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x0c}, {.addr=0x02fb, .value=0xe4}, {.addr=0x02fc, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x02fb, .value=0xe4, .type=IO_READ},
        {.addr=0x02fc, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0006) {
    const struct CPU_State initial_cpu = {.pc=0xc780, .a=0x0b, .x=0x65, .y=0x4f, .sp=0x0e, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x62}, {.addr=0xc780, .value=0xe4}, {.addr=0xc781, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xc782, .a=0x62, .x=0x65, .y=0x4f, .sp=0x0e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x62}, {.addr=0xc780, .value=0xe4}, {.addr=0xc781, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xc780, .value=0xe4, .type=IO_READ},
        {.addr=0xc781, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0007) {
    const struct CPU_State initial_cpu = {.pc=0x7656, .a=0x40, .x=0x68, .y=0x23, .sp=0xd3, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x69}, {.addr=0x7656, .value=0xe4}, {.addr=0x7657, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x7658, .a=0x69, .x=0x68, .y=0x23, .sp=0xd3, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x69}, {.addr=0x7656, .value=0xe4}, {.addr=0x7657, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x7656, .value=0xe4, .type=IO_READ},
        {.addr=0x7657, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0008) {
    const struct CPU_State initial_cpu = {.pc=0x137d, .a=0xfc, .x=0xfe, .y=0xe8, .sp=0xec, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x38}, {.addr=0x137d, .value=0xe4}, {.addr=0x137e, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x137f, .a=0x38, .x=0xfe, .y=0xe8, .sp=0xec, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x38}, {.addr=0x137d, .value=0xe4}, {.addr=0x137e, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x137d, .value=0xe4, .type=IO_READ},
        {.addr=0x137e, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb9bf, .a=0x2b, .x=0x5c, .y=0x57, .sp=0x87, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x39}, {.addr=0xb9bf, .value=0xe4}, {.addr=0xb9c0, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xb9c1, .a=0x39, .x=0x5c, .y=0x57, .sp=0x87, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x39}, {.addr=0xb9bf, .value=0xe4}, {.addr=0xb9c0, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9bf, .value=0xe4, .type=IO_READ},
        {.addr=0xb9c0, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000A) {
    const struct CPU_State initial_cpu = {.pc=0xc037, .a=0x41, .x=0xf3, .y=0x5f, .sp=0xe2, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x11}, {.addr=0xc037, .value=0xe4}, {.addr=0xc038, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xc039, .a=0x11, .x=0xf3, .y=0x5f, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x11}, {.addr=0xc037, .value=0xe4}, {.addr=0xc038, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc037, .value=0xe4, .type=IO_READ},
        {.addr=0xc038, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000B) {
    const struct CPU_State initial_cpu = {.pc=0x7d4b, .a=0xcf, .x=0x7f, .y=0xdd, .sp=0xda, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0xf2}, {.addr=0x7d4b, .value=0xe4}, {.addr=0x7d4c, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x7d4d, .a=0xf2, .x=0x7f, .y=0xdd, .sp=0xda, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0xf2}, {.addr=0x7d4b, .value=0xe4}, {.addr=0x7d4c, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d4b, .value=0xe4, .type=IO_READ},
        {.addr=0x7d4c, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000C) {
    const struct CPU_State initial_cpu = {.pc=0x0820, .a=0xdd, .x=0xf2, .y=0x4b, .sp=0x8c, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xb5}, {.addr=0x0820, .value=0xe4}, {.addr=0x0821, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0xb5, .x=0xf2, .y=0x4b, .sp=0x8c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xb5}, {.addr=0x0820, .value=0xe4}, {.addr=0x0821, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x0820, .value=0xe4, .type=IO_READ},
        {.addr=0x0821, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000D) {
    const struct CPU_State initial_cpu = {.pc=0x592a, .a=0x0c, .x=0x53, .y=0x51, .sp=0xe7, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x20}, {.addr=0x592a, .value=0xe4}, {.addr=0x592b, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x592c, .a=0x20, .x=0x53, .y=0x51, .sp=0xe7, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x20}, {.addr=0x592a, .value=0xe4}, {.addr=0x592b, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x592a, .value=0xe4, .type=IO_READ},
        {.addr=0x592b, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000E) {
    const struct CPU_State initial_cpu = {.pc=0xe50d, .a=0x4f, .x=0x16, .y=0xb1, .sp=0x9e, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xf1}, {.addr=0xe50d, .value=0xe4}, {.addr=0xe50e, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xe50f, .a=0xf1, .x=0x16, .y=0xb1, .sp=0x9e, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xf1}, {.addr=0xe50d, .value=0xe4}, {.addr=0xe50e, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe50d, .value=0xe4, .type=IO_READ},
        {.addr=0xe50e, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_000F) {
    const struct CPU_State initial_cpu = {.pc=0x5284, .a=0x03, .x=0x6a, .y=0xd1, .sp=0x3f, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x69}, {.addr=0x5284, .value=0xe4}, {.addr=0x5285, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x5286, .a=0x69, .x=0x6a, .y=0xd1, .sp=0x3f, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x69}, {.addr=0x5284, .value=0xe4}, {.addr=0x5285, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5284, .value=0xe4, .type=IO_READ},
        {.addr=0x5285, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0010) {
    const struct CPU_State initial_cpu = {.pc=0xbbc4, .a=0x50, .x=0xfd, .y=0xc1, .sp=0xb8, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x8a}, {.addr=0xbbc4, .value=0xe4}, {.addr=0xbbc5, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xbbc6, .a=0x8a, .x=0xfd, .y=0xc1, .sp=0xb8, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x8a}, {.addr=0xbbc4, .value=0xe4}, {.addr=0xbbc5, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbc4, .value=0xe4, .type=IO_READ},
        {.addr=0xbbc5, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0011) {
    const struct CPU_State initial_cpu = {.pc=0x11ee, .a=0x3d, .x=0x73, .y=0x73, .sp=0xab, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x3d}, {.addr=0x11ee, .value=0xe4}, {.addr=0x11ef, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x11f0, .a=0x3d, .x=0x73, .y=0x73, .sp=0xab, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x3d}, {.addr=0x11ee, .value=0xe4}, {.addr=0x11ef, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x11ee, .value=0xe4, .type=IO_READ},
        {.addr=0x11ef, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0012) {
    const struct CPU_State initial_cpu = {.pc=0xb02c, .a=0x06, .x=0xf2, .y=0xbd, .sp=0x85, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xf6}, {.addr=0xb02c, .value=0xe4}, {.addr=0xb02d, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xb02e, .a=0xf6, .x=0xf2, .y=0xbd, .sp=0x85, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xf6}, {.addr=0xb02c, .value=0xe4}, {.addr=0xb02d, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xb02c, .value=0xe4, .type=IO_READ},
        {.addr=0xb02d, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0013) {
    const struct CPU_State initial_cpu = {.pc=0x5379, .a=0x5b, .x=0xec, .y=0xd2, .sp=0x73, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xa4}, {.addr=0x5379, .value=0xe4}, {.addr=0x537a, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x537b, .a=0xa4, .x=0xec, .y=0xd2, .sp=0x73, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xa4}, {.addr=0x5379, .value=0xe4}, {.addr=0x537a, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x5379, .value=0xe4, .type=IO_READ},
        {.addr=0x537a, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0014) {
    const struct CPU_State initial_cpu = {.pc=0xc38e, .a=0x5b, .x=0xd0, .y=0x50, .sp=0x44, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x4c}, {.addr=0xc38e, .value=0xe4}, {.addr=0xc38f, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xc390, .a=0x4c, .x=0xd0, .y=0x50, .sp=0x44, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x4c}, {.addr=0xc38e, .value=0xe4}, {.addr=0xc38f, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc38e, .value=0xe4, .type=IO_READ},
        {.addr=0xc38f, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0015) {
    const struct CPU_State initial_cpu = {.pc=0xcf2a, .a=0x59, .x=0x65, .y=0x68, .sp=0x79, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x4b}, {.addr=0xcf2a, .value=0xe4}, {.addr=0xcf2b, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xcf2c, .a=0x4b, .x=0x65, .y=0x68, .sp=0x79, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x4b}, {.addr=0xcf2a, .value=0xe4}, {.addr=0xcf2b, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf2a, .value=0xe4, .type=IO_READ},
        {.addr=0xcf2b, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0016) {
    const struct CPU_State initial_cpu = {.pc=0xb001, .a=0xba, .x=0x04, .y=0x8d, .sp=0x33, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0xdf}, {.addr=0xb001, .value=0xe4}, {.addr=0xb002, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xb003, .a=0xdf, .x=0x04, .y=0x8d, .sp=0x33, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0xdf}, {.addr=0xb001, .value=0xe4}, {.addr=0xb002, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb001, .value=0xe4, .type=IO_READ},
        {.addr=0xb002, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0017) {
    const struct CPU_State initial_cpu = {.pc=0xf983, .a=0x54, .x=0x9b, .y=0x02, .sp=0xd2, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x2d}, {.addr=0xf983, .value=0xe4}, {.addr=0xf984, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xf985, .a=0x2d, .x=0x9b, .y=0x02, .sp=0xd2, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x2d}, {.addr=0xf983, .value=0xe4}, {.addr=0xf984, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xf983, .value=0xe4, .type=IO_READ},
        {.addr=0xf984, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0018) {
    const struct CPU_State initial_cpu = {.pc=0x0308, .a=0xd8, .x=0x35, .y=0xc3, .sp=0x66, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xb3}, {.addr=0x0308, .value=0xe4}, {.addr=0x0309, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x030a, .a=0xb3, .x=0x35, .y=0xc3, .sp=0x66, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xb3}, {.addr=0x0308, .value=0xe4}, {.addr=0x0309, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x0308, .value=0xe4, .type=IO_READ},
        {.addr=0x0309, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0019) {
    const struct CPU_State initial_cpu = {.pc=0x9183, .a=0xfb, .x=0x29, .y=0x1b, .sp=0x9e, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x62}, {.addr=0x9183, .value=0xe4}, {.addr=0x9184, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x9185, .a=0x62, .x=0x29, .y=0x1b, .sp=0x9e, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x62}, {.addr=0x9183, .value=0xe4}, {.addr=0x9184, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x9183, .value=0xe4, .type=IO_READ},
        {.addr=0x9184, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001A) {
    const struct CPU_State initial_cpu = {.pc=0x3cf0, .a=0x0e, .x=0xfd, .y=0xd5, .sp=0x17, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xab}, {.addr=0x3cf0, .value=0xe4}, {.addr=0x3cf1, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x3cf2, .a=0xab, .x=0xfd, .y=0xd5, .sp=0x17, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xab}, {.addr=0x3cf0, .value=0xe4}, {.addr=0x3cf1, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cf0, .value=0xe4, .type=IO_READ},
        {.addr=0x3cf1, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001B) {
    const struct CPU_State initial_cpu = {.pc=0xc964, .a=0x86, .x=0xdc, .y=0xde, .sp=0x67, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x14}, {.addr=0xc964, .value=0xe4}, {.addr=0xc965, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xc966, .a=0x14, .x=0xdc, .y=0xde, .sp=0x67, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x14}, {.addr=0xc964, .value=0xe4}, {.addr=0xc965, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xc964, .value=0xe4, .type=IO_READ},
        {.addr=0xc965, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001C) {
    const struct CPU_State initial_cpu = {.pc=0x45b6, .a=0xbd, .x=0xc4, .y=0x05, .sp=0x10, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x7e}, {.addr=0x45b6, .value=0xe4}, {.addr=0x45b7, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x45b8, .a=0x7e, .x=0xc4, .y=0x05, .sp=0x10, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x7e}, {.addr=0x45b6, .value=0xe4}, {.addr=0x45b7, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x45b6, .value=0xe4, .type=IO_READ},
        {.addr=0x45b7, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001D) {
    const struct CPU_State initial_cpu = {.pc=0x5d67, .a=0xa8, .x=0x6d, .y=0xf5, .sp=0x4e, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xc5}, {.addr=0x5d67, .value=0xe4}, {.addr=0x5d68, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x5d69, .a=0xc5, .x=0x6d, .y=0xf5, .sp=0x4e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xc5}, {.addr=0x5d67, .value=0xe4}, {.addr=0x5d68, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d67, .value=0xe4, .type=IO_READ},
        {.addr=0x5d68, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001E) {
    const struct CPU_State initial_cpu = {.pc=0x0df7, .a=0x6d, .x=0xf7, .y=0xfc, .sp=0x7b, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x65}, {.addr=0x0df7, .value=0xe4}, {.addr=0x0df8, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x0df9, .a=0x65, .x=0xf7, .y=0xfc, .sp=0x7b, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x65}, {.addr=0x0df7, .value=0xe4}, {.addr=0x0df8, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x0df7, .value=0xe4, .type=IO_READ},
        {.addr=0x0df8, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_001F) {
    const struct CPU_State initial_cpu = {.pc=0xdcc0, .a=0xdb, .x=0x63, .y=0x1d, .sp=0xf9, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x12}, {.addr=0xdcc0, .value=0xe4}, {.addr=0xdcc1, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xdcc2, .a=0x12, .x=0x63, .y=0x1d, .sp=0xf9, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x12}, {.addr=0xdcc0, .value=0xe4}, {.addr=0xdcc1, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcc0, .value=0xe4, .type=IO_READ},
        {.addr=0xdcc1, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0020) {
    const struct CPU_State initial_cpu = {.pc=0x312b, .a=0x2a, .x=0x52, .y=0xfc, .sp=0xe5, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x29}, {.addr=0x312b, .value=0xe4}, {.addr=0x312c, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x312d, .a=0x29, .x=0x52, .y=0xfc, .sp=0xe5, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x29}, {.addr=0x312b, .value=0xe4}, {.addr=0x312c, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x312b, .value=0xe4, .type=IO_READ},
        {.addr=0x312c, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0021) {
    const struct CPU_State initial_cpu = {.pc=0xa0eb, .a=0xd8, .x=0x1d, .y=0x32, .sp=0xab, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x91}, {.addr=0xa0eb, .value=0xe4}, {.addr=0xa0ec, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xa0ed, .a=0x91, .x=0x1d, .y=0x32, .sp=0xab, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x91}, {.addr=0xa0eb, .value=0xe4}, {.addr=0xa0ec, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0eb, .value=0xe4, .type=IO_READ},
        {.addr=0xa0ec, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0022) {
    const struct CPU_State initial_cpu = {.pc=0xd0a5, .a=0x7b, .x=0x92, .y=0x8c, .sp=0xd2, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0xf3}, {.addr=0xd0a5, .value=0xe4}, {.addr=0xd0a6, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xd0a7, .a=0xf3, .x=0x92, .y=0x8c, .sp=0xd2, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0xf3}, {.addr=0xd0a5, .value=0xe4}, {.addr=0xd0a6, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0a5, .value=0xe4, .type=IO_READ},
        {.addr=0xd0a6, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0023) {
    const struct CPU_State initial_cpu = {.pc=0x8b38, .a=0x00, .x=0xab, .y=0xfe, .sp=0x66, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x06}, {.addr=0x8b38, .value=0xe4}, {.addr=0x8b39, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x8b3a, .a=0x06, .x=0xab, .y=0xfe, .sp=0x66, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x06}, {.addr=0x8b38, .value=0xe4}, {.addr=0x8b39, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b38, .value=0xe4, .type=IO_READ},
        {.addr=0x8b39, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0024) {
    const struct CPU_State initial_cpu = {.pc=0x77b8, .a=0xf3, .x=0xb5, .y=0x9a, .sp=0xd6, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x75}, {.addr=0x77b8, .value=0xe4}, {.addr=0x77b9, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x77ba, .a=0x75, .x=0xb5, .y=0x9a, .sp=0xd6, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x75}, {.addr=0x77b8, .value=0xe4}, {.addr=0x77b9, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x77b8, .value=0xe4, .type=IO_READ},
        {.addr=0x77b9, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0025) {
    const struct CPU_State initial_cpu = {.pc=0xfd29, .a=0x1c, .x=0xa0, .y=0xf9, .sp=0x9f, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xee}, {.addr=0xfd29, .value=0xe4}, {.addr=0xfd2a, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xfd2b, .a=0xee, .x=0xa0, .y=0xf9, .sp=0x9f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xee}, {.addr=0xfd29, .value=0xe4}, {.addr=0xfd2a, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd29, .value=0xe4, .type=IO_READ},
        {.addr=0xfd2a, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0026) {
    const struct CPU_State initial_cpu = {.pc=0xf270, .a=0xcd, .x=0x2e, .y=0xd4, .sp=0x16, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x8a}, {.addr=0xf270, .value=0xe4}, {.addr=0xf271, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xf272, .a=0x8a, .x=0x2e, .y=0xd4, .sp=0x16, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x8a}, {.addr=0xf270, .value=0xe4}, {.addr=0xf271, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xf270, .value=0xe4, .type=IO_READ},
        {.addr=0xf271, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0027) {
    const struct CPU_State initial_cpu = {.pc=0xecab, .a=0xb6, .x=0x56, .y=0x4b, .sp=0xa5, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x46}, {.addr=0xecab, .value=0xe4}, {.addr=0xecac, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xecad, .a=0x46, .x=0x56, .y=0x4b, .sp=0xa5, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x46}, {.addr=0xecab, .value=0xe4}, {.addr=0xecac, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xecab, .value=0xe4, .type=IO_READ},
        {.addr=0xecac, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0028) {
    const struct CPU_State initial_cpu = {.pc=0x7e96, .a=0xd5, .x=0xbc, .y=0xe9, .sp=0x20, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xd3}, {.addr=0x7e96, .value=0xe4}, {.addr=0x7e97, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x7e98, .a=0xd3, .x=0xbc, .y=0xe9, .sp=0x20, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xd3}, {.addr=0x7e96, .value=0xe4}, {.addr=0x7e97, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e96, .value=0xe4, .type=IO_READ},
        {.addr=0x7e97, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0029) {
    const struct CPU_State initial_cpu = {.pc=0x6c4a, .a=0x5c, .x=0xba, .y=0x32, .sp=0x88, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xc3}, {.addr=0x6c4a, .value=0xe4}, {.addr=0x6c4b, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x6c4c, .a=0xc3, .x=0xba, .y=0x32, .sp=0x88, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xc3}, {.addr=0x6c4a, .value=0xe4}, {.addr=0x6c4b, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c4a, .value=0xe4, .type=IO_READ},
        {.addr=0x6c4b, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1d85, .a=0x72, .x=0x1e, .y=0xf6, .sp=0x71, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x8f}, {.addr=0x1d85, .value=0xe4}, {.addr=0x1d86, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x1d87, .a=0x8f, .x=0x1e, .y=0xf6, .sp=0x71, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x8f}, {.addr=0x1d85, .value=0xe4}, {.addr=0x1d86, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d85, .value=0xe4, .type=IO_READ},
        {.addr=0x1d86, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002B) {
    const struct CPU_State initial_cpu = {.pc=0x4077, .a=0x89, .x=0x93, .y=0xb8, .sp=0x12, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xc1}, {.addr=0x4077, .value=0xe4}, {.addr=0x4078, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x4079, .a=0xc1, .x=0x93, .y=0xb8, .sp=0x12, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xc1}, {.addr=0x4077, .value=0xe4}, {.addr=0x4078, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4077, .value=0xe4, .type=IO_READ},
        {.addr=0x4078, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002C) {
    const struct CPU_State initial_cpu = {.pc=0x93b1, .a=0x55, .x=0x97, .y=0x0c, .sp=0xe1, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x07}, {.addr=0x93b1, .value=0xe4}, {.addr=0x93b2, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x93b3, .a=0x07, .x=0x97, .y=0x0c, .sp=0xe1, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x07}, {.addr=0x93b1, .value=0xe4}, {.addr=0x93b2, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x93b1, .value=0xe4, .type=IO_READ},
        {.addr=0x93b2, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002D) {
    const struct CPU_State initial_cpu = {.pc=0x11d4, .a=0x6d, .x=0xa2, .y=0x49, .sp=0xf0, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xc1}, {.addr=0x11d4, .value=0xe4}, {.addr=0x11d5, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x11d6, .a=0xc1, .x=0xa2, .y=0x49, .sp=0xf0, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xc1}, {.addr=0x11d4, .value=0xe4}, {.addr=0x11d5, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x11d4, .value=0xe4, .type=IO_READ},
        {.addr=0x11d5, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002E) {
    const struct CPU_State initial_cpu = {.pc=0x3fd1, .a=0xbc, .x=0x2c, .y=0x20, .sp=0xbf, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xc1}, {.addr=0x3fd1, .value=0xe4}, {.addr=0x3fd2, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x3fd3, .a=0xc1, .x=0x2c, .y=0x20, .sp=0xbf, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xc1}, {.addr=0x3fd1, .value=0xe4}, {.addr=0x3fd2, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fd1, .value=0xe4, .type=IO_READ},
        {.addr=0x3fd2, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_002F) {
    const struct CPU_State initial_cpu = {.pc=0x8b8b, .a=0x5e, .x=0x80, .y=0x54, .sp=0xe2, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0x1c}, {.addr=0x8b8b, .value=0xe4}, {.addr=0x8b8c, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x8b8d, .a=0x1c, .x=0x80, .y=0x54, .sp=0xe2, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0x1c}, {.addr=0x8b8b, .value=0xe4}, {.addr=0x8b8c, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b8b, .value=0xe4, .type=IO_READ},
        {.addr=0x8b8c, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0030) {
    const struct CPU_State initial_cpu = {.pc=0xece4, .a=0x38, .x=0x1b, .y=0x1d, .sp=0x77, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x8d}, {.addr=0xece4, .value=0xe4}, {.addr=0xece5, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xece6, .a=0x8d, .x=0x1b, .y=0x1d, .sp=0x77, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x8d}, {.addr=0xece4, .value=0xe4}, {.addr=0xece5, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xece4, .value=0xe4, .type=IO_READ},
        {.addr=0xece5, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0031) {
    const struct CPU_State initial_cpu = {.pc=0xc548, .a=0x37, .x=0xe5, .y=0xbb, .sp=0x5b, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x83}, {.addr=0xc548, .value=0xe4}, {.addr=0xc549, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xc54a, .a=0x83, .x=0xe5, .y=0xbb, .sp=0x5b, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x83}, {.addr=0xc548, .value=0xe4}, {.addr=0xc549, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc548, .value=0xe4, .type=IO_READ},
        {.addr=0xc549, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0032) {
    const struct CPU_State initial_cpu = {.pc=0x9c2d, .a=0xa8, .x=0x6a, .y=0x42, .sp=0xb2, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xae}, {.addr=0x9c2d, .value=0xe4}, {.addr=0x9c2e, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x9c2f, .a=0xae, .x=0x6a, .y=0x42, .sp=0xb2, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xae}, {.addr=0x9c2d, .value=0xe4}, {.addr=0x9c2e, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c2d, .value=0xe4, .type=IO_READ},
        {.addr=0x9c2e, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0033) {
    const struct CPU_State initial_cpu = {.pc=0x0d46, .a=0xa0, .x=0x7f, .y=0x42, .sp=0xdd, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x6f}, {.addr=0x0d46, .value=0xe4}, {.addr=0x0d47, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x0d48, .a=0x6f, .x=0x7f, .y=0x42, .sp=0xdd, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x6f}, {.addr=0x0d46, .value=0xe4}, {.addr=0x0d47, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d46, .value=0xe4, .type=IO_READ},
        {.addr=0x0d47, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0034) {
    const struct CPU_State initial_cpu = {.pc=0x7f98, .a=0x49, .x=0x0c, .y=0xac, .sp=0xfe, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xe9}, {.addr=0x7f98, .value=0xe4}, {.addr=0x7f99, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x7f9a, .a=0xe9, .x=0x0c, .y=0xac, .sp=0xfe, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xe9}, {.addr=0x7f98, .value=0xe4}, {.addr=0x7f99, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f98, .value=0xe4, .type=IO_READ},
        {.addr=0x7f99, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0035) {
    const struct CPU_State initial_cpu = {.pc=0x3a4d, .a=0x3b, .x=0xbf, .y=0x98, .sp=0x61, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xce}, {.addr=0x3a4d, .value=0xe4}, {.addr=0x3a4e, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x3a4f, .a=0xce, .x=0xbf, .y=0x98, .sp=0x61, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xce}, {.addr=0x3a4d, .value=0xe4}, {.addr=0x3a4e, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a4d, .value=0xe4, .type=IO_READ},
        {.addr=0x3a4e, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0036) {
    const struct CPU_State initial_cpu = {.pc=0xe49a, .a=0xf3, .x=0x8c, .y=0x40, .sp=0x53, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xe5}, {.addr=0xe49a, .value=0xe4}, {.addr=0xe49b, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xe49c, .a=0xe5, .x=0x8c, .y=0x40, .sp=0x53, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xe5}, {.addr=0xe49a, .value=0xe4}, {.addr=0xe49b, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe49a, .value=0xe4, .type=IO_READ},
        {.addr=0xe49b, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0037) {
    const struct CPU_State initial_cpu = {.pc=0xd94d, .a=0x42, .x=0x38, .y=0x95, .sp=0x51, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x9e}, {.addr=0xd94d, .value=0xe4}, {.addr=0xd94e, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xd94f, .a=0x9e, .x=0x38, .y=0x95, .sp=0x51, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x9e}, {.addr=0xd94d, .value=0xe4}, {.addr=0xd94e, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd94d, .value=0xe4, .type=IO_READ},
        {.addr=0xd94e, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0038) {
    const struct CPU_State initial_cpu = {.pc=0xd1be, .a=0x4b, .x=0xa8, .y=0x6c, .sp=0xa9, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x9b}, {.addr=0xd1be, .value=0xe4}, {.addr=0xd1bf, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c0, .a=0x9b, .x=0xa8, .y=0x6c, .sp=0xa9, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x9b}, {.addr=0xd1be, .value=0xe4}, {.addr=0xd1bf, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1be, .value=0xe4, .type=IO_READ},
        {.addr=0xd1bf, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0039) {
    const struct CPU_State initial_cpu = {.pc=0xbe49, .a=0x77, .x=0xff, .y=0xf3, .sp=0x1a, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x97}, {.addr=0xbe49, .value=0xe4}, {.addr=0xbe4a, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xbe4b, .a=0x97, .x=0xff, .y=0xf3, .sp=0x1a, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x97}, {.addr=0xbe49, .value=0xe4}, {.addr=0xbe4a, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe49, .value=0xe4, .type=IO_READ},
        {.addr=0xbe4a, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003A) {
    const struct CPU_State initial_cpu = {.pc=0x52f1, .a=0xcd, .x=0xc2, .y=0xfb, .sp=0xef, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x89}, {.addr=0x52f1, .value=0xe4}, {.addr=0x52f2, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x52f3, .a=0x89, .x=0xc2, .y=0xfb, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x89}, {.addr=0x52f1, .value=0xe4}, {.addr=0x52f2, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x52f1, .value=0xe4, .type=IO_READ},
        {.addr=0x52f2, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003B) {
    const struct CPU_State initial_cpu = {.pc=0x07e3, .a=0x93, .x=0xa4, .y=0xa3, .sp=0x1f, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xca}, {.addr=0x07e3, .value=0xe4}, {.addr=0x07e4, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x07e5, .a=0xca, .x=0xa4, .y=0xa3, .sp=0x1f, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xca}, {.addr=0x07e3, .value=0xe4}, {.addr=0x07e4, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x07e3, .value=0xe4, .type=IO_READ},
        {.addr=0x07e4, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003C) {
    const struct CPU_State initial_cpu = {.pc=0xc21a, .a=0x2e, .x=0xdc, .y=0x1e, .sp=0x3d, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x67}, {.addr=0xc21a, .value=0xe4}, {.addr=0xc21b, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xc21c, .a=0x67, .x=0xdc, .y=0x1e, .sp=0x3d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x67}, {.addr=0xc21a, .value=0xe4}, {.addr=0xc21b, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xc21a, .value=0xe4, .type=IO_READ},
        {.addr=0xc21b, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003D) {
    const struct CPU_State initial_cpu = {.pc=0x1aa0, .a=0x71, .x=0x32, .y=0x75, .sp=0x7e, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x68}, {.addr=0x1aa0, .value=0xe4}, {.addr=0x1aa1, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x1aa2, .a=0x68, .x=0x32, .y=0x75, .sp=0x7e, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x68}, {.addr=0x1aa0, .value=0xe4}, {.addr=0x1aa1, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aa0, .value=0xe4, .type=IO_READ},
        {.addr=0x1aa1, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003E) {
    const struct CPU_State initial_cpu = {.pc=0xfb6a, .a=0xbd, .x=0xab, .y=0xc7, .sp=0x07, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x6b}, {.addr=0xfb6a, .value=0xe4}, {.addr=0xfb6b, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xfb6c, .a=0x6b, .x=0xab, .y=0xc7, .sp=0x07, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x6b}, {.addr=0xfb6a, .value=0xe4}, {.addr=0xfb6b, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb6a, .value=0xe4, .type=IO_READ},
        {.addr=0xfb6b, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_003F) {
    const struct CPU_State initial_cpu = {.pc=0x7806, .a=0x2d, .x=0x19, .y=0x17, .sp=0x3d, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x8c}, {.addr=0x7806, .value=0xe4}, {.addr=0x7807, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x7808, .a=0x8c, .x=0x19, .y=0x17, .sp=0x3d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x8c}, {.addr=0x7806, .value=0xe4}, {.addr=0x7807, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x7806, .value=0xe4, .type=IO_READ},
        {.addr=0x7807, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0040) {
    const struct CPU_State initial_cpu = {.pc=0x9023, .a=0xda, .x=0x16, .y=0xda, .sp=0xb6, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xec}, {.addr=0x9023, .value=0xe4}, {.addr=0x9024, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x9025, .a=0xec, .x=0x16, .y=0xda, .sp=0xb6, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xec}, {.addr=0x9023, .value=0xe4}, {.addr=0x9024, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x9023, .value=0xe4, .type=IO_READ},
        {.addr=0x9024, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6447, .a=0xdb, .x=0x16, .y=0x19, .sp=0x7f, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x2d}, {.addr=0x6447, .value=0xe4}, {.addr=0x6448, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x6449, .a=0x2d, .x=0x16, .y=0x19, .sp=0x7f, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x2d}, {.addr=0x6447, .value=0xe4}, {.addr=0x6448, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6447, .value=0xe4, .type=IO_READ},
        {.addr=0x6448, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0042) {
    const struct CPU_State initial_cpu = {.pc=0x368b, .a=0x0c, .x=0x63, .y=0x76, .sp=0x7a, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x25}, {.addr=0x368b, .value=0xe4}, {.addr=0x368c, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x368d, .a=0x25, .x=0x63, .y=0x76, .sp=0x7a, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x25}, {.addr=0x368b, .value=0xe4}, {.addr=0x368c, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x368b, .value=0xe4, .type=IO_READ},
        {.addr=0x368c, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0043) {
    const struct CPU_State initial_cpu = {.pc=0xb5cc, .a=0xf6, .x=0x39, .y=0x66, .sp=0x4d, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xd0}, {.addr=0xb5cc, .value=0xe4}, {.addr=0xb5cd, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xb5ce, .a=0xd0, .x=0x39, .y=0x66, .sp=0x4d, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xd0}, {.addr=0xb5cc, .value=0xe4}, {.addr=0xb5cd, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5cc, .value=0xe4, .type=IO_READ},
        {.addr=0xb5cd, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0044) {
    const struct CPU_State initial_cpu = {.pc=0x38bf, .a=0x5b, .x=0xa2, .y=0xbd, .sp=0xdf, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xbb}, {.addr=0x38bf, .value=0xe4}, {.addr=0x38c0, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x38c1, .a=0xbb, .x=0xa2, .y=0xbd, .sp=0xdf, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xbb}, {.addr=0x38bf, .value=0xe4}, {.addr=0x38c0, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x38bf, .value=0xe4, .type=IO_READ},
        {.addr=0x38c0, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0046) {
    const struct CPU_State initial_cpu = {.pc=0xaa8d, .a=0x35, .x=0x0e, .y=0x5d, .sp=0x62, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xc6}, {.addr=0xaa8d, .value=0xe4}, {.addr=0xaa8e, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xaa8f, .a=0xc6, .x=0x0e, .y=0x5d, .sp=0x62, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xc6}, {.addr=0xaa8d, .value=0xe4}, {.addr=0xaa8e, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa8d, .value=0xe4, .type=IO_READ},
        {.addr=0xaa8e, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0047) {
    const struct CPU_State initial_cpu = {.pc=0x0e4c, .a=0x2a, .x=0x70, .y=0x0b, .sp=0x37, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x79}, {.addr=0x0e4c, .value=0xe4}, {.addr=0x0e4d, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x0e4e, .a=0x79, .x=0x70, .y=0x0b, .sp=0x37, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x79}, {.addr=0x0e4c, .value=0xe4}, {.addr=0x0e4d, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e4c, .value=0xe4, .type=IO_READ},
        {.addr=0x0e4d, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0048) {
    const struct CPU_State initial_cpu = {.pc=0xe4ef, .a=0x93, .x=0x72, .y=0xb3, .sp=0xb5, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x91}, {.addr=0xe4ef, .value=0xe4}, {.addr=0xe4f0, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xe4f1, .a=0x91, .x=0x72, .y=0xb3, .sp=0xb5, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x91}, {.addr=0xe4ef, .value=0xe4}, {.addr=0xe4f0, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4ef, .value=0xe4, .type=IO_READ},
        {.addr=0xe4f0, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0049) {
    const struct CPU_State initial_cpu = {.pc=0x1961, .a=0xe5, .x=0x2d, .y=0xc5, .sp=0xc3, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x2a}, {.addr=0x1961, .value=0xe4}, {.addr=0x1962, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x1963, .a=0x2a, .x=0x2d, .y=0xc5, .sp=0xc3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x2a}, {.addr=0x1961, .value=0xe4}, {.addr=0x1962, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x1961, .value=0xe4, .type=IO_READ},
        {.addr=0x1962, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004A) {
    const struct CPU_State initial_cpu = {.pc=0x31c5, .a=0xc6, .x=0xcc, .y=0xdf, .sp=0xc6, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x11}, {.addr=0x31c5, .value=0xe4}, {.addr=0x31c6, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x31c7, .a=0x11, .x=0xcc, .y=0xdf, .sp=0xc6, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x11}, {.addr=0x31c5, .value=0xe4}, {.addr=0x31c6, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x31c5, .value=0xe4, .type=IO_READ},
        {.addr=0x31c6, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004B) {
    const struct CPU_State initial_cpu = {.pc=0xa724, .a=0x49, .x=0x7d, .y=0xaf, .sp=0xeb, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x39}, {.addr=0xa724, .value=0xe4}, {.addr=0xa725, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xa726, .a=0x39, .x=0x7d, .y=0xaf, .sp=0xeb, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x39}, {.addr=0xa724, .value=0xe4}, {.addr=0xa725, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xa724, .value=0xe4, .type=IO_READ},
        {.addr=0xa725, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004C) {
    const struct CPU_State initial_cpu = {.pc=0xf53e, .a=0xdf, .x=0xa7, .y=0x4c, .sp=0x3f, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xb3}, {.addr=0xf53e, .value=0xe4}, {.addr=0xf53f, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf540, .a=0xb3, .x=0xa7, .y=0x4c, .sp=0x3f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xb3}, {.addr=0xf53e, .value=0xe4}, {.addr=0xf53f, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf53e, .value=0xe4, .type=IO_READ},
        {.addr=0xf53f, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004D) {
    const struct CPU_State initial_cpu = {.pc=0x1af6, .a=0x54, .x=0x1d, .y=0x40, .sp=0xc4, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x61}, {.addr=0x1af6, .value=0xe4}, {.addr=0x1af7, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x1af8, .a=0x61, .x=0x1d, .y=0x40, .sp=0xc4, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x61}, {.addr=0x1af6, .value=0xe4}, {.addr=0x1af7, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x1af6, .value=0xe4, .type=IO_READ},
        {.addr=0x1af7, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004E) {
    const struct CPU_State initial_cpu = {.pc=0x8f8e, .a=0x33, .x=0xeb, .y=0x2b, .sp=0xcf, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x31}, {.addr=0x8f8e, .value=0xe4}, {.addr=0x8f8f, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x8f90, .a=0x31, .x=0xeb, .y=0x2b, .sp=0xcf, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x31}, {.addr=0x8f8e, .value=0xe4}, {.addr=0x8f8f, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f8e, .value=0xe4, .type=IO_READ},
        {.addr=0x8f8f, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_004F) {
    const struct CPU_State initial_cpu = {.pc=0x4261, .a=0xe8, .x=0xc1, .y=0x6b, .sp=0x06, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x9e}, {.addr=0x4261, .value=0xe4}, {.addr=0x4262, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x4263, .a=0x9e, .x=0xc1, .y=0x6b, .sp=0x06, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x9e}, {.addr=0x4261, .value=0xe4}, {.addr=0x4262, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x4261, .value=0xe4, .type=IO_READ},
        {.addr=0x4262, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0051) {
    const struct CPU_State initial_cpu = {.pc=0xe631, .a=0x30, .x=0x9c, .y=0xac, .sp=0x93, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xa5}, {.addr=0xe631, .value=0xe4}, {.addr=0xe632, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe633, .a=0xa5, .x=0x9c, .y=0xac, .sp=0x93, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xa5}, {.addr=0xe631, .value=0xe4}, {.addr=0xe632, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe631, .value=0xe4, .type=IO_READ},
        {.addr=0xe632, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0052) {
    const struct CPU_State initial_cpu = {.pc=0x7747, .a=0x4c, .x=0x07, .y=0xd8, .sp=0xe7, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x20}, {.addr=0x7747, .value=0xe4}, {.addr=0x7748, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x7749, .a=0x20, .x=0x07, .y=0xd8, .sp=0xe7, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x20}, {.addr=0x7747, .value=0xe4}, {.addr=0x7748, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x7747, .value=0xe4, .type=IO_READ},
        {.addr=0x7748, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2ce7, .a=0x8a, .x=0xa6, .y=0x45, .sp=0x23, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x8f}, {.addr=0x2ce7, .value=0xe4}, {.addr=0x2ce8, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x2ce9, .a=0x8f, .x=0xa6, .y=0x45, .sp=0x23, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x8f}, {.addr=0x2ce7, .value=0xe4}, {.addr=0x2ce8, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ce7, .value=0xe4, .type=IO_READ},
        {.addr=0x2ce8, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0054) {
    const struct CPU_State initial_cpu = {.pc=0x91e1, .a=0x77, .x=0x7f, .y=0x2b, .sp=0xac, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x46}, {.addr=0x91e1, .value=0xe4}, {.addr=0x91e2, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x91e3, .a=0x46, .x=0x7f, .y=0x2b, .sp=0xac, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x46}, {.addr=0x91e1, .value=0xe4}, {.addr=0x91e2, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x91e1, .value=0xe4, .type=IO_READ},
        {.addr=0x91e2, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0055) {
    const struct CPU_State initial_cpu = {.pc=0xe446, .a=0x15, .x=0xe4, .y=0xa6, .sp=0x42, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x14}, {.addr=0xe446, .value=0xe4}, {.addr=0xe447, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xe448, .a=0x14, .x=0xe4, .y=0xa6, .sp=0x42, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x14}, {.addr=0xe446, .value=0xe4}, {.addr=0xe447, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xe446, .value=0xe4, .type=IO_READ},
        {.addr=0xe447, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0056) {
    const struct CPU_State initial_cpu = {.pc=0x49d4, .a=0x97, .x=0xd0, .y=0x1f, .sp=0x78, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x2c}, {.addr=0x49d4, .value=0xe4}, {.addr=0x49d5, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x49d6, .a=0x2c, .x=0xd0, .y=0x1f, .sp=0x78, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x2c}, {.addr=0x49d4, .value=0xe4}, {.addr=0x49d5, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x49d4, .value=0xe4, .type=IO_READ},
        {.addr=0x49d5, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa596, .a=0xd7, .x=0x7f, .y=0xc8, .sp=0x7a, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x7f}, {.addr=0xa596, .value=0xe4}, {.addr=0xa597, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xa598, .a=0x7f, .x=0x7f, .y=0xc8, .sp=0x7a, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x7f}, {.addr=0xa596, .value=0xe4}, {.addr=0xa597, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa596, .value=0xe4, .type=IO_READ},
        {.addr=0xa597, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9bbc, .a=0xd0, .x=0x6c, .y=0x72, .sp=0xfe, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x5d}, {.addr=0x9bbc, .value=0xe4}, {.addr=0x9bbd, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x9bbe, .a=0x5d, .x=0x6c, .y=0x72, .sp=0xfe, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x5d}, {.addr=0x9bbc, .value=0xe4}, {.addr=0x9bbd, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bbc, .value=0xe4, .type=IO_READ},
        {.addr=0x9bbd, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0059) {
    const struct CPU_State initial_cpu = {.pc=0x754f, .a=0x31, .x=0x2c, .y=0x0b, .sp=0x14, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xa6}, {.addr=0x754f, .value=0xe4}, {.addr=0x7550, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x7551, .a=0xa6, .x=0x2c, .y=0x0b, .sp=0x14, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xa6}, {.addr=0x754f, .value=0xe4}, {.addr=0x7550, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x754f, .value=0xe4, .type=IO_READ},
        {.addr=0x7550, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf974, .a=0xf2, .x=0xbc, .y=0x06, .sp=0xf9, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xc6}, {.addr=0xf974, .value=0xe4}, {.addr=0xf975, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xf976, .a=0xc6, .x=0xbc, .y=0x06, .sp=0xf9, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xc6}, {.addr=0xf974, .value=0xe4}, {.addr=0xf975, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf974, .value=0xe4, .type=IO_READ},
        {.addr=0xf975, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005B) {
    const struct CPU_State initial_cpu = {.pc=0xf871, .a=0x57, .x=0xb4, .y=0x2f, .sp=0x08, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x7e}, {.addr=0xf871, .value=0xe4}, {.addr=0xf872, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xf873, .a=0x7e, .x=0xb4, .y=0x2f, .sp=0x08, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x7e}, {.addr=0xf871, .value=0xe4}, {.addr=0xf872, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xf871, .value=0xe4, .type=IO_READ},
        {.addr=0xf872, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005C) {
    const struct CPU_State initial_cpu = {.pc=0x0222, .a=0xdd, .x=0x95, .y=0xb7, .sp=0x85, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xad}, {.addr=0x0222, .value=0xe4}, {.addr=0x0223, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x0224, .a=0xad, .x=0x95, .y=0xb7, .sp=0x85, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xad}, {.addr=0x0222, .value=0xe4}, {.addr=0x0223, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x0222, .value=0xe4, .type=IO_READ},
        {.addr=0x0223, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005D) {
    const struct CPU_State initial_cpu = {.pc=0x6950, .a=0x2c, .x=0x7b, .y=0x96, .sp=0x7f, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x4c}, {.addr=0x6950, .value=0xe4}, {.addr=0x6951, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x6952, .a=0x4c, .x=0x7b, .y=0x96, .sp=0x7f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x4c}, {.addr=0x6950, .value=0xe4}, {.addr=0x6951, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6950, .value=0xe4, .type=IO_READ},
        {.addr=0x6951, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005E) {
    const struct CPU_State initial_cpu = {.pc=0x40a8, .a=0x01, .x=0xd2, .y=0xd1, .sp=0xaf, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x40}, {.addr=0x40a8, .value=0xe4}, {.addr=0x40a9, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x40aa, .a=0x40, .x=0xd2, .y=0xd1, .sp=0xaf, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x40}, {.addr=0x40a8, .value=0xe4}, {.addr=0x40a9, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x40a8, .value=0xe4, .type=IO_READ},
        {.addr=0x40a9, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_005F) {
    const struct CPU_State initial_cpu = {.pc=0x1707, .a=0xa8, .x=0x4d, .y=0xf5, .sp=0x41, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x03}, {.addr=0x1707, .value=0xe4}, {.addr=0x1708, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x1709, .a=0x03, .x=0x4d, .y=0xf5, .sp=0x41, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x03}, {.addr=0x1707, .value=0xe4}, {.addr=0x1708, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1707, .value=0xe4, .type=IO_READ},
        {.addr=0x1708, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0060) {
    const struct CPU_State initial_cpu = {.pc=0x9e2d, .a=0x9b, .x=0x44, .y=0xce, .sp=0xc9, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x40}, {.addr=0x9e2d, .value=0xe4}, {.addr=0x9e2e, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x9e2f, .a=0x40, .x=0x44, .y=0xce, .sp=0xc9, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x40}, {.addr=0x9e2d, .value=0xe4}, {.addr=0x9e2e, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e2d, .value=0xe4, .type=IO_READ},
        {.addr=0x9e2e, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0061) {
    const struct CPU_State initial_cpu = {.pc=0xbc7f, .a=0xe6, .x=0x25, .y=0xbb, .sp=0xcc, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x38}, {.addr=0xbc7f, .value=0xe4}, {.addr=0xbc80, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xbc81, .a=0x38, .x=0x25, .y=0xbb, .sp=0xcc, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x38}, {.addr=0xbc7f, .value=0xe4}, {.addr=0xbc80, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc7f, .value=0xe4, .type=IO_READ},
        {.addr=0xbc80, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0062) {
    const struct CPU_State initial_cpu = {.pc=0xde34, .a=0x29, .x=0xc0, .y=0xb7, .sp=0x09, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x37}, {.addr=0xde34, .value=0xe4}, {.addr=0xde35, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xde36, .a=0x37, .x=0xc0, .y=0xb7, .sp=0x09, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x37}, {.addr=0xde34, .value=0xe4}, {.addr=0xde35, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xde34, .value=0xe4, .type=IO_READ},
        {.addr=0xde35, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0063) {
    const struct CPU_State initial_cpu = {.pc=0x2ed8, .a=0xe0, .x=0xb7, .y=0xe3, .sp=0x89, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x19}, {.addr=0x2ed8, .value=0xe4}, {.addr=0x2ed9, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x2eda, .a=0x19, .x=0xb7, .y=0xe3, .sp=0x89, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x19}, {.addr=0x2ed8, .value=0xe4}, {.addr=0x2ed9, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ed8, .value=0xe4, .type=IO_READ},
        {.addr=0x2ed9, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb857, .a=0x38, .x=0xa0, .y=0x66, .sp=0x84, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xb4}, {.addr=0xb857, .value=0xe4}, {.addr=0xb858, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xb859, .a=0xb4, .x=0xa0, .y=0x66, .sp=0x84, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xb4}, {.addr=0xb857, .value=0xe4}, {.addr=0xb858, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb857, .value=0xe4, .type=IO_READ},
        {.addr=0xb858, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0065) {
    const struct CPU_State initial_cpu = {.pc=0xea9f, .a=0xb9, .x=0x33, .y=0x59, .sp=0x1d, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xe0}, {.addr=0xea9f, .value=0xe4}, {.addr=0xeaa0, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xeaa1, .a=0xe0, .x=0x33, .y=0x59, .sp=0x1d, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xe0}, {.addr=0xea9f, .value=0xe4}, {.addr=0xeaa0, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xea9f, .value=0xe4, .type=IO_READ},
        {.addr=0xeaa0, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0066) {
    const struct CPU_State initial_cpu = {.pc=0xc5d1, .a=0x61, .x=0xce, .y=0x97, .sp=0x8d, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x52}, {.addr=0xc5d1, .value=0xe4}, {.addr=0xc5d2, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xc5d3, .a=0x52, .x=0xce, .y=0x97, .sp=0x8d, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x52}, {.addr=0xc5d1, .value=0xe4}, {.addr=0xc5d2, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5d1, .value=0xe4, .type=IO_READ},
        {.addr=0xc5d2, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf79c, .a=0x29, .x=0x23, .y=0x63, .sp=0x86, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x1e}, {.addr=0xf79c, .value=0xe4}, {.addr=0xf79d, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xf79e, .a=0x1e, .x=0x23, .y=0x63, .sp=0x86, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x1e}, {.addr=0xf79c, .value=0xe4}, {.addr=0xf79d, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xf79c, .value=0xe4, .type=IO_READ},
        {.addr=0xf79d, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0068) {
    const struct CPU_State initial_cpu = {.pc=0x5f99, .a=0xdf, .x=0x73, .y=0x34, .sp=0x46, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xb2}, {.addr=0x5f99, .value=0xe4}, {.addr=0x5f9a, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x5f9b, .a=0xb2, .x=0x73, .y=0x34, .sp=0x46, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xb2}, {.addr=0x5f99, .value=0xe4}, {.addr=0x5f9a, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f99, .value=0xe4, .type=IO_READ},
        {.addr=0x5f9a, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0069) {
    const struct CPU_State initial_cpu = {.pc=0x46ae, .a=0xff, .x=0x16, .y=0xb7, .sp=0x9a, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x7c}, {.addr=0x46ae, .value=0xe4}, {.addr=0x46af, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x46b0, .a=0x7c, .x=0x16, .y=0xb7, .sp=0x9a, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x7c}, {.addr=0x46ae, .value=0xe4}, {.addr=0x46af, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x46ae, .value=0xe4, .type=IO_READ},
        {.addr=0x46af, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2a6a, .a=0x7c, .x=0x90, .y=0x69, .sp=0xa5, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x10}, {.addr=0x2a6a, .value=0xe4}, {.addr=0x2a6b, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x2a6c, .a=0x10, .x=0x90, .y=0x69, .sp=0xa5, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x10}, {.addr=0x2a6a, .value=0xe4}, {.addr=0x2a6b, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a6a, .value=0xe4, .type=IO_READ},
        {.addr=0x2a6b, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006B) {
    const struct CPU_State initial_cpu = {.pc=0x7b54, .a=0x45, .x=0xec, .y=0xc2, .sp=0xac, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x70}, {.addr=0x7b54, .value=0xe4}, {.addr=0x7b55, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x7b56, .a=0x70, .x=0xec, .y=0xc2, .sp=0xac, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x70}, {.addr=0x7b54, .value=0xe4}, {.addr=0x7b55, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b54, .value=0xe4, .type=IO_READ},
        {.addr=0x7b55, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006C) {
    const struct CPU_State initial_cpu = {.pc=0xd966, .a=0x38, .x=0xd0, .y=0x4b, .sp=0x15, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x2f}, {.addr=0xd966, .value=0xe4}, {.addr=0xd967, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xd968, .a=0x2f, .x=0xd0, .y=0x4b, .sp=0x15, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x2f}, {.addr=0xd966, .value=0xe4}, {.addr=0xd967, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xd966, .value=0xe4, .type=IO_READ},
        {.addr=0xd967, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006D) {
    const struct CPU_State initial_cpu = {.pc=0x57ab, .a=0xbd, .x=0x44, .y=0x2d, .sp=0x09, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x25}, {.addr=0x57ab, .value=0xe4}, {.addr=0x57ac, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x57ad, .a=0x25, .x=0x44, .y=0x2d, .sp=0x09, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x25}, {.addr=0x57ab, .value=0xe4}, {.addr=0x57ac, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x57ab, .value=0xe4, .type=IO_READ},
        {.addr=0x57ac, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6546, .a=0x2b, .x=0x84, .y=0xfc, .sp=0x16, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x53}, {.addr=0x6546, .value=0xe4}, {.addr=0x6547, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x6548, .a=0x53, .x=0x84, .y=0xfc, .sp=0x16, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x53}, {.addr=0x6546, .value=0xe4}, {.addr=0x6547, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6546, .value=0xe4, .type=IO_READ},
        {.addr=0x6547, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_006F) {
    const struct CPU_State initial_cpu = {.pc=0x63da, .a=0xad, .x=0xda, .y=0x13, .sp=0xe9, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0xc0}, {.addr=0x63da, .value=0xe4}, {.addr=0x63db, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x63dc, .a=0xc0, .x=0xda, .y=0x13, .sp=0xe9, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0xc0}, {.addr=0x63da, .value=0xe4}, {.addr=0x63db, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x63da, .value=0xe4, .type=IO_READ},
        {.addr=0x63db, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0070) {
    const struct CPU_State initial_cpu = {.pc=0x8fe9, .a=0x18, .x=0x26, .y=0xcd, .sp=0xf1, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x1f}, {.addr=0x8fe9, .value=0xe4}, {.addr=0x8fea, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x8feb, .a=0x1f, .x=0x26, .y=0xcd, .sp=0xf1, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x1f}, {.addr=0x8fe9, .value=0xe4}, {.addr=0x8fea, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fe9, .value=0xe4, .type=IO_READ},
        {.addr=0x8fea, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0071) {
    const struct CPU_State initial_cpu = {.pc=0x0239, .a=0x97, .x=0x8f, .y=0x51, .sp=0x2e, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xee}, {.addr=0x0239, .value=0xe4}, {.addr=0x023a, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x023b, .a=0xee, .x=0x8f, .y=0x51, .sp=0x2e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xee}, {.addr=0x0239, .value=0xe4}, {.addr=0x023a, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0239, .value=0xe4, .type=IO_READ},
        {.addr=0x023a, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0072) {
    const struct CPU_State initial_cpu = {.pc=0xd7eb, .a=0x09, .x=0xfa, .y=0xec, .sp=0x45, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x85}, {.addr=0xd7eb, .value=0xe4}, {.addr=0xd7ec, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xd7ed, .a=0x85, .x=0xfa, .y=0xec, .sp=0x45, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x85}, {.addr=0xd7eb, .value=0xe4}, {.addr=0xd7ec, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7eb, .value=0xe4, .type=IO_READ},
        {.addr=0xd7ec, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb900, .a=0xd9, .x=0x61, .y=0xaa, .sp=0x5c, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xa7}, {.addr=0xb900, .value=0xe4}, {.addr=0xb901, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xb902, .a=0xa7, .x=0x61, .y=0xaa, .sp=0x5c, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xa7}, {.addr=0xb900, .value=0xe4}, {.addr=0xb901, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xb900, .value=0xe4, .type=IO_READ},
        {.addr=0xb901, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0074) {
    const struct CPU_State initial_cpu = {.pc=0x0238, .a=0x7a, .x=0xc7, .y=0x10, .sp=0xb4, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x49}, {.addr=0x0238, .value=0xe4}, {.addr=0x0239, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x023a, .a=0x49, .x=0xc7, .y=0x10, .sp=0xb4, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x49}, {.addr=0x0238, .value=0xe4}, {.addr=0x0239, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x0238, .value=0xe4, .type=IO_READ},
        {.addr=0x0239, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0075) {
    const struct CPU_State initial_cpu = {.pc=0x9fcd, .a=0xb4, .x=0xbf, .y=0x1e, .sp=0x6c, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x02}, {.addr=0x9fcd, .value=0xe4}, {.addr=0x9fce, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x9fcf, .a=0x02, .x=0xbf, .y=0x1e, .sp=0x6c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x02}, {.addr=0x9fcd, .value=0xe4}, {.addr=0x9fce, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fcd, .value=0xe4, .type=IO_READ},
        {.addr=0x9fce, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0076) {
    const struct CPU_State initial_cpu = {.pc=0x88ca, .a=0xda, .x=0x2c, .y=0xdb, .sp=0x87, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x60}, {.addr=0x88ca, .value=0xe4}, {.addr=0x88cb, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x88cc, .a=0x60, .x=0x2c, .y=0xdb, .sp=0x87, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x60}, {.addr=0x88ca, .value=0xe4}, {.addr=0x88cb, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x88ca, .value=0xe4, .type=IO_READ},
        {.addr=0x88cb, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0077) {
    const struct CPU_State initial_cpu = {.pc=0xa9d9, .a=0x6a, .x=0x25, .y=0xfc, .sp=0x57, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x44}, {.addr=0xa9d9, .value=0xe4}, {.addr=0xa9da, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xa9db, .a=0x44, .x=0x25, .y=0xfc, .sp=0x57, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x44}, {.addr=0xa9d9, .value=0xe4}, {.addr=0xa9da, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9d9, .value=0xe4, .type=IO_READ},
        {.addr=0xa9da, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0078) {
    const struct CPU_State initial_cpu = {.pc=0xefee, .a=0x09, .x=0x94, .y=0x99, .sp=0xff, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x71}, {.addr=0xefee, .value=0xe4}, {.addr=0xefef, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xeff0, .a=0x71, .x=0x94, .y=0x99, .sp=0xff, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x71}, {.addr=0xefee, .value=0xe4}, {.addr=0xefef, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xefee, .value=0xe4, .type=IO_READ},
        {.addr=0xefef, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0079) {
    const struct CPU_State initial_cpu = {.pc=0x3718, .a=0x9b, .x=0x17, .y=0xc8, .sp=0xc6, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x1c}, {.addr=0x3718, .value=0xe4}, {.addr=0x3719, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x371a, .a=0x1c, .x=0x17, .y=0xc8, .sp=0xc6, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x1c}, {.addr=0x3718, .value=0xe4}, {.addr=0x3719, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x3718, .value=0xe4, .type=IO_READ},
        {.addr=0x3719, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007A) {
    const struct CPU_State initial_cpu = {.pc=0x7ffe, .a=0xb4, .x=0xfa, .y=0x8b, .sp=0x67, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x42}, {.addr=0x7ffe, .value=0xe4}, {.addr=0x7fff, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x8000, .a=0x42, .x=0xfa, .y=0x8b, .sp=0x67, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x42}, {.addr=0x7ffe, .value=0xe4}, {.addr=0x7fff, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ffe, .value=0xe4, .type=IO_READ},
        {.addr=0x7fff, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007B) {
    const struct CPU_State initial_cpu = {.pc=0x6cd0, .a=0xdd, .x=0xfb, .y=0xef, .sp=0x9f, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xa4}, {.addr=0x6cd0, .value=0xe4}, {.addr=0x6cd1, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6cd2, .a=0xa4, .x=0xfb, .y=0xef, .sp=0x9f, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xa4}, {.addr=0x6cd0, .value=0xe4}, {.addr=0x6cd1, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cd0, .value=0xe4, .type=IO_READ},
        {.addr=0x6cd1, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007C) {
    const struct CPU_State initial_cpu = {.pc=0xe3ae, .a=0x2e, .x=0x44, .y=0xe4, .sp=0x9e, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xeb}, {.addr=0xe3ae, .value=0xe4}, {.addr=0xe3af, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xe3b0, .a=0xeb, .x=0x44, .y=0xe4, .sp=0x9e, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xeb}, {.addr=0xe3ae, .value=0xe4}, {.addr=0xe3af, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3ae, .value=0xe4, .type=IO_READ},
        {.addr=0xe3af, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007D) {
    const struct CPU_State initial_cpu = {.pc=0xbef1, .a=0x47, .x=0x94, .y=0x14, .sp=0x82, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x39}, {.addr=0xbef1, .value=0xe4}, {.addr=0xbef2, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xbef3, .a=0x39, .x=0x94, .y=0x14, .sp=0x82, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x39}, {.addr=0xbef1, .value=0xe4}, {.addr=0xbef2, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xbef1, .value=0xe4, .type=IO_READ},
        {.addr=0xbef2, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007E) {
    const struct CPU_State initial_cpu = {.pc=0x2c5b, .a=0x12, .x=0x81, .y=0x47, .sp=0x2d, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xf7}, {.addr=0x2c5b, .value=0xe4}, {.addr=0x2c5c, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x2c5d, .a=0xf7, .x=0x81, .y=0x47, .sp=0x2d, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xf7}, {.addr=0x2c5b, .value=0xe4}, {.addr=0x2c5c, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c5b, .value=0xe4, .type=IO_READ},
        {.addr=0x2c5c, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_007F) {
    const struct CPU_State initial_cpu = {.pc=0x844f, .a=0x85, .x=0x44, .y=0x18, .sp=0xd9, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x42}, {.addr=0x844f, .value=0xe4}, {.addr=0x8450, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x8451, .a=0x42, .x=0x44, .y=0x18, .sp=0xd9, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x42}, {.addr=0x844f, .value=0xe4}, {.addr=0x8450, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x844f, .value=0xe4, .type=IO_READ},
        {.addr=0x8450, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0080) {
    const struct CPU_State initial_cpu = {.pc=0xd843, .a=0x46, .x=0x26, .y=0x3a, .sp=0x38, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x83}, {.addr=0xd843, .value=0xe4}, {.addr=0xd844, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xd845, .a=0x83, .x=0x26, .y=0x3a, .sp=0x38, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x83}, {.addr=0xd843, .value=0xe4}, {.addr=0xd844, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xd843, .value=0xe4, .type=IO_READ},
        {.addr=0xd844, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0081) {
    const struct CPU_State initial_cpu = {.pc=0xa2ef, .a=0xe7, .x=0xd7, .y=0x99, .sp=0x1b, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x13}, {.addr=0xa2ef, .value=0xe4}, {.addr=0xa2f0, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xa2f1, .a=0x13, .x=0xd7, .y=0x99, .sp=0x1b, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x13}, {.addr=0xa2ef, .value=0xe4}, {.addr=0xa2f0, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2ef, .value=0xe4, .type=IO_READ},
        {.addr=0xa2f0, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0082) {
    const struct CPU_State initial_cpu = {.pc=0x4859, .a=0x76, .x=0x0d, .y=0x73, .sp=0xf1, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x57}, {.addr=0x4859, .value=0xe4}, {.addr=0x485a, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x485b, .a=0x57, .x=0x0d, .y=0x73, .sp=0xf1, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x57}, {.addr=0x4859, .value=0xe4}, {.addr=0x485a, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4859, .value=0xe4, .type=IO_READ},
        {.addr=0x485a, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0083) {
    const struct CPU_State initial_cpu = {.pc=0x601c, .a=0x2b, .x=0x58, .y=0x4d, .sp=0xc4, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x0f}, {.addr=0x601c, .value=0xe4}, {.addr=0x601d, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x601e, .a=0x0f, .x=0x58, .y=0x4d, .sp=0xc4, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x0f}, {.addr=0x601c, .value=0xe4}, {.addr=0x601d, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x601c, .value=0xe4, .type=IO_READ},
        {.addr=0x601d, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0084) {
    const struct CPU_State initial_cpu = {.pc=0x3380, .a=0x10, .x=0xfc, .y=0x0d, .sp=0x13, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xe7}, {.addr=0x3380, .value=0xe4}, {.addr=0x3381, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x3382, .a=0xe7, .x=0xfc, .y=0x0d, .sp=0x13, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xe7}, {.addr=0x3380, .value=0xe4}, {.addr=0x3381, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3380, .value=0xe4, .type=IO_READ},
        {.addr=0x3381, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0086) {
    const struct CPU_State initial_cpu = {.pc=0x245c, .a=0xdf, .x=0x09, .y=0xfc, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x12}, {.addr=0x245c, .value=0xe4}, {.addr=0x245d, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x245e, .a=0x12, .x=0x09, .y=0xfc, .sp=0x42, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x12}, {.addr=0x245c, .value=0xe4}, {.addr=0x245d, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x245c, .value=0xe4, .type=IO_READ},
        {.addr=0x245d, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0087) {
    const struct CPU_State initial_cpu = {.pc=0x7f34, .a=0x0a, .x=0xe5, .y=0xff, .sp=0x80, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xa3}, {.addr=0x7f34, .value=0xe4}, {.addr=0x7f35, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x7f36, .a=0xa3, .x=0xe5, .y=0xff, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xa3}, {.addr=0x7f34, .value=0xe4}, {.addr=0x7f35, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f34, .value=0xe4, .type=IO_READ},
        {.addr=0x7f35, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0088) {
    const struct CPU_State initial_cpu = {.pc=0x15da, .a=0x4a, .x=0x06, .y=0x19, .sp=0x83, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xfc}, {.addr=0x15da, .value=0xe4}, {.addr=0x15db, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x15dc, .a=0xfc, .x=0x06, .y=0x19, .sp=0x83, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xfc}, {.addr=0x15da, .value=0xe4}, {.addr=0x15db, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x15da, .value=0xe4, .type=IO_READ},
        {.addr=0x15db, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9aeb, .a=0x1a, .x=0x6b, .y=0xf8, .sp=0xe7, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xf7}, {.addr=0x9aeb, .value=0xe4}, {.addr=0x9aec, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x9aed, .a=0xf7, .x=0x6b, .y=0xf8, .sp=0xe7, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xf7}, {.addr=0x9aeb, .value=0xe4}, {.addr=0x9aec, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aeb, .value=0xe4, .type=IO_READ},
        {.addr=0x9aec, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008A) {
    const struct CPU_State initial_cpu = {.pc=0xa36f, .a=0x52, .x=0xad, .y=0x45, .sp=0xda, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x4a}, {.addr=0xa36f, .value=0xe4}, {.addr=0xa370, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xa371, .a=0x4a, .x=0xad, .y=0x45, .sp=0xda, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x4a}, {.addr=0xa36f, .value=0xe4}, {.addr=0xa370, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xa36f, .value=0xe4, .type=IO_READ},
        {.addr=0xa370, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008B) {
    const struct CPU_State initial_cpu = {.pc=0x06e8, .a=0x13, .x=0x51, .y=0xd3, .sp=0x52, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x61}, {.addr=0x06e8, .value=0xe4}, {.addr=0x06e9, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x06ea, .a=0x61, .x=0x51, .y=0xd3, .sp=0x52, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x61}, {.addr=0x06e8, .value=0xe4}, {.addr=0x06e9, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x06e8, .value=0xe4, .type=IO_READ},
        {.addr=0x06e9, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008C) {
    const struct CPU_State initial_cpu = {.pc=0xcbda, .a=0xea, .x=0xbe, .y=0xe2, .sp=0xe4, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xc3}, {.addr=0xcbda, .value=0xe4}, {.addr=0xcbdb, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xcbdc, .a=0xc3, .x=0xbe, .y=0xe2, .sp=0xe4, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xc3}, {.addr=0xcbda, .value=0xe4}, {.addr=0xcbdb, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbda, .value=0xe4, .type=IO_READ},
        {.addr=0xcbdb, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008D) {
    const struct CPU_State initial_cpu = {.pc=0x6b9a, .a=0xdf, .x=0xb4, .y=0xcd, .sp=0xd8, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x08}, {.addr=0x6b9a, .value=0xe4}, {.addr=0x6b9b, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x6b9c, .a=0x08, .x=0xb4, .y=0xcd, .sp=0xd8, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x08}, {.addr=0x6b9a, .value=0xe4}, {.addr=0x6b9b, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b9a, .value=0xe4, .type=IO_READ},
        {.addr=0x6b9b, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008E) {
    const struct CPU_State initial_cpu = {.pc=0x78a6, .a=0x60, .x=0x23, .y=0x80, .sp=0x55, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x86}, {.addr=0x78a6, .value=0xe4}, {.addr=0x78a7, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x78a8, .a=0x86, .x=0x23, .y=0x80, .sp=0x55, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x86}, {.addr=0x78a6, .value=0xe4}, {.addr=0x78a7, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x78a6, .value=0xe4, .type=IO_READ},
        {.addr=0x78a7, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdce1, .a=0x12, .x=0x83, .y=0x84, .sp=0x82, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xaa}, {.addr=0xdce1, .value=0xe4}, {.addr=0xdce2, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xdce3, .a=0xaa, .x=0x83, .y=0x84, .sp=0x82, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xaa}, {.addr=0xdce1, .value=0xe4}, {.addr=0xdce2, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdce1, .value=0xe4, .type=IO_READ},
        {.addr=0xdce2, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0090) {
    const struct CPU_State initial_cpu = {.pc=0xca07, .a=0xd1, .x=0x58, .y=0x2f, .sp=0xde, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x19}, {.addr=0xca07, .value=0xe4}, {.addr=0xca08, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xca09, .a=0x19, .x=0x58, .y=0x2f, .sp=0xde, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x19}, {.addr=0xca07, .value=0xe4}, {.addr=0xca08, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xca07, .value=0xe4, .type=IO_READ},
        {.addr=0xca08, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0092) {
    const struct CPU_State initial_cpu = {.pc=0x700c, .a=0x6c, .x=0xcd, .y=0x18, .sp=0x22, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xab}, {.addr=0x700c, .value=0xe4}, {.addr=0x700d, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x700e, .a=0xab, .x=0xcd, .y=0x18, .sp=0x22, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xab}, {.addr=0x700c, .value=0xe4}, {.addr=0x700d, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x700c, .value=0xe4, .type=IO_READ},
        {.addr=0x700d, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0093) {
    const struct CPU_State initial_cpu = {.pc=0xe0b2, .a=0x24, .x=0x10, .y=0x77, .sp=0x4c, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xbc}, {.addr=0xe0b2, .value=0xe4}, {.addr=0xe0b3, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xe0b4, .a=0xbc, .x=0x10, .y=0x77, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xbc}, {.addr=0xe0b2, .value=0xe4}, {.addr=0xe0b3, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0b2, .value=0xe4, .type=IO_READ},
        {.addr=0xe0b3, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0094) {
    const struct CPU_State initial_cpu = {.pc=0xeeaa, .a=0x5b, .x=0x9e, .y=0x3d, .sp=0x10, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x08}, {.addr=0xeeaa, .value=0xe4}, {.addr=0xeeab, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xeeac, .a=0x08, .x=0x9e, .y=0x3d, .sp=0x10, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x08}, {.addr=0xeeaa, .value=0xe4}, {.addr=0xeeab, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xeeaa, .value=0xe4, .type=IO_READ},
        {.addr=0xeeab, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0095) {
    const struct CPU_State initial_cpu = {.pc=0x7151, .a=0xa5, .x=0xcb, .y=0xe5, .sp=0x9f, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xda}, {.addr=0x7151, .value=0xe4}, {.addr=0x7152, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x7153, .a=0xda, .x=0xcb, .y=0xe5, .sp=0x9f, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xda}, {.addr=0x7151, .value=0xe4}, {.addr=0x7152, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7151, .value=0xe4, .type=IO_READ},
        {.addr=0x7152, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0096) {
    const struct CPU_State initial_cpu = {.pc=0xfe1e, .a=0x9c, .x=0x17, .y=0xad, .sp=0x13, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x94}, {.addr=0xfe1e, .value=0xe4}, {.addr=0xfe1f, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xfe20, .a=0x94, .x=0x17, .y=0xad, .sp=0x13, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x94}, {.addr=0xfe1e, .value=0xe4}, {.addr=0xfe1f, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe1e, .value=0xe4, .type=IO_READ},
        {.addr=0xfe1f, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0097) {
    const struct CPU_State initial_cpu = {.pc=0xc81a, .a=0x2f, .x=0x2b, .y=0x76, .sp=0x25, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x79}, {.addr=0xc81a, .value=0xe4}, {.addr=0xc81b, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xc81c, .a=0x79, .x=0x2b, .y=0x76, .sp=0x25, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x79}, {.addr=0xc81a, .value=0xe4}, {.addr=0xc81b, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xc81a, .value=0xe4, .type=IO_READ},
        {.addr=0xc81b, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0098) {
    const struct CPU_State initial_cpu = {.pc=0x978b, .a=0x1f, .x=0x6e, .y=0x4f, .sp=0xfd, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x05}, {.addr=0x978b, .value=0xe4}, {.addr=0x978c, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x978d, .a=0x05, .x=0x6e, .y=0x4f, .sp=0xfd, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x05}, {.addr=0x978b, .value=0xe4}, {.addr=0x978c, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x978b, .value=0xe4, .type=IO_READ},
        {.addr=0x978c, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0099) {
    const struct CPU_State initial_cpu = {.pc=0x0e7d, .a=0xdd, .x=0x83, .y=0xd6, .sp=0x2f, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xaf}, {.addr=0x0e7d, .value=0xe4}, {.addr=0x0e7e, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x0e7f, .a=0xaf, .x=0x83, .y=0xd6, .sp=0x2f, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xaf}, {.addr=0x0e7d, .value=0xe4}, {.addr=0x0e7e, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e7d, .value=0xe4, .type=IO_READ},
        {.addr=0x0e7e, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009A) {
    const struct CPU_State initial_cpu = {.pc=0x92bc, .a=0xf6, .x=0x12, .y=0x03, .sp=0x92, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xdd}, {.addr=0x92bc, .value=0xe4}, {.addr=0x92bd, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x92be, .a=0xdd, .x=0x12, .y=0x03, .sp=0x92, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xdd}, {.addr=0x92bc, .value=0xe4}, {.addr=0x92bd, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x92bc, .value=0xe4, .type=IO_READ},
        {.addr=0x92bd, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009B) {
    const struct CPU_State initial_cpu = {.pc=0x010b, .a=0x41, .x=0xea, .y=0x96, .sp=0x6a, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x82}, {.addr=0x010b, .value=0xe4}, {.addr=0x010c, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x010d, .a=0x82, .x=0xea, .y=0x96, .sp=0x6a, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x82}, {.addr=0x010b, .value=0xe4}, {.addr=0x010c, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x010b, .value=0xe4, .type=IO_READ},
        {.addr=0x010c, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009C) {
    const struct CPU_State initial_cpu = {.pc=0xbe1b, .a=0x02, .x=0xca, .y=0x4c, .sp=0x8f, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x44}, {.addr=0xbe1b, .value=0xe4}, {.addr=0xbe1c, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xbe1d, .a=0x44, .x=0xca, .y=0x4c, .sp=0x8f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x44}, {.addr=0xbe1b, .value=0xe4}, {.addr=0xbe1c, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe1b, .value=0xe4, .type=IO_READ},
        {.addr=0xbe1c, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009D) {
    const struct CPU_State initial_cpu = {.pc=0x5bf8, .a=0xf8, .x=0xbe, .y=0x9b, .sp=0xd8, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xe0}, {.addr=0x5bf8, .value=0xe4}, {.addr=0x5bf9, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x5bfa, .a=0xe0, .x=0xbe, .y=0x9b, .sp=0xd8, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xe0}, {.addr=0x5bf8, .value=0xe4}, {.addr=0x5bf9, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bf8, .value=0xe4, .type=IO_READ},
        {.addr=0x5bf9, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009E) {
    const struct CPU_State initial_cpu = {.pc=0x497b, .a=0x4e, .x=0xc1, .y=0x99, .sp=0xb4, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x64}, {.addr=0x497b, .value=0xe4}, {.addr=0x497c, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x497d, .a=0x64, .x=0xc1, .y=0x99, .sp=0xb4, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x64}, {.addr=0x497b, .value=0xe4}, {.addr=0x497c, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x497b, .value=0xe4, .type=IO_READ},
        {.addr=0x497c, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_009F) {
    const struct CPU_State initial_cpu = {.pc=0xcd56, .a=0x81, .x=0xc9, .y=0x01, .sp=0xa7, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x24}, {.addr=0xcd56, .value=0xe4}, {.addr=0xcd57, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xcd58, .a=0x24, .x=0xc9, .y=0x01, .sp=0xa7, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x24}, {.addr=0xcd56, .value=0xe4}, {.addr=0xcd57, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd56, .value=0xe4, .type=IO_READ},
        {.addr=0xcd57, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xf182, .a=0xe6, .x=0x85, .y=0xe2, .sp=0xd5, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x11}, {.addr=0xf182, .value=0xe4}, {.addr=0xf183, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xf184, .a=0x11, .x=0x85, .y=0xe2, .sp=0xd5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x11}, {.addr=0xf182, .value=0xe4}, {.addr=0xf183, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf182, .value=0xe4, .type=IO_READ},
        {.addr=0xf183, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8ce6, .a=0x1f, .x=0xd8, .y=0x6d, .sp=0x63, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x53}, {.addr=0x8ce6, .value=0xe4}, {.addr=0x8ce7, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x8ce8, .a=0x53, .x=0xd8, .y=0x6d, .sp=0x63, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x53}, {.addr=0x8ce6, .value=0xe4}, {.addr=0x8ce7, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ce6, .value=0xe4, .type=IO_READ},
        {.addr=0x8ce7, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xeabc, .a=0x83, .x=0x5d, .y=0x80, .sp=0xa9, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xce}, {.addr=0xeabc, .value=0xe4}, {.addr=0xeabd, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xeabe, .a=0xce, .x=0x5d, .y=0x80, .sp=0xa9, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xce}, {.addr=0xeabc, .value=0xe4}, {.addr=0xeabd, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xeabc, .value=0xe4, .type=IO_READ},
        {.addr=0xeabd, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xac2a, .a=0x2b, .x=0xbf, .y=0xd0, .sp=0x4b, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x28}, {.addr=0xac2a, .value=0xe4}, {.addr=0xac2b, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xac2c, .a=0x28, .x=0xbf, .y=0xd0, .sp=0x4b, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x28}, {.addr=0xac2a, .value=0xe4}, {.addr=0xac2b, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xac2a, .value=0xe4, .type=IO_READ},
        {.addr=0xac2b, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x3b0b, .a=0xb5, .x=0x6b, .y=0x4a, .sp=0x7d, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xc7}, {.addr=0x3b0b, .value=0xe4}, {.addr=0x3b0c, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x3b0d, .a=0xc7, .x=0x6b, .y=0x4a, .sp=0x7d, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xc7}, {.addr=0x3b0b, .value=0xe4}, {.addr=0x3b0c, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b0b, .value=0xe4, .type=IO_READ},
        {.addr=0x3b0c, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x4a5e, .a=0x24, .x=0xe2, .y=0x1f, .sp=0x23, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x27}, {.addr=0x4a5e, .value=0xe4}, {.addr=0x4a5f, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x4a60, .a=0x27, .x=0xe2, .y=0x1f, .sp=0x23, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x27}, {.addr=0x4a5e, .value=0xe4}, {.addr=0x4a5f, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a5e, .value=0xe4, .type=IO_READ},
        {.addr=0x4a5f, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x877d, .a=0x54, .x=0x22, .y=0x83, .sp=0x3c, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xe1}, {.addr=0x877d, .value=0xe4}, {.addr=0x877e, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x877f, .a=0xe1, .x=0x22, .y=0x83, .sp=0x3c, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xe1}, {.addr=0x877d, .value=0xe4}, {.addr=0x877e, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x877d, .value=0xe4, .type=IO_READ},
        {.addr=0x877e, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x0ccd, .a=0xb7, .x=0xdc, .y=0x82, .sp=0xb8, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xf6}, {.addr=0x0ccd, .value=0xe4}, {.addr=0x0cce, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x0ccf, .a=0xf6, .x=0xdc, .y=0x82, .sp=0xb8, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xf6}, {.addr=0x0ccd, .value=0xe4}, {.addr=0x0cce, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ccd, .value=0xe4, .type=IO_READ},
        {.addr=0x0cce, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x5176, .a=0x45, .x=0x63, .y=0xea, .sp=0xa3, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x06}, {.addr=0x5176, .value=0xe4}, {.addr=0x5177, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x5178, .a=0x06, .x=0x63, .y=0xea, .sp=0xa3, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x06}, {.addr=0x5176, .value=0xe4}, {.addr=0x5177, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x5176, .value=0xe4, .type=IO_READ},
        {.addr=0x5177, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xced5, .a=0x90, .x=0x05, .y=0xed, .sp=0x8c, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x2f}, {.addr=0xced5, .value=0xe4}, {.addr=0xced6, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xced7, .a=0x2f, .x=0x05, .y=0xed, .sp=0x8c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x2f}, {.addr=0xced5, .value=0xe4}, {.addr=0xced6, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xced5, .value=0xe4, .type=IO_READ},
        {.addr=0xced6, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x2f61, .a=0x9f, .x=0x77, .y=0x08, .sp=0xb8, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x23}, {.addr=0x2f61, .value=0xe4}, {.addr=0x2f62, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x2f63, .a=0x23, .x=0x77, .y=0x08, .sp=0xb8, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x23}, {.addr=0x2f61, .value=0xe4}, {.addr=0x2f62, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f61, .value=0xe4, .type=IO_READ},
        {.addr=0x2f62, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x72a9, .a=0xec, .x=0x49, .y=0x9e, .sp=0x61, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x80}, {.addr=0x72a9, .value=0xe4}, {.addr=0x72aa, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x72ab, .a=0x80, .x=0x49, .y=0x9e, .sp=0x61, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x80}, {.addr=0x72a9, .value=0xe4}, {.addr=0x72aa, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x72a9, .value=0xe4, .type=IO_READ},
        {.addr=0x72aa, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x7edb, .a=0xae, .x=0x5a, .y=0x1a, .sp=0xb4, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x70}, {.addr=0x7edb, .value=0xe4}, {.addr=0x7edc, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x7edd, .a=0x70, .x=0x5a, .y=0x1a, .sp=0xb4, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x70}, {.addr=0x7edb, .value=0xe4}, {.addr=0x7edc, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7edb, .value=0xe4, .type=IO_READ},
        {.addr=0x7edc, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x73d3, .a=0xac, .x=0x43, .y=0xcb, .sp=0x72, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x84}, {.addr=0x73d3, .value=0xe4}, {.addr=0x73d4, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x73d5, .a=0x84, .x=0x43, .y=0xcb, .sp=0x72, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x84}, {.addr=0x73d3, .value=0xe4}, {.addr=0x73d4, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x73d3, .value=0xe4, .type=IO_READ},
        {.addr=0x73d4, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xb181, .a=0x0b, .x=0x8f, .y=0x11, .sp=0x94, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x2a}, {.addr=0xb181, .value=0xe4}, {.addr=0xb182, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xb183, .a=0x2a, .x=0x8f, .y=0x11, .sp=0x94, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x2a}, {.addr=0xb181, .value=0xe4}, {.addr=0xb182, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb181, .value=0xe4, .type=IO_READ},
        {.addr=0xb182, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xbc58, .a=0x90, .x=0xe1, .y=0x7c, .sp=0x2b, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x00}, {.addr=0xbc58, .value=0xe4}, {.addr=0xbc59, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xbc5a, .a=0x00, .x=0xe1, .y=0x7c, .sp=0x2b, .status=0x7b};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x00}, {.addr=0xbc58, .value=0xe4}, {.addr=0xbc59, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc58, .value=0xe4, .type=IO_READ},
        {.addr=0xbc59, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xec37, .a=0xed, .x=0x29, .y=0xfd, .sp=0x33, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x4f}, {.addr=0xec37, .value=0xe4}, {.addr=0xec38, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xec39, .a=0x4f, .x=0x29, .y=0xfd, .sp=0x33, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x4f}, {.addr=0xec37, .value=0xe4}, {.addr=0xec38, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xec37, .value=0xe4, .type=IO_READ},
        {.addr=0xec38, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x8fe4, .a=0xcf, .x=0x06, .y=0xd0, .sp=0xe0, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x76}, {.addr=0x8fe4, .value=0xe4}, {.addr=0x8fe5, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x8fe6, .a=0x76, .x=0x06, .y=0xd0, .sp=0xe0, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x76}, {.addr=0x8fe4, .value=0xe4}, {.addr=0x8fe5, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fe4, .value=0xe4, .type=IO_READ},
        {.addr=0x8fe5, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xc50f, .a=0xbf, .x=0xf0, .y=0xfc, .sp=0x28, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xdf}, {.addr=0xc50f, .value=0xe4}, {.addr=0xc510, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xc511, .a=0xdf, .x=0xf0, .y=0xfc, .sp=0x28, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xdf}, {.addr=0xc50f, .value=0xe4}, {.addr=0xc510, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xc50f, .value=0xe4, .type=IO_READ},
        {.addr=0xc510, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x25a8, .a=0x54, .x=0xff, .y=0x40, .sp=0x05, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xfc}, {.addr=0x25a8, .value=0xe4}, {.addr=0x25a9, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x25aa, .a=0xfc, .x=0xff, .y=0x40, .sp=0x05, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xfc}, {.addr=0x25a8, .value=0xe4}, {.addr=0x25a9, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x25a8, .value=0xe4, .type=IO_READ},
        {.addr=0x25a9, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xd672, .a=0x2d, .x=0x7d, .y=0x6b, .sp=0x4b, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x90}, {.addr=0xd672, .value=0xe4}, {.addr=0xd673, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xd674, .a=0x90, .x=0x7d, .y=0x6b, .sp=0x4b, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x90}, {.addr=0xd672, .value=0xe4}, {.addr=0xd673, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd672, .value=0xe4, .type=IO_READ},
        {.addr=0xd673, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x93e0, .a=0x0c, .x=0xd3, .y=0xa7, .sp=0xe0, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x46}, {.addr=0x93e0, .value=0xe4}, {.addr=0x93e1, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x93e2, .a=0x46, .x=0xd3, .y=0xa7, .sp=0xe0, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x46}, {.addr=0x93e0, .value=0xe4}, {.addr=0x93e1, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x93e0, .value=0xe4, .type=IO_READ},
        {.addr=0x93e1, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf254, .a=0xa9, .x=0x78, .y=0xf8, .sp=0xa5, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xee}, {.addr=0xf254, .value=0xe4}, {.addr=0xf255, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xf256, .a=0xee, .x=0x78, .y=0xf8, .sp=0xa5, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xee}, {.addr=0xf254, .value=0xe4}, {.addr=0xf255, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf254, .value=0xe4, .type=IO_READ},
        {.addr=0xf255, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xb62c, .a=0xa2, .x=0x7c, .y=0x17, .sp=0xb4, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xff}, {.addr=0xb62c, .value=0xe4}, {.addr=0xb62d, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xb62e, .a=0xff, .x=0x7c, .y=0x17, .sp=0xb4, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xff}, {.addr=0xb62c, .value=0xe4}, {.addr=0xb62d, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb62c, .value=0xe4, .type=IO_READ},
        {.addr=0xb62d, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x5069, .a=0xe8, .x=0xdb, .y=0xa9, .sp=0xc2, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xf3}, {.addr=0x5069, .value=0xe4}, {.addr=0x506a, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x506b, .a=0xf3, .x=0xdb, .y=0xa9, .sp=0xc2, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xf3}, {.addr=0x5069, .value=0xe4}, {.addr=0x506a, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x5069, .value=0xe4, .type=IO_READ},
        {.addr=0x506a, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x242f, .a=0xc7, .x=0x2d, .y=0xc0, .sp=0x6a, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x9f}, {.addr=0x242f, .value=0xe4}, {.addr=0x2430, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x2431, .a=0x9f, .x=0x2d, .y=0xc0, .sp=0x6a, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x9f}, {.addr=0x242f, .value=0xe4}, {.addr=0x2430, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x242f, .value=0xe4, .type=IO_READ},
        {.addr=0x2430, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xbf72, .a=0x74, .x=0xc4, .y=0x44, .sp=0xda, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x47}, {.addr=0xbf72, .value=0xe4}, {.addr=0xbf73, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xbf74, .a=0x47, .x=0xc4, .y=0x44, .sp=0xda, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x47}, {.addr=0xbf72, .value=0xe4}, {.addr=0xbf73, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf72, .value=0xe4, .type=IO_READ},
        {.addr=0xbf73, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5ad2, .a=0xe7, .x=0xfe, .y=0x61, .sp=0x62, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x67}, {.addr=0x5ad2, .value=0xe4}, {.addr=0x5ad3, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x5ad4, .a=0x67, .x=0xfe, .y=0x61, .sp=0x62, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x67}, {.addr=0x5ad2, .value=0xe4}, {.addr=0x5ad3, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ad2, .value=0xe4, .type=IO_READ},
        {.addr=0x5ad3, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x5385, .a=0xe6, .x=0xb6, .y=0x33, .sp=0xa1, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x2e}, {.addr=0x5385, .value=0xe4}, {.addr=0x5386, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x5387, .a=0x2e, .x=0xb6, .y=0x33, .sp=0xa1, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x2e}, {.addr=0x5385, .value=0xe4}, {.addr=0x5386, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5385, .value=0xe4, .type=IO_READ},
        {.addr=0x5386, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x247d, .a=0x6d, .x=0x2f, .y=0x8a, .sp=0x9f, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x59}, {.addr=0x247d, .value=0xe4}, {.addr=0x247e, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x247f, .a=0x59, .x=0x2f, .y=0x8a, .sp=0x9f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x59}, {.addr=0x247d, .value=0xe4}, {.addr=0x247e, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x247d, .value=0xe4, .type=IO_READ},
        {.addr=0x247e, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1132, .a=0x2c, .x=0x62, .y=0xdb, .sp=0x6f, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xda}, {.addr=0x1132, .value=0xe4}, {.addr=0x1133, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x1134, .a=0xda, .x=0x62, .y=0xdb, .sp=0x6f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xda}, {.addr=0x1132, .value=0xe4}, {.addr=0x1133, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x1132, .value=0xe4, .type=IO_READ},
        {.addr=0x1133, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x21d1, .a=0x33, .x=0x69, .y=0xe3, .sp=0x33, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x18}, {.addr=0x21d1, .value=0xe4}, {.addr=0x21d2, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x21d3, .a=0x18, .x=0x69, .y=0xe3, .sp=0x33, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x18}, {.addr=0x21d1, .value=0xe4}, {.addr=0x21d2, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x21d1, .value=0xe4, .type=IO_READ},
        {.addr=0x21d2, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x1cb4, .a=0x5f, .x=0xa1, .y=0x88, .sp=0x66, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xad}, {.addr=0x1cb4, .value=0xe4}, {.addr=0x1cb5, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x1cb6, .a=0xad, .x=0xa1, .y=0x88, .sp=0x66, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xad}, {.addr=0x1cb4, .value=0xe4}, {.addr=0x1cb5, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cb4, .value=0xe4, .type=IO_READ},
        {.addr=0x1cb5, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xcabb, .a=0x56, .x=0x26, .y=0x06, .sp=0xd5, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x0e}, {.addr=0xcabb, .value=0xe4}, {.addr=0xcabc, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xcabd, .a=0x0e, .x=0x26, .y=0x06, .sp=0xd5, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x0e}, {.addr=0xcabb, .value=0xe4}, {.addr=0xcabc, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xcabb, .value=0xe4, .type=IO_READ},
        {.addr=0xcabc, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x8b70, .a=0x66, .x=0xef, .y=0x8c, .sp=0xcb, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x25}, {.addr=0x8b70, .value=0xe4}, {.addr=0x8b71, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x8b72, .a=0x25, .x=0xef, .y=0x8c, .sp=0xcb, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x25}, {.addr=0x8b70, .value=0xe4}, {.addr=0x8b71, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b70, .value=0xe4, .type=IO_READ},
        {.addr=0x8b71, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5bb6, .a=0xbb, .x=0x9c, .y=0xf9, .sp=0x90, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x4f}, {.addr=0x5bb6, .value=0xe4}, {.addr=0x5bb7, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x5bb8, .a=0x4f, .x=0x9c, .y=0xf9, .sp=0x90, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x4f}, {.addr=0x5bb6, .value=0xe4}, {.addr=0x5bb7, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bb6, .value=0xe4, .type=IO_READ},
        {.addr=0x5bb7, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x458f, .a=0xcc, .x=0x17, .y=0x8b, .sp=0x9f, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x21}, {.addr=0x458f, .value=0xe4}, {.addr=0x4590, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x4591, .a=0x21, .x=0x17, .y=0x8b, .sp=0x9f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x21}, {.addr=0x458f, .value=0xe4}, {.addr=0x4590, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x458f, .value=0xe4, .type=IO_READ},
        {.addr=0x4590, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x4dfc, .a=0x26, .x=0x10, .y=0xfa, .sp=0x96, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xa5}, {.addr=0x4dfc, .value=0xe4}, {.addr=0x4dfd, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x4dfe, .a=0xa5, .x=0x10, .y=0xfa, .sp=0x96, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xa5}, {.addr=0x4dfc, .value=0xe4}, {.addr=0x4dfd, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dfc, .value=0xe4, .type=IO_READ},
        {.addr=0x4dfd, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x8fcb, .a=0x9b, .x=0x2c, .y=0xf1, .sp=0x14, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x3d}, {.addr=0x8fcb, .value=0xe4}, {.addr=0x8fcc, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x8fcd, .a=0x3d, .x=0x2c, .y=0xf1, .sp=0x14, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x3d}, {.addr=0x8fcb, .value=0xe4}, {.addr=0x8fcc, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fcb, .value=0xe4, .type=IO_READ},
        {.addr=0x8fcc, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x1749, .a=0xdc, .x=0xe4, .y=0x64, .sp=0xa8, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x95}, {.addr=0x1749, .value=0xe4}, {.addr=0x174a, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x174b, .a=0x95, .x=0xe4, .y=0x64, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x95}, {.addr=0x1749, .value=0xe4}, {.addr=0x174a, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x1749, .value=0xe4, .type=IO_READ},
        {.addr=0x174a, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb2b6, .a=0xa4, .x=0x1d, .y=0x39, .sp=0x33, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x37}, {.addr=0xb2b6, .value=0xe4}, {.addr=0xb2b7, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xb2b8, .a=0x37, .x=0x1d, .y=0x39, .sp=0x33, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x37}, {.addr=0xb2b6, .value=0xe4}, {.addr=0xb2b7, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2b6, .value=0xe4, .type=IO_READ},
        {.addr=0xb2b7, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x2a59, .a=0x4e, .x=0xd6, .y=0x3c, .sp=0x72, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xe8}, {.addr=0x2a59, .value=0xe4}, {.addr=0x2a5a, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x2a5b, .a=0xe8, .x=0xd6, .y=0x3c, .sp=0x72, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xe8}, {.addr=0x2a59, .value=0xe4}, {.addr=0x2a5a, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a59, .value=0xe4, .type=IO_READ},
        {.addr=0x2a5a, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xe6d5, .a=0x8e, .x=0xb2, .y=0xb9, .sp=0xa6, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x69}, {.addr=0xe6d5, .value=0xe4}, {.addr=0xe6d6, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe6d7, .a=0x69, .x=0xb2, .y=0xb9, .sp=0xa6, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x69}, {.addr=0xe6d5, .value=0xe4}, {.addr=0xe6d6, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6d5, .value=0xe4, .type=IO_READ},
        {.addr=0xe6d6, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3c9b, .a=0x4f, .x=0xdd, .y=0x11, .sp=0x9e, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x4c}, {.addr=0x3c9b, .value=0xe4}, {.addr=0x3c9c, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x3c9d, .a=0x4c, .x=0xdd, .y=0x11, .sp=0x9e, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x4c}, {.addr=0x3c9b, .value=0xe4}, {.addr=0x3c9c, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c9b, .value=0xe4, .type=IO_READ},
        {.addr=0x3c9c, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6cad, .a=0x43, .x=0xdd, .y=0xf0, .sp=0x74, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x46}, {.addr=0x6cad, .value=0xe4}, {.addr=0x6cae, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x6caf, .a=0x46, .x=0xdd, .y=0xf0, .sp=0x74, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x46}, {.addr=0x6cad, .value=0xe4}, {.addr=0x6cae, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cad, .value=0xe4, .type=IO_READ},
        {.addr=0x6cae, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x0667, .a=0x48, .x=0x34, .y=0x85, .sp=0x58, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xb3}, {.addr=0x0667, .value=0xe4}, {.addr=0x0668, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x0669, .a=0xb3, .x=0x34, .y=0x85, .sp=0x58, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xb3}, {.addr=0x0667, .value=0xe4}, {.addr=0x0668, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x0667, .value=0xe4, .type=IO_READ},
        {.addr=0x0668, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x9032, .a=0xef, .x=0xe1, .y=0x87, .sp=0xa3, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x94}, {.addr=0x9032, .value=0xe4}, {.addr=0x9033, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x9034, .a=0x94, .x=0xe1, .y=0x87, .sp=0xa3, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x94}, {.addr=0x9032, .value=0xe4}, {.addr=0x9033, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x9032, .value=0xe4, .type=IO_READ},
        {.addr=0x9033, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x987d, .a=0xcb, .x=0xa3, .y=0x57, .sp=0xf6, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x1c}, {.addr=0x987d, .value=0xe4}, {.addr=0x987e, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x987f, .a=0x1c, .x=0xa3, .y=0x57, .sp=0xf6, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x1c}, {.addr=0x987d, .value=0xe4}, {.addr=0x987e, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x987d, .value=0xe4, .type=IO_READ},
        {.addr=0x987e, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x3ca4, .a=0x36, .x=0x32, .y=0x41, .sp=0xbf, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xb2}, {.addr=0x3ca4, .value=0xe4}, {.addr=0x3ca5, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca6, .a=0xb2, .x=0x32, .y=0x41, .sp=0xbf, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xb2}, {.addr=0x3ca4, .value=0xe4}, {.addr=0x3ca5, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca4, .value=0xe4, .type=IO_READ},
        {.addr=0x3ca5, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x1d1a, .a=0xe8, .x=0x8e, .y=0xbf, .sp=0x7c, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x5b}, {.addr=0x1d1a, .value=0xe4}, {.addr=0x1d1b, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x1d1c, .a=0x5b, .x=0x8e, .y=0xbf, .sp=0x7c, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x5b}, {.addr=0x1d1a, .value=0xe4}, {.addr=0x1d1b, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d1a, .value=0xe4, .type=IO_READ},
        {.addr=0x1d1b, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xfbce, .a=0x1b, .x=0x7b, .y=0xf3, .sp=0x80, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x04}, {.addr=0xfbce, .value=0xe4}, {.addr=0xfbcf, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xfbd0, .a=0x04, .x=0x7b, .y=0xf3, .sp=0x80, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x04}, {.addr=0xfbce, .value=0xe4}, {.addr=0xfbcf, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbce, .value=0xe4, .type=IO_READ},
        {.addr=0xfbcf, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x584f, .a=0x7d, .x=0x68, .y=0x22, .sp=0x56, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xf6}, {.addr=0x584f, .value=0xe4}, {.addr=0x5850, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x5851, .a=0xf6, .x=0x68, .y=0x22, .sp=0x56, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xf6}, {.addr=0x584f, .value=0xe4}, {.addr=0x5850, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x584f, .value=0xe4, .type=IO_READ},
        {.addr=0x5850, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x1a50, .a=0x3f, .x=0x50, .y=0x7b, .sp=0x67, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x30}, {.addr=0x1a50, .value=0xe4}, {.addr=0x1a51, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x1a52, .a=0x30, .x=0x50, .y=0x7b, .sp=0x67, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x30}, {.addr=0x1a50, .value=0xe4}, {.addr=0x1a51, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a50, .value=0xe4, .type=IO_READ},
        {.addr=0x1a51, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x7615, .a=0x09, .x=0x3c, .y=0xfd, .sp=0xba, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x0e}, {.addr=0x7615, .value=0xe4}, {.addr=0x7616, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x7617, .a=0x0e, .x=0x3c, .y=0xfd, .sp=0xba, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x0e}, {.addr=0x7615, .value=0xe4}, {.addr=0x7616, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x7615, .value=0xe4, .type=IO_READ},
        {.addr=0x7616, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6af6, .a=0xdf, .x=0x17, .y=0x66, .sp=0xb6, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x57}, {.addr=0x6af6, .value=0xe4}, {.addr=0x6af7, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x6af8, .a=0x57, .x=0x17, .y=0x66, .sp=0xb6, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x57}, {.addr=0x6af6, .value=0xe4}, {.addr=0x6af7, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6af6, .value=0xe4, .type=IO_READ},
        {.addr=0x6af7, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xd2b0, .a=0x6d, .x=0x75, .y=0x28, .sp=0x87, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xdb}, {.addr=0xd2b0, .value=0xe4}, {.addr=0xd2b1, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xd2b2, .a=0xdb, .x=0x75, .y=0x28, .sp=0x87, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xdb}, {.addr=0xd2b0, .value=0xe4}, {.addr=0xd2b1, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2b0, .value=0xe4, .type=IO_READ},
        {.addr=0xd2b1, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xba0f, .a=0x8b, .x=0x9b, .y=0x15, .sp=0xfe, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0xba0f, .value=0xe4}, {.addr=0xba10, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xba11, .a=0x04, .x=0x9b, .y=0x15, .sp=0xfe, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0xba0f, .value=0xe4}, {.addr=0xba10, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xba0f, .value=0xe4, .type=IO_READ},
        {.addr=0xba10, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x173a, .a=0xd9, .x=0x29, .y=0x82, .sp=0x76, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0x95}, {.addr=0x173a, .value=0xe4}, {.addr=0x173b, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x173c, .a=0x95, .x=0x29, .y=0x82, .sp=0x76, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0x95}, {.addr=0x173a, .value=0xe4}, {.addr=0x173b, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x173a, .value=0xe4, .type=IO_READ},
        {.addr=0x173b, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xde20, .a=0xf7, .x=0x44, .y=0xd3, .sp=0x04, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x37}, {.addr=0xde20, .value=0xe4}, {.addr=0xde21, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xde22, .a=0x37, .x=0x44, .y=0xd3, .sp=0x04, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x37}, {.addr=0xde20, .value=0xe4}, {.addr=0xde21, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xde20, .value=0xe4, .type=IO_READ},
        {.addr=0xde21, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xf2f6, .a=0x63, .x=0x36, .y=0x90, .sp=0xba, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x61}, {.addr=0xf2f6, .value=0xe4}, {.addr=0xf2f7, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xf2f8, .a=0x61, .x=0x36, .y=0x90, .sp=0xba, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x61}, {.addr=0xf2f6, .value=0xe4}, {.addr=0xf2f7, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2f6, .value=0xe4, .type=IO_READ},
        {.addr=0xf2f7, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xe8c4, .a=0xbb, .x=0x62, .y=0x97, .sp=0x30, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xac}, {.addr=0xe8c4, .value=0xe4}, {.addr=0xe8c5, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xe8c6, .a=0xac, .x=0x62, .y=0x97, .sp=0x30, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xac}, {.addr=0xe8c4, .value=0xe4}, {.addr=0xe8c5, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8c4, .value=0xe4, .type=IO_READ},
        {.addr=0xe8c5, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x9963, .a=0x59, .x=0x69, .y=0xf1, .sp=0x18, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xc8}, {.addr=0x9963, .value=0xe4}, {.addr=0x9964, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x9965, .a=0xc8, .x=0x69, .y=0xf1, .sp=0x18, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xc8}, {.addr=0x9963, .value=0xe4}, {.addr=0x9964, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9963, .value=0xe4, .type=IO_READ},
        {.addr=0x9964, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x1903, .a=0x83, .x=0x73, .y=0x9c, .sp=0x30, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xeb}, {.addr=0x1903, .value=0xe4}, {.addr=0x1904, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x1905, .a=0xeb, .x=0x73, .y=0x9c, .sp=0x30, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xeb}, {.addr=0x1903, .value=0xe4}, {.addr=0x1904, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1903, .value=0xe4, .type=IO_READ},
        {.addr=0x1904, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x47f1, .a=0xd0, .x=0x3c, .y=0xa3, .sp=0xab, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x95}, {.addr=0x47f1, .value=0xe4}, {.addr=0x47f2, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x47f3, .a=0x95, .x=0x3c, .y=0xa3, .sp=0xab, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x95}, {.addr=0x47f1, .value=0xe4}, {.addr=0x47f2, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x47f1, .value=0xe4, .type=IO_READ},
        {.addr=0x47f2, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x1652, .a=0xf2, .x=0x72, .y=0x20, .sp=0x04, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x3a}, {.addr=0x1652, .value=0xe4}, {.addr=0x1653, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x1654, .a=0x3a, .x=0x72, .y=0x20, .sp=0x04, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x3a}, {.addr=0x1652, .value=0xe4}, {.addr=0x1653, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1652, .value=0xe4, .type=IO_READ},
        {.addr=0x1653, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xf3bc, .a=0xd6, .x=0xe7, .y=0xf0, .sp=0x2a, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xbb}, {.addr=0xf3bc, .value=0xe4}, {.addr=0xf3bd, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xf3be, .a=0xbb, .x=0xe7, .y=0xf0, .sp=0x2a, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xbb}, {.addr=0xf3bc, .value=0xe4}, {.addr=0xf3bd, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3bc, .value=0xe4, .type=IO_READ},
        {.addr=0xf3bd, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xeb99, .a=0xca, .x=0x85, .y=0xd3, .sp=0xd8, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x90}, {.addr=0xeb99, .value=0xe4}, {.addr=0xeb9a, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xeb9b, .a=0x90, .x=0x85, .y=0xd3, .sp=0xd8, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x90}, {.addr=0xeb99, .value=0xe4}, {.addr=0xeb9a, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb99, .value=0xe4, .type=IO_READ},
        {.addr=0xeb9a, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x0484, .a=0xb7, .x=0xb9, .y=0x5e, .sp=0xa7, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x82}, {.addr=0x0484, .value=0xe4}, {.addr=0x0485, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x0486, .a=0x82, .x=0xb9, .y=0x5e, .sp=0xa7, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x82}, {.addr=0x0484, .value=0xe4}, {.addr=0x0485, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x0484, .value=0xe4, .type=IO_READ},
        {.addr=0x0485, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xdadd, .a=0x77, .x=0x04, .y=0xad, .sp=0x61, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x39}, {.addr=0xdadd, .value=0xe4}, {.addr=0xdade, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xdadf, .a=0x39, .x=0x04, .y=0xad, .sp=0x61, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x39}, {.addr=0xdadd, .value=0xe4}, {.addr=0xdade, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xdadd, .value=0xe4, .type=IO_READ},
        {.addr=0xdade, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x2af8, .a=0x7a, .x=0x8f, .y=0xf0, .sp=0x78, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x9b}, {.addr=0x2af8, .value=0xe4}, {.addr=0x2af9, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x2afa, .a=0x9b, .x=0x8f, .y=0xf0, .sp=0x78, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x9b}, {.addr=0x2af8, .value=0xe4}, {.addr=0x2af9, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2af8, .value=0xe4, .type=IO_READ},
        {.addr=0x2af9, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x79bf, .a=0x31, .x=0xb5, .y=0x27, .sp=0x62, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x67}, {.addr=0x79bf, .value=0xe4}, {.addr=0x79c0, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x79c1, .a=0x67, .x=0xb5, .y=0x27, .sp=0x62, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x67}, {.addr=0x79bf, .value=0xe4}, {.addr=0x79c0, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x79bf, .value=0xe4, .type=IO_READ},
        {.addr=0x79c0, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa608, .a=0x39, .x=0xb5, .y=0x73, .sp=0x45, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xcb}, {.addr=0xa608, .value=0xe4}, {.addr=0xa609, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xa60a, .a=0xcb, .x=0xb5, .y=0x73, .sp=0x45, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xcb}, {.addr=0xa608, .value=0xe4}, {.addr=0xa609, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xa608, .value=0xe4, .type=IO_READ},
        {.addr=0xa609, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x53b6, .a=0xa3, .x=0xc6, .y=0x8d, .sp=0xe8, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xdc}, {.addr=0x53b6, .value=0xe4}, {.addr=0x53b7, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x53b8, .a=0xdc, .x=0xc6, .y=0x8d, .sp=0xe8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xdc}, {.addr=0x53b6, .value=0xe4}, {.addr=0x53b7, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x53b6, .value=0xe4, .type=IO_READ},
        {.addr=0x53b7, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xadd6, .a=0xbc, .x=0x13, .y=0x7c, .sp=0x58, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xe0}, {.addr=0xadd6, .value=0xe4}, {.addr=0xadd7, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xadd8, .a=0xe0, .x=0x13, .y=0x7c, .sp=0x58, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xe0}, {.addr=0xadd6, .value=0xe4}, {.addr=0xadd7, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xadd6, .value=0xe4, .type=IO_READ},
        {.addr=0xadd7, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xf6d2, .a=0xb7, .x=0x57, .y=0x53, .sp=0x10, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x59}, {.addr=0xf6d2, .value=0xe4}, {.addr=0xf6d3, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xf6d4, .a=0x59, .x=0x57, .y=0x53, .sp=0x10, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x59}, {.addr=0xf6d2, .value=0xe4}, {.addr=0xf6d3, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6d2, .value=0xe4, .type=IO_READ},
        {.addr=0xf6d3, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5c88, .a=0x19, .x=0x1b, .y=0xe8, .sp=0x89, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x3d}, {.addr=0x5c88, .value=0xe4}, {.addr=0x5c89, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x5c8a, .a=0x3d, .x=0x1b, .y=0xe8, .sp=0x89, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x3d}, {.addr=0x5c88, .value=0xe4}, {.addr=0x5c89, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c88, .value=0xe4, .type=IO_READ},
        {.addr=0x5c89, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x0fc5, .a=0xa1, .x=0xfa, .y=0x52, .sp=0x1e, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x21}, {.addr=0x0fc5, .value=0xe4}, {.addr=0x0fc6, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x0fc7, .a=0x21, .x=0xfa, .y=0x52, .sp=0x1e, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x21}, {.addr=0x0fc5, .value=0xe4}, {.addr=0x0fc6, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fc5, .value=0xe4, .type=IO_READ},
        {.addr=0x0fc6, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x40d9, .a=0x97, .x=0x85, .y=0xc3, .sp=0xcd, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xab}, {.addr=0x40d9, .value=0xe4}, {.addr=0x40da, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x40db, .a=0xab, .x=0x85, .y=0xc3, .sp=0xcd, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xab}, {.addr=0x40d9, .value=0xe4}, {.addr=0x40da, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x40d9, .value=0xe4, .type=IO_READ},
        {.addr=0x40da, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc41a, .a=0xb1, .x=0xb7, .y=0x82, .sp=0x10, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xf8}, {.addr=0xc41a, .value=0xe4}, {.addr=0xc41b, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xc41c, .a=0xf8, .x=0xb7, .y=0x82, .sp=0x10, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xf8}, {.addr=0xc41a, .value=0xe4}, {.addr=0xc41b, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xc41a, .value=0xe4, .type=IO_READ},
        {.addr=0xc41b, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xdbbe, .a=0xf0, .x=0xcf, .y=0x27, .sp=0xec, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x27}, {.addr=0xdbbe, .value=0xe4}, {.addr=0xdbbf, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xdbc0, .a=0x27, .x=0xcf, .y=0x27, .sp=0xec, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x27}, {.addr=0xdbbe, .value=0xe4}, {.addr=0xdbbf, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbbe, .value=0xe4, .type=IO_READ},
        {.addr=0xdbbf, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x74bb, .a=0x8c, .x=0x2d, .y=0xe5, .sp=0x8f, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x31}, {.addr=0x74bb, .value=0xe4}, {.addr=0x74bc, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x74bd, .a=0x31, .x=0x2d, .y=0xe5, .sp=0x8f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x31}, {.addr=0x74bb, .value=0xe4}, {.addr=0x74bc, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x74bb, .value=0xe4, .type=IO_READ},
        {.addr=0x74bc, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x1147, .a=0xd1, .x=0xf9, .y=0xa3, .sp=0x79, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x8a}, {.addr=0x1147, .value=0xe4}, {.addr=0x1148, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x1149, .a=0x8a, .x=0xf9, .y=0xa3, .sp=0x79, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x8a}, {.addr=0x1147, .value=0xe4}, {.addr=0x1148, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x1147, .value=0xe4, .type=IO_READ},
        {.addr=0x1148, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xda3f, .a=0x2c, .x=0x9d, .y=0x33, .sp=0x73, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xcb}, {.addr=0xda3f, .value=0xe4}, {.addr=0xda40, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xda41, .a=0xcb, .x=0x9d, .y=0x33, .sp=0x73, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xcb}, {.addr=0xda3f, .value=0xe4}, {.addr=0xda40, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xda3f, .value=0xe4, .type=IO_READ},
        {.addr=0xda40, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc8ef, .a=0x4a, .x=0xf6, .y=0x27, .sp=0xcf, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x6e}, {.addr=0xc8ef, .value=0xe4}, {.addr=0xc8f0, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xc8f1, .a=0x6e, .x=0xf6, .y=0x27, .sp=0xcf, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x6e}, {.addr=0xc8ef, .value=0xe4}, {.addr=0xc8f0, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8ef, .value=0xe4, .type=IO_READ},
        {.addr=0xc8f0, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x5aa9, .a=0xe5, .x=0xd5, .y=0xee, .sp=0xd2, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x89}, {.addr=0x5aa9, .value=0xe4}, {.addr=0x5aaa, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x5aab, .a=0x89, .x=0xd5, .y=0xee, .sp=0xd2, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x89}, {.addr=0x5aa9, .value=0xe4}, {.addr=0x5aaa, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5aa9, .value=0xe4, .type=IO_READ},
        {.addr=0x5aaa, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4e8f, .a=0xa2, .x=0x73, .y=0xdf, .sp=0x05, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x8e}, {.addr=0x4e8f, .value=0xe4}, {.addr=0x4e90, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x4e91, .a=0x8e, .x=0x73, .y=0xdf, .sp=0x05, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x8e}, {.addr=0x4e8f, .value=0xe4}, {.addr=0x4e90, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e8f, .value=0xe4, .type=IO_READ},
        {.addr=0x4e90, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x8304, .a=0xe2, .x=0x13, .y=0x7c, .sp=0x6e, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x19}, {.addr=0x8304, .value=0xe4}, {.addr=0x8305, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x8306, .a=0x19, .x=0x13, .y=0x7c, .sp=0x6e, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x19}, {.addr=0x8304, .value=0xe4}, {.addr=0x8305, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8304, .value=0xe4, .type=IO_READ},
        {.addr=0x8305, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x75a0, .a=0xda, .x=0xc9, .y=0x2a, .sp=0xc7, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x74}, {.addr=0x75a0, .value=0xe4}, {.addr=0x75a1, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x75a2, .a=0x74, .x=0xc9, .y=0x2a, .sp=0xc7, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x74}, {.addr=0x75a0, .value=0xe4}, {.addr=0x75a1, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x75a0, .value=0xe4, .type=IO_READ},
        {.addr=0x75a1, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8dad, .a=0x58, .x=0xf4, .y=0x37, .sp=0x47, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xfb}, {.addr=0x8dad, .value=0xe4}, {.addr=0x8dae, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x8daf, .a=0xfb, .x=0xf4, .y=0x37, .sp=0x47, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xfb}, {.addr=0x8dad, .value=0xe4}, {.addr=0x8dae, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dad, .value=0xe4, .type=IO_READ},
        {.addr=0x8dae, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xbb85, .a=0x5c, .x=0xd8, .y=0x5c, .sp=0x33, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x5e}, {.addr=0xbb85, .value=0xe4}, {.addr=0xbb86, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xbb87, .a=0x5e, .x=0xd8, .y=0x5c, .sp=0x33, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x5e}, {.addr=0xbb85, .value=0xe4}, {.addr=0xbb86, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb85, .value=0xe4, .type=IO_READ},
        {.addr=0xbb86, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xaaf0, .a=0x23, .x=0x18, .y=0x6b, .sp=0x05, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x4d}, {.addr=0xaaf0, .value=0xe4}, {.addr=0xaaf1, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xaaf2, .a=0x4d, .x=0x18, .y=0x6b, .sp=0x05, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x4d}, {.addr=0xaaf0, .value=0xe4}, {.addr=0xaaf1, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xaaf0, .value=0xe4, .type=IO_READ},
        {.addr=0xaaf1, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x8c55, .a=0x29, .x=0x15, .y=0xed, .sp=0x92, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x43}, {.addr=0x8c55, .value=0xe4}, {.addr=0x8c56, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x8c57, .a=0x43, .x=0x15, .y=0xed, .sp=0x92, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x43}, {.addr=0x8c55, .value=0xe4}, {.addr=0x8c56, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c55, .value=0xe4, .type=IO_READ},
        {.addr=0x8c56, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0xd7, .x=0x28, .y=0xb4, .sp=0x2e, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0xbf}, {.addr=0x6965, .value=0xe4}, {.addr=0x6966, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x6967, .a=0xbf, .x=0x28, .y=0xb4, .sp=0x2e, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0xbf}, {.addr=0x6965, .value=0xe4}, {.addr=0x6966, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0xe4, .type=IO_READ},
        {.addr=0x6966, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x145b, .a=0x32, .x=0xac, .y=0x72, .sp=0xa4, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x6a}, {.addr=0x145b, .value=0xe4}, {.addr=0x145c, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x145d, .a=0x6a, .x=0xac, .y=0x72, .sp=0xa4, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x6a}, {.addr=0x145b, .value=0xe4}, {.addr=0x145c, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x145b, .value=0xe4, .type=IO_READ},
        {.addr=0x145c, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x66e1, .a=0x67, .x=0xdf, .y=0x5a, .sp=0x34, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x01}, {.addr=0x66e1, .value=0xe4}, {.addr=0x66e2, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x66e3, .a=0x01, .x=0xdf, .y=0x5a, .sp=0x34, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x01}, {.addr=0x66e1, .value=0xe4}, {.addr=0x66e2, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x66e1, .value=0xe4, .type=IO_READ},
        {.addr=0x66e2, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xfbaa, .a=0xa2, .x=0x43, .y=0x14, .sp=0x6b, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x26}, {.addr=0xfbaa, .value=0xe4}, {.addr=0xfbab, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xfbac, .a=0x26, .x=0x43, .y=0x14, .sp=0x6b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x26}, {.addr=0xfbaa, .value=0xe4}, {.addr=0xfbab, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbaa, .value=0xe4, .type=IO_READ},
        {.addr=0xfbab, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0100) {
    const struct CPU_State initial_cpu = {.pc=0xce46, .a=0x27, .x=0x30, .y=0xc8, .sp=0xde, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0xe7}, {.addr=0xce46, .value=0xe4}, {.addr=0xce47, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xce48, .a=0xe7, .x=0x30, .y=0xc8, .sp=0xde, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0xe7}, {.addr=0xce46, .value=0xe4}, {.addr=0xce47, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xce46, .value=0xe4, .type=IO_READ},
        {.addr=0xce47, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0101) {
    const struct CPU_State initial_cpu = {.pc=0x0d7a, .a=0xe2, .x=0x44, .y=0x73, .sp=0x79, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x36}, {.addr=0x0d7a, .value=0xe4}, {.addr=0x0d7b, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x0d7c, .a=0x36, .x=0x44, .y=0x73, .sp=0x79, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x36}, {.addr=0x0d7a, .value=0xe4}, {.addr=0x0d7b, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d7a, .value=0xe4, .type=IO_READ},
        {.addr=0x0d7b, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0102) {
    const struct CPU_State initial_cpu = {.pc=0xda62, .a=0x9c, .x=0x2b, .y=0x62, .sp=0x49, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x70}, {.addr=0xda62, .value=0xe4}, {.addr=0xda63, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xda64, .a=0x70, .x=0x2b, .y=0x62, .sp=0x49, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x70}, {.addr=0xda62, .value=0xe4}, {.addr=0xda63, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xda62, .value=0xe4, .type=IO_READ},
        {.addr=0xda63, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0103) {
    const struct CPU_State initial_cpu = {.pc=0xe678, .a=0xcd, .x=0x2a, .y=0xfc, .sp=0x7b, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xc2}, {.addr=0xe678, .value=0xe4}, {.addr=0xe679, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xe67a, .a=0xc2, .x=0x2a, .y=0xfc, .sp=0x7b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xc2}, {.addr=0xe678, .value=0xe4}, {.addr=0xe679, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xe678, .value=0xe4, .type=IO_READ},
        {.addr=0xe679, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0104) {
    const struct CPU_State initial_cpu = {.pc=0x63b2, .a=0xf3, .x=0xeb, .y=0x42, .sp=0xcd, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x0a}, {.addr=0x63b2, .value=0xe4}, {.addr=0x63b3, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x63b4, .a=0x0a, .x=0xeb, .y=0x42, .sp=0xcd, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x0a}, {.addr=0x63b2, .value=0xe4}, {.addr=0x63b3, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x63b2, .value=0xe4, .type=IO_READ},
        {.addr=0x63b3, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0106) {
    const struct CPU_State initial_cpu = {.pc=0xd48c, .a=0x7c, .x=0x9f, .y=0x07, .sp=0x67, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x22}, {.addr=0xd48c, .value=0xe4}, {.addr=0xd48d, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xd48e, .a=0x22, .x=0x9f, .y=0x07, .sp=0x67, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x22}, {.addr=0xd48c, .value=0xe4}, {.addr=0xd48d, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xd48c, .value=0xe4, .type=IO_READ},
        {.addr=0xd48d, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0107) {
    const struct CPU_State initial_cpu = {.pc=0xbdae, .a=0x33, .x=0x29, .y=0x36, .sp=0x0a, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x46}, {.addr=0xbdae, .value=0xe4}, {.addr=0xbdaf, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xbdb0, .a=0x46, .x=0x29, .y=0x36, .sp=0x0a, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x46}, {.addr=0xbdae, .value=0xe4}, {.addr=0xbdaf, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdae, .value=0xe4, .type=IO_READ},
        {.addr=0xbdaf, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0108) {
    const struct CPU_State initial_cpu = {.pc=0x9b2a, .a=0x16, .x=0xdd, .y=0x5e, .sp=0xe3, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xe7}, {.addr=0x9b2a, .value=0xe4}, {.addr=0x9b2b, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x9b2c, .a=0xe7, .x=0xdd, .y=0x5e, .sp=0xe3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xe7}, {.addr=0x9b2a, .value=0xe4}, {.addr=0x9b2b, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b2a, .value=0xe4, .type=IO_READ},
        {.addr=0x9b2b, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0109) {
    const struct CPU_State initial_cpu = {.pc=0xa30a, .a=0xbb, .x=0x6a, .y=0xa0, .sp=0x52, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x8f}, {.addr=0xa30a, .value=0xe4}, {.addr=0xa30b, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xa30c, .a=0x8f, .x=0x6a, .y=0xa0, .sp=0x52, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x8f}, {.addr=0xa30a, .value=0xe4}, {.addr=0xa30b, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa30a, .value=0xe4, .type=IO_READ},
        {.addr=0xa30b, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010A) {
    const struct CPU_State initial_cpu = {.pc=0x490b, .a=0xb9, .x=0xf2, .y=0x87, .sp=0x34, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x30}, {.addr=0x490b, .value=0xe4}, {.addr=0x490c, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x490d, .a=0x30, .x=0xf2, .y=0x87, .sp=0x34, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x30}, {.addr=0x490b, .value=0xe4}, {.addr=0x490c, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x490b, .value=0xe4, .type=IO_READ},
        {.addr=0x490c, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa9d4, .a=0x20, .x=0x2d, .y=0xfe, .sp=0x7c, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xbe}, {.addr=0xa9d4, .value=0xe4}, {.addr=0xa9d5, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xa9d6, .a=0xbe, .x=0x2d, .y=0xfe, .sp=0x7c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xbe}, {.addr=0xa9d4, .value=0xe4}, {.addr=0xa9d5, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9d4, .value=0xe4, .type=IO_READ},
        {.addr=0xa9d5, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010C) {
    const struct CPU_State initial_cpu = {.pc=0x29f8, .a=0x3f, .x=0xaf, .y=0x2b, .sp=0x5f, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x55}, {.addr=0x29f8, .value=0xe4}, {.addr=0x29f9, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x29fa, .a=0x55, .x=0xaf, .y=0x2b, .sp=0x5f, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x55}, {.addr=0x29f8, .value=0xe4}, {.addr=0x29f9, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x29f8, .value=0xe4, .type=IO_READ},
        {.addr=0x29f9, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010D) {
    const struct CPU_State initial_cpu = {.pc=0xe382, .a=0x05, .x=0x38, .y=0xdd, .sp=0xd4, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x5d}, {.addr=0xe382, .value=0xe4}, {.addr=0xe383, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xe384, .a=0x5d, .x=0x38, .y=0xdd, .sp=0xd4, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x5d}, {.addr=0xe382, .value=0xe4}, {.addr=0xe383, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xe382, .value=0xe4, .type=IO_READ},
        {.addr=0xe383, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010E) {
    const struct CPU_State initial_cpu = {.pc=0x18d9, .a=0xa3, .x=0x82, .y=0xa4, .sp=0x5d, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x49}, {.addr=0x18d9, .value=0xe4}, {.addr=0x18da, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x18db, .a=0x49, .x=0x82, .y=0xa4, .sp=0x5d, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x49}, {.addr=0x18d9, .value=0xe4}, {.addr=0x18da, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x18d9, .value=0xe4, .type=IO_READ},
        {.addr=0x18da, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_010F) {
    const struct CPU_State initial_cpu = {.pc=0x045a, .a=0x4d, .x=0x9f, .y=0xd6, .sp=0x6b, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x5f}, {.addr=0x045a, .value=0xe4}, {.addr=0x045b, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x045c, .a=0x5f, .x=0x9f, .y=0xd6, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x5f}, {.addr=0x045a, .value=0xe4}, {.addr=0x045b, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x045a, .value=0xe4, .type=IO_READ},
        {.addr=0x045b, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0110) {
    const struct CPU_State initial_cpu = {.pc=0xcf0f, .a=0x61, .x=0xdd, .y=0x51, .sp=0xa6, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x29}, {.addr=0xcf0f, .value=0xe4}, {.addr=0xcf10, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xcf11, .a=0x29, .x=0xdd, .y=0x51, .sp=0xa6, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x29}, {.addr=0xcf0f, .value=0xe4}, {.addr=0xcf10, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf0f, .value=0xe4, .type=IO_READ},
        {.addr=0xcf10, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0111) {
    const struct CPU_State initial_cpu = {.pc=0x65a7, .a=0xaf, .x=0x1e, .y=0x94, .sp=0xd3, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xc9}, {.addr=0x65a7, .value=0xe4}, {.addr=0x65a8, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x65a9, .a=0xc9, .x=0x1e, .y=0x94, .sp=0xd3, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xc9}, {.addr=0x65a7, .value=0xe4}, {.addr=0x65a8, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x65a7, .value=0xe4, .type=IO_READ},
        {.addr=0x65a8, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc818, .a=0x4f, .x=0x57, .y=0x97, .sp=0x53, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x5b}, {.addr=0xc818, .value=0xe4}, {.addr=0xc819, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xc81a, .a=0x5b, .x=0x57, .y=0x97, .sp=0x53, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x5b}, {.addr=0xc818, .value=0xe4}, {.addr=0xc819, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc818, .value=0xe4, .type=IO_READ},
        {.addr=0xc819, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2e2a, .a=0x99, .x=0x5c, .y=0xdb, .sp=0x95, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x50}, {.addr=0x2e2a, .value=0xe4}, {.addr=0x2e2b, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x2e2c, .a=0x50, .x=0x5c, .y=0xdb, .sp=0x95, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x50}, {.addr=0x2e2a, .value=0xe4}, {.addr=0x2e2b, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e2a, .value=0xe4, .type=IO_READ},
        {.addr=0x2e2b, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0114) {
    const struct CPU_State initial_cpu = {.pc=0xc0b2, .a=0x78, .x=0xd2, .y=0xaf, .sp=0x78, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xf7}, {.addr=0xc0b2, .value=0xe4}, {.addr=0xc0b3, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xc0b4, .a=0xf7, .x=0xd2, .y=0xaf, .sp=0x78, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xf7}, {.addr=0xc0b2, .value=0xe4}, {.addr=0xc0b3, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0b2, .value=0xe4, .type=IO_READ},
        {.addr=0xc0b3, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb952, .a=0xe6, .x=0x18, .y=0xaa, .sp=0xac, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xfd}, {.addr=0xb952, .value=0xe4}, {.addr=0xb953, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xb954, .a=0xfd, .x=0x18, .y=0xaa, .sp=0xac, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xfd}, {.addr=0xb952, .value=0xe4}, {.addr=0xb953, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb952, .value=0xe4, .type=IO_READ},
        {.addr=0xb953, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0116) {
    const struct CPU_State initial_cpu = {.pc=0xcab1, .a=0xc2, .x=0xfd, .y=0x02, .sp=0x3d, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x2e}, {.addr=0xcab1, .value=0xe4}, {.addr=0xcab2, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xcab3, .a=0x2e, .x=0xfd, .y=0x02, .sp=0x3d, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x2e}, {.addr=0xcab1, .value=0xe4}, {.addr=0xcab2, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xcab1, .value=0xe4, .type=IO_READ},
        {.addr=0xcab2, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0117) {
    const struct CPU_State initial_cpu = {.pc=0x78b3, .a=0xd1, .x=0xb0, .y=0x0c, .sp=0x89, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xe0}, {.addr=0x78b3, .value=0xe4}, {.addr=0x78b4, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x78b5, .a=0xe0, .x=0xb0, .y=0x0c, .sp=0x89, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xe0}, {.addr=0x78b3, .value=0xe4}, {.addr=0x78b4, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x78b3, .value=0xe4, .type=IO_READ},
        {.addr=0x78b4, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0118) {
    const struct CPU_State initial_cpu = {.pc=0x020b, .a=0x3b, .x=0xc9, .y=0x24, .sp=0xdb, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x6f}, {.addr=0x020b, .value=0xe4}, {.addr=0x020c, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x020d, .a=0x6f, .x=0xc9, .y=0x24, .sp=0xdb, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x6f}, {.addr=0x020b, .value=0xe4}, {.addr=0x020c, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x020b, .value=0xe4, .type=IO_READ},
        {.addr=0x020c, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0119) {
    const struct CPU_State initial_cpu = {.pc=0x3090, .a=0xf3, .x=0x78, .y=0xb0, .sp=0xfb, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x4b}, {.addr=0x3090, .value=0xe4}, {.addr=0x3091, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x3092, .a=0x4b, .x=0x78, .y=0xb0, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x4b}, {.addr=0x3090, .value=0xe4}, {.addr=0x3091, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x3090, .value=0xe4, .type=IO_READ},
        {.addr=0x3091, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011A) {
    const struct CPU_State initial_cpu = {.pc=0x54b0, .a=0x71, .x=0x65, .y=0xe8, .sp=0x48, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x3c}, {.addr=0x54b0, .value=0xe4}, {.addr=0x54b1, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x54b2, .a=0x3c, .x=0x65, .y=0xe8, .sp=0x48, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x3c}, {.addr=0x54b0, .value=0xe4}, {.addr=0x54b1, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x54b0, .value=0xe4, .type=IO_READ},
        {.addr=0x54b1, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011B) {
    const struct CPU_State initial_cpu = {.pc=0xe94e, .a=0x66, .x=0xb5, .y=0x74, .sp=0x14, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x4b}, {.addr=0xe94e, .value=0xe4}, {.addr=0xe94f, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xe950, .a=0x4b, .x=0xb5, .y=0x74, .sp=0x14, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x4b}, {.addr=0xe94e, .value=0xe4}, {.addr=0xe94f, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xe94e, .value=0xe4, .type=IO_READ},
        {.addr=0xe94f, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011C) {
    const struct CPU_State initial_cpu = {.pc=0x661d, .a=0x5b, .x=0xcc, .y=0x69, .sp=0x64, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x28}, {.addr=0x661d, .value=0xe4}, {.addr=0x661e, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x661f, .a=0x28, .x=0xcc, .y=0x69, .sp=0x64, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x28}, {.addr=0x661d, .value=0xe4}, {.addr=0x661e, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x661d, .value=0xe4, .type=IO_READ},
        {.addr=0x661e, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011D) {
    const struct CPU_State initial_cpu = {.pc=0x030b, .a=0xf8, .x=0x8a, .y=0x20, .sp=0x0c, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x30}, {.addr=0x030b, .value=0xe4}, {.addr=0x030c, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x030d, .a=0x30, .x=0x8a, .y=0x20, .sp=0x0c, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x30}, {.addr=0x030b, .value=0xe4}, {.addr=0x030c, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x030b, .value=0xe4, .type=IO_READ},
        {.addr=0x030c, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011E) {
    const struct CPU_State initial_cpu = {.pc=0xc83b, .a=0x05, .x=0x96, .y=0xba, .sp=0x22, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x1d}, {.addr=0xc83b, .value=0xe4}, {.addr=0xc83c, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xc83d, .a=0x1d, .x=0x96, .y=0xba, .sp=0x22, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x1d}, {.addr=0xc83b, .value=0xe4}, {.addr=0xc83c, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xc83b, .value=0xe4, .type=IO_READ},
        {.addr=0xc83c, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_011F) {
    const struct CPU_State initial_cpu = {.pc=0x3c8d, .a=0x84, .x=0xc7, .y=0x9a, .sp=0xd5, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x03}, {.addr=0x3c8d, .value=0xe4}, {.addr=0x3c8e, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x3c8f, .a=0x03, .x=0xc7, .y=0x9a, .sp=0xd5, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x03}, {.addr=0x3c8d, .value=0xe4}, {.addr=0x3c8e, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c8d, .value=0xe4, .type=IO_READ},
        {.addr=0x3c8e, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0120) {
    const struct CPU_State initial_cpu = {.pc=0xa02b, .a=0xec, .x=0xa6, .y=0xc8, .sp=0x01, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x99}, {.addr=0xa02b, .value=0xe4}, {.addr=0xa02c, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xa02d, .a=0x99, .x=0xa6, .y=0xc8, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x99}, {.addr=0xa02b, .value=0xe4}, {.addr=0xa02c, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xa02b, .value=0xe4, .type=IO_READ},
        {.addr=0xa02c, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6acc, .a=0x2d, .x=0xb0, .y=0xd0, .sp=0xdf, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0x11}, {.addr=0x6acc, .value=0xe4}, {.addr=0x6acd, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x6ace, .a=0x11, .x=0xb0, .y=0xd0, .sp=0xdf, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0x11}, {.addr=0x6acc, .value=0xe4}, {.addr=0x6acd, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6acc, .value=0xe4, .type=IO_READ},
        {.addr=0x6acd, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0122) {
    const struct CPU_State initial_cpu = {.pc=0xb99b, .a=0x22, .x=0xb6, .y=0x3d, .sp=0x27, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x86}, {.addr=0xb99b, .value=0xe4}, {.addr=0xb99c, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xb99d, .a=0x86, .x=0xb6, .y=0x3d, .sp=0x27, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x86}, {.addr=0xb99b, .value=0xe4}, {.addr=0xb99c, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb99b, .value=0xe4, .type=IO_READ},
        {.addr=0xb99c, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf15f, .a=0x86, .x=0x39, .y=0x9a, .sp=0x8d, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x8d}, {.addr=0xf15f, .value=0xe4}, {.addr=0xf160, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xf161, .a=0x8d, .x=0x39, .y=0x9a, .sp=0x8d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x8d}, {.addr=0xf15f, .value=0xe4}, {.addr=0xf160, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf15f, .value=0xe4, .type=IO_READ},
        {.addr=0xf160, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0124) {
    const struct CPU_State initial_cpu = {.pc=0xa724, .a=0xd0, .x=0x5d, .y=0x75, .sp=0xaa, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x10}, {.addr=0xa724, .value=0xe4}, {.addr=0xa725, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xa726, .a=0x10, .x=0x5d, .y=0x75, .sp=0xaa, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x10}, {.addr=0xa724, .value=0xe4}, {.addr=0xa725, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa724, .value=0xe4, .type=IO_READ},
        {.addr=0xa725, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4144, .a=0xc1, .x=0xca, .y=0xf1, .sp=0xdd, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xfb}, {.addr=0x4144, .value=0xe4}, {.addr=0x4145, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x4146, .a=0xfb, .x=0xca, .y=0xf1, .sp=0xdd, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xfb}, {.addr=0x4144, .value=0xe4}, {.addr=0x4145, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x4144, .value=0xe4, .type=IO_READ},
        {.addr=0x4145, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0126) {
    const struct CPU_State initial_cpu = {.pc=0x32f6, .a=0xcb, .x=0x00, .y=0x36, .sp=0xc8, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xe1}, {.addr=0x32f6, .value=0xe4}, {.addr=0x32f7, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x32f8, .a=0xe1, .x=0x00, .y=0x36, .sp=0xc8, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xe1}, {.addr=0x32f6, .value=0xe4}, {.addr=0x32f7, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x32f6, .value=0xe4, .type=IO_READ},
        {.addr=0x32f7, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0128) {
    const struct CPU_State initial_cpu = {.pc=0x45a8, .a=0xff, .x=0x37, .y=0xec, .sp=0x0f, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xa9}, {.addr=0x45a8, .value=0xe4}, {.addr=0x45a9, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x45aa, .a=0xa9, .x=0x37, .y=0xec, .sp=0x0f, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xa9}, {.addr=0x45a8, .value=0xe4}, {.addr=0x45a9, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x45a8, .value=0xe4, .type=IO_READ},
        {.addr=0x45a9, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0129) {
    const struct CPU_State initial_cpu = {.pc=0xab0b, .a=0x14, .x=0x59, .y=0xff, .sp=0xc5, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x63}, {.addr=0xab0b, .value=0xe4}, {.addr=0xab0c, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xab0d, .a=0x63, .x=0x59, .y=0xff, .sp=0xc5, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x63}, {.addr=0xab0b, .value=0xe4}, {.addr=0xab0c, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xab0b, .value=0xe4, .type=IO_READ},
        {.addr=0xab0c, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012A) {
    const struct CPU_State initial_cpu = {.pc=0xd120, .a=0x71, .x=0x77, .y=0x2d, .sp=0x33, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x99}, {.addr=0xd120, .value=0xe4}, {.addr=0xd121, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xd122, .a=0x99, .x=0x77, .y=0x2d, .sp=0x33, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x99}, {.addr=0xd120, .value=0xe4}, {.addr=0xd121, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd120, .value=0xe4, .type=IO_READ},
        {.addr=0xd121, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc0e0, .a=0x86, .x=0x77, .y=0x37, .sp=0xac, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x4f}, {.addr=0xc0e0, .value=0xe4}, {.addr=0xc0e1, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xc0e2, .a=0x4f, .x=0x77, .y=0x37, .sp=0xac, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x4f}, {.addr=0xc0e0, .value=0xe4}, {.addr=0xc0e1, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0e0, .value=0xe4, .type=IO_READ},
        {.addr=0xc0e1, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012C) {
    const struct CPU_State initial_cpu = {.pc=0x9ed1, .a=0xde, .x=0x07, .y=0xbb, .sp=0x4e, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x89}, {.addr=0x9ed1, .value=0xe4}, {.addr=0x9ed2, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x9ed3, .a=0x89, .x=0x07, .y=0xbb, .sp=0x4e, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x89}, {.addr=0x9ed1, .value=0xe4}, {.addr=0x9ed2, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ed1, .value=0xe4, .type=IO_READ},
        {.addr=0x9ed2, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012D) {
    const struct CPU_State initial_cpu = {.pc=0x7f05, .a=0x11, .x=0x62, .y=0x1c, .sp=0x25, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x04}, {.addr=0x7f05, .value=0xe4}, {.addr=0x7f06, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x7f07, .a=0x04, .x=0x62, .y=0x1c, .sp=0x25, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x04}, {.addr=0x7f05, .value=0xe4}, {.addr=0x7f06, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f05, .value=0xe4, .type=IO_READ},
        {.addr=0x7f06, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012E) {
    const struct CPU_State initial_cpu = {.pc=0xe5ac, .a=0x43, .x=0xd0, .y=0xbf, .sp=0x62, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x83}, {.addr=0xe5ac, .value=0xe4}, {.addr=0xe5ad, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe5ae, .a=0x83, .x=0xd0, .y=0xbf, .sp=0x62, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x83}, {.addr=0xe5ac, .value=0xe4}, {.addr=0xe5ad, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5ac, .value=0xe4, .type=IO_READ},
        {.addr=0xe5ad, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_012F) {
    const struct CPU_State initial_cpu = {.pc=0xf46b, .a=0x7a, .x=0x6e, .y=0x57, .sp=0x53, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x8d}, {.addr=0xf46b, .value=0xe4}, {.addr=0xf46c, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xf46d, .a=0x8d, .x=0x6e, .y=0x57, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x8d}, {.addr=0xf46b, .value=0xe4}, {.addr=0xf46c, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf46b, .value=0xe4, .type=IO_READ},
        {.addr=0xf46c, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0130) {
    const struct CPU_State initial_cpu = {.pc=0x4a25, .a=0x29, .x=0xa1, .y=0xb2, .sp=0xb4, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x67}, {.addr=0x4a25, .value=0xe4}, {.addr=0x4a26, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x4a27, .a=0x67, .x=0xa1, .y=0xb2, .sp=0xb4, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x67}, {.addr=0x4a25, .value=0xe4}, {.addr=0x4a26, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a25, .value=0xe4, .type=IO_READ},
        {.addr=0x4a26, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb6db, .a=0xe8, .x=0x39, .y=0x4d, .sp=0x7d, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x92}, {.addr=0xb6db, .value=0xe4}, {.addr=0xb6dc, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xb6dd, .a=0x92, .x=0x39, .y=0x4d, .sp=0x7d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x92}, {.addr=0xb6db, .value=0xe4}, {.addr=0xb6dc, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6db, .value=0xe4, .type=IO_READ},
        {.addr=0xb6dc, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0132) {
    const struct CPU_State initial_cpu = {.pc=0x66a6, .a=0x55, .x=0xd4, .y=0x6c, .sp=0x9c, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xa7}, {.addr=0x66a6, .value=0xe4}, {.addr=0x66a7, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x66a8, .a=0xa7, .x=0xd4, .y=0x6c, .sp=0x9c, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xa7}, {.addr=0x66a6, .value=0xe4}, {.addr=0x66a7, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x66a6, .value=0xe4, .type=IO_READ},
        {.addr=0x66a7, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0133) {
    const struct CPU_State initial_cpu = {.pc=0x0b73, .a=0xce, .x=0x33, .y=0x49, .sp=0x93, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xde}, {.addr=0x0b73, .value=0xe4}, {.addr=0x0b74, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x0b75, .a=0xde, .x=0x33, .y=0x49, .sp=0x93, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xde}, {.addr=0x0b73, .value=0xe4}, {.addr=0x0b74, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b73, .value=0xe4, .type=IO_READ},
        {.addr=0x0b74, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0134) {
    const struct CPU_State initial_cpu = {.pc=0x5b4a, .a=0x1e, .x=0xa4, .y=0xcc, .sp=0x3f, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x0e}, {.addr=0x5b4a, .value=0xe4}, {.addr=0x5b4b, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x5b4c, .a=0x0e, .x=0xa4, .y=0xcc, .sp=0x3f, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x0e}, {.addr=0x5b4a, .value=0xe4}, {.addr=0x5b4b, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b4a, .value=0xe4, .type=IO_READ},
        {.addr=0x5b4b, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0135) {
    const struct CPU_State initial_cpu = {.pc=0x7cbd, .a=0xd2, .x=0x24, .y=0x6e, .sp=0xaf, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xe9}, {.addr=0x7cbd, .value=0xe4}, {.addr=0x7cbe, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x7cbf, .a=0xe9, .x=0x24, .y=0x6e, .sp=0xaf, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xe9}, {.addr=0x7cbd, .value=0xe4}, {.addr=0x7cbe, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cbd, .value=0xe4, .type=IO_READ},
        {.addr=0x7cbe, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0136) {
    const struct CPU_State initial_cpu = {.pc=0x8c57, .a=0xbb, .x=0x17, .y=0x52, .sp=0x58, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x90}, {.addr=0x8c57, .value=0xe4}, {.addr=0x8c58, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x8c59, .a=0x90, .x=0x17, .y=0x52, .sp=0x58, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x90}, {.addr=0x8c57, .value=0xe4}, {.addr=0x8c58, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c57, .value=0xe4, .type=IO_READ},
        {.addr=0x8c58, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0137) {
    const struct CPU_State initial_cpu = {.pc=0x63fc, .a=0x7d, .x=0x4a, .y=0xc5, .sp=0x65, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xd0}, {.addr=0x63fc, .value=0xe4}, {.addr=0x63fd, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x63fe, .a=0xd0, .x=0x4a, .y=0xc5, .sp=0x65, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xd0}, {.addr=0x63fc, .value=0xe4}, {.addr=0x63fd, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x63fc, .value=0xe4, .type=IO_READ},
        {.addr=0x63fd, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0138) {
    const struct CPU_State initial_cpu = {.pc=0x5067, .a=0xbd, .x=0xb6, .y=0x48, .sp=0x35, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x66}, {.addr=0x5067, .value=0xe4}, {.addr=0x5068, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x5069, .a=0x66, .x=0xb6, .y=0x48, .sp=0x35, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x66}, {.addr=0x5067, .value=0xe4}, {.addr=0x5068, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x5067, .value=0xe4, .type=IO_READ},
        {.addr=0x5068, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0139) {
    const struct CPU_State initial_cpu = {.pc=0x4bc5, .a=0x9c, .x=0xeb, .y=0x7f, .sp=0xdb, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0x4bc5, .value=0xe4}, {.addr=0x4bc6, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x4bc7, .a=0xef, .x=0xeb, .y=0x7f, .sp=0xdb, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0x4bc5, .value=0xe4}, {.addr=0x4bc6, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bc5, .value=0xe4, .type=IO_READ},
        {.addr=0x4bc6, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_013A) {
    const struct CPU_State initial_cpu = {.pc=0x903e, .a=0xb5, .x=0xe3, .y=0x29, .sp=0xee, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x4b}, {.addr=0x903e, .value=0xe4}, {.addr=0x903f, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x9040, .a=0x4b, .x=0xe3, .y=0x29, .sp=0xee, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x4b}, {.addr=0x903e, .value=0xe4}, {.addr=0x903f, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x903e, .value=0xe4, .type=IO_READ},
        {.addr=0x903f, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_013B) {
    const struct CPU_State initial_cpu = {.pc=0xbbfb, .a=0x2e, .x=0xf7, .y=0xd2, .sp=0xc6, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x39}, {.addr=0xbbfb, .value=0xe4}, {.addr=0xbbfc, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xbbfd, .a=0x39, .x=0xf7, .y=0xd2, .sp=0xc6, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x39}, {.addr=0xbbfb, .value=0xe4}, {.addr=0xbbfc, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbfb, .value=0xe4, .type=IO_READ},
        {.addr=0xbbfc, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_013C) {
    const struct CPU_State initial_cpu = {.pc=0xc4da, .a=0xd5, .x=0x5e, .y=0x80, .sp=0x4d, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xa5}, {.addr=0xc4da, .value=0xe4}, {.addr=0xc4db, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xc4dc, .a=0xa5, .x=0x5e, .y=0x80, .sp=0x4d, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xa5}, {.addr=0xc4da, .value=0xe4}, {.addr=0xc4db, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4da, .value=0xe4, .type=IO_READ},
        {.addr=0xc4db, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_013D) {
    const struct CPU_State initial_cpu = {.pc=0x66ad, .a=0x5b, .x=0x87, .y=0xb2, .sp=0xf2, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x1d}, {.addr=0x66ad, .value=0xe4}, {.addr=0x66ae, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x66af, .a=0x1d, .x=0x87, .y=0xb2, .sp=0xf2, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x1d}, {.addr=0x66ad, .value=0xe4}, {.addr=0x66ae, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x66ad, .value=0xe4, .type=IO_READ},
        {.addr=0x66ae, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_013E) {
    const struct CPU_State initial_cpu = {.pc=0xcf5e, .a=0x59, .x=0xc3, .y=0x59, .sp=0x04, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x75}, {.addr=0xcf5e, .value=0xe4}, {.addr=0xcf5f, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xcf60, .a=0x75, .x=0xc3, .y=0x59, .sp=0x04, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x75}, {.addr=0xcf5e, .value=0xe4}, {.addr=0xcf5f, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf5e, .value=0xe4, .type=IO_READ},
        {.addr=0xcf5f, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5d48, .a=0x62, .x=0xf8, .y=0x4b, .sp=0x36, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xc6}, {.addr=0x5d48, .value=0xe4}, {.addr=0x5d49, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x5d4a, .a=0xc6, .x=0xf8, .y=0x4b, .sp=0x36, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xc6}, {.addr=0x5d48, .value=0xe4}, {.addr=0x5d49, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d48, .value=0xe4, .type=IO_READ},
        {.addr=0x5d49, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0141) {
    const struct CPU_State initial_cpu = {.pc=0x2939, .a=0x2c, .x=0x1a, .y=0x86, .sp=0x9b, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x2a}, {.addr=0x2939, .value=0xe4}, {.addr=0x293a, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x293b, .a=0x2a, .x=0x1a, .y=0x86, .sp=0x9b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x2a}, {.addr=0x2939, .value=0xe4}, {.addr=0x293a, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x2939, .value=0xe4, .type=IO_READ},
        {.addr=0x293a, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0142) {
    const struct CPU_State initial_cpu = {.pc=0x8972, .a=0x6a, .x=0x37, .y=0x97, .sp=0x9b, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x91}, {.addr=0x8972, .value=0xe4}, {.addr=0x8973, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x8974, .a=0x91, .x=0x37, .y=0x97, .sp=0x9b, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x91}, {.addr=0x8972, .value=0xe4}, {.addr=0x8973, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x8972, .value=0xe4, .type=IO_READ},
        {.addr=0x8973, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0143) {
    const struct CPU_State initial_cpu = {.pc=0x36f9, .a=0xdd, .x=0x87, .y=0x53, .sp=0x59, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x8a}, {.addr=0x36f9, .value=0xe4}, {.addr=0x36fa, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x36fb, .a=0x8a, .x=0x87, .y=0x53, .sp=0x59, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x8a}, {.addr=0x36f9, .value=0xe4}, {.addr=0x36fa, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x36f9, .value=0xe4, .type=IO_READ},
        {.addr=0x36fa, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7df6, .a=0xca, .x=0x56, .y=0x16, .sp=0xe0, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xe6}, {.addr=0x7df6, .value=0xe4}, {.addr=0x7df7, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x7df8, .a=0xe6, .x=0x56, .y=0x16, .sp=0xe0, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xe6}, {.addr=0x7df6, .value=0xe4}, {.addr=0x7df7, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7df6, .value=0xe4, .type=IO_READ},
        {.addr=0x7df7, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0145) {
    const struct CPU_State initial_cpu = {.pc=0x2e49, .a=0xd3, .x=0x67, .y=0x6d, .sp=0x79, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x81}, {.addr=0x2e49, .value=0xe4}, {.addr=0x2e4a, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x2e4b, .a=0x81, .x=0x67, .y=0x6d, .sp=0x79, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x81}, {.addr=0x2e49, .value=0xe4}, {.addr=0x2e4a, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e49, .value=0xe4, .type=IO_READ},
        {.addr=0x2e4a, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0146) {
    const struct CPU_State initial_cpu = {.pc=0x74c8, .a=0xb2, .x=0x1f, .y=0x90, .sp=0x4e, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x21}, {.addr=0x74c8, .value=0xe4}, {.addr=0x74c9, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x74ca, .a=0x21, .x=0x1f, .y=0x90, .sp=0x4e, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x21}, {.addr=0x74c8, .value=0xe4}, {.addr=0x74c9, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x74c8, .value=0xe4, .type=IO_READ},
        {.addr=0x74c9, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0147) {
    const struct CPU_State initial_cpu = {.pc=0xd0f5, .a=0x37, .x=0xa7, .y=0x8f, .sp=0x6a, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x4f}, {.addr=0xd0f5, .value=0xe4}, {.addr=0xd0f6, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xd0f7, .a=0x4f, .x=0xa7, .y=0x8f, .sp=0x6a, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x4f}, {.addr=0xd0f5, .value=0xe4}, {.addr=0xd0f6, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0f5, .value=0xe4, .type=IO_READ},
        {.addr=0xd0f6, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0148) {
    const struct CPU_State initial_cpu = {.pc=0x5f1b, .a=0x48, .x=0xbf, .y=0x3c, .sp=0x05, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xfb}, {.addr=0x5f1b, .value=0xe4}, {.addr=0x5f1c, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x5f1d, .a=0xfb, .x=0xbf, .y=0x3c, .sp=0x05, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xfb}, {.addr=0x5f1b, .value=0xe4}, {.addr=0x5f1c, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f1b, .value=0xe4, .type=IO_READ},
        {.addr=0x5f1c, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0149) {
    const struct CPU_State initial_cpu = {.pc=0xd14a, .a=0xcb, .x=0x6f, .y=0x15, .sp=0x79, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x39}, {.addr=0xd14a, .value=0xe4}, {.addr=0xd14b, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xd14c, .a=0x39, .x=0x6f, .y=0x15, .sp=0x79, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x39}, {.addr=0xd14a, .value=0xe4}, {.addr=0xd14b, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xd14a, .value=0xe4, .type=IO_READ},
        {.addr=0xd14b, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd212, .a=0xf0, .x=0x62, .y=0xe6, .sp=0x1b, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xac}, {.addr=0xd212, .value=0xe4}, {.addr=0xd213, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xd214, .a=0xac, .x=0x62, .y=0xe6, .sp=0x1b, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xac}, {.addr=0xd212, .value=0xe4}, {.addr=0xd213, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xd212, .value=0xe4, .type=IO_READ},
        {.addr=0xd213, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014B) {
    const struct CPU_State initial_cpu = {.pc=0xa150, .a=0xbf, .x=0xb9, .y=0x1f, .sp=0x50, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xb7}, {.addr=0xa150, .value=0xe4}, {.addr=0xa151, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xa152, .a=0xb7, .x=0xb9, .y=0x1f, .sp=0x50, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xb7}, {.addr=0xa150, .value=0xe4}, {.addr=0xa151, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xa150, .value=0xe4, .type=IO_READ},
        {.addr=0xa151, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014C) {
    const struct CPU_State initial_cpu = {.pc=0xea1e, .a=0x20, .x=0x62, .y=0xb1, .sp=0x7d, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x40}, {.addr=0xea1e, .value=0xe4}, {.addr=0xea1f, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xea20, .a=0x40, .x=0x62, .y=0xb1, .sp=0x7d, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x40}, {.addr=0xea1e, .value=0xe4}, {.addr=0xea1f, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xea1e, .value=0xe4, .type=IO_READ},
        {.addr=0xea1f, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014D) {
    const struct CPU_State initial_cpu = {.pc=0x3cf3, .a=0x80, .x=0xa7, .y=0xf6, .sp=0x79, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x35}, {.addr=0x3cf3, .value=0xe4}, {.addr=0x3cf4, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x3cf5, .a=0x35, .x=0xa7, .y=0xf6, .sp=0x79, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x35}, {.addr=0x3cf3, .value=0xe4}, {.addr=0x3cf4, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cf3, .value=0xe4, .type=IO_READ},
        {.addr=0x3cf4, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014E) {
    const struct CPU_State initial_cpu = {.pc=0xa08a, .a=0x81, .x=0x96, .y=0x42, .sp=0x67, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xed}, {.addr=0xa08a, .value=0xe4}, {.addr=0xa08b, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xa08c, .a=0xed, .x=0x96, .y=0x42, .sp=0x67, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xed}, {.addr=0xa08a, .value=0xe4}, {.addr=0xa08b, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xa08a, .value=0xe4, .type=IO_READ},
        {.addr=0xa08b, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_014F) {
    const struct CPU_State initial_cpu = {.pc=0xabc5, .a=0xbb, .x=0x82, .y=0xa7, .sp=0x04, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xc4}, {.addr=0xabc5, .value=0xe4}, {.addr=0xabc6, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xabc7, .a=0xc4, .x=0x82, .y=0xa7, .sp=0x04, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xc4}, {.addr=0xabc5, .value=0xe4}, {.addr=0xabc6, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xabc5, .value=0xe4, .type=IO_READ},
        {.addr=0xabc6, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0150) {
    const struct CPU_State initial_cpu = {.pc=0x2f25, .a=0x5e, .x=0x08, .y=0xcf, .sp=0x7e, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x89}, {.addr=0x2f25, .value=0xe4}, {.addr=0x2f26, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x2f27, .a=0x89, .x=0x08, .y=0xcf, .sp=0x7e, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x89}, {.addr=0x2f25, .value=0xe4}, {.addr=0x2f26, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f25, .value=0xe4, .type=IO_READ},
        {.addr=0x2f26, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0151) {
    const struct CPU_State initial_cpu = {.pc=0xc8f2, .a=0xb3, .x=0xc6, .y=0xec, .sp=0xbb, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xb9}, {.addr=0xc8f2, .value=0xe4}, {.addr=0xc8f3, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xc8f4, .a=0xb9, .x=0xc6, .y=0xec, .sp=0xbb, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xb9}, {.addr=0xc8f2, .value=0xe4}, {.addr=0xc8f3, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8f2, .value=0xe4, .type=IO_READ},
        {.addr=0xc8f3, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0152) {
    const struct CPU_State initial_cpu = {.pc=0x75ca, .a=0xa9, .x=0x6c, .y=0x33, .sp=0x6b, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x5c}, {.addr=0x75ca, .value=0xe4}, {.addr=0x75cb, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x75cc, .a=0x5c, .x=0x6c, .y=0x33, .sp=0x6b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x5c}, {.addr=0x75ca, .value=0xe4}, {.addr=0x75cb, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x75ca, .value=0xe4, .type=IO_READ},
        {.addr=0x75cb, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0153) {
    const struct CPU_State initial_cpu = {.pc=0x37d8, .a=0xc5, .x=0xe8, .y=0xa3, .sp=0x8c, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xb4}, {.addr=0x37d8, .value=0xe4}, {.addr=0x37d9, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x37da, .a=0xb4, .x=0xe8, .y=0xa3, .sp=0x8c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xb4}, {.addr=0x37d8, .value=0xe4}, {.addr=0x37d9, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x37d8, .value=0xe4, .type=IO_READ},
        {.addr=0x37d9, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0154) {
    const struct CPU_State initial_cpu = {.pc=0x5119, .a=0x95, .x=0x22, .y=0x7b, .sp=0x33, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x78}, {.addr=0x5119, .value=0xe4}, {.addr=0x511a, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x511b, .a=0x78, .x=0x22, .y=0x7b, .sp=0x33, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x78}, {.addr=0x5119, .value=0xe4}, {.addr=0x511a, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5119, .value=0xe4, .type=IO_READ},
        {.addr=0x511a, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0155) {
    const struct CPU_State initial_cpu = {.pc=0xda2c, .a=0x73, .x=0xaf, .y=0xeb, .sp=0x70, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x58}, {.addr=0xda2c, .value=0xe4}, {.addr=0xda2d, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xda2e, .a=0x58, .x=0xaf, .y=0xeb, .sp=0x70, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x58}, {.addr=0xda2c, .value=0xe4}, {.addr=0xda2d, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xda2c, .value=0xe4, .type=IO_READ},
        {.addr=0xda2d, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0156) {
    const struct CPU_State initial_cpu = {.pc=0xc1d6, .a=0x17, .x=0x43, .y=0x2c, .sp=0x3c, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x45}, {.addr=0xc1d6, .value=0xe4}, {.addr=0xc1d7, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xc1d8, .a=0x45, .x=0x43, .y=0x2c, .sp=0x3c, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x45}, {.addr=0xc1d6, .value=0xe4}, {.addr=0xc1d7, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d6, .value=0xe4, .type=IO_READ},
        {.addr=0xc1d7, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4c8e, .a=0x95, .x=0x9b, .y=0x1a, .sp=0x42, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x12}, {.addr=0x4c8e, .value=0xe4}, {.addr=0x4c8f, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x4c90, .a=0x12, .x=0x9b, .y=0x1a, .sp=0x42, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x12}, {.addr=0x4c8e, .value=0xe4}, {.addr=0x4c8f, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c8e, .value=0xe4, .type=IO_READ},
        {.addr=0x4c8f, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0158) {
    const struct CPU_State initial_cpu = {.pc=0xb3e1, .a=0x85, .x=0x44, .y=0xab, .sp=0xf1, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x72}, {.addr=0xb3e1, .value=0xe4}, {.addr=0xb3e2, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xb3e3, .a=0x72, .x=0x44, .y=0xab, .sp=0xf1, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x72}, {.addr=0xb3e1, .value=0xe4}, {.addr=0xb3e2, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3e1, .value=0xe4, .type=IO_READ},
        {.addr=0xb3e2, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0159) {
    const struct CPU_State initial_cpu = {.pc=0xed67, .a=0xc4, .x=0x06, .y=0x7e, .sp=0x94, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x84}, {.addr=0xed67, .value=0xe4}, {.addr=0xed68, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xed69, .a=0x84, .x=0x06, .y=0x7e, .sp=0x94, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x84}, {.addr=0xed67, .value=0xe4}, {.addr=0xed68, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xed67, .value=0xe4, .type=IO_READ},
        {.addr=0xed68, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015A) {
    const struct CPU_State initial_cpu = {.pc=0x9fa2, .a=0xbb, .x=0x10, .y=0xf1, .sp=0x83, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x6b}, {.addr=0x9fa2, .value=0xe4}, {.addr=0x9fa3, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x9fa4, .a=0x6b, .x=0x10, .y=0xf1, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x6b}, {.addr=0x9fa2, .value=0xe4}, {.addr=0x9fa3, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fa2, .value=0xe4, .type=IO_READ},
        {.addr=0x9fa3, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015B) {
    const struct CPU_State initial_cpu = {.pc=0x6ab0, .a=0xd4, .x=0x4d, .y=0x8a, .sp=0x35, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xf6}, {.addr=0x6ab0, .value=0xe4}, {.addr=0x6ab1, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x6ab2, .a=0xf6, .x=0x4d, .y=0x8a, .sp=0x35, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xf6}, {.addr=0x6ab0, .value=0xe4}, {.addr=0x6ab1, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ab0, .value=0xe4, .type=IO_READ},
        {.addr=0x6ab1, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015C) {
    const struct CPU_State initial_cpu = {.pc=0xc363, .a=0xf1, .x=0x16, .y=0xc7, .sp=0x9d, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x80}, {.addr=0xc363, .value=0xe4}, {.addr=0xc364, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xc365, .a=0x80, .x=0x16, .y=0xc7, .sp=0x9d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x80}, {.addr=0xc363, .value=0xe4}, {.addr=0xc364, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc363, .value=0xe4, .type=IO_READ},
        {.addr=0xc364, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015D) {
    const struct CPU_State initial_cpu = {.pc=0x2340, .a=0x1a, .x=0x64, .y=0xe7, .sp=0xa6, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xef}, {.addr=0x2340, .value=0xe4}, {.addr=0x2341, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x2342, .a=0xef, .x=0x64, .y=0xe7, .sp=0xa6, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xef}, {.addr=0x2340, .value=0xe4}, {.addr=0x2341, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x2340, .value=0xe4, .type=IO_READ},
        {.addr=0x2341, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015E) {
    const struct CPU_State initial_cpu = {.pc=0x50e8, .a=0xc3, .x=0x30, .y=0x0d, .sp=0x2a, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x19}, {.addr=0x50e8, .value=0xe4}, {.addr=0x50e9, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x50ea, .a=0x19, .x=0x30, .y=0x0d, .sp=0x2a, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x19}, {.addr=0x50e8, .value=0xe4}, {.addr=0x50e9, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x50e8, .value=0xe4, .type=IO_READ},
        {.addr=0x50e9, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_015F) {
    const struct CPU_State initial_cpu = {.pc=0x852c, .a=0x01, .x=0xcd, .y=0x02, .sp=0x78, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x12}, {.addr=0x852c, .value=0xe4}, {.addr=0x852d, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x852e, .a=0x12, .x=0xcd, .y=0x02, .sp=0x78, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x12}, {.addr=0x852c, .value=0xe4}, {.addr=0x852d, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x852c, .value=0xe4, .type=IO_READ},
        {.addr=0x852d, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0160) {
    const struct CPU_State initial_cpu = {.pc=0x5496, .a=0x69, .x=0x32, .y=0x38, .sp=0x30, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x99}, {.addr=0x5496, .value=0xe4}, {.addr=0x5497, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x5498, .a=0x99, .x=0x32, .y=0x38, .sp=0x30, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x99}, {.addr=0x5496, .value=0xe4}, {.addr=0x5497, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x5496, .value=0xe4, .type=IO_READ},
        {.addr=0x5497, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0161) {
    const struct CPU_State initial_cpu = {.pc=0xaba5, .a=0x0c, .x=0xbf, .y=0x9c, .sp=0xea, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xcd}, {.addr=0xaba5, .value=0xe4}, {.addr=0xaba6, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xaba7, .a=0xcd, .x=0xbf, .y=0x9c, .sp=0xea, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xcd}, {.addr=0xaba5, .value=0xe4}, {.addr=0xaba6, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xaba5, .value=0xe4, .type=IO_READ},
        {.addr=0xaba6, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0162) {
    const struct CPU_State initial_cpu = {.pc=0xae8a, .a=0x83, .x=0x48, .y=0x46, .sp=0xf1, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x81}, {.addr=0xae8a, .value=0xe4}, {.addr=0xae8b, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xae8c, .a=0x81, .x=0x48, .y=0x46, .sp=0xf1, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x81}, {.addr=0xae8a, .value=0xe4}, {.addr=0xae8b, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xae8a, .value=0xe4, .type=IO_READ},
        {.addr=0xae8b, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0163) {
    const struct CPU_State initial_cpu = {.pc=0xefe0, .a=0x47, .x=0x14, .y=0xf6, .sp=0x31, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x63}, {.addr=0xefe0, .value=0xe4}, {.addr=0xefe1, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xefe2, .a=0x63, .x=0x14, .y=0xf6, .sp=0x31, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x63}, {.addr=0xefe0, .value=0xe4}, {.addr=0xefe1, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xefe0, .value=0xe4, .type=IO_READ},
        {.addr=0xefe1, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0164) {
    const struct CPU_State initial_cpu = {.pc=0x4c25, .a=0xa3, .x=0x99, .y=0x95, .sp=0xf3, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xec}, {.addr=0x4c25, .value=0xe4}, {.addr=0x4c26, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x4c27, .a=0xec, .x=0x99, .y=0x95, .sp=0xf3, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xec}, {.addr=0x4c25, .value=0xe4}, {.addr=0x4c26, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c25, .value=0xe4, .type=IO_READ},
        {.addr=0x4c26, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0165) {
    const struct CPU_State initial_cpu = {.pc=0x6131, .a=0xef, .x=0x01, .y=0x9e, .sp=0x32, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xe0}, {.addr=0x6131, .value=0xe4}, {.addr=0x6132, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x6133, .a=0xe0, .x=0x01, .y=0x9e, .sp=0x32, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xe0}, {.addr=0x6131, .value=0xe4}, {.addr=0x6132, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6131, .value=0xe4, .type=IO_READ},
        {.addr=0x6132, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0166) {
    const struct CPU_State initial_cpu = {.pc=0xbdc0, .a=0x46, .x=0xbb, .y=0x81, .sp=0x92, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xf4}, {.addr=0xbdc0, .value=0xe4}, {.addr=0xbdc1, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xbdc2, .a=0xf4, .x=0xbb, .y=0x81, .sp=0x92, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xf4}, {.addr=0xbdc0, .value=0xe4}, {.addr=0xbdc1, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdc0, .value=0xe4, .type=IO_READ},
        {.addr=0xbdc1, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0167) {
    const struct CPU_State initial_cpu = {.pc=0x4b45, .a=0x4d, .x=0xa2, .y=0x6b, .sp=0xc2, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x1f}, {.addr=0x4b45, .value=0xe4}, {.addr=0x4b46, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x4b47, .a=0x1f, .x=0xa2, .y=0x6b, .sp=0xc2, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x1f}, {.addr=0x4b45, .value=0xe4}, {.addr=0x4b46, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b45, .value=0xe4, .type=IO_READ},
        {.addr=0x4b46, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0168) {
    const struct CPU_State initial_cpu = {.pc=0x9b94, .a=0xb5, .x=0xb2, .y=0x83, .sp=0xf7, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xa6}, {.addr=0x9b94, .value=0xe4}, {.addr=0x9b95, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x9b96, .a=0xa6, .x=0xb2, .y=0x83, .sp=0xf7, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xa6}, {.addr=0x9b94, .value=0xe4}, {.addr=0x9b95, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b94, .value=0xe4, .type=IO_READ},
        {.addr=0x9b95, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0169) {
    const struct CPU_State initial_cpu = {.pc=0x868d, .a=0xea, .x=0xf8, .y=0x8a, .sp=0x52, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x2b}, {.addr=0x868d, .value=0xe4}, {.addr=0x868e, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x868f, .a=0x2b, .x=0xf8, .y=0x8a, .sp=0x52, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x2b}, {.addr=0x868d, .value=0xe4}, {.addr=0x868e, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x868d, .value=0xe4, .type=IO_READ},
        {.addr=0x868e, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016A) {
    const struct CPU_State initial_cpu = {.pc=0x3dbe, .a=0xe5, .x=0x70, .y=0x03, .sp=0x0c, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xbe}, {.addr=0x3dbe, .value=0xe4}, {.addr=0x3dbf, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x3dc0, .a=0xbe, .x=0x70, .y=0x03, .sp=0x0c, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xbe}, {.addr=0x3dbe, .value=0xe4}, {.addr=0x3dbf, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dbe, .value=0xe4, .type=IO_READ},
        {.addr=0x3dbf, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016B) {
    const struct CPU_State initial_cpu = {.pc=0x24e3, .a=0x17, .x=0x8c, .y=0x8e, .sp=0xab, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x85}, {.addr=0x24e3, .value=0xe4}, {.addr=0x24e4, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x24e5, .a=0x85, .x=0x8c, .y=0x8e, .sp=0xab, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x85}, {.addr=0x24e3, .value=0xe4}, {.addr=0x24e4, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x24e3, .value=0xe4, .type=IO_READ},
        {.addr=0x24e4, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016C) {
    const struct CPU_State initial_cpu = {.pc=0xc08a, .a=0xde, .x=0x72, .y=0x7b, .sp=0x0b, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x6b}, {.addr=0xc08a, .value=0xe4}, {.addr=0xc08b, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xc08c, .a=0x6b, .x=0x72, .y=0x7b, .sp=0x0b, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x6b}, {.addr=0xc08a, .value=0xe4}, {.addr=0xc08b, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc08a, .value=0xe4, .type=IO_READ},
        {.addr=0xc08b, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016D) {
    const struct CPU_State initial_cpu = {.pc=0x62d0, .a=0x8f, .x=0x68, .y=0x53, .sp=0x07, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xf0}, {.addr=0x62d0, .value=0xe4}, {.addr=0x62d1, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x62d2, .a=0xf0, .x=0x68, .y=0x53, .sp=0x07, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xf0}, {.addr=0x62d0, .value=0xe4}, {.addr=0x62d1, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x62d0, .value=0xe4, .type=IO_READ},
        {.addr=0x62d1, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016E) {
    const struct CPU_State initial_cpu = {.pc=0xaac3, .a=0x77, .x=0xea, .y=0x90, .sp=0xa7, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xc4}, {.addr=0xaac3, .value=0xe4}, {.addr=0xaac4, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xaac5, .a=0xc4, .x=0xea, .y=0x90, .sp=0xa7, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xc4}, {.addr=0xaac3, .value=0xe4}, {.addr=0xaac4, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xaac3, .value=0xe4, .type=IO_READ},
        {.addr=0xaac4, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_016F) {
    const struct CPU_State initial_cpu = {.pc=0x14c9, .a=0x44, .x=0xa9, .y=0xc9, .sp=0x5e, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0xd8}, {.addr=0x14c9, .value=0xe4}, {.addr=0x14ca, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x14cb, .a=0xd8, .x=0xa9, .y=0xc9, .sp=0x5e, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0xd8}, {.addr=0x14c9, .value=0xe4}, {.addr=0x14ca, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x14c9, .value=0xe4, .type=IO_READ},
        {.addr=0x14ca, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0170) {
    const struct CPU_State initial_cpu = {.pc=0x617a, .a=0x81, .x=0x99, .y=0xed, .sp=0x05, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xdc}, {.addr=0x617a, .value=0xe4}, {.addr=0x617b, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x617c, .a=0xdc, .x=0x99, .y=0xed, .sp=0x05, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xdc}, {.addr=0x617a, .value=0xe4}, {.addr=0x617b, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x617a, .value=0xe4, .type=IO_READ},
        {.addr=0x617b, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0171) {
    const struct CPU_State initial_cpu = {.pc=0x2336, .a=0xca, .x=0x8d, .y=0x50, .sp=0xd1, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xe5}, {.addr=0x2336, .value=0xe4}, {.addr=0x2337, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x2338, .a=0xe5, .x=0x8d, .y=0x50, .sp=0xd1, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xe5}, {.addr=0x2336, .value=0xe4}, {.addr=0x2337, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x2336, .value=0xe4, .type=IO_READ},
        {.addr=0x2337, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0172) {
    const struct CPU_State initial_cpu = {.pc=0xef1f, .a=0x6a, .x=0xd3, .y=0x2b, .sp=0x43, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xf8}, {.addr=0xef1f, .value=0xe4}, {.addr=0xef20, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xef21, .a=0xf8, .x=0xd3, .y=0x2b, .sp=0x43, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xf8}, {.addr=0xef1f, .value=0xe4}, {.addr=0xef20, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xef1f, .value=0xe4, .type=IO_READ},
        {.addr=0xef20, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0173) {
    const struct CPU_State initial_cpu = {.pc=0xac7d, .a=0x59, .x=0x31, .y=0xfc, .sp=0x70, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xff}, {.addr=0xac7d, .value=0xe4}, {.addr=0xac7e, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xac7f, .a=0xff, .x=0x31, .y=0xfc, .sp=0x70, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xff}, {.addr=0xac7d, .value=0xe4}, {.addr=0xac7e, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xac7d, .value=0xe4, .type=IO_READ},
        {.addr=0xac7e, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4f93, .a=0x6a, .x=0x28, .y=0x5c, .sp=0xf9, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x29}, {.addr=0x4f93, .value=0xe4}, {.addr=0x4f94, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x4f95, .a=0x29, .x=0x28, .y=0x5c, .sp=0xf9, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x29}, {.addr=0x4f93, .value=0xe4}, {.addr=0x4f94, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f93, .value=0xe4, .type=IO_READ},
        {.addr=0x4f94, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0176) {
    const struct CPU_State initial_cpu = {.pc=0x0ed0, .a=0x1e, .x=0x81, .y=0xb0, .sp=0xeb, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x91}, {.addr=0x0ed0, .value=0xe4}, {.addr=0x0ed1, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x0ed2, .a=0x91, .x=0x81, .y=0xb0, .sp=0xeb, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x91}, {.addr=0x0ed0, .value=0xe4}, {.addr=0x0ed1, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ed0, .value=0xe4, .type=IO_READ},
        {.addr=0x0ed1, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0177) {
    const struct CPU_State initial_cpu = {.pc=0xca41, .a=0x1f, .x=0x28, .y=0xcf, .sp=0xe5, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x61}, {.addr=0xca41, .value=0xe4}, {.addr=0xca42, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xca43, .a=0x61, .x=0x28, .y=0xcf, .sp=0xe5, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x61}, {.addr=0xca41, .value=0xe4}, {.addr=0xca42, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xca41, .value=0xe4, .type=IO_READ},
        {.addr=0xca42, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0178) {
    const struct CPU_State initial_cpu = {.pc=0xe26f, .a=0xbf, .x=0x8c, .y=0x1d, .sp=0x0b, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0x35}, {.addr=0xe26f, .value=0xe4}, {.addr=0xe270, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xe271, .a=0x35, .x=0x8c, .y=0x1d, .sp=0x0b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0x35}, {.addr=0xe26f, .value=0xe4}, {.addr=0xe270, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe26f, .value=0xe4, .type=IO_READ},
        {.addr=0xe270, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0179) {
    const struct CPU_State initial_cpu = {.pc=0x348d, .a=0x19, .x=0xf4, .y=0x28, .sp=0x63, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xd4}, {.addr=0x348d, .value=0xe4}, {.addr=0x348e, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x348f, .a=0xd4, .x=0xf4, .y=0x28, .sp=0x63, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xd4}, {.addr=0x348d, .value=0xe4}, {.addr=0x348e, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x348d, .value=0xe4, .type=IO_READ},
        {.addr=0x348e, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017A) {
    const struct CPU_State initial_cpu = {.pc=0x1666, .a=0x0a, .x=0xcc, .y=0x2e, .sp=0xd2, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x84}, {.addr=0x1666, .value=0xe4}, {.addr=0x1667, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x1668, .a=0x84, .x=0xcc, .y=0x2e, .sp=0xd2, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x84}, {.addr=0x1666, .value=0xe4}, {.addr=0x1667, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1666, .value=0xe4, .type=IO_READ},
        {.addr=0x1667, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8a5a, .a=0xe1, .x=0xc3, .y=0x2d, .sp=0xe5, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x5d}, {.addr=0x8a5a, .value=0xe4}, {.addr=0x8a5b, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x8a5c, .a=0x5d, .x=0xc3, .y=0x2d, .sp=0xe5, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x5d}, {.addr=0x8a5a, .value=0xe4}, {.addr=0x8a5b, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a5a, .value=0xe4, .type=IO_READ},
        {.addr=0x8a5b, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017C) {
    const struct CPU_State initial_cpu = {.pc=0xea0e, .a=0xec, .x=0x7e, .y=0x06, .sp=0xb5, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x9c}, {.addr=0xea0e, .value=0xe4}, {.addr=0xea0f, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xea10, .a=0x9c, .x=0x7e, .y=0x06, .sp=0xb5, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x9c}, {.addr=0xea0e, .value=0xe4}, {.addr=0xea0f, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xea0e, .value=0xe4, .type=IO_READ},
        {.addr=0xea0f, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017D) {
    const struct CPU_State initial_cpu = {.pc=0xfed4, .a=0xd9, .x=0x07, .y=0xea, .sp=0x2b, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xb8}, {.addr=0xfed4, .value=0xe4}, {.addr=0xfed5, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xfed6, .a=0xb8, .x=0x07, .y=0xea, .sp=0x2b, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xb8}, {.addr=0xfed4, .value=0xe4}, {.addr=0xfed5, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xfed4, .value=0xe4, .type=IO_READ},
        {.addr=0xfed5, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017E) {
    const struct CPU_State initial_cpu = {.pc=0x6b19, .a=0xfd, .x=0x7f, .y=0x60, .sp=0xda, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x81}, {.addr=0x6b19, .value=0xe4}, {.addr=0x6b1a, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x6b1b, .a=0x81, .x=0x7f, .y=0x60, .sp=0xda, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x81}, {.addr=0x6b19, .value=0xe4}, {.addr=0x6b1a, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b19, .value=0xe4, .type=IO_READ},
        {.addr=0x6b1a, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_017F) {
    const struct CPU_State initial_cpu = {.pc=0xcc0b, .a=0x85, .x=0x17, .y=0xd7, .sp=0xee, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0xcc0b, .value=0xe4}, {.addr=0xcc0c, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xcc0d, .a=0x04, .x=0x17, .y=0xd7, .sp=0xee, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0xcc0b, .value=0xe4}, {.addr=0xcc0c, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc0b, .value=0xe4, .type=IO_READ},
        {.addr=0xcc0c, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0180) {
    const struct CPU_State initial_cpu = {.pc=0xd2ad, .a=0x6d, .x=0x90, .y=0x7b, .sp=0x20, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xba}, {.addr=0xd2ad, .value=0xe4}, {.addr=0xd2ae, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xd2af, .a=0xba, .x=0x90, .y=0x7b, .sp=0x20, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xba}, {.addr=0xd2ad, .value=0xe4}, {.addr=0xd2ae, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2ad, .value=0xe4, .type=IO_READ},
        {.addr=0xd2ae, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0181) {
    const struct CPU_State initial_cpu = {.pc=0x1d95, .a=0x13, .x=0x52, .y=0x83, .sp=0x7e, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x15}, {.addr=0x1d95, .value=0xe4}, {.addr=0x1d96, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x1d97, .a=0x15, .x=0x52, .y=0x83, .sp=0x7e, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x15}, {.addr=0x1d95, .value=0xe4}, {.addr=0x1d96, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d95, .value=0xe4, .type=IO_READ},
        {.addr=0x1d96, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0182) {
    const struct CPU_State initial_cpu = {.pc=0x5c3e, .a=0xa6, .x=0x56, .y=0xb6, .sp=0x69, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x46}, {.addr=0x5c3e, .value=0xe4}, {.addr=0x5c3f, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x5c40, .a=0x46, .x=0x56, .y=0xb6, .sp=0x69, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x46}, {.addr=0x5c3e, .value=0xe4}, {.addr=0x5c3f, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c3e, .value=0xe4, .type=IO_READ},
        {.addr=0x5c3f, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0183) {
    const struct CPU_State initial_cpu = {.pc=0xb37e, .a=0x23, .x=0x79, .y=0x42, .sp=0xb3, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xc4}, {.addr=0xb37e, .value=0xe4}, {.addr=0xb37f, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xb380, .a=0xc4, .x=0x79, .y=0x42, .sp=0xb3, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xc4}, {.addr=0xb37e, .value=0xe4}, {.addr=0xb37f, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb37e, .value=0xe4, .type=IO_READ},
        {.addr=0xb37f, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc509, .a=0x53, .x=0x5b, .y=0x69, .sp=0x17, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x14}, {.addr=0xc509, .value=0xe4}, {.addr=0xc50a, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xc50b, .a=0x14, .x=0x5b, .y=0x69, .sp=0x17, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x14}, {.addr=0xc509, .value=0xe4}, {.addr=0xc50a, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xc509, .value=0xe4, .type=IO_READ},
        {.addr=0xc50a, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0185) {
    const struct CPU_State initial_cpu = {.pc=0xe8b9, .a=0xbf, .x=0x04, .y=0x85, .sp=0x29, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xcb}, {.addr=0xe8b9, .value=0xe4}, {.addr=0xe8ba, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xe8bb, .a=0xcb, .x=0x04, .y=0x85, .sp=0x29, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xcb}, {.addr=0xe8b9, .value=0xe4}, {.addr=0xe8ba, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8b9, .value=0xe4, .type=IO_READ},
        {.addr=0xe8ba, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0186) {
    const struct CPU_State initial_cpu = {.pc=0x588d, .a=0x61, .x=0x41, .y=0x49, .sp=0xaa, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x22}, {.addr=0x588d, .value=0xe4}, {.addr=0x588e, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x588f, .a=0x22, .x=0x41, .y=0x49, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x22}, {.addr=0x588d, .value=0xe4}, {.addr=0x588e, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x588d, .value=0xe4, .type=IO_READ},
        {.addr=0x588e, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0187) {
    const struct CPU_State initial_cpu = {.pc=0x6ceb, .a=0x34, .x=0x1d, .y=0x1d, .sp=0xb2, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xb7}, {.addr=0x6ceb, .value=0xe4}, {.addr=0x6cec, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x6ced, .a=0xb7, .x=0x1d, .y=0x1d, .sp=0xb2, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xb7}, {.addr=0x6ceb, .value=0xe4}, {.addr=0x6cec, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ceb, .value=0xe4, .type=IO_READ},
        {.addr=0x6cec, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0188) {
    const struct CPU_State initial_cpu = {.pc=0x3580, .a=0xc2, .x=0x0a, .y=0x57, .sp=0x9d, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x29}, {.addr=0x3580, .value=0xe4}, {.addr=0x3581, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x3582, .a=0x29, .x=0x0a, .y=0x57, .sp=0x9d, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x29}, {.addr=0x3580, .value=0xe4}, {.addr=0x3581, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x3580, .value=0xe4, .type=IO_READ},
        {.addr=0x3581, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0189) {
    const struct CPU_State initial_cpu = {.pc=0x05b1, .a=0xde, .x=0x47, .y=0x17, .sp=0x52, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0xc9}, {.addr=0x05b1, .value=0xe4}, {.addr=0x05b2, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x05b3, .a=0xc9, .x=0x47, .y=0x17, .sp=0x52, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0xc9}, {.addr=0x05b1, .value=0xe4}, {.addr=0x05b2, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x05b1, .value=0xe4, .type=IO_READ},
        {.addr=0x05b2, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018A) {
    const struct CPU_State initial_cpu = {.pc=0x5f3a, .a=0xbf, .x=0xb4, .y=0x36, .sp=0x39, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x1d}, {.addr=0x5f3a, .value=0xe4}, {.addr=0x5f3b, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x5f3c, .a=0x1d, .x=0xb4, .y=0x36, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x1d}, {.addr=0x5f3a, .value=0xe4}, {.addr=0x5f3b, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f3a, .value=0xe4, .type=IO_READ},
        {.addr=0x5f3b, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018B) {
    const struct CPU_State initial_cpu = {.pc=0x76df, .a=0x26, .x=0xbd, .y=0x0f, .sp=0xda, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x68}, {.addr=0x76df, .value=0xe4}, {.addr=0x76e0, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x76e1, .a=0x68, .x=0xbd, .y=0x0f, .sp=0xda, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x68}, {.addr=0x76df, .value=0xe4}, {.addr=0x76e0, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x76df, .value=0xe4, .type=IO_READ},
        {.addr=0x76e0, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018C) {
    const struct CPU_State initial_cpu = {.pc=0x7519, .a=0xfa, .x=0x46, .y=0xe0, .sp=0xb4, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xd8}, {.addr=0x7519, .value=0xe4}, {.addr=0x751a, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x751b, .a=0xd8, .x=0x46, .y=0xe0, .sp=0xb4, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xd8}, {.addr=0x7519, .value=0xe4}, {.addr=0x751a, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x7519, .value=0xe4, .type=IO_READ},
        {.addr=0x751a, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018D) {
    const struct CPU_State initial_cpu = {.pc=0xe328, .a=0x8c, .x=0x59, .y=0x87, .sp=0x11, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x58}, {.addr=0xe328, .value=0xe4}, {.addr=0xe329, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xe32a, .a=0x58, .x=0x59, .y=0x87, .sp=0x11, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x58}, {.addr=0xe328, .value=0xe4}, {.addr=0xe329, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe328, .value=0xe4, .type=IO_READ},
        {.addr=0xe329, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018E) {
    const struct CPU_State initial_cpu = {.pc=0x4a85, .a=0x5b, .x=0xdc, .y=0x10, .sp=0xf5, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x34}, {.addr=0x4a85, .value=0xe4}, {.addr=0x4a86, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x4a87, .a=0x34, .x=0xdc, .y=0x10, .sp=0xf5, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x34}, {.addr=0x4a85, .value=0xe4}, {.addr=0x4a86, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a85, .value=0xe4, .type=IO_READ},
        {.addr=0x4a86, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_018F) {
    const struct CPU_State initial_cpu = {.pc=0xc057, .a=0xaf, .x=0xef, .y=0x48, .sp=0x29, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x0a}, {.addr=0xc057, .value=0xe4}, {.addr=0xc058, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xc059, .a=0x0a, .x=0xef, .y=0x48, .sp=0x29, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x0a}, {.addr=0xc057, .value=0xe4}, {.addr=0xc058, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc057, .value=0xe4, .type=IO_READ},
        {.addr=0xc058, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0190) {
    const struct CPU_State initial_cpu = {.pc=0x3126, .a=0x34, .x=0x34, .y=0x4c, .sp=0x45, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xfa}, {.addr=0x3126, .value=0xe4}, {.addr=0x3127, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x3128, .a=0xfa, .x=0x34, .y=0x4c, .sp=0x45, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xfa}, {.addr=0x3126, .value=0xe4}, {.addr=0x3127, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x3126, .value=0xe4, .type=IO_READ},
        {.addr=0x3127, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0191) {
    const struct CPU_State initial_cpu = {.pc=0xd553, .a=0x1a, .x=0x82, .y=0xa9, .sp=0xcf, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x6e}, {.addr=0xd553, .value=0xe4}, {.addr=0xd554, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xd555, .a=0x6e, .x=0x82, .y=0xa9, .sp=0xcf, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x6e}, {.addr=0xd553, .value=0xe4}, {.addr=0xd554, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xd553, .value=0xe4, .type=IO_READ},
        {.addr=0xd554, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0192) {
    const struct CPU_State initial_cpu = {.pc=0x40e8, .a=0xe5, .x=0x30, .y=0x05, .sp=0x6e, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xe5}, {.addr=0x40e8, .value=0xe4}, {.addr=0x40e9, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x40ea, .a=0xe5, .x=0x30, .y=0x05, .sp=0x6e, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xe5}, {.addr=0x40e8, .value=0xe4}, {.addr=0x40e9, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e8, .value=0xe4, .type=IO_READ},
        {.addr=0x40e9, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0193) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x85, .x=0xd5, .y=0x21, .sp=0x36, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x3a}, {.addr=0x681d, .value=0xe4}, {.addr=0x681e, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x681f, .a=0x3a, .x=0xd5, .y=0x21, .sp=0x36, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x3a}, {.addr=0x681d, .value=0xe4}, {.addr=0x681e, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0xe4, .type=IO_READ},
        {.addr=0x681e, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0194) {
    const struct CPU_State initial_cpu = {.pc=0x22c8, .a=0xd2, .x=0x99, .y=0x11, .sp=0x2b, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xa5}, {.addr=0x22c8, .value=0xe4}, {.addr=0x22c9, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x22ca, .a=0xa5, .x=0x99, .y=0x11, .sp=0x2b, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xa5}, {.addr=0x22c8, .value=0xe4}, {.addr=0x22c9, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x22c8, .value=0xe4, .type=IO_READ},
        {.addr=0x22c9, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0195) {
    const struct CPU_State initial_cpu = {.pc=0x8e9b, .a=0x23, .x=0x7e, .y=0x3a, .sp=0xff, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x8e}, {.addr=0x8e9b, .value=0xe4}, {.addr=0x8e9c, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x8e9d, .a=0x8e, .x=0x7e, .y=0x3a, .sp=0xff, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x8e}, {.addr=0x8e9b, .value=0xe4}, {.addr=0x8e9c, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e9b, .value=0xe4, .type=IO_READ},
        {.addr=0x8e9c, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0196) {
    const struct CPU_State initial_cpu = {.pc=0x7fcf, .a=0x51, .x=0xa4, .y=0xcb, .sp=0x1f, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x08}, {.addr=0x7fcf, .value=0xe4}, {.addr=0x7fd0, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x7fd1, .a=0x08, .x=0xa4, .y=0xcb, .sp=0x1f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x08}, {.addr=0x7fcf, .value=0xe4}, {.addr=0x7fd0, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fcf, .value=0xe4, .type=IO_READ},
        {.addr=0x7fd0, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0197) {
    const struct CPU_State initial_cpu = {.pc=0x18f2, .a=0x6c, .x=0x4e, .y=0x5a, .sp=0xc8, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x00}, {.addr=0x18f2, .value=0xe4}, {.addr=0x18f3, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x18f4, .a=0x00, .x=0x4e, .y=0x5a, .sp=0xc8, .status=0x1f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x00}, {.addr=0x18f2, .value=0xe4}, {.addr=0x18f3, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x18f2, .value=0xe4, .type=IO_READ},
        {.addr=0x18f3, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0198) {
    const struct CPU_State initial_cpu = {.pc=0xdee9, .a=0xcd, .x=0xf7, .y=0x5c, .sp=0x58, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xf8}, {.addr=0xdee9, .value=0xe4}, {.addr=0xdeea, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xdeeb, .a=0xf8, .x=0xf7, .y=0x5c, .sp=0x58, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xf8}, {.addr=0xdee9, .value=0xe4}, {.addr=0xdeea, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xdee9, .value=0xe4, .type=IO_READ},
        {.addr=0xdeea, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0199) {
    const struct CPU_State initial_cpu = {.pc=0x6303, .a=0x82, .x=0x2d, .y=0xef, .sp=0xbe, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x2b}, {.addr=0x6303, .value=0xe4}, {.addr=0x6304, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x6305, .a=0x2b, .x=0x2d, .y=0xef, .sp=0xbe, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x2b}, {.addr=0x6303, .value=0xe4}, {.addr=0x6304, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x6303, .value=0xe4, .type=IO_READ},
        {.addr=0x6304, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019A) {
    const struct CPU_State initial_cpu = {.pc=0x3a89, .a=0x42, .x=0x3e, .y=0x10, .sp=0x68, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x9a}, {.addr=0x3a89, .value=0xe4}, {.addr=0x3a8a, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x3a8b, .a=0x9a, .x=0x3e, .y=0x10, .sp=0x68, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x9a}, {.addr=0x3a89, .value=0xe4}, {.addr=0x3a8a, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a89, .value=0xe4, .type=IO_READ},
        {.addr=0x3a8a, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2da9, .a=0x59, .x=0x73, .y=0x89, .sp=0x2a, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x2b}, {.addr=0x2da9, .value=0xe4}, {.addr=0x2daa, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x2dab, .a=0x2b, .x=0x73, .y=0x89, .sp=0x2a, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x2b}, {.addr=0x2da9, .value=0xe4}, {.addr=0x2daa, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2da9, .value=0xe4, .type=IO_READ},
        {.addr=0x2daa, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019C) {
    const struct CPU_State initial_cpu = {.pc=0xffc5, .a=0xd5, .x=0xdc, .y=0x39, .sp=0x6b, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x52}, {.addr=0xffc5, .value=0xe4}, {.addr=0xffc6, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xffc7, .a=0x52, .x=0xdc, .y=0x39, .sp=0x6b, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x52}, {.addr=0xffc5, .value=0xe4}, {.addr=0xffc6, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xffc5, .value=0xe4, .type=IO_READ},
        {.addr=0xffc6, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019D) {
    const struct CPU_State initial_cpu = {.pc=0x9b82, .a=0x52, .x=0x01, .y=0xed, .sp=0x99, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x41}, {.addr=0x9b82, .value=0xe4}, {.addr=0x9b83, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9b84, .a=0x41, .x=0x01, .y=0xed, .sp=0x99, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x41}, {.addr=0x9b82, .value=0xe4}, {.addr=0x9b83, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b82, .value=0xe4, .type=IO_READ},
        {.addr=0x9b83, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7c9b, .a=0xc0, .x=0x49, .y=0xfc, .sp=0x42, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xcc}, {.addr=0x7c9b, .value=0xe4}, {.addr=0x7c9c, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x7c9d, .a=0xcc, .x=0x49, .y=0xfc, .sp=0x42, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xcc}, {.addr=0x7c9b, .value=0xe4}, {.addr=0x7c9c, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c9b, .value=0xe4, .type=IO_READ},
        {.addr=0x7c9c, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_019F) {
    const struct CPU_State initial_cpu = {.pc=0x974f, .a=0x41, .x=0x37, .y=0x94, .sp=0x94, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x43}, {.addr=0x974f, .value=0xe4}, {.addr=0x9750, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x9751, .a=0x43, .x=0x37, .y=0x94, .sp=0x94, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x43}, {.addr=0x974f, .value=0xe4}, {.addr=0x9750, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x974f, .value=0xe4, .type=IO_READ},
        {.addr=0x9750, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x39ee, .a=0x9f, .x=0x3b, .y=0xdb, .sp=0x68, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xf0}, {.addr=0x39ee, .value=0xe4}, {.addr=0x39ef, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x39f0, .a=0xf0, .x=0x3b, .y=0xdb, .sp=0x68, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xf0}, {.addr=0x39ee, .value=0xe4}, {.addr=0x39ef, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x39ee, .value=0xe4, .type=IO_READ},
        {.addr=0x39ef, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe5b3, .a=0x67, .x=0x6b, .y=0x4b, .sp=0xa5, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x78}, {.addr=0xe5b3, .value=0xe4}, {.addr=0xe5b4, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xe5b5, .a=0x78, .x=0x6b, .y=0x4b, .sp=0xa5, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x78}, {.addr=0xe5b3, .value=0xe4}, {.addr=0xe5b4, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5b3, .value=0xe4, .type=IO_READ},
        {.addr=0xe5b4, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x42fe, .a=0x72, .x=0xc6, .y=0x64, .sp=0x9f, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0xfc}, {.addr=0x42fe, .value=0xe4}, {.addr=0x42ff, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x4300, .a=0xfc, .x=0xc6, .y=0x64, .sp=0x9f, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0xfc}, {.addr=0x42fe, .value=0xe4}, {.addr=0x42ff, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x42fe, .value=0xe4, .type=IO_READ},
        {.addr=0x42ff, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x6236, .a=0x6f, .x=0x04, .y=0xcc, .sp=0xbb, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x68}, {.addr=0x6236, .value=0xe4}, {.addr=0x6237, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x6238, .a=0x68, .x=0x04, .y=0xcc, .sp=0xbb, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x68}, {.addr=0x6236, .value=0xe4}, {.addr=0x6237, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6236, .value=0xe4, .type=IO_READ},
        {.addr=0x6237, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x9aa4, .a=0xa9, .x=0x4c, .y=0x6e, .sp=0xdd, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xa8}, {.addr=0x9aa4, .value=0xe4}, {.addr=0x9aa5, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x9aa6, .a=0xa8, .x=0x4c, .y=0x6e, .sp=0xdd, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xa8}, {.addr=0x9aa4, .value=0xe4}, {.addr=0x9aa5, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aa4, .value=0xe4, .type=IO_READ},
        {.addr=0x9aa5, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xf794, .a=0x60, .x=0x1b, .y=0x11, .sp=0x82, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x2a}, {.addr=0xf794, .value=0xe4}, {.addr=0xf795, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xf796, .a=0x2a, .x=0x1b, .y=0x11, .sp=0x82, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x2a}, {.addr=0xf794, .value=0xe4}, {.addr=0xf795, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf794, .value=0xe4, .type=IO_READ},
        {.addr=0xf795, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x6227, .a=0xac, .x=0x36, .y=0x32, .sp=0x52, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0xea}, {.addr=0x6227, .value=0xe4}, {.addr=0x6228, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x6229, .a=0xea, .x=0x36, .y=0x32, .sp=0x52, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0xea}, {.addr=0x6227, .value=0xe4}, {.addr=0x6228, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6227, .value=0xe4, .type=IO_READ},
        {.addr=0x6228, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xb8c9, .a=0xc8, .x=0xbc, .y=0x26, .sp=0x46, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xc5}, {.addr=0xb8c9, .value=0xe4}, {.addr=0xb8ca, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xb8cb, .a=0xc5, .x=0xbc, .y=0x26, .sp=0x46, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xc5}, {.addr=0xb8c9, .value=0xe4}, {.addr=0xb8ca, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8c9, .value=0xe4, .type=IO_READ},
        {.addr=0xb8ca, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xf9fa, .a=0x88, .x=0xc1, .y=0x35, .sp=0x26, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x81}, {.addr=0xf9fa, .value=0xe4}, {.addr=0xf9fb, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xf9fc, .a=0x81, .x=0xc1, .y=0x35, .sp=0x26, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x81}, {.addr=0xf9fa, .value=0xe4}, {.addr=0xf9fb, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9fa, .value=0xe4, .type=IO_READ},
        {.addr=0xf9fb, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x592e, .a=0x04, .x=0x47, .y=0x91, .sp=0xf5, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xab}, {.addr=0x592e, .value=0xe4}, {.addr=0x592f, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x5930, .a=0xab, .x=0x47, .y=0x91, .sp=0xf5, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xab}, {.addr=0x592e, .value=0xe4}, {.addr=0x592f, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x592e, .value=0xe4, .type=IO_READ},
        {.addr=0x592f, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1684, .a=0x3f, .x=0x75, .y=0x6e, .sp=0x32, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x5b}, {.addr=0x1684, .value=0xe4}, {.addr=0x1685, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x1686, .a=0x5b, .x=0x75, .y=0x6e, .sp=0x32, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x5b}, {.addr=0x1684, .value=0xe4}, {.addr=0x1685, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x1684, .value=0xe4, .type=IO_READ},
        {.addr=0x1685, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xc238, .a=0x9b, .x=0x62, .y=0x67, .sp=0x32, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x3b}, {.addr=0xc238, .value=0xe4}, {.addr=0xc239, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xc23a, .a=0x3b, .x=0x62, .y=0x67, .sp=0x32, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x3b}, {.addr=0xc238, .value=0xe4}, {.addr=0xc239, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xc238, .value=0xe4, .type=IO_READ},
        {.addr=0xc239, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3455, .a=0x96, .x=0x27, .y=0xaf, .sp=0xed, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x97}, {.addr=0x3455, .value=0xe4}, {.addr=0x3456, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x3457, .a=0x97, .x=0x27, .y=0xaf, .sp=0xed, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x97}, {.addr=0x3455, .value=0xe4}, {.addr=0x3456, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3455, .value=0xe4, .type=IO_READ},
        {.addr=0x3456, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x966c, .a=0x47, .x=0x92, .y=0xbb, .sp=0xe7, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xc7}, {.addr=0x966c, .value=0xe4}, {.addr=0x966d, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x966e, .a=0xc7, .x=0x92, .y=0xbb, .sp=0xe7, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xc7}, {.addr=0x966c, .value=0xe4}, {.addr=0x966d, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x966c, .value=0xe4, .type=IO_READ},
        {.addr=0x966d, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x3067, .a=0x96, .x=0x72, .y=0x59, .sp=0x1f, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x3067, .value=0xe4}, {.addr=0x3068, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x3069, .a=0xb7, .x=0x72, .y=0x59, .sp=0x1f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x3067, .value=0xe4}, {.addr=0x3068, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x3067, .value=0xe4, .type=IO_READ},
        {.addr=0x3068, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x5501, .a=0xec, .x=0x2d, .y=0xb2, .sp=0xc5, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xfa}, {.addr=0x5501, .value=0xe4}, {.addr=0x5502, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x5503, .a=0xfa, .x=0x2d, .y=0xb2, .sp=0xc5, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xfa}, {.addr=0x5501, .value=0xe4}, {.addr=0x5502, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x5501, .value=0xe4, .type=IO_READ},
        {.addr=0x5502, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xc348, .a=0xb4, .x=0xa9, .y=0xaf, .sp=0xf4, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x78}, {.addr=0xc348, .value=0xe4}, {.addr=0xc349, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xc34a, .a=0x78, .x=0xa9, .y=0xaf, .sp=0xf4, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x78}, {.addr=0xc348, .value=0xe4}, {.addr=0xc349, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xc348, .value=0xe4, .type=IO_READ},
        {.addr=0xc349, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9e28, .a=0x60, .x=0x28, .y=0x0f, .sp=0xaf, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x0a}, {.addr=0x9e28, .value=0xe4}, {.addr=0x9e29, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x9e2a, .a=0x0a, .x=0x28, .y=0x0f, .sp=0xaf, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x0a}, {.addr=0x9e28, .value=0xe4}, {.addr=0x9e29, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e28, .value=0xe4, .type=IO_READ},
        {.addr=0x9e29, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x0c87, .a=0x4e, .x=0x6d, .y=0x58, .sp=0xd2, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xf2}, {.addr=0x0c87, .value=0xe4}, {.addr=0x0c88, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0c89, .a=0xf2, .x=0x6d, .y=0x58, .sp=0xd2, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xf2}, {.addr=0x0c87, .value=0xe4}, {.addr=0x0c88, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c87, .value=0xe4, .type=IO_READ},
        {.addr=0x0c88, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x8c9d, .a=0xbc, .x=0xd3, .y=0x77, .sp=0x54, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xa7}, {.addr=0x8c9d, .value=0xe4}, {.addr=0x8c9e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x8c9f, .a=0xa7, .x=0xd3, .y=0x77, .sp=0x54, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xa7}, {.addr=0x8c9d, .value=0xe4}, {.addr=0x8c9e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c9d, .value=0xe4, .type=IO_READ},
        {.addr=0x8c9e, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x1512, .a=0x5e, .x=0x37, .y=0xf0, .sp=0xf8, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xb1}, {.addr=0x1512, .value=0xe4}, {.addr=0x1513, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x1514, .a=0xb1, .x=0x37, .y=0xf0, .sp=0xf8, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xb1}, {.addr=0x1512, .value=0xe4}, {.addr=0x1513, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1512, .value=0xe4, .type=IO_READ},
        {.addr=0x1513, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x1a6e, .a=0xed, .x=0xe6, .y=0x27, .sp=0xc4, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x78}, {.addr=0x1a6e, .value=0xe4}, {.addr=0x1a6f, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x1a70, .a=0x78, .x=0xe6, .y=0x27, .sp=0xc4, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x78}, {.addr=0x1a6e, .value=0xe4}, {.addr=0x1a6f, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a6e, .value=0xe4, .type=IO_READ},
        {.addr=0x1a6f, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xac70, .a=0x22, .x=0xb7, .y=0xf2, .sp=0xf1, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x01}, {.addr=0xac70, .value=0xe4}, {.addr=0xac71, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xac72, .a=0x01, .x=0xb7, .y=0xf2, .sp=0xf1, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x01}, {.addr=0xac70, .value=0xe4}, {.addr=0xac71, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xac70, .value=0xe4, .type=IO_READ},
        {.addr=0xac71, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x169d, .a=0x64, .x=0x72, .y=0x25, .sp=0x0e, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x4f}, {.addr=0x169d, .value=0xe4}, {.addr=0x169e, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x169f, .a=0x4f, .x=0x72, .y=0x25, .sp=0x0e, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x4f}, {.addr=0x169d, .value=0xe4}, {.addr=0x169e, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x169d, .value=0xe4, .type=IO_READ},
        {.addr=0x169e, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x5095, .a=0x41, .x=0x25, .y=0x67, .sp=0x57, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xa1}, {.addr=0x5095, .value=0xe4}, {.addr=0x5096, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x5097, .a=0xa1, .x=0x25, .y=0x67, .sp=0x57, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xa1}, {.addr=0x5095, .value=0xe4}, {.addr=0x5096, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5095, .value=0xe4, .type=IO_READ},
        {.addr=0x5096, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x8934, .a=0x76, .x=0xa2, .y=0xf6, .sp=0x64, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x71}, {.addr=0x8934, .value=0xe4}, {.addr=0x8935, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x8936, .a=0x71, .x=0xa2, .y=0xf6, .sp=0x64, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x71}, {.addr=0x8934, .value=0xe4}, {.addr=0x8935, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8934, .value=0xe4, .type=IO_READ},
        {.addr=0x8935, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xe179, .a=0xb9, .x=0x01, .y=0xe8, .sp=0xec, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x49}, {.addr=0xe179, .value=0xe4}, {.addr=0xe17a, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xe17b, .a=0x49, .x=0x01, .y=0xe8, .sp=0xec, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x49}, {.addr=0xe179, .value=0xe4}, {.addr=0xe17a, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe179, .value=0xe4, .type=IO_READ},
        {.addr=0xe17a, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x67cc, .a=0x60, .x=0x8d, .y=0x85, .sp=0xf3, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x21}, {.addr=0x67cc, .value=0xe4}, {.addr=0x67cd, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x67ce, .a=0x21, .x=0x8d, .y=0x85, .sp=0xf3, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x21}, {.addr=0x67cc, .value=0xe4}, {.addr=0x67cd, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x67cc, .value=0xe4, .type=IO_READ},
        {.addr=0x67cd, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x4e06, .a=0x9b, .x=0x44, .y=0x42, .sp=0xbd, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xef}, {.addr=0x4e06, .value=0xe4}, {.addr=0x4e07, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x4e08, .a=0xef, .x=0x44, .y=0x42, .sp=0xbd, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xef}, {.addr=0x4e06, .value=0xe4}, {.addr=0x4e07, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e06, .value=0xe4, .type=IO_READ},
        {.addr=0x4e07, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x4e16, .a=0xe3, .x=0xfd, .y=0x76, .sp=0xaa, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x7e}, {.addr=0x4e16, .value=0xe4}, {.addr=0x4e17, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x4e18, .a=0x7e, .x=0xfd, .y=0x76, .sp=0xaa, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x7e}, {.addr=0x4e16, .value=0xe4}, {.addr=0x4e17, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e16, .value=0xe4, .type=IO_READ},
        {.addr=0x4e17, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x1cfb, .a=0x5f, .x=0xe3, .y=0xe0, .sp=0x51, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x4b}, {.addr=0x1cfb, .value=0xe4}, {.addr=0x1cfc, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x1cfd, .a=0x4b, .x=0xe3, .y=0xe0, .sp=0x51, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x4b}, {.addr=0x1cfb, .value=0xe4}, {.addr=0x1cfc, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cfb, .value=0xe4, .type=IO_READ},
        {.addr=0x1cfc, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x600e, .a=0xb5, .x=0xcd, .y=0x70, .sp=0xf6, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x74}, {.addr=0x600e, .value=0xe4}, {.addr=0x600f, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x6010, .a=0x74, .x=0xcd, .y=0x70, .sp=0xf6, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x74}, {.addr=0x600e, .value=0xe4}, {.addr=0x600f, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x600e, .value=0xe4, .type=IO_READ},
        {.addr=0x600f, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x0981, .a=0x78, .x=0x71, .y=0x10, .sp=0xc2, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xff}, {.addr=0x0981, .value=0xe4}, {.addr=0x0982, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x0983, .a=0xff, .x=0x71, .y=0x10, .sp=0xc2, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xff}, {.addr=0x0981, .value=0xe4}, {.addr=0x0982, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0981, .value=0xe4, .type=IO_READ},
        {.addr=0x0982, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x4add, .a=0xd9, .x=0x0a, .y=0xc1, .sp=0x85, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x44}, {.addr=0x4add, .value=0xe4}, {.addr=0x4ade, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x4adf, .a=0x44, .x=0x0a, .y=0xc1, .sp=0x85, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x44}, {.addr=0x4add, .value=0xe4}, {.addr=0x4ade, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x4add, .value=0xe4, .type=IO_READ},
        {.addr=0x4ade, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x6f4d, .a=0x0f, .x=0xf1, .y=0xdc, .sp=0x8e, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x2b}, {.addr=0x6f4d, .value=0xe4}, {.addr=0x6f4e, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x6f4f, .a=0x2b, .x=0xf1, .y=0xdc, .sp=0x8e, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x2b}, {.addr=0x6f4d, .value=0xe4}, {.addr=0x6f4e, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f4d, .value=0xe4, .type=IO_READ},
        {.addr=0x6f4e, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x996a, .a=0x2d, .x=0x92, .y=0x70, .sp=0x48, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x34}, {.addr=0x996a, .value=0xe4}, {.addr=0x996b, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x996c, .a=0x34, .x=0x92, .y=0x70, .sp=0x48, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x34}, {.addr=0x996a, .value=0xe4}, {.addr=0x996b, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x996a, .value=0xe4, .type=IO_READ},
        {.addr=0x996b, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x4179, .a=0xe1, .x=0x13, .y=0x52, .sp=0xd8, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x4d}, {.addr=0x4179, .value=0xe4}, {.addr=0x417a, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x417b, .a=0x4d, .x=0x13, .y=0x52, .sp=0xd8, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x4d}, {.addr=0x4179, .value=0xe4}, {.addr=0x417a, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4179, .value=0xe4, .type=IO_READ},
        {.addr=0x417a, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x5291, .a=0x0d, .x=0x89, .y=0xe0, .sp=0x3c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xe9}, {.addr=0x5291, .value=0xe4}, {.addr=0x5292, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x5293, .a=0xe9, .x=0x89, .y=0xe0, .sp=0x3c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xe9}, {.addr=0x5291, .value=0xe4}, {.addr=0x5292, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5291, .value=0xe4, .type=IO_READ},
        {.addr=0x5292, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8e42, .a=0x16, .x=0x56, .y=0x1c, .sp=0xba, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x18}, {.addr=0x8e42, .value=0xe4}, {.addr=0x8e43, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x8e44, .a=0x18, .x=0x56, .y=0x1c, .sp=0xba, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x18}, {.addr=0x8e42, .value=0xe4}, {.addr=0x8e43, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e42, .value=0xe4, .type=IO_READ},
        {.addr=0x8e43, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x074d, .a=0x34, .x=0x68, .y=0x93, .sp=0x92, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xae}, {.addr=0x074d, .value=0xe4}, {.addr=0x074e, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x074f, .a=0xae, .x=0x68, .y=0x93, .sp=0x92, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xae}, {.addr=0x074d, .value=0xe4}, {.addr=0x074e, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x074d, .value=0xe4, .type=IO_READ},
        {.addr=0x074e, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0557, .a=0x5b, .x=0x78, .y=0x5e, .sp=0x68, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x4a}, {.addr=0x0557, .value=0xe4}, {.addr=0x0558, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x0559, .a=0x4a, .x=0x78, .y=0x5e, .sp=0x68, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x4a}, {.addr=0x0557, .value=0xe4}, {.addr=0x0558, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x0557, .value=0xe4, .type=IO_READ},
        {.addr=0x0558, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x5efe, .a=0xd7, .x=0x5e, .y=0xf4, .sp=0x1f, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xe5}, {.addr=0x5efe, .value=0xe4}, {.addr=0x5eff, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x5f00, .a=0xe5, .x=0x5e, .y=0xf4, .sp=0x1f, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xe5}, {.addr=0x5efe, .value=0xe4}, {.addr=0x5eff, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5efe, .value=0xe4, .type=IO_READ},
        {.addr=0x5eff, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x7e0d, .a=0x43, .x=0x55, .y=0x82, .sp=0xe4, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0xaa}, {.addr=0x7e0d, .value=0xe4}, {.addr=0x7e0e, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x7e0f, .a=0xaa, .x=0x55, .y=0x82, .sp=0xe4, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0xaa}, {.addr=0x7e0d, .value=0xe4}, {.addr=0x7e0e, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e0d, .value=0xe4, .type=IO_READ},
        {.addr=0x7e0e, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb5a9, .a=0xf2, .x=0xb3, .y=0xbd, .sp=0x37, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x83}, {.addr=0xb5a9, .value=0xe4}, {.addr=0xb5aa, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xb5ab, .a=0x83, .x=0xb3, .y=0xbd, .sp=0x37, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x83}, {.addr=0xb5a9, .value=0xe4}, {.addr=0xb5aa, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5a9, .value=0xe4, .type=IO_READ},
        {.addr=0xb5aa, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4757, .a=0xf1, .x=0xee, .y=0x60, .sp=0xe3, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x17}, {.addr=0x4757, .value=0xe4}, {.addr=0x4758, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x4759, .a=0x17, .x=0xee, .y=0x60, .sp=0xe3, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x17}, {.addr=0x4757, .value=0xe4}, {.addr=0x4758, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x4757, .value=0xe4, .type=IO_READ},
        {.addr=0x4758, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x089c, .a=0x49, .x=0x45, .y=0xd4, .sp=0x24, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x42}, {.addr=0x089c, .value=0xe4}, {.addr=0x089d, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x089e, .a=0x42, .x=0x45, .y=0xd4, .sp=0x24, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x42}, {.addr=0x089c, .value=0xe4}, {.addr=0x089d, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x089c, .value=0xe4, .type=IO_READ},
        {.addr=0x089d, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x6838, .a=0x7c, .x=0x5c, .y=0x7f, .sp=0x03, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x5c}, {.addr=0x6838, .value=0xe4}, {.addr=0x6839, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x683a, .a=0x5c, .x=0x5c, .y=0x7f, .sp=0x03, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x5c}, {.addr=0x6838, .value=0xe4}, {.addr=0x6839, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6838, .value=0xe4, .type=IO_READ},
        {.addr=0x6839, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xdd64, .a=0xdc, .x=0xd4, .y=0xa3, .sp=0xe3, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x58}, {.addr=0xdd64, .value=0xe4}, {.addr=0xdd65, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xdd66, .a=0x58, .x=0xd4, .y=0xa3, .sp=0xe3, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x58}, {.addr=0xdd64, .value=0xe4}, {.addr=0xdd65, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd64, .value=0xe4, .type=IO_READ},
        {.addr=0xdd65, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xf52d, .a=0xea, .x=0x71, .y=0x5e, .sp=0x4a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x5d}, {.addr=0xf52d, .value=0xe4}, {.addr=0xf52e, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xf52f, .a=0x5d, .x=0x71, .y=0x5e, .sp=0x4a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x5d}, {.addr=0xf52d, .value=0xe4}, {.addr=0xf52e, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xf52d, .value=0xe4, .type=IO_READ},
        {.addr=0xf52e, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xface, .a=0x31, .x=0x09, .y=0x1e, .sp=0x9f, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x5f}, {.addr=0xface, .value=0xe4}, {.addr=0xfacf, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xfad0, .a=0x5f, .x=0x09, .y=0x1e, .sp=0x9f, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x5f}, {.addr=0xface, .value=0xe4}, {.addr=0xfacf, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xface, .value=0xe4, .type=IO_READ},
        {.addr=0xfacf, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x6681, .a=0xde, .x=0x90, .y=0xe4, .sp=0xec, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x22}, {.addr=0x6681, .value=0xe4}, {.addr=0x6682, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x6683, .a=0x22, .x=0x90, .y=0xe4, .sp=0xec, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x22}, {.addr=0x6681, .value=0xe4}, {.addr=0x6682, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6681, .value=0xe4, .type=IO_READ},
        {.addr=0x6682, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xdc1b, .a=0x61, .x=0xad, .y=0xc1, .sp=0x2b, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x59}, {.addr=0xdc1b, .value=0xe4}, {.addr=0xdc1c, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xdc1d, .a=0x59, .x=0xad, .y=0xc1, .sp=0x2b, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x59}, {.addr=0xdc1b, .value=0xe4}, {.addr=0xdc1c, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc1b, .value=0xe4, .type=IO_READ},
        {.addr=0xdc1c, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x738d, .a=0xc3, .x=0x19, .y=0x4a, .sp=0x72, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x4b}, {.addr=0x738d, .value=0xe4}, {.addr=0x738e, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x738f, .a=0x4b, .x=0x19, .y=0x4a, .sp=0x72, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x4b}, {.addr=0x738d, .value=0xe4}, {.addr=0x738e, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x738d, .value=0xe4, .type=IO_READ},
        {.addr=0x738e, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x069d, .a=0x56, .x=0xe8, .y=0x45, .sp=0xb0, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x29}, {.addr=0x069d, .value=0xe4}, {.addr=0x069e, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x069f, .a=0x29, .x=0xe8, .y=0x45, .sp=0xb0, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x29}, {.addr=0x069d, .value=0xe4}, {.addr=0x069e, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x069d, .value=0xe4, .type=IO_READ},
        {.addr=0x069e, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x0eac, .a=0x66, .x=0xc5, .y=0xa3, .sp=0x02, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x54}, {.addr=0x0eac, .value=0xe4}, {.addr=0x0ead, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0eae, .a=0x54, .x=0xc5, .y=0xa3, .sp=0x02, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x54}, {.addr=0x0eac, .value=0xe4}, {.addr=0x0ead, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0eac, .value=0xe4, .type=IO_READ},
        {.addr=0x0ead, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc580, .a=0x8d, .x=0x07, .y=0xe8, .sp=0xa9, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x22}, {.addr=0xc580, .value=0xe4}, {.addr=0xc581, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xc582, .a=0x22, .x=0x07, .y=0xe8, .sp=0xa9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x22}, {.addr=0xc580, .value=0xe4}, {.addr=0xc581, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc580, .value=0xe4, .type=IO_READ},
        {.addr=0xc581, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x4a3c, .a=0xfc, .x=0x12, .y=0x82, .sp=0xf9, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xfa}, {.addr=0x4a3c, .value=0xe4}, {.addr=0x4a3d, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x4a3e, .a=0xfa, .x=0x12, .y=0x82, .sp=0xf9, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xfa}, {.addr=0x4a3c, .value=0xe4}, {.addr=0x4a3d, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a3c, .value=0xe4, .type=IO_READ},
        {.addr=0x4a3d, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3cc4, .a=0x0e, .x=0x05, .y=0xac, .sp=0x0d, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x8f}, {.addr=0x3cc4, .value=0xe4}, {.addr=0x3cc5, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x3cc6, .a=0x8f, .x=0x05, .y=0xac, .sp=0x0d, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x8f}, {.addr=0x3cc4, .value=0xe4}, {.addr=0x3cc5, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cc4, .value=0xe4, .type=IO_READ},
        {.addr=0x3cc5, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x074a, .a=0xb3, .x=0x7c, .y=0xb5, .sp=0x49, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x33}, {.addr=0x074a, .value=0xe4}, {.addr=0x074b, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0x074c, .a=0x33, .x=0x7c, .y=0xb5, .sp=0x49, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x33}, {.addr=0x074a, .value=0xe4}, {.addr=0x074b, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0x074a, .value=0xe4, .type=IO_READ},
        {.addr=0x074b, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xdd94, .a=0xde, .x=0xad, .y=0xb4, .sp=0x29, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x3a}, {.addr=0xdd94, .value=0xe4}, {.addr=0xdd95, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xdd96, .a=0x3a, .x=0xad, .y=0xb4, .sp=0x29, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x3a}, {.addr=0xdd94, .value=0xe4}, {.addr=0xdd95, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd94, .value=0xe4, .type=IO_READ},
        {.addr=0xdd95, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x69b0, .a=0xa3, .x=0x5d, .y=0x43, .sp=0xfb, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x71}, {.addr=0x69b0, .value=0xe4}, {.addr=0x69b1, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x69b2, .a=0x71, .x=0x5d, .y=0x43, .sp=0xfb, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x71}, {.addr=0x69b0, .value=0xe4}, {.addr=0x69b1, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x69b0, .value=0xe4, .type=IO_READ},
        {.addr=0x69b1, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xa7d8, .a=0xf1, .x=0xd2, .y=0xff, .sp=0x6d, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xd8}, {.addr=0xa7d8, .value=0xe4}, {.addr=0xa7d9, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xa7da, .a=0xd8, .x=0xd2, .y=0xff, .sp=0x6d, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xd8}, {.addr=0xa7d8, .value=0xe4}, {.addr=0xa7d9, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7d8, .value=0xe4, .type=IO_READ},
        {.addr=0xa7d9, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x0efe, .a=0xe0, .x=0x8b, .y=0x73, .sp=0x87, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0xbd}, {.addr=0x0efe, .value=0xe4}, {.addr=0x0eff, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x0f00, .a=0xbd, .x=0x8b, .y=0x73, .sp=0x87, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0xbd}, {.addr=0x0efe, .value=0xe4}, {.addr=0x0eff, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x0efe, .value=0xe4, .type=IO_READ},
        {.addr=0x0eff, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xc5f9, .a=0xc1, .x=0x2b, .y=0xe3, .sp=0x4f, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x5b}, {.addr=0xc5f9, .value=0xe4}, {.addr=0xc5fa, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xc5fb, .a=0x5b, .x=0x2b, .y=0xe3, .sp=0x4f, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x5b}, {.addr=0xc5f9, .value=0xe4}, {.addr=0xc5fa, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5f9, .value=0xe4, .type=IO_READ},
        {.addr=0xc5fa, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x2f18, .a=0x85, .x=0x63, .y=0xa1, .sp=0x83, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xd2}, {.addr=0x2f18, .value=0xe4}, {.addr=0x2f19, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x2f1a, .a=0xd2, .x=0x63, .y=0xa1, .sp=0x83, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xd2}, {.addr=0x2f18, .value=0xe4}, {.addr=0x2f19, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f18, .value=0xe4, .type=IO_READ},
        {.addr=0x2f19, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x3761, .a=0x55, .x=0xc3, .y=0xcb, .sp=0xe0, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x5f}, {.addr=0x3761, .value=0xe4}, {.addr=0x3762, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x3763, .a=0x5f, .x=0xc3, .y=0xcb, .sp=0xe0, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x5f}, {.addr=0x3761, .value=0xe4}, {.addr=0x3762, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3761, .value=0xe4, .type=IO_READ},
        {.addr=0x3762, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x149c, .a=0x65, .x=0x8f, .y=0xcd, .sp=0xe4, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xa9}, {.addr=0x149c, .value=0xe4}, {.addr=0x149d, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x149e, .a=0xa9, .x=0x8f, .y=0xcd, .sp=0xe4, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xa9}, {.addr=0x149c, .value=0xe4}, {.addr=0x149d, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x149c, .value=0xe4, .type=IO_READ},
        {.addr=0x149d, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x30a1, .a=0x2d, .x=0x08, .y=0x32, .sp=0xa5, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xb1}, {.addr=0x30a1, .value=0xe4}, {.addr=0x30a2, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x30a3, .a=0xb1, .x=0x08, .y=0x32, .sp=0xa5, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xb1}, {.addr=0x30a1, .value=0xe4}, {.addr=0x30a2, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x30a1, .value=0xe4, .type=IO_READ},
        {.addr=0x30a2, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xba9f, .a=0x05, .x=0xcc, .y=0x42, .sp=0x25, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xc8}, {.addr=0xba9f, .value=0xe4}, {.addr=0xbaa0, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xbaa1, .a=0xc8, .x=0xcc, .y=0x42, .sp=0x25, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xc8}, {.addr=0xba9f, .value=0xe4}, {.addr=0xbaa0, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xba9f, .value=0xe4, .type=IO_READ},
        {.addr=0xbaa0, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xa7c7, .a=0x02, .x=0xdf, .y=0x46, .sp=0x98, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x72}, {.addr=0xa7c7, .value=0xe4}, {.addr=0xa7c8, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xa7c9, .a=0x72, .x=0xdf, .y=0x46, .sp=0x98, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x72}, {.addr=0xa7c7, .value=0xe4}, {.addr=0xa7c8, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7c7, .value=0xe4, .type=IO_READ},
        {.addr=0xa7c8, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xfa5a, .a=0xc4, .x=0xd2, .y=0x09, .sp=0xdb, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x21}, {.addr=0xfa5a, .value=0xe4}, {.addr=0xfa5b, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xfa5c, .a=0x21, .x=0xd2, .y=0x09, .sp=0xdb, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x21}, {.addr=0xfa5a, .value=0xe4}, {.addr=0xfa5b, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa5a, .value=0xe4, .type=IO_READ},
        {.addr=0xfa5b, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x5831, .a=0x0d, .x=0x46, .y=0x62, .sp=0x03, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xa2}, {.addr=0x5831, .value=0xe4}, {.addr=0x5832, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x5833, .a=0xa2, .x=0x46, .y=0x62, .sp=0x03, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xa2}, {.addr=0x5831, .value=0xe4}, {.addr=0x5832, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5831, .value=0xe4, .type=IO_READ},
        {.addr=0x5832, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x7eca, .a=0x75, .x=0xa5, .y=0x42, .sp=0xcd, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x6e}, {.addr=0x7eca, .value=0xe4}, {.addr=0x7ecb, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x7ecc, .a=0x6e, .x=0xa5, .y=0x42, .sp=0xcd, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x6e}, {.addr=0x7eca, .value=0xe4}, {.addr=0x7ecb, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eca, .value=0xe4, .type=IO_READ},
        {.addr=0x7ecb, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x6ed2, .a=0x32, .x=0xbb, .y=0x90, .sp=0x2a, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x56}, {.addr=0x6ed2, .value=0xe4}, {.addr=0x6ed3, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x6ed4, .a=0x56, .x=0xbb, .y=0x90, .sp=0x2a, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x56}, {.addr=0x6ed2, .value=0xe4}, {.addr=0x6ed3, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ed2, .value=0xe4, .type=IO_READ},
        {.addr=0x6ed3, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x40eb, .a=0xaa, .x=0x07, .y=0x50, .sp=0x58, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x5f}, {.addr=0x40eb, .value=0xe4}, {.addr=0x40ec, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x40ed, .a=0x5f, .x=0x07, .y=0x50, .sp=0x58, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x5f}, {.addr=0x40eb, .value=0xe4}, {.addr=0x40ec, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x40eb, .value=0xe4, .type=IO_READ},
        {.addr=0x40ec, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x119b, .a=0x4a, .x=0xc7, .y=0x40, .sp=0xb6, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x87}, {.addr=0x119b, .value=0xe4}, {.addr=0x119c, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x119d, .a=0x87, .x=0xc7, .y=0x40, .sp=0xb6, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x87}, {.addr=0x119b, .value=0xe4}, {.addr=0x119c, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x119b, .value=0xe4, .type=IO_READ},
        {.addr=0x119c, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x35aa, .a=0xe2, .x=0x9a, .y=0xc1, .sp=0xb0, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xd7}, {.addr=0x35aa, .value=0xe4}, {.addr=0x35ab, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x35ac, .a=0xd7, .x=0x9a, .y=0xc1, .sp=0xb0, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xd7}, {.addr=0x35aa, .value=0xe4}, {.addr=0x35ab, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x35aa, .value=0xe4, .type=IO_READ},
        {.addr=0x35ab, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x4e55, .a=0xd3, .x=0x3d, .y=0x4d, .sp=0x61, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xeb}, {.addr=0x4e55, .value=0xe4}, {.addr=0x4e56, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x4e57, .a=0xeb, .x=0x3d, .y=0x4d, .sp=0x61, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xeb}, {.addr=0x4e55, .value=0xe4}, {.addr=0x4e56, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e55, .value=0xe4, .type=IO_READ},
        {.addr=0x4e56, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xa35d, .a=0x8f, .x=0xdd, .y=0xd1, .sp=0xbf, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x20}, {.addr=0xa35d, .value=0xe4}, {.addr=0xa35e, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xa35f, .a=0x20, .x=0xdd, .y=0xd1, .sp=0xbf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x20}, {.addr=0xa35d, .value=0xe4}, {.addr=0xa35e, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xa35d, .value=0xe4, .type=IO_READ},
        {.addr=0xa35e, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x8db1, .a=0x4a, .x=0xf3, .y=0x08, .sp=0x8a, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xc2}, {.addr=0x8db1, .value=0xe4}, {.addr=0x8db2, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x8db3, .a=0xc2, .x=0xf3, .y=0x08, .sp=0x8a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xc2}, {.addr=0x8db1, .value=0xe4}, {.addr=0x8db2, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x8db1, .value=0xe4, .type=IO_READ},
        {.addr=0x8db2, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x005f, .a=0x11, .x=0xa7, .y=0x28, .sp=0xcc, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xe4}, {.addr=0x0060, .value=0xa7}, {.addr=0x01a7, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x0061, .a=0x66, .x=0xa7, .y=0x28, .sp=0xcc, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xe4}, {.addr=0x0060, .value=0xa7}, {.addr=0x01a7, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x005f, .value=0xe4, .type=IO_READ},
        {.addr=0x0060, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xe4d7, .a=0xd7, .x=0x64, .y=0x3b, .sp=0x89, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xf2}, {.addr=0xe4d7, .value=0xe4}, {.addr=0xe4d8, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xe4d9, .a=0xf2, .x=0x64, .y=0x3b, .sp=0x89, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xf2}, {.addr=0xe4d7, .value=0xe4}, {.addr=0xe4d8, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4d7, .value=0xe4, .type=IO_READ},
        {.addr=0xe4d8, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xc93d, .a=0x72, .x=0x81, .y=0xdd, .sp=0x39, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x1b}, {.addr=0xc93d, .value=0xe4}, {.addr=0xc93e, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xc93f, .a=0x1b, .x=0x81, .y=0xdd, .sp=0x39, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x1b}, {.addr=0xc93d, .value=0xe4}, {.addr=0xc93e, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc93d, .value=0xe4, .type=IO_READ},
        {.addr=0xc93e, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x1484, .a=0xd0, .x=0xf6, .y=0x66, .sp=0x47, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x9b}, {.addr=0x1484, .value=0xe4}, {.addr=0x1485, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x1486, .a=0x9b, .x=0xf6, .y=0x66, .sp=0x47, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x9b}, {.addr=0x1484, .value=0xe4}, {.addr=0x1485, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1484, .value=0xe4, .type=IO_READ},
        {.addr=0x1485, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x9a8f, .a=0x7a, .x=0xb0, .y=0x20, .sp=0x1c, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x06}, {.addr=0x9a8f, .value=0xe4}, {.addr=0x9a90, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x9a91, .a=0x06, .x=0xb0, .y=0x20, .sp=0x1c, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x06}, {.addr=0x9a8f, .value=0xe4}, {.addr=0x9a90, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a8f, .value=0xe4, .type=IO_READ},
        {.addr=0x9a90, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x11e5, .a=0x3a, .x=0xd1, .y=0x8e, .sp=0x62, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xb9}, {.addr=0x11e5, .value=0xe4}, {.addr=0x11e6, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x11e7, .a=0xb9, .x=0xd1, .y=0x8e, .sp=0x62, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xb9}, {.addr=0x11e5, .value=0xe4}, {.addr=0x11e6, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x11e5, .value=0xe4, .type=IO_READ},
        {.addr=0x11e6, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xcd53, .a=0x25, .x=0x58, .y=0xf9, .sp=0x33, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x83}, {.addr=0xcd53, .value=0xe4}, {.addr=0xcd54, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xcd55, .a=0x83, .x=0x58, .y=0xf9, .sp=0x33, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x83}, {.addr=0xcd53, .value=0xe4}, {.addr=0xcd54, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd53, .value=0xe4, .type=IO_READ},
        {.addr=0xcd54, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xcfce, .a=0xe2, .x=0xda, .y=0xa2, .sp=0x3d, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x59}, {.addr=0xcfce, .value=0xe4}, {.addr=0xcfcf, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xcfd0, .a=0x59, .x=0xda, .y=0xa2, .sp=0x3d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x59}, {.addr=0xcfce, .value=0xe4}, {.addr=0xcfcf, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfce, .value=0xe4, .type=IO_READ},
        {.addr=0xcfcf, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x7906, .a=0xde, .x=0xfa, .y=0xe4, .sp=0x17, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xa8}, {.addr=0x7906, .value=0xe4}, {.addr=0x7907, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x7908, .a=0xa8, .x=0xfa, .y=0xe4, .sp=0x17, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xa8}, {.addr=0x7906, .value=0xe4}, {.addr=0x7907, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7906, .value=0xe4, .type=IO_READ},
        {.addr=0x7907, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xddd8, .a=0xc4, .x=0x49, .y=0xf4, .sp=0x8f, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x3a}, {.addr=0xddd8, .value=0xe4}, {.addr=0xddd9, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xddda, .a=0x3a, .x=0x49, .y=0xf4, .sp=0x8f, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x3a}, {.addr=0xddd8, .value=0xe4}, {.addr=0xddd9, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xddd8, .value=0xe4, .type=IO_READ},
        {.addr=0xddd9, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xf566, .a=0xbc, .x=0xa9, .y=0xd8, .sp=0xda, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x91}, {.addr=0xf566, .value=0xe4}, {.addr=0xf567, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xf568, .a=0x91, .x=0xa9, .y=0xd8, .sp=0xda, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x91}, {.addr=0xf566, .value=0xe4}, {.addr=0xf567, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xf566, .value=0xe4, .type=IO_READ},
        {.addr=0xf567, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x7ee5, .a=0x30, .x=0xdb, .y=0xb7, .sp=0x8b, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x20}, {.addr=0x7ee5, .value=0xe4}, {.addr=0x7ee6, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee7, .a=0x20, .x=0xdb, .y=0xb7, .sp=0x8b, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x20}, {.addr=0x7ee5, .value=0xe4}, {.addr=0x7ee6, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee5, .value=0xe4, .type=IO_READ},
        {.addr=0x7ee6, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x4b73, .a=0x92, .x=0xff, .y=0x72, .sp=0x24, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x95}, {.addr=0x4b73, .value=0xe4}, {.addr=0x4b74, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x4b75, .a=0x95, .x=0xff, .y=0x72, .sp=0x24, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x95}, {.addr=0x4b73, .value=0xe4}, {.addr=0x4b74, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b73, .value=0xe4, .type=IO_READ},
        {.addr=0x4b74, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0200) {
    const struct CPU_State initial_cpu = {.pc=0x38a1, .a=0x39, .x=0xe2, .y=0xd5, .sp=0x26, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x5e}, {.addr=0x38a1, .value=0xe4}, {.addr=0x38a2, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x38a3, .a=0x5e, .x=0xe2, .y=0xd5, .sp=0x26, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x5e}, {.addr=0x38a1, .value=0xe4}, {.addr=0x38a2, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x38a1, .value=0xe4, .type=IO_READ},
        {.addr=0x38a2, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0201) {
    const struct CPU_State initial_cpu = {.pc=0x2d34, .a=0x6a, .x=0x73, .y=0x8d, .sp=0x67, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xac}, {.addr=0x2d34, .value=0xe4}, {.addr=0x2d35, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x2d36, .a=0xac, .x=0x73, .y=0x8d, .sp=0x67, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xac}, {.addr=0x2d34, .value=0xe4}, {.addr=0x2d35, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d34, .value=0xe4, .type=IO_READ},
        {.addr=0x2d35, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0203) {
    const struct CPU_State initial_cpu = {.pc=0xc2d6, .a=0x94, .x=0x71, .y=0xe4, .sp=0x27, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xe9}, {.addr=0xc2d6, .value=0xe4}, {.addr=0xc2d7, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xc2d8, .a=0xe9, .x=0x71, .y=0xe4, .sp=0x27, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xe9}, {.addr=0xc2d6, .value=0xe4}, {.addr=0xc2d7, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2d6, .value=0xe4, .type=IO_READ},
        {.addr=0xc2d7, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0204) {
    const struct CPU_State initial_cpu = {.pc=0xeffe, .a=0x11, .x=0xd8, .y=0x8d, .sp=0x6e, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x3d}, {.addr=0xeffe, .value=0xe4}, {.addr=0xefff, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xf000, .a=0x3d, .x=0xd8, .y=0x8d, .sp=0x6e, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x3d}, {.addr=0xeffe, .value=0xe4}, {.addr=0xefff, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xeffe, .value=0xe4, .type=IO_READ},
        {.addr=0xefff, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc52d, .a=0xb4, .x=0x4c, .y=0x0b, .sp=0x10, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x1b}, {.addr=0xc52d, .value=0xe4}, {.addr=0xc52e, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xc52f, .a=0x1b, .x=0x4c, .y=0x0b, .sp=0x10, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x1b}, {.addr=0xc52d, .value=0xe4}, {.addr=0xc52e, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xc52d, .value=0xe4, .type=IO_READ},
        {.addr=0xc52e, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0206) {
    const struct CPU_State initial_cpu = {.pc=0xde9f, .a=0x0a, .x=0x4a, .y=0x63, .sp=0x8e, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xdd}, {.addr=0xde9f, .value=0xe4}, {.addr=0xdea0, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xdea1, .a=0xdd, .x=0x4a, .y=0x63, .sp=0x8e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xdd}, {.addr=0xde9f, .value=0xe4}, {.addr=0xdea0, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xde9f, .value=0xe4, .type=IO_READ},
        {.addr=0xdea0, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9339, .a=0xdc, .x=0x68, .y=0x52, .sp=0x52, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xc9}, {.addr=0x9339, .value=0xe4}, {.addr=0x933a, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x933b, .a=0xc9, .x=0x68, .y=0x52, .sp=0x52, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xc9}, {.addr=0x9339, .value=0xe4}, {.addr=0x933a, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9339, .value=0xe4, .type=IO_READ},
        {.addr=0x933a, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0208) {
    const struct CPU_State initial_cpu = {.pc=0xa646, .a=0x18, .x=0xb2, .y=0x5c, .sp=0x64, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x6f}, {.addr=0xa646, .value=0xe4}, {.addr=0xa647, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xa648, .a=0x6f, .x=0xb2, .y=0x5c, .sp=0x64, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x6f}, {.addr=0xa646, .value=0xe4}, {.addr=0xa647, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa646, .value=0xe4, .type=IO_READ},
        {.addr=0xa647, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0209) {
    const struct CPU_State initial_cpu = {.pc=0xbf28, .a=0x6f, .x=0x32, .y=0x3b, .sp=0xd7, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xbe}, {.addr=0xbf28, .value=0xe4}, {.addr=0xbf29, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xbf2a, .a=0xbe, .x=0x32, .y=0x3b, .sp=0xd7, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xbe}, {.addr=0xbf28, .value=0xe4}, {.addr=0xbf29, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf28, .value=0xe4, .type=IO_READ},
        {.addr=0xbf29, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020A) {
    const struct CPU_State initial_cpu = {.pc=0x48bc, .a=0x47, .x=0x60, .y=0xe6, .sp=0x37, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x36}, {.addr=0x48bc, .value=0xe4}, {.addr=0x48bd, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x48be, .a=0x36, .x=0x60, .y=0xe6, .sp=0x37, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x36}, {.addr=0x48bc, .value=0xe4}, {.addr=0x48bd, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x48bc, .value=0xe4, .type=IO_READ},
        {.addr=0x48bd, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020B) {
    const struct CPU_State initial_cpu = {.pc=0xa8ed, .a=0xf7, .x=0x01, .y=0x8b, .sp=0xf5, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xfa}, {.addr=0xa8ed, .value=0xe4}, {.addr=0xa8ee, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xa8ef, .a=0xfa, .x=0x01, .y=0x8b, .sp=0xf5, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xfa}, {.addr=0xa8ed, .value=0xe4}, {.addr=0xa8ee, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8ed, .value=0xe4, .type=IO_READ},
        {.addr=0xa8ee, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020C) {
    const struct CPU_State initial_cpu = {.pc=0x83cc, .a=0x7f, .x=0x05, .y=0x13, .sp=0xb0, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x6f}, {.addr=0x83cc, .value=0xe4}, {.addr=0x83cd, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x83ce, .a=0x6f, .x=0x05, .y=0x13, .sp=0xb0, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x6f}, {.addr=0x83cc, .value=0xe4}, {.addr=0x83cd, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x83cc, .value=0xe4, .type=IO_READ},
        {.addr=0x83cd, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020D) {
    const struct CPU_State initial_cpu = {.pc=0xc4d0, .a=0xc6, .x=0xfe, .y=0x53, .sp=0x60, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x0c}, {.addr=0xc4d0, .value=0xe4}, {.addr=0xc4d1, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xc4d2, .a=0x0c, .x=0xfe, .y=0x53, .sp=0x60, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x0c}, {.addr=0xc4d0, .value=0xe4}, {.addr=0xc4d1, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4d0, .value=0xe4, .type=IO_READ},
        {.addr=0xc4d1, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020E) {
    const struct CPU_State initial_cpu = {.pc=0xb997, .a=0xfe, .x=0x7a, .y=0x52, .sp=0x2c, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x4c}, {.addr=0xb997, .value=0xe4}, {.addr=0xb998, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xb999, .a=0x4c, .x=0x7a, .y=0x52, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x4c}, {.addr=0xb997, .value=0xe4}, {.addr=0xb998, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb997, .value=0xe4, .type=IO_READ},
        {.addr=0xb998, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5d68, .a=0x86, .x=0x4b, .y=0xa7, .sp=0xc3, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xf3}, {.addr=0x5d68, .value=0xe4}, {.addr=0x5d69, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x5d6a, .a=0xf3, .x=0x4b, .y=0xa7, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xf3}, {.addr=0x5d68, .value=0xe4}, {.addr=0x5d69, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d68, .value=0xe4, .type=IO_READ},
        {.addr=0x5d69, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0210) {
    const struct CPU_State initial_cpu = {.pc=0xcc53, .a=0x74, .x=0xe4, .y=0xbe, .sp=0xb5, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x45}, {.addr=0xcc53, .value=0xe4}, {.addr=0xcc54, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xcc55, .a=0x45, .x=0xe4, .y=0xbe, .sp=0xb5, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x45}, {.addr=0xcc53, .value=0xe4}, {.addr=0xcc54, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc53, .value=0xe4, .type=IO_READ},
        {.addr=0xcc54, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0211) {
    const struct CPU_State initial_cpu = {.pc=0x6521, .a=0x4c, .x=0x3e, .y=0xe0, .sp=0x29, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x0b}, {.addr=0x6521, .value=0xe4}, {.addr=0x6522, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x6523, .a=0x0b, .x=0x3e, .y=0xe0, .sp=0x29, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x0b}, {.addr=0x6521, .value=0xe4}, {.addr=0x6522, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6521, .value=0xe4, .type=IO_READ},
        {.addr=0x6522, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0212) {
    const struct CPU_State initial_cpu = {.pc=0xc505, .a=0x03, .x=0x1d, .y=0x8a, .sp=0xd9, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x25}, {.addr=0xc505, .value=0xe4}, {.addr=0xc506, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xc507, .a=0x25, .x=0x1d, .y=0x8a, .sp=0xd9, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x25}, {.addr=0xc505, .value=0xe4}, {.addr=0xc506, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc505, .value=0xe4, .type=IO_READ},
        {.addr=0xc506, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0213) {
    const struct CPU_State initial_cpu = {.pc=0xbc86, .a=0x4d, .x=0xd9, .y=0x69, .sp=0xee, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x4e}, {.addr=0xbc86, .value=0xe4}, {.addr=0xbc87, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xbc88, .a=0x4e, .x=0xd9, .y=0x69, .sp=0xee, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x4e}, {.addr=0xbc86, .value=0xe4}, {.addr=0xbc87, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc86, .value=0xe4, .type=IO_READ},
        {.addr=0xbc87, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0214) {
    const struct CPU_State initial_cpu = {.pc=0x0664, .a=0xec, .x=0xc9, .y=0x53, .sp=0x69, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xff}, {.addr=0x0664, .value=0xe4}, {.addr=0x0665, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x0666, .a=0xff, .x=0xc9, .y=0x53, .sp=0x69, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xff}, {.addr=0x0664, .value=0xe4}, {.addr=0x0665, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0664, .value=0xe4, .type=IO_READ},
        {.addr=0x0665, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4705, .a=0x4b, .x=0x73, .y=0xb8, .sp=0xb0, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x85}, {.addr=0x4705, .value=0xe4}, {.addr=0x4706, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x4707, .a=0x85, .x=0x73, .y=0xb8, .sp=0xb0, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x85}, {.addr=0x4705, .value=0xe4}, {.addr=0x4706, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x4705, .value=0xe4, .type=IO_READ},
        {.addr=0x4706, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0216) {
    const struct CPU_State initial_cpu = {.pc=0x018f, .a=0x10, .x=0xd9, .y=0xfb, .sp=0x30, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x04}, {.addr=0x018f, .value=0xe4}, {.addr=0x0190, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x0191, .a=0x04, .x=0xd9, .y=0xfb, .sp=0x30, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x04}, {.addr=0x018f, .value=0xe4}, {.addr=0x0190, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x018f, .value=0xe4, .type=IO_READ},
        {.addr=0x0190, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0217) {
    const struct CPU_State initial_cpu = {.pc=0x34fa, .a=0x6e, .x=0xb2, .y=0x6a, .sp=0xe4, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x2d}, {.addr=0x34fa, .value=0xe4}, {.addr=0x34fb, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x34fc, .a=0x2d, .x=0xb2, .y=0x6a, .sp=0xe4, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x2d}, {.addr=0x34fa, .value=0xe4}, {.addr=0x34fb, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x34fa, .value=0xe4, .type=IO_READ},
        {.addr=0x34fb, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0218) {
    const struct CPU_State initial_cpu = {.pc=0x7a51, .a=0x3b, .x=0x20, .y=0x13, .sp=0x49, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x45}, {.addr=0x7a51, .value=0xe4}, {.addr=0x7a52, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x7a53, .a=0x45, .x=0x20, .y=0x13, .sp=0x49, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x45}, {.addr=0x7a51, .value=0xe4}, {.addr=0x7a52, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a51, .value=0xe4, .type=IO_READ},
        {.addr=0x7a52, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0219) {
    const struct CPU_State initial_cpu = {.pc=0x1e0d, .a=0x01, .x=0xb1, .y=0x8e, .sp=0x9a, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xc8}, {.addr=0x1e0d, .value=0xe4}, {.addr=0x1e0e, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x1e0f, .a=0xc8, .x=0xb1, .y=0x8e, .sp=0x9a, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xc8}, {.addr=0x1e0d, .value=0xe4}, {.addr=0x1e0e, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e0d, .value=0xe4, .type=IO_READ},
        {.addr=0x1e0e, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021A) {
    const struct CPU_State initial_cpu = {.pc=0xfa80, .a=0x6e, .x=0x36, .y=0x28, .sp=0x83, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x0c}, {.addr=0xfa80, .value=0xe4}, {.addr=0xfa81, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xfa82, .a=0x0c, .x=0x36, .y=0x28, .sp=0x83, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x0c}, {.addr=0xfa80, .value=0xe4}, {.addr=0xfa81, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa80, .value=0xe4, .type=IO_READ},
        {.addr=0xfa81, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021B) {
    const struct CPU_State initial_cpu = {.pc=0x580c, .a=0xec, .x=0xee, .y=0xdc, .sp=0xf6, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x49}, {.addr=0x580c, .value=0xe4}, {.addr=0x580d, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x580e, .a=0x49, .x=0xee, .y=0xdc, .sp=0xf6, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x49}, {.addr=0x580c, .value=0xe4}, {.addr=0x580d, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x580c, .value=0xe4, .type=IO_READ},
        {.addr=0x580d, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021C) {
    const struct CPU_State initial_cpu = {.pc=0x8c6b, .a=0x62, .x=0x8b, .y=0x51, .sp=0x21, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x2e}, {.addr=0x8c6b, .value=0xe4}, {.addr=0x8c6c, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x8c6d, .a=0x2e, .x=0x8b, .y=0x51, .sp=0x21, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x2e}, {.addr=0x8c6b, .value=0xe4}, {.addr=0x8c6c, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c6b, .value=0xe4, .type=IO_READ},
        {.addr=0x8c6c, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021D) {
    const struct CPU_State initial_cpu = {.pc=0x2a1e, .a=0x11, .x=0x6b, .y=0xd9, .sp=0x57, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x73}, {.addr=0x2a1e, .value=0xe4}, {.addr=0x2a1f, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x2a20, .a=0x73, .x=0x6b, .y=0xd9, .sp=0x57, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x73}, {.addr=0x2a1e, .value=0xe4}, {.addr=0x2a1f, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a1e, .value=0xe4, .type=IO_READ},
        {.addr=0x2a1f, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021E) {
    const struct CPU_State initial_cpu = {.pc=0x616f, .a=0xa8, .x=0xd0, .y=0x60, .sp=0x0b, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xb1}, {.addr=0x616f, .value=0xe4}, {.addr=0x6170, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x6171, .a=0xb1, .x=0xd0, .y=0x60, .sp=0x0b, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xb1}, {.addr=0x616f, .value=0xe4}, {.addr=0x6170, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x616f, .value=0xe4, .type=IO_READ},
        {.addr=0x6170, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_021F) {
    const struct CPU_State initial_cpu = {.pc=0x56af, .a=0xe0, .x=0x4d, .y=0xc3, .sp=0x6e, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xd9}, {.addr=0x56af, .value=0xe4}, {.addr=0x56b0, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x56b1, .a=0xd9, .x=0x4d, .y=0xc3, .sp=0x6e, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xd9}, {.addr=0x56af, .value=0xe4}, {.addr=0x56b0, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x56af, .value=0xe4, .type=IO_READ},
        {.addr=0x56b0, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0220) {
    const struct CPU_State initial_cpu = {.pc=0xccb1, .a=0xc5, .x=0x99, .y=0x27, .sp=0x80, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x6f}, {.addr=0xccb1, .value=0xe4}, {.addr=0xccb2, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xccb3, .a=0x6f, .x=0x99, .y=0x27, .sp=0x80, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x6f}, {.addr=0xccb1, .value=0xe4}, {.addr=0xccb2, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xccb1, .value=0xe4, .type=IO_READ},
        {.addr=0xccb2, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0221) {
    const struct CPU_State initial_cpu = {.pc=0x3969, .a=0x1f, .x=0x1d, .y=0xca, .sp=0xa6, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xa3}, {.addr=0x3969, .value=0xe4}, {.addr=0x396a, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x396b, .a=0xa3, .x=0x1d, .y=0xca, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xa3}, {.addr=0x3969, .value=0xe4}, {.addr=0x396a, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x3969, .value=0xe4, .type=IO_READ},
        {.addr=0x396a, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0222) {
    const struct CPU_State initial_cpu = {.pc=0x0255, .a=0x8b, .x=0x3f, .y=0xbf, .sp=0xe2, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x5d}, {.addr=0x0255, .value=0xe4}, {.addr=0x0256, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x0257, .a=0x5d, .x=0x3f, .y=0xbf, .sp=0xe2, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x5d}, {.addr=0x0255, .value=0xe4}, {.addr=0x0256, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x0255, .value=0xe4, .type=IO_READ},
        {.addr=0x0256, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0223) {
    const struct CPU_State initial_cpu = {.pc=0x6f30, .a=0x82, .x=0x1c, .y=0xba, .sp=0xf4, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xa6}, {.addr=0x6f30, .value=0xe4}, {.addr=0x6f31, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x6f32, .a=0xa6, .x=0x1c, .y=0xba, .sp=0xf4, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xa6}, {.addr=0x6f30, .value=0xe4}, {.addr=0x6f31, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f30, .value=0xe4, .type=IO_READ},
        {.addr=0x6f31, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0224) {
    const struct CPU_State initial_cpu = {.pc=0x5b22, .a=0xb9, .x=0x51, .y=0x3a, .sp=0x74, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x33}, {.addr=0x5b22, .value=0xe4}, {.addr=0x5b23, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x5b24, .a=0x33, .x=0x51, .y=0x3a, .sp=0x74, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x33}, {.addr=0x5b22, .value=0xe4}, {.addr=0x5b23, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b22, .value=0xe4, .type=IO_READ},
        {.addr=0x5b23, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0225) {
    const struct CPU_State initial_cpu = {.pc=0xfe81, .a=0xf1, .x=0xd8, .y=0xf6, .sp=0x29, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xdc}, {.addr=0xfe81, .value=0xe4}, {.addr=0xfe82, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xfe83, .a=0xdc, .x=0xd8, .y=0xf6, .sp=0x29, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xdc}, {.addr=0xfe81, .value=0xe4}, {.addr=0xfe82, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe81, .value=0xe4, .type=IO_READ},
        {.addr=0xfe82, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0226) {
    const struct CPU_State initial_cpu = {.pc=0x2b0a, .a=0x19, .x=0xa8, .y=0xe1, .sp=0xc0, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x78}, {.addr=0x2b0a, .value=0xe4}, {.addr=0x2b0b, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x2b0c, .a=0x78, .x=0xa8, .y=0xe1, .sp=0xc0, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x78}, {.addr=0x2b0a, .value=0xe4}, {.addr=0x2b0b, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b0a, .value=0xe4, .type=IO_READ},
        {.addr=0x2b0b, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0227) {
    const struct CPU_State initial_cpu = {.pc=0x1a2f, .a=0x3a, .x=0x44, .y=0x35, .sp=0xf5, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xa4}, {.addr=0x1a2f, .value=0xe4}, {.addr=0x1a30, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x1a31, .a=0xa4, .x=0x44, .y=0x35, .sp=0xf5, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xa4}, {.addr=0x1a2f, .value=0xe4}, {.addr=0x1a30, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a2f, .value=0xe4, .type=IO_READ},
        {.addr=0x1a30, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0228) {
    const struct CPU_State initial_cpu = {.pc=0xf840, .a=0x87, .x=0x0e, .y=0x67, .sp=0x3d, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x1a}, {.addr=0xf840, .value=0xe4}, {.addr=0xf841, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xf842, .a=0x1a, .x=0x0e, .y=0x67, .sp=0x3d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x1a}, {.addr=0xf840, .value=0xe4}, {.addr=0xf841, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf840, .value=0xe4, .type=IO_READ},
        {.addr=0xf841, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0229) {
    const struct CPU_State initial_cpu = {.pc=0xa5e7, .a=0x19, .x=0xfc, .y=0x3c, .sp=0x1b, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xf9}, {.addr=0xa5e7, .value=0xe4}, {.addr=0xa5e8, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xa5e9, .a=0xf9, .x=0xfc, .y=0x3c, .sp=0x1b, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xf9}, {.addr=0xa5e7, .value=0xe4}, {.addr=0xa5e8, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5e7, .value=0xe4, .type=IO_READ},
        {.addr=0xa5e8, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_022A) {
    const struct CPU_State initial_cpu = {.pc=0x9b9c, .a=0x69, .x=0xc6, .y=0xb2, .sp=0x07, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x6b}, {.addr=0x9b9c, .value=0xe4}, {.addr=0x9b9d, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x9b9e, .a=0x6b, .x=0xc6, .y=0xb2, .sp=0x07, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x6b}, {.addr=0x9b9c, .value=0xe4}, {.addr=0x9b9d, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b9c, .value=0xe4, .type=IO_READ},
        {.addr=0x9b9d, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_022B) {
    const struct CPU_State initial_cpu = {.pc=0x55de, .a=0x46, .x=0x0d, .y=0x3c, .sp=0xcf, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x65}, {.addr=0x55de, .value=0xe4}, {.addr=0x55df, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x55e0, .a=0x65, .x=0x0d, .y=0x3c, .sp=0xcf, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x65}, {.addr=0x55de, .value=0xe4}, {.addr=0x55df, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x55de, .value=0xe4, .type=IO_READ},
        {.addr=0x55df, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_022C) {
    const struct CPU_State initial_cpu = {.pc=0x2032, .a=0x72, .x=0xbd, .y=0xc9, .sp=0x7e, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xa2}, {.addr=0x2032, .value=0xe4}, {.addr=0x2033, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x2034, .a=0xa2, .x=0xbd, .y=0xc9, .sp=0x7e, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xa2}, {.addr=0x2032, .value=0xe4}, {.addr=0x2033, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x2032, .value=0xe4, .type=IO_READ},
        {.addr=0x2033, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_022D) {
    const struct CPU_State initial_cpu = {.pc=0xaf69, .a=0x26, .x=0x88, .y=0x97, .sp=0xb8, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x79}, {.addr=0xaf69, .value=0xe4}, {.addr=0xaf6a, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xaf6b, .a=0x79, .x=0x88, .y=0x97, .sp=0xb8, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x79}, {.addr=0xaf69, .value=0xe4}, {.addr=0xaf6a, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf69, .value=0xe4, .type=IO_READ},
        {.addr=0xaf6a, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_022E) {
    const struct CPU_State initial_cpu = {.pc=0x3b94, .a=0x55, .x=0x63, .y=0x26, .sp=0x56, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x76}, {.addr=0x3b94, .value=0xe4}, {.addr=0x3b95, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x3b96, .a=0x76, .x=0x63, .y=0x26, .sp=0x56, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x76}, {.addr=0x3b94, .value=0xe4}, {.addr=0x3b95, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b94, .value=0xe4, .type=IO_READ},
        {.addr=0x3b95, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0230) {
    const struct CPU_State initial_cpu = {.pc=0xf2f4, .a=0xdf, .x=0xa9, .y=0x4d, .sp=0xd8, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x4f}, {.addr=0xf2f4, .value=0xe4}, {.addr=0xf2f5, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xf2f6, .a=0x4f, .x=0xa9, .y=0x4d, .sp=0xd8, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x4f}, {.addr=0xf2f4, .value=0xe4}, {.addr=0xf2f5, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2f4, .value=0xe4, .type=IO_READ},
        {.addr=0xf2f5, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0231) {
    const struct CPU_State initial_cpu = {.pc=0xc02f, .a=0x17, .x=0x68, .y=0x21, .sp=0xa9, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x09}, {.addr=0xc02f, .value=0xe4}, {.addr=0xc030, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xc031, .a=0x09, .x=0x68, .y=0x21, .sp=0xa9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x09}, {.addr=0xc02f, .value=0xe4}, {.addr=0xc030, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc02f, .value=0xe4, .type=IO_READ},
        {.addr=0xc030, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0232) {
    const struct CPU_State initial_cpu = {.pc=0x13b7, .a=0xe8, .x=0x82, .y=0xb1, .sp=0xd3, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x2d}, {.addr=0x13b7, .value=0xe4}, {.addr=0x13b8, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x13b9, .a=0x2d, .x=0x82, .y=0xb1, .sp=0xd3, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x2d}, {.addr=0x13b7, .value=0xe4}, {.addr=0x13b8, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x13b7, .value=0xe4, .type=IO_READ},
        {.addr=0x13b8, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0233) {
    const struct CPU_State initial_cpu = {.pc=0x5bb1, .a=0x94, .x=0x2b, .y=0x90, .sp=0x51, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x25}, {.addr=0x5bb1, .value=0xe4}, {.addr=0x5bb2, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x5bb3, .a=0x25, .x=0x2b, .y=0x90, .sp=0x51, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x25}, {.addr=0x5bb1, .value=0xe4}, {.addr=0x5bb2, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bb1, .value=0xe4, .type=IO_READ},
        {.addr=0x5bb2, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0235) {
    const struct CPU_State initial_cpu = {.pc=0x46f8, .a=0x51, .x=0x32, .y=0x16, .sp=0x9c, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x50}, {.addr=0x46f8, .value=0xe4}, {.addr=0x46f9, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x46fa, .a=0x50, .x=0x32, .y=0x16, .sp=0x9c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x50}, {.addr=0x46f8, .value=0xe4}, {.addr=0x46f9, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x46f8, .value=0xe4, .type=IO_READ},
        {.addr=0x46f9, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0236) {
    const struct CPU_State initial_cpu = {.pc=0xd85a, .a=0x95, .x=0xc4, .y=0x7c, .sp=0xf0, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x2a}, {.addr=0xd85a, .value=0xe4}, {.addr=0xd85b, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xd85c, .a=0x2a, .x=0xc4, .y=0x7c, .sp=0xf0, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x2a}, {.addr=0xd85a, .value=0xe4}, {.addr=0xd85b, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xd85a, .value=0xe4, .type=IO_READ},
        {.addr=0xd85b, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0237) {
    const struct CPU_State initial_cpu = {.pc=0xd876, .a=0x3b, .x=0xf3, .y=0x4a, .sp=0x71, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xa6}, {.addr=0xd876, .value=0xe4}, {.addr=0xd877, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xd878, .a=0xa6, .x=0xf3, .y=0x4a, .sp=0x71, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xa6}, {.addr=0xd876, .value=0xe4}, {.addr=0xd877, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xd876, .value=0xe4, .type=IO_READ},
        {.addr=0xd877, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0238) {
    const struct CPU_State initial_cpu = {.pc=0x79ea, .a=0x16, .x=0xe7, .y=0x08, .sp=0xc6, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x5e}, {.addr=0x79ea, .value=0xe4}, {.addr=0x79eb, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x79ec, .a=0x5e, .x=0xe7, .y=0x08, .sp=0xc6, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x5e}, {.addr=0x79ea, .value=0xe4}, {.addr=0x79eb, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x79ea, .value=0xe4, .type=IO_READ},
        {.addr=0x79eb, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0239) {
    const struct CPU_State initial_cpu = {.pc=0xa960, .a=0xa1, .x=0xc5, .y=0xef, .sp=0x8f, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x87}, {.addr=0xa960, .value=0xe4}, {.addr=0xa961, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xa962, .a=0x87, .x=0xc5, .y=0xef, .sp=0x8f, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x87}, {.addr=0xa960, .value=0xe4}, {.addr=0xa961, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xa960, .value=0xe4, .type=IO_READ},
        {.addr=0xa961, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5171, .a=0xc3, .x=0xa2, .y=0xdd, .sp=0x37, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xd1}, {.addr=0x5171, .value=0xe4}, {.addr=0x5172, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x5173, .a=0xd1, .x=0xa2, .y=0xdd, .sp=0x37, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xd1}, {.addr=0x5171, .value=0xe4}, {.addr=0x5172, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x5171, .value=0xe4, .type=IO_READ},
        {.addr=0x5172, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9548, .a=0x0a, .x=0xa3, .y=0x1c, .sp=0x5c, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xc9}, {.addr=0x9548, .value=0xe4}, {.addr=0x9549, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x954a, .a=0xc9, .x=0xa3, .y=0x1c, .sp=0x5c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xc9}, {.addr=0x9548, .value=0xe4}, {.addr=0x9549, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9548, .value=0xe4, .type=IO_READ},
        {.addr=0x9549, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023C) {
    const struct CPU_State initial_cpu = {.pc=0xaa60, .a=0x97, .x=0xf0, .y=0xac, .sp=0x5e, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x52}, {.addr=0xaa60, .value=0xe4}, {.addr=0xaa61, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xaa62, .a=0x52, .x=0xf0, .y=0xac, .sp=0x5e, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x52}, {.addr=0xaa60, .value=0xe4}, {.addr=0xaa61, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa60, .value=0xe4, .type=IO_READ},
        {.addr=0xaa61, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023D) {
    const struct CPU_State initial_cpu = {.pc=0x3426, .a=0xb1, .x=0x4b, .y=0x71, .sp=0x48, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x88}, {.addr=0x3426, .value=0xe4}, {.addr=0x3427, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x3428, .a=0x88, .x=0x4b, .y=0x71, .sp=0x48, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x88}, {.addr=0x3426, .value=0xe4}, {.addr=0x3427, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3426, .value=0xe4, .type=IO_READ},
        {.addr=0x3427, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023E) {
    const struct CPU_State initial_cpu = {.pc=0x80a3, .a=0xf1, .x=0x58, .y=0xb0, .sp=0x5a, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x16}, {.addr=0x80a3, .value=0xe4}, {.addr=0x80a4, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x80a5, .a=0x16, .x=0x58, .y=0xb0, .sp=0x5a, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x16}, {.addr=0x80a3, .value=0xe4}, {.addr=0x80a4, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x80a3, .value=0xe4, .type=IO_READ},
        {.addr=0x80a4, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_023F) {
    const struct CPU_State initial_cpu = {.pc=0xd069, .a=0xb5, .x=0x71, .y=0x08, .sp=0xcb, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xbd}, {.addr=0xd069, .value=0xe4}, {.addr=0xd06a, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xd06b, .a=0xbd, .x=0x71, .y=0x08, .sp=0xcb, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xbd}, {.addr=0xd069, .value=0xe4}, {.addr=0xd06a, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xd069, .value=0xe4, .type=IO_READ},
        {.addr=0xd06a, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0240) {
    const struct CPU_State initial_cpu = {.pc=0xbd7b, .a=0x93, .x=0xa1, .y=0xd4, .sp=0xe4, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x5c}, {.addr=0xbd7b, .value=0xe4}, {.addr=0xbd7c, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xbd7d, .a=0x5c, .x=0xa1, .y=0xd4, .sp=0xe4, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x5c}, {.addr=0xbd7b, .value=0xe4}, {.addr=0xbd7c, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd7b, .value=0xe4, .type=IO_READ},
        {.addr=0xbd7c, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0241) {
    const struct CPU_State initial_cpu = {.pc=0xc21c, .a=0x9f, .x=0x15, .y=0xc3, .sp=0x8f, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xcc}, {.addr=0xc21c, .value=0xe4}, {.addr=0xc21d, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xc21e, .a=0xcc, .x=0x15, .y=0xc3, .sp=0x8f, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xcc}, {.addr=0xc21c, .value=0xe4}, {.addr=0xc21d, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xc21c, .value=0xe4, .type=IO_READ},
        {.addr=0xc21d, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0242) {
    const struct CPU_State initial_cpu = {.pc=0x18d2, .a=0xa0, .x=0x21, .y=0x6d, .sp=0xbe, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xf9}, {.addr=0x18d2, .value=0xe4}, {.addr=0x18d3, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x18d4, .a=0xf9, .x=0x21, .y=0x6d, .sp=0xbe, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xf9}, {.addr=0x18d2, .value=0xe4}, {.addr=0x18d3, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x18d2, .value=0xe4, .type=IO_READ},
        {.addr=0x18d3, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0243) {
    const struct CPU_State initial_cpu = {.pc=0x67fa, .a=0x8c, .x=0xd2, .y=0xb6, .sp=0x95, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x31}, {.addr=0x67fa, .value=0xe4}, {.addr=0x67fb, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x67fc, .a=0x31, .x=0xd2, .y=0xb6, .sp=0x95, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x31}, {.addr=0x67fa, .value=0xe4}, {.addr=0x67fb, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x67fa, .value=0xe4, .type=IO_READ},
        {.addr=0x67fb, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0244) {
    const struct CPU_State initial_cpu = {.pc=0x8875, .a=0x0d, .x=0x58, .y=0xe3, .sp=0xfc, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xb0}, {.addr=0x8875, .value=0xe4}, {.addr=0x8876, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x8877, .a=0xb0, .x=0x58, .y=0xe3, .sp=0xfc, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xb0}, {.addr=0x8875, .value=0xe4}, {.addr=0x8876, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8875, .value=0xe4, .type=IO_READ},
        {.addr=0x8876, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0245) {
    const struct CPU_State initial_cpu = {.pc=0x63f1, .a=0x0c, .x=0x2a, .y=0x0b, .sp=0x24, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x43}, {.addr=0x63f1, .value=0xe4}, {.addr=0x63f2, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x63f3, .a=0x43, .x=0x2a, .y=0x0b, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x43}, {.addr=0x63f1, .value=0xe4}, {.addr=0x63f2, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x63f1, .value=0xe4, .type=IO_READ},
        {.addr=0x63f2, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0246) {
    const struct CPU_State initial_cpu = {.pc=0xa0a2, .a=0x97, .x=0xbc, .y=0xfb, .sp=0xb1, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xa3}, {.addr=0xa0a2, .value=0xe4}, {.addr=0xa0a3, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xa0a4, .a=0xa3, .x=0xbc, .y=0xfb, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xa3}, {.addr=0xa0a2, .value=0xe4}, {.addr=0xa0a3, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0a2, .value=0xe4, .type=IO_READ},
        {.addr=0xa0a3, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0247) {
    const struct CPU_State initial_cpu = {.pc=0x61d0, .a=0xa6, .x=0x6c, .y=0xc2, .sp=0xf3, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xbd}, {.addr=0x61d0, .value=0xe4}, {.addr=0x61d1, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x61d2, .a=0xbd, .x=0x6c, .y=0xc2, .sp=0xf3, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xbd}, {.addr=0x61d0, .value=0xe4}, {.addr=0x61d1, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x61d0, .value=0xe4, .type=IO_READ},
        {.addr=0x61d1, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0248) {
    const struct CPU_State initial_cpu = {.pc=0x0a02, .a=0xa7, .x=0xdb, .y=0x13, .sp=0x37, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x0b}, {.addr=0x0a02, .value=0xe4}, {.addr=0x0a03, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x0a04, .a=0x0b, .x=0xdb, .y=0x13, .sp=0x37, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x0b}, {.addr=0x0a02, .value=0xe4}, {.addr=0x0a03, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a02, .value=0xe4, .type=IO_READ},
        {.addr=0x0a03, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0249) {
    const struct CPU_State initial_cpu = {.pc=0xc7df, .a=0x2e, .x=0xde, .y=0x56, .sp=0x3f, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xdf}, {.addr=0xc7df, .value=0xe4}, {.addr=0xc7e0, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xc7e1, .a=0xdf, .x=0xde, .y=0x56, .sp=0x3f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xdf}, {.addr=0xc7df, .value=0xe4}, {.addr=0xc7e0, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7df, .value=0xe4, .type=IO_READ},
        {.addr=0xc7e0, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024A) {
    const struct CPU_State initial_cpu = {.pc=0x0aa9, .a=0x05, .x=0x14, .y=0x26, .sp=0x78, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xcb}, {.addr=0x0aa9, .value=0xe4}, {.addr=0x0aaa, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x0aab, .a=0xcb, .x=0x14, .y=0x26, .sp=0x78, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xcb}, {.addr=0x0aa9, .value=0xe4}, {.addr=0x0aaa, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aa9, .value=0xe4, .type=IO_READ},
        {.addr=0x0aaa, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024B) {
    const struct CPU_State initial_cpu = {.pc=0x0302, .a=0xf5, .x=0x80, .y=0xa4, .sp=0xb6, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x4a}, {.addr=0x0302, .value=0xe4}, {.addr=0x0303, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x0304, .a=0x4a, .x=0x80, .y=0xa4, .sp=0xb6, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x4a}, {.addr=0x0302, .value=0xe4}, {.addr=0x0303, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x0302, .value=0xe4, .type=IO_READ},
        {.addr=0x0303, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024C) {
    const struct CPU_State initial_cpu = {.pc=0x13d3, .a=0x7c, .x=0xc6, .y=0xa9, .sp=0x33, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xb2}, {.addr=0x13d3, .value=0xe4}, {.addr=0x13d4, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x13d5, .a=0xb2, .x=0xc6, .y=0xa9, .sp=0x33, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xb2}, {.addr=0x13d3, .value=0xe4}, {.addr=0x13d4, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x13d3, .value=0xe4, .type=IO_READ},
        {.addr=0x13d4, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024D) {
    const struct CPU_State initial_cpu = {.pc=0x7283, .a=0x14, .x=0x4d, .y=0xbc, .sp=0x55, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x86}, {.addr=0x7283, .value=0xe4}, {.addr=0x7284, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x7285, .a=0x86, .x=0x4d, .y=0xbc, .sp=0x55, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x86}, {.addr=0x7283, .value=0xe4}, {.addr=0x7284, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x7283, .value=0xe4, .type=IO_READ},
        {.addr=0x7284, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024E) {
    const struct CPU_State initial_cpu = {.pc=0xd9bc, .a=0xb2, .x=0xbd, .y=0x93, .sp=0x9d, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xdc}, {.addr=0xd9bc, .value=0xe4}, {.addr=0xd9bd, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xd9be, .a=0xdc, .x=0xbd, .y=0x93, .sp=0x9d, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xdc}, {.addr=0xd9bc, .value=0xe4}, {.addr=0xd9bd, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9bc, .value=0xe4, .type=IO_READ},
        {.addr=0xd9bd, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_024F) {
    const struct CPU_State initial_cpu = {.pc=0x6fc4, .a=0xeb, .x=0x9e, .y=0x99, .sp=0x29, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xed}, {.addr=0x6fc4, .value=0xe4}, {.addr=0x6fc5, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x6fc6, .a=0xed, .x=0x9e, .y=0x99, .sp=0x29, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xed}, {.addr=0x6fc4, .value=0xe4}, {.addr=0x6fc5, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fc4, .value=0xe4, .type=IO_READ},
        {.addr=0x6fc5, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0250) {
    const struct CPU_State initial_cpu = {.pc=0xae1e, .a=0xc6, .x=0x4e, .y=0x1f, .sp=0x30, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0x85}, {.addr=0xae1e, .value=0xe4}, {.addr=0xae1f, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xae20, .a=0x85, .x=0x4e, .y=0x1f, .sp=0x30, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0x85}, {.addr=0xae1e, .value=0xe4}, {.addr=0xae1f, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xae1e, .value=0xe4, .type=IO_READ},
        {.addr=0xae1f, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0251) {
    const struct CPU_State initial_cpu = {.pc=0x1be5, .a=0xdc, .x=0xeb, .y=0x63, .sp=0x71, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x3b}, {.addr=0x1be5, .value=0xe4}, {.addr=0x1be6, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x1be7, .a=0x3b, .x=0xeb, .y=0x63, .sp=0x71, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x3b}, {.addr=0x1be5, .value=0xe4}, {.addr=0x1be6, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1be5, .value=0xe4, .type=IO_READ},
        {.addr=0x1be6, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0252) {
    const struct CPU_State initial_cpu = {.pc=0x2f53, .a=0x88, .x=0xe0, .y=0x4a, .sp=0x31, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x6c}, {.addr=0x2f53, .value=0xe4}, {.addr=0x2f54, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x2f55, .a=0x6c, .x=0xe0, .y=0x4a, .sp=0x31, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x6c}, {.addr=0x2f53, .value=0xe4}, {.addr=0x2f54, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f53, .value=0xe4, .type=IO_READ},
        {.addr=0x2f54, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0253) {
    const struct CPU_State initial_cpu = {.pc=0x3cf0, .a=0xd3, .x=0x88, .y=0xb1, .sp=0x49, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x37}, {.addr=0x3cf0, .value=0xe4}, {.addr=0x3cf1, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x3cf2, .a=0x37, .x=0x88, .y=0xb1, .sp=0x49, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x37}, {.addr=0x3cf0, .value=0xe4}, {.addr=0x3cf1, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cf0, .value=0xe4, .type=IO_READ},
        {.addr=0x3cf1, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0254) {
    const struct CPU_State initial_cpu = {.pc=0x3453, .a=0x63, .x=0xaf, .y=0x49, .sp=0xfc, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xdd}, {.addr=0x3453, .value=0xe4}, {.addr=0x3454, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x3455, .a=0xdd, .x=0xaf, .y=0x49, .sp=0xfc, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xdd}, {.addr=0x3453, .value=0xe4}, {.addr=0x3454, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3453, .value=0xe4, .type=IO_READ},
        {.addr=0x3454, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0255) {
    const struct CPU_State initial_cpu = {.pc=0xcd0c, .a=0x2f, .x=0x27, .y=0x5f, .sp=0xba, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xe5}, {.addr=0xcd0c, .value=0xe4}, {.addr=0xcd0d, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xcd0e, .a=0xe5, .x=0x27, .y=0x5f, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xe5}, {.addr=0xcd0c, .value=0xe4}, {.addr=0xcd0d, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd0c, .value=0xe4, .type=IO_READ},
        {.addr=0xcd0d, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0256) {
    const struct CPU_State initial_cpu = {.pc=0x9826, .a=0xc8, .x=0x5f, .y=0xac, .sp=0x82, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xa7}, {.addr=0x9826, .value=0xe4}, {.addr=0x9827, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x9828, .a=0xa7, .x=0x5f, .y=0xac, .sp=0x82, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xa7}, {.addr=0x9826, .value=0xe4}, {.addr=0x9827, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9826, .value=0xe4, .type=IO_READ},
        {.addr=0x9827, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0257) {
    const struct CPU_State initial_cpu = {.pc=0x4b3a, .a=0x5c, .x=0x9d, .y=0x0b, .sp=0x6e, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x7f}, {.addr=0x4b3a, .value=0xe4}, {.addr=0x4b3b, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4b3c, .a=0x7f, .x=0x9d, .y=0x0b, .sp=0x6e, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x7f}, {.addr=0x4b3a, .value=0xe4}, {.addr=0x4b3b, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b3a, .value=0xe4, .type=IO_READ},
        {.addr=0x4b3b, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0258) {
    const struct CPU_State initial_cpu = {.pc=0x2b45, .a=0x77, .x=0xf0, .y=0x7b, .sp=0x87, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x49}, {.addr=0x2b45, .value=0xe4}, {.addr=0x2b46, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x2b47, .a=0x49, .x=0xf0, .y=0x7b, .sp=0x87, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x49}, {.addr=0x2b45, .value=0xe4}, {.addr=0x2b46, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b45, .value=0xe4, .type=IO_READ},
        {.addr=0x2b46, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025A) {
    const struct CPU_State initial_cpu = {.pc=0xa9c3, .a=0x8d, .x=0x0e, .y=0x18, .sp=0x23, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xd0}, {.addr=0xa9c3, .value=0xe4}, {.addr=0xa9c4, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xa9c5, .a=0xd0, .x=0x0e, .y=0x18, .sp=0x23, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xd0}, {.addr=0xa9c3, .value=0xe4}, {.addr=0xa9c4, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9c3, .value=0xe4, .type=IO_READ},
        {.addr=0xa9c4, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025B) {
    const struct CPU_State initial_cpu = {.pc=0x6c8d, .a=0xbb, .x=0x42, .y=0x59, .sp=0x94, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x9e}, {.addr=0x6c8d, .value=0xe4}, {.addr=0x6c8e, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x6c8f, .a=0x9e, .x=0x42, .y=0x59, .sp=0x94, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x9e}, {.addr=0x6c8d, .value=0xe4}, {.addr=0x6c8e, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c8d, .value=0xe4, .type=IO_READ},
        {.addr=0x6c8e, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025C) {
    const struct CPU_State initial_cpu = {.pc=0xf192, .a=0x61, .x=0x1f, .y=0x62, .sp=0x94, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x6b}, {.addr=0xf192, .value=0xe4}, {.addr=0xf193, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xf194, .a=0x6b, .x=0x1f, .y=0x62, .sp=0x94, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x6b}, {.addr=0xf192, .value=0xe4}, {.addr=0xf193, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xf192, .value=0xe4, .type=IO_READ},
        {.addr=0xf193, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025D) {
    const struct CPU_State initial_cpu = {.pc=0xf5af, .a=0x51, .x=0xb8, .y=0x66, .sp=0xdf, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x0a}, {.addr=0xf5af, .value=0xe4}, {.addr=0xf5b0, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xf5b1, .a=0x0a, .x=0xb8, .y=0x66, .sp=0xdf, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x0a}, {.addr=0xf5af, .value=0xe4}, {.addr=0xf5b0, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5af, .value=0xe4, .type=IO_READ},
        {.addr=0xf5b0, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025E) {
    const struct CPU_State initial_cpu = {.pc=0x802d, .a=0x26, .x=0x48, .y=0x61, .sp=0x26, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xba}, {.addr=0x802d, .value=0xe4}, {.addr=0x802e, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x802f, .a=0xba, .x=0x48, .y=0x61, .sp=0x26, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xba}, {.addr=0x802d, .value=0xe4}, {.addr=0x802e, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x802d, .value=0xe4, .type=IO_READ},
        {.addr=0x802e, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_025F) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0x12, .x=0x3c, .y=0xc5, .sp=0xc0, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xa3}, {.addr=0xbd8d, .value=0xe4}, {.addr=0xbd8e, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xbd8f, .a=0xa3, .x=0x3c, .y=0xc5, .sp=0xc0, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xa3}, {.addr=0xbd8d, .value=0xe4}, {.addr=0xbd8e, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0xe4, .type=IO_READ},
        {.addr=0xbd8e, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0260) {
    const struct CPU_State initial_cpu = {.pc=0x64cc, .a=0xee, .x=0xae, .y=0x7c, .sp=0x4e, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xaf}, {.addr=0x64cc, .value=0xe4}, {.addr=0x64cd, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x64ce, .a=0xaf, .x=0xae, .y=0x7c, .sp=0x4e, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xaf}, {.addr=0x64cc, .value=0xe4}, {.addr=0x64cd, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x64cc, .value=0xe4, .type=IO_READ},
        {.addr=0x64cd, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0261) {
    const struct CPU_State initial_cpu = {.pc=0x394d, .a=0xe1, .x=0x2a, .y=0xaf, .sp=0x67, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xf6}, {.addr=0x394d, .value=0xe4}, {.addr=0x394e, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x394f, .a=0xf6, .x=0x2a, .y=0xaf, .sp=0x67, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xf6}, {.addr=0x394d, .value=0xe4}, {.addr=0x394e, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x394d, .value=0xe4, .type=IO_READ},
        {.addr=0x394e, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0262) {
    const struct CPU_State initial_cpu = {.pc=0x4f3e, .a=0xf6, .x=0x25, .y=0x20, .sp=0xba, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x9b}, {.addr=0x4f3e, .value=0xe4}, {.addr=0x4f3f, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x4f40, .a=0x9b, .x=0x25, .y=0x20, .sp=0xba, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x9b}, {.addr=0x4f3e, .value=0xe4}, {.addr=0x4f3f, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f3e, .value=0xe4, .type=IO_READ},
        {.addr=0x4f3f, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0263) {
    const struct CPU_State initial_cpu = {.pc=0x0694, .a=0x5f, .x=0x90, .y=0x82, .sp=0x08, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xd4}, {.addr=0x0694, .value=0xe4}, {.addr=0x0695, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x0696, .a=0xd4, .x=0x90, .y=0x82, .sp=0x08, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xd4}, {.addr=0x0694, .value=0xe4}, {.addr=0x0695, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x0694, .value=0xe4, .type=IO_READ},
        {.addr=0x0695, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0265) {
    const struct CPU_State initial_cpu = {.pc=0xae82, .a=0x97, .x=0x3c, .y=0x32, .sp=0xe9, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xcf}, {.addr=0xae82, .value=0xe4}, {.addr=0xae83, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xae84, .a=0xcf, .x=0x3c, .y=0x32, .sp=0xe9, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xcf}, {.addr=0xae82, .value=0xe4}, {.addr=0xae83, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xae82, .value=0xe4, .type=IO_READ},
        {.addr=0xae83, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0266) {
    const struct CPU_State initial_cpu = {.pc=0x56e2, .a=0x52, .x=0x9e, .y=0x02, .sp=0xb1, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x60}, {.addr=0x56e2, .value=0xe4}, {.addr=0x56e3, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x56e4, .a=0x60, .x=0x9e, .y=0x02, .sp=0xb1, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x60}, {.addr=0x56e2, .value=0xe4}, {.addr=0x56e3, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x56e2, .value=0xe4, .type=IO_READ},
        {.addr=0x56e3, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0267) {
    const struct CPU_State initial_cpu = {.pc=0xba9a, .a=0x4e, .x=0x39, .y=0x3a, .sp=0x81, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x94}, {.addr=0xba9a, .value=0xe4}, {.addr=0xba9b, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xba9c, .a=0x94, .x=0x39, .y=0x3a, .sp=0x81, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x94}, {.addr=0xba9a, .value=0xe4}, {.addr=0xba9b, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xba9a, .value=0xe4, .type=IO_READ},
        {.addr=0xba9b, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0268) {
    const struct CPU_State initial_cpu = {.pc=0x2752, .a=0xf8, .x=0x4c, .y=0x5c, .sp=0xe7, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xee}, {.addr=0x2752, .value=0xe4}, {.addr=0x2753, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x2754, .a=0xee, .x=0x4c, .y=0x5c, .sp=0xe7, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xee}, {.addr=0x2752, .value=0xe4}, {.addr=0x2753, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2752, .value=0xe4, .type=IO_READ},
        {.addr=0x2753, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0269) {
    const struct CPU_State initial_cpu = {.pc=0x859f, .a=0xf7, .x=0xd9, .y=0x96, .sp=0x47, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xd8}, {.addr=0x859f, .value=0xe4}, {.addr=0x85a0, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x85a1, .a=0xd8, .x=0xd9, .y=0x96, .sp=0x47, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xd8}, {.addr=0x859f, .value=0xe4}, {.addr=0x85a0, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x859f, .value=0xe4, .type=IO_READ},
        {.addr=0x85a0, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026A) {
    const struct CPU_State initial_cpu = {.pc=0xb0a1, .a=0xfb, .x=0xd1, .y=0x82, .sp=0xb8, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x33}, {.addr=0xb0a1, .value=0xe4}, {.addr=0xb0a2, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xb0a3, .a=0x33, .x=0xd1, .y=0x82, .sp=0xb8, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x33}, {.addr=0xb0a1, .value=0xe4}, {.addr=0xb0a2, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0a1, .value=0xe4, .type=IO_READ},
        {.addr=0xb0a2, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026B) {
    const struct CPU_State initial_cpu = {.pc=0x9ec0, .a=0xc8, .x=0x05, .y=0x11, .sp=0x4b, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xba}, {.addr=0x9ec0, .value=0xe4}, {.addr=0x9ec1, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x9ec2, .a=0xba, .x=0x05, .y=0x11, .sp=0x4b, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xba}, {.addr=0x9ec0, .value=0xe4}, {.addr=0x9ec1, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ec0, .value=0xe4, .type=IO_READ},
        {.addr=0x9ec1, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026C) {
    const struct CPU_State initial_cpu = {.pc=0x8e63, .a=0x95, .x=0x37, .y=0x7e, .sp=0x20, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x3b}, {.addr=0x8e63, .value=0xe4}, {.addr=0x8e64, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x8e65, .a=0x3b, .x=0x37, .y=0x7e, .sp=0x20, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x3b}, {.addr=0x8e63, .value=0xe4}, {.addr=0x8e64, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e63, .value=0xe4, .type=IO_READ},
        {.addr=0x8e64, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4d7e, .a=0x78, .x=0xf0, .y=0xf3, .sp=0x08, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x42}, {.addr=0x4d7e, .value=0xe4}, {.addr=0x4d7f, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x4d80, .a=0x42, .x=0xf0, .y=0xf3, .sp=0x08, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x42}, {.addr=0x4d7e, .value=0xe4}, {.addr=0x4d7f, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d7e, .value=0xe4, .type=IO_READ},
        {.addr=0x4d7f, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026E) {
    const struct CPU_State initial_cpu = {.pc=0xfdf7, .a=0x77, .x=0xd8, .y=0xeb, .sp=0x10, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x58}, {.addr=0xfdf7, .value=0xe4}, {.addr=0xfdf8, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xfdf9, .a=0x58, .x=0xd8, .y=0xeb, .sp=0x10, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x58}, {.addr=0xfdf7, .value=0xe4}, {.addr=0xfdf8, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdf7, .value=0xe4, .type=IO_READ},
        {.addr=0xfdf8, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_026F) {
    const struct CPU_State initial_cpu = {.pc=0x45c9, .a=0xaf, .x=0x4b, .y=0xcf, .sp=0x74, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0xbc}, {.addr=0x45c9, .value=0xe4}, {.addr=0x45ca, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x45cb, .a=0xbc, .x=0x4b, .y=0xcf, .sp=0x74, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0xbc}, {.addr=0x45c9, .value=0xe4}, {.addr=0x45ca, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x45c9, .value=0xe4, .type=IO_READ},
        {.addr=0x45ca, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0270) {
    const struct CPU_State initial_cpu = {.pc=0xa2fc, .a=0xf5, .x=0xb9, .y=0xc0, .sp=0xa3, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x99}, {.addr=0xa2fc, .value=0xe4}, {.addr=0xa2fd, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xa2fe, .a=0x99, .x=0xb9, .y=0xc0, .sp=0xa3, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x99}, {.addr=0xa2fc, .value=0xe4}, {.addr=0xa2fd, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2fc, .value=0xe4, .type=IO_READ},
        {.addr=0xa2fd, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0271) {
    const struct CPU_State initial_cpu = {.pc=0x4809, .a=0x44, .x=0x30, .y=0xf0, .sp=0x06, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x2c}, {.addr=0x4809, .value=0xe4}, {.addr=0x480a, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x480b, .a=0x2c, .x=0x30, .y=0xf0, .sp=0x06, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x2c}, {.addr=0x4809, .value=0xe4}, {.addr=0x480a, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4809, .value=0xe4, .type=IO_READ},
        {.addr=0x480a, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0272) {
    const struct CPU_State initial_cpu = {.pc=0x3efe, .a=0x30, .x=0xd7, .y=0x1c, .sp=0x2a, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x66}, {.addr=0x3efe, .value=0xe4}, {.addr=0x3eff, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x3f00, .a=0x66, .x=0xd7, .y=0x1c, .sp=0x2a, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x66}, {.addr=0x3efe, .value=0xe4}, {.addr=0x3eff, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x3efe, .value=0xe4, .type=IO_READ},
        {.addr=0x3eff, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3275, .a=0xa5, .x=0xa0, .y=0xc8, .sp=0x45, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xad}, {.addr=0x3275, .value=0xe4}, {.addr=0x3276, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x3277, .a=0xad, .x=0xa0, .y=0xc8, .sp=0x45, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xad}, {.addr=0x3275, .value=0xe4}, {.addr=0x3276, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3275, .value=0xe4, .type=IO_READ},
        {.addr=0x3276, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0274) {
    const struct CPU_State initial_cpu = {.pc=0x1cce, .a=0x2e, .x=0xf7, .y=0xf5, .sp=0xfc, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xb4}, {.addr=0x1cce, .value=0xe4}, {.addr=0x1ccf, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x1cd0, .a=0xb4, .x=0xf7, .y=0xf5, .sp=0xfc, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xb4}, {.addr=0x1cce, .value=0xe4}, {.addr=0x1ccf, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cce, .value=0xe4, .type=IO_READ},
        {.addr=0x1ccf, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0275) {
    const struct CPU_State initial_cpu = {.pc=0x9b8b, .a=0xe9, .x=0xe1, .y=0x02, .sp=0xaf, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x7b}, {.addr=0x9b8b, .value=0xe4}, {.addr=0x9b8c, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x9b8d, .a=0x7b, .x=0xe1, .y=0x02, .sp=0xaf, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x7b}, {.addr=0x9b8b, .value=0xe4}, {.addr=0x9b8c, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b8b, .value=0xe4, .type=IO_READ},
        {.addr=0x9b8c, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0276) {
    const struct CPU_State initial_cpu = {.pc=0x5977, .a=0xa8, .x=0x23, .y=0x6c, .sp=0x27, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x11}, {.addr=0x5977, .value=0xe4}, {.addr=0x5978, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x5979, .a=0x11, .x=0x23, .y=0x6c, .sp=0x27, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x11}, {.addr=0x5977, .value=0xe4}, {.addr=0x5978, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x5977, .value=0xe4, .type=IO_READ},
        {.addr=0x5978, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0277) {
    const struct CPU_State initial_cpu = {.pc=0xb74d, .a=0x80, .x=0xd4, .y=0xa7, .sp=0x00, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x8d}, {.addr=0xb74d, .value=0xe4}, {.addr=0xb74e, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xb74f, .a=0x8d, .x=0xd4, .y=0xa7, .sp=0x00, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x8d}, {.addr=0xb74d, .value=0xe4}, {.addr=0xb74e, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb74d, .value=0xe4, .type=IO_READ},
        {.addr=0xb74e, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0278) {
    const struct CPU_State initial_cpu = {.pc=0x596f, .a=0x3e, .x=0xc9, .y=0x47, .sp=0xaa, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x69}, {.addr=0x596f, .value=0xe4}, {.addr=0x5970, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x5971, .a=0x69, .x=0xc9, .y=0x47, .sp=0xaa, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x69}, {.addr=0x596f, .value=0xe4}, {.addr=0x5970, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x596f, .value=0xe4, .type=IO_READ},
        {.addr=0x5970, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0279) {
    const struct CPU_State initial_cpu = {.pc=0x1a41, .a=0xef, .x=0xf1, .y=0xcd, .sp=0x78, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xb6}, {.addr=0x1a41, .value=0xe4}, {.addr=0x1a42, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x1a43, .a=0xb6, .x=0xf1, .y=0xcd, .sp=0x78, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xb6}, {.addr=0x1a41, .value=0xe4}, {.addr=0x1a42, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a41, .value=0xe4, .type=IO_READ},
        {.addr=0x1a42, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027A) {
    const struct CPU_State initial_cpu = {.pc=0x15a4, .a=0xec, .x=0x15, .y=0x93, .sp=0xf0, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x5b}, {.addr=0x15a4, .value=0xe4}, {.addr=0x15a5, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x15a6, .a=0x5b, .x=0x15, .y=0x93, .sp=0xf0, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x5b}, {.addr=0x15a4, .value=0xe4}, {.addr=0x15a5, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x15a4, .value=0xe4, .type=IO_READ},
        {.addr=0x15a5, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027B) {
    const struct CPU_State initial_cpu = {.pc=0xee7c, .a=0xd5, .x=0x57, .y=0x11, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x18}, {.addr=0xee7c, .value=0xe4}, {.addr=0xee7d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xee7e, .a=0x18, .x=0x57, .y=0x11, .sp=0x90, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x18}, {.addr=0xee7c, .value=0xe4}, {.addr=0xee7d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xee7c, .value=0xe4, .type=IO_READ},
        {.addr=0xee7d, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027C) {
    const struct CPU_State initial_cpu = {.pc=0xf05b, .a=0x3c, .x=0xe0, .y=0xe5, .sp=0x4b, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x92}, {.addr=0xf05b, .value=0xe4}, {.addr=0xf05c, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xf05d, .a=0x92, .x=0xe0, .y=0xe5, .sp=0x4b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x92}, {.addr=0xf05b, .value=0xe4}, {.addr=0xf05c, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf05b, .value=0xe4, .type=IO_READ},
        {.addr=0xf05c, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027D) {
    const struct CPU_State initial_cpu = {.pc=0x61d6, .a=0x9e, .x=0x87, .y=0xe4, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x0a}, {.addr=0x61d6, .value=0xe4}, {.addr=0x61d7, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x61d8, .a=0x0a, .x=0x87, .y=0xe4, .sp=0x5f, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x0a}, {.addr=0x61d6, .value=0xe4}, {.addr=0x61d7, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x61d6, .value=0xe4, .type=IO_READ},
        {.addr=0x61d7, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027E) {
    const struct CPU_State initial_cpu = {.pc=0xd20c, .a=0x22, .x=0x93, .y=0xb8, .sp=0x9e, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x80}, {.addr=0xd20c, .value=0xe4}, {.addr=0xd20d, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xd20e, .a=0x80, .x=0x93, .y=0xb8, .sp=0x9e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x80}, {.addr=0xd20c, .value=0xe4}, {.addr=0xd20d, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd20c, .value=0xe4, .type=IO_READ},
        {.addr=0xd20d, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_027F) {
    const struct CPU_State initial_cpu = {.pc=0xc220, .a=0x9a, .x=0x7e, .y=0xe9, .sp=0xb6, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0xf9}, {.addr=0xc220, .value=0xe4}, {.addr=0xc221, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xc222, .a=0xf9, .x=0x7e, .y=0xe9, .sp=0xb6, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0xf9}, {.addr=0xc220, .value=0xe4}, {.addr=0xc221, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xc220, .value=0xe4, .type=IO_READ},
        {.addr=0xc221, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0280) {
    const struct CPU_State initial_cpu = {.pc=0xb536, .a=0x37, .x=0x8a, .y=0x7c, .sp=0x63, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x9e}, {.addr=0xb536, .value=0xe4}, {.addr=0xb537, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0xb538, .a=0x9e, .x=0x8a, .y=0x7c, .sp=0x63, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x9e}, {.addr=0xb536, .value=0xe4}, {.addr=0xb537, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb536, .value=0xe4, .type=IO_READ},
        {.addr=0xb537, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9c7a, .a=0xff, .x=0xd7, .y=0x83, .sp=0x04, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x98}, {.addr=0x9c7a, .value=0xe4}, {.addr=0x9c7b, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x9c7c, .a=0x98, .x=0xd7, .y=0x83, .sp=0x04, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x98}, {.addr=0x9c7a, .value=0xe4}, {.addr=0x9c7b, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c7a, .value=0xe4, .type=IO_READ},
        {.addr=0x9c7b, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0282) {
    const struct CPU_State initial_cpu = {.pc=0xad02, .a=0x62, .x=0xcd, .y=0x62, .sp=0x92, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xc0}, {.addr=0xad02, .value=0xe4}, {.addr=0xad03, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xad04, .a=0xc0, .x=0xcd, .y=0x62, .sp=0x92, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xc0}, {.addr=0xad02, .value=0xe4}, {.addr=0xad03, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xad02, .value=0xe4, .type=IO_READ},
        {.addr=0xad03, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0283) {
    const struct CPU_State initial_cpu = {.pc=0x23a5, .a=0x82, .x=0x2e, .y=0xf9, .sp=0xc1, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x0b}, {.addr=0x23a5, .value=0xe4}, {.addr=0x23a6, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x23a7, .a=0x0b, .x=0x2e, .y=0xf9, .sp=0xc1, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x0b}, {.addr=0x23a5, .value=0xe4}, {.addr=0x23a6, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x23a5, .value=0xe4, .type=IO_READ},
        {.addr=0x23a6, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0284) {
    const struct CPU_State initial_cpu = {.pc=0x52ce, .a=0x02, .x=0xd6, .y=0xef, .sp=0xf2, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xc0}, {.addr=0x52ce, .value=0xe4}, {.addr=0x52cf, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x52d0, .a=0xc0, .x=0xd6, .y=0xef, .sp=0xf2, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xc0}, {.addr=0x52ce, .value=0xe4}, {.addr=0x52cf, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x52ce, .value=0xe4, .type=IO_READ},
        {.addr=0x52cf, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0285) {
    const struct CPU_State initial_cpu = {.pc=0x9f42, .a=0xae, .x=0x8e, .y=0xa9, .sp=0xd3, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x4f}, {.addr=0x9f42, .value=0xe4}, {.addr=0x9f43, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x9f44, .a=0x4f, .x=0x8e, .y=0xa9, .sp=0xd3, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x4f}, {.addr=0x9f42, .value=0xe4}, {.addr=0x9f43, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f42, .value=0xe4, .type=IO_READ},
        {.addr=0x9f43, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd583, .a=0x78, .x=0x7b, .y=0xc5, .sp=0x1c, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x7f}, {.addr=0xd583, .value=0xe4}, {.addr=0xd584, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xd585, .a=0x7f, .x=0x7b, .y=0xc5, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x7f}, {.addr=0xd583, .value=0xe4}, {.addr=0xd584, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xd583, .value=0xe4, .type=IO_READ},
        {.addr=0xd584, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0287) {
    const struct CPU_State initial_cpu = {.pc=0xe5f1, .a=0x99, .x=0x30, .y=0x71, .sp=0x8b, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x5d}, {.addr=0xe5f1, .value=0xe4}, {.addr=0xe5f2, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xe5f3, .a=0x5d, .x=0x30, .y=0x71, .sp=0x8b, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x5d}, {.addr=0xe5f1, .value=0xe4}, {.addr=0xe5f2, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5f1, .value=0xe4, .type=IO_READ},
        {.addr=0xe5f2, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0288) {
    const struct CPU_State initial_cpu = {.pc=0xd503, .a=0xa4, .x=0xd2, .y=0x12, .sp=0x47, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x75}, {.addr=0xd503, .value=0xe4}, {.addr=0xd504, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xd505, .a=0x75, .x=0xd2, .y=0x12, .sp=0x47, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x75}, {.addr=0xd503, .value=0xe4}, {.addr=0xd504, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xd503, .value=0xe4, .type=IO_READ},
        {.addr=0xd504, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0289) {
    const struct CPU_State initial_cpu = {.pc=0x2b82, .a=0xe0, .x=0x71, .y=0xdd, .sp=0x14, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x4f}, {.addr=0x2b82, .value=0xe4}, {.addr=0x2b83, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x2b84, .a=0x4f, .x=0x71, .y=0xdd, .sp=0x14, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x4f}, {.addr=0x2b82, .value=0xe4}, {.addr=0x2b83, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b82, .value=0xe4, .type=IO_READ},
        {.addr=0x2b83, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028A) {
    const struct CPU_State initial_cpu = {.pc=0x7158, .a=0x6e, .x=0xa2, .y=0x01, .sp=0xf2, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x22}, {.addr=0x7158, .value=0xe4}, {.addr=0x7159, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x715a, .a=0x22, .x=0xa2, .y=0x01, .sp=0xf2, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x22}, {.addr=0x7158, .value=0xe4}, {.addr=0x7159, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7158, .value=0xe4, .type=IO_READ},
        {.addr=0x7159, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028B) {
    const struct CPU_State initial_cpu = {.pc=0xe30c, .a=0xef, .x=0x80, .y=0x4c, .sp=0x42, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xed}, {.addr=0xe30c, .value=0xe4}, {.addr=0xe30d, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xe30e, .a=0xed, .x=0x80, .y=0x4c, .sp=0x42, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xed}, {.addr=0xe30c, .value=0xe4}, {.addr=0xe30d, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xe30c, .value=0xe4, .type=IO_READ},
        {.addr=0xe30d, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028C) {
    const struct CPU_State initial_cpu = {.pc=0xf1a0, .a=0x18, .x=0xdc, .y=0xbb, .sp=0x8b, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x08}, {.addr=0xf1a0, .value=0xe4}, {.addr=0xf1a1, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xf1a2, .a=0x08, .x=0xdc, .y=0xbb, .sp=0x8b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x08}, {.addr=0xf1a0, .value=0xe4}, {.addr=0xf1a1, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1a0, .value=0xe4, .type=IO_READ},
        {.addr=0xf1a1, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028D) {
    const struct CPU_State initial_cpu = {.pc=0x7884, .a=0x63, .x=0xda, .y=0x98, .sp=0xaf, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x3a}, {.addr=0x7884, .value=0xe4}, {.addr=0x7885, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x7886, .a=0x3a, .x=0xda, .y=0x98, .sp=0xaf, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x3a}, {.addr=0x7884, .value=0xe4}, {.addr=0x7885, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x7884, .value=0xe4, .type=IO_READ},
        {.addr=0x7885, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028E) {
    const struct CPU_State initial_cpu = {.pc=0x89d1, .a=0x2b, .x=0x48, .y=0x0e, .sp=0xd8, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x8c}, {.addr=0x89d1, .value=0xe4}, {.addr=0x89d2, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x89d3, .a=0x8c, .x=0x48, .y=0x0e, .sp=0xd8, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x8c}, {.addr=0x89d1, .value=0xe4}, {.addr=0x89d2, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x89d1, .value=0xe4, .type=IO_READ},
        {.addr=0x89d2, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_028F) {
    const struct CPU_State initial_cpu = {.pc=0x95db, .a=0x37, .x=0x8b, .y=0x70, .sp=0xcc, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x83}, {.addr=0x95db, .value=0xe4}, {.addr=0x95dc, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x95dd, .a=0x83, .x=0x8b, .y=0x70, .sp=0xcc, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x83}, {.addr=0x95db, .value=0xe4}, {.addr=0x95dc, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x95db, .value=0xe4, .type=IO_READ},
        {.addr=0x95dc, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0290) {
    const struct CPU_State initial_cpu = {.pc=0xa80e, .a=0xf7, .x=0x57, .y=0x47, .sp=0x9a, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x8a}, {.addr=0xa80e, .value=0xe4}, {.addr=0xa80f, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xa810, .a=0x8a, .x=0x57, .y=0x47, .sp=0x9a, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x8a}, {.addr=0xa80e, .value=0xe4}, {.addr=0xa80f, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xa80e, .value=0xe4, .type=IO_READ},
        {.addr=0xa80f, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0292) {
    const struct CPU_State initial_cpu = {.pc=0x453e, .a=0xb5, .x=0x50, .y=0xfd, .sp=0xc0, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x7c}, {.addr=0x453e, .value=0xe4}, {.addr=0x453f, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x4540, .a=0x7c, .x=0x50, .y=0xfd, .sp=0xc0, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x7c}, {.addr=0x453e, .value=0xe4}, {.addr=0x453f, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x453e, .value=0xe4, .type=IO_READ},
        {.addr=0x453f, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0293) {
    const struct CPU_State initial_cpu = {.pc=0xa01f, .a=0x3f, .x=0x13, .y=0xff, .sp=0x3c, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xe0}, {.addr=0xa01f, .value=0xe4}, {.addr=0xa020, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xa021, .a=0xe0, .x=0x13, .y=0xff, .sp=0x3c, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xe0}, {.addr=0xa01f, .value=0xe4}, {.addr=0xa020, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xa01f, .value=0xe4, .type=IO_READ},
        {.addr=0xa020, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0294) {
    const struct CPU_State initial_cpu = {.pc=0xfffb, .a=0x11, .x=0xb2, .y=0x97, .sp=0x2a, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x3d}, {.addr=0xfffb, .value=0xe4}, {.addr=0xfffc, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xfffd, .a=0x3d, .x=0xb2, .y=0x97, .sp=0x2a, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x3d}, {.addr=0xfffb, .value=0xe4}, {.addr=0xfffc, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfffb, .value=0xe4, .type=IO_READ},
        {.addr=0xfffc, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0295) {
    const struct CPU_State initial_cpu = {.pc=0x6bde, .a=0xf6, .x=0x98, .y=0xe1, .sp=0x8e, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x81}, {.addr=0x6bde, .value=0xe4}, {.addr=0x6bdf, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x6be0, .a=0x81, .x=0x98, .y=0xe1, .sp=0x8e, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x81}, {.addr=0x6bde, .value=0xe4}, {.addr=0x6bdf, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bde, .value=0xe4, .type=IO_READ},
        {.addr=0x6bdf, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0296) {
    const struct CPU_State initial_cpu = {.pc=0x8a49, .a=0xef, .x=0x9c, .y=0x37, .sp=0xec, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xac}, {.addr=0x8a49, .value=0xe4}, {.addr=0x8a4a, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x8a4b, .a=0xac, .x=0x9c, .y=0x37, .sp=0xec, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xac}, {.addr=0x8a49, .value=0xe4}, {.addr=0x8a4a, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a49, .value=0xe4, .type=IO_READ},
        {.addr=0x8a4a, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0297) {
    const struct CPU_State initial_cpu = {.pc=0xedd6, .a=0x68, .x=0x49, .y=0x50, .sp=0x2e, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x2c}, {.addr=0xedd6, .value=0xe4}, {.addr=0xedd7, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xedd8, .a=0x2c, .x=0x49, .y=0x50, .sp=0x2e, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x2c}, {.addr=0xedd6, .value=0xe4}, {.addr=0xedd7, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xedd6, .value=0xe4, .type=IO_READ},
        {.addr=0xedd7, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0298) {
    const struct CPU_State initial_cpu = {.pc=0xf9dc, .a=0x92, .x=0x30, .y=0xdc, .sp=0x57, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x27}, {.addr=0xf9dc, .value=0xe4}, {.addr=0xf9dd, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xf9de, .a=0x27, .x=0x30, .y=0xdc, .sp=0x57, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x27}, {.addr=0xf9dc, .value=0xe4}, {.addr=0xf9dd, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9dc, .value=0xe4, .type=IO_READ},
        {.addr=0xf9dd, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0299) {
    const struct CPU_State initial_cpu = {.pc=0xb945, .a=0xfa, .x=0xd4, .y=0xb4, .sp=0xd8, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x47}, {.addr=0xb945, .value=0xe4}, {.addr=0xb946, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xb947, .a=0x47, .x=0xd4, .y=0xb4, .sp=0xd8, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x47}, {.addr=0xb945, .value=0xe4}, {.addr=0xb946, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xb945, .value=0xe4, .type=IO_READ},
        {.addr=0xb946, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029A) {
    const struct CPU_State initial_cpu = {.pc=0xe78e, .a=0x0b, .x=0x96, .y=0x9d, .sp=0xd4, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x24}, {.addr=0xe78e, .value=0xe4}, {.addr=0xe78f, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xe790, .a=0x24, .x=0x96, .y=0x9d, .sp=0xd4, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x24}, {.addr=0xe78e, .value=0xe4}, {.addr=0xe78f, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe78e, .value=0xe4, .type=IO_READ},
        {.addr=0xe78f, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029B) {
    const struct CPU_State initial_cpu = {.pc=0xdfcb, .a=0x12, .x=0xc2, .y=0x1b, .sp=0xc0, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x4c}, {.addr=0xdfcb, .value=0xe4}, {.addr=0xdfcc, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xdfcd, .a=0x4c, .x=0xc2, .y=0x1b, .sp=0xc0, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x4c}, {.addr=0xdfcb, .value=0xe4}, {.addr=0xdfcc, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfcb, .value=0xe4, .type=IO_READ},
        {.addr=0xdfcc, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029C) {
    const struct CPU_State initial_cpu = {.pc=0x026a, .a=0x44, .x=0xe9, .y=0xfa, .sp=0x62, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0x24}, {.addr=0x026a, .value=0xe4}, {.addr=0x026b, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x026c, .a=0x24, .x=0xe9, .y=0xfa, .sp=0x62, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0x24}, {.addr=0x026a, .value=0xe4}, {.addr=0x026b, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x026a, .value=0xe4, .type=IO_READ},
        {.addr=0x026b, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029D) {
    const struct CPU_State initial_cpu = {.pc=0x8951, .a=0x3f, .x=0x25, .y=0x63, .sp=0x9b, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x74}, {.addr=0x8951, .value=0xe4}, {.addr=0x8952, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x8953, .a=0x74, .x=0x25, .y=0x63, .sp=0x9b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x74}, {.addr=0x8951, .value=0xe4}, {.addr=0x8952, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x8951, .value=0xe4, .type=IO_READ},
        {.addr=0x8952, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029E) {
    const struct CPU_State initial_cpu = {.pc=0x25fe, .a=0x65, .x=0xaa, .y=0x2c, .sp=0xc8, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x80}, {.addr=0x25fe, .value=0xe4}, {.addr=0x25ff, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x2600, .a=0x80, .x=0xaa, .y=0x2c, .sp=0xc8, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x80}, {.addr=0x25fe, .value=0xe4}, {.addr=0x25ff, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x25fe, .value=0xe4, .type=IO_READ},
        {.addr=0x25ff, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_029F) {
    const struct CPU_State initial_cpu = {.pc=0x0577, .a=0xe5, .x=0xfe, .y=0x45, .sp=0x33, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xd6}, {.addr=0x0577, .value=0xe4}, {.addr=0x0578, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x0579, .a=0xd6, .x=0xfe, .y=0x45, .sp=0x33, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xd6}, {.addr=0x0577, .value=0xe4}, {.addr=0x0578, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x0577, .value=0xe4, .type=IO_READ},
        {.addr=0x0578, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9794, .a=0x87, .x=0xdb, .y=0x73, .sp=0x53, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x2e}, {.addr=0x9794, .value=0xe4}, {.addr=0x9795, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x9796, .a=0x2e, .x=0xdb, .y=0x73, .sp=0x53, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x2e}, {.addr=0x9794, .value=0xe4}, {.addr=0x9795, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9794, .value=0xe4, .type=IO_READ},
        {.addr=0x9795, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x1cc3, .a=0x86, .x=0x97, .y=0x5a, .sp=0x6c, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xea}, {.addr=0x1cc3, .value=0xe4}, {.addr=0x1cc4, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x1cc5, .a=0xea, .x=0x97, .y=0x5a, .sp=0x6c, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xea}, {.addr=0x1cc3, .value=0xe4}, {.addr=0x1cc4, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cc3, .value=0xe4, .type=IO_READ},
        {.addr=0x1cc4, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x07c0, .a=0xd6, .x=0x49, .y=0xe5, .sp=0x61, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0xe1}, {.addr=0x07c0, .value=0xe4}, {.addr=0x07c1, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x07c2, .a=0xe1, .x=0x49, .y=0xe5, .sp=0x61, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0xe1}, {.addr=0x07c0, .value=0xe4}, {.addr=0x07c1, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x07c0, .value=0xe4, .type=IO_READ},
        {.addr=0x07c1, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x44ce, .a=0x26, .x=0x95, .y=0xc3, .sp=0x6e, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x89}, {.addr=0x44ce, .value=0xe4}, {.addr=0x44cf, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x44d0, .a=0x89, .x=0x95, .y=0xc3, .sp=0x6e, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x89}, {.addr=0x44ce, .value=0xe4}, {.addr=0x44cf, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x44ce, .value=0xe4, .type=IO_READ},
        {.addr=0x44cf, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x3540, .a=0x6b, .x=0x84, .y=0x66, .sp=0x72, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x25}, {.addr=0x3540, .value=0xe4}, {.addr=0x3541, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x3542, .a=0x25, .x=0x84, .y=0x66, .sp=0x72, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x25}, {.addr=0x3540, .value=0xe4}, {.addr=0x3541, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x3540, .value=0xe4, .type=IO_READ},
        {.addr=0x3541, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xc36b, .a=0x84, .x=0xb4, .y=0x45, .sp=0x15, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x14}, {.addr=0xc36b, .value=0xe4}, {.addr=0xc36c, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc36d, .a=0x14, .x=0xb4, .y=0x45, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x14}, {.addr=0xc36b, .value=0xe4}, {.addr=0xc36c, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc36b, .value=0xe4, .type=IO_READ},
        {.addr=0xc36c, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xfdb1, .a=0x16, .x=0x9a, .y=0x5b, .sp=0x3e, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xf6}, {.addr=0xfdb1, .value=0xe4}, {.addr=0xfdb2, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xfdb3, .a=0xf6, .x=0x9a, .y=0x5b, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xf6}, {.addr=0xfdb1, .value=0xe4}, {.addr=0xfdb2, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdb1, .value=0xe4, .type=IO_READ},
        {.addr=0xfdb2, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xcd60, .a=0xea, .x=0xe6, .y=0x9e, .sp=0x5e, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xc8}, {.addr=0xcd60, .value=0xe4}, {.addr=0xcd61, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xcd62, .a=0xc8, .x=0xe6, .y=0x9e, .sp=0x5e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xc8}, {.addr=0xcd60, .value=0xe4}, {.addr=0xcd61, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd60, .value=0xe4, .type=IO_READ},
        {.addr=0xcd61, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x19eb, .a=0xd4, .x=0x0f, .y=0xec, .sp=0x99, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xc4}, {.addr=0x19eb, .value=0xe4}, {.addr=0x19ec, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x19ed, .a=0xc4, .x=0x0f, .y=0xec, .sp=0x99, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xc4}, {.addr=0x19eb, .value=0xe4}, {.addr=0x19ec, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x19eb, .value=0xe4, .type=IO_READ},
        {.addr=0x19ec, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x316e, .a=0x4b, .x=0xbb, .y=0xae, .sp=0x90, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x6e}, {.addr=0x316e, .value=0xe4}, {.addr=0x316f, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x3170, .a=0x6e, .x=0xbb, .y=0xae, .sp=0x90, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x6e}, {.addr=0x316e, .value=0xe4}, {.addr=0x316f, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x316e, .value=0xe4, .type=IO_READ},
        {.addr=0x316f, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5efc, .a=0xee, .x=0xc5, .y=0xde, .sp=0xea, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0xfa}, {.addr=0x5efc, .value=0xe4}, {.addr=0x5efd, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x5efe, .a=0xfa, .x=0xc5, .y=0xde, .sp=0xea, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0xfa}, {.addr=0x5efc, .value=0xe4}, {.addr=0x5efd, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5efc, .value=0xe4, .type=IO_READ},
        {.addr=0x5efd, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x5075, .a=0x83, .x=0xf4, .y=0x36, .sp=0xe5, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0xa3}, {.addr=0x5075, .value=0xe4}, {.addr=0x5076, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x5077, .a=0xa3, .x=0xf4, .y=0x36, .sp=0xe5, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0xa3}, {.addr=0x5075, .value=0xe4}, {.addr=0x5076, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5075, .value=0xe4, .type=IO_READ},
        {.addr=0x5076, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3c31, .a=0x83, .x=0x4a, .y=0xcf, .sp=0x54, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xb6}, {.addr=0x3c31, .value=0xe4}, {.addr=0x3c32, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x3c33, .a=0xb6, .x=0x4a, .y=0xcf, .sp=0x54, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xb6}, {.addr=0x3c31, .value=0xe4}, {.addr=0x3c32, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c31, .value=0xe4, .type=IO_READ},
        {.addr=0x3c32, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x31ca, .a=0x97, .x=0xb6, .y=0x91, .sp=0x7b, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0xf8}, {.addr=0x31ca, .value=0xe4}, {.addr=0x31cb, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x31cc, .a=0xf8, .x=0xb6, .y=0x91, .sp=0x7b, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0xf8}, {.addr=0x31ca, .value=0xe4}, {.addr=0x31cb, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x31ca, .value=0xe4, .type=IO_READ},
        {.addr=0x31cb, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xe758, .a=0x45, .x=0x1b, .y=0xe0, .sp=0x66, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x92}, {.addr=0xe758, .value=0xe4}, {.addr=0xe759, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xe75a, .a=0x92, .x=0x1b, .y=0xe0, .sp=0x66, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x92}, {.addr=0xe758, .value=0xe4}, {.addr=0xe759, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe758, .value=0xe4, .type=IO_READ},
        {.addr=0xe759, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x0b9d, .a=0x66, .x=0x30, .y=0x2f, .sp=0xa2, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xf3}, {.addr=0x0b9d, .value=0xe4}, {.addr=0x0b9e, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x0b9f, .a=0xf3, .x=0x30, .y=0x2f, .sp=0xa2, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xf3}, {.addr=0x0b9d, .value=0xe4}, {.addr=0x0b9e, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b9d, .value=0xe4, .type=IO_READ},
        {.addr=0x0b9e, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3282, .a=0xfa, .x=0xe5, .y=0x16, .sp=0xe0, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x96}, {.addr=0x3282, .value=0xe4}, {.addr=0x3283, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x3284, .a=0x96, .x=0xe5, .y=0x16, .sp=0xe0, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x96}, {.addr=0x3282, .value=0xe4}, {.addr=0x3283, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3282, .value=0xe4, .type=IO_READ},
        {.addr=0x3283, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7240, .a=0x88, .x=0x7f, .y=0xdb, .sp=0x30, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0xaa}, {.addr=0x7240, .value=0xe4}, {.addr=0x7241, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x7242, .a=0xaa, .x=0x7f, .y=0xdb, .sp=0x30, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0xaa}, {.addr=0x7240, .value=0xe4}, {.addr=0x7241, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7240, .value=0xe4, .type=IO_READ},
        {.addr=0x7241, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x033f, .a=0xc9, .x=0xfc, .y=0x02, .sp=0xcd, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x5b}, {.addr=0x033f, .value=0xe4}, {.addr=0x0340, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x0341, .a=0x5b, .x=0xfc, .y=0x02, .sp=0xcd, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x5b}, {.addr=0x033f, .value=0xe4}, {.addr=0x0340, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x033f, .value=0xe4, .type=IO_READ},
        {.addr=0x0340, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x10b3, .a=0xf4, .x=0xc6, .y=0xc2, .sp=0xcb, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x66}, {.addr=0x10b3, .value=0xe4}, {.addr=0x10b4, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x10b5, .a=0x66, .x=0xc6, .y=0xc2, .sp=0xcb, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x66}, {.addr=0x10b3, .value=0xe4}, {.addr=0x10b4, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x10b3, .value=0xe4, .type=IO_READ},
        {.addr=0x10b4, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xa460, .a=0x5d, .x=0xd9, .y=0xb0, .sp=0xaa, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x31}, {.addr=0xa460, .value=0xe4}, {.addr=0xa461, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xa462, .a=0x31, .x=0xd9, .y=0xb0, .sp=0xaa, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x31}, {.addr=0xa460, .value=0xe4}, {.addr=0xa461, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xa460, .value=0xe4, .type=IO_READ},
        {.addr=0xa461, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x6ca1, .a=0x2c, .x=0x9a, .y=0x8f, .sp=0x02, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x9b}, {.addr=0x6ca1, .value=0xe4}, {.addr=0x6ca2, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x6ca3, .a=0x9b, .x=0x9a, .y=0x8f, .sp=0x02, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x9b}, {.addr=0x6ca1, .value=0xe4}, {.addr=0x6ca2, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ca1, .value=0xe4, .type=IO_READ},
        {.addr=0x6ca2, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x33fc, .a=0x61, .x=0x54, .y=0x28, .sp=0x12, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xf9}, {.addr=0x33fc, .value=0xe4}, {.addr=0x33fd, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x33fe, .a=0xf9, .x=0x54, .y=0x28, .sp=0x12, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xf9}, {.addr=0x33fc, .value=0xe4}, {.addr=0x33fd, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x33fc, .value=0xe4, .type=IO_READ},
        {.addr=0x33fd, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2f84, .a=0x09, .x=0xfa, .y=0x02, .sp=0x78, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x6c}, {.addr=0x2f84, .value=0xe4}, {.addr=0x2f85, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x2f86, .a=0x6c, .x=0xfa, .y=0x02, .sp=0x78, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x6c}, {.addr=0x2f84, .value=0xe4}, {.addr=0x2f85, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f84, .value=0xe4, .type=IO_READ},
        {.addr=0x2f85, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x51a3, .a=0x5c, .x=0xf1, .y=0x1d, .sp=0x7c, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x4c}, {.addr=0x51a3, .value=0xe4}, {.addr=0x51a4, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x51a5, .a=0x4c, .x=0xf1, .y=0x1d, .sp=0x7c, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x4c}, {.addr=0x51a3, .value=0xe4}, {.addr=0x51a4, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x51a3, .value=0xe4, .type=IO_READ},
        {.addr=0x51a4, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x7f0f, .a=0x90, .x=0x8f, .y=0xc1, .sp=0x7a, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x6f}, {.addr=0x7f0f, .value=0xe4}, {.addr=0x7f10, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x7f11, .a=0x6f, .x=0x8f, .y=0xc1, .sp=0x7a, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x6f}, {.addr=0x7f0f, .value=0xe4}, {.addr=0x7f10, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f0f, .value=0xe4, .type=IO_READ},
        {.addr=0x7f10, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xc3a1, .a=0x9c, .x=0x63, .y=0x65, .sp=0x8a, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xca}, {.addr=0xc3a1, .value=0xe4}, {.addr=0xc3a2, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xc3a3, .a=0xca, .x=0x63, .y=0x65, .sp=0x8a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xca}, {.addr=0xc3a1, .value=0xe4}, {.addr=0xc3a2, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3a1, .value=0xe4, .type=IO_READ},
        {.addr=0xc3a2, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xf435, .a=0x69, .x=0xb0, .y=0xf3, .sp=0xca, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x6f}, {.addr=0xf435, .value=0xe4}, {.addr=0xf436, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xf437, .a=0x6f, .x=0xb0, .y=0xf3, .sp=0xca, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x6f}, {.addr=0xf435, .value=0xe4}, {.addr=0xf436, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xf435, .value=0xe4, .type=IO_READ},
        {.addr=0xf436, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xc9f2, .a=0x10, .x=0x05, .y=0xad, .sp=0x11, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x9e}, {.addr=0xc9f2, .value=0xe4}, {.addr=0xc9f3, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xc9f4, .a=0x9e, .x=0x05, .y=0xad, .sp=0x11, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x9e}, {.addr=0xc9f2, .value=0xe4}, {.addr=0xc9f3, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9f2, .value=0xe4, .type=IO_READ},
        {.addr=0xc9f3, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x1fb7, .a=0xf6, .x=0x72, .y=0xdd, .sp=0x13, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x2f}, {.addr=0x1fb7, .value=0xe4}, {.addr=0x1fb8, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x1fb9, .a=0x2f, .x=0x72, .y=0xdd, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x2f}, {.addr=0x1fb7, .value=0xe4}, {.addr=0x1fb8, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fb7, .value=0xe4, .type=IO_READ},
        {.addr=0x1fb8, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x0ffb, .a=0x08, .x=0xbe, .y=0x59, .sp=0x25, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xde}, {.addr=0x0ffb, .value=0xe4}, {.addr=0x0ffc, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x0ffd, .a=0xde, .x=0xbe, .y=0x59, .sp=0x25, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xde}, {.addr=0x0ffb, .value=0xe4}, {.addr=0x0ffc, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ffb, .value=0xe4, .type=IO_READ},
        {.addr=0x0ffc, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2130, .a=0xc3, .x=0xf0, .y=0xba, .sp=0x7b, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x02}, {.addr=0x2130, .value=0xe4}, {.addr=0x2131, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x2132, .a=0x02, .x=0xf0, .y=0xba, .sp=0x7b, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x02}, {.addr=0x2130, .value=0xe4}, {.addr=0x2131, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2130, .value=0xe4, .type=IO_READ},
        {.addr=0x2131, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xaf97, .a=0xc2, .x=0x91, .y=0xfd, .sp=0x78, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x59}, {.addr=0xaf97, .value=0xe4}, {.addr=0xaf98, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xaf99, .a=0x59, .x=0x91, .y=0xfd, .sp=0x78, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x59}, {.addr=0xaf97, .value=0xe4}, {.addr=0xaf98, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf97, .value=0xe4, .type=IO_READ},
        {.addr=0xaf98, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x473c, .a=0xd7, .x=0x11, .y=0xd7, .sp=0xc3, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x01}, {.addr=0x473c, .value=0xe4}, {.addr=0x473d, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x473e, .a=0x01, .x=0x11, .y=0xd7, .sp=0xc3, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x01}, {.addr=0x473c, .value=0xe4}, {.addr=0x473d, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x473c, .value=0xe4, .type=IO_READ},
        {.addr=0x473d, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x660a, .a=0xfa, .x=0x0c, .y=0x04, .sp=0x97, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xd6}, {.addr=0x660a, .value=0xe4}, {.addr=0x660b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x660c, .a=0xd6, .x=0x0c, .y=0x04, .sp=0x97, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xd6}, {.addr=0x660a, .value=0xe4}, {.addr=0x660b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x660a, .value=0xe4, .type=IO_READ},
        {.addr=0x660b, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2e0b, .a=0x3c, .x=0xa8, .y=0xa7, .sp=0x1c, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xa4}, {.addr=0x2e0b, .value=0xe4}, {.addr=0x2e0c, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x2e0d, .a=0xa4, .x=0xa8, .y=0xa7, .sp=0x1c, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xa4}, {.addr=0x2e0b, .value=0xe4}, {.addr=0x2e0c, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e0b, .value=0xe4, .type=IO_READ},
        {.addr=0x2e0c, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xa6d1, .a=0xda, .x=0x4a, .y=0x91, .sp=0x2c, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xd2}, {.addr=0xa6d1, .value=0xe4}, {.addr=0xa6d2, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xa6d3, .a=0xd2, .x=0x4a, .y=0x91, .sp=0x2c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xd2}, {.addr=0xa6d1, .value=0xe4}, {.addr=0xa6d2, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6d1, .value=0xe4, .type=IO_READ},
        {.addr=0xa6d2, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x06ea, .a=0x34, .x=0xd2, .y=0x5e, .sp=0x68, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xd4}, {.addr=0x06ea, .value=0xe4}, {.addr=0x06eb, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x06ec, .a=0xd4, .x=0xd2, .y=0x5e, .sp=0x68, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xd4}, {.addr=0x06ea, .value=0xe4}, {.addr=0x06eb, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x06ea, .value=0xe4, .type=IO_READ},
        {.addr=0x06eb, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xe612, .a=0xa8, .x=0x3a, .y=0x9f, .sp=0x7d, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xb6}, {.addr=0xe612, .value=0xe4}, {.addr=0xe613, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xe614, .a=0xb6, .x=0x3a, .y=0x9f, .sp=0x7d, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xb6}, {.addr=0xe612, .value=0xe4}, {.addr=0xe613, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xe612, .value=0xe4, .type=IO_READ},
        {.addr=0xe613, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x4053, .a=0x6f, .x=0x3a, .y=0x26, .sp=0xc4, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0xdf}, {.addr=0x4053, .value=0xe4}, {.addr=0x4054, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x4055, .a=0xdf, .x=0x3a, .y=0x26, .sp=0xc4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0xdf}, {.addr=0x4053, .value=0xe4}, {.addr=0x4054, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x4053, .value=0xe4, .type=IO_READ},
        {.addr=0x4054, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xafe4, .a=0x19, .x=0xfa, .y=0xa1, .sp=0x15, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x03}, {.addr=0xafe4, .value=0xe4}, {.addr=0xafe5, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xafe6, .a=0x03, .x=0xfa, .y=0xa1, .sp=0x15, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x03}, {.addr=0xafe4, .value=0xe4}, {.addr=0xafe5, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xafe4, .value=0xe4, .type=IO_READ},
        {.addr=0xafe5, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xe1de, .a=0x13, .x=0x8e, .y=0x41, .sp=0x99, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0xf4}, {.addr=0xe1de, .value=0xe4}, {.addr=0xe1df, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xe1e0, .a=0xf4, .x=0x8e, .y=0x41, .sp=0x99, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0xf4}, {.addr=0xe1de, .value=0xe4}, {.addr=0xe1df, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1de, .value=0xe4, .type=IO_READ},
        {.addr=0xe1df, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x9757, .a=0x6e, .x=0xe2, .y=0xb6, .sp=0x6e, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xb7}, {.addr=0x9757, .value=0xe4}, {.addr=0x9758, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x9759, .a=0xb7, .x=0xe2, .y=0xb6, .sp=0x6e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xb7}, {.addr=0x9757, .value=0xe4}, {.addr=0x9758, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9757, .value=0xe4, .type=IO_READ},
        {.addr=0x9758, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x5044, .a=0xc6, .x=0x19, .y=0x72, .sp=0xda, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x07}, {.addr=0x5044, .value=0xe4}, {.addr=0x5045, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x5046, .a=0x07, .x=0x19, .y=0x72, .sp=0xda, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x07}, {.addr=0x5044, .value=0xe4}, {.addr=0x5045, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5044, .value=0xe4, .type=IO_READ},
        {.addr=0x5045, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xda7d, .a=0x54, .x=0x5b, .y=0x0e, .sp=0xed, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x5f}, {.addr=0xda7d, .value=0xe4}, {.addr=0xda7e, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xda7f, .a=0x5f, .x=0x5b, .y=0x0e, .sp=0xed, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x5f}, {.addr=0xda7d, .value=0xe4}, {.addr=0xda7e, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xda7d, .value=0xe4, .type=IO_READ},
        {.addr=0xda7e, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x101f, .a=0xca, .x=0xef, .y=0x2b, .sp=0xe2, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xfd}, {.addr=0x101f, .value=0xe4}, {.addr=0x1020, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x1021, .a=0xfd, .x=0xef, .y=0x2b, .sp=0xe2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xfd}, {.addr=0x101f, .value=0xe4}, {.addr=0x1020, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x101f, .value=0xe4, .type=IO_READ},
        {.addr=0x1020, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xa368, .a=0x45, .x=0x8e, .y=0x5e, .sp=0xa6, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x71}, {.addr=0xa368, .value=0xe4}, {.addr=0xa369, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xa36a, .a=0x71, .x=0x8e, .y=0x5e, .sp=0xa6, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x71}, {.addr=0xa368, .value=0xe4}, {.addr=0xa369, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa368, .value=0xe4, .type=IO_READ},
        {.addr=0xa369, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xee89, .a=0x7b, .x=0xd2, .y=0xab, .sp=0xef, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x70}, {.addr=0xee89, .value=0xe4}, {.addr=0xee8a, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xee8b, .a=0x70, .x=0xd2, .y=0xab, .sp=0xef, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x70}, {.addr=0xee89, .value=0xe4}, {.addr=0xee8a, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xee89, .value=0xe4, .type=IO_READ},
        {.addr=0xee8a, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5cee, .a=0xf8, .x=0xd6, .y=0x39, .sp=0x83, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x94}, {.addr=0x5cee, .value=0xe4}, {.addr=0x5cef, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x5cf0, .a=0x94, .x=0xd6, .y=0x39, .sp=0x83, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x94}, {.addr=0x5cee, .value=0xe4}, {.addr=0x5cef, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cee, .value=0xe4, .type=IO_READ},
        {.addr=0x5cef, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xee74, .a=0x53, .x=0xb8, .y=0x2f, .sp=0x07, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x37}, {.addr=0xee74, .value=0xe4}, {.addr=0xee75, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xee76, .a=0x37, .x=0xb8, .y=0x2f, .sp=0x07, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x37}, {.addr=0xee74, .value=0xe4}, {.addr=0xee75, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xee74, .value=0xe4, .type=IO_READ},
        {.addr=0xee75, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6e39, .a=0x8f, .x=0x71, .y=0xde, .sp=0xa4, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x37}, {.addr=0x6e39, .value=0xe4}, {.addr=0x6e3a, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x6e3b, .a=0x37, .x=0x71, .y=0xde, .sp=0xa4, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x37}, {.addr=0x6e39, .value=0xe4}, {.addr=0x6e3a, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e39, .value=0xe4, .type=IO_READ},
        {.addr=0x6e3a, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0x17, .x=0xb7, .y=0xe1, .sp=0xec, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xb4}, {.addr=0x0fe1, .value=0xe4}, {.addr=0x0fe2, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe3, .a=0xb4, .x=0xb7, .y=0xe1, .sp=0xec, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xb4}, {.addr=0x0fe1, .value=0xe4}, {.addr=0x0fe2, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0xe4, .type=IO_READ},
        {.addr=0x0fe2, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xe9f0, .a=0x6a, .x=0x78, .y=0x37, .sp=0x83, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xe7}, {.addr=0xe9f0, .value=0xe4}, {.addr=0xe9f1, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xe9f2, .a=0xe7, .x=0x78, .y=0x37, .sp=0x83, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xe7}, {.addr=0xe9f0, .value=0xe4}, {.addr=0xe9f1, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9f0, .value=0xe4, .type=IO_READ},
        {.addr=0xe9f1, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x3063, .a=0x6c, .x=0xf9, .y=0x7e, .sp=0xd9, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xad}, {.addr=0x3063, .value=0xe4}, {.addr=0x3064, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x3065, .a=0xad, .x=0xf9, .y=0x7e, .sp=0xd9, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xad}, {.addr=0x3063, .value=0xe4}, {.addr=0x3064, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3063, .value=0xe4, .type=IO_READ},
        {.addr=0x3064, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x60d2, .a=0x05, .x=0x2d, .y=0x38, .sp=0xcd, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x91}, {.addr=0x60d2, .value=0xe4}, {.addr=0x60d3, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x60d4, .a=0x91, .x=0x2d, .y=0x38, .sp=0xcd, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x91}, {.addr=0x60d2, .value=0xe4}, {.addr=0x60d3, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x60d2, .value=0xe4, .type=IO_READ},
        {.addr=0x60d3, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x5e21, .a=0xd0, .x=0x99, .y=0x98, .sp=0xed, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xb6}, {.addr=0x5e21, .value=0xe4}, {.addr=0x5e22, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x5e23, .a=0xb6, .x=0x99, .y=0x98, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xb6}, {.addr=0x5e21, .value=0xe4}, {.addr=0x5e22, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e21, .value=0xe4, .type=IO_READ},
        {.addr=0x5e22, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6ce6, .a=0xeb, .x=0x12, .y=0x02, .sp=0xd7, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x23}, {.addr=0x6ce6, .value=0xe4}, {.addr=0x6ce7, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x6ce8, .a=0x23, .x=0x12, .y=0x02, .sp=0xd7, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x23}, {.addr=0x6ce6, .value=0xe4}, {.addr=0x6ce7, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ce6, .value=0xe4, .type=IO_READ},
        {.addr=0x6ce7, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xb3dc, .a=0x4f, .x=0x83, .y=0x23, .sp=0x91, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xda}, {.addr=0xb3dc, .value=0xe4}, {.addr=0xb3dd, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xb3de, .a=0xda, .x=0x83, .y=0x23, .sp=0x91, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xda}, {.addr=0xb3dc, .value=0xe4}, {.addr=0xb3dd, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3dc, .value=0xe4, .type=IO_READ},
        {.addr=0xb3dd, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x32e7, .a=0xcb, .x=0xb3, .y=0xb7, .sp=0x72, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x4e}, {.addr=0x32e7, .value=0xe4}, {.addr=0x32e8, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x32e9, .a=0x4e, .x=0xb3, .y=0xb7, .sp=0x72, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x4e}, {.addr=0x32e7, .value=0xe4}, {.addr=0x32e8, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x32e7, .value=0xe4, .type=IO_READ},
        {.addr=0x32e8, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x0bc5, .a=0xfb, .x=0x10, .y=0x26, .sp=0xc8, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x60}, {.addr=0x0bc5, .value=0xe4}, {.addr=0x0bc6, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x0bc7, .a=0x60, .x=0x10, .y=0x26, .sp=0xc8, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x60}, {.addr=0x0bc5, .value=0xe4}, {.addr=0x0bc6, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bc5, .value=0xe4, .type=IO_READ},
        {.addr=0x0bc6, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xa426, .a=0xa9, .x=0xab, .y=0xd1, .sp=0x19, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x39}, {.addr=0xa426, .value=0xe4}, {.addr=0xa427, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xa428, .a=0x39, .x=0xab, .y=0xd1, .sp=0x19, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x39}, {.addr=0xa426, .value=0xe4}, {.addr=0xa427, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xa426, .value=0xe4, .type=IO_READ},
        {.addr=0xa427, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x20a2, .a=0xb6, .x=0x07, .y=0xfc, .sp=0x93, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x81}, {.addr=0x20a2, .value=0xe4}, {.addr=0x20a3, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x20a4, .a=0x81, .x=0x07, .y=0xfc, .sp=0x93, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x81}, {.addr=0x20a2, .value=0xe4}, {.addr=0x20a3, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x20a2, .value=0xe4, .type=IO_READ},
        {.addr=0x20a3, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x589f, .a=0x6c, .x=0x09, .y=0xd3, .sp=0x0c, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x22}, {.addr=0x589f, .value=0xe4}, {.addr=0x58a0, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x58a1, .a=0x22, .x=0x09, .y=0xd3, .sp=0x0c, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x22}, {.addr=0x589f, .value=0xe4}, {.addr=0x58a0, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x589f, .value=0xe4, .type=IO_READ},
        {.addr=0x58a0, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7657, .a=0x6a, .x=0x73, .y=0x98, .sp=0xa0, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x09}, {.addr=0x7657, .value=0xe4}, {.addr=0x7658, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x7659, .a=0x09, .x=0x73, .y=0x98, .sp=0xa0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x09}, {.addr=0x7657, .value=0xe4}, {.addr=0x7658, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7657, .value=0xe4, .type=IO_READ},
        {.addr=0x7658, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x3653, .a=0x26, .x=0x0a, .y=0xf7, .sp=0xa5, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x0a}, {.addr=0x3653, .value=0xe4}, {.addr=0x3654, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3655, .a=0x0a, .x=0x0a, .y=0xf7, .sp=0xa5, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x0a}, {.addr=0x3653, .value=0xe4}, {.addr=0x3654, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3653, .value=0xe4, .type=IO_READ},
        {.addr=0x3654, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xf060, .a=0xb9, .x=0x09, .y=0xd5, .sp=0x46, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xf4}, {.addr=0xf060, .value=0xe4}, {.addr=0xf061, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xf062, .a=0xf4, .x=0x09, .y=0xd5, .sp=0x46, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xf4}, {.addr=0xf060, .value=0xe4}, {.addr=0xf061, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xf060, .value=0xe4, .type=IO_READ},
        {.addr=0xf061, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xa7de, .a=0x50, .x=0x10, .y=0x1b, .sp=0x59, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x7c}, {.addr=0xa7de, .value=0xe4}, {.addr=0xa7df, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e0, .a=0x7c, .x=0x10, .y=0x1b, .sp=0x59, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x7c}, {.addr=0xa7de, .value=0xe4}, {.addr=0xa7df, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7de, .value=0xe4, .type=IO_READ},
        {.addr=0xa7df, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb8f6, .a=0x12, .x=0x33, .y=0xc8, .sp=0xb5, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xd8}, {.addr=0xb8f6, .value=0xe4}, {.addr=0xb8f7, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xb8f8, .a=0xd8, .x=0x33, .y=0xc8, .sp=0xb5, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xd8}, {.addr=0xb8f6, .value=0xe4}, {.addr=0xb8f7, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8f6, .value=0xe4, .type=IO_READ},
        {.addr=0xb8f7, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8e91, .a=0x63, .x=0xe1, .y=0x49, .sp=0x34, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xc1}, {.addr=0x8e91, .value=0xe4}, {.addr=0x8e92, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x8e93, .a=0xc1, .x=0xe1, .y=0x49, .sp=0x34, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xc1}, {.addr=0x8e91, .value=0xe4}, {.addr=0x8e92, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e91, .value=0xe4, .type=IO_READ},
        {.addr=0x8e92, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x4f89, .a=0xf0, .x=0xb2, .y=0x19, .sp=0xb3, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xd3}, {.addr=0x4f89, .value=0xe4}, {.addr=0x4f8a, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x4f8b, .a=0xd3, .x=0xb2, .y=0x19, .sp=0xb3, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xd3}, {.addr=0x4f89, .value=0xe4}, {.addr=0x4f8a, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f89, .value=0xe4, .type=IO_READ},
        {.addr=0x4f8a, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xef73, .a=0x03, .x=0x13, .y=0x1c, .sp=0x24, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x3d}, {.addr=0xef73, .value=0xe4}, {.addr=0xef74, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xef75, .a=0x3d, .x=0x13, .y=0x1c, .sp=0x24, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x3d}, {.addr=0xef73, .value=0xe4}, {.addr=0xef74, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xef73, .value=0xe4, .type=IO_READ},
        {.addr=0xef74, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x2b7a, .a=0x20, .x=0xc4, .y=0x5d, .sp=0x8f, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xe6}, {.addr=0x2b7a, .value=0xe4}, {.addr=0x2b7b, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x2b7c, .a=0xe6, .x=0xc4, .y=0x5d, .sp=0x8f, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xe6}, {.addr=0x2b7a, .value=0xe4}, {.addr=0x2b7b, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b7a, .value=0xe4, .type=IO_READ},
        {.addr=0x2b7b, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xfd95, .a=0x93, .x=0xef, .y=0x2b, .sp=0x98, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x2c}, {.addr=0xfd95, .value=0xe4}, {.addr=0xfd96, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xfd97, .a=0x2c, .x=0xef, .y=0x2b, .sp=0x98, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x2c}, {.addr=0xfd95, .value=0xe4}, {.addr=0xfd96, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd95, .value=0xe4, .type=IO_READ},
        {.addr=0xfd96, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x54bd, .a=0x8d, .x=0xc4, .y=0xc5, .sp=0xa5, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x42}, {.addr=0x54bd, .value=0xe4}, {.addr=0x54be, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x54bf, .a=0x42, .x=0xc4, .y=0xc5, .sp=0xa5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x42}, {.addr=0x54bd, .value=0xe4}, {.addr=0x54be, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x54bd, .value=0xe4, .type=IO_READ},
        {.addr=0x54be, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xc17d, .a=0x02, .x=0x7a, .y=0xab, .sp=0x94, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x86}, {.addr=0xc17d, .value=0xe4}, {.addr=0xc17e, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xc17f, .a=0x86, .x=0x7a, .y=0xab, .sp=0x94, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x86}, {.addr=0xc17d, .value=0xe4}, {.addr=0xc17e, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xc17d, .value=0xe4, .type=IO_READ},
        {.addr=0xc17e, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9328, .a=0x84, .x=0x0d, .y=0x0d, .sp=0xd4, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x6b}, {.addr=0x9328, .value=0xe4}, {.addr=0x9329, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x932a, .a=0x6b, .x=0x0d, .y=0x0d, .sp=0xd4, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x6b}, {.addr=0x9328, .value=0xe4}, {.addr=0x9329, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9328, .value=0xe4, .type=IO_READ},
        {.addr=0x9329, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7b1b, .a=0xa7, .x=0xea, .y=0x43, .sp=0x1d, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x92}, {.addr=0x7b1b, .value=0xe4}, {.addr=0x7b1c, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x7b1d, .a=0x92, .x=0xea, .y=0x43, .sp=0x1d, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x92}, {.addr=0x7b1b, .value=0xe4}, {.addr=0x7b1c, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b1b, .value=0xe4, .type=IO_READ},
        {.addr=0x7b1c, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x53a7, .a=0xf6, .x=0xd1, .y=0x93, .sp=0x88, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x6a}, {.addr=0x53a7, .value=0xe4}, {.addr=0x53a8, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x53a9, .a=0x6a, .x=0xd1, .y=0x93, .sp=0x88, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x6a}, {.addr=0x53a7, .value=0xe4}, {.addr=0x53a8, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x53a7, .value=0xe4, .type=IO_READ},
        {.addr=0x53a8, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xd8b0, .a=0x91, .x=0x0d, .y=0x1b, .sp=0x32, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xcf}, {.addr=0xd8b0, .value=0xe4}, {.addr=0xd8b1, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xd8b2, .a=0xcf, .x=0x0d, .y=0x1b, .sp=0x32, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xcf}, {.addr=0xd8b0, .value=0xe4}, {.addr=0xd8b1, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8b0, .value=0xe4, .type=IO_READ},
        {.addr=0xd8b1, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xcb30, .a=0xf4, .x=0x92, .y=0x92, .sp=0x3b, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x10}, {.addr=0xcb30, .value=0xe4}, {.addr=0xcb31, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xcb32, .a=0x10, .x=0x92, .y=0x92, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x10}, {.addr=0xcb30, .value=0xe4}, {.addr=0xcb31, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb30, .value=0xe4, .type=IO_READ},
        {.addr=0xcb31, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x00ab, .a=0xe7, .x=0xd2, .y=0x23, .sp=0x17, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xb4}, {.addr=0x00ab, .value=0xe4}, {.addr=0x00ac, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x00ad, .a=0xb4, .x=0xd2, .y=0x23, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xb4}, {.addr=0x00ab, .value=0xe4}, {.addr=0x00ac, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x00ab, .value=0xe4, .type=IO_READ},
        {.addr=0x00ac, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x609f, .a=0x98, .x=0x30, .y=0x58, .sp=0xd1, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x42}, {.addr=0x609f, .value=0xe4}, {.addr=0x60a0, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x60a1, .a=0x42, .x=0x30, .y=0x58, .sp=0xd1, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x42}, {.addr=0x609f, .value=0xe4}, {.addr=0x60a0, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x609f, .value=0xe4, .type=IO_READ},
        {.addr=0x60a0, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xb78e, .a=0x7a, .x=0xbe, .y=0xa3, .sp=0x17, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xa4}, {.addr=0xb78e, .value=0xe4}, {.addr=0xb78f, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xb790, .a=0xa4, .x=0xbe, .y=0xa3, .sp=0x17, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xa4}, {.addr=0xb78e, .value=0xe4}, {.addr=0xb78f, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb78e, .value=0xe4, .type=IO_READ},
        {.addr=0xb78f, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xf194, .a=0x8c, .x=0xfa, .y=0xbb, .sp=0x2d, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x86}, {.addr=0xf194, .value=0xe4}, {.addr=0xf195, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xf196, .a=0x86, .x=0xfa, .y=0xbb, .sp=0x2d, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x86}, {.addr=0xf194, .value=0xe4}, {.addr=0xf195, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf194, .value=0xe4, .type=IO_READ},
        {.addr=0xf195, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xf1c5, .a=0x9c, .x=0x1f, .y=0xcd, .sp=0x5e, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xb9}, {.addr=0xf1c5, .value=0xe4}, {.addr=0xf1c6, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xf1c7, .a=0xb9, .x=0x1f, .y=0xcd, .sp=0x5e, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xb9}, {.addr=0xf1c5, .value=0xe4}, {.addr=0xf1c6, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1c5, .value=0xe4, .type=IO_READ},
        {.addr=0xf1c6, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xc6d5, .a=0x5c, .x=0x06, .y=0x13, .sp=0x76, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x89}, {.addr=0xc6d5, .value=0xe4}, {.addr=0xc6d6, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xc6d7, .a=0x89, .x=0x06, .y=0x13, .sp=0x76, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x89}, {.addr=0xc6d5, .value=0xe4}, {.addr=0xc6d6, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6d5, .value=0xe4, .type=IO_READ},
        {.addr=0xc6d6, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xf378, .a=0x61, .x=0xb1, .y=0xad, .sp=0x65, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x92}, {.addr=0xf378, .value=0xe4}, {.addr=0xf379, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xf37a, .a=0x92, .x=0xb1, .y=0xad, .sp=0x65, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x92}, {.addr=0xf378, .value=0xe4}, {.addr=0xf379, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf378, .value=0xe4, .type=IO_READ},
        {.addr=0xf379, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2462, .a=0x9c, .x=0x6d, .y=0xdc, .sp=0xb6, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xe0}, {.addr=0x2462, .value=0xe4}, {.addr=0x2463, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x2464, .a=0xe0, .x=0x6d, .y=0xdc, .sp=0xb6, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xe0}, {.addr=0x2462, .value=0xe4}, {.addr=0x2463, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x2462, .value=0xe4, .type=IO_READ},
        {.addr=0x2463, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xd936, .a=0x47, .x=0xfd, .y=0x9c, .sp=0xaf, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x5a}, {.addr=0xd936, .value=0xe4}, {.addr=0xd937, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xd938, .a=0x5a, .x=0xfd, .y=0x9c, .sp=0xaf, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x5a}, {.addr=0xd936, .value=0xe4}, {.addr=0xd937, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd936, .value=0xe4, .type=IO_READ},
        {.addr=0xd937, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xdc07, .a=0x96, .x=0x4f, .y=0x9a, .sp=0xb9, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xd4}, {.addr=0xdc07, .value=0xe4}, {.addr=0xdc08, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xdc09, .a=0xd4, .x=0x4f, .y=0x9a, .sp=0xb9, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xd4}, {.addr=0xdc07, .value=0xe4}, {.addr=0xdc08, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc07, .value=0xe4, .type=IO_READ},
        {.addr=0xdc08, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xdd52, .a=0x5f, .x=0x56, .y=0xc2, .sp=0xe5, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x2f}, {.addr=0xdd52, .value=0xe4}, {.addr=0xdd53, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xdd54, .a=0x2f, .x=0x56, .y=0xc2, .sp=0xe5, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x2f}, {.addr=0xdd52, .value=0xe4}, {.addr=0xdd53, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd52, .value=0xe4, .type=IO_READ},
        {.addr=0xdd53, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x19a7, .a=0x69, .x=0x12, .y=0x75, .sp=0xdc, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x57}, {.addr=0x19a7, .value=0xe4}, {.addr=0x19a8, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x19a9, .a=0x57, .x=0x12, .y=0x75, .sp=0xdc, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x57}, {.addr=0x19a7, .value=0xe4}, {.addr=0x19a8, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x19a7, .value=0xe4, .type=IO_READ},
        {.addr=0x19a8, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x2a5a, .a=0x6e, .x=0xe7, .y=0x18, .sp=0x07, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x94}, {.addr=0x2a5a, .value=0xe4}, {.addr=0x2a5b, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x2a5c, .a=0x94, .x=0xe7, .y=0x18, .sp=0x07, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x94}, {.addr=0x2a5a, .value=0xe4}, {.addr=0x2a5b, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a5a, .value=0xe4, .type=IO_READ},
        {.addr=0x2a5b, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0300) {
    const struct CPU_State initial_cpu = {.pc=0xfa58, .a=0x54, .x=0x51, .y=0xd2, .sp=0x6a, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xbb}, {.addr=0xfa58, .value=0xe4}, {.addr=0xfa59, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xfa5a, .a=0xbb, .x=0x51, .y=0xd2, .sp=0x6a, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xbb}, {.addr=0xfa58, .value=0xe4}, {.addr=0xfa59, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa58, .value=0xe4, .type=IO_READ},
        {.addr=0xfa59, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0301) {
    const struct CPU_State initial_cpu = {.pc=0xd35a, .a=0x30, .x=0x0a, .y=0x5b, .sp=0x32, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x89}, {.addr=0xd35a, .value=0xe4}, {.addr=0xd35b, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xd35c, .a=0x89, .x=0x0a, .y=0x5b, .sp=0x32, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x89}, {.addr=0xd35a, .value=0xe4}, {.addr=0xd35b, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd35a, .value=0xe4, .type=IO_READ},
        {.addr=0xd35b, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0302) {
    const struct CPU_State initial_cpu = {.pc=0x414a, .a=0x85, .x=0x2f, .y=0xd2, .sp=0x9e, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x01}, {.addr=0x414a, .value=0xe4}, {.addr=0x414b, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x414c, .a=0x01, .x=0x2f, .y=0xd2, .sp=0x9e, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x01}, {.addr=0x414a, .value=0xe4}, {.addr=0x414b, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x414a, .value=0xe4, .type=IO_READ},
        {.addr=0x414b, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0303) {
    const struct CPU_State initial_cpu = {.pc=0x1b84, .a=0x86, .x=0x3f, .y=0xf1, .sp=0x87, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x77}, {.addr=0x1b84, .value=0xe4}, {.addr=0x1b85, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x1b86, .a=0x77, .x=0x3f, .y=0xf1, .sp=0x87, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x77}, {.addr=0x1b84, .value=0xe4}, {.addr=0x1b85, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b84, .value=0xe4, .type=IO_READ},
        {.addr=0x1b85, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0304) {
    const struct CPU_State initial_cpu = {.pc=0x7f60, .a=0xb8, .x=0xe2, .y=0xd7, .sp=0x86, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x84}, {.addr=0x7f60, .value=0xe4}, {.addr=0x7f61, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x7f62, .a=0x84, .x=0xe2, .y=0xd7, .sp=0x86, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x84}, {.addr=0x7f60, .value=0xe4}, {.addr=0x7f61, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f60, .value=0xe4, .type=IO_READ},
        {.addr=0x7f61, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0305) {
    const struct CPU_State initial_cpu = {.pc=0x5f5e, .a=0x37, .x=0x57, .y=0x16, .sp=0xa9, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x69}, {.addr=0x5f5e, .value=0xe4}, {.addr=0x5f5f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x5f60, .a=0x69, .x=0x57, .y=0x16, .sp=0xa9, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x69}, {.addr=0x5f5e, .value=0xe4}, {.addr=0x5f5f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f5e, .value=0xe4, .type=IO_READ},
        {.addr=0x5f5f, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0306) {
    const struct CPU_State initial_cpu = {.pc=0x2ede, .a=0xbd, .x=0xbf, .y=0xc6, .sp=0x1c, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xc9}, {.addr=0x2ede, .value=0xe4}, {.addr=0x2edf, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x2ee0, .a=0xc9, .x=0xbf, .y=0xc6, .sp=0x1c, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xc9}, {.addr=0x2ede, .value=0xe4}, {.addr=0x2edf, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ede, .value=0xe4, .type=IO_READ},
        {.addr=0x2edf, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0307) {
    const struct CPU_State initial_cpu = {.pc=0xf2a0, .a=0x80, .x=0xfd, .y=0x71, .sp=0x18, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xf3}, {.addr=0xf2a0, .value=0xe4}, {.addr=0xf2a1, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a2, .a=0xf3, .x=0xfd, .y=0x71, .sp=0x18, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xf3}, {.addr=0xf2a0, .value=0xe4}, {.addr=0xf2a1, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a0, .value=0xe4, .type=IO_READ},
        {.addr=0xf2a1, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0308) {
    const struct CPU_State initial_cpu = {.pc=0xfb18, .a=0x7a, .x=0x62, .y=0xac, .sp=0x97, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xfd}, {.addr=0xfb18, .value=0xe4}, {.addr=0xfb19, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xfb1a, .a=0xfd, .x=0x62, .y=0xac, .sp=0x97, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xfd}, {.addr=0xfb18, .value=0xe4}, {.addr=0xfb19, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb18, .value=0xe4, .type=IO_READ},
        {.addr=0xfb19, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0309) {
    const struct CPU_State initial_cpu = {.pc=0xa4b4, .a=0x2c, .x=0xdc, .y=0xa9, .sp=0xd0, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x4f}, {.addr=0xa4b4, .value=0xe4}, {.addr=0xa4b5, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xa4b6, .a=0x4f, .x=0xdc, .y=0xa9, .sp=0xd0, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x4f}, {.addr=0xa4b4, .value=0xe4}, {.addr=0xa4b5, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4b4, .value=0xe4, .type=IO_READ},
        {.addr=0xa4b5, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030A) {
    const struct CPU_State initial_cpu = {.pc=0xd402, .a=0xe2, .x=0xd7, .y=0xc0, .sp=0x00, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x25}, {.addr=0xd402, .value=0xe4}, {.addr=0xd403, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xd404, .a=0x25, .x=0xd7, .y=0xc0, .sp=0x00, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x25}, {.addr=0xd402, .value=0xe4}, {.addr=0xd403, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd402, .value=0xe4, .type=IO_READ},
        {.addr=0xd403, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030B) {
    const struct CPU_State initial_cpu = {.pc=0x3337, .a=0xcd, .x=0xa4, .y=0xbf, .sp=0xaa, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x98}, {.addr=0x3337, .value=0xe4}, {.addr=0x3338, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x3339, .a=0x98, .x=0xa4, .y=0xbf, .sp=0xaa, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x98}, {.addr=0x3337, .value=0xe4}, {.addr=0x3338, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x3337, .value=0xe4, .type=IO_READ},
        {.addr=0x3338, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030C) {
    const struct CPU_State initial_cpu = {.pc=0x737a, .a=0x49, .x=0xb4, .y=0x7b, .sp=0xcc, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xca}, {.addr=0x737a, .value=0xe4}, {.addr=0x737b, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x737c, .a=0xca, .x=0xb4, .y=0x7b, .sp=0xcc, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xca}, {.addr=0x737a, .value=0xe4}, {.addr=0x737b, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x737a, .value=0xe4, .type=IO_READ},
        {.addr=0x737b, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030D) {
    const struct CPU_State initial_cpu = {.pc=0x01b6, .a=0x32, .x=0x07, .y=0x8a, .sp=0x37, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x19}, {.addr=0x01b6, .value=0xe4}, {.addr=0x01b7, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x01b8, .a=0x19, .x=0x07, .y=0x8a, .sp=0x37, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x19}, {.addr=0x01b6, .value=0xe4}, {.addr=0x01b7, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x01b6, .value=0xe4, .type=IO_READ},
        {.addr=0x01b7, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030E) {
    const struct CPU_State initial_cpu = {.pc=0x89fa, .a=0xb2, .x=0x70, .y=0x1d, .sp=0x86, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xfb}, {.addr=0x89fa, .value=0xe4}, {.addr=0x89fb, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x89fc, .a=0xfb, .x=0x70, .y=0x1d, .sp=0x86, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xfb}, {.addr=0x89fa, .value=0xe4}, {.addr=0x89fb, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x89fa, .value=0xe4, .type=IO_READ},
        {.addr=0x89fb, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_030F) {
    const struct CPU_State initial_cpu = {.pc=0xe590, .a=0x6c, .x=0xe4, .y=0x8c, .sp=0xab, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x72}, {.addr=0xe590, .value=0xe4}, {.addr=0xe591, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xe592, .a=0x72, .x=0xe4, .y=0x8c, .sp=0xab, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x72}, {.addr=0xe590, .value=0xe4}, {.addr=0xe591, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xe590, .value=0xe4, .type=IO_READ},
        {.addr=0xe591, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0310) {
    const struct CPU_State initial_cpu = {.pc=0x0383, .a=0x0f, .x=0x13, .y=0xe4, .sp=0x3a, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xee}, {.addr=0x0383, .value=0xe4}, {.addr=0x0384, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x0385, .a=0xee, .x=0x13, .y=0xe4, .sp=0x3a, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xee}, {.addr=0x0383, .value=0xe4}, {.addr=0x0384, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0383, .value=0xe4, .type=IO_READ},
        {.addr=0x0384, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0311) {
    const struct CPU_State initial_cpu = {.pc=0x7434, .a=0xb6, .x=0xa8, .y=0x39, .sp=0x5d, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0xb9}, {.addr=0x7434, .value=0xe4}, {.addr=0x7435, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x7436, .a=0xb9, .x=0xa8, .y=0x39, .sp=0x5d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0xb9}, {.addr=0x7434, .value=0xe4}, {.addr=0x7435, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7434, .value=0xe4, .type=IO_READ},
        {.addr=0x7435, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0312) {
    const struct CPU_State initial_cpu = {.pc=0x23bc, .a=0x1a, .x=0xe4, .y=0xfc, .sp=0x7d, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x05}, {.addr=0x23bc, .value=0xe4}, {.addr=0x23bd, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x23be, .a=0x05, .x=0xe4, .y=0xfc, .sp=0x7d, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x05}, {.addr=0x23bc, .value=0xe4}, {.addr=0x23bd, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x23bc, .value=0xe4, .type=IO_READ},
        {.addr=0x23bd, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0313) {
    const struct CPU_State initial_cpu = {.pc=0x5820, .a=0x6d, .x=0x7f, .y=0x10, .sp=0x26, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x5d}, {.addr=0x5820, .value=0xe4}, {.addr=0x5821, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x5822, .a=0x5d, .x=0x7f, .y=0x10, .sp=0x26, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x5d}, {.addr=0x5820, .value=0xe4}, {.addr=0x5821, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5820, .value=0xe4, .type=IO_READ},
        {.addr=0x5821, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0314) {
    const struct CPU_State initial_cpu = {.pc=0xa6a8, .a=0xc5, .x=0x4b, .y=0x3e, .sp=0xbd, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xe8}, {.addr=0xa6a8, .value=0xe4}, {.addr=0xa6a9, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xa6aa, .a=0xe8, .x=0x4b, .y=0x3e, .sp=0xbd, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xe8}, {.addr=0xa6a8, .value=0xe4}, {.addr=0xa6a9, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6a8, .value=0xe4, .type=IO_READ},
        {.addr=0xa6a9, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0315) {
    const struct CPU_State initial_cpu = {.pc=0x3472, .a=0x2f, .x=0xef, .y=0x51, .sp=0x36, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x85}, {.addr=0x3472, .value=0xe4}, {.addr=0x3473, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x3474, .a=0x85, .x=0xef, .y=0x51, .sp=0x36, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x85}, {.addr=0x3472, .value=0xe4}, {.addr=0x3473, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x3472, .value=0xe4, .type=IO_READ},
        {.addr=0x3473, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0317) {
    const struct CPU_State initial_cpu = {.pc=0x9b16, .a=0x72, .x=0x3c, .y=0xb0, .sp=0xe4, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x2c}, {.addr=0x9b16, .value=0xe4}, {.addr=0x9b17, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x9b18, .a=0x2c, .x=0x3c, .y=0xb0, .sp=0xe4, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x2c}, {.addr=0x9b16, .value=0xe4}, {.addr=0x9b17, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b16, .value=0xe4, .type=IO_READ},
        {.addr=0x9b17, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0318) {
    const struct CPU_State initial_cpu = {.pc=0xf2a4, .a=0xdf, .x=0xb3, .y=0x0f, .sp=0xe1, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x71}, {.addr=0xf2a4, .value=0xe4}, {.addr=0xf2a5, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a6, .a=0x71, .x=0xb3, .y=0x0f, .sp=0xe1, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x71}, {.addr=0xf2a4, .value=0xe4}, {.addr=0xf2a5, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a4, .value=0xe4, .type=IO_READ},
        {.addr=0xf2a5, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0319) {
    const struct CPU_State initial_cpu = {.pc=0x91df, .a=0xd5, .x=0xbb, .y=0x70, .sp=0x64, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xec}, {.addr=0x91df, .value=0xe4}, {.addr=0x91e0, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x91e1, .a=0xec, .x=0xbb, .y=0x70, .sp=0x64, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xec}, {.addr=0x91df, .value=0xe4}, {.addr=0x91e0, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x91df, .value=0xe4, .type=IO_READ},
        {.addr=0x91e0, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_031A) {
    const struct CPU_State initial_cpu = {.pc=0x837e, .a=0x63, .x=0x80, .y=0x67, .sp=0xa6, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x97}, {.addr=0x837e, .value=0xe4}, {.addr=0x837f, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x8380, .a=0x97, .x=0x80, .y=0x67, .sp=0xa6, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x97}, {.addr=0x837e, .value=0xe4}, {.addr=0x837f, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x837e, .value=0xe4, .type=IO_READ},
        {.addr=0x837f, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3668, .a=0xaf, .x=0xdd, .y=0x53, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xcb}, {.addr=0x3668, .value=0xe4}, {.addr=0x3669, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x366a, .a=0xcb, .x=0xdd, .y=0x53, .sp=0x6b, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xcb}, {.addr=0x3668, .value=0xe4}, {.addr=0x3669, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x3668, .value=0xe4, .type=IO_READ},
        {.addr=0x3669, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_031C) {
    const struct CPU_State initial_cpu = {.pc=0x1011, .a=0xc7, .x=0x3a, .y=0xa2, .sp=0xf4, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xbb}, {.addr=0x1011, .value=0xe4}, {.addr=0x1012, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x1013, .a=0xbb, .x=0x3a, .y=0xa2, .sp=0xf4, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xbb}, {.addr=0x1011, .value=0xe4}, {.addr=0x1012, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1011, .value=0xe4, .type=IO_READ},
        {.addr=0x1012, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_031D) {
    const struct CPU_State initial_cpu = {.pc=0xc31e, .a=0x82, .x=0xc7, .y=0xd8, .sp=0xc5, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x9b}, {.addr=0xc31e, .value=0xe4}, {.addr=0xc31f, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xc320, .a=0x9b, .x=0xc7, .y=0xd8, .sp=0xc5, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x9b}, {.addr=0xc31e, .value=0xe4}, {.addr=0xc31f, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xc31e, .value=0xe4, .type=IO_READ},
        {.addr=0xc31f, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_031F) {
    const struct CPU_State initial_cpu = {.pc=0x3535, .a=0xff, .x=0xb9, .y=0x8e, .sp=0xbb, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x1c}, {.addr=0x3535, .value=0xe4}, {.addr=0x3536, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x3537, .a=0x1c, .x=0xb9, .y=0x8e, .sp=0xbb, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x1c}, {.addr=0x3535, .value=0xe4}, {.addr=0x3536, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3535, .value=0xe4, .type=IO_READ},
        {.addr=0x3536, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0320) {
    const struct CPU_State initial_cpu = {.pc=0x219e, .a=0x20, .x=0x4e, .y=0x31, .sp=0xcf, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x3b}, {.addr=0x219e, .value=0xe4}, {.addr=0x219f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x21a0, .a=0x3b, .x=0x4e, .y=0x31, .sp=0xcf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x3b}, {.addr=0x219e, .value=0xe4}, {.addr=0x219f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x219e, .value=0xe4, .type=IO_READ},
        {.addr=0x219f, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0321) {
    const struct CPU_State initial_cpu = {.pc=0x4ee0, .a=0x8b, .x=0x9d, .y=0x6f, .sp=0x39, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x81}, {.addr=0x4ee0, .value=0xe4}, {.addr=0x4ee1, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x4ee2, .a=0x81, .x=0x9d, .y=0x6f, .sp=0x39, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x81}, {.addr=0x4ee0, .value=0xe4}, {.addr=0x4ee1, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ee0, .value=0xe4, .type=IO_READ},
        {.addr=0x4ee1, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0323) {
    const struct CPU_State initial_cpu = {.pc=0x8205, .a=0x55, .x=0x20, .y=0x7e, .sp=0xed, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xdb}, {.addr=0x8205, .value=0xe4}, {.addr=0x8206, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x8207, .a=0xdb, .x=0x20, .y=0x7e, .sp=0xed, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xdb}, {.addr=0x8205, .value=0xe4}, {.addr=0x8206, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x8205, .value=0xe4, .type=IO_READ},
        {.addr=0x8206, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0324) {
    const struct CPU_State initial_cpu = {.pc=0xb661, .a=0x50, .x=0x06, .y=0xe0, .sp=0x73, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xca}, {.addr=0xb661, .value=0xe4}, {.addr=0xb662, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xb663, .a=0xca, .x=0x06, .y=0xe0, .sp=0x73, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xca}, {.addr=0xb661, .value=0xe4}, {.addr=0xb662, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb661, .value=0xe4, .type=IO_READ},
        {.addr=0xb662, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0325) {
    const struct CPU_State initial_cpu = {.pc=0x61dc, .a=0x4a, .x=0x4f, .y=0xe8, .sp=0x66, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xfb}, {.addr=0x61dc, .value=0xe4}, {.addr=0x61dd, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x61de, .a=0xfb, .x=0x4f, .y=0xe8, .sp=0x66, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xfb}, {.addr=0x61dc, .value=0xe4}, {.addr=0x61dd, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x61dc, .value=0xe4, .type=IO_READ},
        {.addr=0x61dd, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0326) {
    const struct CPU_State initial_cpu = {.pc=0x19f5, .a=0x74, .x=0x8c, .y=0xe0, .sp=0x35, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x58}, {.addr=0x19f5, .value=0xe4}, {.addr=0x19f6, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x19f7, .a=0x58, .x=0x8c, .y=0xe0, .sp=0x35, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x58}, {.addr=0x19f5, .value=0xe4}, {.addr=0x19f6, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x19f5, .value=0xe4, .type=IO_READ},
        {.addr=0x19f6, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0327) {
    const struct CPU_State initial_cpu = {.pc=0x74cc, .a=0x28, .x=0x93, .y=0xa5, .sp=0xfc, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x9c}, {.addr=0x74cc, .value=0xe4}, {.addr=0x74cd, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x74ce, .a=0x9c, .x=0x93, .y=0xa5, .sp=0xfc, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x9c}, {.addr=0x74cc, .value=0xe4}, {.addr=0x74cd, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x74cc, .value=0xe4, .type=IO_READ},
        {.addr=0x74cd, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0328) {
    const struct CPU_State initial_cpu = {.pc=0x34e0, .a=0x44, .x=0x5b, .y=0xcb, .sp=0x9b, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xb5}, {.addr=0x34e0, .value=0xe4}, {.addr=0x34e1, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x34e2, .a=0xb5, .x=0x5b, .y=0xcb, .sp=0x9b, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xb5}, {.addr=0x34e0, .value=0xe4}, {.addr=0x34e1, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x34e0, .value=0xe4, .type=IO_READ},
        {.addr=0x34e1, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0329) {
    const struct CPU_State initial_cpu = {.pc=0x7c55, .a=0x57, .x=0x24, .y=0xd9, .sp=0xb7, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xcb}, {.addr=0x7c55, .value=0xe4}, {.addr=0x7c56, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x7c57, .a=0xcb, .x=0x24, .y=0xd9, .sp=0xb7, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xcb}, {.addr=0x7c55, .value=0xe4}, {.addr=0x7c56, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c55, .value=0xe4, .type=IO_READ},
        {.addr=0x7c56, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032A) {
    const struct CPU_State initial_cpu = {.pc=0x43b0, .a=0x9f, .x=0x11, .y=0xae, .sp=0xa0, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xaa}, {.addr=0x43b0, .value=0xe4}, {.addr=0x43b1, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x43b2, .a=0xaa, .x=0x11, .y=0xae, .sp=0xa0, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xaa}, {.addr=0x43b0, .value=0xe4}, {.addr=0x43b1, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x43b0, .value=0xe4, .type=IO_READ},
        {.addr=0x43b1, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032B) {
    const struct CPU_State initial_cpu = {.pc=0x409c, .a=0xd3, .x=0x6f, .y=0x9f, .sp=0x52, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x36}, {.addr=0x409c, .value=0xe4}, {.addr=0x409d, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x409e, .a=0x36, .x=0x6f, .y=0x9f, .sp=0x52, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x36}, {.addr=0x409c, .value=0xe4}, {.addr=0x409d, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x409c, .value=0xe4, .type=IO_READ},
        {.addr=0x409d, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032C) {
    const struct CPU_State initial_cpu = {.pc=0xad5a, .a=0x22, .x=0xbc, .y=0xcb, .sp=0x57, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x4f}, {.addr=0xad5a, .value=0xe4}, {.addr=0xad5b, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xad5c, .a=0x4f, .x=0xbc, .y=0xcb, .sp=0x57, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x4f}, {.addr=0xad5a, .value=0xe4}, {.addr=0xad5b, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xad5a, .value=0xe4, .type=IO_READ},
        {.addr=0xad5b, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032D) {
    const struct CPU_State initial_cpu = {.pc=0xd59a, .a=0x01, .x=0x52, .y=0x8b, .sp=0x17, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xf8}, {.addr=0xd59a, .value=0xe4}, {.addr=0xd59b, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xd59c, .a=0xf8, .x=0x52, .y=0x8b, .sp=0x17, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xf8}, {.addr=0xd59a, .value=0xe4}, {.addr=0xd59b, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xd59a, .value=0xe4, .type=IO_READ},
        {.addr=0xd59b, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032E) {
    const struct CPU_State initial_cpu = {.pc=0x65ea, .a=0x3a, .x=0xa6, .y=0x10, .sp=0xf1, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x82}, {.addr=0x65ea, .value=0xe4}, {.addr=0x65eb, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x65ec, .a=0x82, .x=0xa6, .y=0x10, .sp=0xf1, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x82}, {.addr=0x65ea, .value=0xe4}, {.addr=0x65eb, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x65ea, .value=0xe4, .type=IO_READ},
        {.addr=0x65eb, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_032F) {
    const struct CPU_State initial_cpu = {.pc=0xf632, .a=0x4d, .x=0x96, .y=0xe2, .sp=0x22, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x2f}, {.addr=0xf632, .value=0xe4}, {.addr=0xf633, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xf634, .a=0x2f, .x=0x96, .y=0xe2, .sp=0x22, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x2f}, {.addr=0xf632, .value=0xe4}, {.addr=0xf633, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xf632, .value=0xe4, .type=IO_READ},
        {.addr=0xf633, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0330) {
    const struct CPU_State initial_cpu = {.pc=0x4d1a, .a=0x90, .x=0x92, .y=0x1c, .sp=0x59, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x6a}, {.addr=0x4d1a, .value=0xe4}, {.addr=0x4d1b, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x4d1c, .a=0x6a, .x=0x92, .y=0x1c, .sp=0x59, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x6a}, {.addr=0x4d1a, .value=0xe4}, {.addr=0x4d1b, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d1a, .value=0xe4, .type=IO_READ},
        {.addr=0x4d1b, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0331) {
    const struct CPU_State initial_cpu = {.pc=0x87b1, .a=0xa1, .x=0x83, .y=0x49, .sp=0xf0, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xd4}, {.addr=0x87b1, .value=0xe4}, {.addr=0x87b2, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x87b3, .a=0xd4, .x=0x83, .y=0x49, .sp=0xf0, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xd4}, {.addr=0x87b1, .value=0xe4}, {.addr=0x87b2, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x87b1, .value=0xe4, .type=IO_READ},
        {.addr=0x87b2, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0332) {
    const struct CPU_State initial_cpu = {.pc=0xc2c6, .a=0xd1, .x=0xe9, .y=0x6e, .sp=0x6e, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xd2}, {.addr=0xc2c6, .value=0xe4}, {.addr=0xc2c7, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xc2c8, .a=0xd2, .x=0xe9, .y=0x6e, .sp=0x6e, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xd2}, {.addr=0xc2c6, .value=0xe4}, {.addr=0xc2c7, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2c6, .value=0xe4, .type=IO_READ},
        {.addr=0xc2c7, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0333) {
    const struct CPU_State initial_cpu = {.pc=0x6334, .a=0x1c, .x=0x4c, .y=0x53, .sp=0x6f, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x5f}, {.addr=0x6334, .value=0xe4}, {.addr=0x6335, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x6336, .a=0x5f, .x=0x4c, .y=0x53, .sp=0x6f, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x5f}, {.addr=0x6334, .value=0xe4}, {.addr=0x6335, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x6334, .value=0xe4, .type=IO_READ},
        {.addr=0x6335, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0334) {
    const struct CPU_State initial_cpu = {.pc=0xd997, .a=0xf8, .x=0xec, .y=0x05, .sp=0x1e, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x87}, {.addr=0xd997, .value=0xe4}, {.addr=0xd998, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xd999, .a=0x87, .x=0xec, .y=0x05, .sp=0x1e, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x87}, {.addr=0xd997, .value=0xe4}, {.addr=0xd998, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd997, .value=0xe4, .type=IO_READ},
        {.addr=0xd998, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0335) {
    const struct CPU_State initial_cpu = {.pc=0x04b9, .a=0x7e, .x=0x20, .y=0xef, .sp=0x77, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x16}, {.addr=0x04b9, .value=0xe4}, {.addr=0x04ba, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x04bb, .a=0x16, .x=0x20, .y=0xef, .sp=0x77, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x16}, {.addr=0x04b9, .value=0xe4}, {.addr=0x04ba, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x04b9, .value=0xe4, .type=IO_READ},
        {.addr=0x04ba, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0336) {
    const struct CPU_State initial_cpu = {.pc=0xa03e, .a=0x78, .x=0x77, .y=0x7c, .sp=0x17, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xe6}, {.addr=0xa03e, .value=0xe4}, {.addr=0xa03f, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xa040, .a=0xe6, .x=0x77, .y=0x7c, .sp=0x17, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xe6}, {.addr=0xa03e, .value=0xe4}, {.addr=0xa03f, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa03e, .value=0xe4, .type=IO_READ},
        {.addr=0xa03f, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0337) {
    const struct CPU_State initial_cpu = {.pc=0x365d, .a=0xb9, .x=0x09, .y=0x45, .sp=0x55, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xb2}, {.addr=0x365d, .value=0xe4}, {.addr=0x365e, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x365f, .a=0xb2, .x=0x09, .y=0x45, .sp=0x55, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xb2}, {.addr=0x365d, .value=0xe4}, {.addr=0x365e, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x365d, .value=0xe4, .type=IO_READ},
        {.addr=0x365e, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0338) {
    const struct CPU_State initial_cpu = {.pc=0x78be, .a=0x4a, .x=0xad, .y=0x61, .sp=0x1e, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x3d}, {.addr=0x78be, .value=0xe4}, {.addr=0x78bf, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x78c0, .a=0x3d, .x=0xad, .y=0x61, .sp=0x1e, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x3d}, {.addr=0x78be, .value=0xe4}, {.addr=0x78bf, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x78be, .value=0xe4, .type=IO_READ},
        {.addr=0x78bf, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0339) {
    const struct CPU_State initial_cpu = {.pc=0xa06a, .a=0xc4, .x=0xc6, .y=0x0d, .sp=0x2f, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x81}, {.addr=0xa06a, .value=0xe4}, {.addr=0xa06b, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0x81, .x=0xc6, .y=0x0d, .sp=0x2f, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x81}, {.addr=0xa06a, .value=0xe4}, {.addr=0xa06b, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xa06a, .value=0xe4, .type=IO_READ},
        {.addr=0xa06b, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033A) {
    const struct CPU_State initial_cpu = {.pc=0x5df3, .a=0x4d, .x=0x2e, .y=0x01, .sp=0x16, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0xd1}, {.addr=0x5df3, .value=0xe4}, {.addr=0x5df4, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x5df5, .a=0xd1, .x=0x2e, .y=0x01, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0xd1}, {.addr=0x5df3, .value=0xe4}, {.addr=0x5df4, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x5df3, .value=0xe4, .type=IO_READ},
        {.addr=0x5df4, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033B) {
    const struct CPU_State initial_cpu = {.pc=0x8509, .a=0x48, .x=0xf3, .y=0x31, .sp=0xb9, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xd0}, {.addr=0x8509, .value=0xe4}, {.addr=0x850a, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x850b, .a=0xd0, .x=0xf3, .y=0x31, .sp=0xb9, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xd0}, {.addr=0x8509, .value=0xe4}, {.addr=0x850a, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8509, .value=0xe4, .type=IO_READ},
        {.addr=0x850a, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033C) {
    const struct CPU_State initial_cpu = {.pc=0x3947, .a=0xa9, .x=0x57, .y=0x4a, .sp=0x66, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x66}, {.addr=0x3947, .value=0xe4}, {.addr=0x3948, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x3949, .a=0x66, .x=0x57, .y=0x4a, .sp=0x66, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x66}, {.addr=0x3947, .value=0xe4}, {.addr=0x3948, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3947, .value=0xe4, .type=IO_READ},
        {.addr=0x3948, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033D) {
    const struct CPU_State initial_cpu = {.pc=0x7332, .a=0x27, .x=0xc3, .y=0xe2, .sp=0x3e, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xbe}, {.addr=0x7332, .value=0xe4}, {.addr=0x7333, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x7334, .a=0xbe, .x=0xc3, .y=0xe2, .sp=0x3e, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xbe}, {.addr=0x7332, .value=0xe4}, {.addr=0x7333, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x7332, .value=0xe4, .type=IO_READ},
        {.addr=0x7333, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033E) {
    const struct CPU_State initial_cpu = {.pc=0x916a, .a=0xf9, .x=0x62, .y=0x45, .sp=0x93, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xbe}, {.addr=0x916a, .value=0xe4}, {.addr=0x916b, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x916c, .a=0xbe, .x=0x62, .y=0x45, .sp=0x93, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xbe}, {.addr=0x916a, .value=0xe4}, {.addr=0x916b, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x916a, .value=0xe4, .type=IO_READ},
        {.addr=0x916b, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_033F) {
    const struct CPU_State initial_cpu = {.pc=0x2251, .a=0x4b, .x=0x4a, .y=0xec, .sp=0x7a, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xfe}, {.addr=0x2251, .value=0xe4}, {.addr=0x2252, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x2253, .a=0xfe, .x=0x4a, .y=0xec, .sp=0x7a, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xfe}, {.addr=0x2251, .value=0xe4}, {.addr=0x2252, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2251, .value=0xe4, .type=IO_READ},
        {.addr=0x2252, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0340) {
    const struct CPU_State initial_cpu = {.pc=0xe76b, .a=0xf0, .x=0x90, .y=0x0d, .sp=0xac, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x92}, {.addr=0xe76b, .value=0xe4}, {.addr=0xe76c, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xe76d, .a=0x92, .x=0x90, .y=0x0d, .sp=0xac, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x92}, {.addr=0xe76b, .value=0xe4}, {.addr=0xe76c, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe76b, .value=0xe4, .type=IO_READ},
        {.addr=0xe76c, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0341) {
    const struct CPU_State initial_cpu = {.pc=0xb8b6, .a=0x78, .x=0xb0, .y=0x99, .sp=0xa2, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x17}, {.addr=0xb8b6, .value=0xe4}, {.addr=0xb8b7, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xb8b8, .a=0x17, .x=0xb0, .y=0x99, .sp=0xa2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x17}, {.addr=0xb8b6, .value=0xe4}, {.addr=0xb8b7, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8b6, .value=0xe4, .type=IO_READ},
        {.addr=0xb8b7, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0342) {
    const struct CPU_State initial_cpu = {.pc=0xf628, .a=0xb8, .x=0x66, .y=0xae, .sp=0xe4, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0xf6}, {.addr=0xf628, .value=0xe4}, {.addr=0xf629, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xf62a, .a=0xf6, .x=0x66, .y=0xae, .sp=0xe4, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0xf6}, {.addr=0xf628, .value=0xe4}, {.addr=0xf629, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf628, .value=0xe4, .type=IO_READ},
        {.addr=0xf629, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa743, .a=0x5a, .x=0xe3, .y=0x95, .sp=0x9d, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0xfa}, {.addr=0xa743, .value=0xe4}, {.addr=0xa744, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa745, .a=0xfa, .x=0xe3, .y=0x95, .sp=0x9d, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0xfa}, {.addr=0xa743, .value=0xe4}, {.addr=0xa744, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa743, .value=0xe4, .type=IO_READ},
        {.addr=0xa744, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0344) {
    const struct CPU_State initial_cpu = {.pc=0xa28c, .a=0x9f, .x=0xd2, .y=0xd9, .sp=0x76, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xc2}, {.addr=0xa28c, .value=0xe4}, {.addr=0xa28d, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xa28e, .a=0xc2, .x=0xd2, .y=0xd9, .sp=0x76, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xc2}, {.addr=0xa28c, .value=0xe4}, {.addr=0xa28d, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xa28c, .value=0xe4, .type=IO_READ},
        {.addr=0xa28d, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0345) {
    const struct CPU_State initial_cpu = {.pc=0x165a, .a=0x7e, .x=0xb2, .y=0xb7, .sp=0xd7, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xc3}, {.addr=0x165a, .value=0xe4}, {.addr=0x165b, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x165c, .a=0xc3, .x=0xb2, .y=0xb7, .sp=0xd7, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xc3}, {.addr=0x165a, .value=0xe4}, {.addr=0x165b, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x165a, .value=0xe4, .type=IO_READ},
        {.addr=0x165b, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0346) {
    const struct CPU_State initial_cpu = {.pc=0x8884, .a=0x7b, .x=0xf4, .y=0x3f, .sp=0x25, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xd7}, {.addr=0x8884, .value=0xe4}, {.addr=0x8885, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x8886, .a=0xd7, .x=0xf4, .y=0x3f, .sp=0x25, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xd7}, {.addr=0x8884, .value=0xe4}, {.addr=0x8885, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8884, .value=0xe4, .type=IO_READ},
        {.addr=0x8885, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0348) {
    const struct CPU_State initial_cpu = {.pc=0x9c66, .a=0xec, .x=0x25, .y=0x79, .sp=0x7b, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x12}, {.addr=0x9c66, .value=0xe4}, {.addr=0x9c67, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x9c68, .a=0x12, .x=0x25, .y=0x79, .sp=0x7b, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x12}, {.addr=0x9c66, .value=0xe4}, {.addr=0x9c67, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c66, .value=0xe4, .type=IO_READ},
        {.addr=0x9c67, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0349) {
    const struct CPU_State initial_cpu = {.pc=0x0ade, .a=0x79, .x=0x86, .y=0x20, .sp=0x97, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x0ade, .value=0xe4}, {.addr=0x0adf, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x0ae0, .a=0xc6, .x=0x86, .y=0x20, .sp=0x97, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xc6}, {.addr=0x0ade, .value=0xe4}, {.addr=0x0adf, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ade, .value=0xe4, .type=IO_READ},
        {.addr=0x0adf, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034A) {
    const struct CPU_State initial_cpu = {.pc=0x8d30, .a=0x2e, .x=0xa5, .y=0x30, .sp=0xe3, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xb7}, {.addr=0x8d30, .value=0xe4}, {.addr=0x8d31, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x8d32, .a=0xb7, .x=0xa5, .y=0x30, .sp=0xe3, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xb7}, {.addr=0x8d30, .value=0xe4}, {.addr=0x8d31, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d30, .value=0xe4, .type=IO_READ},
        {.addr=0x8d31, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034B) {
    const struct CPU_State initial_cpu = {.pc=0x6945, .a=0x6a, .x=0xf0, .y=0x35, .sp=0xe8, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0x2f}, {.addr=0x6945, .value=0xe4}, {.addr=0x6946, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x6947, .a=0x2f, .x=0xf0, .y=0x35, .sp=0xe8, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0x2f}, {.addr=0x6945, .value=0xe4}, {.addr=0x6946, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x6945, .value=0xe4, .type=IO_READ},
        {.addr=0x6946, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034C) {
    const struct CPU_State initial_cpu = {.pc=0x4da5, .a=0x92, .x=0xdb, .y=0x6d, .sp=0xb5, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x2f}, {.addr=0x4da5, .value=0xe4}, {.addr=0x4da6, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x4da7, .a=0x2f, .x=0xdb, .y=0x6d, .sp=0xb5, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x2f}, {.addr=0x4da5, .value=0xe4}, {.addr=0x4da6, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x4da5, .value=0xe4, .type=IO_READ},
        {.addr=0x4da6, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034D) {
    const struct CPU_State initial_cpu = {.pc=0xed39, .a=0x7c, .x=0xb4, .y=0xfb, .sp=0x3d, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x85}, {.addr=0xed39, .value=0xe4}, {.addr=0xed3a, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xed3b, .a=0x85, .x=0xb4, .y=0xfb, .sp=0x3d, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x85}, {.addr=0xed39, .value=0xe4}, {.addr=0xed3a, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xed39, .value=0xe4, .type=IO_READ},
        {.addr=0xed3a, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034E) {
    const struct CPU_State initial_cpu = {.pc=0xeaee, .a=0x4e, .x=0x72, .y=0xb9, .sp=0x2d, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xf5}, {.addr=0xeaee, .value=0xe4}, {.addr=0xeaef, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xeaf0, .a=0xf5, .x=0x72, .y=0xb9, .sp=0x2d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xf5}, {.addr=0xeaee, .value=0xe4}, {.addr=0xeaef, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xeaee, .value=0xe4, .type=IO_READ},
        {.addr=0xeaef, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_034F) {
    const struct CPU_State initial_cpu = {.pc=0xa710, .a=0xf7, .x=0x81, .y=0x14, .sp=0xaa, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x00}, {.addr=0xa710, .value=0xe4}, {.addr=0xa711, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xa712, .a=0x00, .x=0x81, .y=0x14, .sp=0xaa, .status=0x13};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x00}, {.addr=0xa710, .value=0xe4}, {.addr=0xa711, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa710, .value=0xe4, .type=IO_READ},
        {.addr=0xa711, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0350) {
    const struct CPU_State initial_cpu = {.pc=0x5ad1, .a=0x64, .x=0x38, .y=0x83, .sp=0xc5, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x0d}, {.addr=0x5ad1, .value=0xe4}, {.addr=0x5ad2, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x5ad3, .a=0x0d, .x=0x38, .y=0x83, .sp=0xc5, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x0d}, {.addr=0x5ad1, .value=0xe4}, {.addr=0x5ad2, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ad1, .value=0xe4, .type=IO_READ},
        {.addr=0x5ad2, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0351) {
    const struct CPU_State initial_cpu = {.pc=0xca40, .a=0x43, .x=0x3c, .y=0xa7, .sp=0x43, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x66}, {.addr=0xca40, .value=0xe4}, {.addr=0xca41, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xca42, .a=0x66, .x=0x3c, .y=0xa7, .sp=0x43, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x66}, {.addr=0xca40, .value=0xe4}, {.addr=0xca41, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xca40, .value=0xe4, .type=IO_READ},
        {.addr=0xca41, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0352) {
    const struct CPU_State initial_cpu = {.pc=0x274b, .a=0xb5, .x=0x4d, .y=0xaf, .sp=0x17, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xdb}, {.addr=0x274b, .value=0xe4}, {.addr=0x274c, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x274d, .a=0xdb, .x=0x4d, .y=0xaf, .sp=0x17, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xdb}, {.addr=0x274b, .value=0xe4}, {.addr=0x274c, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x274b, .value=0xe4, .type=IO_READ},
        {.addr=0x274c, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0353) {
    const struct CPU_State initial_cpu = {.pc=0x7a83, .a=0x21, .x=0x93, .y=0x06, .sp=0xeb, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x26}, {.addr=0x7a83, .value=0xe4}, {.addr=0x7a84, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x7a85, .a=0x26, .x=0x93, .y=0x06, .sp=0xeb, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x26}, {.addr=0x7a83, .value=0xe4}, {.addr=0x7a84, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a83, .value=0xe4, .type=IO_READ},
        {.addr=0x7a84, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0354) {
    const struct CPU_State initial_cpu = {.pc=0x659a, .a=0xb0, .x=0xd2, .y=0x0e, .sp=0x87, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x47}, {.addr=0x659a, .value=0xe4}, {.addr=0x659b, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x659c, .a=0x47, .x=0xd2, .y=0x0e, .sp=0x87, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x47}, {.addr=0x659a, .value=0xe4}, {.addr=0x659b, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x659a, .value=0xe4, .type=IO_READ},
        {.addr=0x659b, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0355) {
    const struct CPU_State initial_cpu = {.pc=0x8344, .a=0xf6, .x=0x5b, .y=0x7d, .sp=0xe0, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x2a}, {.addr=0x8344, .value=0xe4}, {.addr=0x8345, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x8346, .a=0x2a, .x=0x5b, .y=0x7d, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x2a}, {.addr=0x8344, .value=0xe4}, {.addr=0x8345, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8344, .value=0xe4, .type=IO_READ},
        {.addr=0x8345, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0356) {
    const struct CPU_State initial_cpu = {.pc=0xdc40, .a=0x52, .x=0x2b, .y=0xf3, .sp=0xfa, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x1d}, {.addr=0xdc40, .value=0xe4}, {.addr=0xdc41, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xdc42, .a=0x1d, .x=0x2b, .y=0xf3, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x1d}, {.addr=0xdc40, .value=0xe4}, {.addr=0xdc41, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc40, .value=0xe4, .type=IO_READ},
        {.addr=0xdc41, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0357) {
    const struct CPU_State initial_cpu = {.pc=0x3864, .a=0x06, .x=0x26, .y=0x1c, .sp=0x95, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x4b}, {.addr=0x3864, .value=0xe4}, {.addr=0x3865, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x3866, .a=0x4b, .x=0x26, .y=0x1c, .sp=0x95, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x4b}, {.addr=0x3864, .value=0xe4}, {.addr=0x3865, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x3864, .value=0xe4, .type=IO_READ},
        {.addr=0x3865, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0358) {
    const struct CPU_State initial_cpu = {.pc=0x6c2a, .a=0x0a, .x=0xcf, .y=0x87, .sp=0xed, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xe5}, {.addr=0x6c2a, .value=0xe4}, {.addr=0x6c2b, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x6c2c, .a=0xe5, .x=0xcf, .y=0x87, .sp=0xed, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xe5}, {.addr=0x6c2a, .value=0xe4}, {.addr=0x6c2b, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c2a, .value=0xe4, .type=IO_READ},
        {.addr=0x6c2b, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0359) {
    const struct CPU_State initial_cpu = {.pc=0xfb71, .a=0x8a, .x=0x0e, .y=0x04, .sp=0x3e, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xe8}, {.addr=0xfb71, .value=0xe4}, {.addr=0xfb72, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xfb73, .a=0xe8, .x=0x0e, .y=0x04, .sp=0x3e, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xe8}, {.addr=0xfb71, .value=0xe4}, {.addr=0xfb72, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb71, .value=0xe4, .type=IO_READ},
        {.addr=0xfb72, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035A) {
    const struct CPU_State initial_cpu = {.pc=0x5565, .a=0x34, .x=0x0f, .y=0xa2, .sp=0xd5, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xa2}, {.addr=0x5565, .value=0xe4}, {.addr=0x5566, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x5567, .a=0xa2, .x=0x0f, .y=0xa2, .sp=0xd5, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xa2}, {.addr=0x5565, .value=0xe4}, {.addr=0x5566, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5565, .value=0xe4, .type=IO_READ},
        {.addr=0x5566, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035B) {
    const struct CPU_State initial_cpu = {.pc=0x054e, .a=0xf9, .x=0xdf, .y=0x91, .sp=0x88, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x03}, {.addr=0x054e, .value=0xe4}, {.addr=0x054f, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x0550, .a=0x03, .x=0xdf, .y=0x91, .sp=0x88, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x03}, {.addr=0x054e, .value=0xe4}, {.addr=0x054f, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x054e, .value=0xe4, .type=IO_READ},
        {.addr=0x054f, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035C) {
    const struct CPU_State initial_cpu = {.pc=0x1508, .a=0x1a, .x=0x0f, .y=0xf6, .sp=0x6d, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xd9}, {.addr=0x1508, .value=0xe4}, {.addr=0x1509, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x150a, .a=0xd9, .x=0x0f, .y=0xf6, .sp=0x6d, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xd9}, {.addr=0x1508, .value=0xe4}, {.addr=0x1509, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1508, .value=0xe4, .type=IO_READ},
        {.addr=0x1509, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035D) {
    const struct CPU_State initial_cpu = {.pc=0x04c6, .a=0xd6, .x=0xec, .y=0xfe, .sp=0x39, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0xea}, {.addr=0x04c6, .value=0xe4}, {.addr=0x04c7, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x04c8, .a=0xea, .x=0xec, .y=0xfe, .sp=0x39, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0xea}, {.addr=0x04c6, .value=0xe4}, {.addr=0x04c7, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x04c6, .value=0xe4, .type=IO_READ},
        {.addr=0x04c7, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035E) {
    const struct CPU_State initial_cpu = {.pc=0xdf6e, .a=0x70, .x=0x45, .y=0xa9, .sp=0x03, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xdd}, {.addr=0xdf6e, .value=0xe4}, {.addr=0xdf6f, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xdf70, .a=0xdd, .x=0x45, .y=0xa9, .sp=0x03, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xdd}, {.addr=0xdf6e, .value=0xe4}, {.addr=0xdf6f, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf6e, .value=0xe4, .type=IO_READ},
        {.addr=0xdf6f, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_035F) {
    const struct CPU_State initial_cpu = {.pc=0x0bcb, .a=0xcc, .x=0x69, .y=0xf9, .sp=0xaa, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x9b}, {.addr=0x0bcb, .value=0xe4}, {.addr=0x0bcc, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x0bcd, .a=0x9b, .x=0x69, .y=0xf9, .sp=0xaa, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x9b}, {.addr=0x0bcb, .value=0xe4}, {.addr=0x0bcc, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bcb, .value=0xe4, .type=IO_READ},
        {.addr=0x0bcc, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1661, .a=0x8b, .x=0xe5, .y=0x42, .sp=0x06, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xd1}, {.addr=0x1661, .value=0xe4}, {.addr=0x1662, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x1663, .a=0xd1, .x=0xe5, .y=0x42, .sp=0x06, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xd1}, {.addr=0x1661, .value=0xe4}, {.addr=0x1662, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x1661, .value=0xe4, .type=IO_READ},
        {.addr=0x1662, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0361) {
    const struct CPU_State initial_cpu = {.pc=0xc968, .a=0xa2, .x=0x7c, .y=0x92, .sp=0xcc, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x6e}, {.addr=0xc968, .value=0xe4}, {.addr=0xc969, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xc96a, .a=0x6e, .x=0x7c, .y=0x92, .sp=0xcc, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x6e}, {.addr=0xc968, .value=0xe4}, {.addr=0xc969, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc968, .value=0xe4, .type=IO_READ},
        {.addr=0xc969, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0362) {
    const struct CPU_State initial_cpu = {.pc=0x3efb, .a=0x26, .x=0x88, .y=0x0b, .sp=0x9f, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x59}, {.addr=0x3efb, .value=0xe4}, {.addr=0x3efc, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x3efd, .a=0x59, .x=0x88, .y=0x0b, .sp=0x9f, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x59}, {.addr=0x3efb, .value=0xe4}, {.addr=0x3efc, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3efb, .value=0xe4, .type=IO_READ},
        {.addr=0x3efc, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0363) {
    const struct CPU_State initial_cpu = {.pc=0x287a, .a=0x82, .x=0x9f, .y=0x84, .sp=0x56, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x74}, {.addr=0x287a, .value=0xe4}, {.addr=0x287b, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x287c, .a=0x74, .x=0x9f, .y=0x84, .sp=0x56, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x74}, {.addr=0x287a, .value=0xe4}, {.addr=0x287b, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x287a, .value=0xe4, .type=IO_READ},
        {.addr=0x287b, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0364) {
    const struct CPU_State initial_cpu = {.pc=0xea33, .a=0x70, .x=0xa3, .y=0x59, .sp=0xc7, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x78}, {.addr=0xea33, .value=0xe4}, {.addr=0xea34, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xea35, .a=0x78, .x=0xa3, .y=0x59, .sp=0xc7, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x78}, {.addr=0xea33, .value=0xe4}, {.addr=0xea34, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xea33, .value=0xe4, .type=IO_READ},
        {.addr=0xea34, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0365) {
    const struct CPU_State initial_cpu = {.pc=0x284d, .a=0xcf, .x=0x3c, .y=0xd2, .sp=0xfa, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x4e}, {.addr=0x284d, .value=0xe4}, {.addr=0x284e, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x284f, .a=0x4e, .x=0x3c, .y=0xd2, .sp=0xfa, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x4e}, {.addr=0x284d, .value=0xe4}, {.addr=0x284e, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x284d, .value=0xe4, .type=IO_READ},
        {.addr=0x284e, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0366) {
    const struct CPU_State initial_cpu = {.pc=0x3c95, .a=0x51, .x=0xca, .y=0xfe, .sp=0x0d, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x21}, {.addr=0x3c95, .value=0xe4}, {.addr=0x3c96, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x3c97, .a=0x21, .x=0xca, .y=0xfe, .sp=0x0d, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x21}, {.addr=0x3c95, .value=0xe4}, {.addr=0x3c96, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c95, .value=0xe4, .type=IO_READ},
        {.addr=0x3c96, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0367) {
    const struct CPU_State initial_cpu = {.pc=0xd747, .a=0x80, .x=0xb9, .y=0x27, .sp=0x7f, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x8f}, {.addr=0xd747, .value=0xe4}, {.addr=0xd748, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xd749, .a=0x8f, .x=0xb9, .y=0x27, .sp=0x7f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x8f}, {.addr=0xd747, .value=0xe4}, {.addr=0xd748, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd747, .value=0xe4, .type=IO_READ},
        {.addr=0xd748, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0368) {
    const struct CPU_State initial_cpu = {.pc=0x5cd7, .a=0xab, .x=0x38, .y=0x83, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xe1}, {.addr=0x5cd7, .value=0xe4}, {.addr=0x5cd8, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x5cd9, .a=0xe1, .x=0x38, .y=0x83, .sp=0x3a, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xe1}, {.addr=0x5cd7, .value=0xe4}, {.addr=0x5cd8, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cd7, .value=0xe4, .type=IO_READ},
        {.addr=0x5cd8, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0369) {
    const struct CPU_State initial_cpu = {.pc=0xc698, .a=0x00, .x=0x71, .y=0xfa, .sp=0x62, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x7f}, {.addr=0xc698, .value=0xe4}, {.addr=0xc699, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xc69a, .a=0x7f, .x=0x71, .y=0xfa, .sp=0x62, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x7f}, {.addr=0xc698, .value=0xe4}, {.addr=0xc699, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xc698, .value=0xe4, .type=IO_READ},
        {.addr=0xc699, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036A) {
    const struct CPU_State initial_cpu = {.pc=0x29b7, .a=0xbc, .x=0x66, .y=0x0e, .sp=0xaa, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x5d}, {.addr=0x29b7, .value=0xe4}, {.addr=0x29b8, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x29b9, .a=0x5d, .x=0x66, .y=0x0e, .sp=0xaa, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x5d}, {.addr=0x29b7, .value=0xe4}, {.addr=0x29b8, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x29b7, .value=0xe4, .type=IO_READ},
        {.addr=0x29b8, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036B) {
    const struct CPU_State initial_cpu = {.pc=0x9d2a, .a=0x78, .x=0x51, .y=0x03, .sp=0x0b, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x48}, {.addr=0x9d2a, .value=0xe4}, {.addr=0x9d2b, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x9d2c, .a=0x48, .x=0x51, .y=0x03, .sp=0x0b, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x48}, {.addr=0x9d2a, .value=0xe4}, {.addr=0x9d2b, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d2a, .value=0xe4, .type=IO_READ},
        {.addr=0x9d2b, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036C) {
    const struct CPU_State initial_cpu = {.pc=0xe739, .a=0x46, .x=0x25, .y=0x20, .sp=0x78, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x28}, {.addr=0xe739, .value=0xe4}, {.addr=0xe73a, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xe73b, .a=0x28, .x=0x25, .y=0x20, .sp=0x78, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x28}, {.addr=0xe739, .value=0xe4}, {.addr=0xe73a, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xe739, .value=0xe4, .type=IO_READ},
        {.addr=0xe73a, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036D) {
    const struct CPU_State initial_cpu = {.pc=0xfdb8, .a=0x7b, .x=0xc9, .y=0x03, .sp=0xbc, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x70}, {.addr=0xfdb8, .value=0xe4}, {.addr=0xfdb9, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0xfdba, .a=0x70, .x=0xc9, .y=0x03, .sp=0xbc, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x70}, {.addr=0xfdb8, .value=0xe4}, {.addr=0xfdb9, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdb8, .value=0xe4, .type=IO_READ},
        {.addr=0xfdb9, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036E) {
    const struct CPU_State initial_cpu = {.pc=0xfff8, .a=0x7a, .x=0x02, .y=0xaf, .sp=0x84, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xf9}, {.addr=0xfff8, .value=0xe4}, {.addr=0xfff9, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xfffa, .a=0xf9, .x=0x02, .y=0xaf, .sp=0x84, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xf9}, {.addr=0xfff8, .value=0xe4}, {.addr=0xfff9, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xfff8, .value=0xe4, .type=IO_READ},
        {.addr=0xfff9, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_036F) {
    const struct CPU_State initial_cpu = {.pc=0xf15e, .a=0x0a, .x=0x8f, .y=0x58, .sp=0xb9, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xc6}, {.addr=0xf15e, .value=0xe4}, {.addr=0xf15f, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xf160, .a=0xc6, .x=0x8f, .y=0x58, .sp=0xb9, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xc6}, {.addr=0xf15e, .value=0xe4}, {.addr=0xf15f, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xf15e, .value=0xe4, .type=IO_READ},
        {.addr=0xf15f, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0370) {
    const struct CPU_State initial_cpu = {.pc=0xabc9, .a=0xf7, .x=0x27, .y=0x2c, .sp=0x19, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xd9}, {.addr=0xabc9, .value=0xe4}, {.addr=0xabca, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xabcb, .a=0xd9, .x=0x27, .y=0x2c, .sp=0x19, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xd9}, {.addr=0xabc9, .value=0xe4}, {.addr=0xabca, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xabc9, .value=0xe4, .type=IO_READ},
        {.addr=0xabca, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0371) {
    const struct CPU_State initial_cpu = {.pc=0x1232, .a=0xdb, .x=0x13, .y=0xc9, .sp=0xa0, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x73}, {.addr=0x1232, .value=0xe4}, {.addr=0x1233, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x1234, .a=0x73, .x=0x13, .y=0xc9, .sp=0xa0, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x73}, {.addr=0x1232, .value=0xe4}, {.addr=0x1233, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1232, .value=0xe4, .type=IO_READ},
        {.addr=0x1233, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0372) {
    const struct CPU_State initial_cpu = {.pc=0x1488, .a=0xc4, .x=0x53, .y=0x49, .sp=0xca, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xab}, {.addr=0x1488, .value=0xe4}, {.addr=0x1489, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x148a, .a=0xab, .x=0x53, .y=0x49, .sp=0xca, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xab}, {.addr=0x1488, .value=0xe4}, {.addr=0x1489, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1488, .value=0xe4, .type=IO_READ},
        {.addr=0x1489, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0373) {
    const struct CPU_State initial_cpu = {.pc=0x6369, .a=0xa2, .x=0x58, .y=0xf3, .sp=0x85, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xcb}, {.addr=0x6369, .value=0xe4}, {.addr=0x636a, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x636b, .a=0xcb, .x=0x58, .y=0xf3, .sp=0x85, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xcb}, {.addr=0x6369, .value=0xe4}, {.addr=0x636a, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6369, .value=0xe4, .type=IO_READ},
        {.addr=0x636a, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0374) {
    const struct CPU_State initial_cpu = {.pc=0xd286, .a=0x31, .x=0xc9, .y=0x43, .sp=0x08, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x8d}, {.addr=0xd286, .value=0xe4}, {.addr=0xd287, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xd288, .a=0x8d, .x=0xc9, .y=0x43, .sp=0x08, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x8d}, {.addr=0xd286, .value=0xe4}, {.addr=0xd287, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xd286, .value=0xe4, .type=IO_READ},
        {.addr=0xd287, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0375) {
    const struct CPU_State initial_cpu = {.pc=0x6cce, .a=0xce, .x=0x1b, .y=0x9e, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xe3}, {.addr=0x6cce, .value=0xe4}, {.addr=0x6ccf, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x6cd0, .a=0xe3, .x=0x1b, .y=0x9e, .sp=0x56, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xe3}, {.addr=0x6cce, .value=0xe4}, {.addr=0x6ccf, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cce, .value=0xe4, .type=IO_READ},
        {.addr=0x6ccf, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0376) {
    const struct CPU_State initial_cpu = {.pc=0xb169, .a=0x67, .x=0xfc, .y=0x71, .sp=0x4d, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x5e}, {.addr=0xb169, .value=0xe4}, {.addr=0xb16a, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xb16b, .a=0x5e, .x=0xfc, .y=0x71, .sp=0x4d, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x5e}, {.addr=0xb169, .value=0xe4}, {.addr=0xb16a, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xb169, .value=0xe4, .type=IO_READ},
        {.addr=0xb16a, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe990, .a=0x22, .x=0xa9, .y=0x7f, .sp=0xd9, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xa1}, {.addr=0xe990, .value=0xe4}, {.addr=0xe991, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xe992, .a=0xa1, .x=0xa9, .y=0x7f, .sp=0xd9, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xa1}, {.addr=0xe990, .value=0xe4}, {.addr=0xe991, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe990, .value=0xe4, .type=IO_READ},
        {.addr=0xe991, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7698, .a=0x57, .x=0x06, .y=0x21, .sp=0x48, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x69}, {.addr=0x7698, .value=0xe4}, {.addr=0x7699, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x769a, .a=0x69, .x=0x06, .y=0x21, .sp=0x48, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x69}, {.addr=0x7698, .value=0xe4}, {.addr=0x7699, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7698, .value=0xe4, .type=IO_READ},
        {.addr=0x7699, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0379) {
    const struct CPU_State initial_cpu = {.pc=0xa95c, .a=0x25, .x=0xbc, .y=0x61, .sp=0x2a, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xa1}, {.addr=0xa95c, .value=0xe4}, {.addr=0xa95d, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xa95e, .a=0xa1, .x=0xbc, .y=0x61, .sp=0x2a, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xa1}, {.addr=0xa95c, .value=0xe4}, {.addr=0xa95d, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa95c, .value=0xe4, .type=IO_READ},
        {.addr=0xa95d, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037A) {
    const struct CPU_State initial_cpu = {.pc=0x1e7d, .a=0x09, .x=0xeb, .y=0x09, .sp=0x0c, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xae}, {.addr=0x1e7d, .value=0xe4}, {.addr=0x1e7e, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x1e7f, .a=0xae, .x=0xeb, .y=0x09, .sp=0x0c, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xae}, {.addr=0x1e7d, .value=0xe4}, {.addr=0x1e7e, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e7d, .value=0xe4, .type=IO_READ},
        {.addr=0x1e7e, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037B) {
    const struct CPU_State initial_cpu = {.pc=0xa302, .a=0x17, .x=0x73, .y=0x32, .sp=0x5d, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0x4d}, {.addr=0xa302, .value=0xe4}, {.addr=0xa303, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xa304, .a=0x4d, .x=0x73, .y=0x32, .sp=0x5d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0x4d}, {.addr=0xa302, .value=0xe4}, {.addr=0xa303, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xa302, .value=0xe4, .type=IO_READ},
        {.addr=0xa303, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037C) {
    const struct CPU_State initial_cpu = {.pc=0xe9ce, .a=0x70, .x=0xb8, .y=0xfa, .sp=0x0b, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xf2}, {.addr=0xe9ce, .value=0xe4}, {.addr=0xe9cf, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xe9d0, .a=0xf2, .x=0xb8, .y=0xfa, .sp=0x0b, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xf2}, {.addr=0xe9ce, .value=0xe4}, {.addr=0xe9cf, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9ce, .value=0xe4, .type=IO_READ},
        {.addr=0xe9cf, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037D) {
    const struct CPU_State initial_cpu = {.pc=0xfe4a, .a=0x4e, .x=0x6d, .y=0x5e, .sp=0xfa, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x40}, {.addr=0xfe4a, .value=0xe4}, {.addr=0xfe4b, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xfe4c, .a=0x40, .x=0x6d, .y=0x5e, .sp=0xfa, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x40}, {.addr=0xfe4a, .value=0xe4}, {.addr=0xfe4b, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe4a, .value=0xe4, .type=IO_READ},
        {.addr=0xfe4b, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037E) {
    const struct CPU_State initial_cpu = {.pc=0xaa84, .a=0x26, .x=0xfa, .y=0x0b, .sp=0xb9, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xf1}, {.addr=0xaa84, .value=0xe4}, {.addr=0xaa85, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xaa86, .a=0xf1, .x=0xfa, .y=0x0b, .sp=0xb9, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xf1}, {.addr=0xaa84, .value=0xe4}, {.addr=0xaa85, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa84, .value=0xe4, .type=IO_READ},
        {.addr=0xaa85, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_037F) {
    const struct CPU_State initial_cpu = {.pc=0xbc14, .a=0xcc, .x=0xc9, .y=0x7a, .sp=0x4b, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xe6}, {.addr=0xbc14, .value=0xe4}, {.addr=0xbc15, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xbc16, .a=0xe6, .x=0xc9, .y=0x7a, .sp=0x4b, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xe6}, {.addr=0xbc14, .value=0xe4}, {.addr=0xbc15, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc14, .value=0xe4, .type=IO_READ},
        {.addr=0xbc15, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0380) {
    const struct CPU_State initial_cpu = {.pc=0xf2a9, .a=0xca, .x=0x19, .y=0x64, .sp=0x73, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x18}, {.addr=0xf2a9, .value=0xe4}, {.addr=0xf2aa, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf2ab, .a=0x18, .x=0x19, .y=0x64, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x18}, {.addr=0xf2a9, .value=0xe4}, {.addr=0xf2aa, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a9, .value=0xe4, .type=IO_READ},
        {.addr=0xf2aa, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0381) {
    const struct CPU_State initial_cpu = {.pc=0x7230, .a=0x70, .x=0xc8, .y=0x5a, .sp=0xf2, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x4d}, {.addr=0x7230, .value=0xe4}, {.addr=0x7231, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x7232, .a=0x4d, .x=0xc8, .y=0x5a, .sp=0xf2, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x4d}, {.addr=0x7230, .value=0xe4}, {.addr=0x7231, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7230, .value=0xe4, .type=IO_READ},
        {.addr=0x7231, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0383) {
    const struct CPU_State initial_cpu = {.pc=0x86c5, .a=0x09, .x=0x33, .y=0x6b, .sp=0x15, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xa0}, {.addr=0x86c5, .value=0xe4}, {.addr=0x86c6, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x86c7, .a=0xa0, .x=0x33, .y=0x6b, .sp=0x15, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xa0}, {.addr=0x86c5, .value=0xe4}, {.addr=0x86c6, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x86c5, .value=0xe4, .type=IO_READ},
        {.addr=0x86c6, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0384) {
    const struct CPU_State initial_cpu = {.pc=0x7161, .a=0x6f, .x=0x49, .y=0x3c, .sp=0xea, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xf9}, {.addr=0x7161, .value=0xe4}, {.addr=0x7162, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x7163, .a=0xf9, .x=0x49, .y=0x3c, .sp=0xea, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xf9}, {.addr=0x7161, .value=0xe4}, {.addr=0x7162, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x7161, .value=0xe4, .type=IO_READ},
        {.addr=0x7162, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0385) {
    const struct CPU_State initial_cpu = {.pc=0x78e4, .a=0xb9, .x=0xc7, .y=0x42, .sp=0x90, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xcf}, {.addr=0x78e4, .value=0xe4}, {.addr=0x78e5, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x78e6, .a=0xcf, .x=0xc7, .y=0x42, .sp=0x90, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xcf}, {.addr=0x78e4, .value=0xe4}, {.addr=0x78e5, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x78e4, .value=0xe4, .type=IO_READ},
        {.addr=0x78e5, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3c1b, .a=0xfe, .x=0x26, .y=0xa5, .sp=0x7d, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xb4}, {.addr=0x3c1b, .value=0xe4}, {.addr=0x3c1c, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x3c1d, .a=0xb4, .x=0x26, .y=0xa5, .sp=0x7d, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xb4}, {.addr=0x3c1b, .value=0xe4}, {.addr=0x3c1c, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c1b, .value=0xe4, .type=IO_READ},
        {.addr=0x3c1c, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0387) {
    const struct CPU_State initial_cpu = {.pc=0x0823, .a=0xc6, .x=0xc5, .y=0xa3, .sp=0x5a, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x58}, {.addr=0x0823, .value=0xe4}, {.addr=0x0824, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0825, .a=0x58, .x=0xc5, .y=0xa3, .sp=0x5a, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x58}, {.addr=0x0823, .value=0xe4}, {.addr=0x0824, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0823, .value=0xe4, .type=IO_READ},
        {.addr=0x0824, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0388) {
    const struct CPU_State initial_cpu = {.pc=0x6198, .a=0x3b, .x=0xb0, .y=0x82, .sp=0x08, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x45}, {.addr=0x6198, .value=0xe4}, {.addr=0x6199, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x619a, .a=0x45, .x=0xb0, .y=0x82, .sp=0x08, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x45}, {.addr=0x6198, .value=0xe4}, {.addr=0x6199, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6198, .value=0xe4, .type=IO_READ},
        {.addr=0x6199, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0389) {
    const struct CPU_State initial_cpu = {.pc=0xf58b, .a=0x17, .x=0xe2, .y=0x4f, .sp=0xf4, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0xd3}, {.addr=0xf58b, .value=0xe4}, {.addr=0xf58c, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xf58d, .a=0xd3, .x=0xe2, .y=0x4f, .sp=0xf4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0xd3}, {.addr=0xf58b, .value=0xe4}, {.addr=0xf58c, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xf58b, .value=0xe4, .type=IO_READ},
        {.addr=0xf58c, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038A) {
    const struct CPU_State initial_cpu = {.pc=0x8317, .a=0x70, .x=0xc3, .y=0x55, .sp=0x99, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x8d}, {.addr=0x8317, .value=0xe4}, {.addr=0x8318, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x8319, .a=0x8d, .x=0xc3, .y=0x55, .sp=0x99, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x8d}, {.addr=0x8317, .value=0xe4}, {.addr=0x8318, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8317, .value=0xe4, .type=IO_READ},
        {.addr=0x8318, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038B) {
    const struct CPU_State initial_cpu = {.pc=0x67bf, .a=0xf9, .x=0x2c, .y=0xc2, .sp=0x76, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xaa}, {.addr=0x67bf, .value=0xe4}, {.addr=0x67c0, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x67c1, .a=0xaa, .x=0x2c, .y=0xc2, .sp=0x76, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xaa}, {.addr=0x67bf, .value=0xe4}, {.addr=0x67c0, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x67bf, .value=0xe4, .type=IO_READ},
        {.addr=0x67c0, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038C) {
    const struct CPU_State initial_cpu = {.pc=0x5db9, .a=0x92, .x=0x8e, .y=0x72, .sp=0x8e, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xf3}, {.addr=0x5db9, .value=0xe4}, {.addr=0x5dba, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x5dbb, .a=0xf3, .x=0x8e, .y=0x72, .sp=0x8e, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xf3}, {.addr=0x5db9, .value=0xe4}, {.addr=0x5dba, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5db9, .value=0xe4, .type=IO_READ},
        {.addr=0x5dba, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038D) {
    const struct CPU_State initial_cpu = {.pc=0x5926, .a=0x62, .x=0x56, .y=0x72, .sp=0x19, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x6d}, {.addr=0x5926, .value=0xe4}, {.addr=0x5927, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x5928, .a=0x6d, .x=0x56, .y=0x72, .sp=0x19, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x6d}, {.addr=0x5926, .value=0xe4}, {.addr=0x5927, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x5926, .value=0xe4, .type=IO_READ},
        {.addr=0x5927, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038E) {
    const struct CPU_State initial_cpu = {.pc=0x889a, .a=0x53, .x=0xe7, .y=0xbe, .sp=0xa7, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x46}, {.addr=0x889a, .value=0xe4}, {.addr=0x889b, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x889c, .a=0x46, .x=0xe7, .y=0xbe, .sp=0xa7, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x46}, {.addr=0x889a, .value=0xe4}, {.addr=0x889b, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x889a, .value=0xe4, .type=IO_READ},
        {.addr=0x889b, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_038F) {
    const struct CPU_State initial_cpu = {.pc=0x800c, .a=0xd9, .x=0x42, .y=0xa1, .sp=0xf6, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xef}, {.addr=0x800c, .value=0xe4}, {.addr=0x800d, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x800e, .a=0xef, .x=0x42, .y=0xa1, .sp=0xf6, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xef}, {.addr=0x800c, .value=0xe4}, {.addr=0x800d, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x800c, .value=0xe4, .type=IO_READ},
        {.addr=0x800d, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0390) {
    const struct CPU_State initial_cpu = {.pc=0x8db5, .a=0xb3, .x=0x97, .y=0x13, .sp=0x4c, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x1f}, {.addr=0x8db5, .value=0xe4}, {.addr=0x8db6, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x8db7, .a=0x1f, .x=0x97, .y=0x13, .sp=0x4c, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x1f}, {.addr=0x8db5, .value=0xe4}, {.addr=0x8db6, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8db5, .value=0xe4, .type=IO_READ},
        {.addr=0x8db6, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0391) {
    const struct CPU_State initial_cpu = {.pc=0xcc25, .a=0x02, .x=0x00, .y=0x42, .sp=0xdd, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xb3}, {.addr=0xcc25, .value=0xe4}, {.addr=0xcc26, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xcc27, .a=0xb3, .x=0x00, .y=0x42, .sp=0xdd, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xb3}, {.addr=0xcc25, .value=0xe4}, {.addr=0xcc26, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc25, .value=0xe4, .type=IO_READ},
        {.addr=0xcc26, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0392) {
    const struct CPU_State initial_cpu = {.pc=0x922c, .a=0x2b, .x=0x70, .y=0x1a, .sp=0x6a, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x03}, {.addr=0x922c, .value=0xe4}, {.addr=0x922d, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x922e, .a=0x03, .x=0x70, .y=0x1a, .sp=0x6a, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x03}, {.addr=0x922c, .value=0xe4}, {.addr=0x922d, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x922c, .value=0xe4, .type=IO_READ},
        {.addr=0x922d, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0393) {
    const struct CPU_State initial_cpu = {.pc=0x705d, .a=0xba, .x=0x4d, .y=0x35, .sp=0x45, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xa6}, {.addr=0x705d, .value=0xe4}, {.addr=0x705e, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x705f, .a=0xa6, .x=0x4d, .y=0x35, .sp=0x45, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xa6}, {.addr=0x705d, .value=0xe4}, {.addr=0x705e, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x705d, .value=0xe4, .type=IO_READ},
        {.addr=0x705e, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0394) {
    const struct CPU_State initial_cpu = {.pc=0x4408, .a=0xcd, .x=0x63, .y=0x05, .sp=0x0b, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xde}, {.addr=0x4408, .value=0xe4}, {.addr=0x4409, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x440a, .a=0xde, .x=0x63, .y=0x05, .sp=0x0b, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xde}, {.addr=0x4408, .value=0xe4}, {.addr=0x4409, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4408, .value=0xe4, .type=IO_READ},
        {.addr=0x4409, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0395) {
    const struct CPU_State initial_cpu = {.pc=0x7052, .a=0x76, .x=0xc8, .y=0xef, .sp=0xbd, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x3b}, {.addr=0x7052, .value=0xe4}, {.addr=0x7053, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x7054, .a=0x3b, .x=0xc8, .y=0xef, .sp=0xbd, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x3b}, {.addr=0x7052, .value=0xe4}, {.addr=0x7053, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7052, .value=0xe4, .type=IO_READ},
        {.addr=0x7053, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0396) {
    const struct CPU_State initial_cpu = {.pc=0xf806, .a=0x98, .x=0x4c, .y=0x1d, .sp=0x67, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x6b}, {.addr=0xf806, .value=0xe4}, {.addr=0xf807, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xf808, .a=0x6b, .x=0x4c, .y=0x1d, .sp=0x67, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x6b}, {.addr=0xf806, .value=0xe4}, {.addr=0xf807, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf806, .value=0xe4, .type=IO_READ},
        {.addr=0xf807, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0397) {
    const struct CPU_State initial_cpu = {.pc=0x2c76, .a=0xd3, .x=0x81, .y=0x3d, .sp=0xf1, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x37}, {.addr=0x2c76, .value=0xe4}, {.addr=0x2c77, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x2c78, .a=0x37, .x=0x81, .y=0x3d, .sp=0xf1, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x37}, {.addr=0x2c76, .value=0xe4}, {.addr=0x2c77, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c76, .value=0xe4, .type=IO_READ},
        {.addr=0x2c77, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0398) {
    const struct CPU_State initial_cpu = {.pc=0x3740, .a=0xc4, .x=0x90, .y=0xd9, .sp=0xc8, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xd8}, {.addr=0x3740, .value=0xe4}, {.addr=0x3741, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x3742, .a=0xd8, .x=0x90, .y=0xd9, .sp=0xc8, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xd8}, {.addr=0x3740, .value=0xe4}, {.addr=0x3741, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x3740, .value=0xe4, .type=IO_READ},
        {.addr=0x3741, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_0399) {
    const struct CPU_State initial_cpu = {.pc=0x36a8, .a=0x27, .x=0x9c, .y=0x29, .sp=0x8b, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xe5}, {.addr=0x36a8, .value=0xe4}, {.addr=0x36a9, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x36aa, .a=0xe5, .x=0x9c, .y=0x29, .sp=0x8b, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xe5}, {.addr=0x36a8, .value=0xe4}, {.addr=0x36a9, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x36a8, .value=0xe4, .type=IO_READ},
        {.addr=0x36a9, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039A) {
    const struct CPU_State initial_cpu = {.pc=0x11c9, .a=0xdc, .x=0xaa, .y=0xf9, .sp=0x0c, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x18}, {.addr=0x11c9, .value=0xe4}, {.addr=0x11ca, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x11cb, .a=0x18, .x=0xaa, .y=0xf9, .sp=0x0c, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x18}, {.addr=0x11c9, .value=0xe4}, {.addr=0x11ca, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x11c9, .value=0xe4, .type=IO_READ},
        {.addr=0x11ca, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039B) {
    const struct CPU_State initial_cpu = {.pc=0xccc8, .a=0x82, .x=0x80, .y=0xf8, .sp=0xe1, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xb3}, {.addr=0xccc8, .value=0xe4}, {.addr=0xccc9, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xccca, .a=0xb3, .x=0x80, .y=0xf8, .sp=0xe1, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xb3}, {.addr=0xccc8, .value=0xe4}, {.addr=0xccc9, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xccc8, .value=0xe4, .type=IO_READ},
        {.addr=0xccc9, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039C) {
    const struct CPU_State initial_cpu = {.pc=0x196e, .a=0x7f, .x=0x7f, .y=0x8c, .sp=0xba, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x28}, {.addr=0x196e, .value=0xe4}, {.addr=0x196f, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x1970, .a=0x28, .x=0x7f, .y=0x8c, .sp=0xba, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x28}, {.addr=0x196e, .value=0xe4}, {.addr=0x196f, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x196e, .value=0xe4, .type=IO_READ},
        {.addr=0x196f, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039D) {
    const struct CPU_State initial_cpu = {.pc=0xd655, .a=0x1d, .x=0x97, .y=0x1e, .sp=0x44, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0xb8}, {.addr=0xd655, .value=0xe4}, {.addr=0xd656, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xd657, .a=0xb8, .x=0x97, .y=0x1e, .sp=0x44, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0xb8}, {.addr=0xd655, .value=0xe4}, {.addr=0xd656, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd655, .value=0xe4, .type=IO_READ},
        {.addr=0xd656, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039E) {
    const struct CPU_State initial_cpu = {.pc=0x60eb, .a=0x16, .x=0x66, .y=0xbe, .sp=0xc0, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xcc}, {.addr=0x60eb, .value=0xe4}, {.addr=0x60ec, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x60ed, .a=0xcc, .x=0x66, .y=0xbe, .sp=0xc0, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xcc}, {.addr=0x60eb, .value=0xe4}, {.addr=0x60ec, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x60eb, .value=0xe4, .type=IO_READ},
        {.addr=0x60ec, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe0ee, .a=0x5a, .x=0x63, .y=0x7a, .sp=0x0f, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xbb}, {.addr=0xe0ee, .value=0xe4}, {.addr=0xe0ef, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xe0f0, .a=0xbb, .x=0x63, .y=0x7a, .sp=0x0f, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xbb}, {.addr=0xe0ee, .value=0xe4}, {.addr=0xe0ef, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0ee, .value=0xe4, .type=IO_READ},
        {.addr=0xe0ef, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xc18e, .a=0x34, .x=0x6d, .y=0x5a, .sp=0x08, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x93}, {.addr=0xc18e, .value=0xe4}, {.addr=0xc18f, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xc190, .a=0x93, .x=0x6d, .y=0x5a, .sp=0x08, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x93}, {.addr=0xc18e, .value=0xe4}, {.addr=0xc18f, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc18e, .value=0xe4, .type=IO_READ},
        {.addr=0xc18f, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x6e61, .a=0xdd, .x=0xd9, .y=0xac, .sp=0xe9, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x4d}, {.addr=0x6e61, .value=0xe4}, {.addr=0x6e62, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x6e63, .a=0x4d, .x=0xd9, .y=0xac, .sp=0xe9, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x4d}, {.addr=0x6e61, .value=0xe4}, {.addr=0x6e62, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e61, .value=0xe4, .type=IO_READ},
        {.addr=0x6e62, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2d2d, .a=0x73, .x=0xf9, .y=0x1f, .sp=0x84, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x0b}, {.addr=0x2d2d, .value=0xe4}, {.addr=0x2d2e, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x2d2f, .a=0x0b, .x=0xf9, .y=0x1f, .sp=0x84, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x0b}, {.addr=0x2d2d, .value=0xe4}, {.addr=0x2d2e, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d2d, .value=0xe4, .type=IO_READ},
        {.addr=0x2d2e, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x53ed, .a=0xae, .x=0xbe, .y=0xcc, .sp=0x41, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xe2}, {.addr=0x53ed, .value=0xe4}, {.addr=0x53ee, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x53ef, .a=0xe2, .x=0xbe, .y=0xcc, .sp=0x41, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xe2}, {.addr=0x53ed, .value=0xe4}, {.addr=0x53ee, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x53ed, .value=0xe4, .type=IO_READ},
        {.addr=0x53ee, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xee34, .a=0xaf, .x=0x22, .y=0xee, .sp=0x07, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xa8}, {.addr=0xee34, .value=0xe4}, {.addr=0xee35, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xee36, .a=0xa8, .x=0x22, .y=0xee, .sp=0x07, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xa8}, {.addr=0xee34, .value=0xe4}, {.addr=0xee35, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xee34, .value=0xe4, .type=IO_READ},
        {.addr=0xee35, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x010b, .a=0x32, .x=0x42, .y=0x39, .sp=0x01, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xe4}, {.addr=0x010c, .value=0x1c}, {.addr=0x011c, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x010d, .a=0x45, .x=0x42, .y=0x39, .sp=0x01, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xe4}, {.addr=0x010c, .value=0x1c}, {.addr=0x011c, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x010b, .value=0xe4, .type=IO_READ},
        {.addr=0x010c, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x0e1c, .a=0x73, .x=0x7a, .y=0xce, .sp=0x94, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x7e}, {.addr=0x0e1c, .value=0xe4}, {.addr=0x0e1d, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x0e1e, .a=0x7e, .x=0x7a, .y=0xce, .sp=0x94, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x7e}, {.addr=0x0e1c, .value=0xe4}, {.addr=0x0e1d, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e1c, .value=0xe4, .type=IO_READ},
        {.addr=0x0e1d, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x32d9, .a=0x33, .x=0x8e, .y=0xe4, .sp=0x65, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x2b}, {.addr=0x32d9, .value=0xe4}, {.addr=0x32da, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x32db, .a=0x2b, .x=0x8e, .y=0xe4, .sp=0x65, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x2b}, {.addr=0x32d9, .value=0xe4}, {.addr=0x32da, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x32d9, .value=0xe4, .type=IO_READ},
        {.addr=0x32da, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd4ee, .a=0xd3, .x=0xdf, .y=0xd2, .sp=0x62, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xf3}, {.addr=0xd4ee, .value=0xe4}, {.addr=0xd4ef, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xd4f0, .a=0xf3, .x=0xdf, .y=0xd2, .sp=0x62, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xf3}, {.addr=0xd4ee, .value=0xe4}, {.addr=0xd4ef, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4ee, .value=0xe4, .type=IO_READ},
        {.addr=0xd4ef, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xb08c, .a=0x60, .x=0x08, .y=0xae, .sp=0x01, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x34}, {.addr=0xb08c, .value=0xe4}, {.addr=0xb08d, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xb08e, .a=0x34, .x=0x08, .y=0xae, .sp=0x01, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x34}, {.addr=0xb08c, .value=0xe4}, {.addr=0xb08d, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xb08c, .value=0xe4, .type=IO_READ},
        {.addr=0xb08d, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x9e0e, .a=0xc0, .x=0x08, .y=0x91, .sp=0x29, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xa3}, {.addr=0x9e0e, .value=0xe4}, {.addr=0x9e0f, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x9e10, .a=0xa3, .x=0x08, .y=0x91, .sp=0x29, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xa3}, {.addr=0x9e0e, .value=0xe4}, {.addr=0x9e0f, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e0e, .value=0xe4, .type=IO_READ},
        {.addr=0x9e0f, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x59f2, .a=0x22, .x=0xcc, .y=0x6a, .sp=0x18, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x37}, {.addr=0x59f2, .value=0xe4}, {.addr=0x59f3, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x59f4, .a=0x37, .x=0xcc, .y=0x6a, .sp=0x18, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x37}, {.addr=0x59f2, .value=0xe4}, {.addr=0x59f3, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x59f2, .value=0xe4, .type=IO_READ},
        {.addr=0x59f3, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7135, .a=0x9c, .x=0xf8, .y=0x76, .sp=0x8f, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x22}, {.addr=0x7135, .value=0xe4}, {.addr=0x7136, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x7137, .a=0x22, .x=0xf8, .y=0x76, .sp=0x8f, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x22}, {.addr=0x7135, .value=0xe4}, {.addr=0x7136, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7135, .value=0xe4, .type=IO_READ},
        {.addr=0x7136, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xa74c, .a=0x5f, .x=0xdb, .y=0xc0, .sp=0x38, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xcf}, {.addr=0xa74c, .value=0xe4}, {.addr=0xa74d, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xa74e, .a=0xcf, .x=0xdb, .y=0xc0, .sp=0x38, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xcf}, {.addr=0xa74c, .value=0xe4}, {.addr=0xa74d, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa74c, .value=0xe4, .type=IO_READ},
        {.addr=0xa74d, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x66c0, .a=0x83, .x=0xc9, .y=0x19, .sp=0xe8, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xd8}, {.addr=0x66c0, .value=0xe4}, {.addr=0x66c1, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x66c2, .a=0xd8, .x=0xc9, .y=0x19, .sp=0xe8, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xd8}, {.addr=0x66c0, .value=0xe4}, {.addr=0x66c1, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x66c0, .value=0xe4, .type=IO_READ},
        {.addr=0x66c1, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7451, .a=0xfb, .x=0x96, .y=0x70, .sp=0xe6, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x31}, {.addr=0x7451, .value=0xe4}, {.addr=0x7452, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x7453, .a=0x31, .x=0x96, .y=0x70, .sp=0xe6, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x31}, {.addr=0x7451, .value=0xe4}, {.addr=0x7452, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7451, .value=0xe4, .type=IO_READ},
        {.addr=0x7452, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x27da, .a=0x3f, .x=0x20, .y=0x33, .sp=0x69, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x95}, {.addr=0x27da, .value=0xe4}, {.addr=0x27db, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x27dc, .a=0x95, .x=0x20, .y=0x33, .sp=0x69, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x95}, {.addr=0x27da, .value=0xe4}, {.addr=0x27db, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x27da, .value=0xe4, .type=IO_READ},
        {.addr=0x27db, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x4bf3, .a=0xb3, .x=0x57, .y=0xa7, .sp=0xb8, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x24}, {.addr=0x4bf3, .value=0xe4}, {.addr=0x4bf4, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x4bf5, .a=0x24, .x=0x57, .y=0xa7, .sp=0xb8, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x24}, {.addr=0x4bf3, .value=0xe4}, {.addr=0x4bf4, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bf3, .value=0xe4, .type=IO_READ},
        {.addr=0x4bf4, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x1859, .a=0x2b, .x=0xca, .y=0x3a, .sp=0x65, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x7a}, {.addr=0x1859, .value=0xe4}, {.addr=0x185a, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x185b, .a=0x7a, .x=0xca, .y=0x3a, .sp=0x65, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x7a}, {.addr=0x1859, .value=0xe4}, {.addr=0x185a, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1859, .value=0xe4, .type=IO_READ},
        {.addr=0x185a, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x5b81, .a=0x46, .x=0x3d, .y=0x89, .sp=0xf6, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x71}, {.addr=0x5b81, .value=0xe4}, {.addr=0x5b82, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x5b83, .a=0x71, .x=0x3d, .y=0x89, .sp=0xf6, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x71}, {.addr=0x5b81, .value=0xe4}, {.addr=0x5b82, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b81, .value=0xe4, .type=IO_READ},
        {.addr=0x5b82, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x931a, .a=0xfd, .x=0x5e, .y=0xa0, .sp=0x9b, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x79}, {.addr=0x931a, .value=0xe4}, {.addr=0x931b, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x931c, .a=0x79, .x=0x5e, .y=0xa0, .sp=0x9b, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x79}, {.addr=0x931a, .value=0xe4}, {.addr=0x931b, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x931a, .value=0xe4, .type=IO_READ},
        {.addr=0x931b, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xfe70, .a=0x26, .x=0x20, .y=0xbe, .sp=0x5f, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x52}, {.addr=0xfe70, .value=0xe4}, {.addr=0xfe71, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xfe72, .a=0x52, .x=0x20, .y=0xbe, .sp=0x5f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x52}, {.addr=0xfe70, .value=0xe4}, {.addr=0xfe71, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe70, .value=0xe4, .type=IO_READ},
        {.addr=0xfe71, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x2ffb, .a=0x39, .x=0xe4, .y=0x3c, .sp=0x6b, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x31}, {.addr=0x2ffb, .value=0xe4}, {.addr=0x2ffc, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x2ffd, .a=0x31, .x=0xe4, .y=0x3c, .sp=0x6b, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x31}, {.addr=0x2ffb, .value=0xe4}, {.addr=0x2ffc, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ffb, .value=0xe4, .type=IO_READ},
        {.addr=0x2ffc, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8128, .a=0x5e, .x=0xd2, .y=0x32, .sp=0x09, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xd5}, {.addr=0x8128, .value=0xe4}, {.addr=0x8129, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x812a, .a=0xd5, .x=0xd2, .y=0x32, .sp=0x09, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xd5}, {.addr=0x8128, .value=0xe4}, {.addr=0x8129, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8128, .value=0xe4, .type=IO_READ},
        {.addr=0x8129, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9eb0, .a=0x59, .x=0x81, .y=0x1e, .sp=0x69, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xf1}, {.addr=0x9eb0, .value=0xe4}, {.addr=0x9eb1, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x9eb2, .a=0xf1, .x=0x81, .y=0x1e, .sp=0x69, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xf1}, {.addr=0x9eb0, .value=0xe4}, {.addr=0x9eb1, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9eb0, .value=0xe4, .type=IO_READ},
        {.addr=0x9eb1, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x8df9, .a=0xda, .x=0x08, .y=0xd7, .sp=0x67, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x25}, {.addr=0x8df9, .value=0xe4}, {.addr=0x8dfa, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x8dfb, .a=0x25, .x=0x08, .y=0xd7, .sp=0x67, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x25}, {.addr=0x8df9, .value=0xe4}, {.addr=0x8dfa, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x8df9, .value=0xe4, .type=IO_READ},
        {.addr=0x8dfa, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xf9b2, .a=0x75, .x=0x34, .y=0xf2, .sp=0x63, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x50}, {.addr=0xf9b2, .value=0xe4}, {.addr=0xf9b3, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xf9b4, .a=0x50, .x=0x34, .y=0xf2, .sp=0x63, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x50}, {.addr=0xf9b2, .value=0xe4}, {.addr=0xf9b3, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9b2, .value=0xe4, .type=IO_READ},
        {.addr=0xf9b3, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xee80, .a=0x9e, .x=0x9d, .y=0x5e, .sp=0xb3, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x59}, {.addr=0xee80, .value=0xe4}, {.addr=0xee81, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xee82, .a=0x59, .x=0x9d, .y=0x5e, .sp=0xb3, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x59}, {.addr=0xee80, .value=0xe4}, {.addr=0xee81, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xee80, .value=0xe4, .type=IO_READ},
        {.addr=0xee81, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xb403, .a=0xa6, .x=0xa3, .y=0xd7, .sp=0x9f, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xea}, {.addr=0xb403, .value=0xe4}, {.addr=0xb404, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xb405, .a=0xea, .x=0xa3, .y=0xd7, .sp=0x9f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xea}, {.addr=0xb403, .value=0xe4}, {.addr=0xb404, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb403, .value=0xe4, .type=IO_READ},
        {.addr=0xb404, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x724f, .a=0x0e, .x=0x08, .y=0xdd, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x50}, {.addr=0x724f, .value=0xe4}, {.addr=0x7250, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x7251, .a=0x50, .x=0x08, .y=0xdd, .sp=0x0d, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x50}, {.addr=0x724f, .value=0xe4}, {.addr=0x7250, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x724f, .value=0xe4, .type=IO_READ},
        {.addr=0x7250, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x122a, .a=0x7c, .x=0xb2, .y=0x62, .sp=0x05, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x94}, {.addr=0x122a, .value=0xe4}, {.addr=0x122b, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x122c, .a=0x94, .x=0xb2, .y=0x62, .sp=0x05, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x94}, {.addr=0x122a, .value=0xe4}, {.addr=0x122b, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x122a, .value=0xe4, .type=IO_READ},
        {.addr=0x122b, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xc50a, .a=0x6e, .x=0x14, .y=0x88, .sp=0x50, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xf3}, {.addr=0xc50a, .value=0xe4}, {.addr=0xc50b, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc50c, .a=0xf3, .x=0x14, .y=0x88, .sp=0x50, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xf3}, {.addr=0xc50a, .value=0xe4}, {.addr=0xc50b, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc50a, .value=0xe4, .type=IO_READ},
        {.addr=0xc50b, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x2027, .a=0x87, .x=0xa4, .y=0xd1, .sp=0x15, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x0e}, {.addr=0x2027, .value=0xe4}, {.addr=0x2028, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x2029, .a=0x0e, .x=0xa4, .y=0xd1, .sp=0x15, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x0e}, {.addr=0x2027, .value=0xe4}, {.addr=0x2028, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x2027, .value=0xe4, .type=IO_READ},
        {.addr=0x2028, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x3f2e, .a=0x7f, .x=0xaa, .y=0xde, .sp=0xe4, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xb5}, {.addr=0x3f2e, .value=0xe4}, {.addr=0x3f2f, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x3f30, .a=0xb5, .x=0xaa, .y=0xde, .sp=0xe4, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xb5}, {.addr=0x3f2e, .value=0xe4}, {.addr=0x3f2f, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f2e, .value=0xe4, .type=IO_READ},
        {.addr=0x3f2f, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xe38b, .a=0x3e, .x=0xa0, .y=0xfe, .sp=0xd0, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x54}, {.addr=0xe38b, .value=0xe4}, {.addr=0xe38c, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xe38d, .a=0x54, .x=0xa0, .y=0xfe, .sp=0xd0, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x54}, {.addr=0xe38b, .value=0xe4}, {.addr=0xe38c, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe38b, .value=0xe4, .type=IO_READ},
        {.addr=0xe38c, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xc0e8, .a=0x89, .x=0x0b, .y=0x8b, .sp=0xf3, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x92}, {.addr=0xc0e8, .value=0xe4}, {.addr=0xc0e9, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xc0ea, .a=0x92, .x=0x0b, .y=0x8b, .sp=0xf3, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x92}, {.addr=0xc0e8, .value=0xe4}, {.addr=0xc0e9, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0e8, .value=0xe4, .type=IO_READ},
        {.addr=0xc0e9, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x8b9b, .a=0xa6, .x=0xb2, .y=0x78, .sp=0x7c, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xa6}, {.addr=0x8b9b, .value=0xe4}, {.addr=0x8b9c, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x8b9d, .a=0xa6, .x=0xb2, .y=0x78, .sp=0x7c, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xa6}, {.addr=0x8b9b, .value=0xe4}, {.addr=0x8b9c, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b9b, .value=0xe4, .type=IO_READ},
        {.addr=0x8b9c, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x2720, .a=0xe6, .x=0xb4, .y=0xa3, .sp=0x64, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x85}, {.addr=0x2720, .value=0xe4}, {.addr=0x2721, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x2722, .a=0x85, .x=0xb4, .y=0xa3, .sp=0x64, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x85}, {.addr=0x2720, .value=0xe4}, {.addr=0x2721, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x2720, .value=0xe4, .type=IO_READ},
        {.addr=0x2721, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x7baa, .a=0x2c, .x=0xc9, .y=0xe9, .sp=0x87, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xf0}, {.addr=0x7baa, .value=0xe4}, {.addr=0x7bab, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x7bac, .a=0xf0, .x=0xc9, .y=0xe9, .sp=0x87, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xf0}, {.addr=0x7baa, .value=0xe4}, {.addr=0x7bab, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7baa, .value=0xe4, .type=IO_READ},
        {.addr=0x7bab, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x4ba9, .a=0x18, .x=0x74, .y=0xe2, .sp=0x83, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x09}, {.addr=0x4ba9, .value=0xe4}, {.addr=0x4baa, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x4bab, .a=0x09, .x=0x74, .y=0xe2, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x09}, {.addr=0x4ba9, .value=0xe4}, {.addr=0x4baa, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ba9, .value=0xe4, .type=IO_READ},
        {.addr=0x4baa, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3809, .a=0x59, .x=0x90, .y=0x55, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xa5}, {.addr=0x3809, .value=0xe4}, {.addr=0x380a, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x380b, .a=0xa5, .x=0x90, .y=0x55, .sp=0x65, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xa5}, {.addr=0x3809, .value=0xe4}, {.addr=0x380a, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3809, .value=0xe4, .type=IO_READ},
        {.addr=0x380a, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xca39, .a=0x04, .x=0x1d, .y=0x20, .sp=0x9a, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xa4}, {.addr=0xca39, .value=0xe4}, {.addr=0xca3a, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xca3b, .a=0xa4, .x=0x1d, .y=0x20, .sp=0x9a, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xa4}, {.addr=0xca39, .value=0xe4}, {.addr=0xca3a, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xca39, .value=0xe4, .type=IO_READ},
        {.addr=0xca3a, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x4ddb, .a=0xad, .x=0x9b, .y=0x7d, .sp=0xab, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x1f}, {.addr=0x4ddb, .value=0xe4}, {.addr=0x4ddc, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x4ddd, .a=0x1f, .x=0x9b, .y=0x7d, .sp=0xab, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x1f}, {.addr=0x4ddb, .value=0xe4}, {.addr=0x4ddc, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ddb, .value=0xe4, .type=IO_READ},
        {.addr=0x4ddc, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x3613, .a=0x8c, .x=0xcc, .y=0x55, .sp=0x24, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x6e}, {.addr=0x3613, .value=0xe4}, {.addr=0x3614, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x3615, .a=0x6e, .x=0xcc, .y=0x55, .sp=0x24, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x6e}, {.addr=0x3613, .value=0xe4}, {.addr=0x3614, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3613, .value=0xe4, .type=IO_READ},
        {.addr=0x3614, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x1574, .a=0x52, .x=0x7b, .y=0xe6, .sp=0xeb, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x6a}, {.addr=0x1574, .value=0xe4}, {.addr=0x1575, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x1576, .a=0x6a, .x=0x7b, .y=0xe6, .sp=0xeb, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x6a}, {.addr=0x1574, .value=0xe4}, {.addr=0x1575, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1574, .value=0xe4, .type=IO_READ},
        {.addr=0x1575, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xee70, .a=0xe1, .x=0x61, .y=0x58, .sp=0x38, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x3c}, {.addr=0xee70, .value=0xe4}, {.addr=0xee71, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xee72, .a=0x3c, .x=0x61, .y=0x58, .sp=0x38, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x3c}, {.addr=0xee70, .value=0xe4}, {.addr=0xee71, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xee70, .value=0xe4, .type=IO_READ},
        {.addr=0xee71, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa2c0, .a=0xf0, .x=0x0e, .y=0x80, .sp=0x94, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x74}, {.addr=0xa2c0, .value=0xe4}, {.addr=0xa2c1, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xa2c2, .a=0x74, .x=0x0e, .y=0x80, .sp=0x94, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x74}, {.addr=0xa2c0, .value=0xe4}, {.addr=0xa2c1, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2c0, .value=0xe4, .type=IO_READ},
        {.addr=0xa2c1, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb13f, .a=0x42, .x=0xa4, .y=0x11, .sp=0x64, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xf3}, {.addr=0xb13f, .value=0xe4}, {.addr=0xb140, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xb141, .a=0xf3, .x=0xa4, .y=0x11, .sp=0x64, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xf3}, {.addr=0xb13f, .value=0xe4}, {.addr=0xb140, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xb13f, .value=0xe4, .type=IO_READ},
        {.addr=0xb140, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0x0d, .x=0x2e, .y=0xcb, .sp=0x99, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xf2}, {.addr=0x6392, .value=0xe4}, {.addr=0x6393, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x6394, .a=0xf2, .x=0x2e, .y=0xcb, .sp=0x99, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xf2}, {.addr=0x6392, .value=0xe4}, {.addr=0x6393, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0xe4, .type=IO_READ},
        {.addr=0x6393, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x430e, .a=0x74, .x=0xff, .y=0xab, .sp=0x72, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x7d}, {.addr=0x430e, .value=0xe4}, {.addr=0x430f, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x4310, .a=0x7d, .x=0xff, .y=0xab, .sp=0x72, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x7d}, {.addr=0x430e, .value=0xe4}, {.addr=0x430f, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x430e, .value=0xe4, .type=IO_READ},
        {.addr=0x430f, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7bc9, .a=0x04, .x=0x60, .y=0x4d, .sp=0xa2, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x01}, {.addr=0x7bc9, .value=0xe4}, {.addr=0x7bca, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x7bcb, .a=0x01, .x=0x60, .y=0x4d, .sp=0xa2, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x01}, {.addr=0x7bc9, .value=0xe4}, {.addr=0x7bca, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bc9, .value=0xe4, .type=IO_READ},
        {.addr=0x7bca, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x10c6, .a=0xec, .x=0x95, .y=0x0f, .sp=0xe3, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x37}, {.addr=0x10c6, .value=0xe4}, {.addr=0x10c7, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x10c8, .a=0x37, .x=0x95, .y=0x0f, .sp=0xe3, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x37}, {.addr=0x10c6, .value=0xe4}, {.addr=0x10c7, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x10c6, .value=0xe4, .type=IO_READ},
        {.addr=0x10c7, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x788d, .a=0x0c, .x=0x09, .y=0x03, .sp=0xba, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x11}, {.addr=0x788d, .value=0xe4}, {.addr=0x788e, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x788f, .a=0x11, .x=0x09, .y=0x03, .sp=0xba, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x11}, {.addr=0x788d, .value=0xe4}, {.addr=0x788e, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x788d, .value=0xe4, .type=IO_READ},
        {.addr=0x788e, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x5214, .a=0x0e, .x=0x1c, .y=0x24, .sp=0x7a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x72}, {.addr=0x5214, .value=0xe4}, {.addr=0x5215, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x5216, .a=0x72, .x=0x1c, .y=0x24, .sp=0x7a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x72}, {.addr=0x5214, .value=0xe4}, {.addr=0x5215, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x5214, .value=0xe4, .type=IO_READ},
        {.addr=0x5215, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x9371, .a=0x6f, .x=0xfe, .y=0x19, .sp=0xf0, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xa5}, {.addr=0x9371, .value=0xe4}, {.addr=0x9372, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x9373, .a=0xa5, .x=0xfe, .y=0x19, .sp=0xf0, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xa5}, {.addr=0x9371, .value=0xe4}, {.addr=0x9372, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x9371, .value=0xe4, .type=IO_READ},
        {.addr=0x9372, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xbdf5, .a=0x1e, .x=0x74, .y=0x1f, .sp=0xd9, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xbc}, {.addr=0xbdf5, .value=0xe4}, {.addr=0xbdf6, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xbdf7, .a=0xbc, .x=0x74, .y=0x1f, .sp=0xd9, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xbc}, {.addr=0xbdf5, .value=0xe4}, {.addr=0xbdf6, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdf5, .value=0xe4, .type=IO_READ},
        {.addr=0xbdf6, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xacc8, .a=0xcc, .x=0xbd, .y=0xce, .sp=0xf7, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x46}, {.addr=0xacc8, .value=0xe4}, {.addr=0xacc9, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xacca, .a=0x46, .x=0xbd, .y=0xce, .sp=0xf7, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x46}, {.addr=0xacc8, .value=0xe4}, {.addr=0xacc9, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xacc8, .value=0xe4, .type=IO_READ},
        {.addr=0xacc9, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x08d4, .a=0x5d, .x=0xbc, .y=0xfd, .sp=0x7a, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x2d}, {.addr=0x08d4, .value=0xe4}, {.addr=0x08d5, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x08d6, .a=0x2d, .x=0xbc, .y=0xfd, .sp=0x7a, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x2d}, {.addr=0x08d4, .value=0xe4}, {.addr=0x08d5, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x08d4, .value=0xe4, .type=IO_READ},
        {.addr=0x08d5, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x63f2, .a=0xe2, .x=0xb9, .y=0xe2, .sp=0xa3, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0x63f2, .value=0xe4}, {.addr=0x63f3, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x63f4, .a=0xc7, .x=0xb9, .y=0xe2, .sp=0xa3, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0x63f2, .value=0xe4}, {.addr=0x63f3, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x63f2, .value=0xe4, .type=IO_READ},
        {.addr=0x63f3, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x99e1, .a=0x61, .x=0x31, .y=0xa4, .sp=0x9f, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x37}, {.addr=0x99e1, .value=0xe4}, {.addr=0x99e2, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x99e3, .a=0x37, .x=0x31, .y=0xa4, .sp=0x9f, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x37}, {.addr=0x99e1, .value=0xe4}, {.addr=0x99e2, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x99e1, .value=0xe4, .type=IO_READ},
        {.addr=0x99e2, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0f4b, .a=0xcf, .x=0xc7, .y=0x1b, .sp=0xe1, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x9e}, {.addr=0x0f4b, .value=0xe4}, {.addr=0x0f4c, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x0f4d, .a=0x9e, .x=0xc7, .y=0x1b, .sp=0xe1, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x9e}, {.addr=0x0f4b, .value=0xe4}, {.addr=0x0f4c, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f4b, .value=0xe4, .type=IO_READ},
        {.addr=0x0f4c, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x9b8c, .a=0x5a, .x=0x32, .y=0x15, .sp=0x93, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x40}, {.addr=0x9b8c, .value=0xe4}, {.addr=0x9b8d, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x9b8e, .a=0x40, .x=0x32, .y=0x15, .sp=0x93, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x40}, {.addr=0x9b8c, .value=0xe4}, {.addr=0x9b8d, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b8c, .value=0xe4, .type=IO_READ},
        {.addr=0x9b8d, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xc218, .a=0x80, .x=0xcb, .y=0xdd, .sp=0x67, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xae}, {.addr=0xc218, .value=0xe4}, {.addr=0xc219, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xc21a, .a=0xae, .x=0xcb, .y=0xdd, .sp=0x67, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xae}, {.addr=0xc218, .value=0xe4}, {.addr=0xc219, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xc218, .value=0xe4, .type=IO_READ},
        {.addr=0xc219, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x3c22, .a=0x9e, .x=0x78, .y=0x5c, .sp=0x66, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0xd7}, {.addr=0x3c22, .value=0xe4}, {.addr=0x3c23, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x3c24, .a=0xd7, .x=0x78, .y=0x5c, .sp=0x66, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0xd7}, {.addr=0x3c22, .value=0xe4}, {.addr=0x3c23, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c22, .value=0xe4, .type=IO_READ},
        {.addr=0x3c23, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x38d4, .a=0x46, .x=0x65, .y=0x57, .sp=0xd8, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xaa}, {.addr=0x38d4, .value=0xe4}, {.addr=0x38d5, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x38d6, .a=0xaa, .x=0x65, .y=0x57, .sp=0xd8, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xaa}, {.addr=0x38d4, .value=0xe4}, {.addr=0x38d5, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x38d4, .value=0xe4, .type=IO_READ},
        {.addr=0x38d5, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xef93, .a=0x51, .x=0xfc, .y=0x48, .sp=0xdd, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x9e}, {.addr=0xef93, .value=0xe4}, {.addr=0xef94, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xef95, .a=0x9e, .x=0xfc, .y=0x48, .sp=0xdd, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x9e}, {.addr=0xef93, .value=0xe4}, {.addr=0xef94, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xef93, .value=0xe4, .type=IO_READ},
        {.addr=0xef94, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xdd01, .a=0x6d, .x=0x8c, .y=0x5c, .sp=0x9d, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x1d}, {.addr=0xdd01, .value=0xe4}, {.addr=0xdd02, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xdd03, .a=0x1d, .x=0x8c, .y=0x5c, .sp=0x9d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x1d}, {.addr=0xdd01, .value=0xe4}, {.addr=0xdd02, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd01, .value=0xe4, .type=IO_READ},
        {.addr=0xdd02, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x68ed, .a=0xc9, .x=0xc9, .y=0x99, .sp=0x8c, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x8f}, {.addr=0x68ed, .value=0xe4}, {.addr=0x68ee, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x68ef, .a=0x8f, .x=0xc9, .y=0x99, .sp=0x8c, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x8f}, {.addr=0x68ed, .value=0xe4}, {.addr=0x68ee, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x68ed, .value=0xe4, .type=IO_READ},
        {.addr=0x68ee, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E4, _E4_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xcb05, .a=0x41, .x=0x69, .y=0x8a, .sp=0x16, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xb1}, {.addr=0xcb05, .value=0xe4}, {.addr=0xcb06, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xcb07, .a=0xb1, .x=0x69, .y=0x8a, .sp=0x16, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xb1}, {.addr=0xcb05, .value=0xe4}, {.addr=0xcb06, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb05, .value=0xe4, .type=IO_READ},
        {.addr=0xcb06, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E4 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
