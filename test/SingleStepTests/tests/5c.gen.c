#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_5C, _5C_0000) {
    const struct CPU_State initial_cpu = {.pc=0x2705, .a=0xda, .x=0xcf, .y=0x69, .sp=0xf1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2705, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2706, .a=0x6d, .x=0xcf, .y=0x69, .sp=0xf1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2705, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2705, .value=0x5c, .type=IO_READ},
        {.addr=0x2706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0001) {
    const struct CPU_State initial_cpu = {.pc=0x4161, .a=0xe9, .x=0xce, .y=0xcc, .sp=0x9f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4161, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4162, .a=0x74, .x=0xce, .y=0xcc, .sp=0x9f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4161, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4161, .value=0x5c, .type=IO_READ},
        {.addr=0x4162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0002) {
    const struct CPU_State initial_cpu = {.pc=0xc5aa, .a=0xa8, .x=0xb6, .y=0x7d, .sp=0xcf, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc5aa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc5ab, .a=0x54, .x=0xb6, .y=0x7d, .sp=0xcf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc5aa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc5aa, .value=0x5c, .type=IO_READ},
        {.addr=0xc5ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0003) {
    const struct CPU_State initial_cpu = {.pc=0x704d, .a=0xf3, .x=0xc7, .y=0xa3, .sp=0xb4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x704d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x704e, .a=0x79, .x=0xc7, .y=0xa3, .sp=0xb4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x704d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x704d, .value=0x5c, .type=IO_READ},
        {.addr=0x704e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0004) {
    const struct CPU_State initial_cpu = {.pc=0xcb07, .a=0x8c, .x=0x1a, .y=0x74, .sp=0xc9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xcb07, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcb08, .a=0x46, .x=0x1a, .y=0x74, .sp=0xc9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xcb07, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcb07, .value=0x5c, .type=IO_READ},
        {.addr=0xcb08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0005) {
    const struct CPU_State initial_cpu = {.pc=0xe5c4, .a=0x5b, .x=0x1d, .y=0xf0, .sp=0x78, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe5c5, .a=0x2d, .x=0x1d, .y=0xf0, .sp=0x78, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe5c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe5c4, .value=0x5c, .type=IO_READ},
        {.addr=0xe5c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb220, .a=0xb6, .x=0x65, .y=0x5b, .sp=0xe4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb220, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb221, .a=0x5b, .x=0x65, .y=0x5b, .sp=0xe4, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb220, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb220, .value=0x5c, .type=IO_READ},
        {.addr=0xb221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0007) {
    const struct CPU_State initial_cpu = {.pc=0x3f7c, .a=0x21, .x=0x2d, .y=0x83, .sp=0x70, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3f7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3f7d, .a=0x10, .x=0x2d, .y=0x83, .sp=0x70, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3f7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3f7c, .value=0x5c, .type=IO_READ},
        {.addr=0x3f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0008) {
    const struct CPU_State initial_cpu = {.pc=0x6deb, .a=0x14, .x=0x5e, .y=0x5a, .sp=0xf3, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6deb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6dec, .a=0x0a, .x=0x5e, .y=0x5a, .sp=0xf3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6deb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6deb, .value=0x5c, .type=IO_READ},
        {.addr=0x6dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0009) {
    const struct CPU_State initial_cpu = {.pc=0x6146, .a=0x14, .x=0x3e, .y=0xa3, .sp=0x3f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6146, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6147, .a=0x0a, .x=0x3e, .y=0xa3, .sp=0x3f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6146, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6146, .value=0x5c, .type=IO_READ},
        {.addr=0x6147, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000A) {
    const struct CPU_State initial_cpu = {.pc=0xf47f, .a=0x66, .x=0x65, .y=0x0c, .sp=0xbf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf47f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf480, .a=0x33, .x=0x65, .y=0x0c, .sp=0xbf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf47f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf47f, .value=0x5c, .type=IO_READ},
        {.addr=0xf480, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000B) {
    const struct CPU_State initial_cpu = {.pc=0xde94, .a=0xb0, .x=0x70, .y=0xb4, .sp=0x5d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xde94, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xde95, .a=0x58, .x=0x70, .y=0xb4, .sp=0x5d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xde94, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xde94, .value=0x5c, .type=IO_READ},
        {.addr=0xde95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000C) {
    const struct CPU_State initial_cpu = {.pc=0x063c, .a=0xec, .x=0x49, .y=0x8d, .sp=0x47, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x063c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x063d, .a=0x76, .x=0x49, .y=0x8d, .sp=0x47, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x063c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x063c, .value=0x5c, .type=IO_READ},
        {.addr=0x063d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000D) {
    const struct CPU_State initial_cpu = {.pc=0x6005, .a=0xc6, .x=0x45, .y=0x00, .sp=0x9c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6005, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6006, .a=0x63, .x=0x45, .y=0x00, .sp=0x9c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6005, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6005, .value=0x5c, .type=IO_READ},
        {.addr=0x6006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000E) {
    const struct CPU_State initial_cpu = {.pc=0x1b26, .a=0x53, .x=0xfe, .y=0x80, .sp=0x78, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1b26, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1b27, .a=0x29, .x=0xfe, .y=0x80, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1b26, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1b26, .value=0x5c, .type=IO_READ},
        {.addr=0x1b27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_000F) {
    const struct CPU_State initial_cpu = {.pc=0xeed4, .a=0x24, .x=0xbe, .y=0xc9, .sp=0x07, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xeed4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeed5, .a=0x12, .x=0xbe, .y=0xc9, .sp=0x07, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xeed4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeed4, .value=0x5c, .type=IO_READ},
        {.addr=0xeed5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0010) {
    const struct CPU_State initial_cpu = {.pc=0xbb40, .a=0x73, .x=0x9c, .y=0xb7, .sp=0xdf, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbb40, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbb41, .a=0x39, .x=0x9c, .y=0xb7, .sp=0xdf, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbb40, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbb40, .value=0x5c, .type=IO_READ},
        {.addr=0xbb41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0011) {
    const struct CPU_State initial_cpu = {.pc=0x29ce, .a=0x18, .x=0x7e, .y=0xef, .sp=0xd0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x29ce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x29cf, .a=0x0c, .x=0x7e, .y=0xef, .sp=0xd0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x29ce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x29ce, .value=0x5c, .type=IO_READ},
        {.addr=0x29cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0012) {
    const struct CPU_State initial_cpu = {.pc=0x2e60, .a=0x59, .x=0xa3, .y=0xbd, .sp=0xa1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2e60, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2e61, .a=0x2c, .x=0xa3, .y=0xbd, .sp=0xa1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2e60, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2e60, .value=0x5c, .type=IO_READ},
        {.addr=0x2e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0013) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0x65, .x=0xd5, .y=0x83, .sp=0x0a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xf66b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf66c, .a=0x32, .x=0xd5, .y=0x83, .sp=0x0a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf66b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0x5c, .type=IO_READ},
        {.addr=0xf66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0014) {
    const struct CPU_State initial_cpu = {.pc=0xd909, .a=0xd8, .x=0x87, .y=0x5b, .sp=0xc9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd909, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd90a, .a=0x6c, .x=0x87, .y=0x5b, .sp=0xc9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd909, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd909, .value=0x5c, .type=IO_READ},
        {.addr=0xd90a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0015) {
    const struct CPU_State initial_cpu = {.pc=0x863c, .a=0x55, .x=0x7e, .y=0xc0, .sp=0x04, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x863c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x863d, .a=0x2a, .x=0x7e, .y=0xc0, .sp=0x04, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x863c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x863c, .value=0x5c, .type=IO_READ},
        {.addr=0x863d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0016) {
    const struct CPU_State initial_cpu = {.pc=0xea54, .a=0x1c, .x=0x16, .y=0x4b, .sp=0x86, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xea54, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xea55, .a=0x0e, .x=0x16, .y=0x4b, .sp=0x86, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xea54, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xea54, .value=0x5c, .type=IO_READ},
        {.addr=0xea55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0017) {
    const struct CPU_State initial_cpu = {.pc=0x5cbe, .a=0x2e, .x=0xea, .y=0x54, .sp=0x42, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5cbf, .a=0x17, .x=0xea, .y=0x54, .sp=0x42, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5cbe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5cbe, .value=0x5c, .type=IO_READ},
        {.addr=0x5cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0018) {
    const struct CPU_State initial_cpu = {.pc=0x3603, .a=0x40, .x=0x91, .y=0x70, .sp=0x42, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3603, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3604, .a=0x20, .x=0x91, .y=0x70, .sp=0x42, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3603, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3603, .value=0x5c, .type=IO_READ},
        {.addr=0x3604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0019) {
    const struct CPU_State initial_cpu = {.pc=0x258d, .a=0x13, .x=0x25, .y=0x3d, .sp=0x84, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x258d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x258e, .a=0x09, .x=0x25, .y=0x3d, .sp=0x84, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x258d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x258d, .value=0x5c, .type=IO_READ},
        {.addr=0x258e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001A) {
    const struct CPU_State initial_cpu = {.pc=0xc8a9, .a=0xfd, .x=0x75, .y=0x56, .sp=0x8e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc8aa, .a=0x7e, .x=0x75, .y=0x56, .sp=0x8e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc8a9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc8a9, .value=0x5c, .type=IO_READ},
        {.addr=0xc8aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001B) {
    const struct CPU_State initial_cpu = {.pc=0x93f7, .a=0x47, .x=0xdf, .y=0x05, .sp=0xbb, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x93f7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x93f8, .a=0x23, .x=0xdf, .y=0x05, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x93f7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x93f7, .value=0x5c, .type=IO_READ},
        {.addr=0x93f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001C) {
    const struct CPU_State initial_cpu = {.pc=0x9288, .a=0xa1, .x=0xef, .y=0xac, .sp=0x15, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x9288, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9289, .a=0x50, .x=0xef, .y=0xac, .sp=0x15, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9288, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9288, .value=0x5c, .type=IO_READ},
        {.addr=0x9289, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001D) {
    const struct CPU_State initial_cpu = {.pc=0xdc95, .a=0xdf, .x=0x7b, .y=0x3a, .sp=0xb9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xdc95, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdc96, .a=0x6f, .x=0x7b, .y=0x3a, .sp=0xb9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdc95, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdc95, .value=0x5c, .type=IO_READ},
        {.addr=0xdc96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001E) {
    const struct CPU_State initial_cpu = {.pc=0x1360, .a=0x58, .x=0x8b, .y=0x57, .sp=0xd1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1360, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1361, .a=0x2c, .x=0x8b, .y=0x57, .sp=0xd1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1360, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1360, .value=0x5c, .type=IO_READ},
        {.addr=0x1361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_001F) {
    const struct CPU_State initial_cpu = {.pc=0x9c60, .a=0x5c, .x=0x64, .y=0xe3, .sp=0xb2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9c60, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9c61, .a=0x2e, .x=0x64, .y=0xe3, .sp=0xb2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9c60, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9c60, .value=0x5c, .type=IO_READ},
        {.addr=0x9c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5925, .a=0x17, .x=0x80, .y=0xae, .sp=0x23, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5925, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5926, .a=0x0b, .x=0x80, .y=0xae, .sp=0x23, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5925, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5925, .value=0x5c, .type=IO_READ},
        {.addr=0x5926, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3254, .a=0xa4, .x=0xea, .y=0x47, .sp=0x64, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x3254, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3255, .a=0x52, .x=0xea, .y=0x47, .sp=0x64, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3254, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3254, .value=0x5c, .type=IO_READ},
        {.addr=0x3255, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0022) {
    const struct CPU_State initial_cpu = {.pc=0x95ab, .a=0x43, .x=0xe6, .y=0x6b, .sp=0xf0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x95ab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x95ac, .a=0x21, .x=0xe6, .y=0x6b, .sp=0xf0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x95ab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x95ab, .value=0x5c, .type=IO_READ},
        {.addr=0x95ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0023) {
    const struct CPU_State initial_cpu = {.pc=0xd83b, .a=0x4f, .x=0x59, .y=0x5f, .sp=0xcd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd83b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd83c, .a=0x27, .x=0x59, .y=0x5f, .sp=0xcd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd83b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd83b, .value=0x5c, .type=IO_READ},
        {.addr=0xd83c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0024) {
    const struct CPU_State initial_cpu = {.pc=0xeed3, .a=0x70, .x=0x02, .y=0x33, .sp=0x71, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xeed3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeed4, .a=0x38, .x=0x02, .y=0x33, .sp=0x71, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xeed3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeed3, .value=0x5c, .type=IO_READ},
        {.addr=0xeed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0025) {
    const struct CPU_State initial_cpu = {.pc=0x06da, .a=0x3b, .x=0x14, .y=0x30, .sp=0xf5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x06da, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x06db, .a=0x1d, .x=0x14, .y=0x30, .sp=0xf5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x06da, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x06da, .value=0x5c, .type=IO_READ},
        {.addr=0x06db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0026) {
    const struct CPU_State initial_cpu = {.pc=0xad82, .a=0xe0, .x=0x54, .y=0xfd, .sp=0xf9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xad82, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xad83, .a=0x70, .x=0x54, .y=0xfd, .sp=0xf9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xad82, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xad82, .value=0x5c, .type=IO_READ},
        {.addr=0xad83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0027) {
    const struct CPU_State initial_cpu = {.pc=0xa3c4, .a=0x41, .x=0x31, .y=0xa4, .sp=0xe6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa3c5, .a=0x20, .x=0x31, .y=0xa4, .sp=0xe6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa3c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa3c4, .value=0x5c, .type=IO_READ},
        {.addr=0xa3c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0028) {
    const struct CPU_State initial_cpu = {.pc=0xaf3d, .a=0xbf, .x=0x35, .y=0x2e, .sp=0x24, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xaf3d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaf3e, .a=0x5f, .x=0x35, .y=0x2e, .sp=0x24, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xaf3d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaf3d, .value=0x5c, .type=IO_READ},
        {.addr=0xaf3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0029) {
    const struct CPU_State initial_cpu = {.pc=0x9f3e, .a=0xf8, .x=0xf7, .y=0x5f, .sp=0x6c, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9f3e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9f3f, .a=0x7c, .x=0xf7, .y=0x5f, .sp=0x6c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9f3e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9f3e, .value=0x5c, .type=IO_READ},
        {.addr=0x9f3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002A) {
    const struct CPU_State initial_cpu = {.pc=0xc4ba, .a=0x0a, .x=0xa0, .y=0x4f, .sp=0x2a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ba, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc4bb, .a=0x05, .x=0xa0, .y=0x4f, .sp=0x2a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc4ba, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc4ba, .value=0x5c, .type=IO_READ},
        {.addr=0xc4bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002B) {
    const struct CPU_State initial_cpu = {.pc=0x3f74, .a=0x97, .x=0x0c, .y=0x5f, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3f74, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3f75, .a=0x4b, .x=0x0c, .y=0x5f, .sp=0x8b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3f74, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3f74, .value=0x5c, .type=IO_READ},
        {.addr=0x3f75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002C) {
    const struct CPU_State initial_cpu = {.pc=0x82dd, .a=0xa1, .x=0x95, .y=0x9d, .sp=0xb7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x82dd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x82de, .a=0x50, .x=0x95, .y=0x9d, .sp=0xb7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x82dd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x82dd, .value=0x5c, .type=IO_READ},
        {.addr=0x82de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002D) {
    const struct CPU_State initial_cpu = {.pc=0x0166, .a=0x62, .x=0x9f, .y=0x31, .sp=0x6b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0167, .a=0x31, .x=0x9f, .y=0x31, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0166, .value=0x5c, .type=IO_READ},
        {.addr=0x0167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002E) {
    const struct CPU_State initial_cpu = {.pc=0x3d09, .a=0x92, .x=0x4b, .y=0x40, .sp=0x71, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3d09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3d0a, .a=0x49, .x=0x4b, .y=0x40, .sp=0x71, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3d09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3d09, .value=0x5c, .type=IO_READ},
        {.addr=0x3d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_002F) {
    const struct CPU_State initial_cpu = {.pc=0x608a, .a=0x71, .x=0x95, .y=0xcd, .sp=0xe8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x608a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x608b, .a=0x38, .x=0x95, .y=0xcd, .sp=0xe8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x608a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x608a, .value=0x5c, .type=IO_READ},
        {.addr=0x608b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0030) {
    const struct CPU_State initial_cpu = {.pc=0x73a1, .a=0x05, .x=0x13, .y=0xe5, .sp=0x35, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x73a1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x73a2, .a=0x02, .x=0x13, .y=0xe5, .sp=0x35, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x73a1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x73a1, .value=0x5c, .type=IO_READ},
        {.addr=0x73a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0031) {
    const struct CPU_State initial_cpu = {.pc=0x4758, .a=0x8a, .x=0x3b, .y=0xa3, .sp=0xbc, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4758, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4759, .a=0x45, .x=0x3b, .y=0xa3, .sp=0xbc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4758, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4758, .value=0x5c, .type=IO_READ},
        {.addr=0x4759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0032) {
    const struct CPU_State initial_cpu = {.pc=0x745f, .a=0x46, .x=0xbc, .y=0x97, .sp=0x49, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x745f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7460, .a=0x23, .x=0xbc, .y=0x97, .sp=0x49, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x745f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x745f, .value=0x5c, .type=IO_READ},
        {.addr=0x7460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0033) {
    const struct CPU_State initial_cpu = {.pc=0x435d, .a=0x60, .x=0xfa, .y=0x14, .sp=0x95, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x435d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x435e, .a=0x30, .x=0xfa, .y=0x14, .sp=0x95, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x435d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x435d, .value=0x5c, .type=IO_READ},
        {.addr=0x435e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0034) {
    const struct CPU_State initial_cpu = {.pc=0x4829, .a=0x9e, .x=0xcd, .y=0x8d, .sp=0xec, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4829, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x482a, .a=0x4f, .x=0xcd, .y=0x8d, .sp=0xec, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4829, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4829, .value=0x5c, .type=IO_READ},
        {.addr=0x482a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0035) {
    const struct CPU_State initial_cpu = {.pc=0xe3b6, .a=0x2d, .x=0x47, .y=0x6f, .sp=0xcb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe3b6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe3b7, .a=0x16, .x=0x47, .y=0x6f, .sp=0xcb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe3b6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe3b6, .value=0x5c, .type=IO_READ},
        {.addr=0xe3b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0036) {
    const struct CPU_State initial_cpu = {.pc=0x7507, .a=0xc9, .x=0x62, .y=0xa4, .sp=0x3b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x7507, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7508, .a=0x64, .x=0x62, .y=0xa4, .sp=0x3b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7507, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7507, .value=0x5c, .type=IO_READ},
        {.addr=0x7508, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0037) {
    const struct CPU_State initial_cpu = {.pc=0xb382, .a=0x00, .x=0x9a, .y=0x09, .sp=0x37, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb382, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb383, .a=0x00, .x=0x9a, .y=0x09, .sp=0x37, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xb382, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb382, .value=0x5c, .type=IO_READ},
        {.addr=0xb383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0038) {
    const struct CPU_State initial_cpu = {.pc=0x7152, .a=0xff, .x=0xdc, .y=0x44, .sp=0xea, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7152, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7153, .a=0x7f, .x=0xdc, .y=0x44, .sp=0xea, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7152, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7152, .value=0x5c, .type=IO_READ},
        {.addr=0x7153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0039) {
    const struct CPU_State initial_cpu = {.pc=0x04a6, .a=0xfe, .x=0xb1, .y=0xec, .sp=0xf5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x04a6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x04a7, .a=0x7f, .x=0xb1, .y=0xec, .sp=0xf5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x04a6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x04a6, .value=0x5c, .type=IO_READ},
        {.addr=0x04a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003A) {
    const struct CPU_State initial_cpu = {.pc=0x93dc, .a=0x00, .x=0x0d, .y=0x6c, .sp=0xc0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x93dc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x93dd, .a=0x00, .x=0x0d, .y=0x6c, .sp=0xc0, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x93dc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x93dc, .value=0x5c, .type=IO_READ},
        {.addr=0x93dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9602, .a=0x09, .x=0x13, .y=0xa5, .sp=0x07, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9602, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9603, .a=0x04, .x=0x13, .y=0xa5, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9602, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9602, .value=0x5c, .type=IO_READ},
        {.addr=0x9603, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003C) {
    const struct CPU_State initial_cpu = {.pc=0xb437, .a=0xd2, .x=0x2a, .y=0x5c, .sp=0x0c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb437, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb438, .a=0x69, .x=0x2a, .y=0x5c, .sp=0x0c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb437, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb437, .value=0x5c, .type=IO_READ},
        {.addr=0xb438, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003D) {
    const struct CPU_State initial_cpu = {.pc=0xe81f, .a=0x3b, .x=0x95, .y=0x0f, .sp=0x48, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe81f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe820, .a=0x1d, .x=0x95, .y=0x0f, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe81f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe81f, .value=0x5c, .type=IO_READ},
        {.addr=0xe820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003E) {
    const struct CPU_State initial_cpu = {.pc=0xf35f, .a=0xb3, .x=0xc2, .y=0xac, .sp=0xab, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf35f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf360, .a=0x59, .x=0xc2, .y=0xac, .sp=0xab, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf35f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf35f, .value=0x5c, .type=IO_READ},
        {.addr=0xf360, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_003F) {
    const struct CPU_State initial_cpu = {.pc=0x06a3, .a=0x6f, .x=0xbc, .y=0xfc, .sp=0x02, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x06a3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x06a4, .a=0x37, .x=0xbc, .y=0xfc, .sp=0x02, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x06a3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x06a3, .value=0x5c, .type=IO_READ},
        {.addr=0x06a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0040) {
    const struct CPU_State initial_cpu = {.pc=0xae49, .a=0x77, .x=0x9f, .y=0x6b, .sp=0x32, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xae49, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xae4a, .a=0x3b, .x=0x9f, .y=0x6b, .sp=0x32, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xae49, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xae49, .value=0x5c, .type=IO_READ},
        {.addr=0xae4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0041) {
    const struct CPU_State initial_cpu = {.pc=0x5be0, .a=0xc2, .x=0xa0, .y=0x70, .sp=0xfa, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5be0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5be1, .a=0x61, .x=0xa0, .y=0x70, .sp=0xfa, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5be0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5be0, .value=0x5c, .type=IO_READ},
        {.addr=0x5be1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0042) {
    const struct CPU_State initial_cpu = {.pc=0xb78b, .a=0x7e, .x=0x61, .y=0xfd, .sp=0xa6, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xb78b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb78c, .a=0x3f, .x=0x61, .y=0xfd, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb78b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb78b, .value=0x5c, .type=IO_READ},
        {.addr=0xb78c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0043) {
    const struct CPU_State initial_cpu = {.pc=0x9bb9, .a=0x94, .x=0x4f, .y=0xdc, .sp=0x0e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9bba, .a=0x4a, .x=0x4f, .y=0xdc, .sp=0x0e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9bb9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9bb9, .value=0x5c, .type=IO_READ},
        {.addr=0x9bba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0044) {
    const struct CPU_State initial_cpu = {.pc=0x398f, .a=0x1c, .x=0x91, .y=0xff, .sp=0x68, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x398f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3990, .a=0x0e, .x=0x91, .y=0xff, .sp=0x68, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x398f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x398f, .value=0x5c, .type=IO_READ},
        {.addr=0x3990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0045) {
    const struct CPU_State initial_cpu = {.pc=0x8c66, .a=0x94, .x=0x87, .y=0x3c, .sp=0xd6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8c66, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8c67, .a=0x4a, .x=0x87, .y=0x3c, .sp=0xd6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8c66, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8c66, .value=0x5c, .type=IO_READ},
        {.addr=0x8c67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0046) {
    const struct CPU_State initial_cpu = {.pc=0xbfe6, .a=0x9e, .x=0xad, .y=0xe0, .sp=0x43, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xbfe6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbfe7, .a=0x4f, .x=0xad, .y=0xe0, .sp=0x43, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbfe6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbfe6, .value=0x5c, .type=IO_READ},
        {.addr=0xbfe7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0047) {
    const struct CPU_State initial_cpu = {.pc=0x8cbe, .a=0x1c, .x=0x43, .y=0x4a, .sp=0x43, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8cbe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8cbf, .a=0x0e, .x=0x43, .y=0x4a, .sp=0x43, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8cbe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8cbe, .value=0x5c, .type=IO_READ},
        {.addr=0x8cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0048) {
    const struct CPU_State initial_cpu = {.pc=0xf79e, .a=0xd6, .x=0x0c, .y=0x66, .sp=0x51, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf79e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf79f, .a=0x6b, .x=0x0c, .y=0x66, .sp=0x51, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf79e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf79e, .value=0x5c, .type=IO_READ},
        {.addr=0xf79f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0049) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0xc2, .x=0xbc, .y=0x4b, .sp=0xce, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdfaa, .a=0x61, .x=0xbc, .y=0x4b, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xdfa9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0x5c, .type=IO_READ},
        {.addr=0xdfaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004A) {
    const struct CPU_State initial_cpu = {.pc=0x4c0c, .a=0xea, .x=0xd6, .y=0xdd, .sp=0x2f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4c0c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4c0d, .a=0x75, .x=0xd6, .y=0xdd, .sp=0x2f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4c0c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4c0c, .value=0x5c, .type=IO_READ},
        {.addr=0x4c0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004B) {
    const struct CPU_State initial_cpu = {.pc=0xf9dd, .a=0x0f, .x=0x77, .y=0x09, .sp=0xec, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9dd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf9de, .a=0x07, .x=0x77, .y=0x09, .sp=0xec, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf9dd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf9dd, .value=0x5c, .type=IO_READ},
        {.addr=0xf9de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004C) {
    const struct CPU_State initial_cpu = {.pc=0x9628, .a=0x26, .x=0x86, .y=0xe9, .sp=0x33, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9628, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9629, .a=0x13, .x=0x86, .y=0xe9, .sp=0x33, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9628, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9628, .value=0x5c, .type=IO_READ},
        {.addr=0x9629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004D) {
    const struct CPU_State initial_cpu = {.pc=0x95c0, .a=0xd7, .x=0x23, .y=0x88, .sp=0xb9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x95c0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x95c1, .a=0x6b, .x=0x23, .y=0x88, .sp=0xb9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x95c0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x95c0, .value=0x5c, .type=IO_READ},
        {.addr=0x95c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc945, .a=0xb7, .x=0x5a, .y=0x34, .sp=0xd4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc945, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc946, .a=0x5b, .x=0x5a, .y=0x34, .sp=0xd4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc945, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc945, .value=0x5c, .type=IO_READ},
        {.addr=0xc946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_004F) {
    const struct CPU_State initial_cpu = {.pc=0x56c3, .a=0xba, .x=0x82, .y=0xe5, .sp=0x02, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x56c3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x56c4, .a=0x5d, .x=0x82, .y=0xe5, .sp=0x02, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x56c3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x56c3, .value=0x5c, .type=IO_READ},
        {.addr=0x56c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0050) {
    const struct CPU_State initial_cpu = {.pc=0x68a4, .a=0xdf, .x=0xe7, .y=0x19, .sp=0x70, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x68a4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x68a5, .a=0x6f, .x=0xe7, .y=0x19, .sp=0x70, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x68a4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x68a4, .value=0x5c, .type=IO_READ},
        {.addr=0x68a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0051) {
    const struct CPU_State initial_cpu = {.pc=0x3118, .a=0x27, .x=0xe3, .y=0x3f, .sp=0xb9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3118, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3119, .a=0x13, .x=0xe3, .y=0x3f, .sp=0xb9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3118, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3118, .value=0x5c, .type=IO_READ},
        {.addr=0x3119, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc710, .a=0xf2, .x=0x41, .y=0x1a, .sp=0x1f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc710, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc711, .a=0x79, .x=0x41, .y=0x1a, .sp=0x1f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc710, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc710, .value=0x5c, .type=IO_READ},
        {.addr=0xc711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0053) {
    const struct CPU_State initial_cpu = {.pc=0x1f0d, .a=0xe6, .x=0x58, .y=0x6b, .sp=0x3d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x1f0d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1f0e, .a=0x73, .x=0x58, .y=0x6b, .sp=0x3d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1f0d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1f0d, .value=0x5c, .type=IO_READ},
        {.addr=0x1f0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0054) {
    const struct CPU_State initial_cpu = {.pc=0xe04b, .a=0xf9, .x=0x61, .y=0x95, .sp=0x48, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe04b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe04c, .a=0x7c, .x=0x61, .y=0x95, .sp=0x48, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe04b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe04b, .value=0x5c, .type=IO_READ},
        {.addr=0xe04c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0055) {
    const struct CPU_State initial_cpu = {.pc=0xf14c, .a=0xd0, .x=0x4a, .y=0x52, .sp=0xf2, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf14c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf14d, .a=0x68, .x=0x4a, .y=0x52, .sp=0xf2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf14c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf14c, .value=0x5c, .type=IO_READ},
        {.addr=0xf14d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0056) {
    const struct CPU_State initial_cpu = {.pc=0x8812, .a=0x8a, .x=0x0f, .y=0x84, .sp=0x7d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8812, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8813, .a=0x45, .x=0x0f, .y=0x84, .sp=0x7d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8812, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8812, .value=0x5c, .type=IO_READ},
        {.addr=0x8813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0a74, .a=0x21, .x=0x7c, .y=0x1b, .sp=0x76, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0a74, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0a75, .a=0x10, .x=0x7c, .y=0x1b, .sp=0x76, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0a74, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0a74, .value=0x5c, .type=IO_READ},
        {.addr=0x0a75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0058) {
    const struct CPU_State initial_cpu = {.pc=0x6be8, .a=0x5d, .x=0xba, .y=0xf5, .sp=0xfb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6be8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6be9, .a=0x2e, .x=0xba, .y=0xf5, .sp=0xfb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6be8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6be8, .value=0x5c, .type=IO_READ},
        {.addr=0x6be9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0059) {
    const struct CPU_State initial_cpu = {.pc=0x4af8, .a=0x00, .x=0x44, .y=0x1e, .sp=0x4a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x4af8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4af9, .a=0x00, .x=0x44, .y=0x1e, .sp=0x4a, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x4af8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4af8, .value=0x5c, .type=IO_READ},
        {.addr=0x4af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005A) {
    const struct CPU_State initial_cpu = {.pc=0xdf0d, .a=0x9e, .x=0x43, .y=0x1a, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xdf0d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdf0e, .a=0x4f, .x=0x43, .y=0x1a, .sp=0xe4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xdf0d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdf0d, .value=0x5c, .type=IO_READ},
        {.addr=0xdf0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005B) {
    const struct CPU_State initial_cpu = {.pc=0x172a, .a=0xe3, .x=0x2c, .y=0x8f, .sp=0x78, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x172a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x172b, .a=0x71, .x=0x2c, .y=0x8f, .sp=0x78, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x172a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x172a, .value=0x5c, .type=IO_READ},
        {.addr=0x172b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005C) {
    const struct CPU_State initial_cpu = {.pc=0xcad7, .a=0x80, .x=0x97, .y=0x95, .sp=0xb0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcad7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcad8, .a=0x40, .x=0x97, .y=0x95, .sp=0xb0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xcad7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcad7, .value=0x5c, .type=IO_READ},
        {.addr=0xcad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005D) {
    const struct CPU_State initial_cpu = {.pc=0xc3c9, .a=0xc8, .x=0xb0, .y=0x0d, .sp=0xd8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc3ca, .a=0x64, .x=0xb0, .y=0x0d, .sp=0xd8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc3c9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc3c9, .value=0x5c, .type=IO_READ},
        {.addr=0xc3ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005E) {
    const struct CPU_State initial_cpu = {.pc=0x8960, .a=0xd7, .x=0x94, .y=0xe7, .sp=0x15, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8960, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8961, .a=0x6b, .x=0x94, .y=0xe7, .sp=0x15, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8960, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8960, .value=0x5c, .type=IO_READ},
        {.addr=0x8961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_005F) {
    const struct CPU_State initial_cpu = {.pc=0x9e56, .a=0x72, .x=0xb3, .y=0x61, .sp=0x16, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9e56, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9e57, .a=0x39, .x=0xb3, .y=0x61, .sp=0x16, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9e56, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9e56, .value=0x5c, .type=IO_READ},
        {.addr=0x9e57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0060) {
    const struct CPU_State initial_cpu = {.pc=0x0ca7, .a=0x25, .x=0x84, .y=0xe7, .sp=0xea, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0ca8, .a=0x12, .x=0x84, .y=0xe7, .sp=0xea, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0ca7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ca7, .value=0x5c, .type=IO_READ},
        {.addr=0x0ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0061) {
    const struct CPU_State initial_cpu = {.pc=0x884b, .a=0xc9, .x=0x65, .y=0xb0, .sp=0xc7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x884b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x884c, .a=0x64, .x=0x65, .y=0xb0, .sp=0xc7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x884b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x884b, .value=0x5c, .type=IO_READ},
        {.addr=0x884c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0062) {
    const struct CPU_State initial_cpu = {.pc=0xdaa1, .a=0x9a, .x=0xe3, .y=0xc4, .sp=0xb8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdaa2, .a=0x4d, .x=0xe3, .y=0xc4, .sp=0xb8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdaa1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdaa1, .value=0x5c, .type=IO_READ},
        {.addr=0xdaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0063) {
    const struct CPU_State initial_cpu = {.pc=0x3a1f, .a=0x2f, .x=0xc6, .y=0xa9, .sp=0x88, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3a20, .a=0x17, .x=0xc6, .y=0xa9, .sp=0x88, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3a1f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3a1f, .value=0x5c, .type=IO_READ},
        {.addr=0x3a20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0064) {
    const struct CPU_State initial_cpu = {.pc=0x4122, .a=0x1d, .x=0x3f, .y=0xdd, .sp=0x54, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x4122, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4123, .a=0x0e, .x=0x3f, .y=0xdd, .sp=0x54, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4122, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4122, .value=0x5c, .type=IO_READ},
        {.addr=0x4123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0065) {
    const struct CPU_State initial_cpu = {.pc=0x5b3c, .a=0x37, .x=0x83, .y=0xd1, .sp=0xce, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5b3d, .a=0x1b, .x=0x83, .y=0xd1, .sp=0xce, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5b3c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5b3c, .value=0x5c, .type=IO_READ},
        {.addr=0x5b3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4a83, .a=0x87, .x=0x1e, .y=0x76, .sp=0xb9, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4a83, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a84, .a=0x43, .x=0x1e, .y=0x76, .sp=0xb9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4a83, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a83, .value=0x5c, .type=IO_READ},
        {.addr=0x4a84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0067) {
    const struct CPU_State initial_cpu = {.pc=0x601b, .a=0x22, .x=0x12, .y=0x1f, .sp=0xd0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x601b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x601c, .a=0x11, .x=0x12, .y=0x1f, .sp=0xd0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x601b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x601b, .value=0x5c, .type=IO_READ},
        {.addr=0x601c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0068) {
    const struct CPU_State initial_cpu = {.pc=0x1aa1, .a=0x3a, .x=0xef, .y=0xa4, .sp=0x51, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1aa1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1aa2, .a=0x1d, .x=0xef, .y=0xa4, .sp=0x51, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1aa1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1aa1, .value=0x5c, .type=IO_READ},
        {.addr=0x1aa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0069) {
    const struct CPU_State initial_cpu = {.pc=0x2864, .a=0x3e, .x=0x42, .y=0x34, .sp=0x1c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2864, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2865, .a=0x1f, .x=0x42, .y=0x34, .sp=0x1c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2864, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2864, .value=0x5c, .type=IO_READ},
        {.addr=0x2865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006A) {
    const struct CPU_State initial_cpu = {.pc=0x4ea8, .a=0x03, .x=0xea, .y=0xbd, .sp=0x85, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4ea9, .a=0x01, .x=0xea, .y=0xbd, .sp=0x85, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4ea8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4ea8, .value=0x5c, .type=IO_READ},
        {.addr=0x4ea9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006B) {
    const struct CPU_State initial_cpu = {.pc=0x3794, .a=0xd8, .x=0xd7, .y=0xb4, .sp=0x25, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3794, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3795, .a=0x6c, .x=0xd7, .y=0xb4, .sp=0x25, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x3794, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3794, .value=0x5c, .type=IO_READ},
        {.addr=0x3795, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006C) {
    const struct CPU_State initial_cpu = {.pc=0x0423, .a=0xc1, .x=0x5b, .y=0x44, .sp=0x6e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0423, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0424, .a=0x60, .x=0x5b, .y=0x44, .sp=0x6e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0423, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0423, .value=0x5c, .type=IO_READ},
        {.addr=0x0424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006D) {
    const struct CPU_State initial_cpu = {.pc=0xa6d1, .a=0x63, .x=0xe9, .y=0x15, .sp=0xf6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa6d1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa6d2, .a=0x31, .x=0xe9, .y=0x15, .sp=0xf6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa6d1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa6d1, .value=0x5c, .type=IO_READ},
        {.addr=0xa6d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006E) {
    const struct CPU_State initial_cpu = {.pc=0x3b86, .a=0x85, .x=0x13, .y=0x08, .sp=0x0e, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x3b86, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3b87, .a=0x42, .x=0x13, .y=0x08, .sp=0x0e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3b86, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3b86, .value=0x5c, .type=IO_READ},
        {.addr=0x3b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_006F) {
    const struct CPU_State initial_cpu = {.pc=0x7162, .a=0x0d, .x=0x0c, .y=0x19, .sp=0xdc, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7162, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7163, .a=0x06, .x=0x0c, .y=0x19, .sp=0xdc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7162, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7162, .value=0x5c, .type=IO_READ},
        {.addr=0x7163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbdb3, .a=0xa0, .x=0x52, .y=0xda, .sp=0x98, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbdb4, .a=0x50, .x=0x52, .y=0xda, .sp=0x98, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xbdb3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbdb3, .value=0x5c, .type=IO_READ},
        {.addr=0xbdb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0071) {
    const struct CPU_State initial_cpu = {.pc=0x4eb9, .a=0xce, .x=0xf8, .y=0xcd, .sp=0xb7, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4eba, .a=0x67, .x=0xf8, .y=0xcd, .sp=0xb7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4eb9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4eb9, .value=0x5c, .type=IO_READ},
        {.addr=0x4eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0072) {
    const struct CPU_State initial_cpu = {.pc=0x99b5, .a=0x67, .x=0xdf, .y=0x55, .sp=0xe9, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x99b5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x99b6, .a=0x33, .x=0xdf, .y=0x55, .sp=0xe9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x99b5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x99b5, .value=0x5c, .type=IO_READ},
        {.addr=0x99b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0073) {
    const struct CPU_State initial_cpu = {.pc=0xec45, .a=0xfe, .x=0xed, .y=0xde, .sp=0xda, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xec45, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xec46, .a=0x7f, .x=0xed, .y=0xde, .sp=0xda, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xec45, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xec45, .value=0x5c, .type=IO_READ},
        {.addr=0xec46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0074) {
    const struct CPU_State initial_cpu = {.pc=0x4753, .a=0x2c, .x=0x1c, .y=0x8c, .sp=0x16, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4753, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4754, .a=0x16, .x=0x1c, .y=0x8c, .sp=0x16, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4753, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4753, .value=0x5c, .type=IO_READ},
        {.addr=0x4754, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0075) {
    const struct CPU_State initial_cpu = {.pc=0x0b30, .a=0x09, .x=0x0d, .y=0x39, .sp=0x79, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0b30, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0b31, .a=0x04, .x=0x0d, .y=0x39, .sp=0x79, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0b30, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0b30, .value=0x5c, .type=IO_READ},
        {.addr=0x0b31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0076) {
    const struct CPU_State initial_cpu = {.pc=0x1ac9, .a=0xdf, .x=0xca, .y=0xf6, .sp=0x2c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1aca, .a=0x6f, .x=0xca, .y=0xf6, .sp=0x2c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1ac9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1ac9, .value=0x5c, .type=IO_READ},
        {.addr=0x1aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0077) {
    const struct CPU_State initial_cpu = {.pc=0x3d77, .a=0x7b, .x=0xe7, .y=0x7d, .sp=0xd2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3d77, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3d78, .a=0x3d, .x=0xe7, .y=0x7d, .sp=0xd2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3d77, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3d77, .value=0x5c, .type=IO_READ},
        {.addr=0x3d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0078) {
    const struct CPU_State initial_cpu = {.pc=0xe0cc, .a=0x25, .x=0xb2, .y=0xfa, .sp=0xd6, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe0cc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe0cd, .a=0x12, .x=0xb2, .y=0xfa, .sp=0xd6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe0cc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe0cc, .value=0x5c, .type=IO_READ},
        {.addr=0xe0cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0079) {
    const struct CPU_State initial_cpu = {.pc=0x14b3, .a=0x96, .x=0xd0, .y=0x96, .sp=0x55, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x14b3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x14b4, .a=0x4b, .x=0xd0, .y=0x96, .sp=0x55, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x14b3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x14b3, .value=0x5c, .type=IO_READ},
        {.addr=0x14b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007A) {
    const struct CPU_State initial_cpu = {.pc=0x972c, .a=0x04, .x=0x53, .y=0xfb, .sp=0x60, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x972c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x972d, .a=0x02, .x=0x53, .y=0xfb, .sp=0x60, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x972c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x972c, .value=0x5c, .type=IO_READ},
        {.addr=0x972d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007B) {
    const struct CPU_State initial_cpu = {.pc=0x4064, .a=0xf2, .x=0x4f, .y=0x01, .sp=0x0b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4064, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4065, .a=0x79, .x=0x4f, .y=0x01, .sp=0x0b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4064, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4064, .value=0x5c, .type=IO_READ},
        {.addr=0x4065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007C) {
    const struct CPU_State initial_cpu = {.pc=0x3e4d, .a=0x23, .x=0x0f, .y=0x6b, .sp=0xd2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3e4d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3e4e, .a=0x11, .x=0x0f, .y=0x6b, .sp=0xd2, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3e4d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3e4d, .value=0x5c, .type=IO_READ},
        {.addr=0x3e4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007D) {
    const struct CPU_State initial_cpu = {.pc=0x0f8a, .a=0xc8, .x=0x5a, .y=0x30, .sp=0x35, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0f8a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0f8b, .a=0x64, .x=0x5a, .y=0x30, .sp=0x35, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0f8a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0f8a, .value=0x5c, .type=IO_READ},
        {.addr=0x0f8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007E) {
    const struct CPU_State initial_cpu = {.pc=0xd1f5, .a=0xdb, .x=0xe5, .y=0xe4, .sp=0x75, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1f6, .a=0x6d, .x=0xe5, .y=0xe4, .sp=0x75, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd1f5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1f5, .value=0x5c, .type=IO_READ},
        {.addr=0xd1f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_007F) {
    const struct CPU_State initial_cpu = {.pc=0xc2eb, .a=0xe3, .x=0xf3, .y=0x09, .sp=0x35, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc2eb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0x71, .x=0xf3, .y=0x09, .sp=0x35, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc2eb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc2eb, .value=0x5c, .type=IO_READ},
        {.addr=0xc2ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0080) {
    const struct CPU_State initial_cpu = {.pc=0xf03a, .a=0x6e, .x=0x03, .y=0x4b, .sp=0x62, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xf03a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf03b, .a=0x37, .x=0x03, .y=0x4b, .sp=0x62, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf03a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf03a, .value=0x5c, .type=IO_READ},
        {.addr=0xf03b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0081) {
    const struct CPU_State initial_cpu = {.pc=0xc38d, .a=0xff, .x=0x93, .y=0x4b, .sp=0xe3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc38d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc38e, .a=0x7f, .x=0x93, .y=0x4b, .sp=0xe3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc38d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc38d, .value=0x5c, .type=IO_READ},
        {.addr=0xc38e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0082) {
    const struct CPU_State initial_cpu = {.pc=0xdfb8, .a=0x1f, .x=0x91, .y=0x20, .sp=0xfb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdfb9, .a=0x0f, .x=0x91, .y=0x20, .sp=0xfb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdfb8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdfb8, .value=0x5c, .type=IO_READ},
        {.addr=0xdfb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0083) {
    const struct CPU_State initial_cpu = {.pc=0x8a95, .a=0x0c, .x=0xfa, .y=0x41, .sp=0x9d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8a95, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8a96, .a=0x06, .x=0xfa, .y=0x41, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8a95, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8a95, .value=0x5c, .type=IO_READ},
        {.addr=0x8a96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0084) {
    const struct CPU_State initial_cpu = {.pc=0x81d8, .a=0x44, .x=0x22, .y=0x98, .sp=0x09, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x81d8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x81d9, .a=0x22, .x=0x22, .y=0x98, .sp=0x09, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x81d8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x81d8, .value=0x5c, .type=IO_READ},
        {.addr=0x81d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0085) {
    const struct CPU_State initial_cpu = {.pc=0x88c0, .a=0x1f, .x=0xc2, .y=0x8e, .sp=0x14, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x88c0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x88c1, .a=0x0f, .x=0xc2, .y=0x8e, .sp=0x14, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x88c0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x88c0, .value=0x5c, .type=IO_READ},
        {.addr=0x88c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0086) {
    const struct CPU_State initial_cpu = {.pc=0xb112, .a=0x7a, .x=0xc7, .y=0xf4, .sp=0x24, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb112, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb113, .a=0x3d, .x=0xc7, .y=0xf4, .sp=0x24, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb112, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb112, .value=0x5c, .type=IO_READ},
        {.addr=0xb113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0087) {
    const struct CPU_State initial_cpu = {.pc=0x100d, .a=0xde, .x=0x54, .y=0x55, .sp=0x81, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x100d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x100e, .a=0x6f, .x=0x54, .y=0x55, .sp=0x81, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x100d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x100d, .value=0x5c, .type=IO_READ},
        {.addr=0x100e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4a1c, .a=0xa4, .x=0x20, .y=0x1c, .sp=0xab, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a1d, .a=0x52, .x=0x20, .y=0x1c, .sp=0xab, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4a1c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a1c, .value=0x5c, .type=IO_READ},
        {.addr=0x4a1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0089) {
    const struct CPU_State initial_cpu = {.pc=0x8182, .a=0xbf, .x=0x4a, .y=0xf8, .sp=0x03, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8182, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8183, .a=0x5f, .x=0x4a, .y=0xf8, .sp=0x03, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8182, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8182, .value=0x5c, .type=IO_READ},
        {.addr=0x8183, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008A) {
    const struct CPU_State initial_cpu = {.pc=0xb3ee, .a=0xfd, .x=0x76, .y=0xe5, .sp=0x37, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb3ef, .a=0x7e, .x=0x76, .y=0xe5, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb3ee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb3ee, .value=0x5c, .type=IO_READ},
        {.addr=0xb3ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008B) {
    const struct CPU_State initial_cpu = {.pc=0x38e0, .a=0xfb, .x=0xd7, .y=0x9a, .sp=0x4c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x38e0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x38e1, .a=0x7d, .x=0xd7, .y=0x9a, .sp=0x4c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x38e0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x38e0, .value=0x5c, .type=IO_READ},
        {.addr=0x38e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008C) {
    const struct CPU_State initial_cpu = {.pc=0x0313, .a=0x67, .x=0xe8, .y=0x26, .sp=0x71, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0313, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0314, .a=0x33, .x=0xe8, .y=0x26, .sp=0x71, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0313, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0313, .value=0x5c, .type=IO_READ},
        {.addr=0x0314, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008D) {
    const struct CPU_State initial_cpu = {.pc=0xeda3, .a=0x54, .x=0xc0, .y=0xb5, .sp=0x0c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xeda3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeda4, .a=0x2a, .x=0xc0, .y=0xb5, .sp=0x0c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xeda3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeda3, .value=0x5c, .type=IO_READ},
        {.addr=0xeda4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008E) {
    const struct CPU_State initial_cpu = {.pc=0x5d5b, .a=0x50, .x=0xc7, .y=0x78, .sp=0xa7, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5d5b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5d5c, .a=0x28, .x=0xc7, .y=0x78, .sp=0xa7, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5d5b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5d5b, .value=0x5c, .type=IO_READ},
        {.addr=0x5d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_008F) {
    const struct CPU_State initial_cpu = {.pc=0x0ad1, .a=0xe4, .x=0x11, .y=0x1d, .sp=0xcc, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0ad2, .a=0x72, .x=0x11, .y=0x1d, .sp=0xcc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0ad1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ad1, .value=0x5c, .type=IO_READ},
        {.addr=0x0ad2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0090) {
    const struct CPU_State initial_cpu = {.pc=0x7cad, .a=0x2e, .x=0x98, .y=0x87, .sp=0xc9, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7cad, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7cae, .a=0x17, .x=0x98, .y=0x87, .sp=0xc9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7cad, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7cad, .value=0x5c, .type=IO_READ},
        {.addr=0x7cae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0091) {
    const struct CPU_State initial_cpu = {.pc=0x02d2, .a=0x09, .x=0xec, .y=0xf4, .sp=0x1d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x02d2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x02d3, .a=0x04, .x=0xec, .y=0xf4, .sp=0x1d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x02d2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x02d2, .value=0x5c, .type=IO_READ},
        {.addr=0x02d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0092) {
    const struct CPU_State initial_cpu = {.pc=0x18d3, .a=0x3c, .x=0x9a, .y=0x74, .sp=0xea, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x18d3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x18d4, .a=0x1e, .x=0x9a, .y=0x74, .sp=0xea, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x18d3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x18d3, .value=0x5c, .type=IO_READ},
        {.addr=0x18d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0093) {
    const struct CPU_State initial_cpu = {.pc=0x678f, .a=0x8f, .x=0xed, .y=0x87, .sp=0x21, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x678f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6790, .a=0x47, .x=0xed, .y=0x87, .sp=0x21, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x678f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x678f, .value=0x5c, .type=IO_READ},
        {.addr=0x6790, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0094) {
    const struct CPU_State initial_cpu = {.pc=0x3532, .a=0xab, .x=0x49, .y=0x41, .sp=0xd1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3532, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3533, .a=0x55, .x=0x49, .y=0x41, .sp=0xd1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3532, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3532, .value=0x5c, .type=IO_READ},
        {.addr=0x3533, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc55a, .a=0x90, .x=0xdc, .y=0x2a, .sp=0x71, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc55a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc55b, .a=0x48, .x=0xdc, .y=0x2a, .sp=0x71, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xc55a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc55a, .value=0x5c, .type=IO_READ},
        {.addr=0xc55b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0096) {
    const struct CPU_State initial_cpu = {.pc=0xafad, .a=0xcd, .x=0x9e, .y=0xb5, .sp=0x8f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xafad, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xafae, .a=0x66, .x=0x9e, .y=0xb5, .sp=0x8f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xafad, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xafad, .value=0x5c, .type=IO_READ},
        {.addr=0xafae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0097) {
    const struct CPU_State initial_cpu = {.pc=0x60bf, .a=0x6a, .x=0xf9, .y=0x3f, .sp=0xfe, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x60bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x60c0, .a=0x35, .x=0xf9, .y=0x3f, .sp=0xfe, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x60bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x60bf, .value=0x5c, .type=IO_READ},
        {.addr=0x60c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0098) {
    const struct CPU_State initial_cpu = {.pc=0xe2f6, .a=0xc9, .x=0x4e, .y=0x0d, .sp=0x4f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe2f7, .a=0x64, .x=0x4e, .y=0x0d, .sp=0x4f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe2f6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe2f6, .value=0x5c, .type=IO_READ},
        {.addr=0xe2f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0099) {
    const struct CPU_State initial_cpu = {.pc=0x01cb, .a=0x92, .x=0x54, .y=0xd4, .sp=0xb8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x01cc, .a=0x49, .x=0x54, .y=0xd4, .sp=0xb8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x01cb, .value=0x5c, .type=IO_READ},
        {.addr=0x01cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009A) {
    const struct CPU_State initial_cpu = {.pc=0x3065, .a=0xde, .x=0x16, .y=0xbf, .sp=0x15, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x3065, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3066, .a=0x6f, .x=0x16, .y=0xbf, .sp=0x15, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3065, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3065, .value=0x5c, .type=IO_READ},
        {.addr=0x3066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5f9c, .a=0xc8, .x=0x81, .y=0x84, .sp=0x39, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x5f9c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5f9d, .a=0x64, .x=0x81, .y=0x84, .sp=0x39, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5f9c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5f9c, .value=0x5c, .type=IO_READ},
        {.addr=0x5f9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb8c4, .a=0xd7, .x=0x3f, .y=0xc4, .sp=0x1d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb8c5, .a=0x6b, .x=0x3f, .y=0xc4, .sp=0x1d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb8c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb8c4, .value=0x5c, .type=IO_READ},
        {.addr=0xb8c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009D) {
    const struct CPU_State initial_cpu = {.pc=0xf067, .a=0xf8, .x=0xac, .y=0x67, .sp=0x10, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf067, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf068, .a=0x7c, .x=0xac, .y=0x67, .sp=0x10, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf067, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf067, .value=0x5c, .type=IO_READ},
        {.addr=0xf068, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009E) {
    const struct CPU_State initial_cpu = {.pc=0xd6a6, .a=0x21, .x=0x64, .y=0xd9, .sp=0xa2, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd6a6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd6a7, .a=0x10, .x=0x64, .y=0xd9, .sp=0xa2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd6a6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd6a6, .value=0x5c, .type=IO_READ},
        {.addr=0xd6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_009F) {
    const struct CPU_State initial_cpu = {.pc=0x3724, .a=0x71, .x=0x93, .y=0x90, .sp=0xbd, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3724, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3725, .a=0x38, .x=0x93, .y=0x90, .sp=0xbd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3724, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3724, .value=0x5c, .type=IO_READ},
        {.addr=0x3725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x801c, .a=0x0f, .x=0xe3, .y=0xf8, .sp=0x00, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x801c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x801d, .a=0x07, .x=0xe3, .y=0xf8, .sp=0x00, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x801c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x801c, .value=0x5c, .type=IO_READ},
        {.addr=0x801d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8b01, .a=0xd2, .x=0x8d, .y=0xf0, .sp=0x57, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8b01, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8b02, .a=0x69, .x=0x8d, .y=0xf0, .sp=0x57, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8b01, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8b01, .value=0x5c, .type=IO_READ},
        {.addr=0x8b02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x19c7, .a=0x32, .x=0x43, .y=0xba, .sp=0xbf, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x19c7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x19c8, .a=0x19, .x=0x43, .y=0xba, .sp=0xbf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x19c7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x19c7, .value=0x5c, .type=IO_READ},
        {.addr=0x19c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x3cbc, .a=0x06, .x=0x03, .y=0x49, .sp=0x81, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3cbc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3cbd, .a=0x03, .x=0x03, .y=0x49, .sp=0x81, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3cbc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3cbc, .value=0x5c, .type=IO_READ},
        {.addr=0x3cbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x3104, .a=0xd5, .x=0x1c, .y=0xeb, .sp=0x7d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3104, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3105, .a=0x6a, .x=0x1c, .y=0xeb, .sp=0x7d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3104, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3104, .value=0x5c, .type=IO_READ},
        {.addr=0x3105, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2c9f, .a=0x52, .x=0x2c, .y=0xa0, .sp=0xd4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2ca0, .a=0x29, .x=0x2c, .y=0xa0, .sp=0xd4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2c9f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2c9f, .value=0x5c, .type=IO_READ},
        {.addr=0x2ca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x85f1, .a=0xf8, .x=0xfb, .y=0x32, .sp=0x9e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x85f1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x85f2, .a=0x7c, .x=0xfb, .y=0x32, .sp=0x9e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x85f1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x85f1, .value=0x5c, .type=IO_READ},
        {.addr=0x85f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x80aa, .a=0xb2, .x=0x08, .y=0xf1, .sp=0xe8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x80aa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x80ab, .a=0x59, .x=0x08, .y=0xf1, .sp=0xe8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x80aa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x80aa, .value=0x5c, .type=IO_READ},
        {.addr=0x80ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x0606, .a=0x87, .x=0x54, .y=0xf4, .sp=0x26, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0606, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0607, .a=0x43, .x=0x54, .y=0xf4, .sp=0x26, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0606, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0606, .value=0x5c, .type=IO_READ},
        {.addr=0x0607, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x5647, .a=0x55, .x=0x61, .y=0x58, .sp=0xec, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5647, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5648, .a=0x2a, .x=0x61, .y=0x58, .sp=0xec, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5647, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5647, .value=0x5c, .type=IO_READ},
        {.addr=0x5648, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x9de1, .a=0x5a, .x=0x48, .y=0x68, .sp=0xc2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9de1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9de2, .a=0x2d, .x=0x48, .y=0x68, .sp=0xc2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9de1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9de1, .value=0x5c, .type=IO_READ},
        {.addr=0x9de2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x6bcc, .a=0x5f, .x=0x45, .y=0xdc, .sp=0xc5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6bcd, .a=0x2f, .x=0x45, .y=0xdc, .sp=0xc5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6bcc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6bcc, .value=0x5c, .type=IO_READ},
        {.addr=0x6bcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x9786, .a=0x38, .x=0x1f, .y=0xcb, .sp=0x32, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9786, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9787, .a=0x1c, .x=0x1f, .y=0xcb, .sp=0x32, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9786, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9786, .value=0x5c, .type=IO_READ},
        {.addr=0x9787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xd0e3, .a=0xdb, .x=0x75, .y=0x4f, .sp=0x25, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd0e4, .a=0x6d, .x=0x75, .y=0x4f, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd0e3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd0e3, .value=0x5c, .type=IO_READ},
        {.addr=0xd0e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xee4f, .a=0x61, .x=0x44, .y=0xa7, .sp=0x80, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xee4f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xee50, .a=0x30, .x=0x44, .y=0xa7, .sp=0x80, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xee4f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xee4f, .value=0x5c, .type=IO_READ},
        {.addr=0xee50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xf1cf, .a=0xfd, .x=0x3d, .y=0xd4, .sp=0xe5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf1d0, .a=0x7e, .x=0x3d, .y=0xd4, .sp=0xe5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf1cf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf1cf, .value=0x5c, .type=IO_READ},
        {.addr=0xf1d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x5ad5, .a=0xd4, .x=0x39, .y=0x52, .sp=0x7e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5ad5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5ad6, .a=0x6a, .x=0x39, .y=0x52, .sp=0x7e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5ad5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5ad5, .value=0x5c, .type=IO_READ},
        {.addr=0x5ad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0ee1, .a=0x78, .x=0x63, .y=0x60, .sp=0xda, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0ee2, .a=0x3c, .x=0x63, .y=0x60, .sp=0xda, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0ee1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ee1, .value=0x5c, .type=IO_READ},
        {.addr=0x0ee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xa9f1, .a=0x1a, .x=0x30, .y=0xab, .sp=0xb2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0x0d, .x=0x30, .y=0xab, .sp=0xb2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa9f1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa9f1, .value=0x5c, .type=IO_READ},
        {.addr=0xa9f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7df4, .a=0xe4, .x=0x0a, .y=0xab, .sp=0x67, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7df4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7df5, .a=0x72, .x=0x0a, .y=0xab, .sp=0x67, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7df4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7df4, .value=0x5c, .type=IO_READ},
        {.addr=0x7df5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xb9a4, .a=0xb0, .x=0x73, .y=0x8f, .sp=0x2d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb9a5, .a=0x58, .x=0x73, .y=0x8f, .sp=0x2d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb9a4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb9a4, .value=0x5c, .type=IO_READ},
        {.addr=0xb9a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xf864, .a=0x12, .x=0xcb, .y=0xb3, .sp=0xb9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf864, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf865, .a=0x09, .x=0xcb, .y=0xb3, .sp=0xb9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf864, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf864, .value=0x5c, .type=IO_READ},
        {.addr=0xf865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x1773, .a=0xbc, .x=0x69, .y=0xdb, .sp=0x17, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x1773, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1774, .a=0x5e, .x=0x69, .y=0xdb, .sp=0x17, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1773, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1773, .value=0x5c, .type=IO_READ},
        {.addr=0x1774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x3252, .a=0x8c, .x=0xb3, .y=0x53, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3252, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3253, .a=0x46, .x=0xb3, .y=0x53, .sp=0x65, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3252, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3252, .value=0x5c, .type=IO_READ},
        {.addr=0x3253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x71a4, .a=0x0d, .x=0xba, .y=0x5f, .sp=0x13, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x71a4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x71a5, .a=0x06, .x=0xba, .y=0x5f, .sp=0x13, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x71a4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x71a4, .value=0x5c, .type=IO_READ},
        {.addr=0x71a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf284, .a=0x20, .x=0x5a, .y=0xc5, .sp=0x4d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf284, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf285, .a=0x10, .x=0x5a, .y=0xc5, .sp=0x4d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf284, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf284, .value=0x5c, .type=IO_READ},
        {.addr=0xf285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x1ada, .a=0x8f, .x=0x0f, .y=0x50, .sp=0xb4, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1ada, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1adb, .a=0x47, .x=0x0f, .y=0x50, .sp=0xb4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1ada, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1ada, .value=0x5c, .type=IO_READ},
        {.addr=0x1adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x2f09, .a=0xe9, .x=0xe9, .y=0x7b, .sp=0xde, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2f0a, .a=0x74, .x=0xe9, .y=0x7b, .sp=0xde, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2f09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2f09, .value=0x5c, .type=IO_READ},
        {.addr=0x2f0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xd44f, .a=0x72, .x=0x50, .y=0x26, .sp=0x6b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd44f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd450, .a=0x39, .x=0x50, .y=0x26, .sp=0x6b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd44f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd44f, .value=0x5c, .type=IO_READ},
        {.addr=0xd450, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x22b9, .a=0x08, .x=0x82, .y=0x6b, .sp=0x7f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x22b9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x22ba, .a=0x04, .x=0x82, .y=0x6b, .sp=0x7f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x22b9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x22b9, .value=0x5c, .type=IO_READ},
        {.addr=0x22ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x9dfe, .a=0x89, .x=0x77, .y=0xe1, .sp=0xb7, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9dfe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9dff, .a=0x44, .x=0x77, .y=0xe1, .sp=0xb7, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9dfe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9dfe, .value=0x5c, .type=IO_READ},
        {.addr=0x9dff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x427e, .a=0xcf, .x=0x60, .y=0xdc, .sp=0xbb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x427e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x427f, .a=0x67, .x=0x60, .y=0xdc, .sp=0xbb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x427e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x427e, .value=0x5c, .type=IO_READ},
        {.addr=0x427f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xd1b9, .a=0xbb, .x=0xfd, .y=0x01, .sp=0x80, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd1b9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1ba, .a=0x5d, .x=0xfd, .y=0x01, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd1b9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1b9, .value=0x5c, .type=IO_READ},
        {.addr=0xd1ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x3dda, .a=0xe3, .x=0xbc, .y=0x98, .sp=0x2f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3dda, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3ddb, .a=0x71, .x=0xbc, .y=0x98, .sp=0x2f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3dda, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3dda, .value=0x5c, .type=IO_READ},
        {.addr=0x3ddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x7eb1, .a=0xeb, .x=0x75, .y=0xe8, .sp=0xd4, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7eb2, .a=0x75, .x=0x75, .y=0xe8, .sp=0xd4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7eb1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7eb1, .value=0x5c, .type=IO_READ},
        {.addr=0x7eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5749, .a=0x26, .x=0x75, .y=0x65, .sp=0xee, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5749, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x574a, .a=0x13, .x=0x75, .y=0x65, .sp=0xee, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5749, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5749, .value=0x5c, .type=IO_READ},
        {.addr=0x574a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe0b5, .a=0xdb, .x=0xbd, .y=0xd4, .sp=0x70, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe0b6, .a=0x6d, .x=0xbd, .y=0xd4, .sp=0x70, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe0b5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe0b5, .value=0x5c, .type=IO_READ},
        {.addr=0xe0b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x47f0, .a=0x0d, .x=0x05, .y=0x31, .sp=0x96, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x47f0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x47f1, .a=0x06, .x=0x05, .y=0x31, .sp=0x96, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x47f0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x47f0, .value=0x5c, .type=IO_READ},
        {.addr=0x47f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x7b88, .a=0xaa, .x=0xe0, .y=0xd5, .sp=0x3c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7b88, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7b89, .a=0x55, .x=0xe0, .y=0xd5, .sp=0x3c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7b88, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7b88, .value=0x5c, .type=IO_READ},
        {.addr=0x7b89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xd9a0, .a=0xca, .x=0xdc, .y=0x41, .sp=0x24, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd9a1, .a=0x65, .x=0xdc, .y=0x41, .sp=0x24, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd9a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd9a0, .value=0x5c, .type=IO_READ},
        {.addr=0xd9a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb7b6, .a=0xe4, .x=0xfe, .y=0x5f, .sp=0x4f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb7b7, .a=0x72, .x=0xfe, .y=0x5f, .sp=0x4f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb7b6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb7b6, .value=0x5c, .type=IO_READ},
        {.addr=0xb7b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xd3c4, .a=0xbc, .x=0x13, .y=0x8d, .sp=0xb8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd3c5, .a=0x5e, .x=0x13, .y=0x8d, .sp=0xb8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd3c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd3c4, .value=0x5c, .type=IO_READ},
        {.addr=0xd3c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xfe64, .a=0xdd, .x=0xe0, .y=0x93, .sp=0x3c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xfe64, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfe65, .a=0x6e, .x=0xe0, .y=0x93, .sp=0x3c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfe64, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfe64, .value=0x5c, .type=IO_READ},
        {.addr=0xfe65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x338b, .a=0x06, .x=0xf9, .y=0x25, .sp=0xc5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x338b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x338c, .a=0x03, .x=0xf9, .y=0x25, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x338b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x338b, .value=0x5c, .type=IO_READ},
        {.addr=0x338c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa549, .a=0x4c, .x=0xed, .y=0xbf, .sp=0x6b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa549, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa54a, .a=0x26, .x=0xed, .y=0xbf, .sp=0x6b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa549, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa549, .value=0x5c, .type=IO_READ},
        {.addr=0xa54a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4a27, .a=0x42, .x=0x97, .y=0xe6, .sp=0x2d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x4a27, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a28, .a=0x21, .x=0x97, .y=0xe6, .sp=0x2d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4a27, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a27, .value=0x5c, .type=IO_READ},
        {.addr=0x4a28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x7ff3, .a=0x36, .x=0x70, .y=0x1e, .sp=0x38, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7ff4, .a=0x1b, .x=0x70, .y=0x1e, .sp=0x38, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7ff3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7ff3, .value=0x5c, .type=IO_READ},
        {.addr=0x7ff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa5fb, .a=0xd7, .x=0x85, .y=0x51, .sp=0x36, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa5fb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa5fc, .a=0x6b, .x=0x85, .y=0x51, .sp=0x36, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa5fb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa5fb, .value=0x5c, .type=IO_READ},
        {.addr=0xa5fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x6c14, .a=0x0e, .x=0x74, .y=0xc3, .sp=0x71, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c14, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6c15, .a=0x07, .x=0x74, .y=0xc3, .sp=0x71, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6c14, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6c14, .value=0x5c, .type=IO_READ},
        {.addr=0x6c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x85de, .a=0xf0, .x=0x05, .y=0xa4, .sp=0x22, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x85de, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x85df, .a=0x78, .x=0x05, .y=0xa4, .sp=0x22, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x85de, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x85de, .value=0x5c, .type=IO_READ},
        {.addr=0x85df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xe6a4, .a=0x57, .x=0xd6, .y=0x1d, .sp=0xa0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe6a5, .a=0x2b, .x=0xd6, .y=0x1d, .sp=0xa0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe6a4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe6a4, .value=0x5c, .type=IO_READ},
        {.addr=0xe6a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xa864, .a=0x4c, .x=0xfe, .y=0x0c, .sp=0x1f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa864, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa865, .a=0x26, .x=0xfe, .y=0x0c, .sp=0x1f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa864, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa864, .value=0x5c, .type=IO_READ},
        {.addr=0xa865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xb3bc, .a=0x60, .x=0x01, .y=0xf7, .sp=0xb9, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb3bc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb3bd, .a=0x30, .x=0x01, .y=0xf7, .sp=0xb9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb3bc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb3bc, .value=0x5c, .type=IO_READ},
        {.addr=0xb3bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xebd3, .a=0x04, .x=0x25, .y=0x18, .sp=0x29, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xebd3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xebd4, .a=0x02, .x=0x25, .y=0x18, .sp=0x29, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xebd3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xebd3, .value=0x5c, .type=IO_READ},
        {.addr=0xebd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x96e5, .a=0x1a, .x=0x74, .y=0x3e, .sp=0xe8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x96e5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x96e6, .a=0x0d, .x=0x74, .y=0x3e, .sp=0xe8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x96e5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x96e5, .value=0x5c, .type=IO_READ},
        {.addr=0x96e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1a3a, .a=0x47, .x=0x6e, .y=0xcb, .sp=0x73, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1a3b, .a=0x23, .x=0x6e, .y=0xcb, .sp=0x73, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1a3a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1a3a, .value=0x5c, .type=IO_READ},
        {.addr=0x1a3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x424f, .a=0xd6, .x=0xf0, .y=0xb4, .sp=0x4f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x424f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4250, .a=0x6b, .x=0xf0, .y=0xb4, .sp=0x4f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x424f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x424f, .value=0x5c, .type=IO_READ},
        {.addr=0x4250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x6fab, .a=0xdd, .x=0xac, .y=0x8e, .sp=0x3f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6fab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6fac, .a=0x6e, .x=0xac, .y=0x8e, .sp=0x3f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6fab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6fab, .value=0x5c, .type=IO_READ},
        {.addr=0x6fac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x6a36, .a=0x59, .x=0x2d, .y=0x69, .sp=0xbc, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a36, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6a37, .a=0x2c, .x=0x2d, .y=0x69, .sp=0xbc, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6a36, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6a36, .value=0x5c, .type=IO_READ},
        {.addr=0x6a37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xf231, .a=0x99, .x=0x0b, .y=0xe0, .sp=0x90, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf231, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf232, .a=0x4c, .x=0x0b, .y=0xe0, .sp=0x90, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf231, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf231, .value=0x5c, .type=IO_READ},
        {.addr=0xf232, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x4fd1, .a=0xeb, .x=0x9b, .y=0x83, .sp=0x41, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4fd2, .a=0x75, .x=0x9b, .y=0x83, .sp=0x41, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4fd1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4fd1, .value=0x5c, .type=IO_READ},
        {.addr=0x4fd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x4b86, .a=0x30, .x=0x2b, .y=0xb6, .sp=0xcb, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4b86, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4b87, .a=0x18, .x=0x2b, .y=0xb6, .sp=0xcb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4b86, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4b86, .value=0x5c, .type=IO_READ},
        {.addr=0x4b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xb517, .a=0x86, .x=0xd8, .y=0x6e, .sp=0x9a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb517, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb518, .a=0x43, .x=0xd8, .y=0x6e, .sp=0x9a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb517, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb517, .value=0x5c, .type=IO_READ},
        {.addr=0xb518, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x6771, .a=0x2b, .x=0xe1, .y=0xe6, .sp=0x27, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6771, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6772, .a=0x15, .x=0xe1, .y=0xe6, .sp=0x27, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6771, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6771, .value=0x5c, .type=IO_READ},
        {.addr=0x6772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x5944, .a=0xd8, .x=0xf3, .y=0xde, .sp=0x5c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5944, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5945, .a=0x6c, .x=0xf3, .y=0xde, .sp=0x5c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5944, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5944, .value=0x5c, .type=IO_READ},
        {.addr=0x5945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x052d, .a=0x2c, .x=0x84, .y=0xac, .sp=0x53, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x052d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x052e, .a=0x16, .x=0x84, .y=0xac, .sp=0x53, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x052d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x052d, .value=0x5c, .type=IO_READ},
        {.addr=0x052e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x8308, .a=0xa1, .x=0x8b, .y=0x4a, .sp=0x6d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x8308, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8309, .a=0x50, .x=0x8b, .y=0x4a, .sp=0x6d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8308, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8308, .value=0x5c, .type=IO_READ},
        {.addr=0x8309, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x99dd, .a=0xaf, .x=0x53, .y=0xc9, .sp=0xb1, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x99dd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x99de, .a=0x57, .x=0x53, .y=0xc9, .sp=0xb1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x99dd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x99dd, .value=0x5c, .type=IO_READ},
        {.addr=0x99de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9b5c, .a=0x35, .x=0xeb, .y=0x75, .sp=0x4a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9b5c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9b5d, .a=0x1a, .x=0xeb, .y=0x75, .sp=0x4a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9b5c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9b5c, .value=0x5c, .type=IO_READ},
        {.addr=0x9b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xd32b, .a=0x50, .x=0xcf, .y=0x74, .sp=0x0d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xd32b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd32c, .a=0x28, .x=0xcf, .y=0x74, .sp=0x0d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xd32b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd32b, .value=0x5c, .type=IO_READ},
        {.addr=0xd32c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x6324, .a=0x87, .x=0xeb, .y=0x73, .sp=0xe5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x6324, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6325, .a=0x43, .x=0xeb, .y=0x73, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6324, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6324, .value=0x5c, .type=IO_READ},
        {.addr=0x6325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x4e0f, .a=0x8f, .x=0x4c, .y=0x0c, .sp=0xcc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4e0f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4e10, .a=0x47, .x=0x4c, .y=0x0c, .sp=0xcc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4e0f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4e0f, .value=0x5c, .type=IO_READ},
        {.addr=0x4e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x14f0, .a=0x28, .x=0x12, .y=0x2b, .sp=0x70, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x14f0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x14f1, .a=0x14, .x=0x12, .y=0x2b, .sp=0x70, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x14f0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x14f0, .value=0x5c, .type=IO_READ},
        {.addr=0x14f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x4876, .a=0x8f, .x=0xf0, .y=0x8b, .sp=0xf1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4876, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4877, .a=0x47, .x=0xf0, .y=0x8b, .sp=0xf1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4876, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4876, .value=0x5c, .type=IO_READ},
        {.addr=0x4877, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xe28d, .a=0xaf, .x=0x60, .y=0x22, .sp=0x02, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xe28d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe28e, .a=0x57, .x=0x60, .y=0x22, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe28d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe28d, .value=0x5c, .type=IO_READ},
        {.addr=0xe28e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5ff8, .a=0x51, .x=0x60, .y=0x26, .sp=0xf5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5ff9, .a=0x28, .x=0x60, .y=0x26, .sp=0xf5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5ff8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5ff8, .value=0x5c, .type=IO_READ},
        {.addr=0x5ff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xf2d2, .a=0x56, .x=0xd6, .y=0x85, .sp=0x6b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2d3, .a=0x2b, .x=0xd6, .y=0x85, .sp=0x6b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf2d2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2d2, .value=0x5c, .type=IO_READ},
        {.addr=0xf2d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x3f63, .a=0xca, .x=0x45, .y=0x48, .sp=0x02, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3f63, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3f64, .a=0x65, .x=0x45, .y=0x48, .sp=0x02, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3f63, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3f63, .value=0x5c, .type=IO_READ},
        {.addr=0x3f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x4739, .a=0x36, .x=0xb6, .y=0x09, .sp=0xfe, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4739, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x473a, .a=0x1b, .x=0xb6, .y=0x09, .sp=0xfe, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4739, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4739, .value=0x5c, .type=IO_READ},
        {.addr=0x473a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x8036, .a=0xd0, .x=0xd4, .y=0x59, .sp=0x6a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8036, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8037, .a=0x68, .x=0xd4, .y=0x59, .sp=0x6a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8036, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8036, .value=0x5c, .type=IO_READ},
        {.addr=0x8037, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x76e9, .a=0xf7, .x=0x07, .y=0xd8, .sp=0x03, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x76e9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x76ea, .a=0x7b, .x=0x07, .y=0xd8, .sp=0x03, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x76e9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x76e9, .value=0x5c, .type=IO_READ},
        {.addr=0x76ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x31b7, .a=0xf6, .x=0xd6, .y=0x8e, .sp=0x8b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x31b7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x31b8, .a=0x7b, .x=0xd6, .y=0x8e, .sp=0x8b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x31b7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x31b7, .value=0x5c, .type=IO_READ},
        {.addr=0x31b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x767d, .a=0xdc, .x=0x6c, .y=0x0f, .sp=0x7b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x767d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x767e, .a=0x6e, .x=0x6c, .y=0x0f, .sp=0x7b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x767d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x767d, .value=0x5c, .type=IO_READ},
        {.addr=0x767e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc528, .a=0xd6, .x=0x9f, .y=0xff, .sp=0xa0, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xc528, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc529, .a=0x6b, .x=0x9f, .y=0xff, .sp=0xa0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc528, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc528, .value=0x5c, .type=IO_READ},
        {.addr=0xc529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x91df, .a=0x37, .x=0xba, .y=0xeb, .sp=0x6c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x91df, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x91e0, .a=0x1b, .x=0xba, .y=0xeb, .sp=0x6c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x91df, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x91df, .value=0x5c, .type=IO_READ},
        {.addr=0x91e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xcab3, .a=0xf7, .x=0xfd, .y=0xd0, .sp=0x67, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xcab3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcab4, .a=0x7b, .x=0xfd, .y=0xd0, .sp=0x67, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xcab3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcab3, .value=0x5c, .type=IO_READ},
        {.addr=0xcab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xabd4, .a=0xd1, .x=0xf6, .y=0x8f, .sp=0x64, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xabd4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xabd5, .a=0x68, .x=0xf6, .y=0x8f, .sp=0x64, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xabd4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xabd4, .value=0x5c, .type=IO_READ},
        {.addr=0xabd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x73e4, .a=0x49, .x=0x0b, .y=0x34, .sp=0x1a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x73e4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x73e5, .a=0x24, .x=0x0b, .y=0x34, .sp=0x1a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x73e4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x73e4, .value=0x5c, .type=IO_READ},
        {.addr=0x73e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5be6, .a=0xfb, .x=0xc8, .y=0xa3, .sp=0xb2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5be6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5be7, .a=0x7d, .x=0xc8, .y=0xa3, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5be6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5be6, .value=0x5c, .type=IO_READ},
        {.addr=0x5be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0x42, .x=0x76, .y=0x20, .sp=0x00, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x32cf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x32d0, .a=0x21, .x=0x76, .y=0x20, .sp=0x00, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x32cf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0x5c, .type=IO_READ},
        {.addr=0x32d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x5839, .a=0x9e, .x=0x7a, .y=0x4d, .sp=0xda, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5839, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x583a, .a=0x4f, .x=0x7a, .y=0x4d, .sp=0xda, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5839, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5839, .value=0x5c, .type=IO_READ},
        {.addr=0x583a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x964d, .a=0x10, .x=0x4b, .y=0x42, .sp=0xc3, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x964d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x964e, .a=0x08, .x=0x4b, .y=0x42, .sp=0xc3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x964d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x964d, .value=0x5c, .type=IO_READ},
        {.addr=0x964e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xcf00, .a=0xe7, .x=0xa4, .y=0x82, .sp=0x82, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcf00, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcf01, .a=0x73, .x=0xa4, .y=0x82, .sp=0x82, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcf00, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcf00, .value=0x5c, .type=IO_READ},
        {.addr=0xcf01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x4cfd, .a=0x44, .x=0x97, .y=0x66, .sp=0x0e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4cfe, .a=0x22, .x=0x97, .y=0x66, .sp=0x0e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4cfd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4cfd, .value=0x5c, .type=IO_READ},
        {.addr=0x4cfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x7754, .a=0x67, .x=0xe5, .y=0x0c, .sp=0xea, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7754, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7755, .a=0x33, .x=0xe5, .y=0x0c, .sp=0xea, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7754, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7754, .value=0x5c, .type=IO_READ},
        {.addr=0x7755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x2898, .a=0x07, .x=0xba, .y=0xb0, .sp=0x5b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2898, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2899, .a=0x03, .x=0xba, .y=0xb0, .sp=0x5b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2898, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2898, .value=0x5c, .type=IO_READ},
        {.addr=0x2899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0100) {
    const struct CPU_State initial_cpu = {.pc=0xb6e8, .a=0xd7, .x=0xda, .y=0xba, .sp=0x00, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb6e9, .a=0x6b, .x=0xda, .y=0xba, .sp=0x00, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb6e8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb6e8, .value=0x5c, .type=IO_READ},
        {.addr=0xb6e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0101) {
    const struct CPU_State initial_cpu = {.pc=0xaf8a, .a=0x09, .x=0xb0, .y=0x25, .sp=0x94, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaf8b, .a=0x04, .x=0xb0, .y=0x25, .sp=0x94, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xaf8a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaf8a, .value=0x5c, .type=IO_READ},
        {.addr=0xaf8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0102) {
    const struct CPU_State initial_cpu = {.pc=0x7e23, .a=0x64, .x=0xc9, .y=0xae, .sp=0xc8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7e23, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7e24, .a=0x32, .x=0xc9, .y=0xae, .sp=0xc8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7e23, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7e23, .value=0x5c, .type=IO_READ},
        {.addr=0x7e24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf624, .a=0xa4, .x=0x86, .y=0x0c, .sp=0x6f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf624, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf625, .a=0x52, .x=0x86, .y=0x0c, .sp=0x6f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf624, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf624, .value=0x5c, .type=IO_READ},
        {.addr=0xf625, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0104) {
    const struct CPU_State initial_cpu = {.pc=0xd75c, .a=0x22, .x=0x26, .y=0xae, .sp=0x96, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xd75c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd75d, .a=0x11, .x=0x26, .y=0xae, .sp=0x96, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd75c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd75c, .value=0x5c, .type=IO_READ},
        {.addr=0xd75d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6664, .a=0x11, .x=0xaa, .y=0xae, .sp=0x2b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6664, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6665, .a=0x08, .x=0xaa, .y=0xae, .sp=0x2b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6664, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6664, .value=0x5c, .type=IO_READ},
        {.addr=0x6665, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0106) {
    const struct CPU_State initial_cpu = {.pc=0x240c, .a=0xba, .x=0x86, .y=0x66, .sp=0x13, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x240c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x240d, .a=0x5d, .x=0x86, .y=0x66, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x240c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x240c, .value=0x5c, .type=IO_READ},
        {.addr=0x240d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0107) {
    const struct CPU_State initial_cpu = {.pc=0xab83, .a=0x4a, .x=0x49, .y=0xf8, .sp=0xb5, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xab83, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xab84, .a=0x25, .x=0x49, .y=0xf8, .sp=0xb5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xab83, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xab83, .value=0x5c, .type=IO_READ},
        {.addr=0xab84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0108) {
    const struct CPU_State initial_cpu = {.pc=0xb46c, .a=0x61, .x=0x94, .y=0x87, .sp=0xa7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb46c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb46d, .a=0x30, .x=0x94, .y=0x87, .sp=0xa7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb46c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb46c, .value=0x5c, .type=IO_READ},
        {.addr=0xb46d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0109) {
    const struct CPU_State initial_cpu = {.pc=0xb2ed, .a=0x89, .x=0x08, .y=0x99, .sp=0x16, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb2ee, .a=0x44, .x=0x08, .y=0x99, .sp=0x16, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb2ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb2ed, .value=0x5c, .type=IO_READ},
        {.addr=0xb2ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010A) {
    const struct CPU_State initial_cpu = {.pc=0x1173, .a=0xf3, .x=0x99, .y=0xea, .sp=0xea, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1173, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1174, .a=0x79, .x=0x99, .y=0xea, .sp=0xea, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1173, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1173, .value=0x5c, .type=IO_READ},
        {.addr=0x1174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010B) {
    const struct CPU_State initial_cpu = {.pc=0x040d, .a=0x91, .x=0xca, .y=0x43, .sp=0x96, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x040d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x040e, .a=0x48, .x=0xca, .y=0x43, .sp=0x96, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x040d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x040d, .value=0x5c, .type=IO_READ},
        {.addr=0x040e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010C) {
    const struct CPU_State initial_cpu = {.pc=0xdac4, .a=0x7f, .x=0x81, .y=0x9e, .sp=0x35, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xdac4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdac5, .a=0x3f, .x=0x81, .y=0x9e, .sp=0x35, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xdac4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdac4, .value=0x5c, .type=IO_READ},
        {.addr=0xdac5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010D) {
    const struct CPU_State initial_cpu = {.pc=0x0e79, .a=0x87, .x=0x99, .y=0xef, .sp=0x5a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e79, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0e7a, .a=0x43, .x=0x99, .y=0xef, .sp=0x5a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0e79, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0e79, .value=0x5c, .type=IO_READ},
        {.addr=0x0e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010E) {
    const struct CPU_State initial_cpu = {.pc=0x6be1, .a=0x94, .x=0x3c, .y=0x2f, .sp=0x41, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6be1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6be2, .a=0x4a, .x=0x3c, .y=0x2f, .sp=0x41, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6be1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6be1, .value=0x5c, .type=IO_READ},
        {.addr=0x6be2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_010F) {
    const struct CPU_State initial_cpu = {.pc=0xf88f, .a=0x10, .x=0x48, .y=0x45, .sp=0x7b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf88f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf890, .a=0x08, .x=0x48, .y=0x45, .sp=0x7b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf88f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf88f, .value=0x5c, .type=IO_READ},
        {.addr=0xf890, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0110) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0x2e, .x=0x90, .y=0x47, .sp=0x50, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6e41, .a=0x17, .x=0x90, .y=0x47, .sp=0x50, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0x5c, .type=IO_READ},
        {.addr=0x6e41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0111) {
    const struct CPU_State initial_cpu = {.pc=0xe8cf, .a=0x31, .x=0x5d, .y=0x82, .sp=0xf1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe8cf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe8d0, .a=0x18, .x=0x5d, .y=0x82, .sp=0xf1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe8cf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe8cf, .value=0x5c, .type=IO_READ},
        {.addr=0xe8d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb646, .a=0xf0, .x=0x6a, .y=0x06, .sp=0xb0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb646, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb647, .a=0x78, .x=0x6a, .y=0x06, .sp=0xb0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb646, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb646, .value=0x5c, .type=IO_READ},
        {.addr=0xb647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0113) {
    const struct CPU_State initial_cpu = {.pc=0x0b31, .a=0x94, .x=0x61, .y=0x58, .sp=0xae, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0b31, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0b32, .a=0x4a, .x=0x61, .y=0x58, .sp=0xae, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0b31, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0b31, .value=0x5c, .type=IO_READ},
        {.addr=0x0b32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0114) {
    const struct CPU_State initial_cpu = {.pc=0x950b, .a=0x6b, .x=0xc6, .y=0xda, .sp=0xb3, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x950b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x950c, .a=0x35, .x=0xc6, .y=0xda, .sp=0xb3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x950b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x950b, .value=0x5c, .type=IO_READ},
        {.addr=0x950c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0115) {
    const struct CPU_State initial_cpu = {.pc=0xcdb4, .a=0xee, .x=0x63, .y=0xe8, .sp=0x42, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcdb5, .a=0x77, .x=0x63, .y=0xe8, .sp=0x42, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcdb4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcdb4, .value=0x5c, .type=IO_READ},
        {.addr=0xcdb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0116) {
    const struct CPU_State initial_cpu = {.pc=0xffcf, .a=0x1f, .x=0x5a, .y=0x17, .sp=0x2a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xffcf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xffd0, .a=0x0f, .x=0x5a, .y=0x17, .sp=0x2a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xffcf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xffcf, .value=0x5c, .type=IO_READ},
        {.addr=0xffd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2750, .a=0xa6, .x=0x03, .y=0xfe, .sp=0xaa, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2750, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2751, .a=0x53, .x=0x03, .y=0xfe, .sp=0xaa, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2750, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2750, .value=0x5c, .type=IO_READ},
        {.addr=0x2751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0118) {
    const struct CPU_State initial_cpu = {.pc=0x1dfa, .a=0xae, .x=0x27, .y=0xfd, .sp=0x7f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1dfa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1dfb, .a=0x57, .x=0x27, .y=0xfd, .sp=0x7f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1dfa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1dfa, .value=0x5c, .type=IO_READ},
        {.addr=0x1dfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0119) {
    const struct CPU_State initial_cpu = {.pc=0xbc61, .a=0x18, .x=0xa0, .y=0x52, .sp=0x49, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xbc61, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbc62, .a=0x0c, .x=0xa0, .y=0x52, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbc61, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbc61, .value=0x5c, .type=IO_READ},
        {.addr=0xbc62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011A) {
    const struct CPU_State initial_cpu = {.pc=0xb6bc, .a=0x63, .x=0xaa, .y=0xd6, .sp=0xb3, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb6bc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb6bd, .a=0x31, .x=0xaa, .y=0xd6, .sp=0xb3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb6bc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb6bc, .value=0x5c, .type=IO_READ},
        {.addr=0xb6bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011B) {
    const struct CPU_State initial_cpu = {.pc=0x141f, .a=0xbc, .x=0x7b, .y=0x86, .sp=0x90, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x141f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1420, .a=0x5e, .x=0x7b, .y=0x86, .sp=0x90, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x141f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x141f, .value=0x5c, .type=IO_READ},
        {.addr=0x1420, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011C) {
    const struct CPU_State initial_cpu = {.pc=0xe950, .a=0x45, .x=0xae, .y=0xc9, .sp=0xa6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe950, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe951, .a=0x22, .x=0xae, .y=0xc9, .sp=0xa6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe950, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe950, .value=0x5c, .type=IO_READ},
        {.addr=0xe951, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011D) {
    const struct CPU_State initial_cpu = {.pc=0xfb6a, .a=0x3a, .x=0x34, .y=0x3a, .sp=0xf0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfb6b, .a=0x1d, .x=0x34, .y=0x3a, .sp=0xf0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfb6a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfb6a, .value=0x5c, .type=IO_READ},
        {.addr=0xfb6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011E) {
    const struct CPU_State initial_cpu = {.pc=0x33ee, .a=0x0d, .x=0xd7, .y=0x3e, .sp=0x31, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x33ee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x33ef, .a=0x06, .x=0xd7, .y=0x3e, .sp=0x31, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x33ee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x33ee, .value=0x5c, .type=IO_READ},
        {.addr=0x33ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_011F) {
    const struct CPU_State initial_cpu = {.pc=0xbd22, .a=0x7c, .x=0xf4, .y=0x51, .sp=0x4a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xbd22, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd23, .a=0x3e, .x=0xf4, .y=0x51, .sp=0x4a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbd22, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd22, .value=0x5c, .type=IO_READ},
        {.addr=0xbd23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0120) {
    const struct CPU_State initial_cpu = {.pc=0xa78f, .a=0x39, .x=0xbf, .y=0x24, .sp=0x39, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa78f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa790, .a=0x1c, .x=0xbf, .y=0x24, .sp=0x39, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa78f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa78f, .value=0x5c, .type=IO_READ},
        {.addr=0xa790, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0121) {
    const struct CPU_State initial_cpu = {.pc=0x36b0, .a=0xc1, .x=0x7c, .y=0x76, .sp=0xee, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x36b0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x36b1, .a=0x60, .x=0x7c, .y=0x76, .sp=0xee, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x36b0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x36b0, .value=0x5c, .type=IO_READ},
        {.addr=0x36b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0122) {
    const struct CPU_State initial_cpu = {.pc=0x33ff, .a=0xc7, .x=0xa4, .y=0xbc, .sp=0xd7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x33ff, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3400, .a=0x63, .x=0xa4, .y=0xbc, .sp=0xd7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x33ff, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x33ff, .value=0x5c, .type=IO_READ},
        {.addr=0x3400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0123) {
    const struct CPU_State initial_cpu = {.pc=0xedba, .a=0x28, .x=0x4e, .y=0x3d, .sp=0x60, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xedba, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xedbb, .a=0x14, .x=0x4e, .y=0x3d, .sp=0x60, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xedba, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xedba, .value=0x5c, .type=IO_READ},
        {.addr=0xedbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0124) {
    const struct CPU_State initial_cpu = {.pc=0x5230, .a=0xbd, .x=0x8a, .y=0x23, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5230, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5231, .a=0x5e, .x=0x8a, .y=0x23, .sp=0x2e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5230, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5230, .value=0x5c, .type=IO_READ},
        {.addr=0x5231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0125) {
    const struct CPU_State initial_cpu = {.pc=0x2224, .a=0xbe, .x=0x15, .y=0x85, .sp=0x32, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x2224, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2225, .a=0x5f, .x=0x15, .y=0x85, .sp=0x32, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2224, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2224, .value=0x5c, .type=IO_READ},
        {.addr=0x2225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0126) {
    const struct CPU_State initial_cpu = {.pc=0xd1c4, .a=0x4f, .x=0x13, .y=0xb0, .sp=0xbb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1c5, .a=0x27, .x=0x13, .y=0xb0, .sp=0xbb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd1c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1c4, .value=0x5c, .type=IO_READ},
        {.addr=0xd1c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0127) {
    const struct CPU_State initial_cpu = {.pc=0x7787, .a=0x4f, .x=0xe5, .y=0xe7, .sp=0x92, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x7787, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0x27, .x=0xe5, .y=0xe7, .sp=0x92, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7787, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7787, .value=0x5c, .type=IO_READ},
        {.addr=0x7788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0128) {
    const struct CPU_State initial_cpu = {.pc=0x7401, .a=0x8a, .x=0x09, .y=0x08, .sp=0x13, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7401, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7402, .a=0x45, .x=0x09, .y=0x08, .sp=0x13, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7401, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7401, .value=0x5c, .type=IO_READ},
        {.addr=0x7402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0129) {
    const struct CPU_State initial_cpu = {.pc=0xdf41, .a=0xbe, .x=0x70, .y=0xd0, .sp=0x68, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xdf41, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdf42, .a=0x5f, .x=0x70, .y=0xd0, .sp=0x68, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xdf41, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdf41, .value=0x5c, .type=IO_READ},
        {.addr=0xdf42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012A) {
    const struct CPU_State initial_cpu = {.pc=0x6aed, .a=0xa2, .x=0xc6, .y=0x39, .sp=0x37, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x6aed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6aee, .a=0x51, .x=0xc6, .y=0x39, .sp=0x37, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6aed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6aed, .value=0x5c, .type=IO_READ},
        {.addr=0x6aee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc25b, .a=0x49, .x=0x3d, .y=0x63, .sp=0xe9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc25b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc25c, .a=0x24, .x=0x3d, .y=0x63, .sp=0xe9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc25b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc25b, .value=0x5c, .type=IO_READ},
        {.addr=0xc25c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc57a, .a=0xc0, .x=0xd5, .y=0x5e, .sp=0xac, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc57a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc57b, .a=0x60, .x=0xd5, .y=0x5e, .sp=0xac, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc57a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc57a, .value=0x5c, .type=IO_READ},
        {.addr=0xc57b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012D) {
    const struct CPU_State initial_cpu = {.pc=0x6458, .a=0x3a, .x=0x37, .y=0x16, .sp=0x8f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6458, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6459, .a=0x1d, .x=0x37, .y=0x16, .sp=0x8f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6458, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6458, .value=0x5c, .type=IO_READ},
        {.addr=0x6459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012E) {
    const struct CPU_State initial_cpu = {.pc=0x0662, .a=0xde, .x=0xe9, .y=0x25, .sp=0xff, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0662, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0663, .a=0x6f, .x=0xe9, .y=0x25, .sp=0xff, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0662, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0662, .value=0x5c, .type=IO_READ},
        {.addr=0x0663, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_012F) {
    const struct CPU_State initial_cpu = {.pc=0x8100, .a=0x8a, .x=0xdc, .y=0x29, .sp=0xb5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8100, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8101, .a=0x45, .x=0xdc, .y=0x29, .sp=0xb5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8100, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8100, .value=0x5c, .type=IO_READ},
        {.addr=0x8101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0130) {
    const struct CPU_State initial_cpu = {.pc=0x80f8, .a=0xbf, .x=0xee, .y=0xbc, .sp=0x88, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x80f8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x80f9, .a=0x5f, .x=0xee, .y=0xbc, .sp=0x88, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x80f8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x80f8, .value=0x5c, .type=IO_READ},
        {.addr=0x80f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0131) {
    const struct CPU_State initial_cpu = {.pc=0x800a, .a=0x0e, .x=0x70, .y=0x30, .sp=0x5c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x800a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x800b, .a=0x07, .x=0x70, .y=0x30, .sp=0x5c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x800a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x800a, .value=0x5c, .type=IO_READ},
        {.addr=0x800b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0132) {
    const struct CPU_State initial_cpu = {.pc=0x5190, .a=0xe0, .x=0x7c, .y=0xcc, .sp=0x5e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5190, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5191, .a=0x70, .x=0x7c, .y=0xcc, .sp=0x5e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5190, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5190, .value=0x5c, .type=IO_READ},
        {.addr=0x5191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0133) {
    const struct CPU_State initial_cpu = {.pc=0x515f, .a=0x1b, .x=0xc8, .y=0x83, .sp=0xb6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x515f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0x0d, .x=0xc8, .y=0x83, .sp=0xb6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x515f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x515f, .value=0x5c, .type=IO_READ},
        {.addr=0x5160, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0134) {
    const struct CPU_State initial_cpu = {.pc=0x2c23, .a=0x50, .x=0xf8, .y=0xf9, .sp=0xc6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2c23, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2c24, .a=0x28, .x=0xf8, .y=0xf9, .sp=0xc6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2c23, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2c23, .value=0x5c, .type=IO_READ},
        {.addr=0x2c24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0135) {
    const struct CPU_State initial_cpu = {.pc=0xeb49, .a=0xf1, .x=0x59, .y=0x05, .sp=0x84, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xeb49, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeb4a, .a=0x78, .x=0x59, .y=0x05, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xeb49, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeb49, .value=0x5c, .type=IO_READ},
        {.addr=0xeb4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0136) {
    const struct CPU_State initial_cpu = {.pc=0xaf38, .a=0x22, .x=0x05, .y=0xde, .sp=0xa7, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xaf38, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaf39, .a=0x11, .x=0x05, .y=0xde, .sp=0xa7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xaf38, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaf38, .value=0x5c, .type=IO_READ},
        {.addr=0xaf39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0137) {
    const struct CPU_State initial_cpu = {.pc=0x3150, .a=0xe6, .x=0xe4, .y=0x41, .sp=0xd9, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3150, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3151, .a=0x73, .x=0xe4, .y=0x41, .sp=0xd9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3150, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3150, .value=0x5c, .type=IO_READ},
        {.addr=0x3151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0138) {
    const struct CPU_State initial_cpu = {.pc=0x1580, .a=0xf4, .x=0x5b, .y=0x59, .sp=0x65, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1580, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1581, .a=0x7a, .x=0x5b, .y=0x59, .sp=0x65, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1580, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1580, .value=0x5c, .type=IO_READ},
        {.addr=0x1581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0139) {
    const struct CPU_State initial_cpu = {.pc=0x3ca5, .a=0xa1, .x=0xab, .y=0x95, .sp=0x13, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3ca6, .a=0x50, .x=0xab, .y=0x95, .sp=0x13, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3ca5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3ca5, .value=0x5c, .type=IO_READ},
        {.addr=0x3ca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013A) {
    const struct CPU_State initial_cpu = {.pc=0x15df, .a=0xd3, .x=0xbd, .y=0xd9, .sp=0xed, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x15df, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x15e0, .a=0x69, .x=0xbd, .y=0xd9, .sp=0xed, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x15df, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x15df, .value=0x5c, .type=IO_READ},
        {.addr=0x15e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013B) {
    const struct CPU_State initial_cpu = {.pc=0x4ea2, .a=0xf1, .x=0x28, .y=0xd6, .sp=0x8e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4ea3, .a=0x78, .x=0x28, .y=0xd6, .sp=0x8e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4ea2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4ea2, .value=0x5c, .type=IO_READ},
        {.addr=0x4ea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013C) {
    const struct CPU_State initial_cpu = {.pc=0x5d73, .a=0x63, .x=0x59, .y=0x0a, .sp=0xdb, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5d73, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5d74, .a=0x31, .x=0x59, .y=0x0a, .sp=0xdb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5d73, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5d73, .value=0x5c, .type=IO_READ},
        {.addr=0x5d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013D) {
    const struct CPU_State initial_cpu = {.pc=0xd21f, .a=0x77, .x=0xff, .y=0x0e, .sp=0x65, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd21f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd220, .a=0x3b, .x=0xff, .y=0x0e, .sp=0x65, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd21f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd21f, .value=0x5c, .type=IO_READ},
        {.addr=0xd220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013E) {
    const struct CPU_State initial_cpu = {.pc=0x8339, .a=0xe4, .x=0xe8, .y=0x45, .sp=0x60, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8339, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x833a, .a=0x72, .x=0xe8, .y=0x45, .sp=0x60, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8339, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8339, .value=0x5c, .type=IO_READ},
        {.addr=0x833a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_013F) {
    const struct CPU_State initial_cpu = {.pc=0x814d, .a=0x49, .x=0x82, .y=0x29, .sp=0xe5, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x814d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x814e, .a=0x24, .x=0x82, .y=0x29, .sp=0xe5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x814d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x814d, .value=0x5c, .type=IO_READ},
        {.addr=0x814e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0140) {
    const struct CPU_State initial_cpu = {.pc=0xe22e, .a=0x93, .x=0x00, .y=0x91, .sp=0x51, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe22e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe22f, .a=0x49, .x=0x00, .y=0x91, .sp=0x51, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe22e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe22e, .value=0x5c, .type=IO_READ},
        {.addr=0xe22f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0141) {
    const struct CPU_State initial_cpu = {.pc=0x211f, .a=0xdf, .x=0x86, .y=0x95, .sp=0xff, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x211f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2120, .a=0x6f, .x=0x86, .y=0x95, .sp=0xff, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x211f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x211f, .value=0x5c, .type=IO_READ},
        {.addr=0x2120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0142) {
    const struct CPU_State initial_cpu = {.pc=0xf1ac, .a=0x0f, .x=0xfb, .y=0x7f, .sp=0x62, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ac, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf1ad, .a=0x07, .x=0xfb, .y=0x7f, .sp=0x62, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf1ac, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf1ac, .value=0x5c, .type=IO_READ},
        {.addr=0xf1ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0143) {
    const struct CPU_State initial_cpu = {.pc=0x7611, .a=0xad, .x=0xa5, .y=0x64, .sp=0xf6, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7611, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7612, .a=0x56, .x=0xa5, .y=0x64, .sp=0xf6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7611, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7611, .value=0x5c, .type=IO_READ},
        {.addr=0x7612, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0144) {
    const struct CPU_State initial_cpu = {.pc=0xcf40, .a=0x4a, .x=0x77, .y=0x6b, .sp=0xed, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xcf40, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcf41, .a=0x25, .x=0x77, .y=0x6b, .sp=0xed, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcf40, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcf40, .value=0x5c, .type=IO_READ},
        {.addr=0xcf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0145) {
    const struct CPU_State initial_cpu = {.pc=0x5430, .a=0x87, .x=0xb0, .y=0x05, .sp=0x60, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5430, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5431, .a=0x43, .x=0xb0, .y=0x05, .sp=0x60, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5430, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5430, .value=0x5c, .type=IO_READ},
        {.addr=0x5431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0146) {
    const struct CPU_State initial_cpu = {.pc=0x98b3, .a=0x84, .x=0x5e, .y=0xb5, .sp=0x2f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x98b3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x98b4, .a=0x42, .x=0x5e, .y=0xb5, .sp=0x2f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x98b3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x98b3, .value=0x5c, .type=IO_READ},
        {.addr=0x98b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0147) {
    const struct CPU_State initial_cpu = {.pc=0xc21f, .a=0xc8, .x=0x52, .y=0x05, .sp=0xdf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc21f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc220, .a=0x64, .x=0x52, .y=0x05, .sp=0xdf, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc21f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc21f, .value=0x5c, .type=IO_READ},
        {.addr=0xc220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0148) {
    const struct CPU_State initial_cpu = {.pc=0x3a2d, .a=0x9b, .x=0xb2, .y=0xd1, .sp=0xd0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3a2d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3a2e, .a=0x4d, .x=0xb2, .y=0xd1, .sp=0xd0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3a2d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3a2d, .value=0x5c, .type=IO_READ},
        {.addr=0x3a2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0149) {
    const struct CPU_State initial_cpu = {.pc=0x5b73, .a=0x8c, .x=0x42, .y=0x73, .sp=0x8a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5b73, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5b74, .a=0x46, .x=0x42, .y=0x73, .sp=0x8a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5b73, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5b73, .value=0x5c, .type=IO_READ},
        {.addr=0x5b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014A) {
    const struct CPU_State initial_cpu = {.pc=0xfc49, .a=0x1e, .x=0x65, .y=0x62, .sp=0x38, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xfc49, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfc4a, .a=0x0f, .x=0x65, .y=0x62, .sp=0x38, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfc49, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfc49, .value=0x5c, .type=IO_READ},
        {.addr=0xfc4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014B) {
    const struct CPU_State initial_cpu = {.pc=0x753e, .a=0xaa, .x=0x5b, .y=0xe6, .sp=0xee, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x753e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x753f, .a=0x55, .x=0x5b, .y=0xe6, .sp=0xee, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x753e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x753e, .value=0x5c, .type=IO_READ},
        {.addr=0x753f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014C) {
    const struct CPU_State initial_cpu = {.pc=0x6e29, .a=0xaf, .x=0x72, .y=0xad, .sp=0x76, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6e29, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6e2a, .a=0x57, .x=0x72, .y=0xad, .sp=0x76, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6e29, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6e29, .value=0x5c, .type=IO_READ},
        {.addr=0x6e2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf8bf, .a=0x2c, .x=0x00, .y=0x73, .sp=0x49, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf8c0, .a=0x16, .x=0x00, .y=0x73, .sp=0x49, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf8bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf8bf, .value=0x5c, .type=IO_READ},
        {.addr=0xf8c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014E) {
    const struct CPU_State initial_cpu = {.pc=0xe6f8, .a=0xd5, .x=0x03, .y=0xdb, .sp=0x22, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe6f9, .a=0x6a, .x=0x03, .y=0xdb, .sp=0x22, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe6f8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe6f8, .value=0x5c, .type=IO_READ},
        {.addr=0xe6f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_014F) {
    const struct CPU_State initial_cpu = {.pc=0x2834, .a=0x56, .x=0x6b, .y=0x95, .sp=0x59, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2834, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2835, .a=0x2b, .x=0x6b, .y=0x95, .sp=0x59, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x2834, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2834, .value=0x5c, .type=IO_READ},
        {.addr=0x2835, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0150) {
    const struct CPU_State initial_cpu = {.pc=0x06bf, .a=0xaa, .x=0xb2, .y=0x1c, .sp=0x52, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x06bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x06c0, .a=0x55, .x=0xb2, .y=0x1c, .sp=0x52, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x06bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x06bf, .value=0x5c, .type=IO_READ},
        {.addr=0x06c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0151) {
    const struct CPU_State initial_cpu = {.pc=0x821c, .a=0x90, .x=0x40, .y=0xed, .sp=0x44, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x821c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0x48, .x=0x40, .y=0xed, .sp=0x44, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x821c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x821c, .value=0x5c, .type=IO_READ},
        {.addr=0x821d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0152) {
    const struct CPU_State initial_cpu = {.pc=0xd246, .a=0x4b, .x=0x00, .y=0x05, .sp=0x8d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd246, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd247, .a=0x25, .x=0x00, .y=0x05, .sp=0x8d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd246, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd246, .value=0x5c, .type=IO_READ},
        {.addr=0xd247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0153) {
    const struct CPU_State initial_cpu = {.pc=0x8db4, .a=0x8e, .x=0xb6, .y=0x02, .sp=0x2a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8db4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8db5, .a=0x47, .x=0xb6, .y=0x02, .sp=0x2a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8db4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8db4, .value=0x5c, .type=IO_READ},
        {.addr=0x8db5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0154) {
    const struct CPU_State initial_cpu = {.pc=0xc710, .a=0x18, .x=0x83, .y=0xca, .sp=0x5c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc710, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc711, .a=0x0c, .x=0x83, .y=0xca, .sp=0x5c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc710, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc710, .value=0x5c, .type=IO_READ},
        {.addr=0xc711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0155) {
    const struct CPU_State initial_cpu = {.pc=0xa3f6, .a=0x22, .x=0x5f, .y=0xec, .sp=0x37, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa3f7, .a=0x11, .x=0x5f, .y=0xec, .sp=0x37, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa3f6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa3f6, .value=0x5c, .type=IO_READ},
        {.addr=0xa3f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0156) {
    const struct CPU_State initial_cpu = {.pc=0x1694, .a=0xfe, .x=0x69, .y=0xa1, .sp=0x73, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x1694, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1695, .a=0x7f, .x=0x69, .y=0xa1, .sp=0x73, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1694, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1694, .value=0x5c, .type=IO_READ},
        {.addr=0x1695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0157) {
    const struct CPU_State initial_cpu = {.pc=0xd2f0, .a=0x3f, .x=0xd3, .y=0xd5, .sp=0x46, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd2f0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd2f1, .a=0x1f, .x=0xd3, .y=0xd5, .sp=0x46, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd2f0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd2f0, .value=0x5c, .type=IO_READ},
        {.addr=0xd2f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0158) {
    const struct CPU_State initial_cpu = {.pc=0x0037, .a=0xba, .x=0xbe, .y=0x3b, .sp=0x9f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0038, .a=0x5d, .x=0xbe, .y=0x3b, .sp=0x9f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0037, .value=0x5c, .type=IO_READ},
        {.addr=0x0038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0159) {
    const struct CPU_State initial_cpu = {.pc=0xc3b3, .a=0x1d, .x=0x1d, .y=0xfc, .sp=0x98, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc3b4, .a=0x0e, .x=0x1d, .y=0xfc, .sp=0x98, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc3b3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc3b3, .value=0x5c, .type=IO_READ},
        {.addr=0xc3b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015A) {
    const struct CPU_State initial_cpu = {.pc=0xe484, .a=0x45, .x=0xb9, .y=0x79, .sp=0x66, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe484, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe485, .a=0x22, .x=0xb9, .y=0x79, .sp=0x66, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe484, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe484, .value=0x5c, .type=IO_READ},
        {.addr=0xe485, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe2f8, .a=0xaa, .x=0x28, .y=0xcd, .sp=0xfc, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe2f9, .a=0x55, .x=0x28, .y=0xcd, .sp=0xfc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe2f8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe2f8, .value=0x5c, .type=IO_READ},
        {.addr=0xe2f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1c2f, .a=0xfe, .x=0xf2, .y=0x17, .sp=0x1b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1c30, .a=0x7f, .x=0xf2, .y=0x17, .sp=0x1b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1c2f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1c2f, .value=0x5c, .type=IO_READ},
        {.addr=0x1c30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015D) {
    const struct CPU_State initial_cpu = {.pc=0x02ac, .a=0x86, .x=0x0e, .y=0xd7, .sp=0x0b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x02ac, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x02ad, .a=0x43, .x=0x0e, .y=0xd7, .sp=0x0b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x02ac, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x02ac, .value=0x5c, .type=IO_READ},
        {.addr=0x02ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa201, .a=0xfb, .x=0x82, .y=0xf1, .sp=0x71, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa201, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa202, .a=0x7d, .x=0x82, .y=0xf1, .sp=0x71, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa201, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa201, .value=0x5c, .type=IO_READ},
        {.addr=0xa202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_015F) {
    const struct CPU_State initial_cpu = {.pc=0xee89, .a=0x64, .x=0x0d, .y=0x9a, .sp=0xbe, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xee89, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xee8a, .a=0x32, .x=0x0d, .y=0x9a, .sp=0xbe, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xee89, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xee89, .value=0x5c, .type=IO_READ},
        {.addr=0xee8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0160) {
    const struct CPU_State initial_cpu = {.pc=0xe2fe, .a=0xa2, .x=0xdb, .y=0x7b, .sp=0x03, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2fe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe2ff, .a=0x51, .x=0xdb, .y=0x7b, .sp=0x03, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe2fe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe2fe, .value=0x5c, .type=IO_READ},
        {.addr=0xe2ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0161) {
    const struct CPU_State initial_cpu = {.pc=0xb8ff, .a=0xc4, .x=0x59, .y=0x0b, .sp=0x17, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ff, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb900, .a=0x62, .x=0x59, .y=0x0b, .sp=0x17, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb8ff, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb8ff, .value=0x5c, .type=IO_READ},
        {.addr=0xb900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0162) {
    const struct CPU_State initial_cpu = {.pc=0x4d9e, .a=0xd0, .x=0x97, .y=0x21, .sp=0x15, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4d9f, .a=0x68, .x=0x97, .y=0x21, .sp=0x15, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4d9e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4d9e, .value=0x5c, .type=IO_READ},
        {.addr=0x4d9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0163) {
    const struct CPU_State initial_cpu = {.pc=0x8cb0, .a=0xdd, .x=0x21, .y=0xe7, .sp=0x2f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8cb1, .a=0x6e, .x=0x21, .y=0xe7, .sp=0x2f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8cb0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8cb0, .value=0x5c, .type=IO_READ},
        {.addr=0x8cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0164) {
    const struct CPU_State initial_cpu = {.pc=0x5b35, .a=0x5f, .x=0x6e, .y=0x6f, .sp=0x3b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x5b35, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5b36, .a=0x2f, .x=0x6e, .y=0x6f, .sp=0x3b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5b35, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5b35, .value=0x5c, .type=IO_READ},
        {.addr=0x5b36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0165) {
    const struct CPU_State initial_cpu = {.pc=0xc0fd, .a=0xcb, .x=0x1f, .y=0xc4, .sp=0xb0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc0fe, .a=0x65, .x=0x1f, .y=0xc4, .sp=0xb0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc0fd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc0fd, .value=0x5c, .type=IO_READ},
        {.addr=0xc0fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0166) {
    const struct CPU_State initial_cpu = {.pc=0xfc3c, .a=0xb1, .x=0x6a, .y=0xf0, .sp=0x73, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xfc3c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfc3d, .a=0x58, .x=0x6a, .y=0xf0, .sp=0x73, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfc3c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfc3c, .value=0x5c, .type=IO_READ},
        {.addr=0xfc3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0167) {
    const struct CPU_State initial_cpu = {.pc=0xf9ef, .a=0xad, .x=0xa5, .y=0x23, .sp=0x66, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ef, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf9f0, .a=0x56, .x=0xa5, .y=0x23, .sp=0x66, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf9ef, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf9ef, .value=0x5c, .type=IO_READ},
        {.addr=0xf9f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0168) {
    const struct CPU_State initial_cpu = {.pc=0x52a0, .a=0x8f, .x=0xf8, .y=0xf7, .sp=0x49, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x52a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x52a1, .a=0x47, .x=0xf8, .y=0xf7, .sp=0x49, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x52a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x52a0, .value=0x5c, .type=IO_READ},
        {.addr=0x52a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9d27, .a=0x55, .x=0x60, .y=0x21, .sp=0xc3, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9d27, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9d28, .a=0x2a, .x=0x60, .y=0x21, .sp=0xc3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9d27, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9d27, .value=0x5c, .type=IO_READ},
        {.addr=0x9d28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016A) {
    const struct CPU_State initial_cpu = {.pc=0x3b7a, .a=0x26, .x=0x77, .y=0x23, .sp=0xa4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3b7a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3b7b, .a=0x13, .x=0x77, .y=0x23, .sp=0xa4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3b7a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3b7a, .value=0x5c, .type=IO_READ},
        {.addr=0x3b7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0be9, .a=0xd1, .x=0x7d, .y=0x0d, .sp=0x25, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0be9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0bea, .a=0x68, .x=0x7d, .y=0x0d, .sp=0x25, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0be9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0be9, .value=0x5c, .type=IO_READ},
        {.addr=0x0bea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016C) {
    const struct CPU_State initial_cpu = {.pc=0x8ab1, .a=0xc6, .x=0xd7, .y=0xc1, .sp=0x5b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8ab2, .a=0x63, .x=0xd7, .y=0xc1, .sp=0x5b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8ab1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8ab1, .value=0x5c, .type=IO_READ},
        {.addr=0x8ab2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016D) {
    const struct CPU_State initial_cpu = {.pc=0x8eb9, .a=0x6c, .x=0x71, .y=0xc0, .sp=0x53, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8eba, .a=0x36, .x=0x71, .y=0xc0, .sp=0x53, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8eb9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8eb9, .value=0x5c, .type=IO_READ},
        {.addr=0x8eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016E) {
    const struct CPU_State initial_cpu = {.pc=0x947f, .a=0x5a, .x=0xf5, .y=0xf7, .sp=0xf1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x947f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9480, .a=0x2d, .x=0xf5, .y=0xf7, .sp=0xf1, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x947f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x947f, .value=0x5c, .type=IO_READ},
        {.addr=0x9480, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_016F) {
    const struct CPU_State initial_cpu = {.pc=0x18ce, .a=0x58, .x=0x37, .y=0x84, .sp=0x50, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x18ce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x18cf, .a=0x2c, .x=0x37, .y=0x84, .sp=0x50, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x18ce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x18ce, .value=0x5c, .type=IO_READ},
        {.addr=0x18cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0170) {
    const struct CPU_State initial_cpu = {.pc=0xecc7, .a=0xb1, .x=0x62, .y=0x5f, .sp=0x82, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xecc7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xecc8, .a=0x58, .x=0x62, .y=0x5f, .sp=0x82, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xecc7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xecc7, .value=0x5c, .type=IO_READ},
        {.addr=0xecc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0171) {
    const struct CPU_State initial_cpu = {.pc=0x06ea, .a=0x9e, .x=0x9c, .y=0xef, .sp=0x9b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x06ea, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x06eb, .a=0x4f, .x=0x9c, .y=0xef, .sp=0x9b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x06ea, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x06ea, .value=0x5c, .type=IO_READ},
        {.addr=0x06eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0172) {
    const struct CPU_State initial_cpu = {.pc=0x5ef4, .a=0x1f, .x=0xd8, .y=0x3f, .sp=0x4a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5ef4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5ef5, .a=0x0f, .x=0xd8, .y=0x3f, .sp=0x4a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5ef4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5ef4, .value=0x5c, .type=IO_READ},
        {.addr=0x5ef5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0173) {
    const struct CPU_State initial_cpu = {.pc=0x0bb4, .a=0x8f, .x=0xa1, .y=0x34, .sp=0x04, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0bb5, .a=0x47, .x=0xa1, .y=0x34, .sp=0x04, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0bb4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0bb4, .value=0x5c, .type=IO_READ},
        {.addr=0x0bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0174) {
    const struct CPU_State initial_cpu = {.pc=0x21b7, .a=0x96, .x=0x22, .y=0x63, .sp=0x4d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x21b7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x21b8, .a=0x4b, .x=0x22, .y=0x63, .sp=0x4d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x21b7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x21b7, .value=0x5c, .type=IO_READ},
        {.addr=0x21b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0175) {
    const struct CPU_State initial_cpu = {.pc=0x7401, .a=0xb9, .x=0xe5, .y=0xd5, .sp=0x78, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7401, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7402, .a=0x5c, .x=0xe5, .y=0xd5, .sp=0x78, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7401, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7401, .value=0x5c, .type=IO_READ},
        {.addr=0x7402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0176) {
    const struct CPU_State initial_cpu = {.pc=0x2841, .a=0x14, .x=0x47, .y=0x6d, .sp=0x11, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2841, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2842, .a=0x0a, .x=0x47, .y=0x6d, .sp=0x11, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2841, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2841, .value=0x5c, .type=IO_READ},
        {.addr=0x2842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0177) {
    const struct CPU_State initial_cpu = {.pc=0xe999, .a=0xf6, .x=0x15, .y=0xeb, .sp=0xb4, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xe999, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe99a, .a=0x7b, .x=0x15, .y=0xeb, .sp=0xb4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe999, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe999, .value=0x5c, .type=IO_READ},
        {.addr=0xe99a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0178) {
    const struct CPU_State initial_cpu = {.pc=0xc991, .a=0xe2, .x=0x70, .y=0x54, .sp=0x4f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc991, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc992, .a=0x71, .x=0x70, .y=0x54, .sp=0x4f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xc991, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc991, .value=0x5c, .type=IO_READ},
        {.addr=0xc992, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0179) {
    const struct CPU_State initial_cpu = {.pc=0x3e79, .a=0x6c, .x=0xda, .y=0x36, .sp=0x1d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3e79, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3e7a, .a=0x36, .x=0xda, .y=0x36, .sp=0x1d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x3e79, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3e79, .value=0x5c, .type=IO_READ},
        {.addr=0x3e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017A) {
    const struct CPU_State initial_cpu = {.pc=0xcd37, .a=0x94, .x=0xa6, .y=0x9c, .sp=0x65, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xcd37, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcd38, .a=0x4a, .x=0xa6, .y=0x9c, .sp=0x65, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xcd37, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcd37, .value=0x5c, .type=IO_READ},
        {.addr=0xcd38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017B) {
    const struct CPU_State initial_cpu = {.pc=0xbc86, .a=0x5b, .x=0x35, .y=0x4d, .sp=0xbe, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbc86, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbc87, .a=0x2d, .x=0x35, .y=0x4d, .sp=0xbe, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbc86, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbc86, .value=0x5c, .type=IO_READ},
        {.addr=0xbc87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017C) {
    const struct CPU_State initial_cpu = {.pc=0xbd9a, .a=0x91, .x=0xae, .y=0xe8, .sp=0x3a, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbd9a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd9b, .a=0x48, .x=0xae, .y=0xe8, .sp=0x3a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbd9a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd9a, .value=0x5c, .type=IO_READ},
        {.addr=0xbd9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf87e, .a=0x58, .x=0x7c, .y=0xb5, .sp=0x20, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf87e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf87f, .a=0x2c, .x=0x7c, .y=0xb5, .sp=0x20, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf87e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf87e, .value=0x5c, .type=IO_READ},
        {.addr=0xf87f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017E) {
    const struct CPU_State initial_cpu = {.pc=0x21c5, .a=0x7c, .x=0x34, .y=0xa1, .sp=0x27, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x21c5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x21c6, .a=0x3e, .x=0x34, .y=0xa1, .sp=0x27, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x21c5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x21c5, .value=0x5c, .type=IO_READ},
        {.addr=0x21c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_017F) {
    const struct CPU_State initial_cpu = {.pc=0x366a, .a=0xbe, .x=0x3c, .y=0x20, .sp=0x64, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x366a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x366b, .a=0x5f, .x=0x3c, .y=0x20, .sp=0x64, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x366a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x366a, .value=0x5c, .type=IO_READ},
        {.addr=0x366b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0180) {
    const struct CPU_State initial_cpu = {.pc=0x2a7f, .a=0xc9, .x=0xf0, .y=0xeb, .sp=0x3f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2a80, .a=0x64, .x=0xf0, .y=0xeb, .sp=0x3f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2a7f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2a7f, .value=0x5c, .type=IO_READ},
        {.addr=0x2a80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0181) {
    const struct CPU_State initial_cpu = {.pc=0x8aa2, .a=0x2c, .x=0x82, .y=0xa3, .sp=0x21, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8aa3, .a=0x16, .x=0x82, .y=0xa3, .sp=0x21, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8aa2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8aa2, .value=0x5c, .type=IO_READ},
        {.addr=0x8aa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0182) {
    const struct CPU_State initial_cpu = {.pc=0x0883, .a=0xbf, .x=0x46, .y=0x99, .sp=0x51, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0883, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0884, .a=0x5f, .x=0x46, .y=0x99, .sp=0x51, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0883, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0883, .value=0x5c, .type=IO_READ},
        {.addr=0x0884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0183) {
    const struct CPU_State initial_cpu = {.pc=0xecd6, .a=0x8e, .x=0xe4, .y=0x0a, .sp=0xc3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xecd6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xecd7, .a=0x47, .x=0xe4, .y=0x0a, .sp=0xc3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xecd6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xecd6, .value=0x5c, .type=IO_READ},
        {.addr=0xecd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0184) {
    const struct CPU_State initial_cpu = {.pc=0x9449, .a=0x65, .x=0xa1, .y=0x02, .sp=0x35, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9449, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x944a, .a=0x32, .x=0xa1, .y=0x02, .sp=0x35, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9449, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9449, .value=0x5c, .type=IO_READ},
        {.addr=0x944a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0185) {
    const struct CPU_State initial_cpu = {.pc=0xa4c6, .a=0x93, .x=0x3e, .y=0xfc, .sp=0x4a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa4c7, .a=0x49, .x=0x3e, .y=0xfc, .sp=0x4a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa4c6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa4c6, .value=0x5c, .type=IO_READ},
        {.addr=0xa4c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0186) {
    const struct CPU_State initial_cpu = {.pc=0xe7f5, .a=0xae, .x=0xe1, .y=0xf6, .sp=0xcb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe7f6, .a=0x57, .x=0xe1, .y=0xf6, .sp=0xcb, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe7f5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe7f5, .value=0x5c, .type=IO_READ},
        {.addr=0xe7f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0187) {
    const struct CPU_State initial_cpu = {.pc=0xec8e, .a=0x28, .x=0x97, .y=0x94, .sp=0xa4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xec8e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xec8f, .a=0x14, .x=0x97, .y=0x94, .sp=0xa4, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xec8e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xec8e, .value=0x5c, .type=IO_READ},
        {.addr=0xec8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0188) {
    const struct CPU_State initial_cpu = {.pc=0xd9db, .a=0x0d, .x=0x33, .y=0x82, .sp=0xc2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd9db, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd9dc, .a=0x06, .x=0x33, .y=0x82, .sp=0xc2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd9db, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd9db, .value=0x5c, .type=IO_READ},
        {.addr=0xd9dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0189) {
    const struct CPU_State initial_cpu = {.pc=0x0402, .a=0x4f, .x=0x5a, .y=0xe9, .sp=0x3a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0402, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0403, .a=0x27, .x=0x5a, .y=0xe9, .sp=0x3a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0402, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0402, .value=0x5c, .type=IO_READ},
        {.addr=0x0403, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018A) {
    const struct CPU_State initial_cpu = {.pc=0x9ed0, .a=0xcd, .x=0xbb, .y=0xa3, .sp=0xd8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9ed0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9ed1, .a=0x66, .x=0xbb, .y=0xa3, .sp=0xd8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9ed0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9ed0, .value=0x5c, .type=IO_READ},
        {.addr=0x9ed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018B) {
    const struct CPU_State initial_cpu = {.pc=0x89b9, .a=0x6c, .x=0x0d, .y=0x2d, .sp=0x4a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x89b9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x89ba, .a=0x36, .x=0x0d, .y=0x2d, .sp=0x4a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x89b9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x89b9, .value=0x5c, .type=IO_READ},
        {.addr=0x89ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf2a9, .a=0x59, .x=0xd4, .y=0x3a, .sp=0xd9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2aa, .a=0x2c, .x=0xd4, .y=0x3a, .sp=0xd9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf2a9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2a9, .value=0x5c, .type=IO_READ},
        {.addr=0xf2aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018D) {
    const struct CPU_State initial_cpu = {.pc=0x86f1, .a=0x9e, .x=0x69, .y=0xa0, .sp=0xb2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x86f1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x86f2, .a=0x4f, .x=0x69, .y=0xa0, .sp=0xb2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x86f1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x86f1, .value=0x5c, .type=IO_READ},
        {.addr=0x86f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018E) {
    const struct CPU_State initial_cpu = {.pc=0x279c, .a=0xaa, .x=0x5d, .y=0xda, .sp=0x76, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x279c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x279d, .a=0x55, .x=0x5d, .y=0xda, .sp=0x76, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x279c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x279c, .value=0x5c, .type=IO_READ},
        {.addr=0x279d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe714, .a=0x62, .x=0xbb, .y=0xa8, .sp=0xdc, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe714, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe715, .a=0x31, .x=0xbb, .y=0xa8, .sp=0xdc, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe714, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe714, .value=0x5c, .type=IO_READ},
        {.addr=0xe715, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0190) {
    const struct CPU_State initial_cpu = {.pc=0x4d1d, .a=0x59, .x=0x93, .y=0xbc, .sp=0x1e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4d1d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4d1e, .a=0x2c, .x=0x93, .y=0xbc, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4d1d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4d1d, .value=0x5c, .type=IO_READ},
        {.addr=0x4d1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0191) {
    const struct CPU_State initial_cpu = {.pc=0xbad0, .a=0x39, .x=0xe5, .y=0x61, .sp=0xf0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xbad0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbad1, .a=0x1c, .x=0xe5, .y=0x61, .sp=0xf0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbad0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbad0, .value=0x5c, .type=IO_READ},
        {.addr=0xbad1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0192) {
    const struct CPU_State initial_cpu = {.pc=0x9bef, .a=0xae, .x=0xcc, .y=0x76, .sp=0xaf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x9bef, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9bf0, .a=0x57, .x=0xcc, .y=0x76, .sp=0xaf, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9bef, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9bef, .value=0x5c, .type=IO_READ},
        {.addr=0x9bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0e58, .a=0xb5, .x=0x7b, .y=0x95, .sp=0xd8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0e58, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0e59, .a=0x5a, .x=0x7b, .y=0x95, .sp=0xd8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0e58, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0e58, .value=0x5c, .type=IO_READ},
        {.addr=0x0e59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0194) {
    const struct CPU_State initial_cpu = {.pc=0x08b8, .a=0x4b, .x=0xa1, .y=0xcb, .sp=0x54, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x08b8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x08b9, .a=0x25, .x=0xa1, .y=0xcb, .sp=0x54, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x08b8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x08b8, .value=0x5c, .type=IO_READ},
        {.addr=0x08b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0195) {
    const struct CPU_State initial_cpu = {.pc=0xcaa9, .a=0x03, .x=0xce, .y=0xd0, .sp=0x2b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcaaa, .a=0x01, .x=0xce, .y=0xd0, .sp=0x2b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcaa9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcaa9, .value=0x5c, .type=IO_READ},
        {.addr=0xcaaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0196) {
    const struct CPU_State initial_cpu = {.pc=0x3e8b, .a=0xc6, .x=0xb6, .y=0xc6, .sp=0x5f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3e8c, .a=0x63, .x=0xb6, .y=0xc6, .sp=0x5f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3e8b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3e8b, .value=0x5c, .type=IO_READ},
        {.addr=0x3e8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0197) {
    const struct CPU_State initial_cpu = {.pc=0xf3bc, .a=0x12, .x=0x2b, .y=0xee, .sp=0x50, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf3bc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf3bd, .a=0x09, .x=0x2b, .y=0xee, .sp=0x50, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf3bc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf3bc, .value=0x5c, .type=IO_READ},
        {.addr=0xf3bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0198) {
    const struct CPU_State initial_cpu = {.pc=0x3aa3, .a=0xb5, .x=0xef, .y=0x4e, .sp=0x9b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3aa4, .a=0x5a, .x=0xef, .y=0x4e, .sp=0x9b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3aa3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3aa3, .value=0x5c, .type=IO_READ},
        {.addr=0x3aa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0199) {
    const struct CPU_State initial_cpu = {.pc=0xcd7c, .a=0xfc, .x=0x81, .y=0x6c, .sp=0x97, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xcd7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcd7d, .a=0x7e, .x=0x81, .y=0x6c, .sp=0x97, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcd7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcd7c, .value=0x5c, .type=IO_READ},
        {.addr=0xcd7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb14e, .a=0x01, .x=0xa6, .y=0xe5, .sp=0x48, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb14e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb14f, .a=0x00, .x=0xa6, .y=0xe5, .sp=0x48, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xb14e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb14e, .value=0x5c, .type=IO_READ},
        {.addr=0xb14f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019B) {
    const struct CPU_State initial_cpu = {.pc=0x0841, .a=0x0f, .x=0xf3, .y=0x8e, .sp=0x45, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0841, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0842, .a=0x07, .x=0xf3, .y=0x8e, .sp=0x45, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0841, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0841, .value=0x5c, .type=IO_READ},
        {.addr=0x0842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019C) {
    const struct CPU_State initial_cpu = {.pc=0xf2ec, .a=0xf0, .x=0x05, .y=0x62, .sp=0xaf, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ec, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2ed, .a=0x78, .x=0x05, .y=0x62, .sp=0xaf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf2ec, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2ec, .value=0x5c, .type=IO_READ},
        {.addr=0xf2ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019D) {
    const struct CPU_State initial_cpu = {.pc=0x148f, .a=0x2e, .x=0x22, .y=0xd4, .sp=0xb7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x148f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1490, .a=0x17, .x=0x22, .y=0xd4, .sp=0xb7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x148f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x148f, .value=0x5c, .type=IO_READ},
        {.addr=0x1490, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019E) {
    const struct CPU_State initial_cpu = {.pc=0xbe16, .a=0xfb, .x=0xcd, .y=0xdf, .sp=0x07, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xbe16, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbe17, .a=0x7d, .x=0xcd, .y=0xdf, .sp=0x07, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbe16, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbe16, .value=0x5c, .type=IO_READ},
        {.addr=0xbe17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_019F) {
    const struct CPU_State initial_cpu = {.pc=0x06ae, .a=0x04, .x=0xb9, .y=0x38, .sp=0x62, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x06ae, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x06af, .a=0x02, .x=0xb9, .y=0x38, .sp=0x62, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x06ae, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x06ae, .value=0x5c, .type=IO_READ},
        {.addr=0x06af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6368, .a=0x48, .x=0x1c, .y=0xe2, .sp=0xd4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6368, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6369, .a=0x24, .x=0x1c, .y=0xe2, .sp=0xd4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6368, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6368, .value=0x5c, .type=IO_READ},
        {.addr=0x6369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x159d, .a=0xdf, .x=0x96, .y=0x67, .sp=0xbc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x159d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x159e, .a=0x6f, .x=0x96, .y=0x67, .sp=0xbc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x159d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x159d, .value=0x5c, .type=IO_READ},
        {.addr=0x159e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd3d3, .a=0x12, .x=0x67, .y=0xe9, .sp=0x19, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd3d4, .a=0x09, .x=0x67, .y=0xe9, .sp=0x19, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd3d3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd3d3, .value=0x5c, .type=IO_READ},
        {.addr=0xd3d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x0c46, .a=0xef, .x=0xa8, .y=0xd6, .sp=0x96, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c46, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0c47, .a=0x77, .x=0xa8, .y=0xd6, .sp=0x96, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0c46, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0c46, .value=0x5c, .type=IO_READ},
        {.addr=0x0c47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x611f, .a=0x45, .x=0xf8, .y=0xd8, .sp=0x69, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x611f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6120, .a=0x22, .x=0xf8, .y=0xd8, .sp=0x69, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x611f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x611f, .value=0x5c, .type=IO_READ},
        {.addr=0x6120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xe6d8, .a=0x29, .x=0xd8, .y=0x24, .sp=0x76, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe6d9, .a=0x14, .x=0xd8, .y=0x24, .sp=0x76, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe6d8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe6d8, .value=0x5c, .type=IO_READ},
        {.addr=0xe6d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x6fc1, .a=0x8a, .x=0x94, .y=0x14, .sp=0x89, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6fc1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6fc2, .a=0x45, .x=0x94, .y=0x14, .sp=0x89, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6fc1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6fc1, .value=0x5c, .type=IO_READ},
        {.addr=0x6fc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x5de8, .a=0x33, .x=0x21, .y=0xa7, .sp=0x54, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5de8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5de9, .a=0x19, .x=0x21, .y=0xa7, .sp=0x54, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5de8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5de8, .value=0x5c, .type=IO_READ},
        {.addr=0x5de9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xd57d, .a=0x3e, .x=0x81, .y=0x07, .sp=0x68, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd57d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd57e, .a=0x1f, .x=0x81, .y=0x07, .sp=0x68, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd57d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd57d, .value=0x5c, .type=IO_READ},
        {.addr=0xd57e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5a23, .a=0x41, .x=0x49, .y=0x41, .sp=0x54, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5a23, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5a24, .a=0x20, .x=0x49, .y=0x41, .sp=0x54, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5a23, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5a23, .value=0x5c, .type=IO_READ},
        {.addr=0x5a24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4163, .a=0x89, .x=0xf0, .y=0x4b, .sp=0xc6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x4163, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4164, .a=0x44, .x=0xf0, .y=0x4b, .sp=0xc6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4163, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4163, .value=0x5c, .type=IO_READ},
        {.addr=0x4164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xf36c, .a=0x0a, .x=0x03, .y=0xd7, .sp=0xbf, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf36c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf36d, .a=0x05, .x=0x03, .y=0xd7, .sp=0xbf, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf36c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf36c, .value=0x5c, .type=IO_READ},
        {.addr=0xf36d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x24e7, .a=0x82, .x=0x92, .y=0xaf, .sp=0x1a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x24e7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x24e8, .a=0x41, .x=0x92, .y=0xaf, .sp=0x1a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x24e7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x24e7, .value=0x5c, .type=IO_READ},
        {.addr=0x24e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xd27f, .a=0xfe, .x=0x6f, .y=0xbb, .sp=0x32, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd27f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd280, .a=0x7f, .x=0x6f, .y=0xbb, .sp=0x32, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd27f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd27f, .value=0x5c, .type=IO_READ},
        {.addr=0xd280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xea0c, .a=0xfc, .x=0xf4, .y=0xb1, .sp=0x64, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xea0c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xea0d, .a=0x7e, .x=0xf4, .y=0xb1, .sp=0x64, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xea0c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xea0c, .value=0x5c, .type=IO_READ},
        {.addr=0xea0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x0f7d, .a=0xc0, .x=0x08, .y=0xfb, .sp=0x7c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0f7d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0f7e, .a=0x60, .x=0x08, .y=0xfb, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0f7d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0f7d, .value=0x5c, .type=IO_READ},
        {.addr=0x0f7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x2ffa, .a=0xe4, .x=0x30, .y=0xb2, .sp=0x57, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ffa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2ffb, .a=0x72, .x=0x30, .y=0xb2, .sp=0x57, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2ffa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2ffa, .value=0x5c, .type=IO_READ},
        {.addr=0x2ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x634c, .a=0xc1, .x=0x41, .y=0x33, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x634c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x634d, .a=0x60, .x=0x41, .y=0x33, .sp=0x8e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x634c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x634c, .value=0x5c, .type=IO_READ},
        {.addr=0x634d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x3dea, .a=0x79, .x=0xf8, .y=0x3c, .sp=0x56, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3dea, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3deb, .a=0x3c, .x=0xf8, .y=0x3c, .sp=0x56, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3dea, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3dea, .value=0x5c, .type=IO_READ},
        {.addr=0x3deb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xd8e2, .a=0xca, .x=0xe9, .y=0xb6, .sp=0xe2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd8e3, .a=0x65, .x=0xe9, .y=0xb6, .sp=0xe2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd8e2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd8e2, .value=0x5c, .type=IO_READ},
        {.addr=0xd8e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xb7a0, .a=0x6f, .x=0xe5, .y=0x35, .sp=0x15, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb7a1, .a=0x37, .x=0xe5, .y=0x35, .sp=0x15, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb7a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb7a0, .value=0x5c, .type=IO_READ},
        {.addr=0xb7a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xd307, .a=0xfd, .x=0x77, .y=0x5e, .sp=0xc9, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd307, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd308, .a=0x7e, .x=0x77, .y=0x5e, .sp=0xc9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd307, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd307, .value=0x5c, .type=IO_READ},
        {.addr=0xd308, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xf4ac, .a=0x39, .x=0x2e, .y=0x99, .sp=0xd4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ac, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf4ad, .a=0x1c, .x=0x2e, .y=0x99, .sp=0xd4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf4ac, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf4ac, .value=0x5c, .type=IO_READ},
        {.addr=0xf4ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x1096, .a=0x9a, .x=0xd1, .y=0x8c, .sp=0x78, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1096, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1097, .a=0x4d, .x=0xd1, .y=0x8c, .sp=0x78, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1096, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1096, .value=0x5c, .type=IO_READ},
        {.addr=0x1097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xd7ca, .a=0xa7, .x=0xef, .y=0x60, .sp=0x25, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ca, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd7cb, .a=0x53, .x=0xef, .y=0x60, .sp=0x25, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd7ca, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd7ca, .value=0x5c, .type=IO_READ},
        {.addr=0xd7cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x3a79, .a=0x53, .x=0x35, .y=0xf6, .sp=0xe5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3a79, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3a7a, .a=0x29, .x=0x35, .y=0xf6, .sp=0xe5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3a79, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3a79, .value=0x5c, .type=IO_READ},
        {.addr=0x3a7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x12d6, .a=0x83, .x=0xed, .y=0xd6, .sp=0xde, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x12d6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x12d7, .a=0x41, .x=0xed, .y=0xd6, .sp=0xde, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x12d6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x12d6, .value=0x5c, .type=IO_READ},
        {.addr=0x12d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xc269, .a=0xc9, .x=0xf9, .y=0xbd, .sp=0x5e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc269, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc26a, .a=0x64, .x=0xf9, .y=0xbd, .sp=0x5e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc269, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc269, .value=0x5c, .type=IO_READ},
        {.addr=0xc26a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xb7eb, .a=0x65, .x=0xca, .y=0x40, .sp=0xed, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb7eb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb7ec, .a=0x32, .x=0xca, .y=0x40, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb7eb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb7eb, .value=0x5c, .type=IO_READ},
        {.addr=0xb7ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf08d, .a=0x12, .x=0x87, .y=0x0d, .sp=0x80, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf08d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf08e, .a=0x09, .x=0x87, .y=0x0d, .sp=0x80, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf08d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf08d, .value=0x5c, .type=IO_READ},
        {.addr=0xf08e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xd35c, .a=0x31, .x=0x4f, .y=0x6b, .sp=0x8a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd35c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd35d, .a=0x18, .x=0x4f, .y=0x6b, .sp=0x8a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd35c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd35c, .value=0x5c, .type=IO_READ},
        {.addr=0xd35d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xd692, .a=0x79, .x=0x4d, .y=0x2e, .sp=0xb8, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd692, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd693, .a=0x3c, .x=0x4d, .y=0x2e, .sp=0xb8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd692, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd692, .value=0x5c, .type=IO_READ},
        {.addr=0xd693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x969f, .a=0x25, .x=0x0a, .y=0xab, .sp=0xd5, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x969f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x96a0, .a=0x12, .x=0x0a, .y=0xab, .sp=0xd5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x969f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x969f, .value=0x5c, .type=IO_READ},
        {.addr=0x96a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf563, .a=0xaa, .x=0xf8, .y=0xde, .sp=0x6c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf563, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf564, .a=0x55, .x=0xf8, .y=0xde, .sp=0x6c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf563, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf563, .value=0x5c, .type=IO_READ},
        {.addr=0xf564, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbaa9, .a=0xdd, .x=0xa6, .y=0xe9, .sp=0xc5, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbaaa, .a=0x6e, .x=0xa6, .y=0xe9, .sp=0xc5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbaa9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbaa9, .value=0x5c, .type=IO_READ},
        {.addr=0xbaaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0828, .a=0x02, .x=0x55, .y=0xe5, .sp=0xed, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0828, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0829, .a=0x01, .x=0x55, .y=0xe5, .sp=0xed, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0828, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0828, .value=0x5c, .type=IO_READ},
        {.addr=0x0829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xc537, .a=0xb8, .x=0xa0, .y=0x18, .sp=0x3b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc537, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc538, .a=0x5c, .x=0xa0, .y=0x18, .sp=0x3b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc537, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc537, .value=0x5c, .type=IO_READ},
        {.addr=0xc538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xdd6f, .a=0xd1, .x=0xed, .y=0x55, .sp=0x51, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xdd6f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdd70, .a=0x68, .x=0xed, .y=0x55, .sp=0x51, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdd6f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdd6f, .value=0x5c, .type=IO_READ},
        {.addr=0xdd70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x0d73, .a=0xff, .x=0xb3, .y=0xeb, .sp=0x90, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d73, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0d74, .a=0x7f, .x=0xb3, .y=0xeb, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0d73, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0d73, .value=0x5c, .type=IO_READ},
        {.addr=0x0d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8dee, .a=0x75, .x=0xb6, .y=0x40, .sp=0x8e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8dee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8def, .a=0x3a, .x=0xb6, .y=0x40, .sp=0x8e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8dee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8dee, .value=0x5c, .type=IO_READ},
        {.addr=0x8def, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8ebb, .a=0x7b, .x=0x36, .y=0x49, .sp=0xe0, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ebb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8ebc, .a=0x3d, .x=0x36, .y=0x49, .sp=0xe0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8ebb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8ebb, .value=0x5c, .type=IO_READ},
        {.addr=0x8ebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x2dce, .a=0x88, .x=0x05, .y=0xda, .sp=0x1c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2dce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2dcf, .a=0x44, .x=0x05, .y=0xda, .sp=0x1c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2dce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2dce, .value=0x5c, .type=IO_READ},
        {.addr=0x2dcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x00a2, .a=0x60, .x=0x8f, .y=0x8e, .sp=0x99, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x00a3, .a=0x30, .x=0x8f, .y=0x8e, .sp=0x99, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x00a2, .value=0x5c, .type=IO_READ},
        {.addr=0x00a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xf761, .a=0xb1, .x=0x01, .y=0x2c, .sp=0x70, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf761, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf762, .a=0x58, .x=0x01, .y=0x2c, .sp=0x70, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf761, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf761, .value=0x5c, .type=IO_READ},
        {.addr=0xf762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xc783, .a=0x5d, .x=0x7b, .y=0x9f, .sp=0xfa, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc783, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc784, .a=0x2e, .x=0x7b, .y=0x9f, .sp=0xfa, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc783, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc783, .value=0x5c, .type=IO_READ},
        {.addr=0xc784, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x2a78, .a=0x0c, .x=0x7d, .y=0x3f, .sp=0x9e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a78, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2a79, .a=0x06, .x=0x7d, .y=0x3f, .sp=0x9e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2a78, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2a78, .value=0x5c, .type=IO_READ},
        {.addr=0x2a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xddf0, .a=0xe3, .x=0x9b, .y=0x20, .sp=0x56, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xddf0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xddf1, .a=0x71, .x=0x9b, .y=0x20, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xddf0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xddf0, .value=0x5c, .type=IO_READ},
        {.addr=0xddf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x15f7, .a=0x96, .x=0x1f, .y=0x12, .sp=0xf9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x15f7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x15f8, .a=0x4b, .x=0x1f, .y=0x12, .sp=0xf9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x15f7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x15f7, .value=0x5c, .type=IO_READ},
        {.addr=0x15f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x04c6, .a=0x31, .x=0xa5, .y=0xaa, .sp=0x8c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x04c6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x04c7, .a=0x18, .x=0xa5, .y=0xaa, .sp=0x8c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x04c6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x04c6, .value=0x5c, .type=IO_READ},
        {.addr=0x04c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x3834, .a=0xba, .x=0xdc, .y=0x7e, .sp=0x37, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3834, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3835, .a=0x5d, .x=0xdc, .y=0x7e, .sp=0x37, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3834, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3834, .value=0x5c, .type=IO_READ},
        {.addr=0x3835, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x53fc, .a=0xe7, .x=0x12, .y=0x43, .sp=0xd0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x53fc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x53fd, .a=0x73, .x=0x12, .y=0x43, .sp=0xd0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x53fc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x53fc, .value=0x5c, .type=IO_READ},
        {.addr=0x53fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xf419, .a=0xda, .x=0xac, .y=0x5b, .sp=0x8c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xf419, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf41a, .a=0x6d, .x=0xac, .y=0x5b, .sp=0x8c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf419, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf419, .value=0x5c, .type=IO_READ},
        {.addr=0xf41a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xce53, .a=0x64, .x=0x92, .y=0x63, .sp=0xed, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xce53, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xce54, .a=0x32, .x=0x92, .y=0x63, .sp=0xed, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xce53, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xce53, .value=0x5c, .type=IO_READ},
        {.addr=0xce54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x9bd0, .a=0x79, .x=0x3c, .y=0x75, .sp=0x34, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9bd1, .a=0x3c, .x=0x3c, .y=0x75, .sp=0x34, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9bd0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9bd0, .value=0x5c, .type=IO_READ},
        {.addr=0x9bd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x98d5, .a=0xe5, .x=0xf1, .y=0x50, .sp=0x65, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x98d5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x98d6, .a=0x72, .x=0xf1, .y=0x50, .sp=0x65, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x98d5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x98d5, .value=0x5c, .type=IO_READ},
        {.addr=0x98d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xfcc8, .a=0x1f, .x=0xec, .y=0x43, .sp=0x98, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfcc9, .a=0x0f, .x=0xec, .y=0x43, .sp=0x98, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xfcc8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfcc8, .value=0x5c, .type=IO_READ},
        {.addr=0xfcc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xf2d5, .a=0xa9, .x=0x45, .y=0x74, .sp=0x34, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2d6, .a=0x54, .x=0x45, .y=0x74, .sp=0x34, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf2d5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2d5, .value=0x5c, .type=IO_READ},
        {.addr=0xf2d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x7492, .a=0x70, .x=0x72, .y=0x22, .sp=0x86, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7492, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7493, .a=0x38, .x=0x72, .y=0x22, .sp=0x86, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7492, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7492, .value=0x5c, .type=IO_READ},
        {.addr=0x7493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x3aa1, .a=0x6f, .x=0xd9, .y=0x45, .sp=0x6c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3aa2, .a=0x37, .x=0xd9, .y=0x45, .sp=0x6c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3aa1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3aa1, .value=0x5c, .type=IO_READ},
        {.addr=0x3aa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x571c, .a=0x4c, .x=0x5e, .y=0xa5, .sp=0x21, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x571c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x571d, .a=0x26, .x=0x5e, .y=0xa5, .sp=0x21, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x571c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x571c, .value=0x5c, .type=IO_READ},
        {.addr=0x571d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xb80b, .a=0xed, .x=0x27, .y=0x5c, .sp=0x9c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xb80b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb80c, .a=0x76, .x=0x27, .y=0x5c, .sp=0x9c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb80b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb80b, .value=0x5c, .type=IO_READ},
        {.addr=0xb80c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x8f10, .a=0xcf, .x=0x62, .y=0x12, .sp=0xa0, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8f10, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8f11, .a=0x67, .x=0x62, .y=0x12, .sp=0xa0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8f10, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8f10, .value=0x5c, .type=IO_READ},
        {.addr=0x8f11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x7337, .a=0x04, .x=0x6a, .y=0x5e, .sp=0x45, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x7337, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7338, .a=0x02, .x=0x6a, .y=0x5e, .sp=0x45, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7337, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7337, .value=0x5c, .type=IO_READ},
        {.addr=0x7338, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x944c, .a=0x09, .x=0x37, .y=0xc4, .sp=0x73, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x944c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x944d, .a=0x04, .x=0x37, .y=0xc4, .sp=0x73, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x944c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x944c, .value=0x5c, .type=IO_READ},
        {.addr=0x944d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x8e2f, .a=0x18, .x=0xaf, .y=0x15, .sp=0x25, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8e30, .a=0x0c, .x=0xaf, .y=0x15, .sp=0x25, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8e2f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8e2f, .value=0x5c, .type=IO_READ},
        {.addr=0x8e30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x81c0, .a=0xa0, .x=0x38, .y=0xd0, .sp=0xe9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x81c0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x81c1, .a=0x50, .x=0x38, .y=0xd0, .sp=0xe9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x81c0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x81c0, .value=0x5c, .type=IO_READ},
        {.addr=0x81c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x4585, .a=0x09, .x=0x61, .y=0xc8, .sp=0xb7, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x4585, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4586, .a=0x04, .x=0x61, .y=0xc8, .sp=0xb7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4585, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4585, .value=0x5c, .type=IO_READ},
        {.addr=0x4586, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xba35, .a=0x28, .x=0xa3, .y=0x59, .sp=0xbf, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xba35, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xba36, .a=0x14, .x=0xa3, .y=0x59, .sp=0xbf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xba35, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xba35, .value=0x5c, .type=IO_READ},
        {.addr=0xba36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xba59, .a=0x4b, .x=0x34, .y=0x08, .sp=0x80, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xba59, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xba5a, .a=0x25, .x=0x34, .y=0x08, .sp=0x80, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xba59, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xba59, .value=0x5c, .type=IO_READ},
        {.addr=0xba5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x1495, .a=0x72, .x=0x54, .y=0x1e, .sp=0xf0, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1495, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1496, .a=0x39, .x=0x54, .y=0x1e, .sp=0xf0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1495, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1495, .value=0x5c, .type=IO_READ},
        {.addr=0x1496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x8a35, .a=0xb3, .x=0x21, .y=0xad, .sp=0x10, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a35, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8a36, .a=0x59, .x=0x21, .y=0xad, .sp=0x10, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8a35, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8a35, .value=0x5c, .type=IO_READ},
        {.addr=0x8a36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3525, .a=0xc1, .x=0xa2, .y=0xa8, .sp=0x86, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3525, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3526, .a=0x60, .x=0xa2, .y=0xa8, .sp=0x86, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3525, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3525, .value=0x5c, .type=IO_READ},
        {.addr=0x3526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x845c, .a=0x32, .x=0x9c, .y=0x4e, .sp=0x94, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x845c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x845d, .a=0x19, .x=0x9c, .y=0x4e, .sp=0x94, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x845c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x845c, .value=0x5c, .type=IO_READ},
        {.addr=0x845d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xcf18, .a=0x36, .x=0x6b, .y=0x6c, .sp=0x70, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xcf18, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcf19, .a=0x1b, .x=0x6b, .y=0x6c, .sp=0x70, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xcf18, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcf18, .value=0x5c, .type=IO_READ},
        {.addr=0xcf19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x594b, .a=0xf7, .x=0xf9, .y=0x6f, .sp=0x71, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x594b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x594c, .a=0x7b, .x=0xf9, .y=0x6f, .sp=0x71, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x594b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x594b, .value=0x5c, .type=IO_READ},
        {.addr=0x594c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x82ab, .a=0xa0, .x=0x01, .y=0x6c, .sp=0x3a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x82ab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x82ac, .a=0x50, .x=0x01, .y=0x6c, .sp=0x3a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x82ab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x82ab, .value=0x5c, .type=IO_READ},
        {.addr=0x82ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x7164, .a=0x38, .x=0xdd, .y=0x99, .sp=0x59, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7164, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7165, .a=0x1c, .x=0xdd, .y=0x99, .sp=0x59, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7164, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7164, .value=0x5c, .type=IO_READ},
        {.addr=0x7165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x515b, .a=0x57, .x=0x47, .y=0x75, .sp=0x8d, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x515b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x515c, .a=0x2b, .x=0x47, .y=0x75, .sp=0x8d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x515b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x515b, .value=0x5c, .type=IO_READ},
        {.addr=0x515c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xf2bf, .a=0x6f, .x=0x0f, .y=0xb8, .sp=0xa7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xf2bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2c0, .a=0x37, .x=0x0f, .y=0xb8, .sp=0xa7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf2bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2bf, .value=0x5c, .type=IO_READ},
        {.addr=0xf2c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x80b3, .a=0xc0, .x=0xd4, .y=0xad, .sp=0xc8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x80b3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x80b4, .a=0x60, .x=0xd4, .y=0xad, .sp=0xc8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x80b3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x80b3, .value=0x5c, .type=IO_READ},
        {.addr=0x80b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x3093, .a=0xeb, .x=0xc6, .y=0x8d, .sp=0xa8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3093, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3094, .a=0x75, .x=0xc6, .y=0x8d, .sp=0xa8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3093, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3093, .value=0x5c, .type=IO_READ},
        {.addr=0x3094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x72e7, .a=0x46, .x=0x6a, .y=0x73, .sp=0x75, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x72e7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x72e8, .a=0x23, .x=0x6a, .y=0x73, .sp=0x75, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x72e7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x72e7, .value=0x5c, .type=IO_READ},
        {.addr=0x72e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x6635, .a=0x33, .x=0xfd, .y=0xc6, .sp=0x90, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6635, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6636, .a=0x19, .x=0xfd, .y=0xc6, .sp=0x90, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6635, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6635, .value=0x5c, .type=IO_READ},
        {.addr=0x6636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xbcf5, .a=0x4b, .x=0x6a, .y=0xe8, .sp=0x6c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbcf6, .a=0x25, .x=0x6a, .y=0xe8, .sp=0x6c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbcf5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbcf5, .value=0x5c, .type=IO_READ},
        {.addr=0xbcf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x4911, .a=0xed, .x=0x83, .y=0xb2, .sp=0x33, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4911, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4912, .a=0x76, .x=0x83, .y=0xb2, .sp=0x33, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4911, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4911, .value=0x5c, .type=IO_READ},
        {.addr=0x4912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x3398, .a=0xf2, .x=0xb4, .y=0xd0, .sp=0xb1, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3398, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3399, .a=0x79, .x=0xb4, .y=0xd0, .sp=0xb1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3398, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3398, .value=0x5c, .type=IO_READ},
        {.addr=0x3399, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x9b1d, .a=0x33, .x=0x22, .y=0x32, .sp=0x77, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9b1e, .a=0x19, .x=0x22, .y=0x32, .sp=0x77, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9b1d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9b1d, .value=0x5c, .type=IO_READ},
        {.addr=0x9b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x7ce9, .a=0x15, .x=0xa0, .y=0x01, .sp=0xdd, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7cea, .a=0x0a, .x=0xa0, .y=0x01, .sp=0xdd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7ce9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7ce9, .value=0x5c, .type=IO_READ},
        {.addr=0x7cea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x87a6, .a=0x03, .x=0xd1, .y=0x89, .sp=0xdf, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x87a6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x87a7, .a=0x01, .x=0xd1, .y=0x89, .sp=0xdf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x87a6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x87a6, .value=0x5c, .type=IO_READ},
        {.addr=0x87a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x98f9, .a=0x28, .x=0x9e, .y=0x77, .sp=0xee, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x98f9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x98fa, .a=0x14, .x=0x9e, .y=0x77, .sp=0xee, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x98f9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x98f9, .value=0x5c, .type=IO_READ},
        {.addr=0x98fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x81fa, .a=0x3d, .x=0x60, .y=0x61, .sp=0x2c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x81fa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x81fb, .a=0x1e, .x=0x60, .y=0x61, .sp=0x2c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x81fa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x81fa, .value=0x5c, .type=IO_READ},
        {.addr=0x81fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xa8c5, .a=0x29, .x=0x80, .y=0x44, .sp=0xca, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa8c6, .a=0x14, .x=0x80, .y=0x44, .sp=0xca, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa8c5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa8c5, .value=0x5c, .type=IO_READ},
        {.addr=0xa8c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x7ff4, .a=0x32, .x=0xb4, .y=0x0f, .sp=0xf5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7ff5, .a=0x19, .x=0xb4, .y=0x0f, .sp=0xf5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7ff4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7ff4, .value=0x5c, .type=IO_READ},
        {.addr=0x7ff5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x9b83, .a=0xd0, .x=0x7b, .y=0x30, .sp=0x09, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9b83, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9b84, .a=0x68, .x=0x7b, .y=0x30, .sp=0x09, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9b83, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9b83, .value=0x5c, .type=IO_READ},
        {.addr=0x9b84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x1ff8, .a=0x89, .x=0xd4, .y=0xea, .sp=0xc1, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1ff9, .a=0x44, .x=0xd4, .y=0xea, .sp=0xc1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1ff8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1ff8, .value=0x5c, .type=IO_READ},
        {.addr=0x1ff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x9b07, .a=0x60, .x=0x63, .y=0xb2, .sp=0x88, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x9b07, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9b08, .a=0x30, .x=0x63, .y=0xb2, .sp=0x88, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9b07, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9b07, .value=0x5c, .type=IO_READ},
        {.addr=0x9b08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0200) {
    const struct CPU_State initial_cpu = {.pc=0xbdda, .a=0x0d, .x=0x38, .y=0x4d, .sp=0x7a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xbdda, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbddb, .a=0x06, .x=0x38, .y=0x4d, .sp=0x7a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbdda, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbdda, .value=0x5c, .type=IO_READ},
        {.addr=0xbddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0201) {
    const struct CPU_State initial_cpu = {.pc=0x3cab, .a=0xb2, .x=0xcc, .y=0x50, .sp=0x78, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3cab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3cac, .a=0x59, .x=0xcc, .y=0x50, .sp=0x78, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3cab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3cab, .value=0x5c, .type=IO_READ},
        {.addr=0x3cac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0202) {
    const struct CPU_State initial_cpu = {.pc=0x5f9d, .a=0xf7, .x=0x1e, .y=0x37, .sp=0xa0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5f9d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5f9e, .a=0x7b, .x=0x1e, .y=0x37, .sp=0xa0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5f9d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5f9d, .value=0x5c, .type=IO_READ},
        {.addr=0x5f9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0203) {
    const struct CPU_State initial_cpu = {.pc=0xad92, .a=0xb6, .x=0x9e, .y=0xf6, .sp=0xff, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xad92, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xad93, .a=0x5b, .x=0x9e, .y=0xf6, .sp=0xff, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xad92, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xad92, .value=0x5c, .type=IO_READ},
        {.addr=0xad93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0204) {
    const struct CPU_State initial_cpu = {.pc=0xb750, .a=0xdd, .x=0x87, .y=0xa9, .sp=0x24, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb750, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb751, .a=0x6e, .x=0x87, .y=0xa9, .sp=0x24, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb750, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb750, .value=0x5c, .type=IO_READ},
        {.addr=0xb751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf5ad, .a=0xe2, .x=0x8d, .y=0x4d, .sp=0xec, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ad, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf5ae, .a=0x71, .x=0x8d, .y=0x4d, .sp=0xec, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf5ad, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf5ad, .value=0x5c, .type=IO_READ},
        {.addr=0xf5ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0206) {
    const struct CPU_State initial_cpu = {.pc=0xd775, .a=0x50, .x=0x4d, .y=0x0d, .sp=0x18, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd775, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd776, .a=0x28, .x=0x4d, .y=0x0d, .sp=0x18, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd775, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd775, .value=0x5c, .type=IO_READ},
        {.addr=0xd776, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb514, .a=0x6c, .x=0xc6, .y=0xac, .sp=0x69, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb514, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb515, .a=0x36, .x=0xc6, .y=0xac, .sp=0x69, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb514, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb514, .value=0x5c, .type=IO_READ},
        {.addr=0xb515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0208) {
    const struct CPU_State initial_cpu = {.pc=0x8ed5, .a=0xf4, .x=0x75, .y=0xa2, .sp=0xcf, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8ed6, .a=0x7a, .x=0x75, .y=0xa2, .sp=0xcf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8ed5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8ed5, .value=0x5c, .type=IO_READ},
        {.addr=0x8ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0209) {
    const struct CPU_State initial_cpu = {.pc=0xb5a8, .a=0x19, .x=0xf5, .y=0x89, .sp=0x34, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb5a9, .a=0x0c, .x=0xf5, .y=0x89, .sp=0x34, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb5a8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb5a8, .value=0x5c, .type=IO_READ},
        {.addr=0xb5a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe181, .a=0x9b, .x=0xde, .y=0xa0, .sp=0xc9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe181, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe182, .a=0x4d, .x=0xde, .y=0xa0, .sp=0xc9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe181, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe181, .value=0x5c, .type=IO_READ},
        {.addr=0xe182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020B) {
    const struct CPU_State initial_cpu = {.pc=0x4bda, .a=0x6a, .x=0x2b, .y=0xda, .sp=0xb6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4bda, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4bdb, .a=0x35, .x=0x2b, .y=0xda, .sp=0xb6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4bda, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4bda, .value=0x5c, .type=IO_READ},
        {.addr=0x4bdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020C) {
    const struct CPU_State initial_cpu = {.pc=0xc7a3, .a=0x6e, .x=0x45, .y=0xe7, .sp=0x4e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc7a3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc7a4, .a=0x37, .x=0x45, .y=0xe7, .sp=0x4e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc7a3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc7a3, .value=0x5c, .type=IO_READ},
        {.addr=0xc7a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020D) {
    const struct CPU_State initial_cpu = {.pc=0x3477, .a=0x40, .x=0x61, .y=0x08, .sp=0x0c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3477, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3478, .a=0x20, .x=0x61, .y=0x08, .sp=0x0c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3477, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3477, .value=0x5c, .type=IO_READ},
        {.addr=0x3478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020E) {
    const struct CPU_State initial_cpu = {.pc=0x5bff, .a=0x06, .x=0xd4, .y=0x31, .sp=0x5a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5bff, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5c00, .a=0x03, .x=0xd4, .y=0x31, .sp=0x5a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5bff, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5bff, .value=0x5c, .type=IO_READ},
        {.addr=0x5c00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_020F) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0xd4, .x=0xe9, .y=0x7b, .sp=0xef, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6300, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6301, .a=0x6a, .x=0xe9, .y=0x7b, .sp=0xef, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6300, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0x5c, .type=IO_READ},
        {.addr=0x6301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0210) {
    const struct CPU_State initial_cpu = {.pc=0xfdbf, .a=0x46, .x=0xdb, .y=0x7f, .sp=0x80, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfdc0, .a=0x23, .x=0xdb, .y=0x7f, .sp=0x80, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfdbf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfdbf, .value=0x5c, .type=IO_READ},
        {.addr=0xfdc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0a5d, .a=0xa3, .x=0x65, .y=0xa3, .sp=0x1a, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0a5e, .a=0x51, .x=0x65, .y=0xa3, .sp=0x1a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0a5d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0a5d, .value=0x5c, .type=IO_READ},
        {.addr=0x0a5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0212) {
    const struct CPU_State initial_cpu = {.pc=0xa6da, .a=0x4f, .x=0xd0, .y=0x88, .sp=0xd7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa6da, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa6db, .a=0x27, .x=0xd0, .y=0x88, .sp=0xd7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa6da, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa6da, .value=0x5c, .type=IO_READ},
        {.addr=0xa6db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0213) {
    const struct CPU_State initial_cpu = {.pc=0xea5f, .a=0xcb, .x=0x43, .y=0xb6, .sp=0x3d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xea5f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xea60, .a=0x65, .x=0x43, .y=0xb6, .sp=0x3d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xea5f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xea5f, .value=0x5c, .type=IO_READ},
        {.addr=0xea60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0214) {
    const struct CPU_State initial_cpu = {.pc=0xab89, .a=0x78, .x=0x61, .y=0x16, .sp=0xa9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xab89, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xab8a, .a=0x3c, .x=0x61, .y=0x16, .sp=0xa9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xab89, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xab89, .value=0x5c, .type=IO_READ},
        {.addr=0xab8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0215) {
    const struct CPU_State initial_cpu = {.pc=0x279e, .a=0x1a, .x=0x20, .y=0x21, .sp=0x2e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x279e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x279f, .a=0x0d, .x=0x20, .y=0x21, .sp=0x2e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x279e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x279e, .value=0x5c, .type=IO_READ},
        {.addr=0x279f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0216) {
    const struct CPU_State initial_cpu = {.pc=0x66e2, .a=0xfe, .x=0x8d, .y=0xe3, .sp=0x6d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x66e2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x66e3, .a=0x7f, .x=0x8d, .y=0xe3, .sp=0x6d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x66e2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x66e2, .value=0x5c, .type=IO_READ},
        {.addr=0x66e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0217) {
    const struct CPU_State initial_cpu = {.pc=0x6994, .a=0xdc, .x=0x6e, .y=0x2a, .sp=0xd2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6994, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6995, .a=0x6e, .x=0x6e, .y=0x2a, .sp=0xd2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6994, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6994, .value=0x5c, .type=IO_READ},
        {.addr=0x6995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0218) {
    const struct CPU_State initial_cpu = {.pc=0xf939, .a=0x1c, .x=0xec, .y=0x4a, .sp=0xe3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf939, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf93a, .a=0x0e, .x=0xec, .y=0x4a, .sp=0xe3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf939, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf939, .value=0x5c, .type=IO_READ},
        {.addr=0xf93a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0219) {
    const struct CPU_State initial_cpu = {.pc=0x2257, .a=0xa7, .x=0x34, .y=0x05, .sp=0x83, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x2257, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2258, .a=0x53, .x=0x34, .y=0x05, .sp=0x83, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2257, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2257, .value=0x5c, .type=IO_READ},
        {.addr=0x2258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021A) {
    const struct CPU_State initial_cpu = {.pc=0xca3e, .a=0x69, .x=0xe8, .y=0x2a, .sp=0x2c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xca3e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xca3f, .a=0x34, .x=0xe8, .y=0x2a, .sp=0x2c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xca3e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xca3e, .value=0x5c, .type=IO_READ},
        {.addr=0xca3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021B) {
    const struct CPU_State initial_cpu = {.pc=0xf66e, .a=0xa7, .x=0x44, .y=0xa3, .sp=0x79, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf66e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf66f, .a=0x53, .x=0x44, .y=0xa3, .sp=0x79, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf66e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf66e, .value=0x5c, .type=IO_READ},
        {.addr=0xf66f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021C) {
    const struct CPU_State initial_cpu = {.pc=0xdbb4, .a=0x2c, .x=0x68, .y=0x5d, .sp=0x18, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdbb5, .a=0x16, .x=0x68, .y=0x5d, .sp=0x18, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xdbb4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdbb4, .value=0x5c, .type=IO_READ},
        {.addr=0xdbb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021D) {
    const struct CPU_State initial_cpu = {.pc=0x4709, .a=0x16, .x=0x95, .y=0x65, .sp=0x4e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4709, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x470a, .a=0x0b, .x=0x95, .y=0x65, .sp=0x4e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4709, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4709, .value=0x5c, .type=IO_READ},
        {.addr=0x470a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021E) {
    const struct CPU_State initial_cpu = {.pc=0x4a5b, .a=0x01, .x=0xf9, .y=0x41, .sp=0xfa, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a5c, .a=0x00, .x=0xf9, .y=0x41, .sp=0xfa, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x4a5b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a5b, .value=0x5c, .type=IO_READ},
        {.addr=0x4a5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_021F) {
    const struct CPU_State initial_cpu = {.pc=0x7cf6, .a=0x7a, .x=0x53, .y=0x4b, .sp=0x4c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7cf6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7cf7, .a=0x3d, .x=0x53, .y=0x4b, .sp=0x4c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7cf6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7cf6, .value=0x5c, .type=IO_READ},
        {.addr=0x7cf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0220) {
    const struct CPU_State initial_cpu = {.pc=0xba76, .a=0xb3, .x=0xc9, .y=0xf9, .sp=0xb1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xba76, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xba77, .a=0x59, .x=0xc9, .y=0xf9, .sp=0xb1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xba76, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xba76, .value=0x5c, .type=IO_READ},
        {.addr=0xba77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf1bf, .a=0x7e, .x=0x67, .y=0x2d, .sp=0x40, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf1bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf1c0, .a=0x3f, .x=0x67, .y=0x2d, .sp=0x40, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf1bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf1bf, .value=0x5c, .type=IO_READ},
        {.addr=0xf1c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0222) {
    const struct CPU_State initial_cpu = {.pc=0xba7c, .a=0xe8, .x=0xe3, .y=0xdf, .sp=0x78, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xba7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xba7d, .a=0x74, .x=0xe3, .y=0xdf, .sp=0x78, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xba7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xba7c, .value=0x5c, .type=IO_READ},
        {.addr=0xba7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0223) {
    const struct CPU_State initial_cpu = {.pc=0x245f, .a=0x4f, .x=0xdb, .y=0x14, .sp=0x45, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x245f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2460, .a=0x27, .x=0xdb, .y=0x14, .sp=0x45, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x245f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x245f, .value=0x5c, .type=IO_READ},
        {.addr=0x2460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0224) {
    const struct CPU_State initial_cpu = {.pc=0xc5a0, .a=0x5c, .x=0x90, .y=0xbb, .sp=0x76, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc5a1, .a=0x2e, .x=0x90, .y=0xbb, .sp=0x76, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xc5a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc5a0, .value=0x5c, .type=IO_READ},
        {.addr=0xc5a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8185, .a=0xd2, .x=0x20, .y=0x90, .sp=0x97, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x8185, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8186, .a=0x69, .x=0x20, .y=0x90, .sp=0x97, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8185, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8185, .value=0x5c, .type=IO_READ},
        {.addr=0x8186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0226) {
    const struct CPU_State initial_cpu = {.pc=0x8ba3, .a=0xfc, .x=0x38, .y=0xa7, .sp=0x77, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8ba4, .a=0x7e, .x=0x38, .y=0xa7, .sp=0x77, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8ba3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8ba3, .value=0x5c, .type=IO_READ},
        {.addr=0x8ba4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0227) {
    const struct CPU_State initial_cpu = {.pc=0x69ea, .a=0xf2, .x=0xee, .y=0x27, .sp=0xf5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x69ea, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x69eb, .a=0x79, .x=0xee, .y=0x27, .sp=0xf5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x69ea, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x69ea, .value=0x5c, .type=IO_READ},
        {.addr=0x69eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0228) {
    const struct CPU_State initial_cpu = {.pc=0xb57f, .a=0x16, .x=0x17, .y=0x00, .sp=0x05, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb57f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb580, .a=0x0b, .x=0x17, .y=0x00, .sp=0x05, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb57f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb57f, .value=0x5c, .type=IO_READ},
        {.addr=0xb580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0229) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0xda, .x=0x81, .y=0x48, .sp=0xa3, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x131a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x131b, .a=0x6d, .x=0x81, .y=0x48, .sp=0xa3, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x131a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0x5c, .type=IO_READ},
        {.addr=0x131b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022A) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0xa0, .x=0x5e, .y=0xd6, .sp=0x66, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb17e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb17f, .a=0x50, .x=0x5e, .y=0xd6, .sp=0x66, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb17e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0x5c, .type=IO_READ},
        {.addr=0xb17f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022B) {
    const struct CPU_State initial_cpu = {.pc=0xb555, .a=0x40, .x=0xda, .y=0x38, .sp=0x6c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xb555, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb556, .a=0x20, .x=0xda, .y=0x38, .sp=0x6c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb555, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb555, .value=0x5c, .type=IO_READ},
        {.addr=0xb556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022C) {
    const struct CPU_State initial_cpu = {.pc=0xc144, .a=0xb2, .x=0xbd, .y=0x49, .sp=0x23, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc144, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc145, .a=0x59, .x=0xbd, .y=0x49, .sp=0x23, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc144, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc144, .value=0x5c, .type=IO_READ},
        {.addr=0xc145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022D) {
    const struct CPU_State initial_cpu = {.pc=0x0904, .a=0x08, .x=0xee, .y=0x3f, .sp=0xa8, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0904, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0905, .a=0x04, .x=0xee, .y=0x3f, .sp=0xa8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0904, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0904, .value=0x5c, .type=IO_READ},
        {.addr=0x0905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022E) {
    const struct CPU_State initial_cpu = {.pc=0x2931, .a=0x40, .x=0xcb, .y=0x7a, .sp=0xd5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2931, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2932, .a=0x20, .x=0xcb, .y=0x7a, .sp=0xd5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2931, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2931, .value=0x5c, .type=IO_READ},
        {.addr=0x2932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_022F) {
    const struct CPU_State initial_cpu = {.pc=0x6488, .a=0xdf, .x=0x9e, .y=0xfa, .sp=0xec, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6488, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6489, .a=0x6f, .x=0x9e, .y=0xfa, .sp=0xec, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6488, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6488, .value=0x5c, .type=IO_READ},
        {.addr=0x6489, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0230) {
    const struct CPU_State initial_cpu = {.pc=0x7f91, .a=0x94, .x=0x57, .y=0x5f, .sp=0xed, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7f91, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7f92, .a=0x4a, .x=0x57, .y=0x5f, .sp=0xed, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7f91, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7f91, .value=0x5c, .type=IO_READ},
        {.addr=0x7f92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0231) {
    const struct CPU_State initial_cpu = {.pc=0x74c5, .a=0x2e, .x=0x7e, .y=0xf1, .sp=0x3a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x74c5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x74c6, .a=0x17, .x=0x7e, .y=0xf1, .sp=0x3a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x74c5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x74c5, .value=0x5c, .type=IO_READ},
        {.addr=0x74c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8162, .a=0xb7, .x=0x12, .y=0x5a, .sp=0xfc, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x8162, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8163, .a=0x5b, .x=0x12, .y=0x5a, .sp=0xfc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8162, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8162, .value=0x5c, .type=IO_READ},
        {.addr=0x8163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0233) {
    const struct CPU_State initial_cpu = {.pc=0x0a0a, .a=0x33, .x=0x09, .y=0xbc, .sp=0x5d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0a0b, .a=0x19, .x=0x09, .y=0xbc, .sp=0x5d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0a0a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0a0a, .value=0x5c, .type=IO_READ},
        {.addr=0x0a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0234) {
    const struct CPU_State initial_cpu = {.pc=0x6167, .a=0x3e, .x=0xe0, .y=0x43, .sp=0x1f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6167, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6168, .a=0x1f, .x=0xe0, .y=0x43, .sp=0x1f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6167, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6167, .value=0x5c, .type=IO_READ},
        {.addr=0x6168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2266, .a=0x85, .x=0x08, .y=0x11, .sp=0x17, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2266, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2267, .a=0x42, .x=0x08, .y=0x11, .sp=0x17, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2266, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2266, .value=0x5c, .type=IO_READ},
        {.addr=0x2267, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0236) {
    const struct CPU_State initial_cpu = {.pc=0x3cd0, .a=0x70, .x=0xd8, .y=0x6a, .sp=0xe6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3cd1, .a=0x38, .x=0xd8, .y=0x6a, .sp=0xe6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3cd0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3cd0, .value=0x5c, .type=IO_READ},
        {.addr=0x3cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0237) {
    const struct CPU_State initial_cpu = {.pc=0xf360, .a=0x59, .x=0x9c, .y=0x71, .sp=0x74, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf360, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf361, .a=0x2c, .x=0x9c, .y=0x71, .sp=0x74, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf360, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf360, .value=0x5c, .type=IO_READ},
        {.addr=0xf361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0238) {
    const struct CPU_State initial_cpu = {.pc=0x052e, .a=0xb8, .x=0xa0, .y=0xfe, .sp=0x0e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x052e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x052f, .a=0x5c, .x=0xa0, .y=0xfe, .sp=0x0e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x052e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x052e, .value=0x5c, .type=IO_READ},
        {.addr=0x052f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0239) {
    const struct CPU_State initial_cpu = {.pc=0x910b, .a=0x4b, .x=0x17, .y=0x84, .sp=0x30, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x910b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x910c, .a=0x25, .x=0x17, .y=0x84, .sp=0x30, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x910b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x910b, .value=0x5c, .type=IO_READ},
        {.addr=0x910c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023A) {
    const struct CPU_State initial_cpu = {.pc=0x81e5, .a=0xca, .x=0x53, .y=0xa1, .sp=0xc8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x81e5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x81e6, .a=0x65, .x=0x53, .y=0xa1, .sp=0xc8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x81e5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x81e5, .value=0x5c, .type=IO_READ},
        {.addr=0x81e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023B) {
    const struct CPU_State initial_cpu = {.pc=0xe7ab, .a=0xea, .x=0x38, .y=0x00, .sp=0x76, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe7ac, .a=0x75, .x=0x38, .y=0x00, .sp=0x76, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe7ab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe7ab, .value=0x5c, .type=IO_READ},
        {.addr=0xe7ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023C) {
    const struct CPU_State initial_cpu = {.pc=0x9e7c, .a=0xce, .x=0x90, .y=0xd3, .sp=0xf2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9e7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9e7d, .a=0x67, .x=0x90, .y=0xd3, .sp=0xf2, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9e7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9e7c, .value=0x5c, .type=IO_READ},
        {.addr=0x9e7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023D) {
    const struct CPU_State initial_cpu = {.pc=0xff62, .a=0x33, .x=0x53, .y=0xce, .sp=0xb5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xff62, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xff63, .a=0x19, .x=0x53, .y=0xce, .sp=0xb5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xff62, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xff62, .value=0x5c, .type=IO_READ},
        {.addr=0xff63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023E) {
    const struct CPU_State initial_cpu = {.pc=0x905c, .a=0x2f, .x=0x2e, .y=0xc3, .sp=0xdc, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x905c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x905d, .a=0x17, .x=0x2e, .y=0xc3, .sp=0xdc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x905c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x905c, .value=0x5c, .type=IO_READ},
        {.addr=0x905d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_023F) {
    const struct CPU_State initial_cpu = {.pc=0x973a, .a=0xfc, .x=0xef, .y=0x43, .sp=0x0a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x973a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x973b, .a=0x7e, .x=0xef, .y=0x43, .sp=0x0a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x973a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x973a, .value=0x5c, .type=IO_READ},
        {.addr=0x973b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0240) {
    const struct CPU_State initial_cpu = {.pc=0xf878, .a=0x02, .x=0x8c, .y=0x0c, .sp=0x22, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf878, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf879, .a=0x01, .x=0x8c, .y=0x0c, .sp=0x22, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf878, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf878, .value=0x5c, .type=IO_READ},
        {.addr=0xf879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0241) {
    const struct CPU_State initial_cpu = {.pc=0x05c2, .a=0x4b, .x=0xce, .y=0x2d, .sp=0x65, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x05c2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x05c3, .a=0x25, .x=0xce, .y=0x2d, .sp=0x65, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x05c2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x05c2, .value=0x5c, .type=IO_READ},
        {.addr=0x05c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0242) {
    const struct CPU_State initial_cpu = {.pc=0x0f92, .a=0x3c, .x=0xae, .y=0x25, .sp=0x0f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0f92, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0f93, .a=0x1e, .x=0xae, .y=0x25, .sp=0x0f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0f92, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0f92, .value=0x5c, .type=IO_READ},
        {.addr=0x0f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3ada, .a=0xf0, .x=0x74, .y=0x32, .sp=0xc9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3ada, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3adb, .a=0x78, .x=0x74, .y=0x32, .sp=0xc9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3ada, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3ada, .value=0x5c, .type=IO_READ},
        {.addr=0x3adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0da2, .a=0xde, .x=0xfd, .y=0xbd, .sp=0x4d, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0da2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0da3, .a=0x6f, .x=0xfd, .y=0xbd, .sp=0x4d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0da2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0da2, .value=0x5c, .type=IO_READ},
        {.addr=0x0da3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4aef, .a=0x2c, .x=0x36, .y=0x7d, .sp=0xe3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4aef, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4af0, .a=0x16, .x=0x36, .y=0x7d, .sp=0xe3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4aef, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4aef, .value=0x5c, .type=IO_READ},
        {.addr=0x4af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0246) {
    const struct CPU_State initial_cpu = {.pc=0xd705, .a=0x67, .x=0xf8, .y=0xb5, .sp=0xd3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd705, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd706, .a=0x33, .x=0xf8, .y=0xb5, .sp=0xd3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd705, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd705, .value=0x5c, .type=IO_READ},
        {.addr=0xd706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0247) {
    const struct CPU_State initial_cpu = {.pc=0xbf3b, .a=0x47, .x=0x1e, .y=0xc7, .sp=0xaf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xbf3b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbf3c, .a=0x23, .x=0x1e, .y=0xc7, .sp=0xaf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbf3b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbf3b, .value=0x5c, .type=IO_READ},
        {.addr=0xbf3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0248) {
    const struct CPU_State initial_cpu = {.pc=0x3a30, .a=0x69, .x=0xbd, .y=0xc6, .sp=0xdb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3a30, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3a31, .a=0x34, .x=0xbd, .y=0xc6, .sp=0xdb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3a30, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3a30, .value=0x5c, .type=IO_READ},
        {.addr=0x3a31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0249) {
    const struct CPU_State initial_cpu = {.pc=0x1db1, .a=0x86, .x=0x25, .y=0x5e, .sp=0x95, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1db1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1db2, .a=0x43, .x=0x25, .y=0x5e, .sp=0x95, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1db1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1db1, .value=0x5c, .type=IO_READ},
        {.addr=0x1db2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024A) {
    const struct CPU_State initial_cpu = {.pc=0x8a04, .a=0x86, .x=0x10, .y=0x12, .sp=0x5a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8a04, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8a05, .a=0x43, .x=0x10, .y=0x12, .sp=0x5a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8a04, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8a04, .value=0x5c, .type=IO_READ},
        {.addr=0x8a05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024B) {
    const struct CPU_State initial_cpu = {.pc=0xb030, .a=0xaf, .x=0x1d, .y=0x18, .sp=0x63, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb030, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb031, .a=0x57, .x=0x1d, .y=0x18, .sp=0x63, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb030, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb030, .value=0x5c, .type=IO_READ},
        {.addr=0xb031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024C) {
    const struct CPU_State initial_cpu = {.pc=0xfd0c, .a=0xf6, .x=0x7b, .y=0x09, .sp=0x95, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfd0d, .a=0x7b, .x=0x7b, .y=0x09, .sp=0x95, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfd0c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfd0c, .value=0x5c, .type=IO_READ},
        {.addr=0xfd0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024D) {
    const struct CPU_State initial_cpu = {.pc=0xecbe, .a=0x74, .x=0x59, .y=0xe0, .sp=0x98, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xecbe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xecbf, .a=0x3a, .x=0x59, .y=0xe0, .sp=0x98, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xecbe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xecbe, .value=0x5c, .type=IO_READ},
        {.addr=0xecbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024E) {
    const struct CPU_State initial_cpu = {.pc=0x80a8, .a=0xf1, .x=0xe9, .y=0xa6, .sp=0x2f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x80a8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x80a9, .a=0x78, .x=0xe9, .y=0xa6, .sp=0x2f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x80a8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x80a8, .value=0x5c, .type=IO_READ},
        {.addr=0x80a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_024F) {
    const struct CPU_State initial_cpu = {.pc=0x2091, .a=0xd1, .x=0x99, .y=0x72, .sp=0x08, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2091, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2092, .a=0x68, .x=0x99, .y=0x72, .sp=0x08, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2091, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2091, .value=0x5c, .type=IO_READ},
        {.addr=0x2092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0250) {
    const struct CPU_State initial_cpu = {.pc=0x83ed, .a=0xd6, .x=0x1b, .y=0x2c, .sp=0xc5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x83ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x83ee, .a=0x6b, .x=0x1b, .y=0x2c, .sp=0xc5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x83ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x83ed, .value=0x5c, .type=IO_READ},
        {.addr=0x83ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0251) {
    const struct CPU_State initial_cpu = {.pc=0x81c4, .a=0xec, .x=0x95, .y=0x06, .sp=0x28, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x81c4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x81c5, .a=0x76, .x=0x95, .y=0x06, .sp=0x28, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x81c4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x81c4, .value=0x5c, .type=IO_READ},
        {.addr=0x81c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0252) {
    const struct CPU_State initial_cpu = {.pc=0x4d80, .a=0xa7, .x=0x59, .y=0x64, .sp=0x31, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4d80, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4d81, .a=0x53, .x=0x59, .y=0x64, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4d80, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4d80, .value=0x5c, .type=IO_READ},
        {.addr=0x4d81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0253) {
    const struct CPU_State initial_cpu = {.pc=0x5bc1, .a=0xbc, .x=0xe1, .y=0x93, .sp=0xf6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5bc2, .a=0x5e, .x=0xe1, .y=0x93, .sp=0xf6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5bc1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5bc1, .value=0x5c, .type=IO_READ},
        {.addr=0x5bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0254) {
    const struct CPU_State initial_cpu = {.pc=0x5616, .a=0x5e, .x=0x48, .y=0xd5, .sp=0x5d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5616, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5617, .a=0x2f, .x=0x48, .y=0xd5, .sp=0x5d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5616, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5616, .value=0x5c, .type=IO_READ},
        {.addr=0x5617, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0255) {
    const struct CPU_State initial_cpu = {.pc=0x8f8e, .a=0xa4, .x=0x47, .y=0x1a, .sp=0x4c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8f8e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8f8f, .a=0x52, .x=0x47, .y=0x1a, .sp=0x4c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8f8e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8f8e, .value=0x5c, .type=IO_READ},
        {.addr=0x8f8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0256) {
    const struct CPU_State initial_cpu = {.pc=0x3282, .a=0x84, .x=0xa6, .y=0x71, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x3282, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3283, .a=0x42, .x=0xa6, .y=0x71, .sp=0x36, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x3282, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3282, .value=0x5c, .type=IO_READ},
        {.addr=0x3283, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0257) {
    const struct CPU_State initial_cpu = {.pc=0xb5cc, .a=0x55, .x=0xa3, .y=0xc3, .sp=0xf5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb5cc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb5cd, .a=0x2a, .x=0xa3, .y=0xc3, .sp=0xf5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb5cc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb5cc, .value=0x5c, .type=IO_READ},
        {.addr=0xb5cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0258) {
    const struct CPU_State initial_cpu = {.pc=0x350e, .a=0x6e, .x=0xb4, .y=0x90, .sp=0xd8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x350e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x350f, .a=0x37, .x=0xb4, .y=0x90, .sp=0xd8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x350e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x350e, .value=0x5c, .type=IO_READ},
        {.addr=0x350f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0259) {
    const struct CPU_State initial_cpu = {.pc=0x0d32, .a=0x40, .x=0xcf, .y=0x9d, .sp=0x07, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0d32, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0d33, .a=0x20, .x=0xcf, .y=0x9d, .sp=0x07, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0d32, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0d32, .value=0x5c, .type=IO_READ},
        {.addr=0x0d33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025A) {
    const struct CPU_State initial_cpu = {.pc=0x1cce, .a=0x3b, .x=0x2a, .y=0xb7, .sp=0x4b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1cce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1ccf, .a=0x1d, .x=0x2a, .y=0xb7, .sp=0x4b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1cce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1cce, .value=0x5c, .type=IO_READ},
        {.addr=0x1ccf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025B) {
    const struct CPU_State initial_cpu = {.pc=0x59d7, .a=0x3a, .x=0x08, .y=0x46, .sp=0x5b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x59d7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x59d8, .a=0x1d, .x=0x08, .y=0x46, .sp=0x5b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x59d7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x59d7, .value=0x5c, .type=IO_READ},
        {.addr=0x59d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025C) {
    const struct CPU_State initial_cpu = {.pc=0x3709, .a=0xa6, .x=0xdf, .y=0xcb, .sp=0x53, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3709, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0x53, .x=0xdf, .y=0xcb, .sp=0x53, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3709, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3709, .value=0x5c, .type=IO_READ},
        {.addr=0x370a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025D) {
    const struct CPU_State initial_cpu = {.pc=0x881f, .a=0x9a, .x=0xcd, .y=0x35, .sp=0xfc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x881f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8820, .a=0x4d, .x=0xcd, .y=0x35, .sp=0xfc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x881f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x881f, .value=0x5c, .type=IO_READ},
        {.addr=0x8820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025E) {
    const struct CPU_State initial_cpu = {.pc=0x5948, .a=0xf9, .x=0xa4, .y=0xfc, .sp=0xf5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x5948, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5949, .a=0x7c, .x=0xa4, .y=0xfc, .sp=0xf5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5948, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5948, .value=0x5c, .type=IO_READ},
        {.addr=0x5949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_025F) {
    const struct CPU_State initial_cpu = {.pc=0xf300, .a=0x99, .x=0x55, .y=0x1c, .sp=0x2c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf300, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf301, .a=0x4c, .x=0x55, .y=0x1c, .sp=0x2c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf300, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf300, .value=0x5c, .type=IO_READ},
        {.addr=0xf301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0260) {
    const struct CPU_State initial_cpu = {.pc=0xeefe, .a=0xf8, .x=0xcc, .y=0x21, .sp=0x56, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xeefe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeeff, .a=0x7c, .x=0xcc, .y=0x21, .sp=0x56, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xeefe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeefe, .value=0x5c, .type=IO_READ},
        {.addr=0xeeff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0261) {
    const struct CPU_State initial_cpu = {.pc=0x572b, .a=0xac, .x=0xbe, .y=0x1c, .sp=0x6d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x572b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x572c, .a=0x56, .x=0xbe, .y=0x1c, .sp=0x6d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x572b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x572b, .value=0x5c, .type=IO_READ},
        {.addr=0x572c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0262) {
    const struct CPU_State initial_cpu = {.pc=0x0389, .a=0xc7, .x=0x47, .y=0xb6, .sp=0x2b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0389, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x038a, .a=0x63, .x=0x47, .y=0xb6, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0389, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0389, .value=0x5c, .type=IO_READ},
        {.addr=0x038a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0263) {
    const struct CPU_State initial_cpu = {.pc=0x8fb5, .a=0x2e, .x=0xe1, .y=0x4f, .sp=0xb9, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8fb6, .a=0x17, .x=0xe1, .y=0x4f, .sp=0xb9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8fb5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8fb5, .value=0x5c, .type=IO_READ},
        {.addr=0x8fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0264) {
    const struct CPU_State initial_cpu = {.pc=0x8106, .a=0xd5, .x=0xa8, .y=0x4f, .sp=0xd2, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8106, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8107, .a=0x6a, .x=0xa8, .y=0x4f, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8106, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8106, .value=0x5c, .type=IO_READ},
        {.addr=0x8107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0265) {
    const struct CPU_State initial_cpu = {.pc=0xbab2, .a=0xf7, .x=0xf2, .y=0x50, .sp=0xf4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbab2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbab3, .a=0x7b, .x=0xf2, .y=0x50, .sp=0xf4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbab2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbab2, .value=0x5c, .type=IO_READ},
        {.addr=0xbab3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9e95, .a=0x8d, .x=0x81, .y=0x7d, .sp=0xc6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9e95, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9e96, .a=0x46, .x=0x81, .y=0x7d, .sp=0xc6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9e95, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9e95, .value=0x5c, .type=IO_READ},
        {.addr=0x9e96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0267) {
    const struct CPU_State initial_cpu = {.pc=0x77ba, .a=0xc0, .x=0x37, .y=0x9c, .sp=0xc6, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x77ba, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x77bb, .a=0x60, .x=0x37, .y=0x9c, .sp=0xc6, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x77ba, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x77ba, .value=0x5c, .type=IO_READ},
        {.addr=0x77bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0268) {
    const struct CPU_State initial_cpu = {.pc=0x7ec0, .a=0x20, .x=0x29, .y=0x4d, .sp=0xaa, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7ec1, .a=0x10, .x=0x29, .y=0x4d, .sp=0xaa, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7ec0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7ec0, .value=0x5c, .type=IO_READ},
        {.addr=0x7ec1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0269) {
    const struct CPU_State initial_cpu = {.pc=0xde14, .a=0x89, .x=0x88, .y=0x47, .sp=0xbb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xde14, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xde15, .a=0x44, .x=0x88, .y=0x47, .sp=0xbb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xde14, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xde14, .value=0x5c, .type=IO_READ},
        {.addr=0xde15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026A) {
    const struct CPU_State initial_cpu = {.pc=0xa8cc, .a=0x55, .x=0x37, .y=0x39, .sp=0x72, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa8cc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa8cd, .a=0x2a, .x=0x37, .y=0x39, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa8cc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa8cc, .value=0x5c, .type=IO_READ},
        {.addr=0xa8cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026B) {
    const struct CPU_State initial_cpu = {.pc=0x35d4, .a=0x00, .x=0x22, .y=0x08, .sp=0xe1, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x35d4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x35d5, .a=0x00, .x=0x22, .y=0x08, .sp=0xe1, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x35d4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x35d4, .value=0x5c, .type=IO_READ},
        {.addr=0x35d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026C) {
    const struct CPU_State initial_cpu = {.pc=0x14bf, .a=0xe8, .x=0x0b, .y=0x88, .sp=0xec, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x14bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x14c0, .a=0x74, .x=0x0b, .y=0x88, .sp=0xec, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x14bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x14bf, .value=0x5c, .type=IO_READ},
        {.addr=0x14c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb438, .a=0x2f, .x=0xb6, .y=0x5a, .sp=0xe1, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb438, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb439, .a=0x17, .x=0xb6, .y=0x5a, .sp=0xe1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb438, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb438, .value=0x5c, .type=IO_READ},
        {.addr=0xb439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026E) {
    const struct CPU_State initial_cpu = {.pc=0x61ae, .a=0x38, .x=0xf2, .y=0x2f, .sp=0x2a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x61ae, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x61af, .a=0x1c, .x=0xf2, .y=0x2f, .sp=0x2a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x61ae, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x61ae, .value=0x5c, .type=IO_READ},
        {.addr=0x61af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_026F) {
    const struct CPU_State initial_cpu = {.pc=0xd2af, .a=0x79, .x=0x21, .y=0x19, .sp=0x5e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd2af, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd2b0, .a=0x3c, .x=0x21, .y=0x19, .sp=0x5e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd2af, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd2af, .value=0x5c, .type=IO_READ},
        {.addr=0xd2b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0270) {
    const struct CPU_State initial_cpu = {.pc=0x925f, .a=0x99, .x=0xa8, .y=0x2b, .sp=0x90, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x925f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9260, .a=0x4c, .x=0xa8, .y=0x2b, .sp=0x90, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x925f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x925f, .value=0x5c, .type=IO_READ},
        {.addr=0x9260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0271) {
    const struct CPU_State initial_cpu = {.pc=0x825b, .a=0xc6, .x=0xe1, .y=0x43, .sp=0x54, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x825b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x825c, .a=0x63, .x=0xe1, .y=0x43, .sp=0x54, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x825b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x825b, .value=0x5c, .type=IO_READ},
        {.addr=0x825c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0272) {
    const struct CPU_State initial_cpu = {.pc=0xda15, .a=0xa1, .x=0xb9, .y=0xc6, .sp=0x9e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xda15, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xda16, .a=0x50, .x=0xb9, .y=0xc6, .sp=0x9e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xda15, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xda15, .value=0x5c, .type=IO_READ},
        {.addr=0xda16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0273) {
    const struct CPU_State initial_cpu = {.pc=0x7a5b, .a=0x11, .x=0xbe, .y=0xe3, .sp=0x19, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7a5b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7a5c, .a=0x08, .x=0xbe, .y=0xe3, .sp=0x19, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7a5b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7a5b, .value=0x5c, .type=IO_READ},
        {.addr=0x7a5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0274) {
    const struct CPU_State initial_cpu = {.pc=0xffc1, .a=0xd9, .x=0x55, .y=0x1a, .sp=0x3d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xffc1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xffc2, .a=0x6c, .x=0x55, .y=0x1a, .sp=0x3d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xffc1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xffc1, .value=0x5c, .type=IO_READ},
        {.addr=0xffc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7e51, .a=0x91, .x=0xc2, .y=0x52, .sp=0xee, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7e51, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7e52, .a=0x48, .x=0xc2, .y=0x52, .sp=0xee, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7e51, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7e51, .value=0x5c, .type=IO_READ},
        {.addr=0x7e52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0276) {
    const struct CPU_State initial_cpu = {.pc=0x934f, .a=0xb9, .x=0xbe, .y=0x22, .sp=0x93, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x934f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9350, .a=0x5c, .x=0xbe, .y=0x22, .sp=0x93, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x934f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x934f, .value=0x5c, .type=IO_READ},
        {.addr=0x9350, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0277) {
    const struct CPU_State initial_cpu = {.pc=0xb0ed, .a=0xe7, .x=0x3f, .y=0x22, .sp=0xeb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb0ee, .a=0x73, .x=0x3f, .y=0x22, .sp=0xeb, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb0ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb0ed, .value=0x5c, .type=IO_READ},
        {.addr=0xb0ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0278) {
    const struct CPU_State initial_cpu = {.pc=0x9f97, .a=0x76, .x=0x74, .y=0x8d, .sp=0x01, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9f97, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9f98, .a=0x3b, .x=0x74, .y=0x8d, .sp=0x01, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9f97, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9f97, .value=0x5c, .type=IO_READ},
        {.addr=0x9f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0279) {
    const struct CPU_State initial_cpu = {.pc=0xb227, .a=0xb2, .x=0xd8, .y=0x67, .sp=0xcb, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb227, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb228, .a=0x59, .x=0xd8, .y=0x67, .sp=0xcb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb227, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb227, .value=0x5c, .type=IO_READ},
        {.addr=0xb228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027A) {
    const struct CPU_State initial_cpu = {.pc=0x9419, .a=0x4d, .x=0x99, .y=0x46, .sp=0xa5, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9419, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x941a, .a=0x26, .x=0x99, .y=0x46, .sp=0xa5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9419, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9419, .value=0x5c, .type=IO_READ},
        {.addr=0x941a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3340, .a=0x2f, .x=0x2c, .y=0x75, .sp=0x17, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x3340, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3341, .a=0x17, .x=0x2c, .y=0x75, .sp=0x17, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3340, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3340, .value=0x5c, .type=IO_READ},
        {.addr=0x3341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027C) {
    const struct CPU_State initial_cpu = {.pc=0x4728, .a=0xee, .x=0x01, .y=0x74, .sp=0xc6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4728, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4729, .a=0x77, .x=0x01, .y=0x74, .sp=0xc6, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4728, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4728, .value=0x5c, .type=IO_READ},
        {.addr=0x4729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027D) {
    const struct CPU_State initial_cpu = {.pc=0x9f52, .a=0xc1, .x=0x31, .y=0x8d, .sp=0xc5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x9f52, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9f53, .a=0x60, .x=0x31, .y=0x8d, .sp=0xc5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9f52, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9f52, .value=0x5c, .type=IO_READ},
        {.addr=0x9f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027E) {
    const struct CPU_State initial_cpu = {.pc=0xa83f, .a=0x77, .x=0x20, .y=0xcc, .sp=0x33, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa83f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa840, .a=0x3b, .x=0x20, .y=0xcc, .sp=0x33, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa83f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa83f, .value=0x5c, .type=IO_READ},
        {.addr=0xa840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_027F) {
    const struct CPU_State initial_cpu = {.pc=0x463a, .a=0x26, .x=0x28, .y=0x4c, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x463a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x463b, .a=0x13, .x=0x28, .y=0x4c, .sp=0x75, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x463a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x463a, .value=0x5c, .type=IO_READ},
        {.addr=0x463b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0280) {
    const struct CPU_State initial_cpu = {.pc=0xbc10, .a=0xfa, .x=0x81, .y=0x75, .sp=0x7a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xbc10, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbc11, .a=0x7d, .x=0x81, .y=0x75, .sp=0x7a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbc10, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbc10, .value=0x5c, .type=IO_READ},
        {.addr=0xbc11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0281) {
    const struct CPU_State initial_cpu = {.pc=0x6af9, .a=0x9b, .x=0x0f, .y=0xa5, .sp=0x7b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6af9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6afa, .a=0x4d, .x=0x0f, .y=0xa5, .sp=0x7b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6af9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6af9, .value=0x5c, .type=IO_READ},
        {.addr=0x6afa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0282) {
    const struct CPU_State initial_cpu = {.pc=0x5096, .a=0x06, .x=0x58, .y=0x25, .sp=0xd2, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5096, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5097, .a=0x03, .x=0x58, .y=0x25, .sp=0xd2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5096, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5096, .value=0x5c, .type=IO_READ},
        {.addr=0x5097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0283) {
    const struct CPU_State initial_cpu = {.pc=0x4eb3, .a=0xa7, .x=0xfb, .y=0x97, .sp=0x8b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4eb4, .a=0x53, .x=0xfb, .y=0x97, .sp=0x8b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4eb3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4eb3, .value=0x5c, .type=IO_READ},
        {.addr=0x4eb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0284) {
    const struct CPU_State initial_cpu = {.pc=0x44c3, .a=0xbd, .x=0x35, .y=0xee, .sp=0x42, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x44c3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x44c4, .a=0x5e, .x=0x35, .y=0xee, .sp=0x42, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x44c3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x44c3, .value=0x5c, .type=IO_READ},
        {.addr=0x44c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0285) {
    const struct CPU_State initial_cpu = {.pc=0x9861, .a=0x0a, .x=0x7b, .y=0xf1, .sp=0x9e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x9861, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9862, .a=0x05, .x=0x7b, .y=0xf1, .sp=0x9e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9861, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9861, .value=0x5c, .type=IO_READ},
        {.addr=0x9862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0286) {
    const struct CPU_State initial_cpu = {.pc=0x39e7, .a=0x07, .x=0xe1, .y=0x83, .sp=0xec, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x39e7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x39e8, .a=0x03, .x=0xe1, .y=0x83, .sp=0xec, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x39e7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x39e7, .value=0x5c, .type=IO_READ},
        {.addr=0x39e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0287) {
    const struct CPU_State initial_cpu = {.pc=0x0ed7, .a=0xe9, .x=0xcd, .y=0xcb, .sp=0x7b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0ed8, .a=0x74, .x=0xcd, .y=0xcb, .sp=0x7b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0ed7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ed7, .value=0x5c, .type=IO_READ},
        {.addr=0x0ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0288) {
    const struct CPU_State initial_cpu = {.pc=0xbbde, .a=0x68, .x=0xce, .y=0xe7, .sp=0x0a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xbbde, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbbdf, .a=0x34, .x=0xce, .y=0xe7, .sp=0x0a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbbde, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbbde, .value=0x5c, .type=IO_READ},
        {.addr=0xbbdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0289) {
    const struct CPU_State initial_cpu = {.pc=0x19d1, .a=0xd7, .x=0x13, .y=0x76, .sp=0x45, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x19d1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x19d2, .a=0x6b, .x=0x13, .y=0x76, .sp=0x45, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x19d1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x19d1, .value=0x5c, .type=IO_READ},
        {.addr=0x19d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe5e8, .a=0xe8, .x=0xdb, .y=0x8f, .sp=0x6d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe5e9, .a=0x74, .x=0xdb, .y=0x8f, .sp=0x6d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe5e8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe5e8, .value=0x5c, .type=IO_READ},
        {.addr=0xe5e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028B) {
    const struct CPU_State initial_cpu = {.pc=0x13f6, .a=0x63, .x=0x4f, .y=0x35, .sp=0x32, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x13f6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x13f7, .a=0x31, .x=0x4f, .y=0x35, .sp=0x32, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x13f6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x13f6, .value=0x5c, .type=IO_READ},
        {.addr=0x13f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028C) {
    const struct CPU_State initial_cpu = {.pc=0x93fd, .a=0x86, .x=0x3e, .y=0x15, .sp=0x16, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x93fd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x93fe, .a=0x43, .x=0x3e, .y=0x15, .sp=0x16, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x93fd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x93fd, .value=0x5c, .type=IO_READ},
        {.addr=0x93fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028D) {
    const struct CPU_State initial_cpu = {.pc=0x5724, .a=0xa5, .x=0x12, .y=0x28, .sp=0x12, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x5724, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5725, .a=0x52, .x=0x12, .y=0x28, .sp=0x12, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5724, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5724, .value=0x5c, .type=IO_READ},
        {.addr=0x5725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028E) {
    const struct CPU_State initial_cpu = {.pc=0x3677, .a=0x9f, .x=0x32, .y=0x66, .sp=0x14, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3677, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3678, .a=0x4f, .x=0x32, .y=0x66, .sp=0x14, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3677, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3677, .value=0x5c, .type=IO_READ},
        {.addr=0x3678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_028F) {
    const struct CPU_State initial_cpu = {.pc=0xe3ce, .a=0x52, .x=0x99, .y=0xcf, .sp=0x58, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3ce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe3cf, .a=0x29, .x=0x99, .y=0xcf, .sp=0x58, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe3ce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe3ce, .value=0x5c, .type=IO_READ},
        {.addr=0xe3cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0290) {
    const struct CPU_State initial_cpu = {.pc=0xeaa5, .a=0x7e, .x=0x3c, .y=0xf4, .sp=0xc2, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeaa6, .a=0x3f, .x=0x3c, .y=0xf4, .sp=0xc2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xeaa5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xeaa5, .value=0x5c, .type=IO_READ},
        {.addr=0xeaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0291) {
    const struct CPU_State initial_cpu = {.pc=0x7246, .a=0x0e, .x=0xa7, .y=0xf0, .sp=0x6a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7246, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7247, .a=0x07, .x=0xa7, .y=0xf0, .sp=0x6a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7246, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7246, .value=0x5c, .type=IO_READ},
        {.addr=0x7247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0292) {
    const struct CPU_State initial_cpu = {.pc=0xe23f, .a=0xaf, .x=0xdd, .y=0xa1, .sp=0xff, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe23f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe240, .a=0x57, .x=0xdd, .y=0xa1, .sp=0xff, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe23f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe23f, .value=0x5c, .type=IO_READ},
        {.addr=0xe240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0293) {
    const struct CPU_State initial_cpu = {.pc=0xd1ee, .a=0x68, .x=0x16, .y=0xbd, .sp=0x7a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1ef, .a=0x34, .x=0x16, .y=0xbd, .sp=0x7a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd1ee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1ee, .value=0x5c, .type=IO_READ},
        {.addr=0xd1ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0294) {
    const struct CPU_State initial_cpu = {.pc=0xef69, .a=0x18, .x=0x74, .y=0x97, .sp=0xce, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xef69, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xef6a, .a=0x0c, .x=0x74, .y=0x97, .sp=0xce, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xef69, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xef69, .value=0x5c, .type=IO_READ},
        {.addr=0xef6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0295) {
    const struct CPU_State initial_cpu = {.pc=0xa3f6, .a=0x8d, .x=0xe4, .y=0x14, .sp=0xfa, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa3f7, .a=0x46, .x=0xe4, .y=0x14, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa3f6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa3f6, .value=0x5c, .type=IO_READ},
        {.addr=0xa3f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc6a3, .a=0xb7, .x=0x2f, .y=0xda, .sp=0x5d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xc6a3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc6a4, .a=0x5b, .x=0x2f, .y=0xda, .sp=0x5d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc6a3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc6a3, .value=0x5c, .type=IO_READ},
        {.addr=0xc6a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0297) {
    const struct CPU_State initial_cpu = {.pc=0x8b4c, .a=0x2a, .x=0x10, .y=0xcb, .sp=0x7c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8b4c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8b4d, .a=0x15, .x=0x10, .y=0xcb, .sp=0x7c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8b4c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8b4c, .value=0x5c, .type=IO_READ},
        {.addr=0x8b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0298) {
    const struct CPU_State initial_cpu = {.pc=0x5c94, .a=0x72, .x=0x23, .y=0x71, .sp=0x3a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5c94, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5c95, .a=0x39, .x=0x23, .y=0x71, .sp=0x3a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5c94, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5c94, .value=0x5c, .type=IO_READ},
        {.addr=0x5c95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0299) {
    const struct CPU_State initial_cpu = {.pc=0x01cf, .a=0x72, .x=0x23, .y=0xa2, .sp=0x27, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x01d0, .a=0x39, .x=0x23, .y=0xa2, .sp=0x27, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x01cf, .value=0x5c, .type=IO_READ},
        {.addr=0x01d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029A) {
    const struct CPU_State initial_cpu = {.pc=0xc1a7, .a=0xe2, .x=0x18, .y=0xa0, .sp=0xfc, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc1a8, .a=0x71, .x=0x18, .y=0xa0, .sp=0xfc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc1a7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc1a7, .value=0x5c, .type=IO_READ},
        {.addr=0xc1a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029B) {
    const struct CPU_State initial_cpu = {.pc=0x24b1, .a=0xa2, .x=0x8a, .y=0xb2, .sp=0x1c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x24b1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x24b2, .a=0x51, .x=0x8a, .y=0xb2, .sp=0x1c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x24b1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x24b1, .value=0x5c, .type=IO_READ},
        {.addr=0x24b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc8c5, .a=0xd0, .x=0x78, .y=0x07, .sp=0x4e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc8c6, .a=0x68, .x=0x78, .y=0x07, .sp=0x4e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc8c5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc8c5, .value=0x5c, .type=IO_READ},
        {.addr=0xc8c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029D) {
    const struct CPU_State initial_cpu = {.pc=0x8c1e, .a=0x92, .x=0xfa, .y=0x79, .sp=0xc1, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x8c1e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8c1f, .a=0x49, .x=0xfa, .y=0x79, .sp=0xc1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x8c1e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8c1e, .value=0x5c, .type=IO_READ},
        {.addr=0x8c1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029E) {
    const struct CPU_State initial_cpu = {.pc=0xfb36, .a=0x96, .x=0x5e, .y=0x8e, .sp=0x17, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfb36, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfb37, .a=0x4b, .x=0x5e, .y=0x8e, .sp=0x17, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfb36, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfb36, .value=0x5c, .type=IO_READ},
        {.addr=0xfb37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_029F) {
    const struct CPU_State initial_cpu = {.pc=0xb818, .a=0xd6, .x=0xa0, .y=0x25, .sp=0xd6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb818, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb819, .a=0x6b, .x=0xa0, .y=0x25, .sp=0xd6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb818, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb818, .value=0x5c, .type=IO_READ},
        {.addr=0xb819, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd003, .a=0x0d, .x=0xc9, .y=0x28, .sp=0x33, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xd003, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd004, .a=0x06, .x=0xc9, .y=0x28, .sp=0x33, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd003, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd003, .value=0x5c, .type=IO_READ},
        {.addr=0xd004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xcb38, .a=0xed, .x=0xe7, .y=0x39, .sp=0x15, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xcb38, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xcb39, .a=0x76, .x=0xe7, .y=0x39, .sp=0x15, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xcb38, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xcb38, .value=0x5c, .type=IO_READ},
        {.addr=0xcb39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xb4d2, .a=0x8c, .x=0xf9, .y=0xa1, .sp=0xdd, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb4d3, .a=0x46, .x=0xf9, .y=0xa1, .sp=0xdd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb4d2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb4d2, .value=0x5c, .type=IO_READ},
        {.addr=0xb4d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xb84c, .a=0x7b, .x=0x82, .y=0x1e, .sp=0xdf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb84c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb84d, .a=0x3d, .x=0x82, .y=0x1e, .sp=0xdf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb84c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb84c, .value=0x5c, .type=IO_READ},
        {.addr=0xb84d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9dc8, .a=0x1c, .x=0xcf, .y=0x34, .sp=0x56, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9dc9, .a=0x0e, .x=0xcf, .y=0x34, .sp=0x56, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9dc8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9dc8, .value=0x5c, .type=IO_READ},
        {.addr=0x9dc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x72be, .a=0x4a, .x=0xb4, .y=0xe9, .sp=0x4f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x72be, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x72bf, .a=0x25, .x=0xb4, .y=0xe9, .sp=0x4f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x72be, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x72be, .value=0x5c, .type=IO_READ},
        {.addr=0x72bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x3aba, .a=0xa6, .x=0x7f, .y=0x17, .sp=0xf2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3aba, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3abb, .a=0x53, .x=0x7f, .y=0x17, .sp=0xf2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3aba, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3aba, .value=0x5c, .type=IO_READ},
        {.addr=0x3abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x76b6, .a=0xfe, .x=0xc7, .y=0xae, .sp=0x38, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x76b6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x76b7, .a=0x7f, .x=0xc7, .y=0xae, .sp=0x38, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x76b6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x76b6, .value=0x5c, .type=IO_READ},
        {.addr=0x76b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x678a, .a=0x6a, .x=0xd0, .y=0x9d, .sp=0x51, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x678a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x678b, .a=0x35, .x=0xd0, .y=0x9d, .sp=0x51, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x678a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x678a, .value=0x5c, .type=IO_READ},
        {.addr=0x678b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xd1a2, .a=0x2c, .x=0x2e, .y=0x33, .sp=0xd7, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1a3, .a=0x16, .x=0x2e, .y=0x33, .sp=0xd7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd1a2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1a2, .value=0x5c, .type=IO_READ},
        {.addr=0xd1a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0cde, .a=0x4f, .x=0x36, .y=0x02, .sp=0x98, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0cde, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0cdf, .a=0x27, .x=0x36, .y=0x02, .sp=0x98, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0cde, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0cde, .value=0x5c, .type=IO_READ},
        {.addr=0x0cdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x8a6f, .a=0x3c, .x=0x52, .y=0xcb, .sp=0x1e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8a6f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8a70, .a=0x1e, .x=0x52, .y=0xcb, .sp=0x1e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8a6f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8a6f, .value=0x5c, .type=IO_READ},
        {.addr=0x8a70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x916d, .a=0x66, .x=0x87, .y=0x77, .sp=0x7c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x916d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x916e, .a=0x33, .x=0x87, .y=0x77, .sp=0x7c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x916d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x916d, .value=0x5c, .type=IO_READ},
        {.addr=0x916e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x4682, .a=0xbc, .x=0xee, .y=0xa5, .sp=0x51, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4682, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4683, .a=0x5e, .x=0xee, .y=0xa5, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4682, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4682, .value=0x5c, .type=IO_READ},
        {.addr=0x4683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x2da9, .a=0x21, .x=0xfb, .y=0x0a, .sp=0xe8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2da9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2daa, .a=0x10, .x=0xfb, .y=0x0a, .sp=0xe8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2da9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2da9, .value=0x5c, .type=IO_READ},
        {.addr=0x2daa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x728e, .a=0xfc, .x=0x1e, .y=0xff, .sp=0x47, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x728e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x728f, .a=0x7e, .x=0x1e, .y=0xff, .sp=0x47, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x728e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x728e, .value=0x5c, .type=IO_READ},
        {.addr=0x728f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x3638, .a=0x96, .x=0x82, .y=0xce, .sp=0xb6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3638, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3639, .a=0x4b, .x=0x82, .y=0xce, .sp=0xb6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3638, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3638, .value=0x5c, .type=IO_READ},
        {.addr=0x3639, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x4655, .a=0xf0, .x=0x50, .y=0x27, .sp=0x87, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4655, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4656, .a=0x78, .x=0x50, .y=0x27, .sp=0x87, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4655, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4655, .value=0x5c, .type=IO_READ},
        {.addr=0x4656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3508, .a=0x94, .x=0xb8, .y=0x22, .sp=0xc2, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3508, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3509, .a=0x4a, .x=0xb8, .y=0x22, .sp=0xc2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3508, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3508, .value=0x5c, .type=IO_READ},
        {.addr=0x3509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x4b15, .a=0xf2, .x=0x5d, .y=0xdc, .sp=0xee, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4b15, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4b16, .a=0x79, .x=0x5d, .y=0xdc, .sp=0xee, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4b15, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4b15, .value=0x5c, .type=IO_READ},
        {.addr=0x4b16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x96ab, .a=0x8b, .x=0x9e, .y=0x07, .sp=0xfa, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x96ab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x96ac, .a=0x45, .x=0x9e, .y=0x07, .sp=0xfa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x96ab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x96ab, .value=0x5c, .type=IO_READ},
        {.addr=0x96ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x1e3d, .a=0x90, .x=0xa1, .y=0xea, .sp=0xf6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1e3d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1e3e, .a=0x48, .x=0xa1, .y=0xea, .sp=0xf6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1e3d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1e3d, .value=0x5c, .type=IO_READ},
        {.addr=0x1e3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9e32, .a=0x62, .x=0x96, .y=0x03, .sp=0xdc, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9e32, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9e33, .a=0x31, .x=0x96, .y=0x03, .sp=0xdc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9e32, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9e32, .value=0x5c, .type=IO_READ},
        {.addr=0x9e33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x37f7, .a=0x91, .x=0xb0, .y=0xa4, .sp=0xc2, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x37f7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x37f8, .a=0x48, .x=0xb0, .y=0xa4, .sp=0xc2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x37f7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x37f7, .value=0x5c, .type=IO_READ},
        {.addr=0x37f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xb2eb, .a=0x65, .x=0x68, .y=0x8e, .sp=0xfa, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb2eb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb2ec, .a=0x32, .x=0x68, .y=0x8e, .sp=0xfa, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb2eb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb2eb, .value=0x5c, .type=IO_READ},
        {.addr=0xb2ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5253, .a=0xf3, .x=0x5e, .y=0xe7, .sp=0xee, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5253, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5254, .a=0x79, .x=0x5e, .y=0xe7, .sp=0xee, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5253, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5253, .value=0x5c, .type=IO_READ},
        {.addr=0x5254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xfaa5, .a=0x5b, .x=0x72, .y=0x09, .sp=0x5f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfaa6, .a=0x2d, .x=0x72, .y=0x09, .sp=0x5f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfaa5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfaa5, .value=0x5c, .type=IO_READ},
        {.addr=0xfaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x4c90, .a=0x5f, .x=0x9c, .y=0x86, .sp=0x5a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4c90, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4c91, .a=0x2f, .x=0x9c, .y=0x86, .sp=0x5a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4c90, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4c90, .value=0x5c, .type=IO_READ},
        {.addr=0x4c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xb32d, .a=0xd8, .x=0xef, .y=0x90, .sp=0xe8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb32d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb32e, .a=0x6c, .x=0xef, .y=0x90, .sp=0xe8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb32d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb32d, .value=0x5c, .type=IO_READ},
        {.addr=0xb32e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x3eb1, .a=0x2b, .x=0x8c, .y=0x2a, .sp=0xf8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3eb2, .a=0x15, .x=0x8c, .y=0x2a, .sp=0xf8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3eb1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3eb1, .value=0x5c, .type=IO_READ},
        {.addr=0x3eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x5d27, .a=0xee, .x=0x22, .y=0x21, .sp=0xfa, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d27, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5d28, .a=0x77, .x=0x22, .y=0x21, .sp=0xfa, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x5d27, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5d27, .value=0x5c, .type=IO_READ},
        {.addr=0x5d28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x0f41, .a=0x74, .x=0xf8, .y=0x76, .sp=0x95, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0f41, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0f42, .a=0x3a, .x=0xf8, .y=0x76, .sp=0x95, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0f41, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0f41, .value=0x5c, .type=IO_READ},
        {.addr=0x0f42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x1df3, .a=0x99, .x=0x76, .y=0x7b, .sp=0xad, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1df3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1df4, .a=0x4c, .x=0x76, .y=0x7b, .sp=0xad, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1df3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1df3, .value=0x5c, .type=IO_READ},
        {.addr=0x1df4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x665a, .a=0x97, .x=0x78, .y=0xba, .sp=0xbd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x665a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x665b, .a=0x4b, .x=0x78, .y=0xba, .sp=0xbd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x665a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x665a, .value=0x5c, .type=IO_READ},
        {.addr=0x665b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xc513, .a=0xa0, .x=0x1d, .y=0xdf, .sp=0xd6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc513, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc514, .a=0x50, .x=0x1d, .y=0xdf, .sp=0xd6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc513, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc513, .value=0x5c, .type=IO_READ},
        {.addr=0xc514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x3dd0, .a=0x2b, .x=0xe2, .y=0x27, .sp=0x5e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3dd1, .a=0x15, .x=0xe2, .y=0x27, .sp=0x5e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3dd0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3dd0, .value=0x5c, .type=IO_READ},
        {.addr=0x3dd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xa299, .a=0xc4, .x=0xcb, .y=0x27, .sp=0x6d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xa299, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa29a, .a=0x62, .x=0xcb, .y=0x27, .sp=0x6d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa299, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa299, .value=0x5c, .type=IO_READ},
        {.addr=0xa29a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x78b1, .a=0x81, .x=0xae, .y=0xce, .sp=0xe9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x78b1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x78b2, .a=0x40, .x=0xae, .y=0xce, .sp=0xe9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x78b1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x78b1, .value=0x5c, .type=IO_READ},
        {.addr=0x78b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x7f5f, .a=0xde, .x=0x89, .y=0xa3, .sp=0x5b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7f60, .a=0x6f, .x=0x89, .y=0xa3, .sp=0x5b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7f5f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7f5f, .value=0x5c, .type=IO_READ},
        {.addr=0x7f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xea64, .a=0xcc, .x=0xae, .y=0x1d, .sp=0x6d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xea64, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xea65, .a=0x66, .x=0xae, .y=0x1d, .sp=0x6d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xea64, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xea64, .value=0x5c, .type=IO_READ},
        {.addr=0xea65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xaeeb, .a=0x3e, .x=0xfe, .y=0x5f, .sp=0xa6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xaeeb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaeec, .a=0x1f, .x=0xfe, .y=0x5f, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xaeeb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaeeb, .value=0x5c, .type=IO_READ},
        {.addr=0xaeec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x3f0c, .a=0xb8, .x=0xec, .y=0xfb, .sp=0xb0, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x3f0c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3f0d, .a=0x5c, .x=0xec, .y=0xfb, .sp=0xb0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3f0c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3f0c, .value=0x5c, .type=IO_READ},
        {.addr=0x3f0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe080, .a=0x77, .x=0x7a, .y=0x22, .sp=0x56, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xe080, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe081, .a=0x3b, .x=0x7a, .y=0x22, .sp=0x56, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe080, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe080, .value=0x5c, .type=IO_READ},
        {.addr=0xe081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xc88b, .a=0x50, .x=0x75, .y=0xd2, .sp=0xf7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc88b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc88c, .a=0x28, .x=0x75, .y=0xd2, .sp=0xf7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc88b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc88b, .value=0x5c, .type=IO_READ},
        {.addr=0xc88c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x34a2, .a=0xe5, .x=0x62, .y=0x30, .sp=0xd0, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x34a2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x34a3, .a=0x72, .x=0x62, .y=0x30, .sp=0xd0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x34a2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x34a2, .value=0x5c, .type=IO_READ},
        {.addr=0x34a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6964, .a=0xd6, .x=0xbd, .y=0x14, .sp=0xa8, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6964, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6965, .a=0x6b, .x=0xbd, .y=0x14, .sp=0xa8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6964, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6964, .value=0x5c, .type=IO_READ},
        {.addr=0x6965, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x020d, .a=0xe5, .x=0xe4, .y=0x93, .sp=0xe8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x020d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x020e, .a=0x72, .x=0xe4, .y=0x93, .sp=0xe8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x020d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x020d, .value=0x5c, .type=IO_READ},
        {.addr=0x020e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x585e, .a=0xc9, .x=0xd0, .y=0xd1, .sp=0x9b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x585e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x585f, .a=0x64, .x=0xd0, .y=0xd1, .sp=0x9b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x585e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x585e, .value=0x5c, .type=IO_READ},
        {.addr=0x585f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x9bd5, .a=0xcb, .x=0x1d, .y=0xf7, .sp=0x2c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9bd6, .a=0x65, .x=0x1d, .y=0xf7, .sp=0x2c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9bd5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9bd5, .value=0x5c, .type=IO_READ},
        {.addr=0x9bd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2df1, .a=0xc6, .x=0x8c, .y=0xf2, .sp=0xb8, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2df1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2df2, .a=0x63, .x=0x8c, .y=0xf2, .sp=0xb8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2df1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2df1, .value=0x5c, .type=IO_READ},
        {.addr=0x2df2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x8ba2, .a=0x04, .x=0xce, .y=0x14, .sp=0xa7, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8ba3, .a=0x02, .x=0xce, .y=0x14, .sp=0xa7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8ba2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8ba2, .value=0x5c, .type=IO_READ},
        {.addr=0x8ba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x0616, .a=0x54, .x=0xd2, .y=0x86, .sp=0xa8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0616, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0617, .a=0x2a, .x=0xd2, .y=0x86, .sp=0xa8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0616, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0616, .value=0x5c, .type=IO_READ},
        {.addr=0x0617, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x7eba, .a=0x29, .x=0x67, .y=0xcc, .sp=0x25, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7eba, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7ebb, .a=0x14, .x=0x67, .y=0xcc, .sp=0x25, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7eba, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7eba, .value=0x5c, .type=IO_READ},
        {.addr=0x7ebb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x7f63, .a=0x1c, .x=0x04, .y=0xa5, .sp=0x19, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7f63, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7f64, .a=0x0e, .x=0x04, .y=0xa5, .sp=0x19, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7f63, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7f63, .value=0x5c, .type=IO_READ},
        {.addr=0x7f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x6803, .a=0xd1, .x=0x19, .y=0x75, .sp=0xe0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x6803, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6804, .a=0x68, .x=0x19, .y=0x75, .sp=0xe0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6803, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6803, .value=0x5c, .type=IO_READ},
        {.addr=0x6804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xbd4a, .a=0xa5, .x=0x15, .y=0x2d, .sp=0x2c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd4b, .a=0x52, .x=0x15, .y=0x2d, .sp=0x2c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbd4a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd4a, .value=0x5c, .type=IO_READ},
        {.addr=0xbd4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x1077, .a=0x8b, .x=0xc6, .y=0xc5, .sp=0xb4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1077, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1078, .a=0x45, .x=0xc6, .y=0xc5, .sp=0xb4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1077, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1077, .value=0x5c, .type=IO_READ},
        {.addr=0x1078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xf238, .a=0xbb, .x=0xc8, .y=0x48, .sp=0x7d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf238, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf239, .a=0x5d, .x=0xc8, .y=0x48, .sp=0x7d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf238, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf238, .value=0x5c, .type=IO_READ},
        {.addr=0xf239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xd1e4, .a=0xe1, .x=0x80, .y=0x53, .sp=0xd0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd1e4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd1e5, .a=0x70, .x=0x80, .y=0x53, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd1e4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd1e4, .value=0x5c, .type=IO_READ},
        {.addr=0xd1e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6311, .a=0x2e, .x=0x9d, .y=0x79, .sp=0xa5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6311, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6312, .a=0x17, .x=0x9d, .y=0x79, .sp=0xa5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6311, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6311, .value=0x5c, .type=IO_READ},
        {.addr=0x6312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xabb9, .a=0xa1, .x=0x1e, .y=0xda, .sp=0x3f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xabb9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xabba, .a=0x50, .x=0x1e, .y=0xda, .sp=0x3f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xabb9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xabb9, .value=0x5c, .type=IO_READ},
        {.addr=0xabba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x5930, .a=0x93, .x=0xb9, .y=0x2b, .sp=0xb9, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5930, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5931, .a=0x49, .x=0xb9, .y=0x2b, .sp=0xb9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5930, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5930, .value=0x5c, .type=IO_READ},
        {.addr=0x5931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xec09, .a=0xfc, .x=0x68, .y=0xe1, .sp=0x63, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xec09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xec0a, .a=0x7e, .x=0x68, .y=0xe1, .sp=0x63, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xec09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xec09, .value=0x5c, .type=IO_READ},
        {.addr=0xec0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xf878, .a=0x8a, .x=0xa5, .y=0xbf, .sp=0xef, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xf878, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf879, .a=0x45, .x=0xa5, .y=0xbf, .sp=0xef, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf878, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf878, .value=0x5c, .type=IO_READ},
        {.addr=0xf879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x3db2, .a=0xd9, .x=0x4b, .y=0x5f, .sp=0xc8, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3db2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3db3, .a=0x6c, .x=0x4b, .y=0x5f, .sp=0xc8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3db2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3db2, .value=0x5c, .type=IO_READ},
        {.addr=0x3db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1d80, .a=0x43, .x=0xca, .y=0xd5, .sp=0xad, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x1d80, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1d81, .a=0x21, .x=0xca, .y=0xd5, .sp=0xad, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1d80, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1d80, .value=0x5c, .type=IO_READ},
        {.addr=0x1d81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x194e, .a=0xe9, .x=0xd8, .y=0x6d, .sp=0x88, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x194e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x194f, .a=0x74, .x=0xd8, .y=0x6d, .sp=0x88, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x194e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x194e, .value=0x5c, .type=IO_READ},
        {.addr=0x194f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5faf, .a=0x5f, .x=0x79, .y=0xb8, .sp=0x50, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5faf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5fb0, .a=0x2f, .x=0x79, .y=0xb8, .sp=0x50, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5faf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5faf, .value=0x5c, .type=IO_READ},
        {.addr=0x5fb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xf9dc, .a=0x33, .x=0x6b, .y=0xe1, .sp=0x60, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xf9dc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf9dd, .a=0x19, .x=0x6b, .y=0xe1, .sp=0x60, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf9dc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf9dc, .value=0x5c, .type=IO_READ},
        {.addr=0xf9dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x1c9d, .a=0x46, .x=0x88, .y=0x87, .sp=0x3d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1c9d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1c9e, .a=0x23, .x=0x88, .y=0x87, .sp=0x3d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1c9d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1c9d, .value=0x5c, .type=IO_READ},
        {.addr=0x1c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xec9f, .a=0xf7, .x=0x12, .y=0x72, .sp=0x1f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xec9f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xeca0, .a=0x7b, .x=0x12, .y=0x72, .sp=0x1f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xec9f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xec9f, .value=0x5c, .type=IO_READ},
        {.addr=0xeca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xc1f4, .a=0x86, .x=0x2b, .y=0x45, .sp=0xd5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc1f5, .a=0x43, .x=0x2b, .y=0x45, .sp=0xd5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc1f4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc1f4, .value=0x5c, .type=IO_READ},
        {.addr=0xc1f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x20de, .a=0x82, .x=0x00, .y=0xcb, .sp=0x8e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x20de, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x20df, .a=0x41, .x=0x00, .y=0xcb, .sp=0x8e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x20de, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x20de, .value=0x5c, .type=IO_READ},
        {.addr=0x20df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x327c, .a=0xc9, .x=0xce, .y=0x53, .sp=0x43, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x327c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x327d, .a=0x64, .x=0xce, .y=0x53, .sp=0x43, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x327c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x327c, .value=0x5c, .type=IO_READ},
        {.addr=0x327d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xc5af, .a=0xe3, .x=0x90, .y=0xdc, .sp=0xf8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc5af, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc5b0, .a=0x71, .x=0x90, .y=0xdc, .sp=0xf8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc5af, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc5af, .value=0x5c, .type=IO_READ},
        {.addr=0xc5b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xbd59, .a=0xfe, .x=0x6d, .y=0xc5, .sp=0xfe, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xbd59, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd5a, .a=0x7f, .x=0x6d, .y=0xc5, .sp=0xfe, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbd59, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd59, .value=0x5c, .type=IO_READ},
        {.addr=0xbd5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x0c0d, .a=0x62, .x=0xb4, .y=0xa3, .sp=0x49, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0c0d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0c0e, .a=0x31, .x=0xb4, .y=0xa3, .sp=0x49, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0c0d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0c0d, .value=0x5c, .type=IO_READ},
        {.addr=0x0c0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2f2f, .a=0x56, .x=0xed, .y=0xd3, .sp=0x09, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2f2f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2f30, .a=0x2b, .x=0xed, .y=0xd3, .sp=0x09, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x2f2f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2f2f, .value=0x5c, .type=IO_READ},
        {.addr=0x2f30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x0447, .a=0xc0, .x=0x73, .y=0x8e, .sp=0x73, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0447, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0448, .a=0x60, .x=0x73, .y=0x8e, .sp=0x73, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0447, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0447, .value=0x5c, .type=IO_READ},
        {.addr=0x0448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x30d2, .a=0x94, .x=0xf6, .y=0x56, .sp=0x9e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x30d2, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x30d3, .a=0x4a, .x=0xf6, .y=0x56, .sp=0x9e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x30d2, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x30d2, .value=0x5c, .type=IO_READ},
        {.addr=0x30d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x5517, .a=0xb0, .x=0x48, .y=0xca, .sp=0x6b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x5517, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5518, .a=0x58, .x=0x48, .y=0xca, .sp=0x6b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5517, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5517, .value=0x5c, .type=IO_READ},
        {.addr=0x5518, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xfb1c, .a=0x5b, .x=0x4f, .y=0x7f, .sp=0xe6, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xfb1c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfb1d, .a=0x2d, .x=0x4f, .y=0x7f, .sp=0xe6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfb1c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfb1c, .value=0x5c, .type=IO_READ},
        {.addr=0xfb1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe7ef, .a=0x2c, .x=0x54, .y=0x28, .sp=0xf8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ef, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe7f0, .a=0x16, .x=0x54, .y=0x28, .sp=0xf8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe7ef, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe7ef, .value=0x5c, .type=IO_READ},
        {.addr=0xe7f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x3148, .a=0xfc, .x=0x8c, .y=0x4c, .sp=0x14, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3148, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3149, .a=0x7e, .x=0x8c, .y=0x4c, .sp=0x14, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3148, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3148, .value=0x5c, .type=IO_READ},
        {.addr=0x3149, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x8024, .a=0xac, .x=0xb3, .y=0xb1, .sp=0xc0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x8024, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8025, .a=0x56, .x=0xb3, .y=0xb1, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8024, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8024, .value=0x5c, .type=IO_READ},
        {.addr=0x8025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x8970, .a=0x70, .x=0xce, .y=0x5b, .sp=0xe2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8970, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8971, .a=0x38, .x=0xce, .y=0x5b, .sp=0xe2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x8970, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8970, .value=0x5c, .type=IO_READ},
        {.addr=0x8971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xdd75, .a=0x21, .x=0xab, .y=0xe1, .sp=0xd3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd75, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdd76, .a=0x10, .x=0xab, .y=0xe1, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdd75, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdd75, .value=0x5c, .type=IO_READ},
        {.addr=0xdd76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xe53b, .a=0x8a, .x=0x37, .y=0x72, .sp=0x6e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe53b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe53c, .a=0x45, .x=0x37, .y=0x72, .sp=0x6e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe53b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe53b, .value=0x5c, .type=IO_READ},
        {.addr=0xe53c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xe5d9, .a=0x83, .x=0xbf, .y=0xc7, .sp=0x3c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe5da, .a=0x41, .x=0xbf, .y=0xc7, .sp=0x3c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe5d9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe5d9, .value=0x5c, .type=IO_READ},
        {.addr=0xe5da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x5af1, .a=0xf7, .x=0xbf, .y=0x19, .sp=0x4b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5af1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5af2, .a=0x7b, .x=0xbf, .y=0x19, .sp=0x4b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5af1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5af1, .value=0x5c, .type=IO_READ},
        {.addr=0x5af2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x58fe, .a=0x21, .x=0xcc, .y=0x9f, .sp=0x53, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x58fe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x58ff, .a=0x10, .x=0xcc, .y=0x9f, .sp=0x53, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x58fe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x58fe, .value=0x5c, .type=IO_READ},
        {.addr=0x58ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x617e, .a=0x05, .x=0x9e, .y=0xb9, .sp=0x7d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x617e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x617f, .a=0x02, .x=0x9e, .y=0xb9, .sp=0x7d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x617e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x617e, .value=0x5c, .type=IO_READ},
        {.addr=0x617f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x9a50, .a=0x84, .x=0x76, .y=0xda, .sp=0x82, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9a50, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9a51, .a=0x42, .x=0x76, .y=0xda, .sp=0x82, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9a50, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9a50, .value=0x5c, .type=IO_READ},
        {.addr=0x9a51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x4419, .a=0x08, .x=0x1b, .y=0xd7, .sp=0x37, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4419, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x441a, .a=0x04, .x=0x1b, .y=0xd7, .sp=0x37, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4419, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4419, .value=0x5c, .type=IO_READ},
        {.addr=0x441a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xa667, .a=0x84, .x=0xd7, .y=0x41, .sp=0x49, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa667, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa668, .a=0x42, .x=0xd7, .y=0x41, .sp=0x49, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa667, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa667, .value=0x5c, .type=IO_READ},
        {.addr=0xa668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x186d, .a=0xc6, .x=0xe8, .y=0x03, .sp=0x68, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x186d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x186e, .a=0x63, .x=0xe8, .y=0x03, .sp=0x68, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x186d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x186d, .value=0x5c, .type=IO_READ},
        {.addr=0x186e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0300) {
    const struct CPU_State initial_cpu = {.pc=0xa31d, .a=0xba, .x=0x51, .y=0x14, .sp=0xb4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa31d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa31e, .a=0x5d, .x=0x51, .y=0x14, .sp=0xb4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa31d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa31d, .value=0x5c, .type=IO_READ},
        {.addr=0xa31e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0301) {
    const struct CPU_State initial_cpu = {.pc=0xecfc, .a=0x9b, .x=0x4e, .y=0xe2, .sp=0x78, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xecfc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xecfd, .a=0x4d, .x=0x4e, .y=0xe2, .sp=0x78, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xecfc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xecfc, .value=0x5c, .type=IO_READ},
        {.addr=0xecfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0302) {
    const struct CPU_State initial_cpu = {.pc=0xdf3a, .a=0x75, .x=0xd7, .y=0xa0, .sp=0x8f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdf3a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdf3b, .a=0x3a, .x=0xd7, .y=0xa0, .sp=0x8f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdf3a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdf3a, .value=0x5c, .type=IO_READ},
        {.addr=0xdf3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0303) {
    const struct CPU_State initial_cpu = {.pc=0x978a, .a=0x06, .x=0xeb, .y=0xe6, .sp=0x38, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x978a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x978b, .a=0x03, .x=0xeb, .y=0xe6, .sp=0x38, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x978a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x978a, .value=0x5c, .type=IO_READ},
        {.addr=0x978b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0304) {
    const struct CPU_State initial_cpu = {.pc=0xa2a8, .a=0xd7, .x=0x69, .y=0xc5, .sp=0xff, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa2a8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa2a9, .a=0x6b, .x=0x69, .y=0xc5, .sp=0xff, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa2a8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa2a8, .value=0x5c, .type=IO_READ},
        {.addr=0xa2a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0305) {
    const struct CPU_State initial_cpu = {.pc=0x7b23, .a=0x7a, .x=0x16, .y=0xbd, .sp=0x7e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b23, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7b24, .a=0x3d, .x=0x16, .y=0xbd, .sp=0x7e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7b23, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7b23, .value=0x5c, .type=IO_READ},
        {.addr=0x7b24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0306) {
    const struct CPU_State initial_cpu = {.pc=0xbc18, .a=0xb9, .x=0x9a, .y=0x13, .sp=0x99, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xbc18, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbc19, .a=0x5c, .x=0x9a, .y=0x13, .sp=0x99, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbc18, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbc18, .value=0x5c, .type=IO_READ},
        {.addr=0xbc19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0307) {
    const struct CPU_State initial_cpu = {.pc=0x6cab, .a=0x97, .x=0x10, .y=0x8a, .sp=0x33, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x6cab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6cac, .a=0x4b, .x=0x10, .y=0x8a, .sp=0x33, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6cab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6cab, .value=0x5c, .type=IO_READ},
        {.addr=0x6cac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0308) {
    const struct CPU_State initial_cpu = {.pc=0x628f, .a=0xfe, .x=0xd0, .y=0x10, .sp=0xa5, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x628f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6290, .a=0x7f, .x=0xd0, .y=0x10, .sp=0xa5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x628f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x628f, .value=0x5c, .type=IO_READ},
        {.addr=0x6290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0309) {
    const struct CPU_State initial_cpu = {.pc=0x45a0, .a=0x58, .x=0x7b, .y=0x04, .sp=0x31, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x45a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x45a1, .a=0x2c, .x=0x7b, .y=0x04, .sp=0x31, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x45a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x45a0, .value=0x5c, .type=IO_READ},
        {.addr=0x45a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030A) {
    const struct CPU_State initial_cpu = {.pc=0x84e6, .a=0x82, .x=0xac, .y=0xed, .sp=0x9d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x84e6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x84e7, .a=0x41, .x=0xac, .y=0xed, .sp=0x9d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x84e6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x84e6, .value=0x5c, .type=IO_READ},
        {.addr=0x84e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030B) {
    const struct CPU_State initial_cpu = {.pc=0x869c, .a=0xbe, .x=0x95, .y=0x58, .sp=0x02, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x869c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x869d, .a=0x5f, .x=0x95, .y=0x58, .sp=0x02, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x869c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x869c, .value=0x5c, .type=IO_READ},
        {.addr=0x869d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8b5c, .a=0x74, .x=0x0e, .y=0xd1, .sp=0x94, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8b5d, .a=0x3a, .x=0x0e, .y=0xd1, .sp=0x94, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8b5c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8b5c, .value=0x5c, .type=IO_READ},
        {.addr=0x8b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa347, .a=0x74, .x=0xe3, .y=0x86, .sp=0x8c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa347, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa348, .a=0x3a, .x=0xe3, .y=0x86, .sp=0x8c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa347, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa347, .value=0x5c, .type=IO_READ},
        {.addr=0xa348, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030E) {
    const struct CPU_State initial_cpu = {.pc=0x5339, .a=0x61, .x=0x14, .y=0xce, .sp=0x13, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5339, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x533a, .a=0x30, .x=0x14, .y=0xce, .sp=0x13, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5339, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5339, .value=0x5c, .type=IO_READ},
        {.addr=0x533a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_030F) {
    const struct CPU_State initial_cpu = {.pc=0xba18, .a=0x42, .x=0x53, .y=0x23, .sp=0xe2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xba18, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xba19, .a=0x21, .x=0x53, .y=0x23, .sp=0xe2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xba18, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xba18, .value=0x5c, .type=IO_READ},
        {.addr=0xba19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0310) {
    const struct CPU_State initial_cpu = {.pc=0x5ec4, .a=0x5f, .x=0xbf, .y=0xfa, .sp=0x2d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5ec5, .a=0x2f, .x=0xbf, .y=0xfa, .sp=0x2d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5ec4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5ec4, .value=0x5c, .type=IO_READ},
        {.addr=0x5ec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0311) {
    const struct CPU_State initial_cpu = {.pc=0xca76, .a=0x3b, .x=0x96, .y=0x68, .sp=0x66, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xca76, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xca77, .a=0x1d, .x=0x96, .y=0x68, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xca76, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xca76, .value=0x5c, .type=IO_READ},
        {.addr=0xca77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0312) {
    const struct CPU_State initial_cpu = {.pc=0xf6ce, .a=0x10, .x=0x5b, .y=0xc7, .sp=0xba, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf6cf, .a=0x08, .x=0x5b, .y=0xc7, .sp=0xba, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf6ce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf6ce, .value=0x5c, .type=IO_READ},
        {.addr=0xf6cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0313) {
    const struct CPU_State initial_cpu = {.pc=0xd358, .a=0x57, .x=0x70, .y=0x7f, .sp=0x92, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xd358, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd359, .a=0x2b, .x=0x70, .y=0x7f, .sp=0x92, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd358, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd358, .value=0x5c, .type=IO_READ},
        {.addr=0xd359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0314) {
    const struct CPU_State initial_cpu = {.pc=0x532d, .a=0x60, .x=0x4e, .y=0x95, .sp=0x8e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x532d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x532e, .a=0x30, .x=0x4e, .y=0x95, .sp=0x8e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x532d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x532d, .value=0x5c, .type=IO_READ},
        {.addr=0x532e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0315) {
    const struct CPU_State initial_cpu = {.pc=0x3bc0, .a=0x9d, .x=0x6e, .y=0x84, .sp=0x75, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3bc1, .a=0x4e, .x=0x6e, .y=0x84, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3bc0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3bc0, .value=0x5c, .type=IO_READ},
        {.addr=0x3bc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0316) {
    const struct CPU_State initial_cpu = {.pc=0x03b7, .a=0x9c, .x=0x20, .y=0x3e, .sp=0x68, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x03b7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x03b8, .a=0x4e, .x=0x20, .y=0x3e, .sp=0x68, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x03b7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x03b7, .value=0x5c, .type=IO_READ},
        {.addr=0x03b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0317) {
    const struct CPU_State initial_cpu = {.pc=0xb7f1, .a=0xc7, .x=0x7d, .y=0xc4, .sp=0xf6, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb7f2, .a=0x63, .x=0x7d, .y=0xc4, .sp=0xf6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb7f1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb7f1, .value=0x5c, .type=IO_READ},
        {.addr=0xb7f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0318) {
    const struct CPU_State initial_cpu = {.pc=0x6a78, .a=0x4a, .x=0x8d, .y=0x83, .sp=0xe2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6a78, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6a79, .a=0x25, .x=0x8d, .y=0x83, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6a78, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6a78, .value=0x5c, .type=IO_READ},
        {.addr=0x6a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0319) {
    const struct CPU_State initial_cpu = {.pc=0x8167, .a=0xbf, .x=0xcf, .y=0xc3, .sp=0x14, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8167, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8168, .a=0x5f, .x=0xcf, .y=0xc3, .sp=0x14, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8167, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8167, .value=0x5c, .type=IO_READ},
        {.addr=0x8168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031A) {
    const struct CPU_State initial_cpu = {.pc=0x1601, .a=0x01, .x=0x70, .y=0x35, .sp=0x08, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1601, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1602, .a=0x00, .x=0x70, .y=0x35, .sp=0x08, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x1601, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1601, .value=0x5c, .type=IO_READ},
        {.addr=0x1602, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031B) {
    const struct CPU_State initial_cpu = {.pc=0x6435, .a=0x74, .x=0x98, .y=0x9a, .sp=0x55, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6435, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6436, .a=0x3a, .x=0x98, .y=0x9a, .sp=0x55, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6435, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6435, .value=0x5c, .type=IO_READ},
        {.addr=0x6436, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031C) {
    const struct CPU_State initial_cpu = {.pc=0xa8af, .a=0xd0, .x=0xdb, .y=0x8c, .sp=0x64, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa8af, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa8b0, .a=0x68, .x=0xdb, .y=0x8c, .sp=0x64, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa8af, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa8af, .value=0x5c, .type=IO_READ},
        {.addr=0xa8b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031D) {
    const struct CPU_State initial_cpu = {.pc=0x7731, .a=0x28, .x=0xe3, .y=0x16, .sp=0xba, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7731, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7732, .a=0x14, .x=0xe3, .y=0x16, .sp=0xba, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7731, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7731, .value=0x5c, .type=IO_READ},
        {.addr=0x7732, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031E) {
    const struct CPU_State initial_cpu = {.pc=0x26d4, .a=0x79, .x=0x19, .y=0x06, .sp=0xf1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x26d4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x26d5, .a=0x3c, .x=0x19, .y=0x06, .sp=0xf1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x26d4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x26d4, .value=0x5c, .type=IO_READ},
        {.addr=0x26d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_031F) {
    const struct CPU_State initial_cpu = {.pc=0x24c8, .a=0x6a, .x=0xbc, .y=0x43, .sp=0x66, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x24c8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x24c9, .a=0x35, .x=0xbc, .y=0x43, .sp=0x66, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x24c8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x24c8, .value=0x5c, .type=IO_READ},
        {.addr=0x24c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0320) {
    const struct CPU_State initial_cpu = {.pc=0x5909, .a=0x5b, .x=0x21, .y=0xf5, .sp=0x15, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x5909, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x590a, .a=0x2d, .x=0x21, .y=0xf5, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5909, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5909, .value=0x5c, .type=IO_READ},
        {.addr=0x590a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0321) {
    const struct CPU_State initial_cpu = {.pc=0x342b, .a=0x8d, .x=0x75, .y=0x46, .sp=0x82, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x342b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x342c, .a=0x46, .x=0x75, .y=0x46, .sp=0x82, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x342b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x342b, .value=0x5c, .type=IO_READ},
        {.addr=0x342c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc2c1, .a=0xca, .x=0x8e, .y=0xe9, .sp=0x6c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xc2c1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc2c2, .a=0x65, .x=0x8e, .y=0xe9, .sp=0x6c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc2c1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc2c1, .value=0x5c, .type=IO_READ},
        {.addr=0xc2c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0323) {
    const struct CPU_State initial_cpu = {.pc=0x76f6, .a=0x93, .x=0x8f, .y=0x65, .sp=0x46, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x76f6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x76f7, .a=0x49, .x=0x8f, .y=0x65, .sp=0x46, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x76f6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x76f6, .value=0x5c, .type=IO_READ},
        {.addr=0x76f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbdb6, .a=0x92, .x=0x9b, .y=0x69, .sp=0xac, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbdb7, .a=0x49, .x=0x9b, .y=0x69, .sp=0xac, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xbdb6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbdb6, .value=0x5c, .type=IO_READ},
        {.addr=0xbdb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0325) {
    const struct CPU_State initial_cpu = {.pc=0x25dc, .a=0xd5, .x=0x26, .y=0xac, .sp=0x3a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x25dc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x25dd, .a=0x6a, .x=0x26, .y=0xac, .sp=0x3a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x25dc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x25dc, .value=0x5c, .type=IO_READ},
        {.addr=0x25dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0326) {
    const struct CPU_State initial_cpu = {.pc=0x1783, .a=0x2e, .x=0xad, .y=0x0c, .sp=0x23, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x1783, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1784, .a=0x17, .x=0xad, .y=0x0c, .sp=0x23, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1783, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1783, .value=0x5c, .type=IO_READ},
        {.addr=0x1784, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0327) {
    const struct CPU_State initial_cpu = {.pc=0xae39, .a=0x00, .x=0xaf, .y=0x09, .sp=0x1d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xae39, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xae3a, .a=0x00, .x=0xaf, .y=0x09, .sp=0x1d, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xae39, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xae39, .value=0x5c, .type=IO_READ},
        {.addr=0xae3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0328) {
    const struct CPU_State initial_cpu = {.pc=0x71e1, .a=0x40, .x=0x93, .y=0x18, .sp=0xef, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x71e1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x71e2, .a=0x20, .x=0x93, .y=0x18, .sp=0xef, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x71e1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x71e1, .value=0x5c, .type=IO_READ},
        {.addr=0x71e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf8bd, .a=0x87, .x=0xac, .y=0x4d, .sp=0xad, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf8be, .a=0x43, .x=0xac, .y=0x4d, .sp=0xad, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf8bd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf8bd, .value=0x5c, .type=IO_READ},
        {.addr=0xf8be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032A) {
    const struct CPU_State initial_cpu = {.pc=0xa649, .a=0x95, .x=0x1e, .y=0x40, .sp=0x26, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa649, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa64a, .a=0x4a, .x=0x1e, .y=0x40, .sp=0x26, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa649, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa649, .value=0x5c, .type=IO_READ},
        {.addr=0xa64a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032B) {
    const struct CPU_State initial_cpu = {.pc=0x69cd, .a=0x92, .x=0xeb, .y=0x7b, .sp=0x5b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x69cd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x69ce, .a=0x49, .x=0xeb, .y=0x7b, .sp=0x5b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x69cd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x69cd, .value=0x5c, .type=IO_READ},
        {.addr=0x69ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032C) {
    const struct CPU_State initial_cpu = {.pc=0xce62, .a=0x64, .x=0x9a, .y=0x93, .sp=0x12, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xce62, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xce63, .a=0x32, .x=0x9a, .y=0x93, .sp=0x12, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xce62, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xce62, .value=0x5c, .type=IO_READ},
        {.addr=0xce63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032D) {
    const struct CPU_State initial_cpu = {.pc=0x9905, .a=0x82, .x=0x2a, .y=0x15, .sp=0x36, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9905, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9906, .a=0x41, .x=0x2a, .y=0x15, .sp=0x36, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9905, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9905, .value=0x5c, .type=IO_READ},
        {.addr=0x9906, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe9ab, .a=0xc0, .x=0x42, .y=0xd4, .sp=0x28, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe9ac, .a=0x60, .x=0x42, .y=0xd4, .sp=0x28, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe9ab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe9ab, .value=0x5c, .type=IO_READ},
        {.addr=0xe9ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_032F) {
    const struct CPU_State initial_cpu = {.pc=0x4fb3, .a=0x1d, .x=0xe1, .y=0xb1, .sp=0x2c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4fb4, .a=0x0e, .x=0xe1, .y=0xb1, .sp=0x2c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4fb3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4fb3, .value=0x5c, .type=IO_READ},
        {.addr=0x4fb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0330) {
    const struct CPU_State initial_cpu = {.pc=0x1d0e, .a=0xe6, .x=0x5c, .y=0xbf, .sp=0x4b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1d0e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1d0f, .a=0x73, .x=0x5c, .y=0xbf, .sp=0x4b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1d0e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1d0e, .value=0x5c, .type=IO_READ},
        {.addr=0x1d0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0331) {
    const struct CPU_State initial_cpu = {.pc=0x582a, .a=0xad, .x=0x0c, .y=0xfb, .sp=0x66, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x582a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x582b, .a=0x56, .x=0x0c, .y=0xfb, .sp=0x66, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x582a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x582a, .value=0x5c, .type=IO_READ},
        {.addr=0x582b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0332) {
    const struct CPU_State initial_cpu = {.pc=0xb82d, .a=0xf4, .x=0x8e, .y=0x55, .sp=0xd0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb82d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb82e, .a=0x7a, .x=0x8e, .y=0x55, .sp=0xd0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb82d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb82d, .value=0x5c, .type=IO_READ},
        {.addr=0xb82e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0333) {
    const struct CPU_State initial_cpu = {.pc=0x001c, .a=0xf3, .x=0x7e, .y=0x99, .sp=0x8d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x001d, .a=0x79, .x=0x7e, .y=0x99, .sp=0x8d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x001c, .value=0x5c, .type=IO_READ},
        {.addr=0x001d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0334) {
    const struct CPU_State initial_cpu = {.pc=0x3458, .a=0xef, .x=0x60, .y=0x76, .sp=0x79, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3458, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3459, .a=0x77, .x=0x60, .y=0x76, .sp=0x79, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3458, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3458, .value=0x5c, .type=IO_READ},
        {.addr=0x3459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0335) {
    const struct CPU_State initial_cpu = {.pc=0x8f03, .a=0xe9, .x=0x35, .y=0xf9, .sp=0x9b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8f03, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8f04, .a=0x74, .x=0x35, .y=0xf9, .sp=0x9b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8f03, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8f03, .value=0x5c, .type=IO_READ},
        {.addr=0x8f04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0336) {
    const struct CPU_State initial_cpu = {.pc=0x18b5, .a=0xe7, .x=0x36, .y=0xd5, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x18b5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x18b6, .a=0x73, .x=0x36, .y=0xd5, .sp=0x23, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x18b5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x18b5, .value=0x5c, .type=IO_READ},
        {.addr=0x18b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0337) {
    const struct CPU_State initial_cpu = {.pc=0x1a5e, .a=0xf4, .x=0x5f, .y=0x43, .sp=0x58, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x1a5e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1a5f, .a=0x7a, .x=0x5f, .y=0x43, .sp=0x58, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1a5e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1a5e, .value=0x5c, .type=IO_READ},
        {.addr=0x1a5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0338) {
    const struct CPU_State initial_cpu = {.pc=0x7caa, .a=0xc1, .x=0x21, .y=0x3c, .sp=0x3c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7caa, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7cab, .a=0x60, .x=0x21, .y=0x3c, .sp=0x3c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7caa, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7caa, .value=0x5c, .type=IO_READ},
        {.addr=0x7cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0339) {
    const struct CPU_State initial_cpu = {.pc=0xf5d8, .a=0xb4, .x=0xb9, .y=0x55, .sp=0xbd, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf5d9, .a=0x5a, .x=0xb9, .y=0x55, .sp=0xbd, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf5d8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf5d8, .value=0x5c, .type=IO_READ},
        {.addr=0xf5d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033A) {
    const struct CPU_State initial_cpu = {.pc=0x42ae, .a=0x9b, .x=0x4f, .y=0xa1, .sp=0x35, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x42ae, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x42af, .a=0x4d, .x=0x4f, .y=0xa1, .sp=0x35, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x42ae, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x42ae, .value=0x5c, .type=IO_READ},
        {.addr=0x42af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033B) {
    const struct CPU_State initial_cpu = {.pc=0x1f16, .a=0x74, .x=0xd3, .y=0xd0, .sp=0x64, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1f16, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1f17, .a=0x3a, .x=0xd3, .y=0xd0, .sp=0x64, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1f16, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1f16, .value=0x5c, .type=IO_READ},
        {.addr=0x1f17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033C) {
    const struct CPU_State initial_cpu = {.pc=0x5a81, .a=0x28, .x=0x08, .y=0xe8, .sp=0xde, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5a81, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5a82, .a=0x14, .x=0x08, .y=0xe8, .sp=0xde, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5a81, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5a81, .value=0x5c, .type=IO_READ},
        {.addr=0x5a82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033D) {
    const struct CPU_State initial_cpu = {.pc=0x4505, .a=0x3e, .x=0x19, .y=0x26, .sp=0xcc, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4505, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4506, .a=0x1f, .x=0x19, .y=0x26, .sp=0xcc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4505, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4505, .value=0x5c, .type=IO_READ},
        {.addr=0x4506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033E) {
    const struct CPU_State initial_cpu = {.pc=0xbf1a, .a=0x4e, .x=0xd5, .y=0x8d, .sp=0x89, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbf1a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbf1b, .a=0x27, .x=0xd5, .y=0x8d, .sp=0x89, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbf1a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbf1a, .value=0x5c, .type=IO_READ},
        {.addr=0xbf1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_033F) {
    const struct CPU_State initial_cpu = {.pc=0x16fe, .a=0xff, .x=0xde, .y=0xa4, .sp=0xba, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x16fe, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x16ff, .a=0x7f, .x=0xde, .y=0xa4, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x16fe, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x16fe, .value=0x5c, .type=IO_READ},
        {.addr=0x16ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0340) {
    const struct CPU_State initial_cpu = {.pc=0x1c21, .a=0xae, .x=0x27, .y=0x52, .sp=0x2d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x1c21, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1c22, .a=0x57, .x=0x27, .y=0x52, .sp=0x2d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x1c21, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1c21, .value=0x5c, .type=IO_READ},
        {.addr=0x1c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7059, .a=0x8e, .x=0xb4, .y=0x29, .sp=0x0a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7059, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x705a, .a=0x47, .x=0xb4, .y=0x29, .sp=0x0a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7059, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7059, .value=0x5c, .type=IO_READ},
        {.addr=0x705a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0342) {
    const struct CPU_State initial_cpu = {.pc=0xd002, .a=0x57, .x=0x37, .y=0x27, .sp=0xa9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xd002, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd003, .a=0x2b, .x=0x37, .y=0x27, .sp=0xa9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd002, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd002, .value=0x5c, .type=IO_READ},
        {.addr=0xd003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0343) {
    const struct CPU_State initial_cpu = {.pc=0x3165, .a=0x5b, .x=0x70, .y=0xb3, .sp=0xa4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3165, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3166, .a=0x2d, .x=0x70, .y=0xb3, .sp=0xa4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3165, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3165, .value=0x5c, .type=IO_READ},
        {.addr=0x3166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0344) {
    const struct CPU_State initial_cpu = {.pc=0x86c9, .a=0xcc, .x=0x48, .y=0x1b, .sp=0xbe, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x86c9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x86ca, .a=0x66, .x=0x48, .y=0x1b, .sp=0xbe, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x86c9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x86c9, .value=0x5c, .type=IO_READ},
        {.addr=0x86ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb21d, .a=0xa4, .x=0xec, .y=0xee, .sp=0xb3, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb21d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb21e, .a=0x52, .x=0xec, .y=0xee, .sp=0xb3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb21d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb21d, .value=0x5c, .type=IO_READ},
        {.addr=0xb21e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0346) {
    const struct CPU_State initial_cpu = {.pc=0x45f7, .a=0x43, .x=0xf8, .y=0x3e, .sp=0x66, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x45f7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x45f8, .a=0x21, .x=0xf8, .y=0x3e, .sp=0x66, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x45f7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x45f7, .value=0x5c, .type=IO_READ},
        {.addr=0x45f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0347) {
    const struct CPU_State initial_cpu = {.pc=0x1deb, .a=0x86, .x=0x58, .y=0x31, .sp=0xfc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1deb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1dec, .a=0x43, .x=0x58, .y=0x31, .sp=0xfc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1deb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1deb, .value=0x5c, .type=IO_READ},
        {.addr=0x1dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0348) {
    const struct CPU_State initial_cpu = {.pc=0x93e7, .a=0x95, .x=0x76, .y=0x89, .sp=0x57, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x93e7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x93e8, .a=0x4a, .x=0x76, .y=0x89, .sp=0x57, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x93e7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x93e7, .value=0x5c, .type=IO_READ},
        {.addr=0x93e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0349) {
    const struct CPU_State initial_cpu = {.pc=0x1f54, .a=0x10, .x=0x0b, .y=0xee, .sp=0x84, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1f54, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1f55, .a=0x08, .x=0x0b, .y=0xee, .sp=0x84, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1f54, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1f54, .value=0x5c, .type=IO_READ},
        {.addr=0x1f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034A) {
    const struct CPU_State initial_cpu = {.pc=0xf877, .a=0xe2, .x=0x49, .y=0xb2, .sp=0x01, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf877, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf878, .a=0x71, .x=0x49, .y=0xb2, .sp=0x01, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf877, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf877, .value=0x5c, .type=IO_READ},
        {.addr=0xf878, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034B) {
    const struct CPU_State initial_cpu = {.pc=0xf12d, .a=0x09, .x=0x2b, .y=0xee, .sp=0x8e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf12d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf12e, .a=0x04, .x=0x2b, .y=0xee, .sp=0x8e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf12d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf12d, .value=0x5c, .type=IO_READ},
        {.addr=0xf12e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034C) {
    const struct CPU_State initial_cpu = {.pc=0xa1e5, .a=0x13, .x=0x1a, .y=0x74, .sp=0xea, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa1e6, .a=0x09, .x=0x1a, .y=0x74, .sp=0xea, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa1e5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa1e5, .value=0x5c, .type=IO_READ},
        {.addr=0xa1e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa866, .a=0xcc, .x=0x3f, .y=0x70, .sp=0x9c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa866, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa867, .a=0x66, .x=0x3f, .y=0x70, .sp=0x9c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa866, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa866, .value=0x5c, .type=IO_READ},
        {.addr=0xa867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034E) {
    const struct CPU_State initial_cpu = {.pc=0x5f05, .a=0x4e, .x=0x15, .y=0xcf, .sp=0xf8, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f05, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5f06, .a=0x27, .x=0x15, .y=0xcf, .sp=0xf8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5f05, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5f05, .value=0x5c, .type=IO_READ},
        {.addr=0x5f06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_034F) {
    const struct CPU_State initial_cpu = {.pc=0x6b62, .a=0x6a, .x=0xc3, .y=0x3b, .sp=0x16, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6b62, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6b63, .a=0x35, .x=0xc3, .y=0x3b, .sp=0x16, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6b62, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6b62, .value=0x5c, .type=IO_READ},
        {.addr=0x6b63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0350) {
    const struct CPU_State initial_cpu = {.pc=0xc270, .a=0xe0, .x=0x25, .y=0xee, .sp=0xdd, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xc270, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc271, .a=0x70, .x=0x25, .y=0xee, .sp=0xdd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc270, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc270, .value=0x5c, .type=IO_READ},
        {.addr=0xc271, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0351) {
    const struct CPU_State initial_cpu = {.pc=0x4a4c, .a=0xfe, .x=0x54, .y=0xe9, .sp=0xdd, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a4c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a4d, .a=0x7f, .x=0x54, .y=0xe9, .sp=0xdd, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4a4c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a4c, .value=0x5c, .type=IO_READ},
        {.addr=0x4a4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb503, .a=0xd1, .x=0x28, .y=0x83, .sp=0xfb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb503, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb504, .a=0x68, .x=0x28, .y=0x83, .sp=0xfb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb503, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb503, .value=0x5c, .type=IO_READ},
        {.addr=0xb504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0353) {
    const struct CPU_State initial_cpu = {.pc=0x3abf, .a=0x51, .x=0x31, .y=0x22, .sp=0x4b, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3abf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3ac0, .a=0x28, .x=0x31, .y=0x22, .sp=0x4b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3abf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3abf, .value=0x5c, .type=IO_READ},
        {.addr=0x3ac0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0354) {
    const struct CPU_State initial_cpu = {.pc=0xde40, .a=0x97, .x=0xca, .y=0x70, .sp=0x2f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xde40, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xde41, .a=0x4b, .x=0xca, .y=0x70, .sp=0x2f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xde40, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xde40, .value=0x5c, .type=IO_READ},
        {.addr=0xde41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0355) {
    const struct CPU_State initial_cpu = {.pc=0x6e74, .a=0xb8, .x=0x49, .y=0xed, .sp=0xb6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6e74, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6e75, .a=0x5c, .x=0x49, .y=0xed, .sp=0xb6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6e74, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6e74, .value=0x5c, .type=IO_READ},
        {.addr=0x6e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0356) {
    const struct CPU_State initial_cpu = {.pc=0xc075, .a=0xa5, .x=0xdd, .y=0x5d, .sp=0x37, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc075, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc076, .a=0x52, .x=0xdd, .y=0x5d, .sp=0x37, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc075, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc075, .value=0x5c, .type=IO_READ},
        {.addr=0xc076, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0357) {
    const struct CPU_State initial_cpu = {.pc=0x628e, .a=0x91, .x=0x31, .y=0x04, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x628e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x628f, .a=0x48, .x=0x31, .y=0x04, .sp=0xe4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x628e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x628e, .value=0x5c, .type=IO_READ},
        {.addr=0x628f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0358) {
    const struct CPU_State initial_cpu = {.pc=0x43de, .a=0xdf, .x=0x3d, .y=0x35, .sp=0x72, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x43de, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x43df, .a=0x6f, .x=0x3d, .y=0x35, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x43de, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x43de, .value=0x5c, .type=IO_READ},
        {.addr=0x43df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0359) {
    const struct CPU_State initial_cpu = {.pc=0x9fe0, .a=0x68, .x=0xa3, .y=0x38, .sp=0x64, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9fe1, .a=0x34, .x=0xa3, .y=0x38, .sp=0x64, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9fe0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9fe0, .value=0x5c, .type=IO_READ},
        {.addr=0x9fe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035A) {
    const struct CPU_State initial_cpu = {.pc=0xd6ef, .a=0x8f, .x=0x64, .y=0xd6, .sp=0xb5, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ef, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd6f0, .a=0x47, .x=0x64, .y=0xd6, .sp=0xb5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd6ef, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd6ef, .value=0x5c, .type=IO_READ},
        {.addr=0xd6f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035B) {
    const struct CPU_State initial_cpu = {.pc=0x9125, .a=0x88, .x=0x68, .y=0x14, .sp=0xb8, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x9125, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9126, .a=0x44, .x=0x68, .y=0x14, .sp=0xb8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9125, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9125, .value=0x5c, .type=IO_READ},
        {.addr=0x9126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035C) {
    const struct CPU_State initial_cpu = {.pc=0x6cf1, .a=0x81, .x=0x79, .y=0xd4, .sp=0x37, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6cf2, .a=0x40, .x=0x79, .y=0xd4, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6cf1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6cf1, .value=0x5c, .type=IO_READ},
        {.addr=0x6cf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035D) {
    const struct CPU_State initial_cpu = {.pc=0xaae6, .a=0xcb, .x=0xe5, .y=0x9a, .sp=0x0e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xaae6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaae7, .a=0x65, .x=0xe5, .y=0x9a, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xaae6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaae6, .value=0x5c, .type=IO_READ},
        {.addr=0xaae7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa6a0, .a=0xc1, .x=0xbf, .y=0x1d, .sp=0x3e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa6a1, .a=0x60, .x=0xbf, .y=0x1d, .sp=0x3e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa6a0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa6a0, .value=0x5c, .type=IO_READ},
        {.addr=0xa6a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_035F) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0x11, .x=0x58, .y=0x43, .sp=0xd7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb748, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb749, .a=0x08, .x=0x58, .y=0x43, .sp=0xd7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb748, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0x5c, .type=IO_READ},
        {.addr=0xb749, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0360) {
    const struct CPU_State initial_cpu = {.pc=0x6a90, .a=0x59, .x=0xd7, .y=0xf9, .sp=0x87, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6a90, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6a91, .a=0x2c, .x=0xd7, .y=0xf9, .sp=0x87, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6a90, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6a90, .value=0x5c, .type=IO_READ},
        {.addr=0x6a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0ad1, .a=0x82, .x=0x32, .y=0xb7, .sp=0x89, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0ad2, .a=0x41, .x=0x32, .y=0xb7, .sp=0x89, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0ad1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0ad1, .value=0x5c, .type=IO_READ},
        {.addr=0x0ad2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe0ca, .a=0xc7, .x=0x56, .y=0xeb, .sp=0xdc, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ca, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe0cb, .a=0x63, .x=0x56, .y=0xeb, .sp=0xdc, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe0ca, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe0ca, .value=0x5c, .type=IO_READ},
        {.addr=0xe0cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0363) {
    const struct CPU_State initial_cpu = {.pc=0xe7f9, .a=0x16, .x=0xfe, .y=0x52, .sp=0x31, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe7fa, .a=0x0b, .x=0xfe, .y=0x52, .sp=0x31, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe7f9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe7f9, .value=0x5c, .type=IO_READ},
        {.addr=0xe7fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0364) {
    const struct CPU_State initial_cpu = {.pc=0xaa2b, .a=0xac, .x=0xc9, .y=0x53, .sp=0xb3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xaa2b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaa2c, .a=0x56, .x=0xc9, .y=0x53, .sp=0xb3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xaa2b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaa2b, .value=0x5c, .type=IO_READ},
        {.addr=0xaa2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0365) {
    const struct CPU_State initial_cpu = {.pc=0x3527, .a=0x0e, .x=0x15, .y=0xae, .sp=0xfc, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3527, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3528, .a=0x07, .x=0x15, .y=0xae, .sp=0xfc, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3527, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3527, .value=0x5c, .type=IO_READ},
        {.addr=0x3528, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0366) {
    const struct CPU_State initial_cpu = {.pc=0x3b37, .a=0x48, .x=0x0b, .y=0x83, .sp=0x44, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x3b37, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3b38, .a=0x24, .x=0x0b, .y=0x83, .sp=0x44, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3b37, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3b37, .value=0x5c, .type=IO_READ},
        {.addr=0x3b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0367) {
    const struct CPU_State initial_cpu = {.pc=0x142d, .a=0x40, .x=0x8d, .y=0x8e, .sp=0x17, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x142d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x142e, .a=0x20, .x=0x8d, .y=0x8e, .sp=0x17, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x142d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x142d, .value=0x5c, .type=IO_READ},
        {.addr=0x142e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4e9a, .a=0xad, .x=0xa6, .y=0xdb, .sp=0xd9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4e9b, .a=0x56, .x=0xa6, .y=0xdb, .sp=0xd9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4e9a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4e9a, .value=0x5c, .type=IO_READ},
        {.addr=0x4e9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0369) {
    const struct CPU_State initial_cpu = {.pc=0x9a7c, .a=0xee, .x=0xc5, .y=0xde, .sp=0xad, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9a7d, .a=0x77, .x=0xc5, .y=0xde, .sp=0xad, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9a7c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9a7c, .value=0x5c, .type=IO_READ},
        {.addr=0x9a7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036A) {
    const struct CPU_State initial_cpu = {.pc=0x4c18, .a=0xf8, .x=0x9b, .y=0x26, .sp=0x12, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c18, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4c19, .a=0x7c, .x=0x9b, .y=0x26, .sp=0x12, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4c18, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4c18, .value=0x5c, .type=IO_READ},
        {.addr=0x4c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036B) {
    const struct CPU_State initial_cpu = {.pc=0xa751, .a=0x97, .x=0x87, .y=0xf5, .sp=0xcd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa751, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa752, .a=0x4b, .x=0x87, .y=0xf5, .sp=0xcd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa751, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa751, .value=0x5c, .type=IO_READ},
        {.addr=0xa752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036C) {
    const struct CPU_State initial_cpu = {.pc=0x0372, .a=0xd5, .x=0x9b, .y=0xdd, .sp=0x19, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0372, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0373, .a=0x6a, .x=0x9b, .y=0xdd, .sp=0x19, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0372, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0372, .value=0x5c, .type=IO_READ},
        {.addr=0x0373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036D) {
    const struct CPU_State initial_cpu = {.pc=0x0b14, .a=0x26, .x=0x97, .y=0x47, .sp=0xba, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0b14, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0b15, .a=0x13, .x=0x97, .y=0x47, .sp=0xba, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0b14, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0b14, .value=0x5c, .type=IO_READ},
        {.addr=0x0b15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036E) {
    const struct CPU_State initial_cpu = {.pc=0xbbdb, .a=0x17, .x=0x9a, .y=0x09, .sp=0x6a, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xbbdb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbbdc, .a=0x0b, .x=0x9a, .y=0x09, .sp=0x6a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbbdb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbbdb, .value=0x5c, .type=IO_READ},
        {.addr=0xbbdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_036F) {
    const struct CPU_State initial_cpu = {.pc=0x4cc7, .a=0x64, .x=0xc4, .y=0xfa, .sp=0xe8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4cc8, .a=0x32, .x=0xc4, .y=0xfa, .sp=0xe8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x4cc7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4cc7, .value=0x5c, .type=IO_READ},
        {.addr=0x4cc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0370) {
    const struct CPU_State initial_cpu = {.pc=0x92ed, .a=0xc7, .x=0xd8, .y=0x56, .sp=0x2b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x92ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x92ee, .a=0x63, .x=0xd8, .y=0x56, .sp=0x2b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x92ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x92ed, .value=0x5c, .type=IO_READ},
        {.addr=0x92ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0371) {
    const struct CPU_State initial_cpu = {.pc=0xec80, .a=0x20, .x=0x3d, .y=0xef, .sp=0xe3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xec80, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xec81, .a=0x10, .x=0x3d, .y=0xef, .sp=0xe3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xec80, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xec80, .value=0x5c, .type=IO_READ},
        {.addr=0xec81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0372) {
    const struct CPU_State initial_cpu = {.pc=0xbd5a, .a=0x55, .x=0xc7, .y=0x56, .sp=0x7c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbd5a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd5b, .a=0x2a, .x=0xc7, .y=0x56, .sp=0x7c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbd5a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd5a, .value=0x5c, .type=IO_READ},
        {.addr=0xbd5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0373) {
    const struct CPU_State initial_cpu = {.pc=0x5012, .a=0x7d, .x=0x66, .y=0xd1, .sp=0x30, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5012, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5013, .a=0x3e, .x=0x66, .y=0xd1, .sp=0x30, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5012, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5012, .value=0x5c, .type=IO_READ},
        {.addr=0x5013, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0374) {
    const struct CPU_State initial_cpu = {.pc=0xe22f, .a=0xa7, .x=0xad, .y=0x1c, .sp=0x17, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xe22f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe230, .a=0x53, .x=0xad, .y=0x1c, .sp=0x17, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe22f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe22f, .value=0x5c, .type=IO_READ},
        {.addr=0xe230, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0375) {
    const struct CPU_State initial_cpu = {.pc=0x8260, .a=0xac, .x=0x41, .y=0xa1, .sp=0xe5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8260, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8261, .a=0x56, .x=0x41, .y=0xa1, .sp=0xe5, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8260, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8260, .value=0x5c, .type=IO_READ},
        {.addr=0x8261, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0376) {
    const struct CPU_State initial_cpu = {.pc=0xea42, .a=0x37, .x=0x19, .y=0x41, .sp=0x6f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xea42, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xea43, .a=0x1b, .x=0x19, .y=0x41, .sp=0x6f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xea42, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xea42, .value=0x5c, .type=IO_READ},
        {.addr=0xea43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0377) {
    const struct CPU_State initial_cpu = {.pc=0xedce, .a=0x11, .x=0xcf, .y=0xb8, .sp=0xb4, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xedce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xedcf, .a=0x08, .x=0xcf, .y=0xb8, .sp=0xb4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xedce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xedce, .value=0x5c, .type=IO_READ},
        {.addr=0xedcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0378) {
    const struct CPU_State initial_cpu = {.pc=0xb130, .a=0x6f, .x=0x3d, .y=0xc2, .sp=0x46, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb130, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb131, .a=0x37, .x=0x3d, .y=0xc2, .sp=0x46, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb130, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb130, .value=0x5c, .type=IO_READ},
        {.addr=0xb131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0379) {
    const struct CPU_State initial_cpu = {.pc=0x3bbf, .a=0xda, .x=0x11, .y=0xbb, .sp=0xe6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3bbf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3bc0, .a=0x6d, .x=0x11, .y=0xbb, .sp=0xe6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3bbf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3bbf, .value=0x5c, .type=IO_READ},
        {.addr=0x3bc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037A) {
    const struct CPU_State initial_cpu = {.pc=0x8fa6, .a=0xba, .x=0x2a, .y=0x91, .sp=0x56, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8fa7, .a=0x5d, .x=0x2a, .y=0x91, .sp=0x56, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8fa6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8fa6, .value=0x5c, .type=IO_READ},
        {.addr=0x8fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf82e, .a=0xad, .x=0x2d, .y=0x31, .sp=0x33, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xf82e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf82f, .a=0x56, .x=0x2d, .y=0x31, .sp=0x33, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf82e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf82e, .value=0x5c, .type=IO_READ},
        {.addr=0xf82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037C) {
    const struct CPU_State initial_cpu = {.pc=0x16ed, .a=0xe9, .x=0xb9, .y=0xf2, .sp=0x9d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x16ed, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x16ee, .a=0x74, .x=0xb9, .y=0xf2, .sp=0x9d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x16ed, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x16ed, .value=0x5c, .type=IO_READ},
        {.addr=0x16ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037D) {
    const struct CPU_State initial_cpu = {.pc=0x1ce6, .a=0x37, .x=0x23, .y=0x22, .sp=0x4a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1ce7, .a=0x1b, .x=0x23, .y=0x22, .sp=0x4a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1ce6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1ce6, .value=0x5c, .type=IO_READ},
        {.addr=0x1ce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037E) {
    const struct CPU_State initial_cpu = {.pc=0x9ebd, .a=0xd3, .x=0xc1, .y=0x29, .sp=0x01, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9ebd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9ebe, .a=0x69, .x=0xc1, .y=0x29, .sp=0x01, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9ebd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9ebd, .value=0x5c, .type=IO_READ},
        {.addr=0x9ebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_037F) {
    const struct CPU_State initial_cpu = {.pc=0xe9c7, .a=0x37, .x=0x55, .y=0x4d, .sp=0x48, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe9c8, .a=0x1b, .x=0x55, .y=0x4d, .sp=0x48, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe9c7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe9c7, .value=0x5c, .type=IO_READ},
        {.addr=0xe9c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0380) {
    const struct CPU_State initial_cpu = {.pc=0x558a, .a=0xa0, .x=0x5f, .y=0x51, .sp=0x15, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x558a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x558b, .a=0x50, .x=0x5f, .y=0x51, .sp=0x15, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x558a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x558a, .value=0x5c, .type=IO_READ},
        {.addr=0x558b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0381) {
    const struct CPU_State initial_cpu = {.pc=0x494b, .a=0x64, .x=0x27, .y=0xc5, .sp=0x57, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x494b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x494c, .a=0x32, .x=0x27, .y=0xc5, .sp=0x57, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x494b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x494b, .value=0x5c, .type=IO_READ},
        {.addr=0x494c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf622, .a=0x74, .x=0xba, .y=0xfb, .sp=0x64, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf622, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf623, .a=0x3a, .x=0xba, .y=0xfb, .sp=0x64, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf622, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf622, .value=0x5c, .type=IO_READ},
        {.addr=0xf623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0383) {
    const struct CPU_State initial_cpu = {.pc=0xc967, .a=0xe5, .x=0x50, .y=0x68, .sp=0xb0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc967, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc968, .a=0x72, .x=0x50, .y=0x68, .sp=0xb0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc967, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc967, .value=0x5c, .type=IO_READ},
        {.addr=0xc968, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0384) {
    const struct CPU_State initial_cpu = {.pc=0x6487, .a=0xef, .x=0x52, .y=0x39, .sp=0x88, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x6487, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6488, .a=0x77, .x=0x52, .y=0x39, .sp=0x88, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6487, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6487, .value=0x5c, .type=IO_READ},
        {.addr=0x6488, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4a03, .a=0x89, .x=0x90, .y=0x74, .sp=0x71, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4a03, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4a04, .a=0x44, .x=0x90, .y=0x74, .sp=0x71, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4a03, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a03, .value=0x5c, .type=IO_READ},
        {.addr=0x4a04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0386) {
    const struct CPU_State initial_cpu = {.pc=0x6c49, .a=0x63, .x=0x33, .y=0x7b, .sp=0x23, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6c49, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6c4a, .a=0x31, .x=0x33, .y=0x7b, .sp=0x23, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6c49, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6c49, .value=0x5c, .type=IO_READ},
        {.addr=0x6c4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0387) {
    const struct CPU_State initial_cpu = {.pc=0x634b, .a=0x64, .x=0xf5, .y=0xc1, .sp=0xe6, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x634b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x634c, .a=0x32, .x=0xf5, .y=0xc1, .sp=0xe6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x634b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x634b, .value=0x5c, .type=IO_READ},
        {.addr=0x634c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0388) {
    const struct CPU_State initial_cpu = {.pc=0x66ee, .a=0x9b, .x=0xb7, .y=0xd6, .sp=0x88, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x66ee, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x66ef, .a=0x4d, .x=0xb7, .y=0xd6, .sp=0x88, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x66ee, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x66ee, .value=0x5c, .type=IO_READ},
        {.addr=0x66ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0389) {
    const struct CPU_State initial_cpu = {.pc=0x046f, .a=0x9e, .x=0x3d, .y=0xb3, .sp=0x7b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x046f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0470, .a=0x4f, .x=0x3d, .y=0xb3, .sp=0x7b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x046f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x046f, .value=0x5c, .type=IO_READ},
        {.addr=0x0470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2935, .a=0xd1, .x=0xce, .y=0xb0, .sp=0x41, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2935, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2936, .a=0x68, .x=0xce, .y=0xb0, .sp=0x41, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2935, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2935, .value=0x5c, .type=IO_READ},
        {.addr=0x2936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038B) {
    const struct CPU_State initial_cpu = {.pc=0x9c75, .a=0xd7, .x=0xe0, .y=0x67, .sp=0x4b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9c75, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9c76, .a=0x6b, .x=0xe0, .y=0x67, .sp=0x4b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9c75, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9c75, .value=0x5c, .type=IO_READ},
        {.addr=0x9c76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038C) {
    const struct CPU_State initial_cpu = {.pc=0x89a8, .a=0x93, .x=0x53, .y=0x2d, .sp=0x9b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x89a8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x89a9, .a=0x49, .x=0x53, .y=0x2d, .sp=0x9b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x89a8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x89a8, .value=0x5c, .type=IO_READ},
        {.addr=0x89a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3075, .a=0x29, .x=0x1c, .y=0x55, .sp=0x07, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3075, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3076, .a=0x14, .x=0x1c, .y=0x55, .sp=0x07, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3075, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3075, .value=0x5c, .type=IO_READ},
        {.addr=0x3076, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038E) {
    const struct CPU_State initial_cpu = {.pc=0x6983, .a=0xd1, .x=0xff, .y=0x57, .sp=0x15, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6983, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6984, .a=0x68, .x=0xff, .y=0x57, .sp=0x15, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6983, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6983, .value=0x5c, .type=IO_READ},
        {.addr=0x6984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_038F) {
    const struct CPU_State initial_cpu = {.pc=0x514d, .a=0x69, .x=0x8f, .y=0x4d, .sp=0x94, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x514d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x514e, .a=0x34, .x=0x8f, .y=0x4d, .sp=0x94, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x514d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x514d, .value=0x5c, .type=IO_READ},
        {.addr=0x514e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0390) {
    const struct CPU_State initial_cpu = {.pc=0x0e1b, .a=0xfc, .x=0xdb, .y=0x3f, .sp=0x4d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0e1b, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0e1c, .a=0x7e, .x=0xdb, .y=0x3f, .sp=0x4d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0e1b, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0e1b, .value=0x5c, .type=IO_READ},
        {.addr=0x0e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5251, .a=0xfd, .x=0xbe, .y=0xb2, .sp=0x8b, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5251, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5252, .a=0x7e, .x=0xbe, .y=0xb2, .sp=0x8b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5251, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5251, .value=0x5c, .type=IO_READ},
        {.addr=0x5252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0392) {
    const struct CPU_State initial_cpu = {.pc=0x66e4, .a=0xc2, .x=0xbd, .y=0xc7, .sp=0x4b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x66e4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x66e5, .a=0x61, .x=0xbd, .y=0xc7, .sp=0x4b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x66e4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x66e4, .value=0x5c, .type=IO_READ},
        {.addr=0x66e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0393) {
    const struct CPU_State initial_cpu = {.pc=0x0043, .a=0xb9, .x=0xc5, .y=0xb9, .sp=0x1f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0044, .a=0x5c, .x=0xc5, .y=0xb9, .sp=0x1f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0043, .value=0x5c, .type=IO_READ},
        {.addr=0x0044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0394) {
    const struct CPU_State initial_cpu = {.pc=0x707a, .a=0x9f, .x=0x78, .y=0x29, .sp=0xd8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x707a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x707b, .a=0x4f, .x=0x78, .y=0x29, .sp=0xd8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x707a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x707a, .value=0x5c, .type=IO_READ},
        {.addr=0x707b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6565, .a=0xde, .x=0x88, .y=0x03, .sp=0x2e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6565, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6566, .a=0x6f, .x=0x88, .y=0x03, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6565, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6565, .value=0x5c, .type=IO_READ},
        {.addr=0x6566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0396) {
    const struct CPU_State initial_cpu = {.pc=0x4f74, .a=0x07, .x=0x4a, .y=0x2d, .sp=0xd7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4f74, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4f75, .a=0x03, .x=0x4a, .y=0x2d, .sp=0xd7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4f74, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4f74, .value=0x5c, .type=IO_READ},
        {.addr=0x4f75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0397) {
    const struct CPU_State initial_cpu = {.pc=0x13ce, .a=0x6c, .x=0xb7, .y=0x73, .sp=0x36, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x13ce, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x13cf, .a=0x36, .x=0xb7, .y=0x73, .sp=0x36, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x13ce, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x13ce, .value=0x5c, .type=IO_READ},
        {.addr=0x13cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0398) {
    const struct CPU_State initial_cpu = {.pc=0xa6e4, .a=0x4e, .x=0x3d, .y=0x93, .sp=0x6b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa6e4, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa6e5, .a=0x27, .x=0x3d, .y=0x93, .sp=0x6b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa6e4, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa6e4, .value=0x5c, .type=IO_READ},
        {.addr=0xa6e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_0399) {
    const struct CPU_State initial_cpu = {.pc=0x768f, .a=0x91, .x=0x61, .y=0x8f, .sp=0xc4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x768f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7690, .a=0x48, .x=0x61, .y=0x8f, .sp=0xc4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x768f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x768f, .value=0x5c, .type=IO_READ},
        {.addr=0x7690, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039A) {
    const struct CPU_State initial_cpu = {.pc=0x2c98, .a=0x71, .x=0xb6, .y=0xa9, .sp=0x1c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2c98, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2c99, .a=0x38, .x=0xb6, .y=0xa9, .sp=0x1c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2c98, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2c98, .value=0x5c, .type=IO_READ},
        {.addr=0x2c99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039B) {
    const struct CPU_State initial_cpu = {.pc=0xd6c6, .a=0x4b, .x=0x23, .y=0x68, .sp=0x75, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd6c6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd6c7, .a=0x25, .x=0x23, .y=0x68, .sp=0x75, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd6c6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd6c6, .value=0x5c, .type=IO_READ},
        {.addr=0xd6c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039C) {
    const struct CPU_State initial_cpu = {.pc=0x19ff, .a=0x77, .x=0x9e, .y=0x4d, .sp=0xa7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x19ff, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1a00, .a=0x3b, .x=0x9e, .y=0x4d, .sp=0xa7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x19ff, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x19ff, .value=0x5c, .type=IO_READ},
        {.addr=0x1a00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039D) {
    const struct CPU_State initial_cpu = {.pc=0x1103, .a=0x3f, .x=0x23, .y=0xf8, .sp=0x27, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1103, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1104, .a=0x1f, .x=0x23, .y=0xf8, .sp=0x27, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1103, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1103, .value=0x5c, .type=IO_READ},
        {.addr=0x1104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039E) {
    const struct CPU_State initial_cpu = {.pc=0xb343, .a=0xf4, .x=0x9c, .y=0x44, .sp=0x50, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb343, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb344, .a=0x7a, .x=0x9c, .y=0x44, .sp=0x50, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb343, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb343, .value=0x5c, .type=IO_READ},
        {.addr=0xb344, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_039F) {
    const struct CPU_State initial_cpu = {.pc=0x7efc, .a=0xff, .x=0x4b, .y=0x1d, .sp=0x84, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7efc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7efd, .a=0x7f, .x=0x4b, .y=0x1d, .sp=0x84, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7efc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7efc, .value=0x5c, .type=IO_READ},
        {.addr=0x7efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xc3d9, .a=0x08, .x=0xc2, .y=0xd3, .sp=0x69, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc3da, .a=0x04, .x=0xc2, .y=0xd3, .sp=0x69, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc3d9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc3d9, .value=0x5c, .type=IO_READ},
        {.addr=0xc3da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xf6c8, .a=0x3c, .x=0x9d, .y=0xb2, .sp=0xd2, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf6c8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf6c9, .a=0x1e, .x=0x9d, .y=0xb2, .sp=0xd2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf6c8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf6c8, .value=0x5c, .type=IO_READ},
        {.addr=0xf6c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x87e5, .a=0x7a, .x=0x86, .y=0x4d, .sp=0x2c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x87e5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x87e6, .a=0x3d, .x=0x86, .y=0x4d, .sp=0x2c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x87e5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x87e5, .value=0x5c, .type=IO_READ},
        {.addr=0x87e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x14f0, .a=0x4e, .x=0x9d, .y=0xa1, .sp=0xbb, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x14f0, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x14f1, .a=0x27, .x=0x9d, .y=0xa1, .sp=0xbb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x14f0, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x14f0, .value=0x5c, .type=IO_READ},
        {.addr=0x14f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x7f9a, .a=0x7a, .x=0x4d, .y=0x11, .sp=0x60, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7f9a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7f9b, .a=0x3d, .x=0x4d, .y=0x11, .sp=0x60, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7f9a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7f9a, .value=0x5c, .type=IO_READ},
        {.addr=0x7f9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x923d, .a=0xcb, .x=0x8e, .y=0x0a, .sp=0x87, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x923d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x923e, .a=0x65, .x=0x8e, .y=0x0a, .sp=0x87, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x923d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x923d, .value=0x5c, .type=IO_READ},
        {.addr=0x923e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x917f, .a=0x40, .x=0x7d, .y=0x42, .sp=0x54, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x917f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9180, .a=0x20, .x=0x7d, .y=0x42, .sp=0x54, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x917f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x917f, .value=0x5c, .type=IO_READ},
        {.addr=0x9180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x56cc, .a=0xf5, .x=0x3e, .y=0xb8, .sp=0xf8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x56cc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x56cd, .a=0x7a, .x=0x3e, .y=0xb8, .sp=0xf8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x56cc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x56cc, .value=0x5c, .type=IO_READ},
        {.addr=0x56cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd9d9, .a=0xb6, .x=0x13, .y=0xd6, .sp=0x67, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d9, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd9da, .a=0x5b, .x=0x13, .y=0xd6, .sp=0x67, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd9d9, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd9d9, .value=0x5c, .type=IO_READ},
        {.addr=0xd9da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x6921, .a=0x51, .x=0x01, .y=0x1c, .sp=0x55, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6921, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6922, .a=0x28, .x=0x01, .y=0x1c, .sp=0x55, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6921, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6921, .value=0x5c, .type=IO_READ},
        {.addr=0x6922, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x303f, .a=0x7e, .x=0x5f, .y=0xd4, .sp=0xf2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x303f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3040, .a=0x3f, .x=0x5f, .y=0xd4, .sp=0xf2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x303f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x303f, .value=0x5c, .type=IO_READ},
        {.addr=0x3040, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x4998, .a=0x56, .x=0xe3, .y=0xb5, .sp=0xde, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x4998, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4999, .a=0x2b, .x=0xe3, .y=0xb5, .sp=0xde, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x4998, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4998, .value=0x5c, .type=IO_READ},
        {.addr=0x4999, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x4742, .a=0x77, .x=0x51, .y=0xc6, .sp=0x61, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4742, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4743, .a=0x3b, .x=0x51, .y=0xc6, .sp=0x61, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4742, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4742, .value=0x5c, .type=IO_READ},
        {.addr=0x4743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x5f33, .a=0xf6, .x=0x77, .y=0x2e, .sp=0xe2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f33, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5f34, .a=0x7b, .x=0x77, .y=0x2e, .sp=0xe2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5f33, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5f33, .value=0x5c, .type=IO_READ},
        {.addr=0x5f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x1d09, .a=0x93, .x=0x8b, .y=0x1d, .sp=0xc0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1d09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1d0a, .a=0x49, .x=0x8b, .y=0x1d, .sp=0xc0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1d09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1d09, .value=0x5c, .type=IO_READ},
        {.addr=0x1d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7a09, .a=0x41, .x=0x2d, .y=0x69, .sp=0x65, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7a09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7a0a, .a=0x20, .x=0x2d, .y=0x69, .sp=0x65, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7a09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7a09, .value=0x5c, .type=IO_READ},
        {.addr=0x7a0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xc35e, .a=0x91, .x=0xb1, .y=0x41, .sp=0x61, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc35e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc35f, .a=0x48, .x=0xb1, .y=0x41, .sp=0x61, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc35e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc35e, .value=0x5c, .type=IO_READ},
        {.addr=0xc35f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x0601, .a=0x33, .x=0x3d, .y=0xb6, .sp=0xba, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0601, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x0602, .a=0x19, .x=0x3d, .y=0xb6, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0601, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x0601, .value=0x5c, .type=IO_READ},
        {.addr=0x0602, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x04d3, .a=0x4f, .x=0xde, .y=0x33, .sp=0xb6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x04d3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x04d4, .a=0x27, .x=0xde, .y=0x33, .sp=0xb6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x04d3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x04d3, .value=0x5c, .type=IO_READ},
        {.addr=0x04d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x7144, .a=0x79, .x=0xbf, .y=0xc7, .sp=0x55, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7144, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7145, .a=0x3c, .x=0xbf, .y=0xc7, .sp=0x55, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7144, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7144, .value=0x5c, .type=IO_READ},
        {.addr=0x7145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x8353, .a=0x95, .x=0x0c, .y=0x9c, .sp=0x1e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8353, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8354, .a=0x4a, .x=0x0c, .y=0x9c, .sp=0x1e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8353, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8353, .value=0x5c, .type=IO_READ},
        {.addr=0x8354, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x9e66, .a=0xba, .x=0x2a, .y=0xc6, .sp=0x26, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9e66, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9e67, .a=0x5d, .x=0x2a, .y=0xc6, .sp=0x26, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9e66, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9e66, .value=0x5c, .type=IO_READ},
        {.addr=0x9e67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xa06f, .a=0x1b, .x=0x81, .y=0x78, .sp=0x99, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa06f, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa070, .a=0x0d, .x=0x81, .y=0x78, .sp=0x99, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa06f, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa06f, .value=0x5c, .type=IO_READ},
        {.addr=0xa070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xfd59, .a=0x38, .x=0x41, .y=0x3b, .sp=0x4a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd59, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfd5a, .a=0x1c, .x=0x41, .y=0x3b, .sp=0x4a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfd59, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfd59, .value=0x5c, .type=IO_READ},
        {.addr=0xfd5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xdc48, .a=0xea, .x=0x33, .y=0x6c, .sp=0x33, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdc48, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdc49, .a=0x75, .x=0x33, .y=0x6c, .sp=0x33, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xdc48, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdc48, .value=0x5c, .type=IO_READ},
        {.addr=0xdc49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x6874, .a=0xa8, .x=0x33, .y=0xc9, .sp=0x84, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6874, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6875, .a=0x54, .x=0x33, .y=0xc9, .sp=0x84, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6874, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6874, .value=0x5c, .type=IO_READ},
        {.addr=0x6875, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xc8d3, .a=0xb0, .x=0x52, .y=0xb7, .sp=0xee, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc8d4, .a=0x58, .x=0x52, .y=0xb7, .sp=0xee, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc8d3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc8d3, .value=0x5c, .type=IO_READ},
        {.addr=0xc8d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x885e, .a=0x91, .x=0x95, .y=0x58, .sp=0x41, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x885e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x885f, .a=0x48, .x=0x95, .y=0x58, .sp=0x41, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x885e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x885e, .value=0x5c, .type=IO_READ},
        {.addr=0x885f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x621a, .a=0xa8, .x=0x74, .y=0x9f, .sp=0x09, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x621a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x621b, .a=0x54, .x=0x74, .y=0x9f, .sp=0x09, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x621a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x621a, .value=0x5c, .type=IO_READ},
        {.addr=0x621b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x9353, .a=0x70, .x=0xf2, .y=0x65, .sp=0xa0, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9353, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9354, .a=0x38, .x=0xf2, .y=0x65, .sp=0xa0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9353, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x9353, .value=0x5c, .type=IO_READ},
        {.addr=0x9354, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xfb8a, .a=0x97, .x=0xc6, .y=0xc9, .sp=0x44, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xfb8a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfb8b, .a=0x4b, .x=0xc6, .y=0xc9, .sp=0x44, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfb8a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfb8a, .value=0x5c, .type=IO_READ},
        {.addr=0xfb8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x8c27, .a=0xcc, .x=0xb2, .y=0x2c, .sp=0xae, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8c27, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8c28, .a=0x66, .x=0xb2, .y=0x2c, .sp=0xae, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8c27, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8c27, .value=0x5c, .type=IO_READ},
        {.addr=0x8c28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xc541, .a=0xed, .x=0x05, .y=0x44, .sp=0x0f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc541, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc542, .a=0x76, .x=0x05, .y=0x44, .sp=0x0f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc541, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc541, .value=0x5c, .type=IO_READ},
        {.addr=0xc542, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb644, .a=0x78, .x=0xa1, .y=0x51, .sp=0xe5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb644, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb645, .a=0x3c, .x=0xa1, .y=0x51, .sp=0xe5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb644, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb644, .value=0x5c, .type=IO_READ},
        {.addr=0xb645, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x631e, .a=0xc5, .x=0x61, .y=0x72, .sp=0x73, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x631e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x631f, .a=0x62, .x=0x61, .y=0x72, .sp=0x73, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x631e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x631e, .value=0x5c, .type=IO_READ},
        {.addr=0x631f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x3850, .a=0x8e, .x=0x7d, .y=0x91, .sp=0x14, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3850, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3851, .a=0x47, .x=0x7d, .y=0x91, .sp=0x14, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3850, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3850, .value=0x5c, .type=IO_READ},
        {.addr=0x3851, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf86e, .a=0x24, .x=0x10, .y=0x29, .sp=0x40, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xf86e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf86f, .a=0x12, .x=0x10, .y=0x29, .sp=0x40, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf86e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf86e, .value=0x5c, .type=IO_READ},
        {.addr=0xf86f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xb82a, .a=0xc0, .x=0x95, .y=0xaa, .sp=0xe2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xb82a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xb82b, .a=0x60, .x=0x95, .y=0xaa, .sp=0xe2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb82a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xb82a, .value=0x5c, .type=IO_READ},
        {.addr=0xb82b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xacf6, .a=0xcb, .x=0x7c, .y=0x5a, .sp=0xce, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xacf6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xacf7, .a=0x65, .x=0x7c, .y=0x5a, .sp=0xce, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xacf6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xacf6, .value=0x5c, .type=IO_READ},
        {.addr=0xacf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xce3c, .a=0x10, .x=0x6b, .y=0x21, .sp=0x36, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xce3c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xce3d, .a=0x08, .x=0x6b, .y=0x21, .sp=0x36, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xce3c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xce3c, .value=0x5c, .type=IO_READ},
        {.addr=0xce3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x532d, .a=0x12, .x=0xba, .y=0xe4, .sp=0x80, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x532d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x532e, .a=0x09, .x=0xba, .y=0xe4, .sp=0x80, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x532d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x532d, .value=0x5c, .type=IO_READ},
        {.addr=0x532e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4f06, .a=0x2d, .x=0xa5, .y=0xac, .sp=0xaa, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4f06, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4f07, .a=0x16, .x=0xa5, .y=0xac, .sp=0xaa, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4f06, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4f06, .value=0x5c, .type=IO_READ},
        {.addr=0x4f07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xf83a, .a=0x8c, .x=0xc9, .y=0xd1, .sp=0x8f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf83a, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf83b, .a=0x46, .x=0xc9, .y=0xd1, .sp=0x8f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf83a, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf83a, .value=0x5c, .type=IO_READ},
        {.addr=0xf83b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xa5bf, .a=0x9b, .x=0xd4, .y=0xe3, .sp=0xdd, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa5bf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa5c0, .a=0x4d, .x=0xd4, .y=0xe3, .sp=0xdd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa5bf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa5bf, .value=0x5c, .type=IO_READ},
        {.addr=0xa5c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xd688, .a=0x3b, .x=0x7e, .y=0x00, .sp=0x17, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd688, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd689, .a=0x1d, .x=0x7e, .y=0x00, .sp=0x17, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd688, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd688, .value=0x5c, .type=IO_READ},
        {.addr=0xd689, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x6881, .a=0xef, .x=0x22, .y=0x0b, .sp=0x06, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6881, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6882, .a=0x77, .x=0x22, .y=0x0b, .sp=0x06, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6881, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6881, .value=0x5c, .type=IO_READ},
        {.addr=0x6882, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x981c, .a=0x2f, .x=0xa5, .y=0xaa, .sp=0xaa, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x981c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x981d, .a=0x17, .x=0xa5, .y=0xaa, .sp=0xaa, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x981c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x981c, .value=0x5c, .type=IO_READ},
        {.addr=0x981d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xa80d, .a=0xad, .x=0xfa, .y=0x6b, .sp=0x64, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa80d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa80e, .a=0x56, .x=0xfa, .y=0x6b, .sp=0x64, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa80d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa80d, .value=0x5c, .type=IO_READ},
        {.addr=0xa80e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xf61e, .a=0x2f, .x=0xe7, .y=0xa8, .sp=0xa3, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf61e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf61f, .a=0x17, .x=0xe7, .y=0xa8, .sp=0xa3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf61e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf61e, .value=0x5c, .type=IO_READ},
        {.addr=0xf61f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xdfe7, .a=0xe6, .x=0x65, .y=0x2d, .sp=0xee, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe7, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xdfe8, .a=0x73, .x=0x65, .y=0x2d, .sp=0xee, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xdfe7, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xdfe7, .value=0x5c, .type=IO_READ},
        {.addr=0xdfe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xd7f1, .a=0xea, .x=0xe2, .y=0x87, .sp=0xd0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f1, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd7f2, .a=0x75, .x=0xe2, .y=0x87, .sp=0xd0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd7f1, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd7f1, .value=0x5c, .type=IO_READ},
        {.addr=0xd7f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x680e, .a=0x09, .x=0x60, .y=0xfb, .sp=0xcb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x680e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x680f, .a=0x04, .x=0x60, .y=0xfb, .sp=0xcb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x680e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x680e, .value=0x5c, .type=IO_READ},
        {.addr=0x680f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x8775, .a=0xa2, .x=0x9d, .y=0xb3, .sp=0xb2, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8775, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8776, .a=0x51, .x=0x9d, .y=0xb3, .sp=0xb2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8775, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8775, .value=0x5c, .type=IO_READ},
        {.addr=0x8776, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1ba8, .a=0x88, .x=0xff, .y=0xe3, .sp=0xaf, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba8, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x1ba9, .a=0x44, .x=0xff, .y=0xe3, .sp=0xaf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1ba8, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x1ba8, .value=0x5c, .type=IO_READ},
        {.addr=0x1ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x5b60, .a=0x22, .x=0x7d, .y=0x8c, .sp=0x61, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5b60, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x5b61, .a=0x11, .x=0x7d, .y=0x8c, .sp=0x61, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5b60, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x5b60, .value=0x5c, .type=IO_READ},
        {.addr=0x5b61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xccab, .a=0x60, .x=0x6e, .y=0x10, .sp=0xdf, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xccab, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xccac, .a=0x30, .x=0x6e, .y=0x10, .sp=0xdf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xccab, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xccab, .value=0x5c, .type=IO_READ},
        {.addr=0xccac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x89fb, .a=0xda, .x=0x28, .y=0x3f, .sp=0xdc, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x89fb, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x89fc, .a=0x6d, .x=0x28, .y=0x3f, .sp=0xdc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x89fb, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x89fb, .value=0x5c, .type=IO_READ},
        {.addr=0x89fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x26ad, .a=0xe4, .x=0xf9, .y=0x7e, .sp=0x66, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x26ad, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x26ae, .a=0x72, .x=0xf9, .y=0x7e, .sp=0x66, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x26ad, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x26ad, .value=0x5c, .type=IO_READ},
        {.addr=0x26ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x8fd6, .a=0x14, .x=0x99, .y=0x1f, .sp=0x5d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x8fd7, .a=0x0a, .x=0x99, .y=0x1f, .sp=0x5d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8fd6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x8fd6, .value=0x5c, .type=IO_READ},
        {.addr=0x8fd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xfe8d, .a=0x9a, .x=0xb8, .y=0x83, .sp=0xdc, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe8d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfe8e, .a=0x4d, .x=0xb8, .y=0x83, .sp=0xdc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfe8d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfe8d, .value=0x5c, .type=IO_READ},
        {.addr=0xfe8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x001c, .a=0xef, .x=0x49, .y=0xdd, .sp=0xf9, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x001d, .a=0x77, .x=0x49, .y=0xdd, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x001c, .value=0x5c, .type=IO_READ},
        {.addr=0x001d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x52e6, .a=0x69, .x=0x79, .y=0x25, .sp=0xcb, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x52e6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x52e7, .a=0x34, .x=0x79, .y=0x25, .sp=0xcb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x52e6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x52e6, .value=0x5c, .type=IO_READ},
        {.addr=0x52e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x7caf, .a=0xa6, .x=0x60, .y=0x22, .sp=0xd8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7caf, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7cb0, .a=0x53, .x=0x60, .y=0x22, .sp=0xd8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7caf, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7caf, .value=0x5c, .type=IO_READ},
        {.addr=0x7cb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xd420, .a=0xe9, .x=0xda, .y=0xcf, .sp=0xe5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd420, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd421, .a=0x74, .x=0xda, .y=0xcf, .sp=0xe5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd420, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd420, .value=0x5c, .type=IO_READ},
        {.addr=0xd421, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x39b3, .a=0x9f, .x=0x36, .y=0x33, .sp=0x00, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x39b3, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x39b4, .a=0x4f, .x=0x36, .y=0x33, .sp=0x00, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x39b3, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x39b3, .value=0x5c, .type=IO_READ},
        {.addr=0x39b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xa948, .a=0x1d, .x=0x6d, .y=0x69, .sp=0xbf, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa948, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xa949, .a=0x0e, .x=0x6d, .y=0x69, .sp=0xbf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa948, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xa948, .value=0x5c, .type=IO_READ},
        {.addr=0xa949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xd854, .a=0x28, .x=0xb4, .y=0xbe, .sp=0x46, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd854, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xd855, .a=0x14, .x=0xb4, .y=0xbe, .sp=0x46, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd854, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xd854, .value=0x5c, .type=IO_READ},
        {.addr=0xd855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xfe09, .a=0x77, .x=0xe6, .y=0xfc, .sp=0xfb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfe09, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfe0a, .a=0x3b, .x=0xe6, .y=0xfc, .sp=0xfb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfe09, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfe09, .value=0x5c, .type=IO_READ},
        {.addr=0xfe0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x54fd, .a=0x4e, .x=0x2e, .y=0x0f, .sp=0xa1, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x54fd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x54fe, .a=0x27, .x=0x2e, .y=0x0f, .sp=0xa1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x54fd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x54fd, .value=0x5c, .type=IO_READ},
        {.addr=0x54fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x6db6, .a=0xfd, .x=0x12, .y=0x2b, .sp=0x29, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x6db6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6db7, .a=0x7e, .x=0x12, .y=0x2b, .sp=0x29, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6db6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6db6, .value=0x5c, .type=IO_READ},
        {.addr=0x6db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xfa2d, .a=0xb8, .x=0xae, .y=0xac, .sp=0xe9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfa2e, .a=0x5c, .x=0xae, .y=0xac, .sp=0xe9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfa2d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfa2d, .value=0x5c, .type=IO_READ},
        {.addr=0xfa2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_5C, _5C_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xfc51, .a=0x33, .x=0x74, .y=0x4e, .sp=0x88, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfc51, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xfc52, .a=0x19, .x=0x74, .y=0x4e, .sp=0x88, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfc51, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xfc51, .value=0x5c, .type=IO_READ},
        {.addr=0xfc52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("5C 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
