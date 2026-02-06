#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_9C, _9C_0000) {
    const struct CPU_State initial_cpu = {.pc=0xb5d6, .a=0xbc, .x=0x81, .y=0x25, .sp=0xaf, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb5d7, .a=0xbb, .x=0x81, .y=0x25, .sp=0xaf, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb5d6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb5d6, .value=0x9c, .type=IO_READ},
        {.addr=0xb5d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0001) {
    const struct CPU_State initial_cpu = {.pc=0x5261, .a=0x5d, .x=0x80, .y=0x5c, .sp=0x97, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x5261, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5262, .a=0x5c, .x=0x80, .y=0x5c, .sp=0x97, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x5261, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5261, .value=0x9c, .type=IO_READ},
        {.addr=0x5262, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0002) {
    const struct CPU_State initial_cpu = {.pc=0xfa72, .a=0x2a, .x=0x34, .y=0x87, .sp=0xd9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xfa72, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfa73, .a=0x29, .x=0x34, .y=0x87, .sp=0xd9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xfa72, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfa72, .value=0x9c, .type=IO_READ},
        {.addr=0xfa73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0003) {
    const struct CPU_State initial_cpu = {.pc=0x6ea8, .a=0x9b, .x=0x20, .y=0x71, .sp=0xd8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ea9, .a=0x9a, .x=0x20, .y=0x71, .sp=0xd8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6ea8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ea8, .value=0x9c, .type=IO_READ},
        {.addr=0x6ea9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0004) {
    const struct CPU_State initial_cpu = {.pc=0x0717, .a=0xb8, .x=0x2f, .y=0xff, .sp=0xdd, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0717, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0718, .a=0xb7, .x=0x2f, .y=0xff, .sp=0xdd, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0717, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0717, .value=0x9c, .type=IO_READ},
        {.addr=0x0718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0184, .a=0x19, .x=0xbf, .y=0xb2, .sp=0xe3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0185, .a=0x18, .x=0xbf, .y=0xb2, .sp=0xe3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0184, .value=0x9c, .type=IO_READ},
        {.addr=0x0185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0006) {
    const struct CPU_State initial_cpu = {.pc=0x5d6b, .a=0x36, .x=0x09, .y=0xc1, .sp=0xa5, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5d6c, .a=0x35, .x=0x09, .y=0xc1, .sp=0xa5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5d6b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5d6b, .value=0x9c, .type=IO_READ},
        {.addr=0x5d6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0007) {
    const struct CPU_State initial_cpu = {.pc=0xcf98, .a=0xf9, .x=0x8c, .y=0x78, .sp=0x25, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xcf98, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcf99, .a=0xf8, .x=0x8c, .y=0x78, .sp=0x25, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xcf98, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcf98, .value=0x9c, .type=IO_READ},
        {.addr=0xcf99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0008) {
    const struct CPU_State initial_cpu = {.pc=0xbd18, .a=0xa5, .x=0x4c, .y=0x7d, .sp=0xd1, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbd18, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbd19, .a=0xa4, .x=0x4c, .y=0x7d, .sp=0xd1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbd18, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbd18, .value=0x9c, .type=IO_READ},
        {.addr=0xbd19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0009) {
    const struct CPU_State initial_cpu = {.pc=0x73f8, .a=0x50, .x=0x45, .y=0xb7, .sp=0x02, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x73f8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x73f9, .a=0x4f, .x=0x45, .y=0xb7, .sp=0x02, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x73f8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x73f8, .value=0x9c, .type=IO_READ},
        {.addr=0x73f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000A) {
    const struct CPU_State initial_cpu = {.pc=0x9523, .a=0x18, .x=0x7f, .y=0x6e, .sp=0x71, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9523, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9524, .a=0x17, .x=0x7f, .y=0x6e, .sp=0x71, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9523, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9523, .value=0x9c, .type=IO_READ},
        {.addr=0x9524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000B) {
    const struct CPU_State initial_cpu = {.pc=0x092d, .a=0xf0, .x=0xa8, .y=0xb3, .sp=0xdc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x092d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x092e, .a=0xef, .x=0xa8, .y=0xb3, .sp=0xdc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x092d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x092d, .value=0x9c, .type=IO_READ},
        {.addr=0x092e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000C) {
    const struct CPU_State initial_cpu = {.pc=0xb675, .a=0x73, .x=0xc3, .y=0x19, .sp=0xc2, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb675, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb676, .a=0x72, .x=0xc3, .y=0x19, .sp=0xc2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb675, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb675, .value=0x9c, .type=IO_READ},
        {.addr=0xb676, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000D) {
    const struct CPU_State initial_cpu = {.pc=0xbaff, .a=0xa2, .x=0xf1, .y=0x7b, .sp=0x43, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbaff, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb00, .a=0xa1, .x=0xf1, .y=0x7b, .sp=0x43, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbaff, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbaff, .value=0x9c, .type=IO_READ},
        {.addr=0xbb00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000E) {
    const struct CPU_State initial_cpu = {.pc=0xc765, .a=0x8e, .x=0xdd, .y=0xa5, .sp=0xa9, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xc765, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc766, .a=0x8d, .x=0xdd, .y=0xa5, .sp=0xa9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc765, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc765, .value=0x9c, .type=IO_READ},
        {.addr=0xc766, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_000F) {
    const struct CPU_State initial_cpu = {.pc=0x7d3e, .a=0xef, .x=0x6a, .y=0x8c, .sp=0xba, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7d3f, .a=0xee, .x=0x6a, .y=0x8c, .sp=0xba, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7d3e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7d3e, .value=0x9c, .type=IO_READ},
        {.addr=0x7d3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0010) {
    const struct CPU_State initial_cpu = {.pc=0x1f1a, .a=0xf0, .x=0xc7, .y=0xc4, .sp=0x52, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1f1a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1f1b, .a=0xef, .x=0xc7, .y=0xc4, .sp=0x52, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1f1a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1f1a, .value=0x9c, .type=IO_READ},
        {.addr=0x1f1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0011) {
    const struct CPU_State initial_cpu = {.pc=0x0549, .a=0x2f, .x=0xc8, .y=0x1d, .sp=0xfa, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0549, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x054a, .a=0x2e, .x=0xc8, .y=0x1d, .sp=0xfa, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0549, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0549, .value=0x9c, .type=IO_READ},
        {.addr=0x054a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0012) {
    const struct CPU_State initial_cpu = {.pc=0x5583, .a=0x0f, .x=0xac, .y=0x11, .sp=0xb4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5583, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5584, .a=0x0e, .x=0xac, .y=0x11, .sp=0xb4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5583, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5583, .value=0x9c, .type=IO_READ},
        {.addr=0x5584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0013) {
    const struct CPU_State initial_cpu = {.pc=0x591a, .a=0xa6, .x=0x9f, .y=0x15, .sp=0x9a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x591a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x591b, .a=0xa5, .x=0x9f, .y=0x15, .sp=0x9a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x591a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x591a, .value=0x9c, .type=IO_READ},
        {.addr=0x591b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0014) {
    const struct CPU_State initial_cpu = {.pc=0x92de, .a=0xb9, .x=0x1d, .y=0xd9, .sp=0x27, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x92de, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x92df, .a=0xb8, .x=0x1d, .y=0xd9, .sp=0x27, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x92de, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x92de, .value=0x9c, .type=IO_READ},
        {.addr=0x92df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0015) {
    const struct CPU_State initial_cpu = {.pc=0x9250, .a=0xf4, .x=0xca, .y=0xa0, .sp=0xf7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x9250, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9251, .a=0xf3, .x=0xca, .y=0xa0, .sp=0xf7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9250, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9250, .value=0x9c, .type=IO_READ},
        {.addr=0x9251, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0016) {
    const struct CPU_State initial_cpu = {.pc=0x4143, .a=0x84, .x=0x65, .y=0x2e, .sp=0x64, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4143, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4144, .a=0x83, .x=0x65, .y=0x2e, .sp=0x64, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4143, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4143, .value=0x9c, .type=IO_READ},
        {.addr=0x4144, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0017) {
    const struct CPU_State initial_cpu = {.pc=0x7708, .a=0x90, .x=0x83, .y=0x29, .sp=0x17, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7708, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7709, .a=0x8f, .x=0x83, .y=0x29, .sp=0x17, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7708, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7708, .value=0x9c, .type=IO_READ},
        {.addr=0x7709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0018) {
    const struct CPU_State initial_cpu = {.pc=0x301e, .a=0x7d, .x=0xee, .y=0xdb, .sp=0x32, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x301e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x301f, .a=0x7c, .x=0xee, .y=0xdb, .sp=0x32, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x301e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x301e, .value=0x9c, .type=IO_READ},
        {.addr=0x301f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0019) {
    const struct CPU_State initial_cpu = {.pc=0xbff4, .a=0x36, .x=0x53, .y=0x57, .sp=0x81, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbff4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbff5, .a=0x35, .x=0x53, .y=0x57, .sp=0x81, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbff4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbff4, .value=0x9c, .type=IO_READ},
        {.addr=0xbff5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001A) {
    const struct CPU_State initial_cpu = {.pc=0xee00, .a=0xad, .x=0x3f, .y=0x81, .sp=0x98, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xee00, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee01, .a=0xac, .x=0x3f, .y=0x81, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xee00, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee00, .value=0x9c, .type=IO_READ},
        {.addr=0xee01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001B) {
    const struct CPU_State initial_cpu = {.pc=0x1cc7, .a=0x06, .x=0x6a, .y=0x2e, .sp=0xb5, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1cc8, .a=0x05, .x=0x6a, .y=0x2e, .sp=0xb5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1cc7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1cc7, .value=0x9c, .type=IO_READ},
        {.addr=0x1cc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001C) {
    const struct CPU_State initial_cpu = {.pc=0x9238, .a=0x7e, .x=0xfe, .y=0x59, .sp=0x58, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9238, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9239, .a=0x7d, .x=0xfe, .y=0x59, .sp=0x58, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9238, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9238, .value=0x9c, .type=IO_READ},
        {.addr=0x9239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001D) {
    const struct CPU_State initial_cpu = {.pc=0xce24, .a=0xf7, .x=0x28, .y=0xe9, .sp=0x5e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xce24, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xce25, .a=0xf6, .x=0x28, .y=0xe9, .sp=0x5e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xce24, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xce24, .value=0x9c, .type=IO_READ},
        {.addr=0xce25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001E) {
    const struct CPU_State initial_cpu = {.pc=0xd5e5, .a=0x58, .x=0x0a, .y=0xb1, .sp=0x70, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xd5e5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd5e6, .a=0x57, .x=0x0a, .y=0xb1, .sp=0x70, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd5e5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd5e5, .value=0x9c, .type=IO_READ},
        {.addr=0xd5e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_001F) {
    const struct CPU_State initial_cpu = {.pc=0x5121, .a=0xba, .x=0x9f, .y=0x51, .sp=0xa9, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5121, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5122, .a=0xb9, .x=0x9f, .y=0x51, .sp=0xa9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5121, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5121, .value=0x9c, .type=IO_READ},
        {.addr=0x5122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0020) {
    const struct CPU_State initial_cpu = {.pc=0xd26a, .a=0xf6, .x=0x90, .y=0x2d, .sp=0x5f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd26a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd26b, .a=0xf5, .x=0x90, .y=0x2d, .sp=0x5f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd26a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd26a, .value=0x9c, .type=IO_READ},
        {.addr=0xd26b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0021) {
    const struct CPU_State initial_cpu = {.pc=0x4989, .a=0x8e, .x=0xb6, .y=0xf7, .sp=0x31, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4989, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x498a, .a=0x8d, .x=0xb6, .y=0xf7, .sp=0x31, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4989, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4989, .value=0x9c, .type=IO_READ},
        {.addr=0x498a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0022) {
    const struct CPU_State initial_cpu = {.pc=0x574a, .a=0xc3, .x=0x36, .y=0x16, .sp=0x8e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x574a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x574b, .a=0xc2, .x=0x36, .y=0x16, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x574a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x574a, .value=0x9c, .type=IO_READ},
        {.addr=0x574b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0023) {
    const struct CPU_State initial_cpu = {.pc=0x93a9, .a=0xbf, .x=0x8c, .y=0x62, .sp=0x8f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x93a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x93aa, .a=0xbe, .x=0x8c, .y=0x62, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x93a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x93a9, .value=0x9c, .type=IO_READ},
        {.addr=0x93aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf3f9, .a=0x6a, .x=0xad, .y=0x0b, .sp=0xd7, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf3f9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf3fa, .a=0x69, .x=0xad, .y=0x0b, .sp=0xd7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf3f9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf3f9, .value=0x9c, .type=IO_READ},
        {.addr=0xf3fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0025) {
    const struct CPU_State initial_cpu = {.pc=0x284e, .a=0x83, .x=0x2c, .y=0x6e, .sp=0x84, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x284e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x284f, .a=0x82, .x=0x2c, .y=0x6e, .sp=0x84, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x284e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x284e, .value=0x9c, .type=IO_READ},
        {.addr=0x284f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0026) {
    const struct CPU_State initial_cpu = {.pc=0xf85f, .a=0x55, .x=0x38, .y=0x71, .sp=0xbe, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf85f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf860, .a=0x54, .x=0x38, .y=0x71, .sp=0xbe, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf85f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf85f, .value=0x9c, .type=IO_READ},
        {.addr=0xf860, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0027) {
    const struct CPU_State initial_cpu = {.pc=0x2372, .a=0x65, .x=0x53, .y=0x05, .sp=0x8f, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2372, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2373, .a=0x64, .x=0x53, .y=0x05, .sp=0x8f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2372, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2372, .value=0x9c, .type=IO_READ},
        {.addr=0x2373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2ef6, .a=0x8d, .x=0x07, .y=0x7d, .sp=0xfc, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2ef7, .a=0x8c, .x=0x07, .y=0x7d, .sp=0xfc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2ef6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2ef6, .value=0x9c, .type=IO_READ},
        {.addr=0x2ef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0029) {
    const struct CPU_State initial_cpu = {.pc=0xf70e, .a=0x63, .x=0x13, .y=0x9f, .sp=0x76, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf70e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf70f, .a=0x62, .x=0x13, .y=0x9f, .sp=0x76, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf70e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf70e, .value=0x9c, .type=IO_READ},
        {.addr=0xf70f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002A) {
    const struct CPU_State initial_cpu = {.pc=0x191f, .a=0xcb, .x=0xc8, .y=0xde, .sp=0x3a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x191f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1920, .a=0xca, .x=0xc8, .y=0xde, .sp=0x3a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x191f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x191f, .value=0x9c, .type=IO_READ},
        {.addr=0x1920, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002B) {
    const struct CPU_State initial_cpu = {.pc=0xdc8d, .a=0x63, .x=0x94, .y=0x1c, .sp=0x9d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xdc8d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdc8e, .a=0x62, .x=0x94, .y=0x1c, .sp=0x9d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xdc8d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdc8d, .value=0x9c, .type=IO_READ},
        {.addr=0xdc8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002C) {
    const struct CPU_State initial_cpu = {.pc=0x0daf, .a=0x02, .x=0x62, .y=0x56, .sp=0xa2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0daf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0db0, .a=0x01, .x=0x62, .y=0x56, .sp=0xa2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0daf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0daf, .value=0x9c, .type=IO_READ},
        {.addr=0x0db0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002D) {
    const struct CPU_State initial_cpu = {.pc=0x6f59, .a=0x45, .x=0x09, .y=0x29, .sp=0xf1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6f59, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6f5a, .a=0x44, .x=0x09, .y=0x29, .sp=0xf1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6f59, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6f59, .value=0x9c, .type=IO_READ},
        {.addr=0x6f5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002E) {
    const struct CPU_State initial_cpu = {.pc=0x0575, .a=0xe8, .x=0x78, .y=0x27, .sp=0x07, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0575, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0576, .a=0xe7, .x=0x78, .y=0x27, .sp=0x07, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0575, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0575, .value=0x9c, .type=IO_READ},
        {.addr=0x0576, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_002F) {
    const struct CPU_State initial_cpu = {.pc=0x6caa, .a=0xa0, .x=0xdd, .y=0x77, .sp=0x1f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x6caa, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6cab, .a=0x9f, .x=0xdd, .y=0x77, .sp=0x1f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6caa, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6caa, .value=0x9c, .type=IO_READ},
        {.addr=0x6cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0030) {
    const struct CPU_State initial_cpu = {.pc=0xbe38, .a=0x9a, .x=0x71, .y=0xf4, .sp=0x4d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xbe38, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbe39, .a=0x99, .x=0x71, .y=0xf4, .sp=0x4d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbe38, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbe38, .value=0x9c, .type=IO_READ},
        {.addr=0xbe39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0031) {
    const struct CPU_State initial_cpu = {.pc=0x847c, .a=0x0f, .x=0x7c, .y=0x98, .sp=0x9d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x847c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x847d, .a=0x0e, .x=0x7c, .y=0x98, .sp=0x9d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x847c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x847c, .value=0x9c, .type=IO_READ},
        {.addr=0x847d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0032) {
    const struct CPU_State initial_cpu = {.pc=0x82b8, .a=0x50, .x=0xad, .y=0xe3, .sp=0xd8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x82b8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x82b9, .a=0x4f, .x=0xad, .y=0xe3, .sp=0xd8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x82b8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x82b8, .value=0x9c, .type=IO_READ},
        {.addr=0x82b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0033) {
    const struct CPU_State initial_cpu = {.pc=0x9df3, .a=0x89, .x=0xdc, .y=0x83, .sp=0xaa, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9df3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9df4, .a=0x88, .x=0xdc, .y=0x83, .sp=0xaa, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9df3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9df3, .value=0x9c, .type=IO_READ},
        {.addr=0x9df4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0034) {
    const struct CPU_State initial_cpu = {.pc=0x09a0, .a=0xaa, .x=0xef, .y=0x45, .sp=0x64, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x09a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x09a1, .a=0xa9, .x=0xef, .y=0x45, .sp=0x64, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x09a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x09a0, .value=0x9c, .type=IO_READ},
        {.addr=0x09a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0035) {
    const struct CPU_State initial_cpu = {.pc=0x73a3, .a=0xe2, .x=0xc3, .y=0x67, .sp=0xfb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x73a3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x73a4, .a=0xe1, .x=0xc3, .y=0x67, .sp=0xfb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x73a3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x73a3, .value=0x9c, .type=IO_READ},
        {.addr=0x73a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0036) {
    const struct CPU_State initial_cpu = {.pc=0xf73d, .a=0xc3, .x=0x4d, .y=0x7c, .sp=0xd7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf73d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf73e, .a=0xc2, .x=0x4d, .y=0x7c, .sp=0xd7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf73d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf73d, .value=0x9c, .type=IO_READ},
        {.addr=0xf73e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0037) {
    const struct CPU_State initial_cpu = {.pc=0xfaa4, .a=0xd4, .x=0xf3, .y=0x4b, .sp=0xd5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfaa5, .a=0xd3, .x=0xf3, .y=0x4b, .sp=0xd5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfaa4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfaa4, .value=0x9c, .type=IO_READ},
        {.addr=0xfaa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0038) {
    const struct CPU_State initial_cpu = {.pc=0x6c5c, .a=0x7a, .x=0xd4, .y=0xfd, .sp=0xbf, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6c5d, .a=0x79, .x=0xd4, .y=0xfd, .sp=0xbf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6c5c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6c5c, .value=0x9c, .type=IO_READ},
        {.addr=0x6c5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0039) {
    const struct CPU_State initial_cpu = {.pc=0x7377, .a=0x29, .x=0x55, .y=0xb0, .sp=0x3d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7377, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7378, .a=0x28, .x=0x55, .y=0xb0, .sp=0x3d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7377, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7377, .value=0x9c, .type=IO_READ},
        {.addr=0x7378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003A) {
    const struct CPU_State initial_cpu = {.pc=0xb4d9, .a=0x03, .x=0xfd, .y=0xc6, .sp=0x91, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb4da, .a=0x02, .x=0xfd, .y=0xc6, .sp=0x91, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb4d9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb4d9, .value=0x9c, .type=IO_READ},
        {.addr=0xb4da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003B) {
    const struct CPU_State initial_cpu = {.pc=0x75d5, .a=0xe2, .x=0xd6, .y=0xdf, .sp=0x96, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x75d5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x75d6, .a=0xe1, .x=0xd6, .y=0xdf, .sp=0x96, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x75d5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x75d5, .value=0x9c, .type=IO_READ},
        {.addr=0x75d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003C) {
    const struct CPU_State initial_cpu = {.pc=0xcd86, .a=0x7e, .x=0xb9, .y=0x04, .sp=0xc0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd86, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd87, .a=0x7d, .x=0xb9, .y=0x04, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xcd86, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd86, .value=0x9c, .type=IO_READ},
        {.addr=0xcd87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003D) {
    const struct CPU_State initial_cpu = {.pc=0x18e6, .a=0xc9, .x=0x0f, .y=0x86, .sp=0xa8, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x18e6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x18e7, .a=0xc8, .x=0x0f, .y=0x86, .sp=0xa8, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x18e6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x18e6, .value=0x9c, .type=IO_READ},
        {.addr=0x18e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9340, .a=0xf5, .x=0x6e, .y=0x9a, .sp=0x29, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9340, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9341, .a=0xf4, .x=0x6e, .y=0x9a, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9340, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9340, .value=0x9c, .type=IO_READ},
        {.addr=0x9341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_003F) {
    const struct CPU_State initial_cpu = {.pc=0x3b24, .a=0x4a, .x=0xaf, .y=0xa9, .sp=0x73, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x3b24, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b25, .a=0x49, .x=0xaf, .y=0xa9, .sp=0x73, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3b24, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b24, .value=0x9c, .type=IO_READ},
        {.addr=0x3b25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0040) {
    const struct CPU_State initial_cpu = {.pc=0x3df4, .a=0xcd, .x=0x55, .y=0xfd, .sp=0xea, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x3df4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3df5, .a=0xcc, .x=0x55, .y=0xfd, .sp=0xea, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3df4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3df4, .value=0x9c, .type=IO_READ},
        {.addr=0x3df5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0041) {
    const struct CPU_State initial_cpu = {.pc=0xe125, .a=0x97, .x=0x74, .y=0x66, .sp=0x7a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe125, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe126, .a=0x96, .x=0x74, .y=0x66, .sp=0x7a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe125, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe125, .value=0x9c, .type=IO_READ},
        {.addr=0xe126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0042) {
    const struct CPU_State initial_cpu = {.pc=0xcaf1, .a=0x92, .x=0x1c, .y=0x5b, .sp=0x77, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcaf2, .a=0x91, .x=0x1c, .y=0x5b, .sp=0x77, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcaf1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcaf1, .value=0x9c, .type=IO_READ},
        {.addr=0xcaf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0043) {
    const struct CPU_State initial_cpu = {.pc=0xd66f, .a=0xdc, .x=0xd2, .y=0x2a, .sp=0xf5, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd66f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd670, .a=0xdb, .x=0xd2, .y=0x2a, .sp=0xf5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd66f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd66f, .value=0x9c, .type=IO_READ},
        {.addr=0xd670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0044) {
    const struct CPU_State initial_cpu = {.pc=0xcdc1, .a=0x8c, .x=0xfb, .y=0x19, .sp=0x3d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcdc2, .a=0x8b, .x=0xfb, .y=0x19, .sp=0x3d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xcdc1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcdc1, .value=0x9c, .type=IO_READ},
        {.addr=0xcdc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0045) {
    const struct CPU_State initial_cpu = {.pc=0x80ac, .a=0x1e, .x=0xc7, .y=0x2d, .sp=0x78, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x80ac, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x80ad, .a=0x1d, .x=0xc7, .y=0x2d, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x80ac, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x80ac, .value=0x9c, .type=IO_READ},
        {.addr=0x80ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0046) {
    const struct CPU_State initial_cpu = {.pc=0x9d27, .a=0x7b, .x=0x77, .y=0xaf, .sp=0x9d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9d27, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9d28, .a=0x7a, .x=0x77, .y=0xaf, .sp=0x9d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9d27, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9d27, .value=0x9c, .type=IO_READ},
        {.addr=0x9d28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0047) {
    const struct CPU_State initial_cpu = {.pc=0x67f0, .a=0xee, .x=0x80, .y=0xe1, .sp=0x4a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x67f0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x67f1, .a=0xed, .x=0x80, .y=0xe1, .sp=0x4a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x67f0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x67f0, .value=0x9c, .type=IO_READ},
        {.addr=0x67f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0048) {
    const struct CPU_State initial_cpu = {.pc=0x21d0, .a=0xac, .x=0x7d, .y=0xf5, .sp=0xcc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x21d0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x21d1, .a=0xab, .x=0x7d, .y=0xf5, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x21d0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x21d0, .value=0x9c, .type=IO_READ},
        {.addr=0x21d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0049) {
    const struct CPU_State initial_cpu = {.pc=0x0729, .a=0x2a, .x=0x03, .y=0x31, .sp=0x23, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0729, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x072a, .a=0x29, .x=0x03, .y=0x31, .sp=0x23, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0729, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0729, .value=0x9c, .type=IO_READ},
        {.addr=0x072a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004A) {
    const struct CPU_State initial_cpu = {.pc=0xdca7, .a=0xb1, .x=0xc4, .y=0x06, .sp=0x93, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xdca7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdca8, .a=0xb0, .x=0xc4, .y=0x06, .sp=0x93, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdca7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdca7, .value=0x9c, .type=IO_READ},
        {.addr=0xdca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004B) {
    const struct CPU_State initial_cpu = {.pc=0xdc46, .a=0x5a, .x=0xf9, .y=0xcb, .sp=0x7a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xdc46, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdc47, .a=0x59, .x=0xf9, .y=0xcb, .sp=0x7a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdc46, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdc46, .value=0x9c, .type=IO_READ},
        {.addr=0xdc47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004C) {
    const struct CPU_State initial_cpu = {.pc=0xc25e, .a=0xeb, .x=0xed, .y=0xa3, .sp=0xe5, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc25e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc25f, .a=0xea, .x=0xed, .y=0xa3, .sp=0xe5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc25e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc25e, .value=0x9c, .type=IO_READ},
        {.addr=0xc25f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004D) {
    const struct CPU_State initial_cpu = {.pc=0x5d0c, .a=0x67, .x=0xf3, .y=0x7d, .sp=0xb3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5d0d, .a=0x66, .x=0xf3, .y=0x7d, .sp=0xb3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5d0c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5d0c, .value=0x9c, .type=IO_READ},
        {.addr=0x5d0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004E) {
    const struct CPU_State initial_cpu = {.pc=0x9c0b, .a=0x3e, .x=0x60, .y=0x99, .sp=0xd2, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9c0c, .a=0x3d, .x=0x60, .y=0x99, .sp=0xd2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9c0b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9c0b, .value=0x9c, .type=IO_READ},
        {.addr=0x9c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_004F) {
    const struct CPU_State initial_cpu = {.pc=0xe875, .a=0x1d, .x=0x55, .y=0x67, .sp=0xb7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe875, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe876, .a=0x1c, .x=0x55, .y=0x67, .sp=0xb7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe875, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe875, .value=0x9c, .type=IO_READ},
        {.addr=0xe876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0050) {
    const struct CPU_State initial_cpu = {.pc=0x2280, .a=0xaf, .x=0x96, .y=0x05, .sp=0xff, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2280, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2281, .a=0xae, .x=0x96, .y=0x05, .sp=0xff, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2280, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2280, .value=0x9c, .type=IO_READ},
        {.addr=0x2281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0051) {
    const struct CPU_State initial_cpu = {.pc=0x0e09, .a=0xd6, .x=0x46, .y=0x79, .sp=0xc1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0e09, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0e0a, .a=0xd5, .x=0x46, .y=0x79, .sp=0xc1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0e09, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0e09, .value=0x9c, .type=IO_READ},
        {.addr=0x0e0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0052) {
    const struct CPU_State initial_cpu = {.pc=0x34e8, .a=0x81, .x=0x4c, .y=0x1e, .sp=0x85, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x34e8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x34e9, .a=0x80, .x=0x4c, .y=0x1e, .sp=0x85, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x34e8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x34e8, .value=0x9c, .type=IO_READ},
        {.addr=0x34e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0053) {
    const struct CPU_State initial_cpu = {.pc=0xbb4f, .a=0x0c, .x=0x70, .y=0x6c, .sp=0x27, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbb4f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb50, .a=0x0b, .x=0x70, .y=0x6c, .sp=0x27, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbb4f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbb4f, .value=0x9c, .type=IO_READ},
        {.addr=0xbb50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7cbf, .a=0x3b, .x=0x5a, .y=0x5a, .sp=0xf8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7cbf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7cc0, .a=0x3a, .x=0x5a, .y=0x5a, .sp=0xf8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7cbf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7cbf, .value=0x9c, .type=IO_READ},
        {.addr=0x7cc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0055) {
    const struct CPU_State initial_cpu = {.pc=0x1609, .a=0x04, .x=0x32, .y=0xb4, .sp=0xeb, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1609, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x160a, .a=0x03, .x=0x32, .y=0xb4, .sp=0xeb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1609, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1609, .value=0x9c, .type=IO_READ},
        {.addr=0x160a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0056) {
    const struct CPU_State initial_cpu = {.pc=0xcfa7, .a=0x50, .x=0xd2, .y=0x6e, .sp=0x81, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcfa8, .a=0x4f, .x=0xd2, .y=0x6e, .sp=0x81, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xcfa7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcfa7, .value=0x9c, .type=IO_READ},
        {.addr=0xcfa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8fc6, .a=0x1f, .x=0x69, .y=0xf3, .sp=0x31, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8fc7, .a=0x1e, .x=0x69, .y=0xf3, .sp=0x31, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8fc6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8fc6, .value=0x9c, .type=IO_READ},
        {.addr=0x8fc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9928, .a=0x60, .x=0x7b, .y=0x51, .sp=0x41, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x9928, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9929, .a=0x5f, .x=0x7b, .y=0x51, .sp=0x41, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9928, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9928, .value=0x9c, .type=IO_READ},
        {.addr=0x9929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0059) {
    const struct CPU_State initial_cpu = {.pc=0x2db1, .a=0x3d, .x=0x3e, .y=0x7f, .sp=0x2d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x2db1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2db2, .a=0x3c, .x=0x3e, .y=0x7f, .sp=0x2d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2db1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2db1, .value=0x9c, .type=IO_READ},
        {.addr=0x2db2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005A) {
    const struct CPU_State initial_cpu = {.pc=0x4c95, .a=0x15, .x=0x3e, .y=0x07, .sp=0x6b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4c95, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c96, .a=0x14, .x=0x3e, .y=0x07, .sp=0x6b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4c95, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c95, .value=0x9c, .type=IO_READ},
        {.addr=0x4c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005B) {
    const struct CPU_State initial_cpu = {.pc=0x3c43, .a=0xc6, .x=0x19, .y=0x67, .sp=0x52, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3c43, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3c44, .a=0xc5, .x=0x19, .y=0x67, .sp=0x52, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3c43, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3c43, .value=0x9c, .type=IO_READ},
        {.addr=0x3c44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005C) {
    const struct CPU_State initial_cpu = {.pc=0x2269, .a=0x67, .x=0xb5, .y=0x5f, .sp=0x36, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2269, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x226a, .a=0x66, .x=0xb5, .y=0x5f, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2269, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2269, .value=0x9c, .type=IO_READ},
        {.addr=0x226a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005D) {
    const struct CPU_State initial_cpu = {.pc=0x23d7, .a=0xc1, .x=0x98, .y=0xcf, .sp=0x1f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x23d7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0xc0, .x=0x98, .y=0xcf, .sp=0x1f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x23d7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x23d7, .value=0x9c, .type=IO_READ},
        {.addr=0x23d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005E) {
    const struct CPU_State initial_cpu = {.pc=0x444f, .a=0x6c, .x=0xc9, .y=0x39, .sp=0x29, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x444f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4450, .a=0x6b, .x=0xc9, .y=0x39, .sp=0x29, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x444f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x444f, .value=0x9c, .type=IO_READ},
        {.addr=0x4450, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_005F) {
    const struct CPU_State initial_cpu = {.pc=0xddb6, .a=0x36, .x=0xc7, .y=0x81, .sp=0x73, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xddb6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xddb7, .a=0x35, .x=0xc7, .y=0x81, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xddb6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xddb6, .value=0x9c, .type=IO_READ},
        {.addr=0xddb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0060) {
    const struct CPU_State initial_cpu = {.pc=0x3c17, .a=0x94, .x=0xaa, .y=0x70, .sp=0xd7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3c17, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3c18, .a=0x93, .x=0xaa, .y=0x70, .sp=0xd7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3c17, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3c17, .value=0x9c, .type=IO_READ},
        {.addr=0x3c18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0061) {
    const struct CPU_State initial_cpu = {.pc=0x2240, .a=0xe6, .x=0x3e, .y=0x3b, .sp=0x21, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2240, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2241, .a=0xe5, .x=0x3e, .y=0x3b, .sp=0x21, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2240, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2240, .value=0x9c, .type=IO_READ},
        {.addr=0x2241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9153, .a=0x90, .x=0x01, .y=0xb4, .sp=0x95, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9153, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9154, .a=0x8f, .x=0x01, .y=0xb4, .sp=0x95, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9153, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9153, .value=0x9c, .type=IO_READ},
        {.addr=0x9154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0063) {
    const struct CPU_State initial_cpu = {.pc=0xcdd0, .a=0x41, .x=0xbf, .y=0x82, .sp=0x04, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcdd1, .a=0x40, .x=0xbf, .y=0x82, .sp=0x04, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcdd0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcdd0, .value=0x9c, .type=IO_READ},
        {.addr=0xcdd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0064) {
    const struct CPU_State initial_cpu = {.pc=0xf52e, .a=0x19, .x=0xd6, .y=0x18, .sp=0xa8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf52e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf52f, .a=0x18, .x=0xd6, .y=0x18, .sp=0xa8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf52e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf52e, .value=0x9c, .type=IO_READ},
        {.addr=0xf52f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0065) {
    const struct CPU_State initial_cpu = {.pc=0x04e6, .a=0x17, .x=0x59, .y=0x86, .sp=0xa2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x04e6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x04e7, .a=0x16, .x=0x59, .y=0x86, .sp=0xa2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x04e6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x04e6, .value=0x9c, .type=IO_READ},
        {.addr=0x04e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0066) {
    const struct CPU_State initial_cpu = {.pc=0x364b, .a=0x25, .x=0x2c, .y=0xe2, .sp=0xe3, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x364b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x364c, .a=0x24, .x=0x2c, .y=0xe2, .sp=0xe3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x364b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x364b, .value=0x9c, .type=IO_READ},
        {.addr=0x364c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0067) {
    const struct CPU_State initial_cpu = {.pc=0x015f, .a=0x64, .x=0xf6, .y=0x9e, .sp=0xfa, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0160, .a=0x63, .x=0xf6, .y=0x9e, .sp=0xfa, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x015f, .value=0x9c, .type=IO_READ},
        {.addr=0x0160, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0068) {
    const struct CPU_State initial_cpu = {.pc=0x2f24, .a=0x26, .x=0x4c, .y=0xa7, .sp=0x12, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2f24, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2f25, .a=0x25, .x=0x4c, .y=0xa7, .sp=0x12, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2f24, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2f24, .value=0x9c, .type=IO_READ},
        {.addr=0x2f25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0069) {
    const struct CPU_State initial_cpu = {.pc=0xd609, .a=0xee, .x=0xfe, .y=0x03, .sp=0x88, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd609, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd60a, .a=0xed, .x=0xfe, .y=0x03, .sp=0x88, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd609, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd609, .value=0x9c, .type=IO_READ},
        {.addr=0xd60a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006A) {
    const struct CPU_State initial_cpu = {.pc=0x459d, .a=0xa6, .x=0x72, .y=0x6f, .sp=0x20, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x459d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x459e, .a=0xa5, .x=0x72, .y=0x6f, .sp=0x20, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x459d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x459d, .value=0x9c, .type=IO_READ},
        {.addr=0x459e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006B) {
    const struct CPU_State initial_cpu = {.pc=0xea70, .a=0x3d, .x=0x8d, .y=0x6a, .sp=0xc0, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xea70, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xea71, .a=0x3c, .x=0x8d, .y=0x6a, .sp=0xc0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xea70, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xea70, .value=0x9c, .type=IO_READ},
        {.addr=0xea71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006C) {
    const struct CPU_State initial_cpu = {.pc=0xdb05, .a=0xa8, .x=0x9e, .y=0xf5, .sp=0xad, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xdb05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdb06, .a=0xa7, .x=0x9e, .y=0xf5, .sp=0xad, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdb05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdb05, .value=0x9c, .type=IO_READ},
        {.addr=0xdb06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0424, .a=0x3e, .x=0x24, .y=0x6e, .sp=0x98, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0424, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0425, .a=0x3d, .x=0x24, .y=0x6e, .sp=0x98, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0424, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0424, .value=0x9c, .type=IO_READ},
        {.addr=0x0425, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006E) {
    const struct CPU_State initial_cpu = {.pc=0x046f, .a=0x44, .x=0xd3, .y=0x7e, .sp=0x18, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x046f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0470, .a=0x43, .x=0xd3, .y=0x7e, .sp=0x18, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x046f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x046f, .value=0x9c, .type=IO_READ},
        {.addr=0x0470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_006F) {
    const struct CPU_State initial_cpu = {.pc=0xd863, .a=0x23, .x=0xfc, .y=0x68, .sp=0xb7, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xd863, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd864, .a=0x22, .x=0xfc, .y=0x68, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd863, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd863, .value=0x9c, .type=IO_READ},
        {.addr=0xd864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0070) {
    const struct CPU_State initial_cpu = {.pc=0xcbdf, .a=0xfd, .x=0x5a, .y=0xff, .sp=0xb4, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcbdf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcbe0, .a=0xfc, .x=0x5a, .y=0xff, .sp=0xb4, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcbdf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcbdf, .value=0x9c, .type=IO_READ},
        {.addr=0xcbe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6f50, .a=0xb5, .x=0x33, .y=0x55, .sp=0x8d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6f50, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6f51, .a=0xb4, .x=0x33, .y=0x55, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6f50, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6f50, .value=0x9c, .type=IO_READ},
        {.addr=0x6f51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0072) {
    const struct CPU_State initial_cpu = {.pc=0xcd8f, .a=0x0a, .x=0x75, .y=0xbd, .sp=0x6e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xcd8f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd90, .a=0x09, .x=0x75, .y=0xbd, .sp=0x6e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xcd8f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd8f, .value=0x9c, .type=IO_READ},
        {.addr=0xcd90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0073) {
    const struct CPU_State initial_cpu = {.pc=0x4c6c, .a=0xb3, .x=0xbe, .y=0xcf, .sp=0xfd, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c6c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c6d, .a=0xb2, .x=0xbe, .y=0xcf, .sp=0xfd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4c6c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c6c, .value=0x9c, .type=IO_READ},
        {.addr=0x4c6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0074) {
    const struct CPU_State initial_cpu = {.pc=0xc0d5, .a=0x7c, .x=0x42, .y=0xd4, .sp=0x69, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc0d6, .a=0x7b, .x=0x42, .y=0xd4, .sp=0x69, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc0d5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc0d5, .value=0x9c, .type=IO_READ},
        {.addr=0xc0d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0075) {
    const struct CPU_State initial_cpu = {.pc=0x7d5c, .a=0x5f, .x=0x88, .y=0x45, .sp=0x3b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x7d5c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7d5d, .a=0x5e, .x=0x88, .y=0x45, .sp=0x3b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7d5c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7d5c, .value=0x9c, .type=IO_READ},
        {.addr=0x7d5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0076) {
    const struct CPU_State initial_cpu = {.pc=0xaaaa, .a=0x32, .x=0x14, .y=0xee, .sp=0xf1, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xaaaa, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaaab, .a=0x31, .x=0x14, .y=0xee, .sp=0xf1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xaaaa, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaaaa, .value=0x9c, .type=IO_READ},
        {.addr=0xaaab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0077) {
    const struct CPU_State initial_cpu = {.pc=0x949a, .a=0x12, .x=0x3d, .y=0x8d, .sp=0xf4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x949a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x949b, .a=0x11, .x=0x3d, .y=0x8d, .sp=0xf4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x949a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x949a, .value=0x9c, .type=IO_READ},
        {.addr=0x949b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0078) {
    const struct CPU_State initial_cpu = {.pc=0x3a37, .a=0x15, .x=0xae, .y=0xbd, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3a37, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3a38, .a=0x14, .x=0xae, .y=0xbd, .sp=0x75, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3a37, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a37, .value=0x9c, .type=IO_READ},
        {.addr=0x3a38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0079) {
    const struct CPU_State initial_cpu = {.pc=0x009a, .a=0x2e, .x=0xcd, .y=0x48, .sp=0x6d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x009b, .a=0x2d, .x=0xcd, .y=0x48, .sp=0x6d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x009a, .value=0x9c, .type=IO_READ},
        {.addr=0x009b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007A) {
    const struct CPU_State initial_cpu = {.pc=0xc525, .a=0x2d, .x=0xfc, .y=0x66, .sp=0x2c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc525, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc526, .a=0x2c, .x=0xfc, .y=0x66, .sp=0x2c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc525, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc525, .value=0x9c, .type=IO_READ},
        {.addr=0xc526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007B) {
    const struct CPU_State initial_cpu = {.pc=0xb670, .a=0x77, .x=0x82, .y=0xa2, .sp=0xc4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb670, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb671, .a=0x76, .x=0x82, .y=0xa2, .sp=0xc4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb670, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb670, .value=0x9c, .type=IO_READ},
        {.addr=0xb671, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007C) {
    const struct CPU_State initial_cpu = {.pc=0xd9f5, .a=0x18, .x=0x4e, .y=0x7d, .sp=0xca, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd9f6, .a=0x17, .x=0x4e, .y=0x7d, .sp=0xca, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd9f5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd9f5, .value=0x9c, .type=IO_READ},
        {.addr=0xd9f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007D) {
    const struct CPU_State initial_cpu = {.pc=0x80a2, .a=0xdb, .x=0x81, .y=0x32, .sp=0x13, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x80a2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x80a3, .a=0xda, .x=0x81, .y=0x32, .sp=0x13, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x80a2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x80a2, .value=0x9c, .type=IO_READ},
        {.addr=0x80a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007E) {
    const struct CPU_State initial_cpu = {.pc=0x4ed7, .a=0x33, .x=0xad, .y=0x69, .sp=0xc1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4ed8, .a=0x32, .x=0xad, .y=0x69, .sp=0xc1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4ed7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4ed7, .value=0x9c, .type=IO_READ},
        {.addr=0x4ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_007F) {
    const struct CPU_State initial_cpu = {.pc=0x8d06, .a=0xc0, .x=0x0c, .y=0x5d, .sp=0x69, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8d06, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8d07, .a=0xbf, .x=0x0c, .y=0x5d, .sp=0x69, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8d06, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8d06, .value=0x9c, .type=IO_READ},
        {.addr=0x8d07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0080) {
    const struct CPU_State initial_cpu = {.pc=0x2d70, .a=0x3d, .x=0x14, .y=0x80, .sp=0x1a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2d70, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d71, .a=0x3c, .x=0x14, .y=0x80, .sp=0x1a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2d70, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2d70, .value=0x9c, .type=IO_READ},
        {.addr=0x2d71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0081) {
    const struct CPU_State initial_cpu = {.pc=0x6fbc, .a=0xaa, .x=0xf1, .y=0x73, .sp=0xaa, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6fbd, .a=0xa9, .x=0xf1, .y=0x73, .sp=0xaa, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6fbc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6fbc, .value=0x9c, .type=IO_READ},
        {.addr=0x6fbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0082) {
    const struct CPU_State initial_cpu = {.pc=0x532b, .a=0x37, .x=0x9a, .y=0xfa, .sp=0x0f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x532b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x532c, .a=0x36, .x=0x9a, .y=0xfa, .sp=0x0f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x532b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x532b, .value=0x9c, .type=IO_READ},
        {.addr=0x532c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0083) {
    const struct CPU_State initial_cpu = {.pc=0x1f90, .a=0x3b, .x=0x57, .y=0x67, .sp=0xf2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1f90, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1f91, .a=0x3a, .x=0x57, .y=0x67, .sp=0xf2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1f90, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1f90, .value=0x9c, .type=IO_READ},
        {.addr=0x1f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd168, .a=0xd4, .x=0xcb, .y=0xe0, .sp=0xcb, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd168, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd169, .a=0xd3, .x=0xcb, .y=0xe0, .sp=0xcb, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd168, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd168, .value=0x9c, .type=IO_READ},
        {.addr=0xd169, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0085) {
    const struct CPU_State initial_cpu = {.pc=0x2308, .a=0x8e, .x=0x1b, .y=0x8d, .sp=0xec, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2308, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2309, .a=0x8d, .x=0x1b, .y=0x8d, .sp=0xec, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2308, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2308, .value=0x9c, .type=IO_READ},
        {.addr=0x2309, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0086) {
    const struct CPU_State initial_cpu = {.pc=0xa502, .a=0x12, .x=0xca, .y=0xc2, .sp=0x85, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa502, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa503, .a=0x11, .x=0xca, .y=0xc2, .sp=0x85, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa502, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa502, .value=0x9c, .type=IO_READ},
        {.addr=0xa503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0087) {
    const struct CPU_State initial_cpu = {.pc=0x8a3b, .a=0x87, .x=0xd0, .y=0xf8, .sp=0xa2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8a3b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8a3c, .a=0x86, .x=0xd0, .y=0xf8, .sp=0xa2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8a3b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8a3b, .value=0x9c, .type=IO_READ},
        {.addr=0x8a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4031, .a=0x6a, .x=0xcb, .y=0x75, .sp=0x64, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x4031, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4032, .a=0x69, .x=0xcb, .y=0x75, .sp=0x64, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4031, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4031, .value=0x9c, .type=IO_READ},
        {.addr=0x4032, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0089) {
    const struct CPU_State initial_cpu = {.pc=0x9576, .a=0x7f, .x=0x8d, .y=0xd7, .sp=0x0c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9576, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9577, .a=0x7e, .x=0x8d, .y=0xd7, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9576, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9576, .value=0x9c, .type=IO_READ},
        {.addr=0x9577, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008A) {
    const struct CPU_State initial_cpu = {.pc=0x3e01, .a=0x1c, .x=0x7a, .y=0x15, .sp=0x73, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e01, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3e02, .a=0x1b, .x=0x7a, .y=0x15, .sp=0x73, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3e01, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3e01, .value=0x9c, .type=IO_READ},
        {.addr=0x3e02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008B) {
    const struct CPU_State initial_cpu = {.pc=0x3f31, .a=0xee, .x=0xd9, .y=0xf7, .sp=0x26, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x3f31, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3f32, .a=0xed, .x=0xd9, .y=0xf7, .sp=0x26, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3f31, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3f31, .value=0x9c, .type=IO_READ},
        {.addr=0x3f32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008C) {
    const struct CPU_State initial_cpu = {.pc=0x891c, .a=0x20, .x=0x70, .y=0x8b, .sp=0xb6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x891c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x891d, .a=0x1f, .x=0x70, .y=0x8b, .sp=0xb6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x891c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x891c, .value=0x9c, .type=IO_READ},
        {.addr=0x891d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008D) {
    const struct CPU_State initial_cpu = {.pc=0xafaa, .a=0xbc, .x=0xd7, .y=0x2b, .sp=0x91, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xafaa, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xafab, .a=0xbb, .x=0xd7, .y=0x2b, .sp=0x91, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xafaa, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xafaa, .value=0x9c, .type=IO_READ},
        {.addr=0xafab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008E) {
    const struct CPU_State initial_cpu = {.pc=0xb3a8, .a=0x12, .x=0x7a, .y=0xc6, .sp=0x20, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb3a9, .a=0x11, .x=0x7a, .y=0xc6, .sp=0x20, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb3a8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb3a8, .value=0x9c, .type=IO_READ},
        {.addr=0xb3a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_008F) {
    const struct CPU_State initial_cpu = {.pc=0x5c2f, .a=0x5d, .x=0x93, .y=0xb8, .sp=0x6d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5c30, .a=0x5c, .x=0x93, .y=0xb8, .sp=0x6d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5c2f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5c2f, .value=0x9c, .type=IO_READ},
        {.addr=0x5c30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0090) {
    const struct CPU_State initial_cpu = {.pc=0xf8a1, .a=0xe7, .x=0x61, .y=0xf1, .sp=0x31, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf8a2, .a=0xe6, .x=0x61, .y=0xf1, .sp=0x31, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf8a1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf8a1, .value=0x9c, .type=IO_READ},
        {.addr=0xf8a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0091) {
    const struct CPU_State initial_cpu = {.pc=0xf2c9, .a=0xfa, .x=0x72, .y=0xed, .sp=0x0d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf2ca, .a=0xf9, .x=0x72, .y=0xed, .sp=0x0d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf2c9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf2c9, .value=0x9c, .type=IO_READ},
        {.addr=0xf2ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0092) {
    const struct CPU_State initial_cpu = {.pc=0x96f1, .a=0x96, .x=0x02, .y=0x39, .sp=0x85, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x96f1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x96f2, .a=0x95, .x=0x02, .y=0x39, .sp=0x85, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x96f1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x96f1, .value=0x9c, .type=IO_READ},
        {.addr=0x96f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0093) {
    const struct CPU_State initial_cpu = {.pc=0x4a12, .a=0xcf, .x=0x41, .y=0xbb, .sp=0xf2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a12, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4a13, .a=0xce, .x=0x41, .y=0xbb, .sp=0xf2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4a12, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4a12, .value=0x9c, .type=IO_READ},
        {.addr=0x4a13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0094) {
    const struct CPU_State initial_cpu = {.pc=0xa719, .a=0x98, .x=0x7a, .y=0x83, .sp=0x4b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa719, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa71a, .a=0x97, .x=0x7a, .y=0x83, .sp=0x4b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa719, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa719, .value=0x9c, .type=IO_READ},
        {.addr=0xa71a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0095) {
    const struct CPU_State initial_cpu = {.pc=0x6872, .a=0xbc, .x=0xa6, .y=0x08, .sp=0x13, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6872, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6873, .a=0xbb, .x=0xa6, .y=0x08, .sp=0x13, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6872, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6872, .value=0x9c, .type=IO_READ},
        {.addr=0x6873, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0096) {
    const struct CPU_State initial_cpu = {.pc=0xac7a, .a=0x0f, .x=0x1c, .y=0xdd, .sp=0xb2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xac7a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xac7b, .a=0x0e, .x=0x1c, .y=0xdd, .sp=0xb2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xac7a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xac7a, .value=0x9c, .type=IO_READ},
        {.addr=0xac7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6387, .a=0x70, .x=0xe7, .y=0x69, .sp=0x06, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6387, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6388, .a=0x6f, .x=0xe7, .y=0x69, .sp=0x06, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6387, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6387, .value=0x9c, .type=IO_READ},
        {.addr=0x6388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0098) {
    const struct CPU_State initial_cpu = {.pc=0xa368, .a=0x2b, .x=0x23, .y=0x29, .sp=0x16, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa368, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa369, .a=0x2a, .x=0x23, .y=0x29, .sp=0x16, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa368, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa368, .value=0x9c, .type=IO_READ},
        {.addr=0xa369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0099) {
    const struct CPU_State initial_cpu = {.pc=0x892a, .a=0x8e, .x=0x1e, .y=0xef, .sp=0xfc, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x892a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x892b, .a=0x8d, .x=0x1e, .y=0xef, .sp=0xfc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x892a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x892a, .value=0x9c, .type=IO_READ},
        {.addr=0x892b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009A) {
    const struct CPU_State initial_cpu = {.pc=0x28a8, .a=0x1d, .x=0x9f, .y=0xa7, .sp=0x9d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x28a8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x28a9, .a=0x1c, .x=0x9f, .y=0xa7, .sp=0x9d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x28a8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x28a8, .value=0x9c, .type=IO_READ},
        {.addr=0x28a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009B) {
    const struct CPU_State initial_cpu = {.pc=0xbe2a, .a=0x51, .x=0x06, .y=0xde, .sp=0xe7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe2a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbe2b, .a=0x50, .x=0x06, .y=0xde, .sp=0xe7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xbe2a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbe2a, .value=0x9c, .type=IO_READ},
        {.addr=0xbe2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009C) {
    const struct CPU_State initial_cpu = {.pc=0xdd1f, .a=0x37, .x=0x36, .y=0x0b, .sp=0xaa, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd1f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdd20, .a=0x36, .x=0x36, .y=0x0b, .sp=0xaa, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdd1f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdd1f, .value=0x9c, .type=IO_READ},
        {.addr=0xdd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009D) {
    const struct CPU_State initial_cpu = {.pc=0x7154, .a=0x71, .x=0xc1, .y=0x27, .sp=0x68, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7154, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7155, .a=0x70, .x=0xc1, .y=0x27, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7154, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7154, .value=0x9c, .type=IO_READ},
        {.addr=0x7155, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009E) {
    const struct CPU_State initial_cpu = {.pc=0xf0ab, .a=0x3f, .x=0xf3, .y=0xa3, .sp=0x1b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ab, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf0ac, .a=0x3e, .x=0xf3, .y=0xa3, .sp=0x1b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xf0ab, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf0ab, .value=0x9c, .type=IO_READ},
        {.addr=0xf0ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_009F) {
    const struct CPU_State initial_cpu = {.pc=0x35c8, .a=0x3b, .x=0x84, .y=0xe2, .sp=0xb6, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x35c8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x35c9, .a=0x3a, .x=0x84, .y=0xe2, .sp=0xb6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x35c8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x35c8, .value=0x9c, .type=IO_READ},
        {.addr=0x35c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x2aa4, .a=0xce, .x=0xfc, .y=0xbe, .sp=0x7f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2aa5, .a=0xcd, .x=0xfc, .y=0xbe, .sp=0x7f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2aa4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2aa4, .value=0x9c, .type=IO_READ},
        {.addr=0x2aa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x2b9e, .a=0xf2, .x=0x65, .y=0xd2, .sp=0x17, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b9f, .a=0xf1, .x=0x65, .y=0xd2, .sp=0x17, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2b9e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b9e, .value=0x9c, .type=IO_READ},
        {.addr=0x2b9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x99c0, .a=0xce, .x=0x2d, .y=0xaf, .sp=0x43, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x99c0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x99c1, .a=0xcd, .x=0x2d, .y=0xaf, .sp=0x43, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x99c0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x99c0, .value=0x9c, .type=IO_READ},
        {.addr=0x99c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x286e, .a=0xb6, .x=0x1f, .y=0xd5, .sp=0xaa, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x286e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x286f, .a=0xb5, .x=0x1f, .y=0xd5, .sp=0xaa, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x286e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x286e, .value=0x9c, .type=IO_READ},
        {.addr=0x286f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x837d, .a=0x0b, .x=0x17, .y=0x11, .sp=0x1b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x837d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x837e, .a=0x0a, .x=0x17, .y=0x11, .sp=0x1b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x837d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x837d, .value=0x9c, .type=IO_READ},
        {.addr=0x837e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xc4ce, .a=0xc6, .x=0xa6, .y=0xe1, .sp=0xa5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ce, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc4cf, .a=0xc5, .x=0xa6, .y=0xe1, .sp=0xa5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc4ce, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc4ce, .value=0x9c, .type=IO_READ},
        {.addr=0xc4cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x9350, .a=0x68, .x=0x7b, .y=0x27, .sp=0x7f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9350, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9351, .a=0x67, .x=0x7b, .y=0x27, .sp=0x7f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9350, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9350, .value=0x9c, .type=IO_READ},
        {.addr=0x9351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xe8fd, .a=0xf4, .x=0xca, .y=0x8e, .sp=0x0c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe8fd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe8fe, .a=0xf3, .x=0xca, .y=0x8e, .sp=0x0c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe8fd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe8fd, .value=0x9c, .type=IO_READ},
        {.addr=0xe8fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xcb4a, .a=0x75, .x=0xa8, .y=0x50, .sp=0x2d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb4b, .a=0x74, .x=0xa8, .y=0x50, .sp=0x2d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xcb4a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb4a, .value=0x9c, .type=IO_READ},
        {.addr=0xcb4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x4bfb, .a=0x45, .x=0xe9, .y=0x87, .sp=0xcd, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4bfc, .a=0x44, .x=0xe9, .y=0x87, .sp=0xcd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4bfb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4bfb, .value=0x9c, .type=IO_READ},
        {.addr=0x4bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x3781, .a=0x64, .x=0x9b, .y=0x1e, .sp=0x77, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3781, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3782, .a=0x63, .x=0x9b, .y=0x1e, .sp=0x77, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3781, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3781, .value=0x9c, .type=IO_READ},
        {.addr=0x3782, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x263b, .a=0xa8, .x=0x35, .y=0xea, .sp=0xf4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x263b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x263c, .a=0xa7, .x=0x35, .y=0xea, .sp=0xf4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x263b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x263b, .value=0x9c, .type=IO_READ},
        {.addr=0x263c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xaaec, .a=0x02, .x=0x22, .y=0xff, .sp=0x64, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xaaec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaaed, .a=0x01, .x=0x22, .y=0xff, .sp=0x64, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xaaec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaaec, .value=0x9c, .type=IO_READ},
        {.addr=0xaaed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x8054, .a=0x22, .x=0x82, .y=0x1f, .sp=0x35, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8054, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8055, .a=0x21, .x=0x82, .y=0x1f, .sp=0x35, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8054, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8054, .value=0x9c, .type=IO_READ},
        {.addr=0x8055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x1530, .a=0x74, .x=0x48, .y=0xe8, .sp=0x19, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1530, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1531, .a=0x73, .x=0x48, .y=0xe8, .sp=0x19, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1530, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1530, .value=0x9c, .type=IO_READ},
        {.addr=0x1531, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x6a16, .a=0xec, .x=0x69, .y=0x0c, .sp=0x5e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a16, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6a17, .a=0xeb, .x=0x69, .y=0x0c, .sp=0x5e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6a16, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6a16, .value=0x9c, .type=IO_READ},
        {.addr=0x6a17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb4bc, .a=0x99, .x=0x22, .y=0x07, .sp=0x10, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb4bc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb4bd, .a=0x98, .x=0x22, .y=0x07, .sp=0x10, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb4bc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb4bc, .value=0x9c, .type=IO_READ},
        {.addr=0xb4bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x3325, .a=0xa4, .x=0x61, .y=0x32, .sp=0x31, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3325, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3326, .a=0xa3, .x=0x61, .y=0x32, .sp=0x31, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3325, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3325, .value=0x9c, .type=IO_READ},
        {.addr=0x3326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x90ef, .a=0xdf, .x=0x76, .y=0x5e, .sp=0xf1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x90ef, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x90f0, .a=0xde, .x=0x76, .y=0x5e, .sp=0xf1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x90ef, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x90ef, .value=0x9c, .type=IO_READ},
        {.addr=0x90f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x2af8, .a=0x5c, .x=0xaa, .y=0x3b, .sp=0xd3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2af8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2af9, .a=0x5b, .x=0xaa, .y=0x3b, .sp=0xd3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2af8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2af8, .value=0x9c, .type=IO_READ},
        {.addr=0x2af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x8798, .a=0xf2, .x=0xaf, .y=0x7f, .sp=0x09, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8798, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8799, .a=0xf1, .x=0xaf, .y=0x7f, .sp=0x09, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8798, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8798, .value=0x9c, .type=IO_READ},
        {.addr=0x8799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x8243, .a=0x28, .x=0x7d, .y=0xa2, .sp=0x8d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8243, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8244, .a=0x27, .x=0x7d, .y=0xa2, .sp=0x8d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8243, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8243, .value=0x9c, .type=IO_READ},
        {.addr=0x8244, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x62de, .a=0xfd, .x=0xb9, .y=0x39, .sp=0x3c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x62de, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x62df, .a=0xfc, .x=0xb9, .y=0x39, .sp=0x3c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x62de, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x62de, .value=0x9c, .type=IO_READ},
        {.addr=0x62df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x3d1c, .a=0xc4, .x=0xb3, .y=0x7a, .sp=0xbd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d1d, .a=0xc3, .x=0xb3, .y=0x7a, .sp=0xbd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3d1c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d1c, .value=0x9c, .type=IO_READ},
        {.addr=0x3d1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xf08b, .a=0x2f, .x=0xf8, .y=0x96, .sp=0xd3, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xf08b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf08c, .a=0x2e, .x=0xf8, .y=0x96, .sp=0xd3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf08b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf08b, .value=0x9c, .type=IO_READ},
        {.addr=0xf08c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x3c60, .a=0xd1, .x=0x14, .y=0x61, .sp=0x72, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3c60, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3c61, .a=0xd0, .x=0x14, .y=0x61, .sp=0x72, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3c60, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3c60, .value=0x9c, .type=IO_READ},
        {.addr=0x3c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x3854, .a=0x17, .x=0xe0, .y=0x34, .sp=0x29, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3854, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3855, .a=0x16, .x=0xe0, .y=0x34, .sp=0x29, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3854, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3854, .value=0x9c, .type=IO_READ},
        {.addr=0x3855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x9900, .a=0x9e, .x=0xcf, .y=0xde, .sp=0x01, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9900, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9901, .a=0x9d, .x=0xcf, .y=0xde, .sp=0x01, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9900, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9900, .value=0x9c, .type=IO_READ},
        {.addr=0x9901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6703, .a=0x09, .x=0xb9, .y=0x33, .sp=0xfb, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6703, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6704, .a=0x08, .x=0xb9, .y=0x33, .sp=0xfb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6703, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6703, .value=0x9c, .type=IO_READ},
        {.addr=0x6704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x1be8, .a=0xb8, .x=0x25, .y=0x77, .sp=0xbc, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1be8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1be9, .a=0xb7, .x=0x25, .y=0x77, .sp=0xbc, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1be8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1be8, .value=0x9c, .type=IO_READ},
        {.addr=0x1be9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xd29d, .a=0xcc, .x=0x96, .y=0x79, .sp=0x2b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xd29d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd29e, .a=0xcb, .x=0x96, .y=0x79, .sp=0x2b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd29d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd29d, .value=0x9c, .type=IO_READ},
        {.addr=0xd29e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x894d, .a=0x22, .x=0x52, .y=0x82, .sp=0x00, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x894d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x894e, .a=0x21, .x=0x52, .y=0x82, .sp=0x00, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x894d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x894d, .value=0x9c, .type=IO_READ},
        {.addr=0x894e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xb422, .a=0xa7, .x=0xaf, .y=0x0a, .sp=0xef, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb422, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb423, .a=0xa6, .x=0xaf, .y=0x0a, .sp=0xef, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb422, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb422, .value=0x9c, .type=IO_READ},
        {.addr=0xb423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x2a28, .a=0x10, .x=0x03, .y=0xf4, .sp=0x3f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2a28, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2a29, .a=0x0f, .x=0x03, .y=0xf4, .sp=0x3f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2a28, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2a28, .value=0x9c, .type=IO_READ},
        {.addr=0x2a29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x2cf2, .a=0xda, .x=0x70, .y=0xad, .sp=0xf1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2cf3, .a=0xd9, .x=0x70, .y=0xad, .sp=0xf1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2cf2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2cf2, .value=0x9c, .type=IO_READ},
        {.addr=0x2cf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb3d8, .a=0xa6, .x=0xc1, .y=0x29, .sp=0xc8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb3d9, .a=0xa5, .x=0xc1, .y=0x29, .sp=0xc8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb3d8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb3d8, .value=0x9c, .type=IO_READ},
        {.addr=0xb3d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xd179, .a=0x4f, .x=0x5c, .y=0x71, .sp=0x31, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd179, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd17a, .a=0x4e, .x=0x5c, .y=0x71, .sp=0x31, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd179, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd179, .value=0x9c, .type=IO_READ},
        {.addr=0xd17a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9ef8, .a=0xb5, .x=0x02, .y=0x25, .sp=0x3a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9ef9, .a=0xb4, .x=0x02, .y=0x25, .sp=0x3a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9ef8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9ef8, .value=0x9c, .type=IO_READ},
        {.addr=0x9ef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xce32, .a=0x43, .x=0x8e, .y=0x6e, .sp=0x68, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xce32, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xce33, .a=0x42, .x=0x8e, .y=0x6e, .sp=0x68, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xce32, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xce32, .value=0x9c, .type=IO_READ},
        {.addr=0xce33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x84b7, .a=0xee, .x=0x17, .y=0x97, .sp=0x9c, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x84b7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x84b8, .a=0xed, .x=0x17, .y=0x97, .sp=0x9c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x84b7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x84b7, .value=0x9c, .type=IO_READ},
        {.addr=0x84b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x6c58, .a=0xa9, .x=0xbe, .y=0xfd, .sp=0x96, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6c58, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6c59, .a=0xa8, .x=0xbe, .y=0xfd, .sp=0x96, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6c58, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6c58, .value=0x9c, .type=IO_READ},
        {.addr=0x6c59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xbcf9, .a=0x50, .x=0x7b, .y=0xaf, .sp=0x92, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbcfa, .a=0x4f, .x=0x7b, .y=0xaf, .sp=0x92, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbcf9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbcf9, .value=0x9c, .type=IO_READ},
        {.addr=0xbcfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x9e43, .a=0x1f, .x=0x0a, .y=0x6d, .sp=0x78, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9e43, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9e44, .a=0x1e, .x=0x0a, .y=0x6d, .sp=0x78, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9e43, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9e43, .value=0x9c, .type=IO_READ},
        {.addr=0x9e44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x73bb, .a=0x48, .x=0x6f, .y=0x8c, .sp=0x74, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x73bb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x73bc, .a=0x47, .x=0x6f, .y=0x8c, .sp=0x74, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x73bb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x73bb, .value=0x9c, .type=IO_READ},
        {.addr=0x73bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x78ce, .a=0xbc, .x=0x57, .y=0x65, .sp=0x16, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x78ce, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x78cf, .a=0xbb, .x=0x57, .y=0x65, .sp=0x16, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x78ce, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x78ce, .value=0x9c, .type=IO_READ},
        {.addr=0x78cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x18cb, .a=0xe2, .x=0x11, .y=0x6f, .sp=0xc7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x18cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x18cc, .a=0xe1, .x=0x11, .y=0x6f, .sp=0xc7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x18cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x18cb, .value=0x9c, .type=IO_READ},
        {.addr=0x18cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x8e4f, .a=0x18, .x=0x18, .y=0x5e, .sp=0xbe, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8e4f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8e50, .a=0x17, .x=0x18, .y=0x5e, .sp=0xbe, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8e4f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8e4f, .value=0x9c, .type=IO_READ},
        {.addr=0x8e50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6003, .a=0xa4, .x=0x60, .y=0x25, .sp=0x39, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x6003, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6004, .a=0xa3, .x=0x60, .y=0x25, .sp=0x39, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6003, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6003, .value=0x9c, .type=IO_READ},
        {.addr=0x6004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x80ef, .a=0x18, .x=0x1c, .y=0x5a, .sp=0x45, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x80ef, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x80f0, .a=0x17, .x=0x1c, .y=0x5a, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x80ef, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x80ef, .value=0x9c, .type=IO_READ},
        {.addr=0x80f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x16c1, .a=0x2e, .x=0x90, .y=0x3e, .sp=0x85, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x16c1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x16c2, .a=0x2d, .x=0x90, .y=0x3e, .sp=0x85, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x16c1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x16c1, .value=0x9c, .type=IO_READ},
        {.addr=0x16c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9554, .a=0x6d, .x=0x63, .y=0x90, .sp=0x87, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9554, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9555, .a=0x6c, .x=0x63, .y=0x90, .sp=0x87, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9554, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9554, .value=0x9c, .type=IO_READ},
        {.addr=0x9555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x7074, .a=0x40, .x=0x0f, .y=0x71, .sp=0x84, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x7074, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7075, .a=0x3f, .x=0x0f, .y=0x71, .sp=0x84, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7074, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7074, .value=0x9c, .type=IO_READ},
        {.addr=0x7075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xe116, .a=0x63, .x=0xed, .y=0x8b, .sp=0x0c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe116, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe117, .a=0x62, .x=0xed, .y=0x8b, .sp=0x0c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe116, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe116, .value=0x9c, .type=IO_READ},
        {.addr=0xe117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x754e, .a=0x54, .x=0x93, .y=0x87, .sp=0x3d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x754e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x754f, .a=0x53, .x=0x93, .y=0x87, .sp=0x3d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x754e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x754e, .value=0x9c, .type=IO_READ},
        {.addr=0x754f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x0b1c, .a=0x5a, .x=0x97, .y=0xed, .sp=0xb1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0b1c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0b1d, .a=0x59, .x=0x97, .y=0xed, .sp=0xb1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0b1c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0b1c, .value=0x9c, .type=IO_READ},
        {.addr=0x0b1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x58b8, .a=0x4f, .x=0xdf, .y=0xc3, .sp=0x24, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x58b8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x58b9, .a=0x4e, .x=0xdf, .y=0xc3, .sp=0x24, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x58b8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x58b8, .value=0x9c, .type=IO_READ},
        {.addr=0x58b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x43be, .a=0x74, .x=0x02, .y=0xca, .sp=0x6e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x43be, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x43bf, .a=0x73, .x=0x02, .y=0xca, .sp=0x6e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x43be, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x43be, .value=0x9c, .type=IO_READ},
        {.addr=0x43bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x64cc, .a=0xdd, .x=0xe4, .y=0xb4, .sp=0x38, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x64cc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x64cd, .a=0xdc, .x=0xe4, .y=0xb4, .sp=0x38, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x64cc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x64cc, .value=0x9c, .type=IO_READ},
        {.addr=0x64cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xdbbd, .a=0xd0, .x=0x87, .y=0x1b, .sp=0xcb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xdbbd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdbbe, .a=0xcf, .x=0x87, .y=0x1b, .sp=0xcb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdbbd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdbbd, .value=0x9c, .type=IO_READ},
        {.addr=0xdbbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb38e, .a=0x4b, .x=0xb4, .y=0x30, .sp=0x08, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xb38e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb38f, .a=0x4a, .x=0xb4, .y=0x30, .sp=0x08, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb38e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb38e, .value=0x9c, .type=IO_READ},
        {.addr=0xb38f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x7abc, .a=0x9d, .x=0x72, .y=0x83, .sp=0x73, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7abc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7abd, .a=0x9c, .x=0x72, .y=0x83, .sp=0x73, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7abc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7abc, .value=0x9c, .type=IO_READ},
        {.addr=0x7abd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x05db, .a=0x94, .x=0x43, .y=0xf0, .sp=0xd7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x05db, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x05dc, .a=0x93, .x=0x43, .y=0xf0, .sp=0xd7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x05db, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x05db, .value=0x9c, .type=IO_READ},
        {.addr=0x05dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x2663, .a=0x69, .x=0xc0, .y=0x76, .sp=0xff, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2663, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2664, .a=0x68, .x=0xc0, .y=0x76, .sp=0xff, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2663, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2663, .value=0x9c, .type=IO_READ},
        {.addr=0x2664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xbb1d, .a=0x0b, .x=0xe2, .y=0x06, .sp=0x40, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb1e, .a=0x0a, .x=0xe2, .y=0x06, .sp=0x40, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xbb1d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbb1d, .value=0x9c, .type=IO_READ},
        {.addr=0xbb1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x62f8, .a=0xba, .x=0xdb, .y=0xb6, .sp=0x7d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x62f8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x62f9, .a=0xb9, .x=0xdb, .y=0xb6, .sp=0x7d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x62f8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x62f8, .value=0x9c, .type=IO_READ},
        {.addr=0x62f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x788f, .a=0xf6, .x=0x04, .y=0xfd, .sp=0x8f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x788f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7890, .a=0xf5, .x=0x04, .y=0xfd, .sp=0x8f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x788f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x788f, .value=0x9c, .type=IO_READ},
        {.addr=0x7890, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x2a8c, .a=0x99, .x=0xde, .y=0xc7, .sp=0x80, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2a8d, .a=0x98, .x=0xde, .y=0xc7, .sp=0x80, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2a8c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2a8c, .value=0x9c, .type=IO_READ},
        {.addr=0x2a8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x1691, .a=0xfb, .x=0x51, .y=0xfa, .sp=0xec, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1691, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1692, .a=0xfa, .x=0x51, .y=0xfa, .sp=0xec, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x1691, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1691, .value=0x9c, .type=IO_READ},
        {.addr=0x1692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x2d5b, .a=0x17, .x=0x14, .y=0x00, .sp=0xbe, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2d5b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d5c, .a=0x16, .x=0x14, .y=0x00, .sp=0xbe, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2d5b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2d5b, .value=0x9c, .type=IO_READ},
        {.addr=0x2d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x260a, .a=0xae, .x=0xce, .y=0x51, .sp=0x79, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x260a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x260b, .a=0xad, .x=0xce, .y=0x51, .sp=0x79, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x260a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x260a, .value=0x9c, .type=IO_READ},
        {.addr=0x260b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2e97, .a=0xe3, .x=0xdb, .y=0x3e, .sp=0xa2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2e97, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2e98, .a=0xe2, .x=0xdb, .y=0x3e, .sp=0xa2, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2e97, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2e97, .value=0x9c, .type=IO_READ},
        {.addr=0x2e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xf6bf, .a=0xa7, .x=0xf4, .y=0xce, .sp=0xeb, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf6bf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf6c0, .a=0xa6, .x=0xf4, .y=0xce, .sp=0xeb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf6bf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf6bf, .value=0x9c, .type=IO_READ},
        {.addr=0xf6c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xd92c, .a=0xee, .x=0x96, .y=0x1a, .sp=0x34, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xd92c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd92d, .a=0xed, .x=0x96, .y=0x1a, .sp=0x34, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd92c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd92c, .value=0x9c, .type=IO_READ},
        {.addr=0xd92d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x3fbb, .a=0x1f, .x=0xf1, .y=0x07, .sp=0x85, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x3fbb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3fbc, .a=0x1e, .x=0xf1, .y=0x07, .sp=0x85, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3fbb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3fbb, .value=0x9c, .type=IO_READ},
        {.addr=0x3fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xd822, .a=0x7d, .x=0x9b, .y=0x07, .sp=0x43, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xd822, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd823, .a=0x7c, .x=0x9b, .y=0x07, .sp=0x43, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd822, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd822, .value=0x9c, .type=IO_READ},
        {.addr=0xd823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xb3f0, .a=0x37, .x=0xe0, .y=0xa4, .sp=0xc1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb3f1, .a=0x36, .x=0xe0, .y=0xa4, .sp=0xc1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb3f0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb3f0, .value=0x9c, .type=IO_READ},
        {.addr=0xb3f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7592, .a=0xdc, .x=0xc4, .y=0x3a, .sp=0x71, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7592, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7593, .a=0xdb, .x=0xc4, .y=0x3a, .sp=0x71, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x7592, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7592, .value=0x9c, .type=IO_READ},
        {.addr=0x7593, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x613d, .a=0x15, .x=0xf7, .y=0x15, .sp=0x5b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x613d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x613e, .a=0x14, .x=0xf7, .y=0x15, .sp=0x5b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x613d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x613d, .value=0x9c, .type=IO_READ},
        {.addr=0x613e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xbb1a, .a=0xd3, .x=0xf1, .y=0xd2, .sp=0x13, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb1b, .a=0xd2, .x=0xf1, .y=0xd2, .sp=0x13, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbb1a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbb1a, .value=0x9c, .type=IO_READ},
        {.addr=0xbb1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xfdba, .a=0x95, .x=0x42, .y=0x02, .sp=0x0e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xfdba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfdbb, .a=0x94, .x=0x42, .y=0x02, .sp=0x0e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfdba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfdba, .value=0x9c, .type=IO_READ},
        {.addr=0xfdbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x4443, .a=0x55, .x=0xc7, .y=0xc7, .sp=0x2c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4443, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4444, .a=0x54, .x=0xc7, .y=0xc7, .sp=0x2c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4443, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4443, .value=0x9c, .type=IO_READ},
        {.addr=0x4444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x574c, .a=0x1e, .x=0xdf, .y=0x8a, .sp=0x5f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x574c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x574d, .a=0x1d, .x=0xdf, .y=0x8a, .sp=0x5f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x574c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x574c, .value=0x9c, .type=IO_READ},
        {.addr=0x574d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x3194, .a=0x97, .x=0x97, .y=0x20, .sp=0x65, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3194, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3195, .a=0x96, .x=0x97, .y=0x20, .sp=0x65, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3194, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3194, .value=0x9c, .type=IO_READ},
        {.addr=0x3195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x699e, .a=0x7e, .x=0x49, .y=0xa9, .sp=0x01, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x699e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x699f, .a=0x7d, .x=0x49, .y=0xa9, .sp=0x01, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x699e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x699e, .value=0x9c, .type=IO_READ},
        {.addr=0x699f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x7c89, .a=0xba, .x=0xc1, .y=0x2e, .sp=0x8c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7c89, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7c8a, .a=0xb9, .x=0xc1, .y=0x2e, .sp=0x8c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7c89, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7c89, .value=0x9c, .type=IO_READ},
        {.addr=0x7c8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5417, .a=0x86, .x=0x6e, .y=0x61, .sp=0x4a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5417, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5418, .a=0x85, .x=0x6e, .y=0x61, .sp=0x4a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5417, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5417, .value=0x9c, .type=IO_READ},
        {.addr=0x5418, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xe1e0, .a=0xf8, .x=0x94, .y=0xde, .sp=0xcd, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe1e1, .a=0xf7, .x=0x94, .y=0xde, .sp=0xcd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe1e0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe1e0, .value=0x9c, .type=IO_READ},
        {.addr=0xe1e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xc0f3, .a=0x39, .x=0xfb, .y=0x80, .sp=0x2c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc0f4, .a=0x38, .x=0xfb, .y=0x80, .sp=0x2c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc0f3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc0f3, .value=0x9c, .type=IO_READ},
        {.addr=0xc0f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc8ff, .a=0x69, .x=0xcc, .y=0xd0, .sp=0x3c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ff, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc900, .a=0x68, .x=0xcc, .y=0xd0, .sp=0x3c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xc8ff, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc8ff, .value=0x9c, .type=IO_READ},
        {.addr=0xc900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xc0bf, .a=0x95, .x=0x58, .y=0xdc, .sp=0xea, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc0bf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc0c0, .a=0x94, .x=0x58, .y=0xdc, .sp=0xea, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc0bf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc0bf, .value=0x9c, .type=IO_READ},
        {.addr=0xc0c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xc14f, .a=0xb5, .x=0xe0, .y=0x8d, .sp=0x99, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc14f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc150, .a=0xb4, .x=0xe0, .y=0x8d, .sp=0x99, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc14f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc14f, .value=0x9c, .type=IO_READ},
        {.addr=0xc150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x3a3d, .a=0xfd, .x=0x72, .y=0xd6, .sp=0xc0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3a3d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3a3e, .a=0xfc, .x=0x72, .y=0xd6, .sp=0xc0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3a3d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a3d, .value=0x9c, .type=IO_READ},
        {.addr=0x3a3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xada3, .a=0x7c, .x=0xaa, .y=0x4e, .sp=0xa0, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xada3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xada4, .a=0x7b, .x=0xaa, .y=0x4e, .sp=0xa0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xada3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xada3, .value=0x9c, .type=IO_READ},
        {.addr=0xada4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb0fc, .a=0xe7, .x=0xec, .y=0x23, .sp=0xc3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0fc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb0fd, .a=0xe6, .x=0xec, .y=0x23, .sp=0xc3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb0fc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb0fc, .value=0x9c, .type=IO_READ},
        {.addr=0xb0fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xe3d2, .a=0x1d, .x=0xdb, .y=0xc9, .sp=0xec, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe3d3, .a=0x1c, .x=0xdb, .y=0xc9, .sp=0xec, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe3d2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe3d2, .value=0x9c, .type=IO_READ},
        {.addr=0xe3d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xecd0, .a=0xad, .x=0x84, .y=0xe1, .sp=0x72, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xecd0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xecd1, .a=0xac, .x=0x84, .y=0xe1, .sp=0x72, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xecd0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xecd0, .value=0x9c, .type=IO_READ},
        {.addr=0xecd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0100) {
    const struct CPU_State initial_cpu = {.pc=0x2e69, .a=0x07, .x=0x8e, .y=0x72, .sp=0x71, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x2e69, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2e6a, .a=0x06, .x=0x8e, .y=0x72, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2e69, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2e69, .value=0x9c, .type=IO_READ},
        {.addr=0x2e6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0101) {
    const struct CPU_State initial_cpu = {.pc=0x6d6f, .a=0xd1, .x=0x62, .y=0x5e, .sp=0xa5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6d70, .a=0xd0, .x=0x62, .y=0x5e, .sp=0xa5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6d6f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6d6f, .value=0x9c, .type=IO_READ},
        {.addr=0x6d70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0102) {
    const struct CPU_State initial_cpu = {.pc=0xce3e, .a=0xc7, .x=0xa2, .y=0x0c, .sp=0xa8, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xce3e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xce3f, .a=0xc6, .x=0xa2, .y=0x0c, .sp=0xa8, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xce3e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xce3e, .value=0x9c, .type=IO_READ},
        {.addr=0xce3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0103) {
    const struct CPU_State initial_cpu = {.pc=0x7360, .a=0xbd, .x=0xa5, .y=0x1b, .sp=0x53, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7360, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7361, .a=0xbc, .x=0xa5, .y=0x1b, .sp=0x53, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7360, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7360, .value=0x9c, .type=IO_READ},
        {.addr=0x7361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0104) {
    const struct CPU_State initial_cpu = {.pc=0x1f44, .a=0x14, .x=0x0a, .y=0xa3, .sp=0x9d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1f44, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1f45, .a=0x13, .x=0x0a, .y=0xa3, .sp=0x9d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1f44, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1f44, .value=0x9c, .type=IO_READ},
        {.addr=0x1f45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0b7c, .a=0xb8, .x=0x1b, .y=0x8f, .sp=0xb1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0b7c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0b7d, .a=0xb7, .x=0x1b, .y=0x8f, .sp=0xb1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0b7c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0b7c, .value=0x9c, .type=IO_READ},
        {.addr=0x0b7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdaec, .a=0x92, .x=0x47, .y=0xb5, .sp=0x8f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdaec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdaed, .a=0x91, .x=0x47, .y=0xb5, .sp=0x8f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xdaec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdaec, .value=0x9c, .type=IO_READ},
        {.addr=0xdaed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0107) {
    const struct CPU_State initial_cpu = {.pc=0x63a6, .a=0x7c, .x=0x89, .y=0xee, .sp=0xae, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x63a6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x63a7, .a=0x7b, .x=0x89, .y=0xee, .sp=0xae, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x63a6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x63a6, .value=0x9c, .type=IO_READ},
        {.addr=0x63a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0108) {
    const struct CPU_State initial_cpu = {.pc=0x11ee, .a=0xbf, .x=0xf5, .y=0x37, .sp=0x35, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x11ee, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x11ef, .a=0xbe, .x=0xf5, .y=0x37, .sp=0x35, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x11ee, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x11ee, .value=0x9c, .type=IO_READ},
        {.addr=0x11ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0109) {
    const struct CPU_State initial_cpu = {.pc=0xee54, .a=0xab, .x=0x9b, .y=0x24, .sp=0x8d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xee54, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee55, .a=0xaa, .x=0x9b, .y=0x24, .sp=0x8d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xee54, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee54, .value=0x9c, .type=IO_READ},
        {.addr=0xee55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010A) {
    const struct CPU_State initial_cpu = {.pc=0x6c22, .a=0x99, .x=0xd8, .y=0xa6, .sp=0xde, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6c22, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6c23, .a=0x98, .x=0xd8, .y=0xa6, .sp=0xde, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6c22, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6c22, .value=0x9c, .type=IO_READ},
        {.addr=0x6c23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010B) {
    const struct CPU_State initial_cpu = {.pc=0xaa6b, .a=0x53, .x=0xd5, .y=0x65, .sp=0x24, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xaa6b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaa6c, .a=0x52, .x=0xd5, .y=0x65, .sp=0x24, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xaa6b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaa6b, .value=0x9c, .type=IO_READ},
        {.addr=0xaa6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010C) {
    const struct CPU_State initial_cpu = {.pc=0x0c46, .a=0x9d, .x=0x96, .y=0x30, .sp=0x7d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0c46, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0c47, .a=0x9c, .x=0x96, .y=0x30, .sp=0x7d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0c46, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0c46, .value=0x9c, .type=IO_READ},
        {.addr=0x0c47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010D) {
    const struct CPU_State initial_cpu = {.pc=0xce2d, .a=0x0d, .x=0x35, .y=0x83, .sp=0x7d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xce2d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xce2e, .a=0x0c, .x=0x35, .y=0x83, .sp=0x7d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xce2d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xce2d, .value=0x9c, .type=IO_READ},
        {.addr=0xce2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010E) {
    const struct CPU_State initial_cpu = {.pc=0xb543, .a=0x4a, .x=0xa7, .y=0x38, .sp=0xfa, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb543, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb544, .a=0x49, .x=0xa7, .y=0x38, .sp=0xfa, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb543, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb543, .value=0x9c, .type=IO_READ},
        {.addr=0xb544, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_010F) {
    const struct CPU_State initial_cpu = {.pc=0x40bf, .a=0x9e, .x=0xc4, .y=0xe9, .sp=0x08, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x40bf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x40c0, .a=0x9d, .x=0xc4, .y=0xe9, .sp=0x08, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x40bf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x40bf, .value=0x9c, .type=IO_READ},
        {.addr=0x40c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0110) {
    const struct CPU_State initial_cpu = {.pc=0xe55c, .a=0x9c, .x=0x88, .y=0xd3, .sp=0xc6, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe55c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe55d, .a=0x9b, .x=0x88, .y=0xd3, .sp=0xc6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe55c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe55c, .value=0x9c, .type=IO_READ},
        {.addr=0xe55d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0111) {
    const struct CPU_State initial_cpu = {.pc=0x7a1f, .a=0xce, .x=0xc8, .y=0xee, .sp=0x85, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7a20, .a=0xcd, .x=0xc8, .y=0xee, .sp=0x85, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7a1f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7a1f, .value=0x9c, .type=IO_READ},
        {.addr=0x7a20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc00b, .a=0x0b, .x=0xb8, .y=0xc6, .sp=0x36, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc00b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc00c, .a=0x0a, .x=0xb8, .y=0xc6, .sp=0x36, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc00b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc00b, .value=0x9c, .type=IO_READ},
        {.addr=0xc00c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0113) {
    const struct CPU_State initial_cpu = {.pc=0x604b, .a=0xe7, .x=0x5f, .y=0xc2, .sp=0x00, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x604b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x604c, .a=0xe6, .x=0x5f, .y=0xc2, .sp=0x00, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x604b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x604b, .value=0x9c, .type=IO_READ},
        {.addr=0x604c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0114) {
    const struct CPU_State initial_cpu = {.pc=0xc0c6, .a=0x08, .x=0x7c, .y=0x2f, .sp=0xc3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc0c7, .a=0x07, .x=0x7c, .y=0x2f, .sp=0xc3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc0c6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc0c6, .value=0x9c, .type=IO_READ},
        {.addr=0xc0c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0115) {
    const struct CPU_State initial_cpu = {.pc=0x3f85, .a=0xa2, .x=0xee, .y=0xdb, .sp=0x64, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3f85, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3f86, .a=0xa1, .x=0xee, .y=0xdb, .sp=0x64, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3f85, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3f85, .value=0x9c, .type=IO_READ},
        {.addr=0x3f86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0116) {
    const struct CPU_State initial_cpu = {.pc=0x4969, .a=0x30, .x=0xe2, .y=0x51, .sp=0x51, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4969, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x496a, .a=0x2f, .x=0xe2, .y=0x51, .sp=0x51, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4969, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4969, .value=0x9c, .type=IO_READ},
        {.addr=0x496a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0117) {
    const struct CPU_State initial_cpu = {.pc=0x9dd8, .a=0x45, .x=0x29, .y=0x18, .sp=0x96, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9dd9, .a=0x44, .x=0x29, .y=0x18, .sp=0x96, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9dd8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9dd8, .value=0x9c, .type=IO_READ},
        {.addr=0x9dd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0118) {
    const struct CPU_State initial_cpu = {.pc=0x7ace, .a=0x3f, .x=0x57, .y=0x7d, .sp=0xa5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x7ace, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7acf, .a=0x3e, .x=0x57, .y=0x7d, .sp=0xa5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7ace, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7ace, .value=0x9c, .type=IO_READ},
        {.addr=0x7acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0119) {
    const struct CPU_State initial_cpu = {.pc=0xceca, .a=0xc7, .x=0xe8, .y=0x23, .sp=0xf5, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xceca, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcecb, .a=0xc6, .x=0xe8, .y=0x23, .sp=0xf5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xceca, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xceca, .value=0x9c, .type=IO_READ},
        {.addr=0xcecb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011A) {
    const struct CPU_State initial_cpu = {.pc=0x0699, .a=0x09, .x=0x83, .y=0xa3, .sp=0xf1, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0699, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x069a, .a=0x08, .x=0x83, .y=0xa3, .sp=0xf1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0699, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0699, .value=0x9c, .type=IO_READ},
        {.addr=0x069a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011B) {
    const struct CPU_State initial_cpu = {.pc=0xb3a0, .a=0x45, .x=0x47, .y=0xfe, .sp=0x62, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb3a1, .a=0x44, .x=0x47, .y=0xfe, .sp=0x62, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb3a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb3a0, .value=0x9c, .type=IO_READ},
        {.addr=0xb3a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011C) {
    const struct CPU_State initial_cpu = {.pc=0x8f3c, .a=0x4f, .x=0x0e, .y=0x48, .sp=0xbf, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x8f3c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8f3d, .a=0x4e, .x=0x0e, .y=0x48, .sp=0xbf, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8f3c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8f3c, .value=0x9c, .type=IO_READ},
        {.addr=0x8f3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011D) {
    const struct CPU_State initial_cpu = {.pc=0x30c8, .a=0xd3, .x=0x4c, .y=0x4a, .sp=0x99, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x30c8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x30c9, .a=0xd2, .x=0x4c, .y=0x4a, .sp=0x99, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x30c8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x30c8, .value=0x9c, .type=IO_READ},
        {.addr=0x30c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb15e, .a=0x49, .x=0xd7, .y=0x21, .sp=0xcb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb15e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb15f, .a=0x48, .x=0xd7, .y=0x21, .sp=0xcb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb15e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb15e, .value=0x9c, .type=IO_READ},
        {.addr=0xb15f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_011F) {
    const struct CPU_State initial_cpu = {.pc=0x5573, .a=0x74, .x=0x8d, .y=0x80, .sp=0xc7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5573, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5574, .a=0x73, .x=0x8d, .y=0x80, .sp=0xc7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5573, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5573, .value=0x9c, .type=IO_READ},
        {.addr=0x5574, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0120) {
    const struct CPU_State initial_cpu = {.pc=0xc29c, .a=0x76, .x=0xd5, .y=0x97, .sp=0xd7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc29c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc29d, .a=0x75, .x=0xd5, .y=0x97, .sp=0xd7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xc29c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc29c, .value=0x9c, .type=IO_READ},
        {.addr=0xc29d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0121) {
    const struct CPU_State initial_cpu = {.pc=0xd318, .a=0x20, .x=0x21, .y=0x94, .sp=0x5f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd318, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd319, .a=0x1f, .x=0x21, .y=0x94, .sp=0x5f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd318, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd318, .value=0x9c, .type=IO_READ},
        {.addr=0xd319, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0122) {
    const struct CPU_State initial_cpu = {.pc=0xa044, .a=0x8b, .x=0xc3, .y=0xe5, .sp=0xbe, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa044, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa045, .a=0x8a, .x=0xc3, .y=0xe5, .sp=0xbe, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa044, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa044, .value=0x9c, .type=IO_READ},
        {.addr=0xa045, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0123) {
    const struct CPU_State initial_cpu = {.pc=0xb987, .a=0xbe, .x=0x41, .y=0x1d, .sp=0xd0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xb987, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb988, .a=0xbd, .x=0x41, .y=0x1d, .sp=0xd0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb987, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb987, .value=0x9c, .type=IO_READ},
        {.addr=0xb988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0124) {
    const struct CPU_State initial_cpu = {.pc=0xa1f7, .a=0x3b, .x=0x41, .y=0x7b, .sp=0x39, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa1f7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa1f8, .a=0x3a, .x=0x41, .y=0x7b, .sp=0x39, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa1f7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa1f7, .value=0x9c, .type=IO_READ},
        {.addr=0xa1f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0125) {
    const struct CPU_State initial_cpu = {.pc=0xd017, .a=0xa7, .x=0xbe, .y=0x09, .sp=0x44, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd017, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd018, .a=0xa6, .x=0xbe, .y=0x09, .sp=0x44, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd017, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd017, .value=0x9c, .type=IO_READ},
        {.addr=0xd018, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0126) {
    const struct CPU_State initial_cpu = {.pc=0x3460, .a=0xf3, .x=0x5f, .y=0x46, .sp=0x5a, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3460, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3461, .a=0xf2, .x=0x5f, .y=0x46, .sp=0x5a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3460, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3460, .value=0x9c, .type=IO_READ},
        {.addr=0x3461, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0127) {
    const struct CPU_State initial_cpu = {.pc=0xfd3c, .a=0xa6, .x=0xe8, .y=0x69, .sp=0xa1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfd3d, .a=0xa5, .x=0xe8, .y=0x69, .sp=0xa1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfd3c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfd3c, .value=0x9c, .type=IO_READ},
        {.addr=0xfd3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc9dc, .a=0x30, .x=0xe2, .y=0x57, .sp=0x1a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xc9dc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc9dd, .a=0x2f, .x=0xe2, .y=0x57, .sp=0x1a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc9dc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc9dc, .value=0x9c, .type=IO_READ},
        {.addr=0xc9dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0129) {
    const struct CPU_State initial_cpu = {.pc=0xf616, .a=0xb5, .x=0xb5, .y=0x3e, .sp=0xb9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf616, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf617, .a=0xb4, .x=0xb5, .y=0x3e, .sp=0xb9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf616, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf616, .value=0x9c, .type=IO_READ},
        {.addr=0xf617, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012A) {
    const struct CPU_State initial_cpu = {.pc=0x0725, .a=0xad, .x=0xdf, .y=0x86, .sp=0x03, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0725, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0726, .a=0xac, .x=0xdf, .y=0x86, .sp=0x03, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0725, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0725, .value=0x9c, .type=IO_READ},
        {.addr=0x0726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012B) {
    const struct CPU_State initial_cpu = {.pc=0x00cb, .a=0x69, .x=0xdb, .y=0x6b, .sp=0x13, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x00cc, .a=0x68, .x=0xdb, .y=0x6b, .sp=0x13, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x00cb, .value=0x9c, .type=IO_READ},
        {.addr=0x00cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012C) {
    const struct CPU_State initial_cpu = {.pc=0x443e, .a=0x1f, .x=0x30, .y=0xd3, .sp=0xba, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x443e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x443f, .a=0x1e, .x=0x30, .y=0xd3, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x443e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x443e, .value=0x9c, .type=IO_READ},
        {.addr=0x443f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012D) {
    const struct CPU_State initial_cpu = {.pc=0xbd0b, .a=0xeb, .x=0x64, .y=0x8c, .sp=0x4c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbd0c, .a=0xea, .x=0x64, .y=0x8c, .sp=0x4c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbd0b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbd0b, .value=0x9c, .type=IO_READ},
        {.addr=0xbd0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012E) {
    const struct CPU_State initial_cpu = {.pc=0xecbd, .a=0x63, .x=0xd8, .y=0xa8, .sp=0x28, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xecbd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xecbe, .a=0x62, .x=0xd8, .y=0xa8, .sp=0x28, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xecbd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xecbd, .value=0x9c, .type=IO_READ},
        {.addr=0xecbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_012F) {
    const struct CPU_State initial_cpu = {.pc=0x56ed, .a=0x4e, .x=0x9d, .y=0xe9, .sp=0xf6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x56ed, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x56ee, .a=0x4d, .x=0x9d, .y=0xe9, .sp=0xf6, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x56ed, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x56ed, .value=0x9c, .type=IO_READ},
        {.addr=0x56ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0130) {
    const struct CPU_State initial_cpu = {.pc=0x2a3d, .a=0x61, .x=0x4f, .y=0x45, .sp=0x2e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2a3d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2a3e, .a=0x60, .x=0x4f, .y=0x45, .sp=0x2e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2a3d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2a3d, .value=0x9c, .type=IO_READ},
        {.addr=0x2a3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0131) {
    const struct CPU_State initial_cpu = {.pc=0x0fbd, .a=0x6d, .x=0xef, .y=0x34, .sp=0xe1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0fbe, .a=0x6c, .x=0xef, .y=0x34, .sp=0xe1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0fbd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0fbd, .value=0x9c, .type=IO_READ},
        {.addr=0x0fbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0132) {
    const struct CPU_State initial_cpu = {.pc=0x71df, .a=0x17, .x=0x15, .y=0xa8, .sp=0x15, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x71df, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x71e0, .a=0x16, .x=0x15, .y=0xa8, .sp=0x15, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x71df, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x71df, .value=0x9c, .type=IO_READ},
        {.addr=0x71e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0133) {
    const struct CPU_State initial_cpu = {.pc=0x4df8, .a=0xb1, .x=0xa7, .y=0xfe, .sp=0x1f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4df8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4df9, .a=0xb0, .x=0xa7, .y=0xfe, .sp=0x1f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4df8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4df8, .value=0x9c, .type=IO_READ},
        {.addr=0x4df9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0904, .a=0xb7, .x=0x9b, .y=0xf0, .sp=0x4a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0904, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0905, .a=0xb6, .x=0x9b, .y=0xf0, .sp=0x4a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0904, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0904, .value=0x9c, .type=IO_READ},
        {.addr=0x0905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0135) {
    const struct CPU_State initial_cpu = {.pc=0x1f48, .a=0xd9, .x=0x79, .y=0x35, .sp=0x2c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f48, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1f49, .a=0xd8, .x=0x79, .y=0x35, .sp=0x2c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1f48, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1f48, .value=0x9c, .type=IO_READ},
        {.addr=0x1f49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0136) {
    const struct CPU_State initial_cpu = {.pc=0xb2a6, .a=0x87, .x=0x1a, .y=0x3f, .sp=0xec, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb2a7, .a=0x86, .x=0x1a, .y=0x3f, .sp=0xec, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb2a6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb2a6, .value=0x9c, .type=IO_READ},
        {.addr=0xb2a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0137) {
    const struct CPU_State initial_cpu = {.pc=0x39f2, .a=0x66, .x=0xaa, .y=0xb2, .sp=0x12, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x39f2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x39f3, .a=0x65, .x=0xaa, .y=0xb2, .sp=0x12, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x39f2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x39f2, .value=0x9c, .type=IO_READ},
        {.addr=0x39f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0138) {
    const struct CPU_State initial_cpu = {.pc=0x4d28, .a=0x52, .x=0xd8, .y=0xab, .sp=0x5c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4d28, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4d29, .a=0x51, .x=0xd8, .y=0xab, .sp=0x5c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4d28, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4d28, .value=0x9c, .type=IO_READ},
        {.addr=0x4d29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0139) {
    const struct CPU_State initial_cpu = {.pc=0x0a57, .a=0x85, .x=0x5a, .y=0x3a, .sp=0x3a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0a57, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0a58, .a=0x84, .x=0x5a, .y=0x3a, .sp=0x3a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0a57, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0a57, .value=0x9c, .type=IO_READ},
        {.addr=0x0a58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013A) {
    const struct CPU_State initial_cpu = {.pc=0xfeee, .a=0xff, .x=0x63, .y=0xd5, .sp=0x9b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xfeee, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfeef, .a=0xfe, .x=0x63, .y=0xd5, .sp=0x9b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfeee, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfeee, .value=0x9c, .type=IO_READ},
        {.addr=0xfeef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013B) {
    const struct CPU_State initial_cpu = {.pc=0xf9f6, .a=0xcd, .x=0xa7, .y=0xa9, .sp=0x59, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf9f7, .a=0xcc, .x=0xa7, .y=0xa9, .sp=0x59, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf9f6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf9f6, .value=0x9c, .type=IO_READ},
        {.addr=0xf9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013C) {
    const struct CPU_State initial_cpu = {.pc=0x642d, .a=0xfc, .x=0x2a, .y=0x59, .sp=0x20, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x642d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x642e, .a=0xfb, .x=0x2a, .y=0x59, .sp=0x20, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x642d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x642d, .value=0x9c, .type=IO_READ},
        {.addr=0x642e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013D) {
    const struct CPU_State initial_cpu = {.pc=0xb71a, .a=0x74, .x=0x48, .y=0x7b, .sp=0x70, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xb71a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb71b, .a=0x73, .x=0x48, .y=0x7b, .sp=0x70, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb71a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb71a, .value=0x9c, .type=IO_READ},
        {.addr=0xb71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013E) {
    const struct CPU_State initial_cpu = {.pc=0xdc71, .a=0x51, .x=0xc3, .y=0xfe, .sp=0x65, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xdc71, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdc72, .a=0x50, .x=0xc3, .y=0xfe, .sp=0x65, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdc71, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdc71, .value=0x9c, .type=IO_READ},
        {.addr=0xdc72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_013F) {
    const struct CPU_State initial_cpu = {.pc=0x0125, .a=0xa7, .x=0x9b, .y=0x59, .sp=0xa7, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0126, .a=0xa6, .x=0x9b, .y=0x59, .sp=0xa7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0125, .value=0x9c, .type=IO_READ},
        {.addr=0x0126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0140) {
    const struct CPU_State initial_cpu = {.pc=0xc3d4, .a=0x18, .x=0x64, .y=0x74, .sp=0xc8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc3d5, .a=0x17, .x=0x64, .y=0x74, .sp=0xc8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc3d4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc3d4, .value=0x9c, .type=IO_READ},
        {.addr=0xc3d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0141) {
    const struct CPU_State initial_cpu = {.pc=0x9e80, .a=0x8a, .x=0x8c, .y=0xd6, .sp=0xe1, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x9e80, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9e81, .a=0x89, .x=0x8c, .y=0xd6, .sp=0xe1, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9e80, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9e80, .value=0x9c, .type=IO_READ},
        {.addr=0x9e81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0142) {
    const struct CPU_State initial_cpu = {.pc=0xfdc3, .a=0x18, .x=0xf2, .y=0x52, .sp=0xef, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xfdc3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfdc4, .a=0x17, .x=0xf2, .y=0x52, .sp=0xef, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xfdc3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfdc3, .value=0x9c, .type=IO_READ},
        {.addr=0xfdc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0143) {
    const struct CPU_State initial_cpu = {.pc=0x24f6, .a=0xca, .x=0x0c, .y=0xf0, .sp=0x89, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x24f6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x24f7, .a=0xc9, .x=0x0c, .y=0xf0, .sp=0x89, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x24f6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x24f6, .value=0x9c, .type=IO_READ},
        {.addr=0x24f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0144) {
    const struct CPU_State initial_cpu = {.pc=0xedec, .a=0x60, .x=0xac, .y=0xfd, .sp=0x92, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xedec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xeded, .a=0x5f, .x=0xac, .y=0xfd, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xedec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xedec, .value=0x9c, .type=IO_READ},
        {.addr=0xeded, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0145) {
    const struct CPU_State initial_cpu = {.pc=0x4556, .a=0x47, .x=0xc3, .y=0x32, .sp=0x08, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4556, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4557, .a=0x46, .x=0xc3, .y=0x32, .sp=0x08, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4556, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4556, .value=0x9c, .type=IO_READ},
        {.addr=0x4557, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0146) {
    const struct CPU_State initial_cpu = {.pc=0x710b, .a=0x53, .x=0xa1, .y=0x71, .sp=0x06, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x710b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x710c, .a=0x52, .x=0xa1, .y=0x71, .sp=0x06, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x710b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x710b, .value=0x9c, .type=IO_READ},
        {.addr=0x710c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0147) {
    const struct CPU_State initial_cpu = {.pc=0x6c05, .a=0x56, .x=0xe7, .y=0x69, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x6c05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6c06, .a=0x55, .x=0xe7, .y=0x69, .sp=0x6d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6c05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6c05, .value=0x9c, .type=IO_READ},
        {.addr=0x6c06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0148) {
    const struct CPU_State initial_cpu = {.pc=0x564e, .a=0xb2, .x=0xf5, .y=0xab, .sp=0x0c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x564e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x564f, .a=0xb1, .x=0xf5, .y=0xab, .sp=0x0c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x564e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x564e, .value=0x9c, .type=IO_READ},
        {.addr=0x564f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1635, .a=0xfa, .x=0xc1, .y=0xa6, .sp=0x04, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1635, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1636, .a=0xf9, .x=0xc1, .y=0xa6, .sp=0x04, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1635, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1635, .value=0x9c, .type=IO_READ},
        {.addr=0x1636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd707, .a=0x17, .x=0x96, .y=0x48, .sp=0xd7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xd707, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd708, .a=0x16, .x=0x96, .y=0x48, .sp=0xd7, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd707, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd707, .value=0x9c, .type=IO_READ},
        {.addr=0xd708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc504, .a=0x06, .x=0x2d, .y=0xa1, .sp=0xf2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc504, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc505, .a=0x05, .x=0x2d, .y=0xa1, .sp=0xf2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc504, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc504, .value=0x9c, .type=IO_READ},
        {.addr=0xc505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014C) {
    const struct CPU_State initial_cpu = {.pc=0x83df, .a=0xd4, .x=0x51, .y=0x0a, .sp=0x8a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x83df, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x83e0, .a=0xd3, .x=0x51, .y=0x0a, .sp=0x8a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x83df, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x83df, .value=0x9c, .type=IO_READ},
        {.addr=0x83e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd7a5, .a=0x00, .x=0x2c, .y=0x06, .sp=0xab, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd7a5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd7a6, .a=0xff, .x=0x2c, .y=0x06, .sp=0xab, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd7a5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd7a5, .value=0x9c, .type=IO_READ},
        {.addr=0xd7a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014E) {
    const struct CPU_State initial_cpu = {.pc=0xcd7b, .a=0xf2, .x=0x63, .y=0x2a, .sp=0x47, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcd7b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd7c, .a=0xf1, .x=0x63, .y=0x2a, .sp=0x47, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcd7b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd7b, .value=0x9c, .type=IO_READ},
        {.addr=0xcd7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_014F) {
    const struct CPU_State initial_cpu = {.pc=0xf7b7, .a=0x6e, .x=0x8a, .y=0xbf, .sp=0x42, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf7b7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf7b8, .a=0x6d, .x=0x8a, .y=0xbf, .sp=0x42, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf7b7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf7b7, .value=0x9c, .type=IO_READ},
        {.addr=0xf7b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0150) {
    const struct CPU_State initial_cpu = {.pc=0x150c, .a=0x7b, .x=0x98, .y=0x87, .sp=0x68, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x150c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x150d, .a=0x7a, .x=0x98, .y=0x87, .sp=0x68, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x150c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x150c, .value=0x9c, .type=IO_READ},
        {.addr=0x150d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0151) {
    const struct CPU_State initial_cpu = {.pc=0xafbb, .a=0x88, .x=0xe3, .y=0xa2, .sp=0x83, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xafbb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xafbc, .a=0x87, .x=0xe3, .y=0xa2, .sp=0x83, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xafbb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xafbb, .value=0x9c, .type=IO_READ},
        {.addr=0xafbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0152) {
    const struct CPU_State initial_cpu = {.pc=0x99d7, .a=0x3b, .x=0xdd, .y=0xe8, .sp=0x87, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x99d7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x99d8, .a=0x3a, .x=0xdd, .y=0xe8, .sp=0x87, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x99d7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x99d7, .value=0x9c, .type=IO_READ},
        {.addr=0x99d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0153) {
    const struct CPU_State initial_cpu = {.pc=0xb703, .a=0xb4, .x=0xdc, .y=0x98, .sp=0xba, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb703, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb704, .a=0xb3, .x=0xdc, .y=0x98, .sp=0xba, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb703, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb703, .value=0x9c, .type=IO_READ},
        {.addr=0xb704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0154) {
    const struct CPU_State initial_cpu = {.pc=0x8053, .a=0x19, .x=0xc3, .y=0x31, .sp=0x01, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8053, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8054, .a=0x18, .x=0xc3, .y=0x31, .sp=0x01, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8053, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8053, .value=0x9c, .type=IO_READ},
        {.addr=0x8054, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0155) {
    const struct CPU_State initial_cpu = {.pc=0xa72e, .a=0xb8, .x=0xdc, .y=0x70, .sp=0x68, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa72e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa72f, .a=0xb7, .x=0xdc, .y=0x70, .sp=0x68, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa72e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa72e, .value=0x9c, .type=IO_READ},
        {.addr=0xa72f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0156) {
    const struct CPU_State initial_cpu = {.pc=0x01a3, .a=0xf0, .x=0x27, .y=0x4e, .sp=0x45, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x01a4, .a=0xef, .x=0x27, .y=0x4e, .sp=0x45, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x01a3, .value=0x9c, .type=IO_READ},
        {.addr=0x01a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0157) {
    const struct CPU_State initial_cpu = {.pc=0x479c, .a=0xc8, .x=0xe6, .y=0x6b, .sp=0x94, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x479c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x479d, .a=0xc7, .x=0xe6, .y=0x6b, .sp=0x94, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x479c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x479c, .value=0x9c, .type=IO_READ},
        {.addr=0x479d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0158) {
    const struct CPU_State initial_cpu = {.pc=0xab38, .a=0x76, .x=0xa2, .y=0xe4, .sp=0xd4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xab38, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xab39, .a=0x75, .x=0xa2, .y=0xe4, .sp=0xd4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xab38, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xab38, .value=0x9c, .type=IO_READ},
        {.addr=0xab39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0159) {
    const struct CPU_State initial_cpu = {.pc=0x1e5c, .a=0x1e, .x=0x05, .y=0xd2, .sp=0xf7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1e5c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1e5d, .a=0x1d, .x=0x05, .y=0xd2, .sp=0xf7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1e5c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1e5c, .value=0x9c, .type=IO_READ},
        {.addr=0x1e5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015A) {
    const struct CPU_State initial_cpu = {.pc=0xb3a6, .a=0xab, .x=0xd6, .y=0xac, .sp=0x29, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xb3a6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb3a7, .a=0xaa, .x=0xd6, .y=0xac, .sp=0x29, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb3a6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb3a6, .value=0x9c, .type=IO_READ},
        {.addr=0xb3a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015B) {
    const struct CPU_State initial_cpu = {.pc=0x4951, .a=0xdf, .x=0xab, .y=0xa2, .sp=0xd6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4951, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4952, .a=0xde, .x=0xab, .y=0xa2, .sp=0xd6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4951, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4951, .value=0x9c, .type=IO_READ},
        {.addr=0x4952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015C) {
    const struct CPU_State initial_cpu = {.pc=0xc76a, .a=0x7e, .x=0x11, .y=0x3e, .sp=0x28, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xc76a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc76b, .a=0x7d, .x=0x11, .y=0x3e, .sp=0x28, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc76a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc76a, .value=0x9c, .type=IO_READ},
        {.addr=0xc76b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6ca8, .a=0x96, .x=0x4e, .y=0x19, .sp=0xb7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ca9, .a=0x95, .x=0x4e, .y=0x19, .sp=0xb7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6ca8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ca8, .value=0x9c, .type=IO_READ},
        {.addr=0x6ca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015E) {
    const struct CPU_State initial_cpu = {.pc=0xdf42, .a=0xbb, .x=0xe3, .y=0xf6, .sp=0x0b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xdf42, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdf43, .a=0xba, .x=0xe3, .y=0xf6, .sp=0x0b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdf42, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdf42, .value=0x9c, .type=IO_READ},
        {.addr=0xdf43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_015F) {
    const struct CPU_State initial_cpu = {.pc=0xbeac, .a=0x1a, .x=0x08, .y=0x3b, .sp=0x03, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xbeac, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbead, .a=0x19, .x=0x08, .y=0x3b, .sp=0x03, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbeac, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbeac, .value=0x9c, .type=IO_READ},
        {.addr=0xbead, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0160) {
    const struct CPU_State initial_cpu = {.pc=0xedeb, .a=0xf1, .x=0xc5, .y=0x3b, .sp=0x3e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xedeb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xedec, .a=0xf0, .x=0xc5, .y=0x3b, .sp=0x3e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xedeb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xedeb, .value=0x9c, .type=IO_READ},
        {.addr=0xedec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0161) {
    const struct CPU_State initial_cpu = {.pc=0x1b71, .a=0xae, .x=0xf6, .y=0x83, .sp=0x4e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x1b71, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1b72, .a=0xad, .x=0xf6, .y=0x83, .sp=0x4e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1b71, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b71, .value=0x9c, .type=IO_READ},
        {.addr=0x1b72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0162) {
    const struct CPU_State initial_cpu = {.pc=0x353d, .a=0xa5, .x=0xb2, .y=0xe6, .sp=0xc6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x353d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x353e, .a=0xa4, .x=0xb2, .y=0xe6, .sp=0xc6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x353d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x353d, .value=0x9c, .type=IO_READ},
        {.addr=0x353e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0163) {
    const struct CPU_State initial_cpu = {.pc=0xae45, .a=0x5c, .x=0xff, .y=0x9e, .sp=0x33, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xae45, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xae46, .a=0x5b, .x=0xff, .y=0x9e, .sp=0x33, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xae45, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xae45, .value=0x9c, .type=IO_READ},
        {.addr=0xae46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0164) {
    const struct CPU_State initial_cpu = {.pc=0xd8a1, .a=0xd4, .x=0x43, .y=0x2f, .sp=0x3f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd8a2, .a=0xd3, .x=0x43, .y=0x2f, .sp=0x3f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd8a1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd8a1, .value=0x9c, .type=IO_READ},
        {.addr=0xd8a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0165) {
    const struct CPU_State initial_cpu = {.pc=0x8812, .a=0xfc, .x=0x8f, .y=0x8f, .sp=0x4c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8812, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8813, .a=0xfb, .x=0x8f, .y=0x8f, .sp=0x4c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8812, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8812, .value=0x9c, .type=IO_READ},
        {.addr=0x8813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0166) {
    const struct CPU_State initial_cpu = {.pc=0x8a92, .a=0x39, .x=0x2c, .y=0x39, .sp=0x11, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8a92, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8a93, .a=0x38, .x=0x2c, .y=0x39, .sp=0x11, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8a92, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8a92, .value=0x9c, .type=IO_READ},
        {.addr=0x8a93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0167) {
    const struct CPU_State initial_cpu = {.pc=0x5bec, .a=0xa9, .x=0x96, .y=0x75, .sp=0xfc, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5bec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5bed, .a=0xa8, .x=0x96, .y=0x75, .sp=0xfc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5bec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5bec, .value=0x9c, .type=IO_READ},
        {.addr=0x5bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0168) {
    const struct CPU_State initial_cpu = {.pc=0x16c3, .a=0x70, .x=0x75, .y=0xae, .sp=0xce, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x16c3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x16c4, .a=0x6f, .x=0x75, .y=0xae, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x16c3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x16c3, .value=0x9c, .type=IO_READ},
        {.addr=0x16c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0169) {
    const struct CPU_State initial_cpu = {.pc=0x0b80, .a=0xfd, .x=0x1f, .y=0x70, .sp=0xe9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0b80, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0b81, .a=0xfc, .x=0x1f, .y=0x70, .sp=0xe9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0b80, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0b80, .value=0x9c, .type=IO_READ},
        {.addr=0x0b81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016A) {
    const struct CPU_State initial_cpu = {.pc=0xfeae, .a=0xd9, .x=0x72, .y=0xe2, .sp=0x38, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xfeae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfeaf, .a=0xd8, .x=0x72, .y=0xe2, .sp=0x38, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfeae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfeae, .value=0x9c, .type=IO_READ},
        {.addr=0xfeaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016B) {
    const struct CPU_State initial_cpu = {.pc=0x7f48, .a=0x32, .x=0xb8, .y=0x3f, .sp=0xc4, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7f48, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7f49, .a=0x31, .x=0xb8, .y=0x3f, .sp=0xc4, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7f48, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7f48, .value=0x9c, .type=IO_READ},
        {.addr=0x7f49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016C) {
    const struct CPU_State initial_cpu = {.pc=0xc240, .a=0x39, .x=0x5a, .y=0x3c, .sp=0xeb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc240, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc241, .a=0x38, .x=0x5a, .y=0x3c, .sp=0xeb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc240, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc240, .value=0x9c, .type=IO_READ},
        {.addr=0xc241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016D) {
    const struct CPU_State initial_cpu = {.pc=0x1951, .a=0x29, .x=0x12, .y=0x13, .sp=0x0c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1951, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1952, .a=0x28, .x=0x12, .y=0x13, .sp=0x0c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1951, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1951, .value=0x9c, .type=IO_READ},
        {.addr=0x1952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016E) {
    const struct CPU_State initial_cpu = {.pc=0x0430, .a=0x81, .x=0xdc, .y=0xd0, .sp=0x9d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0430, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0431, .a=0x80, .x=0xdc, .y=0xd0, .sp=0x9d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0430, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0430, .value=0x9c, .type=IO_READ},
        {.addr=0x0431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_016F) {
    const struct CPU_State initial_cpu = {.pc=0xec72, .a=0x4c, .x=0xe7, .y=0xc1, .sp=0xee, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xec72, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xec73, .a=0x4b, .x=0xe7, .y=0xc1, .sp=0xee, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xec72, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xec72, .value=0x9c, .type=IO_READ},
        {.addr=0xec73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0170) {
    const struct CPU_State initial_cpu = {.pc=0x3d20, .a=0xfa, .x=0xa0, .y=0xb9, .sp=0xac, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3d20, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d21, .a=0xf9, .x=0xa0, .y=0xb9, .sp=0xac, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3d20, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d20, .value=0x9c, .type=IO_READ},
        {.addr=0x3d21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0171) {
    const struct CPU_State initial_cpu = {.pc=0xfe18, .a=0xf0, .x=0x7a, .y=0x22, .sp=0xb3, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xfe18, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfe19, .a=0xef, .x=0x7a, .y=0x22, .sp=0xb3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfe18, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfe18, .value=0x9c, .type=IO_READ},
        {.addr=0xfe19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0172) {
    const struct CPU_State initial_cpu = {.pc=0x24c5, .a=0xba, .x=0x42, .y=0xce, .sp=0x24, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x24c5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x24c6, .a=0xb9, .x=0x42, .y=0xce, .sp=0x24, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x24c5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x24c5, .value=0x9c, .type=IO_READ},
        {.addr=0x24c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0173) {
    const struct CPU_State initial_cpu = {.pc=0x0e50, .a=0x18, .x=0xc1, .y=0xcc, .sp=0x41, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0e50, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0e51, .a=0x17, .x=0xc1, .y=0xcc, .sp=0x41, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0e50, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0e50, .value=0x9c, .type=IO_READ},
        {.addr=0x0e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0174) {
    const struct CPU_State initial_cpu = {.pc=0x99d4, .a=0x3f, .x=0x34, .y=0x12, .sp=0x7d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x99d4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x99d5, .a=0x3e, .x=0x34, .y=0x12, .sp=0x7d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x99d4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x99d4, .value=0x9c, .type=IO_READ},
        {.addr=0x99d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0175) {
    const struct CPU_State initial_cpu = {.pc=0xee51, .a=0xfb, .x=0xd1, .y=0x5d, .sp=0x8b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xee51, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee52, .a=0xfa, .x=0xd1, .y=0x5d, .sp=0x8b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xee51, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee51, .value=0x9c, .type=IO_READ},
        {.addr=0xee52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0176) {
    const struct CPU_State initial_cpu = {.pc=0x37db, .a=0x6c, .x=0x12, .y=0x20, .sp=0x1d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x37db, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x37dc, .a=0x6b, .x=0x12, .y=0x20, .sp=0x1d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x37db, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x37db, .value=0x9c, .type=IO_READ},
        {.addr=0x37dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0177) {
    const struct CPU_State initial_cpu = {.pc=0x7e4c, .a=0x15, .x=0x66, .y=0xcc, .sp=0xca, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7e4d, .a=0x14, .x=0x66, .y=0xcc, .sp=0xca, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x7e4c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7e4c, .value=0x9c, .type=IO_READ},
        {.addr=0x7e4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0178) {
    const struct CPU_State initial_cpu = {.pc=0xa167, .a=0x8c, .x=0x27, .y=0x50, .sp=0x2c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa167, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa168, .a=0x8b, .x=0x27, .y=0x50, .sp=0x2c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa167, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa167, .value=0x9c, .type=IO_READ},
        {.addr=0xa168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0179) {
    const struct CPU_State initial_cpu = {.pc=0x70dd, .a=0x1a, .x=0x06, .y=0xbb, .sp=0xfe, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x70dd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x70de, .a=0x19, .x=0x06, .y=0xbb, .sp=0xfe, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x70dd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x70dd, .value=0x9c, .type=IO_READ},
        {.addr=0x70de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017A) {
    const struct CPU_State initial_cpu = {.pc=0x6014, .a=0x83, .x=0xd9, .y=0x91, .sp=0x45, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6014, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6015, .a=0x82, .x=0xd9, .y=0x91, .sp=0x45, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6014, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6014, .value=0x9c, .type=IO_READ},
        {.addr=0x6015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017B) {
    const struct CPU_State initial_cpu = {.pc=0x7228, .a=0xca, .x=0xe0, .y=0x8e, .sp=0x6c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7228, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7229, .a=0xc9, .x=0xe0, .y=0x8e, .sp=0x6c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7228, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7228, .value=0x9c, .type=IO_READ},
        {.addr=0x7229, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017C) {
    const struct CPU_State initial_cpu = {.pc=0x7385, .a=0x30, .x=0x3e, .y=0x46, .sp=0x40, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7385, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7386, .a=0x2f, .x=0x3e, .y=0x46, .sp=0x40, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7385, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7385, .value=0x9c, .type=IO_READ},
        {.addr=0x7386, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017D) {
    const struct CPU_State initial_cpu = {.pc=0x3319, .a=0x4c, .x=0xb5, .y=0x2b, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3319, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x331a, .a=0x4b, .x=0xb5, .y=0x2b, .sp=0x98, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3319, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3319, .value=0x9c, .type=IO_READ},
        {.addr=0x331a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017E) {
    const struct CPU_State initial_cpu = {.pc=0x1d52, .a=0x16, .x=0xbb, .y=0xc8, .sp=0xcf, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1d52, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1d53, .a=0x15, .x=0xbb, .y=0xc8, .sp=0xcf, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1d52, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1d52, .value=0x9c, .type=IO_READ},
        {.addr=0x1d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_017F) {
    const struct CPU_State initial_cpu = {.pc=0xfd62, .a=0x64, .x=0x99, .y=0x55, .sp=0xc2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xfd62, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfd63, .a=0x63, .x=0x99, .y=0x55, .sp=0xc2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfd62, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfd62, .value=0x9c, .type=IO_READ},
        {.addr=0xfd63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0180) {
    const struct CPU_State initial_cpu = {.pc=0x49ac, .a=0x8a, .x=0x41, .y=0xf6, .sp=0x2f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x49ac, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x49ad, .a=0x89, .x=0x41, .y=0xf6, .sp=0x2f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x49ac, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x49ac, .value=0x9c, .type=IO_READ},
        {.addr=0x49ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9bdd, .a=0x0c, .x=0x76, .y=0xde, .sp=0x69, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9bdd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9bde, .a=0x0b, .x=0x76, .y=0xde, .sp=0x69, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9bdd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9bdd, .value=0x9c, .type=IO_READ},
        {.addr=0x9bde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0182) {
    const struct CPU_State initial_cpu = {.pc=0x1dc1, .a=0xf6, .x=0xcf, .y=0x6a, .sp=0x57, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1dc1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1dc2, .a=0xf5, .x=0xcf, .y=0x6a, .sp=0x57, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1dc1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1dc1, .value=0x9c, .type=IO_READ},
        {.addr=0x1dc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0183) {
    const struct CPU_State initial_cpu = {.pc=0x93b2, .a=0xc9, .x=0x5d, .y=0x8d, .sp=0x1e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x93b2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x93b3, .a=0xc8, .x=0x5d, .y=0x8d, .sp=0x1e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x93b2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x93b2, .value=0x9c, .type=IO_READ},
        {.addr=0x93b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0184) {
    const struct CPU_State initial_cpu = {.pc=0x543b, .a=0x2c, .x=0x86, .y=0x54, .sp=0xb1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x543b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x543c, .a=0x2b, .x=0x86, .y=0x54, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x543b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x543b, .value=0x9c, .type=IO_READ},
        {.addr=0x543c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0185) {
    const struct CPU_State initial_cpu = {.pc=0xd8cf, .a=0x9e, .x=0x69, .y=0xdd, .sp=0xcb, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd8cf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd8d0, .a=0x9d, .x=0x69, .y=0xdd, .sp=0xcb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd8cf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd8cf, .value=0x9c, .type=IO_READ},
        {.addr=0xd8d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0186) {
    const struct CPU_State initial_cpu = {.pc=0x480d, .a=0x19, .x=0x3d, .y=0x92, .sp=0xc6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x480d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x480e, .a=0x18, .x=0x3d, .y=0x92, .sp=0xc6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x480d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x480d, .value=0x9c, .type=IO_READ},
        {.addr=0x480e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0187) {
    const struct CPU_State initial_cpu = {.pc=0x4a2e, .a=0xd1, .x=0x51, .y=0x5b, .sp=0x23, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4a2f, .a=0xd0, .x=0x51, .y=0x5b, .sp=0x23, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4a2e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4a2e, .value=0x9c, .type=IO_READ},
        {.addr=0x4a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0188) {
    const struct CPU_State initial_cpu = {.pc=0x3a60, .a=0xd6, .x=0x7d, .y=0xe3, .sp=0x9c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3a60, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3a61, .a=0xd5, .x=0x7d, .y=0xe3, .sp=0x9c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3a60, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a60, .value=0x9c, .type=IO_READ},
        {.addr=0x3a61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb2db, .a=0x4d, .x=0x27, .y=0x33, .sp=0x72, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb2db, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb2dc, .a=0x4c, .x=0x27, .y=0x33, .sp=0x72, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb2db, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb2db, .value=0x9c, .type=IO_READ},
        {.addr=0xb2dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018A) {
    const struct CPU_State initial_cpu = {.pc=0xa36b, .a=0xdb, .x=0x23, .y=0xbe, .sp=0x87, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa36b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa36c, .a=0xda, .x=0x23, .y=0xbe, .sp=0x87, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa36b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa36b, .value=0x9c, .type=IO_READ},
        {.addr=0xa36c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018B) {
    const struct CPU_State initial_cpu = {.pc=0x4f6d, .a=0x46, .x=0xeb, .y=0x23, .sp=0xe7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4f6d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4f6e, .a=0x45, .x=0xeb, .y=0x23, .sp=0xe7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4f6d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4f6d, .value=0x9c, .type=IO_READ},
        {.addr=0x4f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018C) {
    const struct CPU_State initial_cpu = {.pc=0xb2f5, .a=0xfe, .x=0x0c, .y=0x03, .sp=0xbd, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb2f6, .a=0xfd, .x=0x0c, .y=0x03, .sp=0xbd, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb2f5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb2f5, .value=0x9c, .type=IO_READ},
        {.addr=0xb2f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018D) {
    const struct CPU_State initial_cpu = {.pc=0x6e42, .a=0x4a, .x=0xb5, .y=0x18, .sp=0xc6, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6e42, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6e43, .a=0x49, .x=0xb5, .y=0x18, .sp=0xc6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6e42, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6e42, .value=0x9c, .type=IO_READ},
        {.addr=0x6e43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018E) {
    const struct CPU_State initial_cpu = {.pc=0x5837, .a=0xd0, .x=0xcb, .y=0x3b, .sp=0xa2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5837, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5838, .a=0xcf, .x=0xcb, .y=0x3b, .sp=0xa2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5837, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5837, .value=0x9c, .type=IO_READ},
        {.addr=0x5838, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_018F) {
    const struct CPU_State initial_cpu = {.pc=0x592d, .a=0x81, .x=0xb0, .y=0xba, .sp=0x5a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x592d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x592e, .a=0x80, .x=0xb0, .y=0xba, .sp=0x5a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x592d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x592d, .value=0x9c, .type=IO_READ},
        {.addr=0x592e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0190) {
    const struct CPU_State initial_cpu = {.pc=0xe992, .a=0x8c, .x=0xcf, .y=0x7d, .sp=0xc1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe992, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe993, .a=0x8b, .x=0xcf, .y=0x7d, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe992, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe992, .value=0x9c, .type=IO_READ},
        {.addr=0xe993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5669, .a=0x4c, .x=0xdb, .y=0x4b, .sp=0x31, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5669, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x566a, .a=0x4b, .x=0xdb, .y=0x4b, .sp=0x31, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5669, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5669, .value=0x9c, .type=IO_READ},
        {.addr=0x566a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1a38, .a=0x69, .x=0x4b, .y=0x6a, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1a38, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1a39, .a=0x68, .x=0x4b, .y=0x6a, .sp=0xe6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1a38, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1a38, .value=0x9c, .type=IO_READ},
        {.addr=0x1a39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0193) {
    const struct CPU_State initial_cpu = {.pc=0x777d, .a=0xc2, .x=0x7a, .y=0x0d, .sp=0xf4, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x777d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x777e, .a=0xc1, .x=0x7a, .y=0x0d, .sp=0xf4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x777d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x777d, .value=0x9c, .type=IO_READ},
        {.addr=0x777e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0194) {
    const struct CPU_State initial_cpu = {.pc=0x792c, .a=0x4e, .x=0x36, .y=0x5e, .sp=0x33, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x792c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x792d, .a=0x4d, .x=0x36, .y=0x5e, .sp=0x33, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x792c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x792c, .value=0x9c, .type=IO_READ},
        {.addr=0x792d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0195) {
    const struct CPU_State initial_cpu = {.pc=0xd25c, .a=0xc3, .x=0x14, .y=0x18, .sp=0x00, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd25c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd25d, .a=0xc2, .x=0x14, .y=0x18, .sp=0x00, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd25c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd25c, .value=0x9c, .type=IO_READ},
        {.addr=0xd25d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0196) {
    const struct CPU_State initial_cpu = {.pc=0xd705, .a=0x71, .x=0x09, .y=0x45, .sp=0xa3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd705, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd706, .a=0x70, .x=0x09, .y=0x45, .sp=0xa3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd705, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd705, .value=0x9c, .type=IO_READ},
        {.addr=0xd706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0197) {
    const struct CPU_State initial_cpu = {.pc=0xdd7b, .a=0x3b, .x=0x91, .y=0x4e, .sp=0x55, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xdd7b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdd7c, .a=0x3a, .x=0x91, .y=0x4e, .sp=0x55, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xdd7b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdd7b, .value=0x9c, .type=IO_READ},
        {.addr=0xdd7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0198) {
    const struct CPU_State initial_cpu = {.pc=0x5307, .a=0x3f, .x=0x49, .y=0x9b, .sp=0x3a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5307, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5308, .a=0x3e, .x=0x49, .y=0x9b, .sp=0x3a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5307, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5307, .value=0x9c, .type=IO_READ},
        {.addr=0x5308, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0199) {
    const struct CPU_State initial_cpu = {.pc=0x074f, .a=0x8c, .x=0x3a, .y=0x93, .sp=0x52, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x074f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0750, .a=0x8b, .x=0x3a, .y=0x93, .sp=0x52, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x074f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x074f, .value=0x9c, .type=IO_READ},
        {.addr=0x0750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019A) {
    const struct CPU_State initial_cpu = {.pc=0x2df2, .a=0x00, .x=0xff, .y=0x0a, .sp=0x17, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2df2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2df3, .a=0xff, .x=0xff, .y=0x0a, .sp=0x17, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2df2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2df2, .value=0x9c, .type=IO_READ},
        {.addr=0x2df3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019B) {
    const struct CPU_State initial_cpu = {.pc=0xf495, .a=0xb6, .x=0x00, .y=0x42, .sp=0x5a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf495, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf496, .a=0xb5, .x=0x00, .y=0x42, .sp=0x5a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf495, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf495, .value=0x9c, .type=IO_READ},
        {.addr=0xf496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019C) {
    const struct CPU_State initial_cpu = {.pc=0x6b7d, .a=0x66, .x=0xe4, .y=0xab, .sp=0xfa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6b7d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6b7e, .a=0x65, .x=0xe4, .y=0xab, .sp=0xfa, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6b7d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6b7d, .value=0x9c, .type=IO_READ},
        {.addr=0x6b7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019D) {
    const struct CPU_State initial_cpu = {.pc=0xfccb, .a=0x06, .x=0x8f, .y=0x72, .sp=0xd8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfccb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfccc, .a=0x05, .x=0x8f, .y=0x72, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfccb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfccb, .value=0x9c, .type=IO_READ},
        {.addr=0xfccc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019E) {
    const struct CPU_State initial_cpu = {.pc=0xa0d7, .a=0x77, .x=0x81, .y=0xed, .sp=0x47, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa0d8, .a=0x76, .x=0x81, .y=0xed, .sp=0x47, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa0d7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa0d7, .value=0x9c, .type=IO_READ},
        {.addr=0xa0d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_019F) {
    const struct CPU_State initial_cpu = {.pc=0x02a2, .a=0xde, .x=0xa3, .y=0xd6, .sp=0x5d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x02a2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x02a3, .a=0xdd, .x=0xa3, .y=0xd6, .sp=0x5d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x02a2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x02a2, .value=0x9c, .type=IO_READ},
        {.addr=0x02a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x8e86, .a=0xe9, .x=0x63, .y=0x35, .sp=0x8f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x8e86, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8e87, .a=0xe8, .x=0x63, .y=0x35, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8e86, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8e86, .value=0x9c, .type=IO_READ},
        {.addr=0x8e87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x31b4, .a=0xce, .x=0xd5, .y=0x4e, .sp=0xde, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x31b4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x31b5, .a=0xcd, .x=0xd5, .y=0x4e, .sp=0xde, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x31b4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x31b4, .value=0x9c, .type=IO_READ},
        {.addr=0x31b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xff53, .a=0x50, .x=0x49, .y=0xb6, .sp=0xaa, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xff53, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xff54, .a=0x4f, .x=0x49, .y=0xb6, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xff53, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xff53, .value=0x9c, .type=IO_READ},
        {.addr=0xff54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xcb21, .a=0x79, .x=0x92, .y=0x79, .sp=0xf9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xcb21, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb22, .a=0x78, .x=0x92, .y=0x79, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xcb21, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb21, .value=0x9c, .type=IO_READ},
        {.addr=0xcb22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x6dc4, .a=0x09, .x=0xc8, .y=0x6f, .sp=0x67, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6dc4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6dc5, .a=0x08, .x=0xc8, .y=0x6f, .sp=0x67, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6dc4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6dc4, .value=0x9c, .type=IO_READ},
        {.addr=0x6dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xd9ec, .a=0x1a, .x=0xce, .y=0xfa, .sp=0x24, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd9ed, .a=0x19, .x=0xce, .y=0xfa, .sp=0x24, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd9ec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd9ec, .value=0x9c, .type=IO_READ},
        {.addr=0xd9ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x974a, .a=0xa1, .x=0x9a, .y=0x59, .sp=0xae, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x974a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x974b, .a=0xa0, .x=0x9a, .y=0x59, .sp=0xae, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x974a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x974a, .value=0x9c, .type=IO_READ},
        {.addr=0x974b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x97a0, .a=0xf6, .x=0xc2, .y=0x03, .sp=0x16, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x97a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x97a1, .a=0xf5, .x=0xc2, .y=0x03, .sp=0x16, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x97a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x97a0, .value=0x9c, .type=IO_READ},
        {.addr=0x97a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x9df2, .a=0x80, .x=0xab, .y=0xc0, .sp=0x21, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9df2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9df3, .a=0x7f, .x=0xab, .y=0xc0, .sp=0x21, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9df2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9df2, .value=0x9c, .type=IO_READ},
        {.addr=0x9df3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x3d74, .a=0x8a, .x=0xca, .y=0x6e, .sp=0xc2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x3d74, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d75, .a=0x89, .x=0xca, .y=0x6e, .sp=0xc2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3d74, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d74, .value=0x9c, .type=IO_READ},
        {.addr=0x3d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x3433, .a=0x86, .x=0x81, .y=0xdb, .sp=0x5a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3433, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0x85, .x=0x81, .y=0xdb, .sp=0x5a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3433, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3433, .value=0x9c, .type=IO_READ},
        {.addr=0x3434, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x241e, .a=0x81, .x=0x7b, .y=0x47, .sp=0x7f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x241e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x241f, .a=0x80, .x=0x7b, .y=0x47, .sp=0x7f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x241e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x241e, .value=0x9c, .type=IO_READ},
        {.addr=0x241f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xba03, .a=0x8d, .x=0x17, .y=0x44, .sp=0xf0, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xba03, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xba04, .a=0x8c, .x=0x17, .y=0x44, .sp=0xf0, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xba03, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xba03, .value=0x9c, .type=IO_READ},
        {.addr=0xba04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x1181, .a=0xa5, .x=0x3b, .y=0xd1, .sp=0x6c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1181, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1182, .a=0xa4, .x=0x3b, .y=0xd1, .sp=0x6c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1181, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1181, .value=0x9c, .type=IO_READ},
        {.addr=0x1182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xb7db, .a=0x72, .x=0x0e, .y=0xef, .sp=0x07, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb7db, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb7dc, .a=0x71, .x=0x0e, .y=0xef, .sp=0x07, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb7db, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb7db, .value=0x9c, .type=IO_READ},
        {.addr=0xb7dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x3ea4, .a=0x2f, .x=0xba, .y=0xca, .sp=0x9d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3ea5, .a=0x2e, .x=0xba, .y=0xca, .sp=0x9d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3ea4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3ea4, .value=0x9c, .type=IO_READ},
        {.addr=0x3ea5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xcd1e, .a=0x95, .x=0x30, .y=0x09, .sp=0x2b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd1f, .a=0x94, .x=0x30, .y=0x09, .sp=0x2b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcd1e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd1e, .value=0x9c, .type=IO_READ},
        {.addr=0xcd1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0870, .a=0x1c, .x=0x81, .y=0x76, .sp=0xde, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0870, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0871, .a=0x1b, .x=0x81, .y=0x76, .sp=0xde, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0870, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0870, .value=0x9c, .type=IO_READ},
        {.addr=0x0871, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x7945, .a=0xff, .x=0x98, .y=0xce, .sp=0xc3, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7945, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7946, .a=0xfe, .x=0x98, .y=0xce, .sp=0xc3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7945, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7945, .value=0x9c, .type=IO_READ},
        {.addr=0x7946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x70b5, .a=0x42, .x=0x0e, .y=0x93, .sp=0x1a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x70b5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x70b6, .a=0x41, .x=0x0e, .y=0x93, .sp=0x1a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x70b5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x70b5, .value=0x9c, .type=IO_READ},
        {.addr=0x70b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xb497, .a=0x10, .x=0x48, .y=0x6f, .sp=0x7e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb497, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb498, .a=0x0f, .x=0x48, .y=0x6f, .sp=0x7e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb497, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb497, .value=0x9c, .type=IO_READ},
        {.addr=0xb498, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x88d8, .a=0xc0, .x=0xaf, .y=0x20, .sp=0x45, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x88d8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x88d9, .a=0xbf, .x=0xaf, .y=0x20, .sp=0x45, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x88d8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x88d8, .value=0x9c, .type=IO_READ},
        {.addr=0x88d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xc863, .a=0xe4, .x=0x4f, .y=0x53, .sp=0x65, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc863, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc864, .a=0xe3, .x=0x4f, .y=0x53, .sp=0x65, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc863, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc863, .value=0x9c, .type=IO_READ},
        {.addr=0xc864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xc56d, .a=0x71, .x=0x51, .y=0x2c, .sp=0x5e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc56d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc56e, .a=0x70, .x=0x51, .y=0x2c, .sp=0x5e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc56d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc56d, .value=0x9c, .type=IO_READ},
        {.addr=0xc56e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xf0fc, .a=0xc9, .x=0xf7, .y=0x88, .sp=0x4f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf0fc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf0fd, .a=0xc8, .x=0xf7, .y=0x88, .sp=0x4f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf0fc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf0fc, .value=0x9c, .type=IO_READ},
        {.addr=0xf0fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x14b0, .a=0x44, .x=0xb9, .y=0xc3, .sp=0x40, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x14b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x14b1, .a=0x43, .x=0xb9, .y=0xc3, .sp=0x40, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x14b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x14b0, .value=0x9c, .type=IO_READ},
        {.addr=0x14b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x9b0c, .a=0x31, .x=0x7b, .y=0x1e, .sp=0xe6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b0c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9b0d, .a=0x30, .x=0x7b, .y=0x1e, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9b0c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9b0c, .value=0x9c, .type=IO_READ},
        {.addr=0x9b0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x6599, .a=0x28, .x=0xa9, .y=0x66, .sp=0x7c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6599, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x659a, .a=0x27, .x=0xa9, .y=0x66, .sp=0x7c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6599, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6599, .value=0x9c, .type=IO_READ},
        {.addr=0x659a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0xb4, .x=0x34, .y=0xe3, .sp=0x22, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x73ea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x73eb, .a=0xb3, .x=0x34, .y=0xe3, .sp=0x22, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x73ea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0x9c, .type=IO_READ},
        {.addr=0x73eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xde66, .a=0x20, .x=0x69, .y=0x89, .sp=0x34, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xde66, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xde67, .a=0x1f, .x=0x69, .y=0x89, .sp=0x34, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xde66, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xde66, .value=0x9c, .type=IO_READ},
        {.addr=0xde67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x0f90, .a=0x2f, .x=0xd0, .y=0x9b, .sp=0x80, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0f90, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0f91, .a=0x2e, .x=0xd0, .y=0x9b, .sp=0x80, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0f90, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0f90, .value=0x9c, .type=IO_READ},
        {.addr=0x0f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xab14, .a=0x41, .x=0xff, .y=0x53, .sp=0x33, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xab14, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xab15, .a=0x40, .x=0xff, .y=0x53, .sp=0x33, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xab14, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xab14, .value=0x9c, .type=IO_READ},
        {.addr=0xab15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xb80b, .a=0x30, .x=0xc0, .y=0x43, .sp=0xb9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb80b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb80c, .a=0x2f, .x=0xc0, .y=0x43, .sp=0xb9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb80b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb80b, .value=0x9c, .type=IO_READ},
        {.addr=0xb80c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x440f, .a=0xfb, .x=0x5d, .y=0x8a, .sp=0xba, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x440f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4410, .a=0xfa, .x=0x5d, .y=0x8a, .sp=0xba, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x440f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x440f, .value=0x9c, .type=IO_READ},
        {.addr=0x4410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x5ca9, .a=0xcf, .x=0x9f, .y=0x9f, .sp=0x76, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5caa, .a=0xce, .x=0x9f, .y=0x9f, .sp=0x76, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x5ca9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5ca9, .value=0x9c, .type=IO_READ},
        {.addr=0x5caa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x997e, .a=0x48, .x=0x41, .y=0xd2, .sp=0x54, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x997e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x997f, .a=0x47, .x=0x41, .y=0xd2, .sp=0x54, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x997e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x997e, .value=0x9c, .type=IO_READ},
        {.addr=0x997f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xc746, .a=0x4e, .x=0x6c, .y=0xf6, .sp=0xa6, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc746, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc747, .a=0x4d, .x=0x6c, .y=0xf6, .sp=0xa6, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc746, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc746, .value=0x9c, .type=IO_READ},
        {.addr=0xc747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x89b0, .a=0xe4, .x=0x45, .y=0xa2, .sp=0x44, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x89b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x89b1, .a=0xe3, .x=0x45, .y=0xa2, .sp=0x44, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x89b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x89b0, .value=0x9c, .type=IO_READ},
        {.addr=0x89b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x7006, .a=0xf2, .x=0x8d, .y=0x21, .sp=0xdb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7006, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7007, .a=0xf1, .x=0x8d, .y=0x21, .sp=0xdb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7006, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7006, .value=0x9c, .type=IO_READ},
        {.addr=0x7007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x4a83, .a=0x11, .x=0x91, .y=0x46, .sp=0xaa, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4a83, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4a84, .a=0x10, .x=0x91, .y=0x46, .sp=0xaa, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4a83, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4a83, .value=0x9c, .type=IO_READ},
        {.addr=0x4a84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x92b2, .a=0x67, .x=0x2c, .y=0x7f, .sp=0x70, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x92b2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x92b3, .a=0x66, .x=0x2c, .y=0x7f, .sp=0x70, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x92b2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x92b2, .value=0x9c, .type=IO_READ},
        {.addr=0x92b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x909e, .a=0x67, .x=0x22, .y=0xc2, .sp=0xc1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x909e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x909f, .a=0x66, .x=0x22, .y=0xc2, .sp=0xc1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x909e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x909e, .value=0x9c, .type=IO_READ},
        {.addr=0x909f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x36c4, .a=0x1a, .x=0x46, .y=0x83, .sp=0xb7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x36c4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x36c5, .a=0x19, .x=0x46, .y=0x83, .sp=0xb7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x36c4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x36c4, .value=0x9c, .type=IO_READ},
        {.addr=0x36c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xf48a, .a=0x81, .x=0xac, .y=0x92, .sp=0xa9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xf48a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf48b, .a=0x80, .x=0xac, .y=0x92, .sp=0xa9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf48a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf48a, .value=0x9c, .type=IO_READ},
        {.addr=0xf48b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xcac5, .a=0xb4, .x=0x1d, .y=0x0d, .sp=0x66, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcac5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcac6, .a=0xb3, .x=0x1d, .y=0x0d, .sp=0x66, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcac5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcac5, .value=0x9c, .type=IO_READ},
        {.addr=0xcac6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x161e, .a=0x48, .x=0x96, .y=0x88, .sp=0x25, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x161e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x161f, .a=0x47, .x=0x96, .y=0x88, .sp=0x25, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x161e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x161e, .value=0x9c, .type=IO_READ},
        {.addr=0x161f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x1ccb, .a=0x5b, .x=0x55, .y=0xef, .sp=0x1e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1ccc, .a=0x5a, .x=0x55, .y=0xef, .sp=0x1e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1ccb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1ccb, .value=0x9c, .type=IO_READ},
        {.addr=0x1ccc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x3b59, .a=0x4e, .x=0x96, .y=0x5e, .sp=0x82, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x3b59, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b5a, .a=0x4d, .x=0x96, .y=0x5e, .sp=0x82, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3b59, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b59, .value=0x9c, .type=IO_READ},
        {.addr=0x3b5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x5a0e, .a=0x7d, .x=0xfe, .y=0xec, .sp=0x9e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5a0f, .a=0x7c, .x=0xfe, .y=0xec, .sp=0x9e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5a0e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5a0e, .value=0x9c, .type=IO_READ},
        {.addr=0x5a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xf1b5, .a=0xb8, .x=0x08, .y=0x86, .sp=0xaa, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf1b5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf1b6, .a=0xb7, .x=0x08, .y=0x86, .sp=0xaa, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf1b5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf1b5, .value=0x9c, .type=IO_READ},
        {.addr=0xf1b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xaab3, .a=0x28, .x=0x0e, .y=0xa9, .sp=0x6a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xaab3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaab4, .a=0x27, .x=0x0e, .y=0xa9, .sp=0x6a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xaab3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaab3, .value=0x9c, .type=IO_READ},
        {.addr=0xaab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xd50c, .a=0xb7, .x=0xa5, .y=0xf6, .sp=0x64, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd50c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd50d, .a=0xb6, .x=0xa5, .y=0xf6, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd50c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd50c, .value=0x9c, .type=IO_READ},
        {.addr=0xd50d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xf4f3, .a=0x11, .x=0x6e, .y=0xbd, .sp=0x3e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf4f3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf4f4, .a=0x10, .x=0x6e, .y=0xbd, .sp=0x3e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf4f3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf4f3, .value=0x9c, .type=IO_READ},
        {.addr=0xf4f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x6add, .a=0xd6, .x=0xb8, .y=0xe8, .sp=0xd6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6add, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ade, .a=0xd5, .x=0xb8, .y=0xe8, .sp=0xd6, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6add, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6add, .value=0x9c, .type=IO_READ},
        {.addr=0x6ade, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xfb79, .a=0x9c, .x=0xa9, .y=0x4b, .sp=0x0e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xfb79, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfb7a, .a=0x9b, .x=0xa9, .y=0x4b, .sp=0x0e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfb79, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfb79, .value=0x9c, .type=IO_READ},
        {.addr=0xfb7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x3481, .a=0x79, .x=0x9b, .y=0x6c, .sp=0x9d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3481, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3482, .a=0x78, .x=0x9b, .y=0x6c, .sp=0x9d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3481, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3481, .value=0x9c, .type=IO_READ},
        {.addr=0x3482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x662b, .a=0x78, .x=0xa8, .y=0x1f, .sp=0xae, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x662b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x662c, .a=0x77, .x=0xa8, .y=0x1f, .sp=0xae, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x662b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x662b, .value=0x9c, .type=IO_READ},
        {.addr=0x662c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc042, .a=0xc9, .x=0x65, .y=0x4d, .sp=0x64, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xc042, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc043, .a=0xc8, .x=0x65, .y=0x4d, .sp=0x64, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc042, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc042, .value=0x9c, .type=IO_READ},
        {.addr=0xc043, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x1d4f, .a=0x1c, .x=0x1c, .y=0x97, .sp=0x8d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d4f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1d50, .a=0x1b, .x=0x1c, .y=0x97, .sp=0x8d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1d4f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1d4f, .value=0x9c, .type=IO_READ},
        {.addr=0x1d50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xa11d, .a=0xf7, .x=0xd2, .y=0x0e, .sp=0xaa, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa11d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa11e, .a=0xf6, .x=0xd2, .y=0x0e, .sp=0xaa, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa11d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa11d, .value=0x9c, .type=IO_READ},
        {.addr=0xa11e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x2e00, .a=0x3f, .x=0xa1, .y=0x1a, .sp=0x82, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2e00, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2e01, .a=0x3e, .x=0xa1, .y=0x1a, .sp=0x82, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2e00, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2e00, .value=0x9c, .type=IO_READ},
        {.addr=0x2e01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x2451, .a=0xd4, .x=0x42, .y=0x2c, .sp=0x93, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x2451, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2452, .a=0xd3, .x=0x42, .y=0x2c, .sp=0x93, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2451, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2451, .value=0x9c, .type=IO_READ},
        {.addr=0x2452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x1c44, .a=0xb4, .x=0xfb, .y=0x11, .sp=0x01, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1c44, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1c45, .a=0xb3, .x=0xfb, .y=0x11, .sp=0x01, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1c44, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1c44, .value=0x9c, .type=IO_READ},
        {.addr=0x1c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0d3f, .a=0xb6, .x=0x7c, .y=0x0d, .sp=0x90, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0d3f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0d40, .a=0xb5, .x=0x7c, .y=0x0d, .sp=0x90, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0d3f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0d3f, .value=0x9c, .type=IO_READ},
        {.addr=0x0d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x21c2, .a=0x12, .x=0x61, .y=0x20, .sp=0x1f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x21c2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x21c3, .a=0x11, .x=0x61, .y=0x20, .sp=0x1f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x21c2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x21c2, .value=0x9c, .type=IO_READ},
        {.addr=0x21c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x5799, .a=0x08, .x=0x26, .y=0x53, .sp=0x42, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5799, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x579a, .a=0x07, .x=0x26, .y=0x53, .sp=0x42, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5799, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5799, .value=0x9c, .type=IO_READ},
        {.addr=0x579a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xc532, .a=0x85, .x=0x96, .y=0x04, .sp=0xd0, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xc532, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc533, .a=0x84, .x=0x96, .y=0x04, .sp=0xd0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc532, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc532, .value=0x9c, .type=IO_READ},
        {.addr=0xc533, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x2b0e, .a=0xb4, .x=0x41, .y=0xac, .sp=0xf3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b0f, .a=0xb3, .x=0x41, .y=0xac, .sp=0xf3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2b0e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b0e, .value=0x9c, .type=IO_READ},
        {.addr=0x2b0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xaaa1, .a=0xa5, .x=0xb1, .y=0xf6, .sp=0x83, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaaa2, .a=0xa4, .x=0xb1, .y=0xf6, .sp=0x83, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xaaa1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaaa1, .value=0x9c, .type=IO_READ},
        {.addr=0xaaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x23c4, .a=0xda, .x=0x12, .y=0xeb, .sp=0xb2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x23c4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x23c5, .a=0xd9, .x=0x12, .y=0xeb, .sp=0xb2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x23c4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x23c4, .value=0x9c, .type=IO_READ},
        {.addr=0x23c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xacfe, .a=0x04, .x=0x80, .y=0x55, .sp=0xe3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xacfe, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xacff, .a=0x03, .x=0x80, .y=0x55, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xacfe, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xacfe, .value=0x9c, .type=IO_READ},
        {.addr=0xacff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9cf1, .a=0xef, .x=0xa0, .y=0xf7, .sp=0x84, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9cf2, .a=0xee, .x=0xa0, .y=0xf7, .sp=0x84, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9cf1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9cf1, .value=0x9c, .type=IO_READ},
        {.addr=0x9cf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xb1d7, .a=0x5b, .x=0x82, .y=0xeb, .sp=0x34, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb1d8, .a=0x5a, .x=0x82, .y=0xeb, .sp=0x34, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb1d7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb1d7, .value=0x9c, .type=IO_READ},
        {.addr=0xb1d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x26ae, .a=0x45, .x=0xdf, .y=0x56, .sp=0x0c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x26ae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x26af, .a=0x44, .x=0xdf, .y=0x56, .sp=0x0c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x26ae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x26ae, .value=0x9c, .type=IO_READ},
        {.addr=0x26af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2b4b, .a=0x9f, .x=0x90, .y=0xea, .sp=0x97, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x2b4b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b4c, .a=0x9e, .x=0x90, .y=0xea, .sp=0x97, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2b4b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b4b, .value=0x9c, .type=IO_READ},
        {.addr=0x2b4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x03de, .a=0x50, .x=0x77, .y=0x39, .sp=0xbf, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x03de, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x03df, .a=0x4f, .x=0x77, .y=0x39, .sp=0xbf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x03de, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x03de, .value=0x9c, .type=IO_READ},
        {.addr=0x03df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x74a1, .a=0x20, .x=0x08, .y=0x7f, .sp=0xf1, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x74a1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x74a2, .a=0x1f, .x=0x08, .y=0x7f, .sp=0xf1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x74a1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x74a1, .value=0x9c, .type=IO_READ},
        {.addr=0x74a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x1c94, .a=0x7e, .x=0x57, .y=0x0b, .sp=0x8c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1c94, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1c95, .a=0x7d, .x=0x57, .y=0x0b, .sp=0x8c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1c94, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1c94, .value=0x9c, .type=IO_READ},
        {.addr=0x1c95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x278e, .a=0x17, .x=0x17, .y=0xbf, .sp=0x11, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x278e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x278f, .a=0x16, .x=0x17, .y=0xbf, .sp=0x11, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x278e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x278e, .value=0x9c, .type=IO_READ},
        {.addr=0x278f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x0960, .a=0x76, .x=0x6d, .y=0xbf, .sp=0xaa, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0960, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0961, .a=0x75, .x=0x6d, .y=0xbf, .sp=0xaa, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0960, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0960, .value=0x9c, .type=IO_READ},
        {.addr=0x0961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xaf1c, .a=0x21, .x=0x4d, .y=0x9c, .sp=0x12, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf1c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaf1d, .a=0x20, .x=0x4d, .y=0x9c, .sp=0x12, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xaf1c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaf1c, .value=0x9c, .type=IO_READ},
        {.addr=0xaf1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xdf36, .a=0x5a, .x=0x59, .y=0xa4, .sp=0xbe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdf36, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdf37, .a=0x59, .x=0x59, .y=0xa4, .sp=0xbe, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdf36, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdf36, .value=0x9c, .type=IO_READ},
        {.addr=0xdf37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xe845, .a=0x7a, .x=0x6c, .y=0x78, .sp=0xbc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe845, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe846, .a=0x79, .x=0x6c, .y=0x78, .sp=0xbc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe845, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe845, .value=0x9c, .type=IO_READ},
        {.addr=0xe846, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xa1e1, .a=0x47, .x=0x21, .y=0x0f, .sp=0xf7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa1e2, .a=0x46, .x=0x21, .y=0x0f, .sp=0xf7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa1e1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa1e1, .value=0x9c, .type=IO_READ},
        {.addr=0xa1e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x4c1b, .a=0x1a, .x=0x8d, .y=0x8e, .sp=0x8e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x4c1b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c1c, .a=0x19, .x=0x8d, .y=0x8e, .sp=0x8e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4c1b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c1b, .value=0x9c, .type=IO_READ},
        {.addr=0x4c1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x1b43, .a=0xad, .x=0x13, .y=0x2b, .sp=0x3d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1b43, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1b44, .a=0xac, .x=0x13, .y=0x2b, .sp=0x3d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1b43, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b43, .value=0x9c, .type=IO_READ},
        {.addr=0x1b44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xe3b8, .a=0x27, .x=0xc0, .y=0xd9, .sp=0xe7, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe3b8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe3b9, .a=0x26, .x=0xc0, .y=0xd9, .sp=0xe7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe3b8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe3b8, .value=0x9c, .type=IO_READ},
        {.addr=0xe3b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xec78, .a=0x14, .x=0xf2, .y=0xdc, .sp=0xcf, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xec78, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xec79, .a=0x13, .x=0xf2, .y=0xdc, .sp=0xcf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xec78, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xec78, .value=0x9c, .type=IO_READ},
        {.addr=0xec79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xe0d2, .a=0xac, .x=0xe5, .y=0x71, .sp=0x07, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe0d3, .a=0xab, .x=0xe5, .y=0x71, .sp=0x07, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe0d2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe0d2, .value=0x9c, .type=IO_READ},
        {.addr=0xe0d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6574, .a=0xc4, .x=0x90, .y=0x0c, .sp=0x46, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6574, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6575, .a=0xc3, .x=0x90, .y=0x0c, .sp=0x46, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6574, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6574, .value=0x9c, .type=IO_READ},
        {.addr=0x6575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xf053, .a=0x05, .x=0x8e, .y=0x2c, .sp=0xce, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf053, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf054, .a=0x04, .x=0x8e, .y=0x2c, .sp=0xce, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf053, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf053, .value=0x9c, .type=IO_READ},
        {.addr=0xf054, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xe2d2, .a=0xae, .x=0x4c, .y=0xcf, .sp=0xe4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe2d3, .a=0xad, .x=0x4c, .y=0xcf, .sp=0xe4, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe2d2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe2d2, .value=0x9c, .type=IO_READ},
        {.addr=0xe2d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x92ba, .a=0xf6, .x=0xf4, .y=0x82, .sp=0xb9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x92ba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x92bb, .a=0xf5, .x=0xf4, .y=0x82, .sp=0xb9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x92ba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x92ba, .value=0x9c, .type=IO_READ},
        {.addr=0x92bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x68b0, .a=0xc0, .x=0x12, .y=0x01, .sp=0x26, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x68b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x68b1, .a=0xbf, .x=0x12, .y=0x01, .sp=0x26, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x68b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x68b0, .value=0x9c, .type=IO_READ},
        {.addr=0x68b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x11ce, .a=0xf9, .x=0xe0, .y=0xa3, .sp=0xc9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x11ce, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x11cf, .a=0xf8, .x=0xe0, .y=0xa3, .sp=0xc9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x11ce, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x11ce, .value=0x9c, .type=IO_READ},
        {.addr=0x11cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x361e, .a=0xb3, .x=0x40, .y=0xfc, .sp=0x9f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x361e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x361f, .a=0xb2, .x=0x40, .y=0xfc, .sp=0x9f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x361e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x361e, .value=0x9c, .type=IO_READ},
        {.addr=0x361f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0200) {
    const struct CPU_State initial_cpu = {.pc=0x5f20, .a=0x63, .x=0x59, .y=0x5d, .sp=0x6d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5f20, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5f21, .a=0x62, .x=0x59, .y=0x5d, .sp=0x6d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5f20, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5f20, .value=0x9c, .type=IO_READ},
        {.addr=0x5f21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0201) {
    const struct CPU_State initial_cpu = {.pc=0x45b9, .a=0x63, .x=0x16, .y=0x2a, .sp=0x89, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x45b9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x45ba, .a=0x62, .x=0x16, .y=0x2a, .sp=0x89, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x45b9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x45b9, .value=0x9c, .type=IO_READ},
        {.addr=0x45ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0202) {
    const struct CPU_State initial_cpu = {.pc=0xac69, .a=0xfd, .x=0xf4, .y=0xbe, .sp=0x37, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xac69, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xac6a, .a=0xfc, .x=0xf4, .y=0xbe, .sp=0x37, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xac69, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xac69, .value=0x9c, .type=IO_READ},
        {.addr=0xac6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0203) {
    const struct CPU_State initial_cpu = {.pc=0x736a, .a=0x10, .x=0xcf, .y=0x5a, .sp=0x4f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x736a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x736b, .a=0x0f, .x=0xcf, .y=0x5a, .sp=0x4f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x736a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x736a, .value=0x9c, .type=IO_READ},
        {.addr=0x736b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0204) {
    const struct CPU_State initial_cpu = {.pc=0xbad8, .a=0x45, .x=0x4b, .y=0x86, .sp=0x61, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xbad8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbad9, .a=0x44, .x=0x4b, .y=0x86, .sp=0x61, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xbad8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbad8, .value=0x9c, .type=IO_READ},
        {.addr=0xbad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0205) {
    const struct CPU_State initial_cpu = {.pc=0xa20d, .a=0x6f, .x=0xc5, .y=0x68, .sp=0x0c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa20d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa20e, .a=0x6e, .x=0xc5, .y=0x68, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa20d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa20d, .value=0x9c, .type=IO_READ},
        {.addr=0xa20e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0206) {
    const struct CPU_State initial_cpu = {.pc=0x7ff8, .a=0x81, .x=0x5c, .y=0x52, .sp=0x70, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7ff9, .a=0x80, .x=0x5c, .y=0x52, .sp=0x70, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7ff8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7ff8, .value=0x9c, .type=IO_READ},
        {.addr=0x7ff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb515, .a=0x1e, .x=0x58, .y=0x65, .sp=0x7d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb515, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb516, .a=0x1d, .x=0x58, .y=0x65, .sp=0x7d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb515, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb515, .value=0x9c, .type=IO_READ},
        {.addr=0xb516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0208) {
    const struct CPU_State initial_cpu = {.pc=0x1677, .a=0xe1, .x=0xf3, .y=0x6c, .sp=0x06, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1677, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1678, .a=0xe0, .x=0xf3, .y=0x6c, .sp=0x06, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1677, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1677, .value=0x9c, .type=IO_READ},
        {.addr=0x1678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0209) {
    const struct CPU_State initial_cpu = {.pc=0xca45, .a=0x58, .x=0x54, .y=0x8d, .sp=0x89, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xca45, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xca46, .a=0x57, .x=0x54, .y=0x8d, .sp=0x89, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xca45, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xca45, .value=0x9c, .type=IO_READ},
        {.addr=0xca46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020A) {
    const struct CPU_State initial_cpu = {.pc=0x6dd8, .a=0x88, .x=0x4d, .y=0x57, .sp=0xaf, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6dd9, .a=0x87, .x=0x4d, .y=0x57, .sp=0xaf, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6dd8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6dd8, .value=0x9c, .type=IO_READ},
        {.addr=0x6dd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020B) {
    const struct CPU_State initial_cpu = {.pc=0x84c7, .a=0x45, .x=0xb1, .y=0xe2, .sp=0x3b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x84c7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x84c8, .a=0x44, .x=0xb1, .y=0xe2, .sp=0x3b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x84c7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x84c7, .value=0x9c, .type=IO_READ},
        {.addr=0x84c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020C) {
    const struct CPU_State initial_cpu = {.pc=0x32ba, .a=0x18, .x=0x3c, .y=0xed, .sp=0x5c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x32ba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x32bb, .a=0x17, .x=0x3c, .y=0xed, .sp=0x5c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x32ba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x32ba, .value=0x9c, .type=IO_READ},
        {.addr=0x32bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4750, .a=0xac, .x=0xe5, .y=0x81, .sp=0xc8, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4750, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4751, .a=0xab, .x=0xe5, .y=0x81, .sp=0xc8, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4750, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4750, .value=0x9c, .type=IO_READ},
        {.addr=0x4751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020E) {
    const struct CPU_State initial_cpu = {.pc=0xe317, .a=0xb1, .x=0x11, .y=0x82, .sp=0x87, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe317, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe318, .a=0xb0, .x=0x11, .y=0x82, .sp=0x87, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe317, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe317, .value=0x9c, .type=IO_READ},
        {.addr=0xe318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_020F) {
    const struct CPU_State initial_cpu = {.pc=0xdff9, .a=0x6e, .x=0x31, .y=0x10, .sp=0xc6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdff9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdffa, .a=0x6d, .x=0x31, .y=0x10, .sp=0xc6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xdff9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdff9, .value=0x9c, .type=IO_READ},
        {.addr=0xdffa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0210) {
    const struct CPU_State initial_cpu = {.pc=0xe75f, .a=0xc1, .x=0xa2, .y=0xd3, .sp=0xcb, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xe75f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe760, .a=0xc0, .x=0xa2, .y=0xd3, .sp=0xcb, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe75f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe75f, .value=0x9c, .type=IO_READ},
        {.addr=0xe760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0211) {
    const struct CPU_State initial_cpu = {.pc=0x8f7d, .a=0x3f, .x=0x60, .y=0x7f, .sp=0x8d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8f7e, .a=0x3e, .x=0x60, .y=0x7f, .sp=0x8d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8f7d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8f7d, .value=0x9c, .type=IO_READ},
        {.addr=0x8f7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0212) {
    const struct CPU_State initial_cpu = {.pc=0x6a06, .a=0x7d, .x=0x05, .y=0xc5, .sp=0xd9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a06, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6a07, .a=0x7c, .x=0x05, .y=0xc5, .sp=0xd9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6a06, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6a06, .value=0x9c, .type=IO_READ},
        {.addr=0x6a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0213) {
    const struct CPU_State initial_cpu = {.pc=0x8e06, .a=0x71, .x=0x65, .y=0x88, .sp=0xa1, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8e06, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8e07, .a=0x70, .x=0x65, .y=0x88, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8e06, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8e06, .value=0x9c, .type=IO_READ},
        {.addr=0x8e07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0214) {
    const struct CPU_State initial_cpu = {.pc=0xc257, .a=0xb4, .x=0xd3, .y=0x9e, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc257, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc258, .a=0xb3, .x=0xd3, .y=0x9e, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc257, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc257, .value=0x9c, .type=IO_READ},
        {.addr=0xc258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0215) {
    const struct CPU_State initial_cpu = {.pc=0xbd24, .a=0xb1, .x=0x90, .y=0xce, .sp=0xdc, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd24, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbd25, .a=0xb0, .x=0x90, .y=0xce, .sp=0xdc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbd24, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbd24, .value=0x9c, .type=IO_READ},
        {.addr=0xbd25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0216) {
    const struct CPU_State initial_cpu = {.pc=0x460c, .a=0x83, .x=0x64, .y=0xc8, .sp=0xe5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x460c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x460d, .a=0x82, .x=0x64, .y=0xc8, .sp=0xe5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x460c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x460c, .value=0x9c, .type=IO_READ},
        {.addr=0x460d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0217) {
    const struct CPU_State initial_cpu = {.pc=0x90aa, .a=0xce, .x=0x00, .y=0x0d, .sp=0x18, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x90aa, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x90ab, .a=0xcd, .x=0x00, .y=0x0d, .sp=0x18, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x90aa, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x90aa, .value=0x9c, .type=IO_READ},
        {.addr=0x90ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0218) {
    const struct CPU_State initial_cpu = {.pc=0x5147, .a=0xc7, .x=0x4f, .y=0xa9, .sp=0x17, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5147, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5148, .a=0xc6, .x=0x4f, .y=0xa9, .sp=0x17, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5147, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5147, .value=0x9c, .type=IO_READ},
        {.addr=0x5148, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0219) {
    const struct CPU_State initial_cpu = {.pc=0xab0d, .a=0x3d, .x=0xec, .y=0xa4, .sp=0x12, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xab0d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xab0e, .a=0x3c, .x=0xec, .y=0xa4, .sp=0x12, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xab0d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xab0d, .value=0x9c, .type=IO_READ},
        {.addr=0xab0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021A) {
    const struct CPU_State initial_cpu = {.pc=0x57cf, .a=0x32, .x=0xd6, .y=0x1c, .sp=0x8f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x57cf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x57d0, .a=0x31, .x=0xd6, .y=0x1c, .sp=0x8f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x57cf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x57cf, .value=0x9c, .type=IO_READ},
        {.addr=0x57d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021B) {
    const struct CPU_State initial_cpu = {.pc=0x0188, .a=0x5d, .x=0xc1, .y=0xe9, .sp=0x78, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0189, .a=0x5c, .x=0xc1, .y=0xe9, .sp=0x78, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0188, .value=0x9c, .type=IO_READ},
        {.addr=0x0189, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021C) {
    const struct CPU_State initial_cpu = {.pc=0xb548, .a=0xa7, .x=0x48, .y=0x07, .sp=0x65, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb548, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb549, .a=0xa6, .x=0x48, .y=0x07, .sp=0x65, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb548, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb548, .value=0x9c, .type=IO_READ},
        {.addr=0xb549, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021D) {
    const struct CPU_State initial_cpu = {.pc=0x2cff, .a=0x7a, .x=0xdd, .y=0xa1, .sp=0x82, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2cff, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d00, .a=0x79, .x=0xdd, .y=0xa1, .sp=0x82, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2cff, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2cff, .value=0x9c, .type=IO_READ},
        {.addr=0x2d00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7bed, .a=0x1a, .x=0x0a, .y=0x83, .sp=0xff, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7bed, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7bee, .a=0x19, .x=0x0a, .y=0x83, .sp=0xff, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7bed, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7bed, .value=0x9c, .type=IO_READ},
        {.addr=0x7bee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd613, .a=0xa9, .x=0xdc, .y=0xea, .sp=0x69, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xd613, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd614, .a=0xa8, .x=0xdc, .y=0xea, .sp=0x69, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd613, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd613, .value=0x9c, .type=IO_READ},
        {.addr=0xd614, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0220) {
    const struct CPU_State initial_cpu = {.pc=0x415a, .a=0x31, .x=0x16, .y=0xcc, .sp=0xa3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x415a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x415b, .a=0x30, .x=0x16, .y=0xcc, .sp=0xa3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x415a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x415a, .value=0x9c, .type=IO_READ},
        {.addr=0x415b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0221) {
    const struct CPU_State initial_cpu = {.pc=0x0410, .a=0xfc, .x=0x01, .y=0xf5, .sp=0xe6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0410, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0411, .a=0xfb, .x=0x01, .y=0xf5, .sp=0xe6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0410, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0410, .value=0x9c, .type=IO_READ},
        {.addr=0x0411, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0222) {
    const struct CPU_State initial_cpu = {.pc=0x8b40, .a=0x6e, .x=0x2b, .y=0x32, .sp=0x84, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8b40, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8b41, .a=0x6d, .x=0x2b, .y=0x32, .sp=0x84, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8b40, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8b40, .value=0x9c, .type=IO_READ},
        {.addr=0x8b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0223) {
    const struct CPU_State initial_cpu = {.pc=0xcb33, .a=0x3f, .x=0xd2, .y=0x88, .sp=0x37, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb33, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb34, .a=0x3e, .x=0xd2, .y=0x88, .sp=0x37, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xcb33, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb33, .value=0x9c, .type=IO_READ},
        {.addr=0xcb34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0224) {
    const struct CPU_State initial_cpu = {.pc=0xab14, .a=0x3e, .x=0xa8, .y=0x1c, .sp=0xee, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xab14, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xab15, .a=0x3d, .x=0xa8, .y=0x1c, .sp=0xee, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xab14, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xab14, .value=0x9c, .type=IO_READ},
        {.addr=0xab15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0225) {
    const struct CPU_State initial_cpu = {.pc=0x43c0, .a=0xa2, .x=0xee, .y=0xae, .sp=0x4f, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x43c0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x43c1, .a=0xa1, .x=0xee, .y=0xae, .sp=0x4f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x43c0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x43c0, .value=0x9c, .type=IO_READ},
        {.addr=0x43c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0226) {
    const struct CPU_State initial_cpu = {.pc=0xd27a, .a=0x8b, .x=0x3b, .y=0x04, .sp=0x80, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd27a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd27b, .a=0x8a, .x=0x3b, .y=0x04, .sp=0x80, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd27a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd27a, .value=0x9c, .type=IO_READ},
        {.addr=0xd27b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0227) {
    const struct CPU_State initial_cpu = {.pc=0x66e1, .a=0x7c, .x=0xb1, .y=0x0f, .sp=0x96, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x66e1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x66e2, .a=0x7b, .x=0xb1, .y=0x0f, .sp=0x96, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x66e1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x66e1, .value=0x9c, .type=IO_READ},
        {.addr=0x66e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0108, .a=0x9d, .x=0x30, .y=0x8d, .sp=0xe5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0109, .a=0x9c, .x=0x30, .y=0x8d, .sp=0xe5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0108, .value=0x9c, .type=IO_READ},
        {.addr=0x0109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0229) {
    const struct CPU_State initial_cpu = {.pc=0xee26, .a=0x74, .x=0x3c, .y=0x02, .sp=0x30, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xee26, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee27, .a=0x73, .x=0x3c, .y=0x02, .sp=0x30, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xee26, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee26, .value=0x9c, .type=IO_READ},
        {.addr=0xee27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022A) {
    const struct CPU_State initial_cpu = {.pc=0x63d6, .a=0xb6, .x=0xf2, .y=0x52, .sp=0x79, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x63d6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x63d7, .a=0xb5, .x=0xf2, .y=0x52, .sp=0x79, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x63d6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x63d6, .value=0x9c, .type=IO_READ},
        {.addr=0x63d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022B) {
    const struct CPU_State initial_cpu = {.pc=0x937d, .a=0x7e, .x=0x48, .y=0x43, .sp=0xd4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x937d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x937e, .a=0x7d, .x=0x48, .y=0x43, .sp=0xd4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x937d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x937d, .value=0x9c, .type=IO_READ},
        {.addr=0x937e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022C) {
    const struct CPU_State initial_cpu = {.pc=0xda4b, .a=0x11, .x=0x39, .y=0xe8, .sp=0xe5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xda4b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xda4c, .a=0x10, .x=0x39, .y=0xe8, .sp=0xe5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xda4b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xda4b, .value=0x9c, .type=IO_READ},
        {.addr=0xda4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022D) {
    const struct CPU_State initial_cpu = {.pc=0xfa01, .a=0x3b, .x=0xad, .y=0x00, .sp=0xf5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xfa01, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfa02, .a=0x3a, .x=0xad, .y=0x00, .sp=0xf5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfa01, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfa01, .value=0x9c, .type=IO_READ},
        {.addr=0xfa02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022E) {
    const struct CPU_State initial_cpu = {.pc=0x8a59, .a=0x8d, .x=0x9e, .y=0x9d, .sp=0xbe, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x8a59, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8a5a, .a=0x8c, .x=0x9e, .y=0x9d, .sp=0xbe, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8a59, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8a59, .value=0x9c, .type=IO_READ},
        {.addr=0x8a5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_022F) {
    const struct CPU_State initial_cpu = {.pc=0x6326, .a=0x72, .x=0x2f, .y=0x85, .sp=0x7f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x6326, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6327, .a=0x71, .x=0x2f, .y=0x85, .sp=0x7f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6326, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6326, .value=0x9c, .type=IO_READ},
        {.addr=0x6327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0230) {
    const struct CPU_State initial_cpu = {.pc=0x4c9e, .a=0xb9, .x=0x83, .y=0xed, .sp=0xc7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c9f, .a=0xb8, .x=0x83, .y=0xed, .sp=0xc7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4c9e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c9e, .value=0x9c, .type=IO_READ},
        {.addr=0x4c9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0231) {
    const struct CPU_State initial_cpu = {.pc=0x86b1, .a=0x99, .x=0xd8, .y=0xac, .sp=0xbb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x86b1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x86b2, .a=0x98, .x=0xd8, .y=0xac, .sp=0xbb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x86b1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x86b1, .value=0x9c, .type=IO_READ},
        {.addr=0x86b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0232) {
    const struct CPU_State initial_cpu = {.pc=0x43e8, .a=0x90, .x=0xed, .y=0xaa, .sp=0xa5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x43e8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x43e9, .a=0x8f, .x=0xed, .y=0xaa, .sp=0xa5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x43e8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x43e8, .value=0x9c, .type=IO_READ},
        {.addr=0x43e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0233) {
    const struct CPU_State initial_cpu = {.pc=0x5333, .a=0x47, .x=0x7e, .y=0xab, .sp=0x77, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5333, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5334, .a=0x46, .x=0x7e, .y=0xab, .sp=0x77, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5333, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5333, .value=0x9c, .type=IO_READ},
        {.addr=0x5334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd5b7, .a=0x0b, .x=0x63, .y=0xb6, .sp=0x8e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd5b8, .a=0x0a, .x=0x63, .y=0xb6, .sp=0x8e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd5b7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd5b7, .value=0x9c, .type=IO_READ},
        {.addr=0xd5b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0235) {
    const struct CPU_State initial_cpu = {.pc=0x1fe7, .a=0x0d, .x=0xfd, .y=0x94, .sp=0x75, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1fe8, .a=0x0c, .x=0xfd, .y=0x94, .sp=0x75, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1fe7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1fe7, .value=0x9c, .type=IO_READ},
        {.addr=0x1fe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0236) {
    const struct CPU_State initial_cpu = {.pc=0xa40f, .a=0xf0, .x=0xc9, .y=0x1f, .sp=0x0f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa40f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa410, .a=0xef, .x=0xc9, .y=0x1f, .sp=0x0f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa40f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa40f, .value=0x9c, .type=IO_READ},
        {.addr=0xa410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6a5f, .a=0x08, .x=0xcb, .y=0x03, .sp=0x00, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6a5f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6a60, .a=0x07, .x=0xcb, .y=0x03, .sp=0x00, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6a5f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6a5f, .value=0x9c, .type=IO_READ},
        {.addr=0x6a60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0238) {
    const struct CPU_State initial_cpu = {.pc=0x3365, .a=0xf1, .x=0xb3, .y=0x45, .sp=0xd6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3365, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3366, .a=0xf0, .x=0xb3, .y=0x45, .sp=0xd6, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3365, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3365, .value=0x9c, .type=IO_READ},
        {.addr=0x3366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0239) {
    const struct CPU_State initial_cpu = {.pc=0x78e4, .a=0x89, .x=0x74, .y=0x76, .sp=0xb2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x78e4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x78e5, .a=0x88, .x=0x74, .y=0x76, .sp=0xb2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x78e4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x78e4, .value=0x9c, .type=IO_READ},
        {.addr=0x78e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023A) {
    const struct CPU_State initial_cpu = {.pc=0xd43e, .a=0xfd, .x=0xc5, .y=0x6e, .sp=0x30, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd43e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd43f, .a=0xfc, .x=0xc5, .y=0x6e, .sp=0x30, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd43e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd43e, .value=0x9c, .type=IO_READ},
        {.addr=0xd43f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023B) {
    const struct CPU_State initial_cpu = {.pc=0xf9d0, .a=0x4b, .x=0xb0, .y=0x0f, .sp=0xf8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf9d1, .a=0x4a, .x=0xb0, .y=0x0f, .sp=0xf8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf9d0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf9d0, .value=0x9c, .type=IO_READ},
        {.addr=0xf9d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023C) {
    const struct CPU_State initial_cpu = {.pc=0xe049, .a=0xd7, .x=0xd3, .y=0x6f, .sp=0x49, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe049, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe04a, .a=0xd6, .x=0xd3, .y=0x6f, .sp=0x49, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe049, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe049, .value=0x9c, .type=IO_READ},
        {.addr=0xe04a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023D) {
    const struct CPU_State initial_cpu = {.pc=0x7af3, .a=0xea, .x=0xee, .y=0x84, .sp=0xad, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7af3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7af4, .a=0xe9, .x=0xee, .y=0x84, .sp=0xad, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7af3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7af3, .value=0x9c, .type=IO_READ},
        {.addr=0x7af4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023E) {
    const struct CPU_State initial_cpu = {.pc=0x3d7f, .a=0x8e, .x=0x3b, .y=0xed, .sp=0x62, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d7f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d80, .a=0x8d, .x=0x3b, .y=0xed, .sp=0x62, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3d7f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d7f, .value=0x9c, .type=IO_READ},
        {.addr=0x3d80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_023F) {
    const struct CPU_State initial_cpu = {.pc=0x3c60, .a=0x9d, .x=0x11, .y=0x87, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3c60, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3c61, .a=0x9c, .x=0x11, .y=0x87, .sp=0x4b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3c60, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3c60, .value=0x9c, .type=IO_READ},
        {.addr=0x3c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0240) {
    const struct CPU_State initial_cpu = {.pc=0xe68c, .a=0x21, .x=0x04, .y=0x22, .sp=0x13, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe68c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe68d, .a=0x20, .x=0x04, .y=0x22, .sp=0x13, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe68c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe68c, .value=0x9c, .type=IO_READ},
        {.addr=0xe68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0241) {
    const struct CPU_State initial_cpu = {.pc=0x8cc1, .a=0x1f, .x=0xe3, .y=0xea, .sp=0xd4, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8cc2, .a=0x1e, .x=0xe3, .y=0xea, .sp=0xd4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8cc1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8cc1, .value=0x9c, .type=IO_READ},
        {.addr=0x8cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0242) {
    const struct CPU_State initial_cpu = {.pc=0xc097, .a=0xcc, .x=0xe2, .y=0xc0, .sp=0xc4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xc097, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc098, .a=0xcb, .x=0xe2, .y=0xc0, .sp=0xc4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc097, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc097, .value=0x9c, .type=IO_READ},
        {.addr=0xc098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0243) {
    const struct CPU_State initial_cpu = {.pc=0x5e90, .a=0x66, .x=0x94, .y=0x47, .sp=0x7a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5e90, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5e91, .a=0x65, .x=0x94, .y=0x47, .sp=0x7a, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5e90, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5e90, .value=0x9c, .type=IO_READ},
        {.addr=0x5e91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0244) {
    const struct CPU_State initial_cpu = {.pc=0x99de, .a=0x25, .x=0x8c, .y=0x4a, .sp=0x62, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x99de, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x99df, .a=0x24, .x=0x8c, .y=0x4a, .sp=0x62, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x99de, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x99de, .value=0x9c, .type=IO_READ},
        {.addr=0x99df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0245) {
    const struct CPU_State initial_cpu = {.pc=0x685e, .a=0xe6, .x=0x0e, .y=0x21, .sp=0xef, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x685e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x685f, .a=0xe5, .x=0x0e, .y=0x21, .sp=0xef, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x685e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x685e, .value=0x9c, .type=IO_READ},
        {.addr=0x685f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0246) {
    const struct CPU_State initial_cpu = {.pc=0xc18f, .a=0x97, .x=0x93, .y=0xb3, .sp=0x23, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc18f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc190, .a=0x96, .x=0x93, .y=0xb3, .sp=0x23, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc18f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc18f, .value=0x9c, .type=IO_READ},
        {.addr=0xc190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0247) {
    const struct CPU_State initial_cpu = {.pc=0xac90, .a=0x80, .x=0xed, .y=0x49, .sp=0x8c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xac90, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xac91, .a=0x7f, .x=0xed, .y=0x49, .sp=0x8c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xac90, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xac90, .value=0x9c, .type=IO_READ},
        {.addr=0xac91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0248) {
    const struct CPU_State initial_cpu = {.pc=0xf252, .a=0xd2, .x=0xe8, .y=0x9c, .sp=0xbf, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf252, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf253, .a=0xd1, .x=0xe8, .y=0x9c, .sp=0xbf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf252, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf252, .value=0x9c, .type=IO_READ},
        {.addr=0xf253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0249) {
    const struct CPU_State initial_cpu = {.pc=0x9ca2, .a=0x72, .x=0x7a, .y=0x17, .sp=0xa4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9ca2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9ca3, .a=0x71, .x=0x7a, .y=0x17, .sp=0xa4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9ca2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9ca2, .value=0x9c, .type=IO_READ},
        {.addr=0x9ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024A) {
    const struct CPU_State initial_cpu = {.pc=0xd9ea, .a=0x3f, .x=0x18, .y=0x40, .sp=0x59, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd9eb, .a=0x3e, .x=0x18, .y=0x40, .sp=0x59, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd9ea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd9ea, .value=0x9c, .type=IO_READ},
        {.addr=0xd9eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024B) {
    const struct CPU_State initial_cpu = {.pc=0x8386, .a=0x4e, .x=0x66, .y=0xff, .sp=0x2c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8386, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8387, .a=0x4d, .x=0x66, .y=0xff, .sp=0x2c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8386, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8386, .value=0x9c, .type=IO_READ},
        {.addr=0x8387, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024C) {
    const struct CPU_State initial_cpu = {.pc=0xcb66, .a=0x8f, .x=0x96, .y=0x2b, .sp=0x6d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xcb66, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb67, .a=0x8e, .x=0x96, .y=0x2b, .sp=0x6d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcb66, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb66, .value=0x9c, .type=IO_READ},
        {.addr=0xcb67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024D) {
    const struct CPU_State initial_cpu = {.pc=0x476b, .a=0xd2, .x=0x07, .y=0x6b, .sp=0x41, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x476b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x476c, .a=0xd1, .x=0x07, .y=0x6b, .sp=0x41, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x476b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x476b, .value=0x9c, .type=IO_READ},
        {.addr=0x476c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024E) {
    const struct CPU_State initial_cpu = {.pc=0x9b1d, .a=0x20, .x=0xcc, .y=0xd2, .sp=0xd7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9b1e, .a=0x1f, .x=0xcc, .y=0xd2, .sp=0xd7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9b1d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9b1d, .value=0x9c, .type=IO_READ},
        {.addr=0x9b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_024F) {
    const struct CPU_State initial_cpu = {.pc=0xfc7f, .a=0x0b, .x=0xfb, .y=0x01, .sp=0x77, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xfc7f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfc80, .a=0x0a, .x=0xfb, .y=0x01, .sp=0x77, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xfc7f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfc7f, .value=0x9c, .type=IO_READ},
        {.addr=0xfc80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0250) {
    const struct CPU_State initial_cpu = {.pc=0x205f, .a=0xe8, .x=0xc2, .y=0x50, .sp=0x1d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x205f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2060, .a=0xe7, .x=0xc2, .y=0x50, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x205f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x205f, .value=0x9c, .type=IO_READ},
        {.addr=0x2060, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0251) {
    const struct CPU_State initial_cpu = {.pc=0x1dcd, .a=0x38, .x=0xe4, .y=0x2a, .sp=0x06, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x1dcd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1dce, .a=0x37, .x=0xe4, .y=0x2a, .sp=0x06, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1dcd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1dcd, .value=0x9c, .type=IO_READ},
        {.addr=0x1dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0252) {
    const struct CPU_State initial_cpu = {.pc=0x1654, .a=0x40, .x=0x14, .y=0x53, .sp=0x35, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1654, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1655, .a=0x3f, .x=0x14, .y=0x53, .sp=0x35, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1654, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1654, .value=0x9c, .type=IO_READ},
        {.addr=0x1655, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf076, .a=0xfc, .x=0x17, .y=0x5c, .sp=0xee, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xf076, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf077, .a=0xfb, .x=0x17, .y=0x5c, .sp=0xee, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf076, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf076, .value=0x9c, .type=IO_READ},
        {.addr=0xf077, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0254) {
    const struct CPU_State initial_cpu = {.pc=0x2d98, .a=0xc6, .x=0x41, .y=0x84, .sp=0xad, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d98, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d99, .a=0xc5, .x=0x41, .y=0x84, .sp=0xad, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2d98, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2d98, .value=0x9c, .type=IO_READ},
        {.addr=0x2d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0255) {
    const struct CPU_State initial_cpu = {.pc=0x5f40, .a=0x66, .x=0x68, .y=0x67, .sp=0x0c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f40, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5f41, .a=0x65, .x=0x68, .y=0x67, .sp=0x0c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5f40, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5f40, .value=0x9c, .type=IO_READ},
        {.addr=0x5f41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0256) {
    const struct CPU_State initial_cpu = {.pc=0x725f, .a=0xbd, .x=0xa9, .y=0xa7, .sp=0xb2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x725f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7260, .a=0xbc, .x=0xa9, .y=0xa7, .sp=0xb2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x725f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x725f, .value=0x9c, .type=IO_READ},
        {.addr=0x7260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0257) {
    const struct CPU_State initial_cpu = {.pc=0x3557, .a=0x82, .x=0xb6, .y=0xd5, .sp=0xa0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3557, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3558, .a=0x81, .x=0xb6, .y=0xd5, .sp=0xa0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3557, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3557, .value=0x9c, .type=IO_READ},
        {.addr=0x3558, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0258) {
    const struct CPU_State initial_cpu = {.pc=0x7a26, .a=0x66, .x=0x43, .y=0x33, .sp=0x68, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7a26, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7a27, .a=0x65, .x=0x43, .y=0x33, .sp=0x68, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7a26, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7a26, .value=0x9c, .type=IO_READ},
        {.addr=0x7a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9af0, .a=0xf6, .x=0xb9, .y=0x52, .sp=0xde, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9af0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9af1, .a=0xf5, .x=0xb9, .y=0x52, .sp=0xde, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9af0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9af0, .value=0x9c, .type=IO_READ},
        {.addr=0x9af1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025A) {
    const struct CPU_State initial_cpu = {.pc=0xa381, .a=0x8c, .x=0x43, .y=0xff, .sp=0x20, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa381, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa382, .a=0x8b, .x=0x43, .y=0xff, .sp=0x20, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa381, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa381, .value=0x9c, .type=IO_READ},
        {.addr=0xa382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025B) {
    const struct CPU_State initial_cpu = {.pc=0x33c2, .a=0xec, .x=0xcf, .y=0x1a, .sp=0x5b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x33c2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x33c3, .a=0xeb, .x=0xcf, .y=0x1a, .sp=0x5b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x33c2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x33c2, .value=0x9c, .type=IO_READ},
        {.addr=0x33c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb7a9, .a=0x81, .x=0x8b, .y=0x14, .sp=0x28, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb7aa, .a=0x80, .x=0x8b, .y=0x14, .sp=0x28, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb7a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb7a9, .value=0x9c, .type=IO_READ},
        {.addr=0xb7aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025D) {
    const struct CPU_State initial_cpu = {.pc=0xa1ea, .a=0x48, .x=0xe5, .y=0x6e, .sp=0x3a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa1ea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa1eb, .a=0x47, .x=0xe5, .y=0x6e, .sp=0x3a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa1ea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa1ea, .value=0x9c, .type=IO_READ},
        {.addr=0xa1eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025E) {
    const struct CPU_State initial_cpu = {.pc=0x670a, .a=0xc2, .x=0x66, .y=0xbb, .sp=0x87, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x670a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x670b, .a=0xc1, .x=0x66, .y=0xbb, .sp=0x87, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x670a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x670a, .value=0x9c, .type=IO_READ},
        {.addr=0x670b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_025F) {
    const struct CPU_State initial_cpu = {.pc=0xa6da, .a=0x22, .x=0x3c, .y=0x12, .sp=0xf6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa6da, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa6db, .a=0x21, .x=0x3c, .y=0x12, .sp=0xf6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa6da, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa6da, .value=0x9c, .type=IO_READ},
        {.addr=0xa6db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0260) {
    const struct CPU_State initial_cpu = {.pc=0x7846, .a=0x86, .x=0x62, .y=0x29, .sp=0x81, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7846, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7847, .a=0x85, .x=0x62, .y=0x29, .sp=0x81, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7846, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7846, .value=0x9c, .type=IO_READ},
        {.addr=0x7847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0261) {
    const struct CPU_State initial_cpu = {.pc=0x7dcc, .a=0x3a, .x=0xf9, .y=0xff, .sp=0x4a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x7dcc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7dcd, .a=0x39, .x=0xf9, .y=0xff, .sp=0x4a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7dcc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7dcc, .value=0x9c, .type=IO_READ},
        {.addr=0x7dcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7ee1, .a=0x54, .x=0x67, .y=0x2f, .sp=0xee, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7ee2, .a=0x53, .x=0x67, .y=0x2f, .sp=0xee, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7ee1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7ee1, .value=0x9c, .type=IO_READ},
        {.addr=0x7ee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0263) {
    const struct CPU_State initial_cpu = {.pc=0x602e, .a=0x59, .x=0xdc, .y=0x7c, .sp=0x0b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x602e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x602f, .a=0x58, .x=0xdc, .y=0x7c, .sp=0x0b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x602e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x602e, .value=0x9c, .type=IO_READ},
        {.addr=0x602f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0264) {
    const struct CPU_State initial_cpu = {.pc=0x14c2, .a=0x2a, .x=0x97, .y=0x31, .sp=0x50, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x14c2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x14c3, .a=0x29, .x=0x97, .y=0x31, .sp=0x50, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x14c2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x14c2, .value=0x9c, .type=IO_READ},
        {.addr=0x14c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0265) {
    const struct CPU_State initial_cpu = {.pc=0xc677, .a=0x7d, .x=0x08, .y=0x24, .sp=0xa8, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xc677, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc678, .a=0x7c, .x=0x08, .y=0x24, .sp=0xa8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc677, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc677, .value=0x9c, .type=IO_READ},
        {.addr=0xc678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0266) {
    const struct CPU_State initial_cpu = {.pc=0x4d8d, .a=0x1b, .x=0x64, .y=0x6c, .sp=0xc8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4d8e, .a=0x1a, .x=0x64, .y=0x6c, .sp=0xc8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4d8d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4d8d, .value=0x9c, .type=IO_READ},
        {.addr=0x4d8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0267) {
    const struct CPU_State initial_cpu = {.pc=0x5058, .a=0x12, .x=0xe3, .y=0x73, .sp=0xeb, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x5058, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5059, .a=0x11, .x=0xe3, .y=0x73, .sp=0xeb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5058, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5058, .value=0x9c, .type=IO_READ},
        {.addr=0x5059, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0bef, .a=0x62, .x=0x30, .y=0x46, .sp=0x72, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0bef, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0bf0, .a=0x61, .x=0x30, .y=0x46, .sp=0x72, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0bef, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0bef, .value=0x9c, .type=IO_READ},
        {.addr=0x0bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0269) {
    const struct CPU_State initial_cpu = {.pc=0x062d, .a=0xc3, .x=0x1b, .y=0xdd, .sp=0xe1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x062d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x062e, .a=0xc2, .x=0x1b, .y=0xdd, .sp=0xe1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x062d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x062d, .value=0x9c, .type=IO_READ},
        {.addr=0x062e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026A) {
    const struct CPU_State initial_cpu = {.pc=0xcbfb, .a=0xcd, .x=0xa1, .y=0xac, .sp=0x9c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xcbfb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcbfc, .a=0xcc, .x=0xa1, .y=0xac, .sp=0x9c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xcbfb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcbfb, .value=0x9c, .type=IO_READ},
        {.addr=0xcbfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026B) {
    const struct CPU_State initial_cpu = {.pc=0x7434, .a=0xc7, .x=0x21, .y=0xad, .sp=0x75, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7434, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7435, .a=0xc6, .x=0x21, .y=0xad, .sp=0x75, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7434, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7434, .value=0x9c, .type=IO_READ},
        {.addr=0x7435, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026C) {
    const struct CPU_State initial_cpu = {.pc=0xc456, .a=0x61, .x=0x26, .y=0x28, .sp=0xe8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc456, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc457, .a=0x60, .x=0x26, .y=0x28, .sp=0xe8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc456, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc456, .value=0x9c, .type=IO_READ},
        {.addr=0xc457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026D) {
    const struct CPU_State initial_cpu = {.pc=0x6f9c, .a=0x6e, .x=0x61, .y=0xdd, .sp=0xde, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6f9c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6f9d, .a=0x6d, .x=0x61, .y=0xdd, .sp=0xde, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6f9c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6f9c, .value=0x9c, .type=IO_READ},
        {.addr=0x6f9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8124, .a=0x3d, .x=0xfd, .y=0xca, .sp=0xfd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8124, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8125, .a=0x3c, .x=0xfd, .y=0xca, .sp=0xfd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8124, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8124, .value=0x9c, .type=IO_READ},
        {.addr=0x8125, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_026F) {
    const struct CPU_State initial_cpu = {.pc=0x03c8, .a=0xd0, .x=0xac, .y=0x7b, .sp=0x14, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x03c8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x03c9, .a=0xcf, .x=0xac, .y=0x7b, .sp=0x14, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x03c8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x03c8, .value=0x9c, .type=IO_READ},
        {.addr=0x03c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0270) {
    const struct CPU_State initial_cpu = {.pc=0x25a9, .a=0x5d, .x=0xa1, .y=0xcd, .sp=0x0c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x25a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x25aa, .a=0x5c, .x=0xa1, .y=0xcd, .sp=0x0c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x25a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x25a9, .value=0x9c, .type=IO_READ},
        {.addr=0x25aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0271) {
    const struct CPU_State initial_cpu = {.pc=0xd700, .a=0x2c, .x=0x2f, .y=0x03, .sp=0x21, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd700, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd701, .a=0x2b, .x=0x2f, .y=0x03, .sp=0x21, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd700, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd700, .value=0x9c, .type=IO_READ},
        {.addr=0xd701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0272) {
    const struct CPU_State initial_cpu = {.pc=0x87a3, .a=0x65, .x=0xd2, .y=0x97, .sp=0x76, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x87a3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x87a4, .a=0x64, .x=0xd2, .y=0x97, .sp=0x76, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x87a3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x87a3, .value=0x9c, .type=IO_READ},
        {.addr=0x87a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0273) {
    const struct CPU_State initial_cpu = {.pc=0x31d7, .a=0x6b, .x=0x45, .y=0x97, .sp=0xda, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x31d7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x31d8, .a=0x6a, .x=0x45, .y=0x97, .sp=0xda, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x31d7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x31d7, .value=0x9c, .type=IO_READ},
        {.addr=0x31d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0274) {
    const struct CPU_State initial_cpu = {.pc=0x8e30, .a=0x52, .x=0x6e, .y=0x1d, .sp=0xae, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8e30, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8e31, .a=0x51, .x=0x6e, .y=0x1d, .sp=0xae, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8e30, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8e30, .value=0x9c, .type=IO_READ},
        {.addr=0x8e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0275) {
    const struct CPU_State initial_cpu = {.pc=0xd650, .a=0xb5, .x=0xe8, .y=0xdb, .sp=0x97, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd650, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd651, .a=0xb4, .x=0xe8, .y=0xdb, .sp=0x97, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xd650, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd650, .value=0x9c, .type=IO_READ},
        {.addr=0xd651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0276) {
    const struct CPU_State initial_cpu = {.pc=0xa68c, .a=0x86, .x=0xa7, .y=0xef, .sp=0xbc, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa68c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa68d, .a=0x85, .x=0xa7, .y=0xef, .sp=0xbc, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa68c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa68c, .value=0x9c, .type=IO_READ},
        {.addr=0xa68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0277) {
    const struct CPU_State initial_cpu = {.pc=0x2192, .a=0xfa, .x=0x8a, .y=0x2a, .sp=0xad, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2192, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2193, .a=0xf9, .x=0x8a, .y=0x2a, .sp=0xad, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2192, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2192, .value=0x9c, .type=IO_READ},
        {.addr=0x2193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0278) {
    const struct CPU_State initial_cpu = {.pc=0xafe1, .a=0x44, .x=0x1f, .y=0xc3, .sp=0xc7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xafe1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xafe2, .a=0x43, .x=0x1f, .y=0xc3, .sp=0xc7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xafe1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xafe1, .value=0x9c, .type=IO_READ},
        {.addr=0xafe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0279) {
    const struct CPU_State initial_cpu = {.pc=0x56b1, .a=0x83, .x=0x08, .y=0xbc, .sp=0x2f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x56b1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x56b2, .a=0x82, .x=0x08, .y=0xbc, .sp=0x2f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x56b1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x56b1, .value=0x9c, .type=IO_READ},
        {.addr=0x56b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027A) {
    const struct CPU_State initial_cpu = {.pc=0x90bc, .a=0x82, .x=0x70, .y=0x77, .sp=0xe6, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x90bc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x90bd, .a=0x81, .x=0x70, .y=0x77, .sp=0xe6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x90bc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x90bc, .value=0x9c, .type=IO_READ},
        {.addr=0x90bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027B) {
    const struct CPU_State initial_cpu = {.pc=0x3240, .a=0x73, .x=0xf4, .y=0xd7, .sp=0x4f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3240, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3241, .a=0x72, .x=0xf4, .y=0xd7, .sp=0x4f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3240, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3240, .value=0x9c, .type=IO_READ},
        {.addr=0x3241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027C) {
    const struct CPU_State initial_cpu = {.pc=0xf701, .a=0xcb, .x=0x5f, .y=0x4a, .sp=0x28, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf701, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf702, .a=0xca, .x=0x5f, .y=0x4a, .sp=0x28, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf701, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf701, .value=0x9c, .type=IO_READ},
        {.addr=0xf702, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027D) {
    const struct CPU_State initial_cpu = {.pc=0x05f6, .a=0xc7, .x=0xc2, .y=0xea, .sp=0x8e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x05f6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x05f7, .a=0xc6, .x=0xc2, .y=0xea, .sp=0x8e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x05f6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x05f6, .value=0x9c, .type=IO_READ},
        {.addr=0x05f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027E) {
    const struct CPU_State initial_cpu = {.pc=0x61c4, .a=0x37, .x=0x85, .y=0xb9, .sp=0xac, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x61c4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x61c5, .a=0x36, .x=0x85, .y=0xb9, .sp=0xac, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x61c4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x61c4, .value=0x9c, .type=IO_READ},
        {.addr=0x61c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_027F) {
    const struct CPU_State initial_cpu = {.pc=0xe6f8, .a=0x55, .x=0xd3, .y=0xbe, .sp=0xa0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe6f9, .a=0x54, .x=0xd3, .y=0xbe, .sp=0xa0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe6f8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe6f8, .value=0x9c, .type=IO_READ},
        {.addr=0xe6f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0280) {
    const struct CPU_State initial_cpu = {.pc=0xb9b7, .a=0x36, .x=0xf8, .y=0xb0, .sp=0xe8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xb9b7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb9b8, .a=0x35, .x=0xf8, .y=0xb0, .sp=0xe8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb9b7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb9b7, .value=0x9c, .type=IO_READ},
        {.addr=0xb9b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9f35, .a=0xef, .x=0x64, .y=0xe3, .sp=0xa4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x9f35, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9f36, .a=0xee, .x=0x64, .y=0xe3, .sp=0xa4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x9f35, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9f35, .value=0x9c, .type=IO_READ},
        {.addr=0x9f36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0282) {
    const struct CPU_State initial_cpu = {.pc=0x3f9e, .a=0x35, .x=0x26, .y=0x36, .sp=0xad, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x3f9e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3f9f, .a=0x34, .x=0x26, .y=0x36, .sp=0xad, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3f9e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3f9e, .value=0x9c, .type=IO_READ},
        {.addr=0x3f9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0283) {
    const struct CPU_State initial_cpu = {.pc=0xff1d, .a=0x83, .x=0xba, .y=0x22, .sp=0xa4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xff1d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xff1e, .a=0x82, .x=0xba, .y=0x22, .sp=0xa4, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xff1d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xff1d, .value=0x9c, .type=IO_READ},
        {.addr=0xff1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe33b, .a=0x66, .x=0xac, .y=0xa7, .sp=0x2c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe33b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe33c, .a=0x65, .x=0xac, .y=0xa7, .sp=0x2c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe33b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe33b, .value=0x9c, .type=IO_READ},
        {.addr=0xe33c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0285) {
    const struct CPU_State initial_cpu = {.pc=0xc87c, .a=0x0b, .x=0x9f, .y=0x68, .sp=0xa4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc87c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc87d, .a=0x0a, .x=0x9f, .y=0x68, .sp=0xa4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc87c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc87c, .value=0x9c, .type=IO_READ},
        {.addr=0xc87d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0286) {
    const struct CPU_State initial_cpu = {.pc=0x75fb, .a=0x67, .x=0xeb, .y=0xd0, .sp=0x50, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x75fb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x75fc, .a=0x66, .x=0xeb, .y=0xd0, .sp=0x50, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x75fb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x75fb, .value=0x9c, .type=IO_READ},
        {.addr=0x75fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0287) {
    const struct CPU_State initial_cpu = {.pc=0xa41a, .a=0xe5, .x=0x28, .y=0xba, .sp=0x90, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa41a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa41b, .a=0xe4, .x=0x28, .y=0xba, .sp=0x90, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa41a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa41a, .value=0x9c, .type=IO_READ},
        {.addr=0xa41b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0288) {
    const struct CPU_State initial_cpu = {.pc=0xc1b4, .a=0x6e, .x=0x08, .y=0xf9, .sp=0xfc, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc1b5, .a=0x6d, .x=0x08, .y=0xf9, .sp=0xfc, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc1b4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc1b4, .value=0x9c, .type=IO_READ},
        {.addr=0xc1b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4e2d, .a=0xdd, .x=0x20, .y=0x61, .sp=0x14, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4e2d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4e2e, .a=0xdc, .x=0x20, .y=0x61, .sp=0x14, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4e2d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4e2d, .value=0x9c, .type=IO_READ},
        {.addr=0x4e2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe97f, .a=0x1e, .x=0x9e, .y=0xcd, .sp=0x9b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe97f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe980, .a=0x1d, .x=0x9e, .y=0xcd, .sp=0x9b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe97f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe97f, .value=0x9c, .type=IO_READ},
        {.addr=0xe980, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028B) {
    const struct CPU_State initial_cpu = {.pc=0xef70, .a=0xe9, .x=0xc2, .y=0xd4, .sp=0x5b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xef70, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xef71, .a=0xe8, .x=0xc2, .y=0xd4, .sp=0x5b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xef70, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xef70, .value=0x9c, .type=IO_READ},
        {.addr=0xef71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028C) {
    const struct CPU_State initial_cpu = {.pc=0x4377, .a=0x39, .x=0x11, .y=0x37, .sp=0xd5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4377, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4378, .a=0x38, .x=0x11, .y=0x37, .sp=0xd5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4377, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4377, .value=0x9c, .type=IO_READ},
        {.addr=0x4378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028D) {
    const struct CPU_State initial_cpu = {.pc=0x92a8, .a=0xd1, .x=0x7b, .y=0x51, .sp=0x34, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x92a8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x92a9, .a=0xd0, .x=0x7b, .y=0x51, .sp=0x34, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x92a8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x92a8, .value=0x9c, .type=IO_READ},
        {.addr=0x92a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028E) {
    const struct CPU_State initial_cpu = {.pc=0xee8a, .a=0x9c, .x=0xcc, .y=0xac, .sp=0x70, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xee8a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee8b, .a=0x9b, .x=0xcc, .y=0xac, .sp=0x70, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xee8a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee8a, .value=0x9c, .type=IO_READ},
        {.addr=0xee8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_028F) {
    const struct CPU_State initial_cpu = {.pc=0x70f8, .a=0x9a, .x=0xf5, .y=0xa9, .sp=0x36, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x70f8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x70f9, .a=0x99, .x=0xf5, .y=0xa9, .sp=0x36, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x70f8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x70f8, .value=0x9c, .type=IO_READ},
        {.addr=0x70f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0290) {
    const struct CPU_State initial_cpu = {.pc=0x5d13, .a=0x64, .x=0x63, .y=0x9b, .sp=0x47, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x5d13, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5d14, .a=0x63, .x=0x63, .y=0x9b, .sp=0x47, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5d13, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5d13, .value=0x9c, .type=IO_READ},
        {.addr=0x5d14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0291) {
    const struct CPU_State initial_cpu = {.pc=0xbaff, .a=0xb2, .x=0x04, .y=0xa0, .sp=0x04, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbaff, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb00, .a=0xb1, .x=0x04, .y=0xa0, .sp=0x04, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xbaff, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbaff, .value=0x9c, .type=IO_READ},
        {.addr=0xbb00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0292) {
    const struct CPU_State initial_cpu = {.pc=0x849f, .a=0xe5, .x=0xa0, .y=0x28, .sp=0x64, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x849f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x84a0, .a=0xe4, .x=0xa0, .y=0x28, .sp=0x64, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x849f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x849f, .value=0x9c, .type=IO_READ},
        {.addr=0x84a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0293) {
    const struct CPU_State initial_cpu = {.pc=0x0e97, .a=0x41, .x=0xc0, .y=0xe5, .sp=0x29, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0e97, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0e98, .a=0x40, .x=0xc0, .y=0xe5, .sp=0x29, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0e97, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0e97, .value=0x9c, .type=IO_READ},
        {.addr=0x0e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0294) {
    const struct CPU_State initial_cpu = {.pc=0xad50, .a=0xac, .x=0xa1, .y=0x7c, .sp=0xb3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xad50, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xad51, .a=0xab, .x=0xa1, .y=0x7c, .sp=0xb3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xad50, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xad50, .value=0x9c, .type=IO_READ},
        {.addr=0xad51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0295) {
    const struct CPU_State initial_cpu = {.pc=0x029c, .a=0xdd, .x=0x21, .y=0x35, .sp=0x1f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x029c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x029d, .a=0xdc, .x=0x21, .y=0x35, .sp=0x1f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x029c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x029c, .value=0x9c, .type=IO_READ},
        {.addr=0x029d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0296) {
    const struct CPU_State initial_cpu = {.pc=0x64a5, .a=0x61, .x=0xe5, .y=0xb3, .sp=0xe9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x64a5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x64a6, .a=0x60, .x=0xe5, .y=0xb3, .sp=0xe9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x64a5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x64a5, .value=0x9c, .type=IO_READ},
        {.addr=0x64a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0297) {
    const struct CPU_State initial_cpu = {.pc=0xf999, .a=0x0e, .x=0xb5, .y=0x04, .sp=0xc3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf999, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf99a, .a=0x0d, .x=0xb5, .y=0x04, .sp=0xc3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf999, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf999, .value=0x9c, .type=IO_READ},
        {.addr=0xf99a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0298) {
    const struct CPU_State initial_cpu = {.pc=0x6234, .a=0x6f, .x=0xe8, .y=0x75, .sp=0xff, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6234, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6235, .a=0x6e, .x=0xe8, .y=0x75, .sp=0xff, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6234, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6234, .value=0x9c, .type=IO_READ},
        {.addr=0x6235, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0299) {
    const struct CPU_State initial_cpu = {.pc=0x7b9f, .a=0x59, .x=0x00, .y=0x8d, .sp=0x12, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7b9f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7ba0, .a=0x58, .x=0x00, .y=0x8d, .sp=0x12, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7b9f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7b9f, .value=0x9c, .type=IO_READ},
        {.addr=0x7ba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029A) {
    const struct CPU_State initial_cpu = {.pc=0xcd40, .a=0xdb, .x=0xfe, .y=0xfc, .sp=0x08, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd40, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd41, .a=0xda, .x=0xfe, .y=0xfc, .sp=0x08, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xcd40, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd40, .value=0x9c, .type=IO_READ},
        {.addr=0xcd41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029B) {
    const struct CPU_State initial_cpu = {.pc=0x7d45, .a=0x0b, .x=0x04, .y=0x04, .sp=0x3f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7d45, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7d46, .a=0x0a, .x=0x04, .y=0x04, .sp=0x3f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7d45, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7d45, .value=0x9c, .type=IO_READ},
        {.addr=0x7d46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029C) {
    const struct CPU_State initial_cpu = {.pc=0x40db, .a=0x3f, .x=0x01, .y=0xc6, .sp=0xfa, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x40db, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x40dc, .a=0x3e, .x=0x01, .y=0xc6, .sp=0xfa, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x40db, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x40db, .value=0x9c, .type=IO_READ},
        {.addr=0x40dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029D) {
    const struct CPU_State initial_cpu = {.pc=0xee16, .a=0x06, .x=0xd1, .y=0xba, .sp=0x29, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xee16, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xee17, .a=0x05, .x=0xd1, .y=0xba, .sp=0x29, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xee16, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xee16, .value=0x9c, .type=IO_READ},
        {.addr=0xee17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029E) {
    const struct CPU_State initial_cpu = {.pc=0xb85a, .a=0x7f, .x=0x80, .y=0x03, .sp=0xc5, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb85a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb85b, .a=0x7e, .x=0x80, .y=0x03, .sp=0xc5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb85a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb85a, .value=0x9c, .type=IO_READ},
        {.addr=0xb85b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_029F) {
    const struct CPU_State initial_cpu = {.pc=0xc91d, .a=0x3c, .x=0x44, .y=0x44, .sp=0x8a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc91d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc91e, .a=0x3b, .x=0x44, .y=0x44, .sp=0x8a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc91d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc91d, .value=0x9c, .type=IO_READ},
        {.addr=0xc91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xad39, .a=0xa0, .x=0xad, .y=0x8e, .sp=0xb9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xad39, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xad3a, .a=0x9f, .x=0xad, .y=0x8e, .sp=0xb9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xad39, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xad39, .value=0x9c, .type=IO_READ},
        {.addr=0xad3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xc2ba, .a=0x4e, .x=0xce, .y=0x53, .sp=0x3d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc2bb, .a=0x4d, .x=0xce, .y=0x53, .sp=0x3d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc2ba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc2ba, .value=0x9c, .type=IO_READ},
        {.addr=0xc2bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6e48, .a=0x25, .x=0x16, .y=0xf9, .sp=0xa2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6e48, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6e49, .a=0x24, .x=0x16, .y=0xf9, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6e48, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6e48, .value=0x9c, .type=IO_READ},
        {.addr=0x6e49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x17ce, .a=0x0c, .x=0x1d, .y=0xd6, .sp=0xf8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x17ce, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x17cf, .a=0x0b, .x=0x1d, .y=0xd6, .sp=0xf8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x17ce, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x17ce, .value=0x9c, .type=IO_READ},
        {.addr=0x17cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc552, .a=0xdb, .x=0x85, .y=0x4a, .sp=0x44, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc552, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc553, .a=0xda, .x=0x85, .y=0x4a, .sp=0x44, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc552, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc552, .value=0x9c, .type=IO_READ},
        {.addr=0xc553, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0x15, .x=0x9d, .y=0xca, .sp=0xb2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6300, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6301, .a=0x14, .x=0x9d, .y=0xca, .sp=0xb2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6300, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0x9c, .type=IO_READ},
        {.addr=0x6301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x263e, .a=0x01, .x=0x16, .y=0x49, .sp=0x38, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x263e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x263f, .a=0x00, .x=0x16, .y=0x49, .sp=0x38, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x263e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x263e, .value=0x9c, .type=IO_READ},
        {.addr=0x263f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x2e49, .a=0xbe, .x=0x59, .y=0x26, .sp=0x42, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2e49, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2e4a, .a=0xbd, .x=0x59, .y=0x26, .sp=0x42, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2e49, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2e49, .value=0x9c, .type=IO_READ},
        {.addr=0x2e4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x3b69, .a=0xfa, .x=0xc4, .y=0x31, .sp=0x9c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3b69, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b6a, .a=0xf9, .x=0xc4, .y=0x31, .sp=0x9c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3b69, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b69, .value=0x9c, .type=IO_READ},
        {.addr=0x3b6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x30f7, .a=0x5d, .x=0x2e, .y=0x10, .sp=0x10, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x30f7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x30f8, .a=0x5c, .x=0x2e, .y=0x10, .sp=0x10, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x30f7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x30f7, .value=0x9c, .type=IO_READ},
        {.addr=0x30f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xa781, .a=0xbd, .x=0xc3, .y=0xa0, .sp=0x81, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa781, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa782, .a=0xbc, .x=0xc3, .y=0xa0, .sp=0x81, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa781, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa781, .value=0x9c, .type=IO_READ},
        {.addr=0xa782, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x1740, .a=0x3e, .x=0xec, .y=0xe3, .sp=0x59, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x1740, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1741, .a=0x3d, .x=0xec, .y=0xe3, .sp=0x59, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1740, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1740, .value=0x9c, .type=IO_READ},
        {.addr=0x1741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xa468, .a=0x0b, .x=0x4c, .y=0x1f, .sp=0xba, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa468, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa469, .a=0x0a, .x=0x4c, .y=0x1f, .sp=0xba, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa468, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa468, .value=0x9c, .type=IO_READ},
        {.addr=0xa469, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xc397, .a=0x67, .x=0xa6, .y=0x32, .sp=0x13, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc397, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc398, .a=0x66, .x=0xa6, .y=0x32, .sp=0x13, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc397, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc397, .value=0x9c, .type=IO_READ},
        {.addr=0xc398, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x6673, .a=0x09, .x=0x82, .y=0x6b, .sp=0xa4, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6673, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6674, .a=0x08, .x=0x82, .y=0x6b, .sp=0xa4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6673, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6673, .value=0x9c, .type=IO_READ},
        {.addr=0x6674, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xb688, .a=0xce, .x=0xed, .y=0xb2, .sp=0xcd, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb688, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb689, .a=0xcd, .x=0xed, .y=0xb2, .sp=0xcd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb688, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb688, .value=0x9c, .type=IO_READ},
        {.addr=0xb689, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xf5e9, .a=0x93, .x=0x26, .y=0xbc, .sp=0x30, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf5ea, .a=0x92, .x=0x26, .y=0xbc, .sp=0x30, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf5e9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf5e9, .value=0x9c, .type=IO_READ},
        {.addr=0xf5ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x5fb6, .a=0x16, .x=0x91, .y=0xf6, .sp=0xb7, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5fb7, .a=0x15, .x=0x91, .y=0xf6, .sp=0xb7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5fb6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5fb6, .value=0x9c, .type=IO_READ},
        {.addr=0x5fb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xf53c, .a=0xcb, .x=0xf7, .y=0x94, .sp=0x8e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf53c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf53d, .a=0xca, .x=0xf7, .y=0x94, .sp=0x8e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf53c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf53c, .value=0x9c, .type=IO_READ},
        {.addr=0xf53d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0d36, .a=0xf7, .x=0x57, .y=0x7b, .sp=0xb5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0d36, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0d37, .a=0xf6, .x=0x57, .y=0x7b, .sp=0xb5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0d36, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0d36, .value=0x9c, .type=IO_READ},
        {.addr=0x0d37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xe0b1, .a=0xb5, .x=0x31, .y=0x90, .sp=0x32, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe0b2, .a=0xb4, .x=0x31, .y=0x90, .sp=0x32, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe0b1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe0b1, .value=0x9c, .type=IO_READ},
        {.addr=0xe0b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x3378, .a=0x33, .x=0x26, .y=0x4c, .sp=0x92, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3378, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3379, .a=0x32, .x=0x26, .y=0x4c, .sp=0x92, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3378, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3378, .value=0x9c, .type=IO_READ},
        {.addr=0x3379, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x6597, .a=0xee, .x=0x7d, .y=0x85, .sp=0x61, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6597, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6598, .a=0xed, .x=0x7d, .y=0x85, .sp=0x61, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6597, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6597, .value=0x9c, .type=IO_READ},
        {.addr=0x6598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x76c6, .a=0x9b, .x=0xc2, .y=0x61, .sp=0x34, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x76c6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x76c7, .a=0x9a, .x=0xc2, .y=0x61, .sp=0x34, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x76c6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x76c6, .value=0x9c, .type=IO_READ},
        {.addr=0x76c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3fc7, .a=0x9e, .x=0x49, .y=0x73, .sp=0xa0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3fc8, .a=0x9d, .x=0x49, .y=0x73, .sp=0xa0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3fc7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3fc7, .value=0x9c, .type=IO_READ},
        {.addr=0x3fc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x63fd, .a=0x5f, .x=0xba, .y=0x93, .sp=0x0e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x63fd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x63fe, .a=0x5e, .x=0xba, .y=0x93, .sp=0x0e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x63fd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x63fd, .value=0x9c, .type=IO_READ},
        {.addr=0x63fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x72d9, .a=0xee, .x=0xd5, .y=0x23, .sp=0x94, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x72d9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x72da, .a=0xed, .x=0xd5, .y=0x23, .sp=0x94, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x72d9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x72d9, .value=0x9c, .type=IO_READ},
        {.addr=0x72da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x9cea, .a=0x59, .x=0x61, .y=0x26, .sp=0x7c, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9cea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9ceb, .a=0x58, .x=0x61, .y=0x26, .sp=0x7c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9cea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9cea, .value=0x9c, .type=IO_READ},
        {.addr=0x9ceb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x53a1, .a=0x23, .x=0x7f, .y=0xa8, .sp=0x37, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x53a1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x53a2, .a=0x22, .x=0x7f, .y=0xa8, .sp=0x37, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x53a1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x53a1, .value=0x9c, .type=IO_READ},
        {.addr=0x53a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xddde, .a=0x5e, .x=0x28, .y=0xae, .sp=0xb3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xddde, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdddf, .a=0x5d, .x=0x28, .y=0xae, .sp=0xb3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xddde, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xddde, .value=0x9c, .type=IO_READ},
        {.addr=0xdddf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x9f22, .a=0x59, .x=0x6d, .y=0x3b, .sp=0xdd, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9f22, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9f23, .a=0x58, .x=0x6d, .y=0x3b, .sp=0xdd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9f22, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9f22, .value=0x9c, .type=IO_READ},
        {.addr=0x9f23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x52d6, .a=0x29, .x=0xf6, .y=0x05, .sp=0x47, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x52d6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x52d7, .a=0x28, .x=0xf6, .y=0x05, .sp=0x47, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x52d6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x52d6, .value=0x9c, .type=IO_READ},
        {.addr=0x52d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x9394, .a=0x93, .x=0x18, .y=0x76, .sp=0xc9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x9394, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9395, .a=0x92, .x=0x18, .y=0x76, .sp=0xc9, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9394, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9394, .value=0x9c, .type=IO_READ},
        {.addr=0x9395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x0ca2, .a=0xa1, .x=0x3f, .y=0x79, .sp=0x07, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0ca3, .a=0xa0, .x=0x3f, .y=0x79, .sp=0x07, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0ca2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0ca2, .value=0x9c, .type=IO_READ},
        {.addr=0x0ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x4b98, .a=0x7a, .x=0xfb, .y=0xb7, .sp=0xec, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4b98, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4b99, .a=0x79, .x=0xfb, .y=0xb7, .sp=0xec, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4b98, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4b98, .value=0x9c, .type=IO_READ},
        {.addr=0x4b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x1fc9, .a=0xae, .x=0xdc, .y=0xd2, .sp=0x86, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1fca, .a=0xad, .x=0xdc, .y=0xd2, .sp=0x86, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1fc9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1fc9, .value=0x9c, .type=IO_READ},
        {.addr=0x1fca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x2b38, .a=0x13, .x=0x65, .y=0xc5, .sp=0xb4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x2b38, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b39, .a=0x12, .x=0x65, .y=0xc5, .sp=0xb4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2b38, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b38, .value=0x9c, .type=IO_READ},
        {.addr=0x2b39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xa697, .a=0xf5, .x=0x0c, .y=0x77, .sp=0xb3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa697, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa698, .a=0xf4, .x=0x0c, .y=0x77, .sp=0xb3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa697, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa697, .value=0x9c, .type=IO_READ},
        {.addr=0xa698, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6ee7, .a=0xe8, .x=0x5c, .y=0x75, .sp=0x70, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ee8, .a=0xe7, .x=0x5c, .y=0x75, .sp=0x70, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6ee7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ee7, .value=0x9c, .type=IO_READ},
        {.addr=0x6ee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd6a0, .a=0xd7, .x=0xdb, .y=0x30, .sp=0x7c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xd6a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd6a1, .a=0xd6, .x=0xdb, .y=0x30, .sp=0x7c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xd6a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd6a0, .value=0x9c, .type=IO_READ},
        {.addr=0xd6a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xe138, .a=0x69, .x=0xc8, .y=0xe3, .sp=0x4e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe138, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe139, .a=0x68, .x=0xc8, .y=0xe3, .sp=0x4e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe138, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe138, .value=0x9c, .type=IO_READ},
        {.addr=0xe139, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x13cb, .a=0xcd, .x=0xf3, .y=0x2d, .sp=0x2a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x13cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x13cc, .a=0xcc, .x=0xf3, .y=0x2d, .sp=0x2a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x13cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x13cb, .value=0x9c, .type=IO_READ},
        {.addr=0x13cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xc631, .a=0xdf, .x=0x7e, .y=0xd9, .sp=0xc9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc631, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc632, .a=0xde, .x=0x7e, .y=0xd9, .sp=0xc9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc631, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc631, .value=0x9c, .type=IO_READ},
        {.addr=0xc632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x5f5c, .a=0xa6, .x=0xff, .y=0xa9, .sp=0x00, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5f5d, .a=0xa5, .x=0xff, .y=0xa9, .sp=0x00, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5f5c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5f5c, .value=0x9c, .type=IO_READ},
        {.addr=0x5f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xa595, .a=0xe2, .x=0x1c, .y=0xea, .sp=0x3d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa595, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa596, .a=0xe1, .x=0x1c, .y=0xea, .sp=0x3d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa595, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa595, .value=0x9c, .type=IO_READ},
        {.addr=0xa596, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3702, .a=0x8b, .x=0x28, .y=0x23, .sp=0xf5, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3702, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3703, .a=0x8a, .x=0x28, .y=0x23, .sp=0xf5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3702, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3702, .value=0x9c, .type=IO_READ},
        {.addr=0x3703, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5b7b, .a=0x5d, .x=0x0f, .y=0xe7, .sp=0x4c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5b7b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5b7c, .a=0x5c, .x=0x0f, .y=0xe7, .sp=0x4c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5b7b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5b7b, .value=0x9c, .type=IO_READ},
        {.addr=0x5b7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x83e9, .a=0x79, .x=0x2c, .y=0x87, .sp=0x98, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x83e9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x83ea, .a=0x78, .x=0x2c, .y=0x87, .sp=0x98, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x83e9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x83e9, .value=0x9c, .type=IO_READ},
        {.addr=0x83ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x1bb4, .a=0x04, .x=0xcc, .y=0xb0, .sp=0x0e, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1bb5, .a=0x03, .x=0xcc, .y=0xb0, .sp=0x0e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1bb4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1bb4, .value=0x9c, .type=IO_READ},
        {.addr=0x1bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x185b, .a=0xb6, .x=0xa4, .y=0xc9, .sp=0x94, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x185b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x185c, .a=0xb5, .x=0xa4, .y=0xc9, .sp=0x94, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x185b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x185b, .value=0x9c, .type=IO_READ},
        {.addr=0x185c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xf57d, .a=0x62, .x=0xbd, .y=0x88, .sp=0x72, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf57d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf57e, .a=0x61, .x=0xbd, .y=0x88, .sp=0x72, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf57d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf57d, .value=0x9c, .type=IO_READ},
        {.addr=0xf57e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4acc, .a=0xb5, .x=0xd1, .y=0xed, .sp=0x23, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4acc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4acd, .a=0xb4, .x=0xd1, .y=0xed, .sp=0x23, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4acc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4acc, .value=0x9c, .type=IO_READ},
        {.addr=0x4acd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xb702, .a=0xdd, .x=0xf4, .y=0xca, .sp=0xf7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb702, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb703, .a=0xdc, .x=0xf4, .y=0xca, .sp=0xf7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb702, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb702, .value=0x9c, .type=IO_READ},
        {.addr=0xb703, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6227, .a=0x2a, .x=0xfc, .y=0x8d, .sp=0xbe, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x6227, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6228, .a=0x29, .x=0xfc, .y=0x8d, .sp=0xbe, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6227, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6227, .value=0x9c, .type=IO_READ},
        {.addr=0x6228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x460f, .a=0x86, .x=0xfd, .y=0xeb, .sp=0x84, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x460f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4610, .a=0x85, .x=0xfd, .y=0xeb, .sp=0x84, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x460f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x460f, .value=0x9c, .type=IO_READ},
        {.addr=0x4610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xa0b1, .a=0x49, .x=0x29, .y=0xfd, .sp=0xc9, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa0b2, .a=0x48, .x=0x29, .y=0xfd, .sp=0xc9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa0b1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa0b1, .value=0x9c, .type=IO_READ},
        {.addr=0xa0b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xa8a7, .a=0x49, .x=0x4e, .y=0x35, .sp=0x3b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa8a8, .a=0x48, .x=0x4e, .y=0x35, .sp=0x3b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa8a7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa8a7, .value=0x9c, .type=IO_READ},
        {.addr=0xa8a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x7e4b, .a=0x2b, .x=0x2f, .y=0x4d, .sp=0xff, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7e4c, .a=0x2a, .x=0x2f, .y=0x4d, .sp=0xff, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7e4b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7e4b, .value=0x9c, .type=IO_READ},
        {.addr=0x7e4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x2254, .a=0xd9, .x=0x4c, .y=0x8e, .sp=0xec, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2254, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2255, .a=0xd8, .x=0x4c, .y=0x8e, .sp=0xec, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2254, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2254, .value=0x9c, .type=IO_READ},
        {.addr=0x2255, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xea7e, .a=0x14, .x=0xa3, .y=0xf2, .sp=0xbe, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xea7e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xea7f, .a=0x13, .x=0xa3, .y=0xf2, .sp=0xbe, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xea7e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xea7e, .value=0x9c, .type=IO_READ},
        {.addr=0xea7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x2141, .a=0xa3, .x=0xbb, .y=0x60, .sp=0x37, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x2141, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2142, .a=0xa2, .x=0xbb, .y=0x60, .sp=0x37, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2141, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2141, .value=0x9c, .type=IO_READ},
        {.addr=0x2142, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xf815, .a=0xdd, .x=0x4c, .y=0x74, .sp=0x25, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf815, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf816, .a=0xdc, .x=0x4c, .y=0x74, .sp=0x25, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf815, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf815, .value=0x9c, .type=IO_READ},
        {.addr=0xf816, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4091, .a=0x2b, .x=0xfe, .y=0xe8, .sp=0x69, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4091, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4092, .a=0x2a, .x=0xfe, .y=0xe8, .sp=0x69, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4091, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4091, .value=0x9c, .type=IO_READ},
        {.addr=0x4092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x89e7, .a=0x76, .x=0x4d, .y=0x08, .sp=0x44, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x89e7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x89e8, .a=0x75, .x=0x4d, .y=0x08, .sp=0x44, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x89e7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x89e7, .value=0x9c, .type=IO_READ},
        {.addr=0x89e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xd17d, .a=0x15, .x=0x0a, .y=0xde, .sp=0xe6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd17d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd17e, .a=0x14, .x=0x0a, .y=0xde, .sp=0xe6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd17d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd17d, .value=0x9c, .type=IO_READ},
        {.addr=0xd17e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xefda, .a=0x3c, .x=0x95, .y=0xd8, .sp=0xe2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xefda, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xefdb, .a=0x3b, .x=0x95, .y=0xd8, .sp=0xe2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xefda, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xefda, .value=0x9c, .type=IO_READ},
        {.addr=0xefdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1527, .a=0x83, .x=0x99, .y=0x96, .sp=0xfb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1527, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1528, .a=0x82, .x=0x99, .y=0x96, .sp=0xfb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1527, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1527, .value=0x9c, .type=IO_READ},
        {.addr=0x1528, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xd524, .a=0xed, .x=0x86, .y=0x22, .sp=0xf7, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd524, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd525, .a=0xec, .x=0x86, .y=0x22, .sp=0xf7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd524, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd524, .value=0x9c, .type=IO_READ},
        {.addr=0xd525, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2d05, .a=0xcc, .x=0x94, .y=0x20, .sp=0xe8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2d05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d06, .a=0xcb, .x=0x94, .y=0x20, .sp=0xe8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2d05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2d05, .value=0x9c, .type=IO_READ},
        {.addr=0x2d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x6ecd, .a=0xa7, .x=0xf9, .y=0xe0, .sp=0x10, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6ecd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ece, .a=0xa6, .x=0xf9, .y=0xe0, .sp=0x10, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6ecd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ecd, .value=0x9c, .type=IO_READ},
        {.addr=0x6ece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb039, .a=0x4a, .x=0xea, .y=0x8c, .sp=0xa3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb039, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb03a, .a=0x49, .x=0xea, .y=0x8c, .sp=0xa3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb039, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb039, .value=0x9c, .type=IO_READ},
        {.addr=0xb03a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xae0b, .a=0xfe, .x=0x27, .y=0xf3, .sp=0x7d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xae0b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xae0c, .a=0xfd, .x=0x27, .y=0xf3, .sp=0x7d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xae0b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xae0b, .value=0x9c, .type=IO_READ},
        {.addr=0xae0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xe7ae, .a=0xcf, .x=0x8d, .y=0x13, .sp=0x1d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe7af, .a=0xce, .x=0x8d, .y=0x13, .sp=0x1d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe7ae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe7ae, .value=0x9c, .type=IO_READ},
        {.addr=0xe7af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x5fb0, .a=0x9b, .x=0x94, .y=0x0a, .sp=0x2f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5fb0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5fb1, .a=0x9a, .x=0x94, .y=0x0a, .sp=0x2f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5fb0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5fb0, .value=0x9c, .type=IO_READ},
        {.addr=0x5fb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xa74b, .a=0xed, .x=0xe9, .y=0x78, .sp=0x22, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa74b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa74c, .a=0xec, .x=0xe9, .y=0x78, .sp=0x22, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa74b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa74b, .value=0x9c, .type=IO_READ},
        {.addr=0xa74c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xe46d, .a=0xdd, .x=0x0a, .y=0xde, .sp=0xd0, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe46d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe46e, .a=0xdc, .x=0x0a, .y=0xde, .sp=0xd0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe46d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe46d, .value=0x9c, .type=IO_READ},
        {.addr=0xe46e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xa6e1, .a=0x85, .x=0xcc, .y=0xa0, .sp=0x0c, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa6e1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa6e2, .a=0x84, .x=0xcc, .y=0xa0, .sp=0x0c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa6e1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa6e1, .value=0x9c, .type=IO_READ},
        {.addr=0xa6e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x6ea2, .a=0x6e, .x=0x19, .y=0x56, .sp=0xd3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ea3, .a=0x6d, .x=0x19, .y=0x56, .sp=0xd3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6ea2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ea2, .value=0x9c, .type=IO_READ},
        {.addr=0x6ea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x3a8a, .a=0x6f, .x=0x88, .y=0x12, .sp=0x0f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3a8b, .a=0x6e, .x=0x88, .y=0x12, .sp=0x0f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3a8a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3a8a, .value=0x9c, .type=IO_READ},
        {.addr=0x3a8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xf53b, .a=0xad, .x=0xca, .y=0x11, .sp=0x1e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xf53b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf53c, .a=0xac, .x=0xca, .y=0x11, .sp=0x1e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf53b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf53b, .value=0x9c, .type=IO_READ},
        {.addr=0xf53c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xcb9a, .a=0x06, .x=0x02, .y=0xf5, .sp=0xe0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xcb9a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb9b, .a=0x05, .x=0x02, .y=0xf5, .sp=0xe0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcb9a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb9a, .value=0x9c, .type=IO_READ},
        {.addr=0xcb9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x14ac, .a=0x6d, .x=0xff, .y=0xcd, .sp=0x83, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x14ac, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x14ad, .a=0x6c, .x=0xff, .y=0xcd, .sp=0x83, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x14ac, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x14ac, .value=0x9c, .type=IO_READ},
        {.addr=0x14ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x3809, .a=0x8a, .x=0x65, .y=0xee, .sp=0x71, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x3809, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x380a, .a=0x89, .x=0x65, .y=0xee, .sp=0x71, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3809, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3809, .value=0x9c, .type=IO_READ},
        {.addr=0x380a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xe84b, .a=0x9e, .x=0xf3, .y=0x44, .sp=0x40, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe84b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe84c, .a=0x9d, .x=0xf3, .y=0x44, .sp=0x40, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe84b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe84b, .value=0x9c, .type=IO_READ},
        {.addr=0xe84c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x3f83, .a=0xed, .x=0x37, .y=0xa6, .sp=0xe4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3f83, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3f84, .a=0xec, .x=0x37, .y=0xa6, .sp=0xe4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3f83, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3f83, .value=0x9c, .type=IO_READ},
        {.addr=0x3f84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0c60, .a=0xc8, .x=0x69, .y=0xe2, .sp=0x55, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0c60, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0c61, .a=0xc7, .x=0x69, .y=0xe2, .sp=0x55, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0c60, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0c60, .value=0x9c, .type=IO_READ},
        {.addr=0x0c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x95aa, .a=0x08, .x=0x2c, .y=0x2e, .sp=0x14, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x95aa, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x95ab, .a=0x07, .x=0x2c, .y=0x2e, .sp=0x14, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x95aa, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x95aa, .value=0x9c, .type=IO_READ},
        {.addr=0x95ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x8fbc, .a=0x71, .x=0xd7, .y=0x69, .sp=0xf1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8fbc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8fbd, .a=0x70, .x=0xd7, .y=0x69, .sp=0xf1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8fbc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8fbc, .value=0x9c, .type=IO_READ},
        {.addr=0x8fbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xff90, .a=0xc1, .x=0x82, .y=0x3d, .sp=0xd3, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xff90, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xff91, .a=0xc0, .x=0x82, .y=0x3d, .sp=0xd3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xff90, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xff90, .value=0x9c, .type=IO_READ},
        {.addr=0xff91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x2a3b, .a=0x90, .x=0x0a, .y=0xc3, .sp=0x05, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a3b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2a3c, .a=0x8f, .x=0x0a, .y=0xc3, .sp=0x05, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2a3b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2a3b, .value=0x9c, .type=IO_READ},
        {.addr=0x2a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2f52, .a=0x47, .x=0xc0, .y=0x24, .sp=0xf9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2f52, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2f53, .a=0x46, .x=0xc0, .y=0x24, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2f52, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2f52, .value=0x9c, .type=IO_READ},
        {.addr=0x2f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xa6cd, .a=0x9f, .x=0xe6, .y=0x4b, .sp=0x02, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa6cd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa6ce, .a=0x9e, .x=0xe6, .y=0x4b, .sp=0x02, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa6cd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa6cd, .value=0x9c, .type=IO_READ},
        {.addr=0xa6ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2f93, .a=0xff, .x=0x2d, .y=0x1b, .sp=0x88, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2f93, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2f94, .a=0xfe, .x=0x2d, .y=0x1b, .sp=0x88, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2f93, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2f93, .value=0x9c, .type=IO_READ},
        {.addr=0x2f94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x89a5, .a=0x0e, .x=0xe1, .y=0x7b, .sp=0xb8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x89a5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x89a6, .a=0x0d, .x=0xe1, .y=0x7b, .sp=0xb8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x89a5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x89a5, .value=0x9c, .type=IO_READ},
        {.addr=0x89a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x300b, .a=0x52, .x=0x39, .y=0x16, .sp=0xa1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x300b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x300c, .a=0x51, .x=0x39, .y=0x16, .sp=0xa1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x300b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x300b, .value=0x9c, .type=IO_READ},
        {.addr=0x300c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8565, .a=0x86, .x=0x48, .y=0xf0, .sp=0x2f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8565, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8566, .a=0x85, .x=0x48, .y=0xf0, .sp=0x2f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8565, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8565, .value=0x9c, .type=IO_READ},
        {.addr=0x8566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0300) {
    const struct CPU_State initial_cpu = {.pc=0x3bc9, .a=0xd7, .x=0xc5, .y=0xf2, .sp=0x46, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3bca, .a=0xd6, .x=0xc5, .y=0xf2, .sp=0x46, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3bc9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3bc9, .value=0x9c, .type=IO_READ},
        {.addr=0x3bca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0301) {
    const struct CPU_State initial_cpu = {.pc=0x04ed, .a=0x6e, .x=0x6a, .y=0xb8, .sp=0x3a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x04ed, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x04ee, .a=0x6d, .x=0x6a, .y=0xb8, .sp=0x3a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x04ed, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x04ed, .value=0x9c, .type=IO_READ},
        {.addr=0x04ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0302) {
    const struct CPU_State initial_cpu = {.pc=0x5172, .a=0x3c, .x=0x75, .y=0x1e, .sp=0x30, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5172, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5173, .a=0x3b, .x=0x75, .y=0x1e, .sp=0x30, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5172, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5172, .value=0x9c, .type=IO_READ},
        {.addr=0x5173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0303) {
    const struct CPU_State initial_cpu = {.pc=0x5a02, .a=0x6f, .x=0x2c, .y=0xd8, .sp=0x8f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5a02, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5a03, .a=0x6e, .x=0x2c, .y=0xd8, .sp=0x8f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5a02, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5a02, .value=0x9c, .type=IO_READ},
        {.addr=0x5a03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0304) {
    const struct CPU_State initial_cpu = {.pc=0x68a9, .a=0xbb, .x=0x60, .y=0xfa, .sp=0x78, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x68a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x68aa, .a=0xba, .x=0x60, .y=0xfa, .sp=0x78, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x68a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x68a9, .value=0x9c, .type=IO_READ},
        {.addr=0x68aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0305) {
    const struct CPU_State initial_cpu = {.pc=0x979d, .a=0x1c, .x=0xf4, .y=0xe4, .sp=0x5d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x979d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x979e, .a=0x1b, .x=0xf4, .y=0xe4, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x979d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x979d, .value=0x9c, .type=IO_READ},
        {.addr=0x979e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1b9f, .a=0xa0, .x=0x97, .y=0xda, .sp=0x8f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1b9f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1ba0, .a=0x9f, .x=0x97, .y=0xda, .sp=0x8f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1b9f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b9f, .value=0x9c, .type=IO_READ},
        {.addr=0x1ba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0307) {
    const struct CPU_State initial_cpu = {.pc=0x8731, .a=0x00, .x=0xa5, .y=0x61, .sp=0xa6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8731, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8732, .a=0xff, .x=0xa5, .y=0x61, .sp=0xa6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8731, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8731, .value=0x9c, .type=IO_READ},
        {.addr=0x8732, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0308) {
    const struct CPU_State initial_cpu = {.pc=0x83f9, .a=0x80, .x=0x18, .y=0x8b, .sp=0x03, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x83f9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x83fa, .a=0x7f, .x=0x18, .y=0x8b, .sp=0x03, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x83f9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x83f9, .value=0x9c, .type=IO_READ},
        {.addr=0x83fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0309) {
    const struct CPU_State initial_cpu = {.pc=0x6e10, .a=0x11, .x=0xde, .y=0x59, .sp=0x35, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6e10, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6e11, .a=0x10, .x=0xde, .y=0x59, .sp=0x35, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6e10, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6e10, .value=0x9c, .type=IO_READ},
        {.addr=0x6e11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030A) {
    const struct CPU_State initial_cpu = {.pc=0x980b, .a=0xb8, .x=0xe9, .y=0xf1, .sp=0x56, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x980b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x980c, .a=0xb7, .x=0xe9, .y=0xf1, .sp=0x56, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x980b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x980b, .value=0x9c, .type=IO_READ},
        {.addr=0x980c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030B) {
    const struct CPU_State initial_cpu = {.pc=0xdbea, .a=0xe4, .x=0x39, .y=0x7e, .sp=0x4f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xdbea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdbeb, .a=0xe3, .x=0x39, .y=0x7e, .sp=0x4f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdbea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdbea, .value=0x9c, .type=IO_READ},
        {.addr=0xdbeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030C) {
    const struct CPU_State initial_cpu = {.pc=0x9cb0, .a=0xb0, .x=0xff, .y=0x2d, .sp=0xac, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9cb1, .a=0xaf, .x=0xff, .y=0x2d, .sp=0xac, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9cb0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9cb0, .value=0x9c, .type=IO_READ},
        {.addr=0x9cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030D) {
    const struct CPU_State initial_cpu = {.pc=0x4df6, .a=0xa0, .x=0x3f, .y=0x59, .sp=0xe2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4df6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4df7, .a=0x9f, .x=0x3f, .y=0x59, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4df6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4df6, .value=0x9c, .type=IO_READ},
        {.addr=0x4df7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030E) {
    const struct CPU_State initial_cpu = {.pc=0xc28b, .a=0x1a, .x=0x09, .y=0xf7, .sp=0xb6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xc28b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc28c, .a=0x19, .x=0x09, .y=0xf7, .sp=0xb6, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc28b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc28b, .value=0x9c, .type=IO_READ},
        {.addr=0xc28c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0c10, .a=0xe4, .x=0xe0, .y=0x7e, .sp=0x2b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0c10, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0c11, .a=0xe3, .x=0xe0, .y=0x7e, .sp=0x2b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0c10, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0c10, .value=0x9c, .type=IO_READ},
        {.addr=0x0c11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0310) {
    const struct CPU_State initial_cpu = {.pc=0x892a, .a=0xaa, .x=0x82, .y=0xcd, .sp=0xe4, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x892a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x892b, .a=0xa9, .x=0x82, .y=0xcd, .sp=0xe4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x892a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x892a, .value=0x9c, .type=IO_READ},
        {.addr=0x892b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0311) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x21, .x=0x53, .y=0x51, .sp=0xc5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe6e7, .a=0x20, .x=0x53, .y=0x51, .sp=0xc5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe6e6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0x9c, .type=IO_READ},
        {.addr=0xe6e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0312) {
    const struct CPU_State initial_cpu = {.pc=0xad49, .a=0x66, .x=0x1d, .y=0x27, .sp=0x71, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xad49, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xad4a, .a=0x65, .x=0x1d, .y=0x27, .sp=0x71, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xad49, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xad49, .value=0x9c, .type=IO_READ},
        {.addr=0xad4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0313) {
    const struct CPU_State initial_cpu = {.pc=0x9810, .a=0x52, .x=0x58, .y=0xfb, .sp=0xa3, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9810, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9811, .a=0x51, .x=0x58, .y=0xfb, .sp=0xa3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9810, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9810, .value=0x9c, .type=IO_READ},
        {.addr=0x9811, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0314) {
    const struct CPU_State initial_cpu = {.pc=0x15c7, .a=0xf2, .x=0x3a, .y=0x32, .sp=0xdd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x15c7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x15c8, .a=0xf1, .x=0x3a, .y=0x32, .sp=0xdd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x15c7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x15c7, .value=0x9c, .type=IO_READ},
        {.addr=0x15c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0315) {
    const struct CPU_State initial_cpu = {.pc=0x48ab, .a=0xad, .x=0xf1, .y=0xde, .sp=0xc4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x48ab, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x48ac, .a=0xac, .x=0xf1, .y=0xde, .sp=0xc4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x48ab, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x48ab, .value=0x9c, .type=IO_READ},
        {.addr=0x48ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0316) {
    const struct CPU_State initial_cpu = {.pc=0xffab, .a=0xd9, .x=0xb6, .y=0x5a, .sp=0x7a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xffab, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xffac, .a=0xd8, .x=0xb6, .y=0x5a, .sp=0x7a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xffab, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xffab, .value=0x9c, .type=IO_READ},
        {.addr=0xffac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0317) {
    const struct CPU_State initial_cpu = {.pc=0x5b87, .a=0xb2, .x=0x67, .y=0x9a, .sp=0xc7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5b87, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5b88, .a=0xb1, .x=0x67, .y=0x9a, .sp=0xc7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5b87, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5b87, .value=0x9c, .type=IO_READ},
        {.addr=0x5b88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0318) {
    const struct CPU_State initial_cpu = {.pc=0xecfe, .a=0x88, .x=0x0b, .y=0x1d, .sp=0x44, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xecfe, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xecff, .a=0x87, .x=0x0b, .y=0x1d, .sp=0x44, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xecfe, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xecfe, .value=0x9c, .type=IO_READ},
        {.addr=0xecff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd077, .a=0x27, .x=0xc4, .y=0xc6, .sp=0x60, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd077, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd078, .a=0x26, .x=0xc4, .y=0xc6, .sp=0x60, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd077, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd077, .value=0x9c, .type=IO_READ},
        {.addr=0xd078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031A) {
    const struct CPU_State initial_cpu = {.pc=0xe1c1, .a=0xdc, .x=0x9c, .y=0xf2, .sp=0xaa, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe1c2, .a=0xdb, .x=0x9c, .y=0xf2, .sp=0xaa, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe1c1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe1c1, .value=0x9c, .type=IO_READ},
        {.addr=0xe1c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031B) {
    const struct CPU_State initial_cpu = {.pc=0x3b1a, .a=0x18, .x=0x6e, .y=0x7a, .sp=0x6f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3b1a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b1b, .a=0x17, .x=0x6e, .y=0x7a, .sp=0x6f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3b1a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b1a, .value=0x9c, .type=IO_READ},
        {.addr=0x3b1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031C) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0x77, .x=0x4b, .y=0x12, .sp=0x8d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe4ce, .a=0x76, .x=0x4b, .y=0x12, .sp=0x8d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe4cd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0x9c, .type=IO_READ},
        {.addr=0xe4ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031D) {
    const struct CPU_State initial_cpu = {.pc=0x1e86, .a=0x6e, .x=0x97, .y=0x4a, .sp=0xed, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e86, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1e87, .a=0x6d, .x=0x97, .y=0x4a, .sp=0xed, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1e86, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1e86, .value=0x9c, .type=IO_READ},
        {.addr=0x1e87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031E) {
    const struct CPU_State initial_cpu = {.pc=0xde11, .a=0x12, .x=0x53, .y=0x55, .sp=0xec, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xde11, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xde12, .a=0x11, .x=0x53, .y=0x55, .sp=0xec, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xde11, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xde11, .value=0x9c, .type=IO_READ},
        {.addr=0xde12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_031F) {
    const struct CPU_State initial_cpu = {.pc=0xc40e, .a=0x02, .x=0x4b, .y=0xfd, .sp=0xe9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc40e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc40f, .a=0x01, .x=0x4b, .y=0xfd, .sp=0xe9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc40e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc40e, .value=0x9c, .type=IO_READ},
        {.addr=0xc40f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0320) {
    const struct CPU_State initial_cpu = {.pc=0x9a42, .a=0x18, .x=0x75, .y=0x48, .sp=0xd7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9a42, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9a43, .a=0x17, .x=0x75, .y=0x48, .sp=0xd7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9a42, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9a42, .value=0x9c, .type=IO_READ},
        {.addr=0x9a43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0321) {
    const struct CPU_State initial_cpu = {.pc=0xb725, .a=0x9f, .x=0xc9, .y=0x5b, .sp=0x9d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb725, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb726, .a=0x9e, .x=0xc9, .y=0x5b, .sp=0x9d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb725, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb725, .value=0x9c, .type=IO_READ},
        {.addr=0xb726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0322) {
    const struct CPU_State initial_cpu = {.pc=0xcd73, .a=0x2e, .x=0x26, .y=0x65, .sp=0x41, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xcd73, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcd74, .a=0x2d, .x=0x26, .y=0x65, .sp=0x41, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xcd73, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcd73, .value=0x9c, .type=IO_READ},
        {.addr=0xcd74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0323) {
    const struct CPU_State initial_cpu = {.pc=0x03ea, .a=0x00, .x=0xde, .y=0x9f, .sp=0x08, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x03ea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x03eb, .a=0xff, .x=0xde, .y=0x9f, .sp=0x08, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x03ea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x03ea, .value=0x9c, .type=IO_READ},
        {.addr=0x03eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0324) {
    const struct CPU_State initial_cpu = {.pc=0xfd1f, .a=0xce, .x=0x81, .y=0xaf, .sp=0x21, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfd20, .a=0xcd, .x=0x81, .y=0xaf, .sp=0x21, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfd1f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfd1f, .value=0x9c, .type=IO_READ},
        {.addr=0xfd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0325) {
    const struct CPU_State initial_cpu = {.pc=0xf35a, .a=0x3a, .x=0x9e, .y=0xbf, .sp=0xa8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf35a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf35b, .a=0x39, .x=0x9e, .y=0xbf, .sp=0xa8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf35a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf35a, .value=0x9c, .type=IO_READ},
        {.addr=0xf35b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0326) {
    const struct CPU_State initial_cpu = {.pc=0x2b54, .a=0xde, .x=0x25, .y=0x57, .sp=0xea, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2b54, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2b55, .a=0xdd, .x=0x25, .y=0x57, .sp=0xea, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2b54, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2b54, .value=0x9c, .type=IO_READ},
        {.addr=0x2b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0327) {
    const struct CPU_State initial_cpu = {.pc=0x2544, .a=0xd9, .x=0x2c, .y=0xf7, .sp=0xbf, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2544, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2545, .a=0xd8, .x=0x2c, .y=0xf7, .sp=0xbf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2544, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2544, .value=0x9c, .type=IO_READ},
        {.addr=0x2545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0328) {
    const struct CPU_State initial_cpu = {.pc=0x3359, .a=0xa5, .x=0x7a, .y=0xc3, .sp=0x2e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3359, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x335a, .a=0xa4, .x=0x7a, .y=0xc3, .sp=0x2e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3359, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3359, .value=0x9c, .type=IO_READ},
        {.addr=0x335a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf0f9, .a=0x4d, .x=0x83, .y=0x79, .sp=0xef, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf0f9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf0fa, .a=0x4c, .x=0x83, .y=0x79, .sp=0xef, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf0f9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf0f9, .value=0x9c, .type=IO_READ},
        {.addr=0xf0fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032A) {
    const struct CPU_State initial_cpu = {.pc=0x180b, .a=0x56, .x=0x8f, .y=0x83, .sp=0x4a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x180b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x180c, .a=0x55, .x=0x8f, .y=0x83, .sp=0x4a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x180b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x180b, .value=0x9c, .type=IO_READ},
        {.addr=0x180c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd4c4, .a=0x5a, .x=0x91, .y=0x88, .sp=0x9e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd4c5, .a=0x59, .x=0x91, .y=0x88, .sp=0x9e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd4c4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd4c4, .value=0x9c, .type=IO_READ},
        {.addr=0xd4c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032C) {
    const struct CPU_State initial_cpu = {.pc=0x80ff, .a=0x9c, .x=0x11, .y=0xeb, .sp=0x7d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x80ff, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8100, .a=0x9b, .x=0x11, .y=0xeb, .sp=0x7d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x80ff, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x80ff, .value=0x9c, .type=IO_READ},
        {.addr=0x8100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032D) {
    const struct CPU_State initial_cpu = {.pc=0xbb53, .a=0xb6, .x=0xfc, .y=0xc5, .sp=0x53, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xbb53, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbb54, .a=0xb5, .x=0xfc, .y=0xc5, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xbb53, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbb53, .value=0x9c, .type=IO_READ},
        {.addr=0xbb54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032E) {
    const struct CPU_State initial_cpu = {.pc=0x018c, .a=0x35, .x=0x27, .y=0xfb, .sp=0x89, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x018d, .a=0x34, .x=0x27, .y=0xfb, .sp=0x89, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x018c, .value=0x9c, .type=IO_READ},
        {.addr=0x018d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_032F) {
    const struct CPU_State initial_cpu = {.pc=0x5be6, .a=0x91, .x=0xea, .y=0xbb, .sp=0xc6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x5be6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5be7, .a=0x90, .x=0xea, .y=0xbb, .sp=0xc6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5be6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5be6, .value=0x9c, .type=IO_READ},
        {.addr=0x5be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0330) {
    const struct CPU_State initial_cpu = {.pc=0x90ec, .a=0x21, .x=0xfb, .y=0x57, .sp=0xfc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x90ec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x90ed, .a=0x20, .x=0xfb, .y=0x57, .sp=0xfc, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x90ec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x90ec, .value=0x9c, .type=IO_READ},
        {.addr=0x90ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0331) {
    const struct CPU_State initial_cpu = {.pc=0x36ea, .a=0x02, .x=0x87, .y=0xad, .sp=0xce, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x36ea, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x36eb, .a=0x01, .x=0x87, .y=0xad, .sp=0xce, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x36ea, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x36ea, .value=0x9c, .type=IO_READ},
        {.addr=0x36eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0332) {
    const struct CPU_State initial_cpu = {.pc=0x5551, .a=0x3b, .x=0x87, .y=0xbf, .sp=0x18, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x5551, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5552, .a=0x3a, .x=0x87, .y=0xbf, .sp=0x18, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5551, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5551, .value=0x9c, .type=IO_READ},
        {.addr=0x5552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0333) {
    const struct CPU_State initial_cpu = {.pc=0xeee3, .a=0xbb, .x=0xe1, .y=0x0b, .sp=0x78, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xeee3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xeee4, .a=0xba, .x=0xe1, .y=0x0b, .sp=0x78, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xeee3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xeee3, .value=0x9c, .type=IO_READ},
        {.addr=0xeee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0334) {
    const struct CPU_State initial_cpu = {.pc=0xb5f2, .a=0xa7, .x=0x32, .y=0xa5, .sp=0x8d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb5f2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb5f3, .a=0xa6, .x=0x32, .y=0xa5, .sp=0x8d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb5f2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb5f2, .value=0x9c, .type=IO_READ},
        {.addr=0xb5f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0335) {
    const struct CPU_State initial_cpu = {.pc=0x995e, .a=0x33, .x=0x8c, .y=0xd6, .sp=0xed, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x995e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x995f, .a=0x32, .x=0x8c, .y=0xd6, .sp=0xed, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x995e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x995e, .value=0x9c, .type=IO_READ},
        {.addr=0x995f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3ce7, .a=0x8c, .x=0x03, .y=0x52, .sp=0x6e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3ce7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3ce8, .a=0x8b, .x=0x03, .y=0x52, .sp=0x6e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3ce7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3ce7, .value=0x9c, .type=IO_READ},
        {.addr=0x3ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0337) {
    const struct CPU_State initial_cpu = {.pc=0x0f45, .a=0xcf, .x=0x11, .y=0x77, .sp=0xce, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0f45, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0f46, .a=0xce, .x=0x11, .y=0x77, .sp=0xce, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0f45, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0f45, .value=0x9c, .type=IO_READ},
        {.addr=0x0f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0338) {
    const struct CPU_State initial_cpu = {.pc=0xb40d, .a=0xed, .x=0x36, .y=0x74, .sp=0x3b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xb40d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb40e, .a=0xec, .x=0x36, .y=0x74, .sp=0x3b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xb40d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb40d, .value=0x9c, .type=IO_READ},
        {.addr=0xb40e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0339) {
    const struct CPU_State initial_cpu = {.pc=0x54d9, .a=0xb4, .x=0x83, .y=0xee, .sp=0xe0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x54d9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x54da, .a=0xb3, .x=0x83, .y=0xee, .sp=0xe0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x54d9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x54d9, .value=0x9c, .type=IO_READ},
        {.addr=0x54da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9b9b, .a=0x9a, .x=0xe6, .y=0x1e, .sp=0x5a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9b9b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9b9c, .a=0x99, .x=0xe6, .y=0x1e, .sp=0x5a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9b9b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9b9b, .value=0x9c, .type=IO_READ},
        {.addr=0x9b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033B) {
    const struct CPU_State initial_cpu = {.pc=0xcb32, .a=0x23, .x=0x7b, .y=0x50, .sp=0xbb, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb32, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcb33, .a=0x22, .x=0x7b, .y=0x50, .sp=0xbb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xcb32, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcb32, .value=0x9c, .type=IO_READ},
        {.addr=0xcb33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033C) {
    const struct CPU_State initial_cpu = {.pc=0x9944, .a=0xa0, .x=0xd7, .y=0x1c, .sp=0x54, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9944, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9945, .a=0x9f, .x=0xd7, .y=0x1c, .sp=0x54, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9944, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9944, .value=0x9c, .type=IO_READ},
        {.addr=0x9945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033D) {
    const struct CPU_State initial_cpu = {.pc=0x739f, .a=0x8a, .x=0x93, .y=0x27, .sp=0xab, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x739f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x73a0, .a=0x89, .x=0x93, .y=0x27, .sp=0xab, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x739f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x739f, .value=0x9c, .type=IO_READ},
        {.addr=0x73a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc22b, .a=0x75, .x=0x8a, .y=0x78, .sp=0x3f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc22b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc22c, .a=0x74, .x=0x8a, .y=0x78, .sp=0x3f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc22b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc22b, .value=0x9c, .type=IO_READ},
        {.addr=0xc22c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_033F) {
    const struct CPU_State initial_cpu = {.pc=0x3d55, .a=0x45, .x=0x1f, .y=0x1a, .sp=0xb5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3d55, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d56, .a=0x44, .x=0x1f, .y=0x1a, .sp=0xb5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3d55, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d55, .value=0x9c, .type=IO_READ},
        {.addr=0x3d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0340) {
    const struct CPU_State initial_cpu = {.pc=0x4dcf, .a=0xce, .x=0xd1, .y=0x1c, .sp=0xfd, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x4dcf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4dd0, .a=0xcd, .x=0xd1, .y=0x1c, .sp=0xfd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4dcf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4dcf, .value=0x9c, .type=IO_READ},
        {.addr=0x4dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0341) {
    const struct CPU_State initial_cpu = {.pc=0xeb4e, .a=0xd6, .x=0x0c, .y=0x47, .sp=0x24, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xeb4e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xeb4f, .a=0xd5, .x=0x0c, .y=0x47, .sp=0x24, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xeb4e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xeb4e, .value=0x9c, .type=IO_READ},
        {.addr=0xeb4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0342) {
    const struct CPU_State initial_cpu = {.pc=0x60b0, .a=0xac, .x=0x45, .y=0x0d, .sp=0x94, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x60b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x60b1, .a=0xab, .x=0x45, .y=0x0d, .sp=0x94, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x60b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x60b0, .value=0x9c, .type=IO_READ},
        {.addr=0x60b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0343) {
    const struct CPU_State initial_cpu = {.pc=0x5607, .a=0x0f, .x=0x17, .y=0x41, .sp=0xfe, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x5607, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5608, .a=0x0e, .x=0x17, .y=0x41, .sp=0xfe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5607, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5607, .value=0x9c, .type=IO_READ},
        {.addr=0x5608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0344) {
    const struct CPU_State initial_cpu = {.pc=0xfeec, .a=0x4f, .x=0x93, .y=0xf3, .sp=0xfd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xfeec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfeed, .a=0x4e, .x=0x93, .y=0xf3, .sp=0xfd, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfeec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfeec, .value=0x9c, .type=IO_READ},
        {.addr=0xfeed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0345) {
    const struct CPU_State initial_cpu = {.pc=0x0c1f, .a=0x59, .x=0xa5, .y=0xe3, .sp=0xf9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0c20, .a=0x58, .x=0xa5, .y=0xe3, .sp=0xf9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0c1f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0c1f, .value=0x9c, .type=IO_READ},
        {.addr=0x0c20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0346) {
    const struct CPU_State initial_cpu = {.pc=0x96ed, .a=0xe7, .x=0xd7, .y=0xad, .sp=0x0d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x96ed, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x96ee, .a=0xe6, .x=0xd7, .y=0xad, .sp=0x0d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x96ed, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x96ed, .value=0x9c, .type=IO_READ},
        {.addr=0x96ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0347) {
    const struct CPU_State initial_cpu = {.pc=0x312b, .a=0xde, .x=0xd8, .y=0xc9, .sp=0xd7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x312b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x312c, .a=0xdd, .x=0xd8, .y=0xc9, .sp=0xd7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x312b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x312b, .value=0x9c, .type=IO_READ},
        {.addr=0x312c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe031, .a=0x68, .x=0xe1, .y=0x67, .sp=0x1b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe031, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe032, .a=0x67, .x=0xe1, .y=0x67, .sp=0x1b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe031, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe031, .value=0x9c, .type=IO_READ},
        {.addr=0xe032, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0349) {
    const struct CPU_State initial_cpu = {.pc=0xd192, .a=0x6c, .x=0x41, .y=0xc4, .sp=0xc2, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd192, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd193, .a=0x6b, .x=0x41, .y=0xc4, .sp=0xc2, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd192, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd192, .value=0x9c, .type=IO_READ},
        {.addr=0xd193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034A) {
    const struct CPU_State initial_cpu = {.pc=0xc6e1, .a=0xac, .x=0x0a, .y=0x73, .sp=0x72, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc6e1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc6e2, .a=0xab, .x=0x0a, .y=0x73, .sp=0x72, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc6e1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc6e1, .value=0x9c, .type=IO_READ},
        {.addr=0xc6e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034B) {
    const struct CPU_State initial_cpu = {.pc=0x45f7, .a=0xc9, .x=0x4c, .y=0xc3, .sp=0xfa, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x45f7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x45f8, .a=0xc8, .x=0x4c, .y=0xc3, .sp=0xfa, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x45f7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x45f7, .value=0x9c, .type=IO_READ},
        {.addr=0x45f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034C) {
    const struct CPU_State initial_cpu = {.pc=0x30ac, .a=0xa1, .x=0xd7, .y=0x0f, .sp=0x4b, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x30ac, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x30ad, .a=0xa0, .x=0xd7, .y=0x0f, .sp=0x4b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x30ac, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x30ac, .value=0x9c, .type=IO_READ},
        {.addr=0x30ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034D) {
    const struct CPU_State initial_cpu = {.pc=0x5d48, .a=0x33, .x=0x54, .y=0x4b, .sp=0x7f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x5d48, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5d49, .a=0x32, .x=0x54, .y=0x4b, .sp=0x7f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5d48, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5d48, .value=0x9c, .type=IO_READ},
        {.addr=0x5d49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034E) {
    const struct CPU_State initial_cpu = {.pc=0xf3ad, .a=0x5d, .x=0x1f, .y=0x4e, .sp=0x6c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ad, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf3ae, .a=0x5c, .x=0x1f, .y=0x4e, .sp=0x6c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf3ad, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf3ad, .value=0x9c, .type=IO_READ},
        {.addr=0xf3ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_034F) {
    const struct CPU_State initial_cpu = {.pc=0xf3ec, .a=0x47, .x=0x05, .y=0xdd, .sp=0xd1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ec, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf3ed, .a=0x46, .x=0x05, .y=0xdd, .sp=0xd1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf3ec, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf3ec, .value=0x9c, .type=IO_READ},
        {.addr=0xf3ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0350) {
    const struct CPU_State initial_cpu = {.pc=0x432f, .a=0x86, .x=0xc5, .y=0xd9, .sp=0x47, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x432f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4330, .a=0x85, .x=0xc5, .y=0xd9, .sp=0x47, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x432f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x432f, .value=0x9c, .type=IO_READ},
        {.addr=0x4330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0351) {
    const struct CPU_State initial_cpu = {.pc=0x7996, .a=0x1d, .x=0xa6, .y=0x1d, .sp=0x12, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7996, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7997, .a=0x1c, .x=0xa6, .y=0x1d, .sp=0x12, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7996, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7996, .value=0x9c, .type=IO_READ},
        {.addr=0x7997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0352) {
    const struct CPU_State initial_cpu = {.pc=0x839f, .a=0xc1, .x=0xcd, .y=0x7f, .sp=0x97, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x839f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x83a0, .a=0xc0, .x=0xcd, .y=0x7f, .sp=0x97, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x839f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x839f, .value=0x9c, .type=IO_READ},
        {.addr=0x83a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0353) {
    const struct CPU_State initial_cpu = {.pc=0x5c1b, .a=0xb0, .x=0x37, .y=0x2b, .sp=0x87, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5c1b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5c1c, .a=0xaf, .x=0x37, .y=0x2b, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5c1b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5c1b, .value=0x9c, .type=IO_READ},
        {.addr=0x5c1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9586, .a=0x93, .x=0x05, .y=0xe5, .sp=0x41, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9586, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9587, .a=0x92, .x=0x05, .y=0xe5, .sp=0x41, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9586, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9586, .value=0x9c, .type=IO_READ},
        {.addr=0x9587, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0355) {
    const struct CPU_State initial_cpu = {.pc=0x0f8f, .a=0xf6, .x=0x69, .y=0x3b, .sp=0x4e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0f8f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0f90, .a=0xf5, .x=0x69, .y=0x3b, .sp=0x4e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0f8f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0f8f, .value=0x9c, .type=IO_READ},
        {.addr=0x0f90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0356) {
    const struct CPU_State initial_cpu = {.pc=0x5c14, .a=0xe5, .x=0x38, .y=0x2c, .sp=0xc3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5c14, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5c15, .a=0xe4, .x=0x38, .y=0x2c, .sp=0xc3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5c14, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5c14, .value=0x9c, .type=IO_READ},
        {.addr=0x5c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0357) {
    const struct CPU_State initial_cpu = {.pc=0xbbf9, .a=0xea, .x=0x32, .y=0x58, .sp=0x4a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbbfa, .a=0xe9, .x=0x32, .y=0x58, .sp=0x4a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xbbf9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbbf9, .value=0x9c, .type=IO_READ},
        {.addr=0xbbfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0358) {
    const struct CPU_State initial_cpu = {.pc=0x77be, .a=0xe8, .x=0xb6, .y=0x18, .sp=0x9e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x77be, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x77bf, .a=0xe7, .x=0xb6, .y=0x18, .sp=0x9e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x77be, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x77be, .value=0x9c, .type=IO_READ},
        {.addr=0x77bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0359) {
    const struct CPU_State initial_cpu = {.pc=0x4033, .a=0x39, .x=0xbc, .y=0xc3, .sp=0x97, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4033, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4034, .a=0x38, .x=0xbc, .y=0xc3, .sp=0x97, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4033, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4033, .value=0x9c, .type=IO_READ},
        {.addr=0x4034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3ccd, .a=0xda, .x=0x9e, .y=0x07, .sp=0x5f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x3ccd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3cce, .a=0xd9, .x=0x9e, .y=0x07, .sp=0x5f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3ccd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3ccd, .value=0x9c, .type=IO_READ},
        {.addr=0x3cce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035B) {
    const struct CPU_State initial_cpu = {.pc=0xd750, .a=0xff, .x=0xf4, .y=0x44, .sp=0xc4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd750, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd751, .a=0xfe, .x=0xf4, .y=0x44, .sp=0xc4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd750, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd750, .value=0x9c, .type=IO_READ},
        {.addr=0xd751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035C) {
    const struct CPU_State initial_cpu = {.pc=0x39c2, .a=0x36, .x=0xe6, .y=0xa8, .sp=0xbe, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x39c2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x39c3, .a=0x35, .x=0xe6, .y=0xa8, .sp=0xbe, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x39c2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x39c2, .value=0x9c, .type=IO_READ},
        {.addr=0x39c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035D) {
    const struct CPU_State initial_cpu = {.pc=0x4d05, .a=0xdb, .x=0xed, .y=0x94, .sp=0x1d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4d05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4d06, .a=0xda, .x=0xed, .y=0x94, .sp=0x1d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4d05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4d05, .value=0x9c, .type=IO_READ},
        {.addr=0x4d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5974, .a=0x98, .x=0x69, .y=0x0f, .sp=0xd2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5974, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5975, .a=0x97, .x=0x69, .y=0x0f, .sp=0xd2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5974, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5974, .value=0x9c, .type=IO_READ},
        {.addr=0x5975, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_035F) {
    const struct CPU_State initial_cpu = {.pc=0x1b02, .a=0x2b, .x=0xf4, .y=0x16, .sp=0xe8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x1b02, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1b03, .a=0x2a, .x=0xf4, .y=0x16, .sp=0xe8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1b02, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b02, .value=0x9c, .type=IO_READ},
        {.addr=0x1b03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0360) {
    const struct CPU_State initial_cpu = {.pc=0x88c7, .a=0xee, .x=0x20, .y=0x89, .sp=0xa1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x88c7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x88c8, .a=0xed, .x=0x20, .y=0x89, .sp=0xa1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x88c7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x88c7, .value=0x9c, .type=IO_READ},
        {.addr=0x88c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0361) {
    const struct CPU_State initial_cpu = {.pc=0xec50, .a=0xb8, .x=0x0b, .y=0x1a, .sp=0xcb, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xec50, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xec51, .a=0xb7, .x=0x0b, .y=0x1a, .sp=0xcb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xec50, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xec50, .value=0x9c, .type=IO_READ},
        {.addr=0xec51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe805, .a=0xf9, .x=0x01, .y=0xd6, .sp=0xd3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe805, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe806, .a=0xf8, .x=0x01, .y=0xd6, .sp=0xd3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe805, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe805, .value=0x9c, .type=IO_READ},
        {.addr=0xe806, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0363) {
    const struct CPU_State initial_cpu = {.pc=0xfe66, .a=0x3b, .x=0xa7, .y=0x8f, .sp=0x53, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xfe66, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xfe67, .a=0x3a, .x=0xa7, .y=0x8f, .sp=0x53, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfe66, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xfe66, .value=0x9c, .type=IO_READ},
        {.addr=0xfe67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf229, .a=0x2b, .x=0x0e, .y=0x8a, .sp=0xd9, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf229, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf22a, .a=0x2a, .x=0x0e, .y=0x8a, .sp=0xd9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf229, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf229, .value=0x9c, .type=IO_READ},
        {.addr=0xf22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0365) {
    const struct CPU_State initial_cpu = {.pc=0xff86, .a=0x79, .x=0x99, .y=0x2e, .sp=0xc3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xff86, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xff87, .a=0x78, .x=0x99, .y=0x2e, .sp=0xc3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xff86, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xff86, .value=0x9c, .type=IO_READ},
        {.addr=0xff87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0366) {
    const struct CPU_State initial_cpu = {.pc=0xa1b4, .a=0x5f, .x=0x52, .y=0x0d, .sp=0x64, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa1b5, .a=0x5e, .x=0x52, .y=0x0d, .sp=0x64, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa1b4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa1b4, .value=0x9c, .type=IO_READ},
        {.addr=0xa1b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0367) {
    const struct CPU_State initial_cpu = {.pc=0xd48e, .a=0x6d, .x=0x42, .y=0x4b, .sp=0x5d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xd48e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd48f, .a=0x6c, .x=0x42, .y=0x4b, .sp=0x5d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd48e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd48e, .value=0x9c, .type=IO_READ},
        {.addr=0xd48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4802, .a=0x45, .x=0x60, .y=0x72, .sp=0x7a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x4802, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4803, .a=0x44, .x=0x60, .y=0x72, .sp=0x7a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4802, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4802, .value=0x9c, .type=IO_READ},
        {.addr=0x4803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0369) {
    const struct CPU_State initial_cpu = {.pc=0xf653, .a=0x84, .x=0x5a, .y=0x8c, .sp=0xa8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xf653, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf654, .a=0x83, .x=0x5a, .y=0x8c, .sp=0xa8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf653, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf653, .value=0x9c, .type=IO_READ},
        {.addr=0xf654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036A) {
    const struct CPU_State initial_cpu = {.pc=0x7c2a, .a=0x69, .x=0x21, .y=0x5f, .sp=0x31, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7c2a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7c2b, .a=0x68, .x=0x21, .y=0x5f, .sp=0x31, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7c2a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7c2a, .value=0x9c, .type=IO_READ},
        {.addr=0x7c2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036B) {
    const struct CPU_State initial_cpu = {.pc=0xb02d, .a=0x36, .x=0xc6, .y=0x32, .sp=0x5b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb02d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb02e, .a=0x35, .x=0xc6, .y=0x32, .sp=0x5b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb02d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb02d, .value=0x9c, .type=IO_READ},
        {.addr=0xb02e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036C) {
    const struct CPU_State initial_cpu = {.pc=0xc5a9, .a=0x63, .x=0x4f, .y=0x01, .sp=0x7c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc5aa, .a=0x62, .x=0x4f, .y=0x01, .sp=0x7c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc5a9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc5a9, .value=0x9c, .type=IO_READ},
        {.addr=0xc5aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036D) {
    const struct CPU_State initial_cpu = {.pc=0x8aee, .a=0x94, .x=0x8c, .y=0xbd, .sp=0xac, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8aee, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8aef, .a=0x93, .x=0x8c, .y=0xbd, .sp=0xac, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8aee, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8aee, .value=0x9c, .type=IO_READ},
        {.addr=0x8aef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036E) {
    const struct CPU_State initial_cpu = {.pc=0x4ef4, .a=0xe1, .x=0xf2, .y=0x81, .sp=0x2f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4ef5, .a=0xe0, .x=0xf2, .y=0x81, .sp=0x2f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4ef4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4ef4, .value=0x9c, .type=IO_READ},
        {.addr=0x4ef5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_036F) {
    const struct CPU_State initial_cpu = {.pc=0x51cb, .a=0x3b, .x=0x5a, .y=0x42, .sp=0x0d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x51cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x51cc, .a=0x3a, .x=0x5a, .y=0x42, .sp=0x0d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x51cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x51cb, .value=0x9c, .type=IO_READ},
        {.addr=0x51cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0370) {
    const struct CPU_State initial_cpu = {.pc=0x0c86, .a=0x39, .x=0x40, .y=0x3b, .sp=0x4f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0c86, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0c87, .a=0x38, .x=0x40, .y=0x3b, .sp=0x4f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0c86, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0c86, .value=0x9c, .type=IO_READ},
        {.addr=0x0c87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0371) {
    const struct CPU_State initial_cpu = {.pc=0x8e9a, .a=0xaf, .x=0xc1, .y=0x32, .sp=0x0c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8e9a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8e9b, .a=0xae, .x=0xc1, .y=0x32, .sp=0x0c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8e9a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8e9a, .value=0x9c, .type=IO_READ},
        {.addr=0x8e9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0372) {
    const struct CPU_State initial_cpu = {.pc=0x2df4, .a=0x0d, .x=0x3a, .y=0xc9, .sp=0x48, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x2df4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2df5, .a=0x0c, .x=0x3a, .y=0xc9, .sp=0x48, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2df4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2df4, .value=0x9c, .type=IO_READ},
        {.addr=0x2df5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4f99, .a=0x1d, .x=0xb0, .y=0xf8, .sp=0xbe, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4f99, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4f9a, .a=0x1c, .x=0xb0, .y=0xf8, .sp=0xbe, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4f99, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4f99, .value=0x9c, .type=IO_READ},
        {.addr=0x4f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6ee7, .a=0x35, .x=0xd6, .y=0x75, .sp=0xa7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6ee8, .a=0x34, .x=0xd6, .y=0x75, .sp=0xa7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6ee7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6ee7, .value=0x9c, .type=IO_READ},
        {.addr=0x6ee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0375) {
    const struct CPU_State initial_cpu = {.pc=0x11f2, .a=0xad, .x=0x85, .y=0xf0, .sp=0x77, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x11f2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x11f3, .a=0xac, .x=0x85, .y=0xf0, .sp=0x77, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x11f2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x11f2, .value=0x9c, .type=IO_READ},
        {.addr=0x11f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0376) {
    const struct CPU_State initial_cpu = {.pc=0x9f0a, .a=0x9d, .x=0xc5, .y=0x51, .sp=0x17, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9f0b, .a=0x9c, .x=0xc5, .y=0x51, .sp=0x17, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9f0a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9f0a, .value=0x9c, .type=IO_READ},
        {.addr=0x9f0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0377) {
    const struct CPU_State initial_cpu = {.pc=0x3977, .a=0x47, .x=0x83, .y=0x6c, .sp=0x3e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3977, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3978, .a=0x46, .x=0x83, .y=0x6c, .sp=0x3e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x3977, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3977, .value=0x9c, .type=IO_READ},
        {.addr=0x3978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0378) {
    const struct CPU_State initial_cpu = {.pc=0xe9b0, .a=0x58, .x=0xcb, .y=0xfe, .sp=0x86, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe9b1, .a=0x57, .x=0xcb, .y=0xfe, .sp=0x86, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe9b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe9b0, .value=0x9c, .type=IO_READ},
        {.addr=0xe9b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0379) {
    const struct CPU_State initial_cpu = {.pc=0x8c5b, .a=0x10, .x=0x8d, .y=0xd5, .sp=0xb9, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8c5c, .a=0x0f, .x=0x8d, .y=0xd5, .sp=0xb9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8c5b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8c5b, .value=0x9c, .type=IO_READ},
        {.addr=0x8c5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037A) {
    const struct CPU_State initial_cpu = {.pc=0x9267, .a=0x48, .x=0xe0, .y=0x3a, .sp=0x74, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9267, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9268, .a=0x47, .x=0xe0, .y=0x3a, .sp=0x74, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9267, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9267, .value=0x9c, .type=IO_READ},
        {.addr=0x9268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037B) {
    const struct CPU_State initial_cpu = {.pc=0xdef5, .a=0x77, .x=0xd4, .y=0xf5, .sp=0x97, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xdef5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdef6, .a=0x76, .x=0xd4, .y=0xf5, .sp=0x97, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdef5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdef5, .value=0x9c, .type=IO_READ},
        {.addr=0xdef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037C) {
    const struct CPU_State initial_cpu = {.pc=0xc0d4, .a=0x16, .x=0x82, .y=0x1d, .sp=0x56, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc0d5, .a=0x15, .x=0x82, .y=0x1d, .sp=0x56, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc0d4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc0d4, .value=0x9c, .type=IO_READ},
        {.addr=0xc0d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037D) {
    const struct CPU_State initial_cpu = {.pc=0x7c91, .a=0x04, .x=0x85, .y=0x9c, .sp=0x30, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7c91, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7c92, .a=0x03, .x=0x85, .y=0x9c, .sp=0x30, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7c91, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7c91, .value=0x9c, .type=IO_READ},
        {.addr=0x7c92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037E) {
    const struct CPU_State initial_cpu = {.pc=0x739c, .a=0x2a, .x=0xcb, .y=0xa4, .sp=0x8e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x739c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x739d, .a=0x29, .x=0xcb, .y=0xa4, .sp=0x8e, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x739c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x739c, .value=0x9c, .type=IO_READ},
        {.addr=0x739d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_037F) {
    const struct CPU_State initial_cpu = {.pc=0xc1a6, .a=0xce, .x=0x17, .y=0x86, .sp=0x3c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc1a7, .a=0xcd, .x=0x17, .y=0x86, .sp=0x3c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc1a6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc1a6, .value=0x9c, .type=IO_READ},
        {.addr=0xc1a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0380) {
    const struct CPU_State initial_cpu = {.pc=0x9f1c, .a=0x80, .x=0x51, .y=0xcf, .sp=0x3b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9f1c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9f1d, .a=0x7f, .x=0x51, .y=0xcf, .sp=0x3b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9f1c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9f1c, .value=0x9c, .type=IO_READ},
        {.addr=0x9f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0381) {
    const struct CPU_State initial_cpu = {.pc=0x837b, .a=0xcf, .x=0x9c, .y=0x36, .sp=0x75, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x837b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x837c, .a=0xce, .x=0x9c, .y=0x36, .sp=0x75, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x837b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x837b, .value=0x9c, .type=IO_READ},
        {.addr=0x837c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8bda, .a=0x82, .x=0xe2, .y=0x90, .sp=0xd1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8bda, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8bdb, .a=0x81, .x=0xe2, .y=0x90, .sp=0xd1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8bda, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8bda, .value=0x9c, .type=IO_READ},
        {.addr=0x8bdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0383) {
    const struct CPU_State initial_cpu = {.pc=0x0412, .a=0xbc, .x=0x00, .y=0x41, .sp=0xfb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0412, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0413, .a=0xbb, .x=0x00, .y=0x41, .sp=0xfb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0412, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0412, .value=0x9c, .type=IO_READ},
        {.addr=0x0413, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1460, .a=0xf5, .x=0x46, .y=0x12, .sp=0xf8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x1460, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1461, .a=0xf4, .x=0x46, .y=0x12, .sp=0xf8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1460, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1460, .value=0x9c, .type=IO_READ},
        {.addr=0x1461, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0385) {
    const struct CPU_State initial_cpu = {.pc=0xace3, .a=0x4d, .x=0xef, .y=0xd1, .sp=0x0a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xace3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xace4, .a=0x4c, .x=0xef, .y=0xd1, .sp=0x0a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xace3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xace3, .value=0x9c, .type=IO_READ},
        {.addr=0xace4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3e83, .a=0xeb, .x=0xb4, .y=0xb1, .sp=0x95, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x3e83, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3e84, .a=0xea, .x=0xb4, .y=0xb1, .sp=0x95, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3e83, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3e83, .value=0x9c, .type=IO_READ},
        {.addr=0x3e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0387) {
    const struct CPU_State initial_cpu = {.pc=0x8294, .a=0xf6, .x=0x8e, .y=0x33, .sp=0xad, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8294, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8295, .a=0xf5, .x=0x8e, .y=0x33, .sp=0xad, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8294, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8294, .value=0x9c, .type=IO_READ},
        {.addr=0x8295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0388) {
    const struct CPU_State initial_cpu = {.pc=0xba4b, .a=0x28, .x=0x32, .y=0xba, .sp=0xe2, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xba4b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xba4c, .a=0x27, .x=0x32, .y=0xba, .sp=0xe2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xba4b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xba4b, .value=0x9c, .type=IO_READ},
        {.addr=0xba4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0389) {
    const struct CPU_State initial_cpu = {.pc=0x643e, .a=0xa7, .x=0xab, .y=0x7c, .sp=0xc4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x643e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x643f, .a=0xa6, .x=0xab, .y=0x7c, .sp=0xc4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x643e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x643e, .value=0x9c, .type=IO_READ},
        {.addr=0x643f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6a15, .a=0xaf, .x=0xc2, .y=0x81, .sp=0xf5, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6a15, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x6a16, .a=0xae, .x=0xc2, .y=0x81, .sp=0xf5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6a15, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6a15, .value=0x9c, .type=IO_READ},
        {.addr=0x6a16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb322, .a=0x68, .x=0x68, .y=0xfd, .sp=0x0c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb322, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb323, .a=0x67, .x=0x68, .y=0xfd, .sp=0x0c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb322, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb322, .value=0x9c, .type=IO_READ},
        {.addr=0xb323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038C) {
    const struct CPU_State initial_cpu = {.pc=0x640b, .a=0x64, .x=0x7d, .y=0x5f, .sp=0x28, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x640b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x640c, .a=0x63, .x=0x7d, .y=0x5f, .sp=0x28, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x640b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x640b, .value=0x9c, .type=IO_READ},
        {.addr=0x640c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038D) {
    const struct CPU_State initial_cpu = {.pc=0x3b43, .a=0xb1, .x=0x60, .y=0x91, .sp=0xf9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b43, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b44, .a=0xb0, .x=0x60, .y=0x91, .sp=0xf9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3b43, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b43, .value=0x9c, .type=IO_READ},
        {.addr=0x3b44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038E) {
    const struct CPU_State initial_cpu = {.pc=0x458a, .a=0xe7, .x=0x86, .y=0x52, .sp=0x87, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x458a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x458b, .a=0xe6, .x=0x86, .y=0x52, .sp=0x87, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x458a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x458a, .value=0x9c, .type=IO_READ},
        {.addr=0x458b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_038F) {
    const struct CPU_State initial_cpu = {.pc=0x06ca, .a=0xa5, .x=0xdb, .y=0x68, .sp=0xc8, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x06ca, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x06cb, .a=0xa4, .x=0xdb, .y=0x68, .sp=0xc8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x06ca, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x06ca, .value=0x9c, .type=IO_READ},
        {.addr=0x06cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0390) {
    const struct CPU_State initial_cpu = {.pc=0xd2cb, .a=0xd9, .x=0x03, .y=0x2b, .sp=0x2a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd2cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd2cc, .a=0xd8, .x=0x03, .y=0x2b, .sp=0x2a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd2cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd2cb, .value=0x9c, .type=IO_READ},
        {.addr=0xd2cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0391) {
    const struct CPU_State initial_cpu = {.pc=0x50c6, .a=0x37, .x=0xd0, .y=0x80, .sp=0xcb, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x50c6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x50c7, .a=0x36, .x=0xd0, .y=0x80, .sp=0xcb, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x50c6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x50c6, .value=0x9c, .type=IO_READ},
        {.addr=0x50c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0392) {
    const struct CPU_State initial_cpu = {.pc=0x535f, .a=0x29, .x=0x60, .y=0xa6, .sp=0xb4, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x535f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5360, .a=0x28, .x=0x60, .y=0xa6, .sp=0xb4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x535f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x535f, .value=0x9c, .type=IO_READ},
        {.addr=0x5360, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0393) {
    const struct CPU_State initial_cpu = {.pc=0x1b08, .a=0x84, .x=0x95, .y=0x22, .sp=0x1c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1b08, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1b09, .a=0x83, .x=0x95, .y=0x22, .sp=0x1c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1b08, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b08, .value=0x9c, .type=IO_READ},
        {.addr=0x1b09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0394) {
    const struct CPU_State initial_cpu = {.pc=0x31a5, .a=0xd1, .x=0x50, .y=0xe8, .sp=0x2a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x31a5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x31a6, .a=0xd0, .x=0x50, .y=0xe8, .sp=0x2a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x31a5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x31a5, .value=0x9c, .type=IO_READ},
        {.addr=0x31a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6859, .a=0xb7, .x=0x88, .y=0x3e, .sp=0x31, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6859, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x685a, .a=0xb6, .x=0x88, .y=0x3e, .sp=0x31, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6859, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x6859, .value=0x9c, .type=IO_READ},
        {.addr=0x685a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0396) {
    const struct CPU_State initial_cpu = {.pc=0xa63d, .a=0xc0, .x=0xb7, .y=0x7a, .sp=0xc0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa63d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa63e, .a=0xbf, .x=0xb7, .y=0x7a, .sp=0xc0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa63d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa63d, .value=0x9c, .type=IO_READ},
        {.addr=0xa63e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0397) {
    const struct CPU_State initial_cpu = {.pc=0x293d, .a=0x0f, .x=0x62, .y=0x1c, .sp=0x9d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x293d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x293e, .a=0x0e, .x=0x62, .y=0x1c, .sp=0x9d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x293d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x293d, .value=0x9c, .type=IO_READ},
        {.addr=0x293e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0398) {
    const struct CPU_State initial_cpu = {.pc=0x9e39, .a=0xca, .x=0xec, .y=0x6e, .sp=0xec, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e39, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9e3a, .a=0xc9, .x=0xec, .y=0x6e, .sp=0xec, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9e39, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9e39, .value=0x9c, .type=IO_READ},
        {.addr=0x9e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_0399) {
    const struct CPU_State initial_cpu = {.pc=0x41ae, .a=0xdd, .x=0x3d, .y=0x9f, .sp=0x41, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x41ae, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x41af, .a=0xdc, .x=0x3d, .y=0x9f, .sp=0x41, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x41ae, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x41ae, .value=0x9c, .type=IO_READ},
        {.addr=0x41af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039A) {
    const struct CPU_State initial_cpu = {.pc=0x3622, .a=0xb4, .x=0x93, .y=0x6e, .sp=0x38, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x3622, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3623, .a=0xb3, .x=0x93, .y=0x6e, .sp=0x38, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3622, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3622, .value=0x9c, .type=IO_READ},
        {.addr=0x3623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039B) {
    const struct CPU_State initial_cpu = {.pc=0xb6d6, .a=0xf9, .x=0x34, .y=0xfb, .sp=0x9f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb6d7, .a=0xf8, .x=0x34, .y=0xfb, .sp=0x9f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb6d6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb6d6, .value=0x9c, .type=IO_READ},
        {.addr=0xb6d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039C) {
    const struct CPU_State initial_cpu = {.pc=0x0d20, .a=0x6e, .x=0x2a, .y=0xd2, .sp=0xce, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0d20, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0d21, .a=0x6d, .x=0x2a, .y=0xd2, .sp=0xce, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0d20, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0d20, .value=0x9c, .type=IO_READ},
        {.addr=0x0d21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039D) {
    const struct CPU_State initial_cpu = {.pc=0x2f1c, .a=0xd0, .x=0x49, .y=0x59, .sp=0x85, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2f1c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2f1d, .a=0xcf, .x=0x49, .y=0x59, .sp=0x85, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2f1c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2f1c, .value=0x9c, .type=IO_READ},
        {.addr=0x2f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039E) {
    const struct CPU_State initial_cpu = {.pc=0xbaba, .a=0xc2, .x=0x4c, .y=0x6f, .sp=0x71, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xbaba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbabb, .a=0xc1, .x=0x4c, .y=0x6f, .sp=0x71, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xbaba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbaba, .value=0x9c, .type=IO_READ},
        {.addr=0xbabb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe491, .a=0xce, .x=0xce, .y=0xda, .sp=0x8b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe491, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe492, .a=0xcd, .x=0xce, .y=0xda, .sp=0x8b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe491, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe491, .value=0x9c, .type=IO_READ},
        {.addr=0xe492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x47ba, .a=0xff, .x=0x0f, .y=0xf8, .sp=0xc1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x47ba, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x47bb, .a=0xfe, .x=0x0f, .y=0xf8, .sp=0xc1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x47ba, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x47ba, .value=0x9c, .type=IO_READ},
        {.addr=0x47bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1b55, .a=0xdf, .x=0xcf, .y=0x1d, .sp=0xb7, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1b55, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1b56, .a=0xde, .x=0xcf, .y=0x1d, .sp=0xb7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1b55, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1b55, .value=0x9c, .type=IO_READ},
        {.addr=0x1b56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xc4c5, .a=0xc0, .x=0xea, .y=0x19, .sp=0x57, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc4c6, .a=0xbf, .x=0xea, .y=0x19, .sp=0x57, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc4c5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc4c5, .value=0x9c, .type=IO_READ},
        {.addr=0xc4c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x4ebd, .a=0x6b, .x=0xbe, .y=0xe5, .sp=0x12, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4ebd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4ebe, .a=0x6a, .x=0xbe, .y=0xe5, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4ebd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4ebd, .value=0x9c, .type=IO_READ},
        {.addr=0x4ebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4c40, .a=0xb3, .x=0xdf, .y=0xf8, .sp=0xdd, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x4c40, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c41, .a=0xb2, .x=0xdf, .y=0xf8, .sp=0xdd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4c40, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c40, .value=0x9c, .type=IO_READ},
        {.addr=0x4c41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xdedb, .a=0x9f, .x=0xf8, .y=0xe6, .sp=0x01, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdedb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdedc, .a=0x9e, .x=0xf8, .y=0xe6, .sp=0x01, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xdedb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdedb, .value=0x9c, .type=IO_READ},
        {.addr=0xdedc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x03ee, .a=0x16, .x=0x57, .y=0xba, .sp=0xd0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x03ee, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x03ef, .a=0x15, .x=0x57, .y=0xba, .sp=0xd0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x03ee, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x03ee, .value=0x9c, .type=IO_READ},
        {.addr=0x03ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xcbcd, .a=0xc4, .x=0xcc, .y=0xd2, .sp=0xb5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcbcd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xcbce, .a=0xc3, .x=0xcc, .y=0xd2, .sp=0xb5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcbcd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xcbcd, .value=0x9c, .type=IO_READ},
        {.addr=0xcbce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xa508, .a=0x4f, .x=0xed, .y=0xab, .sp=0xd1, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xa508, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa509, .a=0x4e, .x=0xed, .y=0xab, .sp=0xd1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa508, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa508, .value=0x9c, .type=IO_READ},
        {.addr=0xa509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xa67c, .a=0x2d, .x=0x6c, .y=0x2f, .sp=0x89, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa67c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa67d, .a=0x2c, .x=0x6c, .y=0x2f, .sp=0x89, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa67c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa67c, .value=0x9c, .type=IO_READ},
        {.addr=0xa67d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x8918, .a=0x9c, .x=0xee, .y=0x2d, .sp=0x15, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8918, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8919, .a=0x9b, .x=0xee, .y=0x2d, .sp=0x15, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8918, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x8918, .value=0x9c, .type=IO_READ},
        {.addr=0x8919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x3d63, .a=0xa7, .x=0x71, .y=0x29, .sp=0x46, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3d63, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3d64, .a=0xa6, .x=0x71, .y=0x29, .sp=0x46, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3d63, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3d63, .value=0x9c, .type=IO_READ},
        {.addr=0x3d64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xdf7b, .a=0x83, .x=0x62, .y=0xb5, .sp=0xf3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdf7c, .a=0x82, .x=0x62, .y=0xb5, .sp=0xf3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xdf7b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdf7b, .value=0x9c, .type=IO_READ},
        {.addr=0xdf7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xbe75, .a=0x2e, .x=0x1d, .y=0x51, .sp=0x40, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xbe75, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbe76, .a=0x2d, .x=0x1d, .y=0x51, .sp=0x40, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbe75, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbe75, .value=0x9c, .type=IO_READ},
        {.addr=0xbe76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3e33, .a=0x9a, .x=0x5f, .y=0x7f, .sp=0xfb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3e33, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3e34, .a=0x99, .x=0x5f, .y=0x7f, .sp=0xfb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3e33, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3e33, .value=0x9c, .type=IO_READ},
        {.addr=0x3e34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7be5, .a=0x02, .x=0xaa, .y=0xc2, .sp=0x42, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x7be5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7be6, .a=0x01, .x=0xaa, .y=0xc2, .sp=0x42, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7be5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7be5, .value=0x9c, .type=IO_READ},
        {.addr=0x7be6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x9b78, .a=0x35, .x=0x4b, .y=0x1d, .sp=0xd9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9b78, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9b79, .a=0x34, .x=0x4b, .y=0x1d, .sp=0xd9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9b78, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9b78, .value=0x9c, .type=IO_READ},
        {.addr=0x9b79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x2d05, .a=0xd6, .x=0x1b, .y=0x79, .sp=0x5c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2d05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d06, .a=0xd5, .x=0x1b, .y=0x79, .sp=0x5c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2d05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2d05, .value=0x9c, .type=IO_READ},
        {.addr=0x2d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xdf17, .a=0x49, .x=0xa7, .y=0x08, .sp=0xc1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xdf17, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdf18, .a=0x48, .x=0xa7, .y=0x08, .sp=0xc1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xdf17, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdf17, .value=0x9c, .type=IO_READ},
        {.addr=0xdf18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xb68c, .a=0x40, .x=0x1d, .y=0xdf, .sp=0xc9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb68c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb68d, .a=0x3f, .x=0x1d, .y=0xdf, .sp=0xc9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb68c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb68c, .value=0x9c, .type=IO_READ},
        {.addr=0xb68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb87e, .a=0x68, .x=0xfd, .y=0xd7, .sp=0x3d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xb87e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb87f, .a=0x67, .x=0xfd, .y=0xd7, .sp=0x3d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb87e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb87e, .value=0x9c, .type=IO_READ},
        {.addr=0xb87f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xad7a, .a=0x09, .x=0x84, .y=0xaf, .sp=0x7a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xad7a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xad7b, .a=0x08, .x=0x84, .y=0xaf, .sp=0x7a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xad7a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xad7a, .value=0x9c, .type=IO_READ},
        {.addr=0xad7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xa236, .a=0x5c, .x=0x2c, .y=0x58, .sp=0x0c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa236, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa237, .a=0x5b, .x=0x2c, .y=0x58, .sp=0x0c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa236, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa236, .value=0x9c, .type=IO_READ},
        {.addr=0xa237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x839a, .a=0x2a, .x=0xec, .y=0x4d, .sp=0x39, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x839a, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x839b, .a=0x29, .x=0xec, .y=0x4d, .sp=0x39, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x839a, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x839a, .value=0x9c, .type=IO_READ},
        {.addr=0x839b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x456f, .a=0x54, .x=0x83, .y=0xf7, .sp=0xe8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x456f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4570, .a=0x53, .x=0x83, .y=0xf7, .sp=0xe8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x456f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x456f, .value=0x9c, .type=IO_READ},
        {.addr=0x4570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x21a6, .a=0xfb, .x=0x00, .y=0xa1, .sp=0x4d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x21a6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x21a7, .a=0xfa, .x=0x00, .y=0xa1, .sp=0x4d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x21a6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x21a6, .value=0x9c, .type=IO_READ},
        {.addr=0x21a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x899c, .a=0x5d, .x=0x89, .y=0xfc, .sp=0x0e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x899c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x899d, .a=0x5c, .x=0x89, .y=0xfc, .sp=0x0e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x899c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x899c, .value=0x9c, .type=IO_READ},
        {.addr=0x899d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x3409, .a=0x29, .x=0x45, .y=0x47, .sp=0xe5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x3409, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x340a, .a=0x28, .x=0x45, .y=0x47, .sp=0xe5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3409, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3409, .value=0x9c, .type=IO_READ},
        {.addr=0x340a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xd9ce, .a=0xba, .x=0x46, .y=0x3c, .sp=0xba, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ce, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd9cf, .a=0xb9, .x=0x46, .y=0x3c, .sp=0xba, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd9ce, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd9ce, .value=0x9c, .type=IO_READ},
        {.addr=0xd9cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x04c2, .a=0x3f, .x=0x16, .y=0x75, .sp=0x7b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x04c2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x04c3, .a=0x3e, .x=0x16, .y=0x75, .sp=0x7b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x04c2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x04c2, .value=0x9c, .type=IO_READ},
        {.addr=0x04c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x5a0d, .a=0xa1, .x=0xde, .y=0x88, .sp=0x42, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5a0e, .a=0xa0, .x=0xde, .y=0x88, .sp=0x42, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5a0d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5a0d, .value=0x9c, .type=IO_READ},
        {.addr=0x5a0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xc140, .a=0x8b, .x=0xda, .y=0xf7, .sp=0x09, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc140, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc141, .a=0x8a, .x=0xda, .y=0xf7, .sp=0x09, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc140, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc140, .value=0x9c, .type=IO_READ},
        {.addr=0xc141, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xebb8, .a=0x27, .x=0xbe, .y=0xae, .sp=0xb5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xebb8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xebb9, .a=0x26, .x=0xbe, .y=0xae, .sp=0xb5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xebb8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xebb8, .value=0x9c, .type=IO_READ},
        {.addr=0xebb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xe180, .a=0x6f, .x=0xf6, .y=0x87, .sp=0x96, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe180, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe181, .a=0x6e, .x=0xf6, .y=0x87, .sp=0x96, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe180, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe180, .value=0x9c, .type=IO_READ},
        {.addr=0xe181, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xe83f, .a=0x0c, .x=0x80, .y=0xc0, .sp=0x3b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe83f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe840, .a=0x0b, .x=0x80, .y=0xc0, .sp=0x3b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe83f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe83f, .value=0x9c, .type=IO_READ},
        {.addr=0xe840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xd469, .a=0x23, .x=0xf4, .y=0x9b, .sp=0x59, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xd469, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd46a, .a=0x22, .x=0xf4, .y=0x9b, .sp=0x59, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd469, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd469, .value=0x9c, .type=IO_READ},
        {.addr=0xd46a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x0883, .a=0xb4, .x=0x42, .y=0x5f, .sp=0xfd, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0883, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0884, .a=0xb3, .x=0x42, .y=0x5f, .sp=0xfd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0883, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0883, .value=0x9c, .type=IO_READ},
        {.addr=0x0884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x7a0e, .a=0x03, .x=0x52, .y=0x97, .sp=0x18, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7a0e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7a0f, .a=0x02, .x=0x52, .y=0x97, .sp=0x18, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7a0e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7a0e, .value=0x9c, .type=IO_READ},
        {.addr=0x7a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xd879, .a=0x42, .x=0xce, .y=0xac, .sp=0x72, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd879, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd87a, .a=0x41, .x=0xce, .y=0xac, .sp=0x72, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xd879, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd879, .value=0x9c, .type=IO_READ},
        {.addr=0xd87a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x96c1, .a=0x4c, .x=0x57, .y=0x6d, .sp=0x41, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x96c1, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x96c2, .a=0x4b, .x=0x57, .y=0x6d, .sp=0x41, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x96c1, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x96c1, .value=0x9c, .type=IO_READ},
        {.addr=0x96c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x62c8, .a=0x17, .x=0xdc, .y=0xe2, .sp=0x43, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x62c8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x62c9, .a=0x16, .x=0xdc, .y=0xe2, .sp=0x43, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x62c8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x62c8, .value=0x9c, .type=IO_READ},
        {.addr=0x62c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xa72d, .a=0x42, .x=0xb6, .y=0x48, .sp=0x8e, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa72d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa72e, .a=0x41, .x=0xb6, .y=0x48, .sp=0x8e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa72d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa72d, .value=0x9c, .type=IO_READ},
        {.addr=0xa72e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xbccf, .a=0x46, .x=0xa4, .y=0x29, .sp=0x7d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbccf, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xbcd0, .a=0x45, .x=0xa4, .y=0x29, .sp=0x7d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbccf, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xbccf, .value=0x9c, .type=IO_READ},
        {.addr=0xbcd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x5b39, .a=0xf4, .x=0xfa, .y=0xec, .sp=0x21, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x5b39, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x5b3a, .a=0xf3, .x=0xfa, .y=0xec, .sp=0x21, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5b39, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x5b39, .value=0x9c, .type=IO_READ},
        {.addr=0x5b3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xc67b, .a=0x20, .x=0x31, .y=0xf9, .sp=0xb0, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc67b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc67c, .a=0x1f, .x=0x31, .y=0xf9, .sp=0xb0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc67b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc67b, .value=0x9c, .type=IO_READ},
        {.addr=0xc67c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x02d2, .a=0xf9, .x=0x8f, .y=0x73, .sp=0x83, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x02d2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x02d3, .a=0xf8, .x=0x8f, .y=0x73, .sp=0x83, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x02d2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x02d2, .value=0x9c, .type=IO_READ},
        {.addr=0x02d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xb432, .a=0x10, .x=0x76, .y=0x9c, .sp=0x03, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb432, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb433, .a=0x0f, .x=0x76, .y=0x9c, .sp=0x03, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb432, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb432, .value=0x9c, .type=IO_READ},
        {.addr=0xb433, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xf151, .a=0x2f, .x=0xc4, .y=0x6a, .sp=0xdd, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf151, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf152, .a=0x2e, .x=0xc4, .y=0x6a, .sp=0xdd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf151, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf151, .value=0x9c, .type=IO_READ},
        {.addr=0xf152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x4207, .a=0xa3, .x=0xfb, .y=0x7f, .sp=0xdf, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4207, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4208, .a=0xa2, .x=0xfb, .y=0x7f, .sp=0xdf, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4207, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4207, .value=0x9c, .type=IO_READ},
        {.addr=0x4208, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x7c84, .a=0x52, .x=0x06, .y=0xbc, .sp=0x76, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x7c84, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7c85, .a=0x51, .x=0x06, .y=0xbc, .sp=0x76, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7c84, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7c84, .value=0x9c, .type=IO_READ},
        {.addr=0x7c85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xea42, .a=0xc1, .x=0xc5, .y=0x9c, .sp=0x5e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xea42, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xea43, .a=0xc0, .x=0xc5, .y=0x9c, .sp=0x5e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xea42, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xea42, .value=0x9c, .type=IO_READ},
        {.addr=0xea43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x80b2, .a=0x4d, .x=0xf3, .y=0x27, .sp=0x71, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x80b2, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x80b3, .a=0x4c, .x=0xf3, .y=0x27, .sp=0x71, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x80b2, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x80b2, .value=0x9c, .type=IO_READ},
        {.addr=0x80b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x493c, .a=0x13, .x=0x8f, .y=0x3d, .sp=0xa2, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x493c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x493d, .a=0x12, .x=0x8f, .y=0x3d, .sp=0xa2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x493c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x493c, .value=0x9c, .type=IO_READ},
        {.addr=0x493d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1f15, .a=0x46, .x=0x14, .y=0x01, .sp=0xef, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1f15, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x1f16, .a=0x45, .x=0x14, .y=0x01, .sp=0xef, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1f15, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x1f15, .value=0x9c, .type=IO_READ},
        {.addr=0x1f16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x770b, .a=0x62, .x=0x10, .y=0xf4, .sp=0x1a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x770b, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x770c, .a=0x61, .x=0x10, .y=0xf4, .sp=0x1a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x770b, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x770b, .value=0x9c, .type=IO_READ},
        {.addr=0x770c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x81d9, .a=0x0b, .x=0xc7, .y=0x48, .sp=0x96, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x81d9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x81da, .a=0x0a, .x=0xc7, .y=0x48, .sp=0x96, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x81d9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x81d9, .value=0x9c, .type=IO_READ},
        {.addr=0x81da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x87e5, .a=0x72, .x=0xce, .y=0x29, .sp=0x67, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x87e5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x87e6, .a=0x71, .x=0xce, .y=0x29, .sp=0x67, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x87e5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x87e5, .value=0x9c, .type=IO_READ},
        {.addr=0x87e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x7abd, .a=0xbf, .x=0x71, .y=0x9e, .sp=0x6c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7abd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x7abe, .a=0xbe, .x=0x71, .y=0x9e, .sp=0x6c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7abd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x7abd, .value=0x9c, .type=IO_READ},
        {.addr=0x7abe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x63cb, .a=0xdd, .x=0xcb, .y=0xaa, .sp=0x93, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x63cb, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x63cc, .a=0xdc, .x=0xcb, .y=0xaa, .sp=0x93, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x63cb, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x63cb, .value=0x9c, .type=IO_READ},
        {.addr=0x63cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xc5b0, .a=0xd8, .x=0x5f, .y=0xc2, .sp=0x5e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc5b1, .a=0xd7, .x=0x5f, .y=0xc2, .sp=0x5e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc5b0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc5b0, .value=0x9c, .type=IO_READ},
        {.addr=0xc5b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xdfc8, .a=0x74, .x=0x7a, .y=0xf1, .sp=0x49, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdfc9, .a=0x73, .x=0x7a, .y=0xf1, .sp=0x49, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdfc8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdfc8, .value=0x9c, .type=IO_READ},
        {.addr=0xdfc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xdce0, .a=0x35, .x=0xdd, .y=0xb7, .sp=0x46, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xdce0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdce1, .a=0x34, .x=0xdd, .y=0xb7, .sp=0x46, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdce0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdce0, .value=0x9c, .type=IO_READ},
        {.addr=0xdce1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x9186, .a=0x28, .x=0xf9, .y=0xaa, .sp=0x8e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9186, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9187, .a=0x27, .x=0xf9, .y=0xaa, .sp=0x8e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9186, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x9186, .value=0x9c, .type=IO_READ},
        {.addr=0x9187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xe5f7, .a=0x53, .x=0x31, .y=0x6d, .sp=0xf4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe5f8, .a=0x52, .x=0x31, .y=0x6d, .sp=0xf4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xe5f7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe5f7, .value=0x9c, .type=IO_READ},
        {.addr=0xe5f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xaf30, .a=0x98, .x=0xd5, .y=0x6c, .sp=0xd3, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xaf30, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xaf31, .a=0x97, .x=0xd5, .y=0x6c, .sp=0xd3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xaf30, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xaf30, .value=0x9c, .type=IO_READ},
        {.addr=0xaf31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x4bc8, .a=0xe6, .x=0x7e, .y=0xff, .sp=0x33, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4bc8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4bc9, .a=0xe5, .x=0x7e, .y=0xff, .sp=0x33, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4bc8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4bc8, .value=0x9c, .type=IO_READ},
        {.addr=0x4bc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xe1ed, .a=0xb0, .x=0xe7, .y=0xd4, .sp=0x6d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ed, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe1ee, .a=0xaf, .x=0xe7, .y=0xd4, .sp=0x6d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe1ed, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe1ed, .value=0x9c, .type=IO_READ},
        {.addr=0xe1ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x99b4, .a=0xac, .x=0xa1, .y=0x27, .sp=0x98, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x99b4, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x99b5, .a=0xab, .x=0xa1, .y=0x27, .sp=0x98, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x99b4, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x99b4, .value=0x9c, .type=IO_READ},
        {.addr=0x99b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xdbc9, .a=0x6e, .x=0x99, .y=0xae, .sp=0xb0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc9, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xdbca, .a=0x6d, .x=0x99, .y=0xae, .sp=0xb0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xdbc9, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xdbc9, .value=0x9c, .type=IO_READ},
        {.addr=0xdbca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x71d0, .a=0x25, .x=0x5d, .y=0x46, .sp=0xd6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x71d0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x71d1, .a=0x24, .x=0x5d, .y=0x46, .sp=0xd6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x71d0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x71d0, .value=0x9c, .type=IO_READ},
        {.addr=0x71d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x12c7, .a=0x29, .x=0x89, .y=0x50, .sp=0xef, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x12c7, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x12c8, .a=0x28, .x=0x89, .y=0x50, .sp=0xef, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x12c7, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x12c7, .value=0x9c, .type=IO_READ},
        {.addr=0x12c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9C, _9C_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x74a0, .a=0xb0, .x=0xf5, .y=0xa9, .sp=0xd4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x74a0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x74a1, .a=0xaf, .x=0xf5, .y=0xa9, .sp=0xd4, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x74a0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x74a0, .value=0x9c, .type=IO_READ},
        {.addr=0x74a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9C 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
