#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_ED, _ED_0000) {
    const struct CPU_State initial_cpu = {.pc=0xce25, .a=0x22, .x=0xf1, .y=0x16, .sp=0x12, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xce25, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xce26, .a=0x22, .x=0xf1, .y=0x16, .sp=0x12, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xce25, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xce25, .value=0xed, .type=IO_READ},
        {.addr=0xce26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0001) {
    const struct CPU_State initial_cpu = {.pc=0xe1fa, .a=0x8b, .x=0x1f, .y=0x62, .sp=0x1c, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe1fa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe1fb, .a=0x8b, .x=0x1f, .y=0x62, .sp=0x1c, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xe1fa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe1fa, .value=0xed, .type=IO_READ},
        {.addr=0xe1fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0002) {
    const struct CPU_State initial_cpu = {.pc=0x71d3, .a=0xea, .x=0x3f, .y=0x05, .sp=0x3d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x71d3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x71d4, .a=0xea, .x=0x3f, .y=0x05, .sp=0x3d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x71d3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x71d3, .value=0xed, .type=IO_READ},
        {.addr=0x71d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4fc7, .a=0x66, .x=0x87, .y=0x1a, .sp=0x8f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4fc8, .a=0x66, .x=0x87, .y=0x1a, .sp=0x8f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x4fc7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4fc7, .value=0xed, .type=IO_READ},
        {.addr=0x4fc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0004) {
    const struct CPU_State initial_cpu = {.pc=0xabe9, .a=0x0d, .x=0x6b, .y=0x83, .sp=0xf6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xabe9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xabea, .a=0x0d, .x=0x6b, .y=0x83, .sp=0xf6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xabe9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xabe9, .value=0xed, .type=IO_READ},
        {.addr=0xabea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0005) {
    const struct CPU_State initial_cpu = {.pc=0x49c9, .a=0x10, .x=0x25, .y=0x0b, .sp=0xcb, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x49c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x49ca, .a=0x10, .x=0x25, .y=0x0b, .sp=0xcb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x49c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x49c9, .value=0xed, .type=IO_READ},
        {.addr=0x49ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0006) {
    const struct CPU_State initial_cpu = {.pc=0x458e, .a=0xce, .x=0x92, .y=0x03, .sp=0x3d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x458e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x458f, .a=0xce, .x=0x92, .y=0x03, .sp=0x3d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x458e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x458e, .value=0xed, .type=IO_READ},
        {.addr=0x458f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0007) {
    const struct CPU_State initial_cpu = {.pc=0xc1be, .a=0x7f, .x=0x32, .y=0x4d, .sp=0x74, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc1be, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc1bf, .a=0x7f, .x=0x32, .y=0x4d, .sp=0x74, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xc1be, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc1be, .value=0xed, .type=IO_READ},
        {.addr=0xc1bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0008) {
    const struct CPU_State initial_cpu = {.pc=0x2b0e, .a=0x8e, .x=0xfc, .y=0x0c, .sp=0x4f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2b0f, .a=0x8e, .x=0xfc, .y=0x0c, .sp=0x4f, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x2b0e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2b0e, .value=0xed, .type=IO_READ},
        {.addr=0x2b0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0009) {
    const struct CPU_State initial_cpu = {.pc=0x2d4a, .a=0x7d, .x=0xa3, .y=0xc9, .sp=0xd7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2d4b, .a=0x7d, .x=0xa3, .y=0xc9, .sp=0xd7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2d4a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2d4a, .value=0xed, .type=IO_READ},
        {.addr=0x2d4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000A) {
    const struct CPU_State initial_cpu = {.pc=0x104c, .a=0xf9, .x=0x86, .y=0xfb, .sp=0x3d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x104c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x104d, .a=0xf9, .x=0x86, .y=0xfb, .sp=0x3d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x104c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x104c, .value=0xed, .type=IO_READ},
        {.addr=0x104d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000B) {
    const struct CPU_State initial_cpu = {.pc=0x427d, .a=0x5b, .x=0xa5, .y=0xb3, .sp=0x77, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x427d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x427e, .a=0x5b, .x=0xa5, .y=0xb3, .sp=0x77, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x427d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x427d, .value=0xed, .type=IO_READ},
        {.addr=0x427e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000C) {
    const struct CPU_State initial_cpu = {.pc=0x70ea, .a=0x16, .x=0x54, .y=0x69, .sp=0x2e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x70ea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x70eb, .a=0x16, .x=0x54, .y=0x69, .sp=0x2e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x70ea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x70ea, .value=0xed, .type=IO_READ},
        {.addr=0x70eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3119, .a=0x45, .x=0xd0, .y=0xe3, .sp=0xcb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3119, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x311a, .a=0x45, .x=0xd0, .y=0xe3, .sp=0xcb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3119, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3119, .value=0xed, .type=IO_READ},
        {.addr=0x311a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000E) {
    const struct CPU_State initial_cpu = {.pc=0xa8aa, .a=0xf8, .x=0x3b, .y=0x2c, .sp=0x92, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa8aa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8ab, .a=0xf8, .x=0x3b, .y=0x2c, .sp=0x92, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa8aa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8aa, .value=0xed, .type=IO_READ},
        {.addr=0xa8ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_000F) {
    const struct CPU_State initial_cpu = {.pc=0xa221, .a=0x57, .x=0xaa, .y=0xaf, .sp=0x5b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xa221, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa222, .a=0x57, .x=0xaa, .y=0xaf, .sp=0x5b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa221, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa221, .value=0xed, .type=IO_READ},
        {.addr=0xa222, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0010) {
    const struct CPU_State initial_cpu = {.pc=0x8a50, .a=0x5b, .x=0x62, .y=0x36, .sp=0x29, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8a50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8a51, .a=0x5b, .x=0x62, .y=0x36, .sp=0x29, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8a50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8a50, .value=0xed, .type=IO_READ},
        {.addr=0x8a51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0011) {
    const struct CPU_State initial_cpu = {.pc=0x1601, .a=0x88, .x=0x17, .y=0x54, .sp=0x35, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1601, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1602, .a=0x88, .x=0x17, .y=0x54, .sp=0x35, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x1601, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1601, .value=0xed, .type=IO_READ},
        {.addr=0x1602, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0012) {
    const struct CPU_State initial_cpu = {.pc=0xd4fb, .a=0x31, .x=0x3a, .y=0x81, .sp=0x26, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4fb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd4fc, .a=0x31, .x=0x3a, .y=0x81, .sp=0x26, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd4fb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd4fb, .value=0xed, .type=IO_READ},
        {.addr=0xd4fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0013) {
    const struct CPU_State initial_cpu = {.pc=0xbf7a, .a=0x3a, .x=0xcf, .y=0x28, .sp=0xda, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbf7a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbf7b, .a=0x3a, .x=0xcf, .y=0x28, .sp=0xda, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xbf7a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbf7a, .value=0xed, .type=IO_READ},
        {.addr=0xbf7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0014) {
    const struct CPU_State initial_cpu = {.pc=0x7286, .a=0xce, .x=0x79, .y=0xe9, .sp=0x52, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7286, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7287, .a=0xce, .x=0x79, .y=0xe9, .sp=0x52, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7286, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7286, .value=0xed, .type=IO_READ},
        {.addr=0x7287, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0015) {
    const struct CPU_State initial_cpu = {.pc=0x0360, .a=0x11, .x=0xec, .y=0x5a, .sp=0x12, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0360, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0361, .a=0x11, .x=0xec, .y=0x5a, .sp=0x12, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0360, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0360, .value=0xed, .type=IO_READ},
        {.addr=0x0361, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0016) {
    const struct CPU_State initial_cpu = {.pc=0xb582, .a=0x42, .x=0xf1, .y=0xb1, .sp=0x1b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xb582, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb583, .a=0x42, .x=0xf1, .y=0xb1, .sp=0x1b, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xb582, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb582, .value=0xed, .type=IO_READ},
        {.addr=0xb583, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0017) {
    const struct CPU_State initial_cpu = {.pc=0x94b6, .a=0x19, .x=0x7f, .y=0xb6, .sp=0x6c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x94b6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x94b7, .a=0x19, .x=0x7f, .y=0xb6, .sp=0x6c, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x94b6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x94b6, .value=0xed, .type=IO_READ},
        {.addr=0x94b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0018) {
    const struct CPU_State initial_cpu = {.pc=0xf455, .a=0x45, .x=0x45, .y=0xb3, .sp=0x8f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf455, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf456, .a=0x45, .x=0x45, .y=0xb3, .sp=0x8f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf455, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf455, .value=0xed, .type=IO_READ},
        {.addr=0xf456, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0019) {
    const struct CPU_State initial_cpu = {.pc=0x6f38, .a=0xd4, .x=0x86, .y=0x16, .sp=0x81, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6f38, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f39, .a=0xd4, .x=0x86, .y=0x16, .sp=0x81, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6f38, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f38, .value=0xed, .type=IO_READ},
        {.addr=0x6f39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001A) {
    const struct CPU_State initial_cpu = {.pc=0x5d5f, .a=0xaa, .x=0xef, .y=0x4a, .sp=0xb0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5d5f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5d60, .a=0xaa, .x=0xef, .y=0x4a, .sp=0xb0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5d5f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5d5f, .value=0xed, .type=IO_READ},
        {.addr=0x5d60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe950, .a=0x36, .x=0x8d, .y=0xc1, .sp=0xc2, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe950, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe951, .a=0x36, .x=0x8d, .y=0xc1, .sp=0xc2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe950, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe950, .value=0xed, .type=IO_READ},
        {.addr=0xe951, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001C) {
    const struct CPU_State initial_cpu = {.pc=0x3888, .a=0x5c, .x=0xb4, .y=0x7b, .sp=0xf5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3888, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3889, .a=0x5c, .x=0xb4, .y=0x7b, .sp=0xf5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3888, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3888, .value=0xed, .type=IO_READ},
        {.addr=0x3889, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001D) {
    const struct CPU_State initial_cpu = {.pc=0x346b, .a=0x9a, .x=0x0f, .y=0x9e, .sp=0x92, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x346b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x346c, .a=0x9a, .x=0x0f, .y=0x9e, .sp=0x92, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x346b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x346b, .value=0xed, .type=IO_READ},
        {.addr=0x346c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001E) {
    const struct CPU_State initial_cpu = {.pc=0x997b, .a=0xde, .x=0xaf, .y=0xa7, .sp=0x74, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x997b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x997c, .a=0xde, .x=0xaf, .y=0xa7, .sp=0x74, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x997b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x997b, .value=0xed, .type=IO_READ},
        {.addr=0x997c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_001F) {
    const struct CPU_State initial_cpu = {.pc=0x31e5, .a=0x85, .x=0x4c, .y=0x4e, .sp=0xb9, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x31e5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x31e6, .a=0x85, .x=0x4c, .y=0x4e, .sp=0xb9, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x31e5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x31e5, .value=0xed, .type=IO_READ},
        {.addr=0x31e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0020) {
    const struct CPU_State initial_cpu = {.pc=0xa05f, .a=0xdb, .x=0xd4, .y=0x9b, .sp=0xd8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa05f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa060, .a=0xdb, .x=0xd4, .y=0x9b, .sp=0xd8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xa05f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa05f, .value=0xed, .type=IO_READ},
        {.addr=0xa060, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0021) {
    const struct CPU_State initial_cpu = {.pc=0x68ce, .a=0x37, .x=0x06, .y=0x36, .sp=0xfb, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x68ce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x68cf, .a=0x37, .x=0x06, .y=0x36, .sp=0xfb, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x68ce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x68ce, .value=0xed, .type=IO_READ},
        {.addr=0x68cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9507, .a=0xb5, .x=0x2d, .y=0x8f, .sp=0x9a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9507, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9508, .a=0xb5, .x=0x2d, .y=0x8f, .sp=0x9a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9507, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9507, .value=0xed, .type=IO_READ},
        {.addr=0x9508, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0023) {
    const struct CPU_State initial_cpu = {.pc=0xa109, .a=0x7b, .x=0x04, .y=0xaa, .sp=0x11, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xa109, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa10a, .a=0x7b, .x=0x04, .y=0xaa, .sp=0x11, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa109, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa109, .value=0xed, .type=IO_READ},
        {.addr=0xa10a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0024) {
    const struct CPU_State initial_cpu = {.pc=0x0d5a, .a=0x48, .x=0xe0, .y=0x9d, .sp=0xe6, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0d5b, .a=0x48, .x=0xe0, .y=0x9d, .sp=0xe6, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0d5a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0d5a, .value=0xed, .type=IO_READ},
        {.addr=0x0d5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0025) {
    const struct CPU_State initial_cpu = {.pc=0xaf48, .a=0xee, .x=0x60, .y=0x44, .sp=0x16, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xaf48, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaf49, .a=0xee, .x=0x60, .y=0x44, .sp=0x16, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xaf48, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaf48, .value=0xed, .type=IO_READ},
        {.addr=0xaf49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0026) {
    const struct CPU_State initial_cpu = {.pc=0x8586, .a=0xd2, .x=0xd1, .y=0x73, .sp=0x2a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x8586, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8587, .a=0xd2, .x=0xd1, .y=0x73, .sp=0x2a, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x8586, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8586, .value=0xed, .type=IO_READ},
        {.addr=0x8587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0027) {
    const struct CPU_State initial_cpu = {.pc=0x14ed, .a=0x05, .x=0x96, .y=0xbb, .sp=0x39, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x14ed, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x14ee, .a=0x05, .x=0x96, .y=0xbb, .sp=0x39, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x14ed, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x14ed, .value=0xed, .type=IO_READ},
        {.addr=0x14ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0028) {
    const struct CPU_State initial_cpu = {.pc=0x031c, .a=0xa6, .x=0xea, .y=0x69, .sp=0xd5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x031c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x031d, .a=0xa6, .x=0xea, .y=0x69, .sp=0xd5, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x031c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x031c, .value=0xed, .type=IO_READ},
        {.addr=0x031d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0029) {
    const struct CPU_State initial_cpu = {.pc=0x2a50, .a=0x04, .x=0x8f, .y=0x2f, .sp=0xf3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2a50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a51, .a=0x04, .x=0x8f, .y=0x2f, .sp=0xf3, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2a50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a50, .value=0xed, .type=IO_READ},
        {.addr=0x2a51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002A) {
    const struct CPU_State initial_cpu = {.pc=0x6794, .a=0x42, .x=0x70, .y=0x11, .sp=0xab, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6794, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6795, .a=0x42, .x=0x70, .y=0x11, .sp=0xab, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x6794, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6794, .value=0xed, .type=IO_READ},
        {.addr=0x6795, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1080, .a=0xeb, .x=0x77, .y=0x39, .sp=0x8c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1080, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1081, .a=0xeb, .x=0x77, .y=0x39, .sp=0x8c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1080, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1080, .value=0xed, .type=IO_READ},
        {.addr=0x1081, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002C) {
    const struct CPU_State initial_cpu = {.pc=0x76ce, .a=0x94, .x=0xe8, .y=0x2a, .sp=0x40, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x76ce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x76cf, .a=0x94, .x=0xe8, .y=0x2a, .sp=0x40, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x76ce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x76ce, .value=0xed, .type=IO_READ},
        {.addr=0x76cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002D) {
    const struct CPU_State initial_cpu = {.pc=0x8638, .a=0x59, .x=0xbc, .y=0xe0, .sp=0x79, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8638, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8639, .a=0x59, .x=0xbc, .y=0xe0, .sp=0x79, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x8638, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8638, .value=0xed, .type=IO_READ},
        {.addr=0x8639, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002E) {
    const struct CPU_State initial_cpu = {.pc=0x936f, .a=0xab, .x=0x45, .y=0x40, .sp=0x45, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x936f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9370, .a=0xab, .x=0x45, .y=0x40, .sp=0x45, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x936f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x936f, .value=0xed, .type=IO_READ},
        {.addr=0x9370, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_002F) {
    const struct CPU_State initial_cpu = {.pc=0x132b, .a=0x26, .x=0x5d, .y=0x89, .sp=0x26, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x132b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x132c, .a=0x26, .x=0x5d, .y=0x89, .sp=0x26, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x132b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x132b, .value=0xed, .type=IO_READ},
        {.addr=0x132c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0030) {
    const struct CPU_State initial_cpu = {.pc=0x09d0, .a=0x33, .x=0x6e, .y=0xb0, .sp=0x45, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x09d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x09d1, .a=0x33, .x=0x6e, .y=0xb0, .sp=0x45, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x09d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x09d0, .value=0xed, .type=IO_READ},
        {.addr=0x09d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0031) {
    const struct CPU_State initial_cpu = {.pc=0x7629, .a=0xf7, .x=0xe7, .y=0xc7, .sp=0x25, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7629, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x762a, .a=0xf7, .x=0xe7, .y=0xc7, .sp=0x25, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7629, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7629, .value=0xed, .type=IO_READ},
        {.addr=0x762a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0032) {
    const struct CPU_State initial_cpu = {.pc=0xfbb0, .a=0x40, .x=0xfd, .y=0xc7, .sp=0xe1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfbb1, .a=0x40, .x=0xfd, .y=0xc7, .sp=0xe1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfbb0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfbb0, .value=0xed, .type=IO_READ},
        {.addr=0xfbb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0033) {
    const struct CPU_State initial_cpu = {.pc=0x01dc, .a=0xaf, .x=0x3f, .y=0x76, .sp=0xbd, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x01dd, .a=0xaf, .x=0x3f, .y=0x76, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x01dc, .value=0xed, .type=IO_READ},
        {.addr=0x01dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0034) {
    const struct CPU_State initial_cpu = {.pc=0xca72, .a=0x28, .x=0xd8, .y=0x05, .sp=0x65, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xca72, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xca73, .a=0x28, .x=0xd8, .y=0x05, .sp=0x65, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xca72, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xca72, .value=0xed, .type=IO_READ},
        {.addr=0xca73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0035) {
    const struct CPU_State initial_cpu = {.pc=0x126c, .a=0xac, .x=0xe7, .y=0x23, .sp=0xd9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x126c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x126d, .a=0xac, .x=0xe7, .y=0x23, .sp=0xd9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x126c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x126c, .value=0xed, .type=IO_READ},
        {.addr=0x126d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0036) {
    const struct CPU_State initial_cpu = {.pc=0x26e9, .a=0xff, .x=0x81, .y=0xc7, .sp=0x80, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x26e9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x26ea, .a=0xff, .x=0x81, .y=0xc7, .sp=0x80, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x26e9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x26e9, .value=0xed, .type=IO_READ},
        {.addr=0x26ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0037) {
    const struct CPU_State initial_cpu = {.pc=0xcbd8, .a=0x8f, .x=0xe6, .y=0x58, .sp=0xfe, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xcbd8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcbd9, .a=0x8f, .x=0xe6, .y=0x58, .sp=0xfe, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcbd8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcbd8, .value=0xed, .type=IO_READ},
        {.addr=0xcbd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1c77, .a=0x91, .x=0xe2, .y=0xb8, .sp=0x60, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1c77, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1c78, .a=0x91, .x=0xe2, .y=0xb8, .sp=0x60, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1c77, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1c77, .value=0xed, .type=IO_READ},
        {.addr=0x1c78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0039) {
    const struct CPU_State initial_cpu = {.pc=0x9e16, .a=0x31, .x=0x8d, .y=0xfb, .sp=0x1d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9e16, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9e17, .a=0x31, .x=0x8d, .y=0xfb, .sp=0x1d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x9e16, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9e16, .value=0xed, .type=IO_READ},
        {.addr=0x9e17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003A) {
    const struct CPU_State initial_cpu = {.pc=0xde04, .a=0x57, .x=0xbb, .y=0xef, .sp=0x35, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xde04, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde05, .a=0x57, .x=0xbb, .y=0xef, .sp=0x35, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xde04, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde04, .value=0xed, .type=IO_READ},
        {.addr=0xde05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003B) {
    const struct CPU_State initial_cpu = {.pc=0xa37b, .a=0xcc, .x=0x42, .y=0x39, .sp=0x54, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa37b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa37c, .a=0xcc, .x=0x42, .y=0x39, .sp=0x54, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xa37b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa37b, .value=0xed, .type=IO_READ},
        {.addr=0xa37c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003C) {
    const struct CPU_State initial_cpu = {.pc=0x7584, .a=0xfa, .x=0x78, .y=0x98, .sp=0x3f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7584, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7585, .a=0xfa, .x=0x78, .y=0x98, .sp=0x3f, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x7584, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7584, .value=0xed, .type=IO_READ},
        {.addr=0x7585, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0442, .a=0x7f, .x=0xdd, .y=0x18, .sp=0xda, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0442, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0443, .a=0x7f, .x=0xdd, .y=0x18, .sp=0xda, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0442, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0442, .value=0xed, .type=IO_READ},
        {.addr=0x0443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003E) {
    const struct CPU_State initial_cpu = {.pc=0xfc2f, .a=0xa7, .x=0x07, .y=0xea, .sp=0xa1, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc2f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfc30, .a=0xa7, .x=0x07, .y=0xea, .sp=0xa1, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xfc2f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfc2f, .value=0xed, .type=IO_READ},
        {.addr=0xfc30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_003F) {
    const struct CPU_State initial_cpu = {.pc=0x0111, .a=0x42, .x=0x5c, .y=0xad, .sp=0x00, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0112, .a=0x42, .x=0x5c, .y=0xad, .sp=0x00, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0111, .value=0xed, .type=IO_READ},
        {.addr=0x0112, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0040) {
    const struct CPU_State initial_cpu = {.pc=0xa7c7, .a=0x49, .x=0xf3, .y=0xbc, .sp=0xcd, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa7c8, .a=0x49, .x=0xf3, .y=0xbc, .sp=0xcd, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xa7c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa7c7, .value=0xed, .type=IO_READ},
        {.addr=0xa7c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0041) {
    const struct CPU_State initial_cpu = {.pc=0x3f87, .a=0xce, .x=0xdf, .y=0x45, .sp=0x54, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3f87, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3f88, .a=0xce, .x=0xdf, .y=0x45, .sp=0x54, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3f87, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3f87, .value=0xed, .type=IO_READ},
        {.addr=0x3f88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0042) {
    const struct CPU_State initial_cpu = {.pc=0xfcb6, .a=0xbe, .x=0xfb, .y=0x62, .sp=0x19, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xfcb6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfcb7, .a=0xbe, .x=0xfb, .y=0x62, .sp=0x19, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfcb6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfcb6, .value=0xed, .type=IO_READ},
        {.addr=0xfcb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0043) {
    const struct CPU_State initial_cpu = {.pc=0xeaf2, .a=0x5c, .x=0x25, .y=0xf4, .sp=0xb7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xeaf2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xeaf3, .a=0x5c, .x=0x25, .y=0xf4, .sp=0xb7, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xeaf2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeaf2, .value=0xed, .type=IO_READ},
        {.addr=0xeaf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0044) {
    const struct CPU_State initial_cpu = {.pc=0xad97, .a=0x91, .x=0x47, .y=0x4a, .sp=0xfd, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xad97, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xad98, .a=0x91, .x=0x47, .y=0x4a, .sp=0xfd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xad97, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xad97, .value=0xed, .type=IO_READ},
        {.addr=0xad98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0045) {
    const struct CPU_State initial_cpu = {.pc=0x041e, .a=0xf8, .x=0xd0, .y=0xf9, .sp=0x13, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x041e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x041f, .a=0xf8, .x=0xd0, .y=0xf9, .sp=0x13, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x041e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x041e, .value=0xed, .type=IO_READ},
        {.addr=0x041f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0046) {
    const struct CPU_State initial_cpu = {.pc=0x4caa, .a=0xc3, .x=0x75, .y=0xae, .sp=0xfc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4caa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4cab, .a=0xc3, .x=0x75, .y=0xae, .sp=0xfc, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x4caa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4caa, .value=0xed, .type=IO_READ},
        {.addr=0x4cab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0047) {
    const struct CPU_State initial_cpu = {.pc=0xcdac, .a=0xb9, .x=0x6a, .y=0xf9, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xcdac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcdad, .a=0xb9, .x=0x6a, .y=0xf9, .sp=0xa2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xcdac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcdac, .value=0xed, .type=IO_READ},
        {.addr=0xcdad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0048) {
    const struct CPU_State initial_cpu = {.pc=0x77f8, .a=0xbf, .x=0x97, .y=0x17, .sp=0x12, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x77f8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x77f9, .a=0xbf, .x=0x97, .y=0x17, .sp=0x12, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x77f8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x77f8, .value=0xed, .type=IO_READ},
        {.addr=0x77f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0049) {
    const struct CPU_State initial_cpu = {.pc=0x7763, .a=0x9d, .x=0x22, .y=0xf9, .sp=0x0d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7763, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7764, .a=0x9d, .x=0x22, .y=0xf9, .sp=0x0d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7763, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7763, .value=0xed, .type=IO_READ},
        {.addr=0x7764, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004A) {
    const struct CPU_State initial_cpu = {.pc=0x4fc6, .a=0x43, .x=0xf2, .y=0x30, .sp=0xab, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4fc7, .a=0x43, .x=0xf2, .y=0x30, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4fc6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4fc6, .value=0xed, .type=IO_READ},
        {.addr=0x4fc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004B) {
    const struct CPU_State initial_cpu = {.pc=0x01fe, .a=0x5b, .x=0x40, .y=0x1e, .sp=0xe0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x01ff, .a=0x5b, .x=0x40, .y=0x1e, .sp=0xe0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x01fe, .value=0xed, .type=IO_READ},
        {.addr=0x01ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004C) {
    const struct CPU_State initial_cpu = {.pc=0xabac, .a=0x3e, .x=0xcf, .y=0x71, .sp=0x63, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xabac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xabad, .a=0x3e, .x=0xcf, .y=0x71, .sp=0x63, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xabac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xabac, .value=0xed, .type=IO_READ},
        {.addr=0xabad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004D) {
    const struct CPU_State initial_cpu = {.pc=0x4bac, .a=0x39, .x=0xca, .y=0x75, .sp=0x48, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x4bac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4bad, .a=0x39, .x=0xca, .y=0x75, .sp=0x48, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4bac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4bac, .value=0xed, .type=IO_READ},
        {.addr=0x4bad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3274, .a=0x82, .x=0x02, .y=0x70, .sp=0x30, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3274, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3275, .a=0x82, .x=0x02, .y=0x70, .sp=0x30, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x3274, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3274, .value=0xed, .type=IO_READ},
        {.addr=0x3275, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_004F) {
    const struct CPU_State initial_cpu = {.pc=0x342b, .a=0xe9, .x=0xa9, .y=0xea, .sp=0x52, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x342b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x342c, .a=0xe9, .x=0xa9, .y=0xea, .sp=0x52, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x342b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x342b, .value=0xed, .type=IO_READ},
        {.addr=0x342c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0050) {
    const struct CPU_State initial_cpu = {.pc=0xc7df, .a=0x7d, .x=0x31, .y=0x99, .sp=0x93, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc7df, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc7e0, .a=0x7d, .x=0x31, .y=0x99, .sp=0x93, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xc7df, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc7df, .value=0xed, .type=IO_READ},
        {.addr=0xc7e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0051) {
    const struct CPU_State initial_cpu = {.pc=0xf4d2, .a=0xd7, .x=0x61, .y=0x30, .sp=0xc1, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf4d3, .a=0xd7, .x=0x61, .y=0x30, .sp=0xc1, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xf4d2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf4d2, .value=0xed, .type=IO_READ},
        {.addr=0xf4d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0052) {
    const struct CPU_State initial_cpu = {.pc=0x812e, .a=0x8d, .x=0x24, .y=0xe2, .sp=0x26, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x812e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x812f, .a=0x8d, .x=0x24, .y=0xe2, .sp=0x26, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x812e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x812e, .value=0xed, .type=IO_READ},
        {.addr=0x812f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2b56, .a=0xf1, .x=0x4e, .y=0x55, .sp=0x01, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2b56, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2b57, .a=0xf1, .x=0x4e, .y=0x55, .sp=0x01, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x2b56, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2b56, .value=0xed, .type=IO_READ},
        {.addr=0x2b57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0054) {
    const struct CPU_State initial_cpu = {.pc=0x41be, .a=0x28, .x=0xdd, .y=0x7d, .sp=0x03, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x41be, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x41bf, .a=0x28, .x=0xdd, .y=0x7d, .sp=0x03, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x41be, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x41be, .value=0xed, .type=IO_READ},
        {.addr=0x41bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0056) {
    const struct CPU_State initial_cpu = {.pc=0x938d, .a=0xfc, .x=0x63, .y=0x0f, .sp=0x5e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x938d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x938e, .a=0xfc, .x=0x63, .y=0x0f, .sp=0x5e, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x938d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x938d, .value=0xed, .type=IO_READ},
        {.addr=0x938e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0057) {
    const struct CPU_State initial_cpu = {.pc=0xc2ca, .a=0xf3, .x=0xca, .y=0xc1, .sp=0xf3, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc2cb, .a=0xf3, .x=0xca, .y=0xc1, .sp=0xf3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc2ca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc2ca, .value=0xed, .type=IO_READ},
        {.addr=0xc2cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0058) {
    const struct CPU_State initial_cpu = {.pc=0xdab1, .a=0x53, .x=0x9e, .y=0xcd, .sp=0xa5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xdab1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdab2, .a=0x53, .x=0x9e, .y=0xcd, .sp=0xa5, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xdab1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdab1, .value=0xed, .type=IO_READ},
        {.addr=0xdab2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0059) {
    const struct CPU_State initial_cpu = {.pc=0x4ee0, .a=0x52, .x=0x2e, .y=0xde, .sp=0x19, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4ee1, .a=0x52, .x=0x2e, .y=0xde, .sp=0x19, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4ee0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4ee0, .value=0xed, .type=IO_READ},
        {.addr=0x4ee1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005A) {
    const struct CPU_State initial_cpu = {.pc=0x84f9, .a=0x27, .x=0xd6, .y=0x1c, .sp=0x71, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x84f9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x84fa, .a=0x27, .x=0xd6, .y=0x1c, .sp=0x71, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x84f9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x84f9, .value=0xed, .type=IO_READ},
        {.addr=0x84fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005B) {
    const struct CPU_State initial_cpu = {.pc=0x7925, .a=0xd5, .x=0x19, .y=0xc7, .sp=0x48, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7925, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7926, .a=0xd5, .x=0x19, .y=0xc7, .sp=0x48, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7925, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7925, .value=0xed, .type=IO_READ},
        {.addr=0x7926, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005C) {
    const struct CPU_State initial_cpu = {.pc=0xa50e, .a=0xd3, .x=0xc1, .y=0x66, .sp=0xc5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa50e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa50f, .a=0xd3, .x=0xc1, .y=0x66, .sp=0xc5, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xa50e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa50e, .value=0xed, .type=IO_READ},
        {.addr=0xa50f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd9dd, .a=0xff, .x=0x57, .y=0xf5, .sp=0x8c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xd9dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd9de, .a=0xff, .x=0x57, .y=0xf5, .sp=0x8c, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xd9dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd9dd, .value=0xed, .type=IO_READ},
        {.addr=0xd9de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005E) {
    const struct CPU_State initial_cpu = {.pc=0x0f59, .a=0x58, .x=0x3f, .y=0x2d, .sp=0x7c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f59, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0f5a, .a=0x58, .x=0x3f, .y=0x2d, .sp=0x7c, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0f59, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0f59, .value=0xed, .type=IO_READ},
        {.addr=0x0f5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_005F) {
    const struct CPU_State initial_cpu = {.pc=0x80f5, .a=0xb2, .x=0xc2, .y=0x93, .sp=0x90, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x80f5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x80f6, .a=0xb2, .x=0xc2, .y=0x93, .sp=0x90, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x80f5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x80f5, .value=0xed, .type=IO_READ},
        {.addr=0x80f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0060) {
    const struct CPU_State initial_cpu = {.pc=0x4dea, .a=0x4e, .x=0xa3, .y=0xcf, .sp=0xeb, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4dea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4deb, .a=0x4e, .x=0xa3, .y=0xcf, .sp=0xeb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4dea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4dea, .value=0xed, .type=IO_READ},
        {.addr=0x4deb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0061) {
    const struct CPU_State initial_cpu = {.pc=0xf90f, .a=0x6a, .x=0x44, .y=0x33, .sp=0xe0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf90f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf910, .a=0x6a, .x=0x44, .y=0x33, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf90f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf90f, .value=0xed, .type=IO_READ},
        {.addr=0xf910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0062) {
    const struct CPU_State initial_cpu = {.pc=0x59e3, .a=0x71, .x=0x94, .y=0xce, .sp=0x9b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x59e3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x59e4, .a=0x71, .x=0x94, .y=0xce, .sp=0x9b, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x59e3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x59e3, .value=0xed, .type=IO_READ},
        {.addr=0x59e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0063) {
    const struct CPU_State initial_cpu = {.pc=0xd416, .a=0x56, .x=0x0f, .y=0x36, .sp=0xd4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xd416, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd417, .a=0x56, .x=0x0f, .y=0x36, .sp=0xd4, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xd416, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd416, .value=0xed, .type=IO_READ},
        {.addr=0xd417, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0064) {
    const struct CPU_State initial_cpu = {.pc=0x2fe3, .a=0x83, .x=0x17, .y=0xfa, .sp=0xff, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2fe4, .a=0x83, .x=0x17, .y=0xfa, .sp=0xff, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2fe3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2fe3, .value=0xed, .type=IO_READ},
        {.addr=0x2fe4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0065) {
    const struct CPU_State initial_cpu = {.pc=0xb5bf, .a=0xb9, .x=0x9b, .y=0x38, .sp=0x2a, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb5bf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb5c0, .a=0xb9, .x=0x9b, .y=0x38, .sp=0x2a, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xb5bf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb5bf, .value=0xed, .type=IO_READ},
        {.addr=0xb5c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0066) {
    const struct CPU_State initial_cpu = {.pc=0x2f75, .a=0x0e, .x=0x96, .y=0x3b, .sp=0x0c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x2f75, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2f76, .a=0x0e, .x=0x96, .y=0x3b, .sp=0x0c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2f75, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2f75, .value=0xed, .type=IO_READ},
        {.addr=0x2f76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0067) {
    const struct CPU_State initial_cpu = {.pc=0xcb87, .a=0xef, .x=0x67, .y=0xf0, .sp=0xdc, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb87, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcb88, .a=0xef, .x=0x67, .y=0xf0, .sp=0xdc, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xcb87, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcb87, .value=0xed, .type=IO_READ},
        {.addr=0xcb88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0068) {
    const struct CPU_State initial_cpu = {.pc=0x2db2, .a=0x09, .x=0xe5, .y=0x86, .sp=0xaa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2db2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2db3, .a=0x09, .x=0xe5, .y=0x86, .sp=0xaa, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2db2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2db2, .value=0xed, .type=IO_READ},
        {.addr=0x2db3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0069) {
    const struct CPU_State initial_cpu = {.pc=0x889a, .a=0x4b, .x=0xb3, .y=0x1e, .sp=0x1e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x889a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x889b, .a=0x4b, .x=0xb3, .y=0x1e, .sp=0x1e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x889a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x889a, .value=0xed, .type=IO_READ},
        {.addr=0x889b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006A) {
    const struct CPU_State initial_cpu = {.pc=0x1d90, .a=0xf9, .x=0x3e, .y=0xdb, .sp=0x68, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x1d90, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1d91, .a=0xf9, .x=0x3e, .y=0xdb, .sp=0x68, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1d90, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1d90, .value=0xed, .type=IO_READ},
        {.addr=0x1d91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006B) {
    const struct CPU_State initial_cpu = {.pc=0xdb04, .a=0xab, .x=0xd4, .y=0x6f, .sp=0xe2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdb04, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdb05, .a=0xab, .x=0xd4, .y=0x6f, .sp=0xe2, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xdb04, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdb04, .value=0xed, .type=IO_READ},
        {.addr=0xdb05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006C) {
    const struct CPU_State initial_cpu = {.pc=0x6a15, .a=0x0e, .x=0xf1, .y=0xca, .sp=0xf7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6a15, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6a16, .a=0x0e, .x=0xf1, .y=0xca, .sp=0xf7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6a15, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6a15, .value=0xed, .type=IO_READ},
        {.addr=0x6a16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006D) {
    const struct CPU_State initial_cpu = {.pc=0x4252, .a=0xd9, .x=0x77, .y=0x37, .sp=0xd2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4252, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4253, .a=0xd9, .x=0x77, .y=0x37, .sp=0xd2, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x4252, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4252, .value=0xed, .type=IO_READ},
        {.addr=0x4253, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006E) {
    const struct CPU_State initial_cpu = {.pc=0x01e7, .a=0x13, .x=0x69, .y=0xac, .sp=0x8f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x01e8, .a=0x13, .x=0x69, .y=0xac, .sp=0x8f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x01e7, .value=0xed, .type=IO_READ},
        {.addr=0x01e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_006F) {
    const struct CPU_State initial_cpu = {.pc=0x3539, .a=0x28, .x=0x77, .y=0xbb, .sp=0xbd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3539, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x353a, .a=0x28, .x=0x77, .y=0xbb, .sp=0xbd, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x3539, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3539, .value=0xed, .type=IO_READ},
        {.addr=0x353a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0070) {
    const struct CPU_State initial_cpu = {.pc=0xc198, .a=0x6e, .x=0x1b, .y=0x87, .sp=0x75, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xc198, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc199, .a=0x6e, .x=0x1b, .y=0x87, .sp=0x75, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xc198, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc198, .value=0xed, .type=IO_READ},
        {.addr=0xc199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3c22, .a=0x23, .x=0xea, .y=0xa3, .sp=0x02, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3c22, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0x23, .x=0xea, .y=0xa3, .sp=0x02, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3c22, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3c22, .value=0xed, .type=IO_READ},
        {.addr=0x3c23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0072) {
    const struct CPU_State initial_cpu = {.pc=0xb048, .a=0x0a, .x=0x38, .y=0x80, .sp=0x2e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb048, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb049, .a=0x0a, .x=0x38, .y=0x80, .sp=0x2e, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xb048, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb048, .value=0xed, .type=IO_READ},
        {.addr=0xb049, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0073) {
    const struct CPU_State initial_cpu = {.pc=0xe621, .a=0x36, .x=0xba, .y=0x9e, .sp=0xdb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe621, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe622, .a=0x36, .x=0xba, .y=0x9e, .sp=0xdb, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xe621, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe621, .value=0xed, .type=IO_READ},
        {.addr=0xe622, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0074) {
    const struct CPU_State initial_cpu = {.pc=0xb0e2, .a=0xa6, .x=0xae, .y=0x2b, .sp=0x62, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb0e3, .a=0xa6, .x=0xae, .y=0x2b, .sp=0x62, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xb0e2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb0e2, .value=0xed, .type=IO_READ},
        {.addr=0xb0e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0075) {
    const struct CPU_State initial_cpu = {.pc=0xa369, .a=0x42, .x=0x97, .y=0xc0, .sp=0x2b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xa369, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa36a, .a=0x42, .x=0x97, .y=0xc0, .sp=0x2b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa369, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa369, .value=0xed, .type=IO_READ},
        {.addr=0xa36a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0076) {
    const struct CPU_State initial_cpu = {.pc=0xb61e, .a=0x14, .x=0xfb, .y=0x69, .sp=0x57, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xb61e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb61f, .a=0x14, .x=0xfb, .y=0x69, .sp=0x57, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb61e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb61e, .value=0xed, .type=IO_READ},
        {.addr=0xb61f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0077) {
    const struct CPU_State initial_cpu = {.pc=0xeb5a, .a=0x3f, .x=0xf0, .y=0x32, .sp=0x10, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xeb5b, .a=0x3f, .x=0xf0, .y=0x32, .sp=0x10, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xeb5a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeb5a, .value=0xed, .type=IO_READ},
        {.addr=0xeb5b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0078) {
    const struct CPU_State initial_cpu = {.pc=0x15fa, .a=0x8e, .x=0xa1, .y=0x04, .sp=0x4f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x15fa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15fb, .a=0x8e, .x=0xa1, .y=0x04, .sp=0x4f, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x15fa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15fa, .value=0xed, .type=IO_READ},
        {.addr=0x15fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0079) {
    const struct CPU_State initial_cpu = {.pc=0x2855, .a=0xfe, .x=0x44, .y=0x3d, .sp=0xba, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2855, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2856, .a=0xfe, .x=0x44, .y=0x3d, .sp=0xba, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2855, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2855, .value=0xed, .type=IO_READ},
        {.addr=0x2856, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007A) {
    const struct CPU_State initial_cpu = {.pc=0x2dcc, .a=0xec, .x=0x24, .y=0x26, .sp=0x48, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2dcc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2dcd, .a=0xec, .x=0x24, .y=0x26, .sp=0x48, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2dcc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2dcc, .value=0xed, .type=IO_READ},
        {.addr=0x2dcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007B) {
    const struct CPU_State initial_cpu = {.pc=0xefe5, .a=0xc5, .x=0x58, .y=0xc4, .sp=0xb7, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xefe5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xefe6, .a=0xc5, .x=0x58, .y=0xc4, .sp=0xb7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xefe5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xefe5, .value=0xed, .type=IO_READ},
        {.addr=0xefe6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007C) {
    const struct CPU_State initial_cpu = {.pc=0xb778, .a=0x78, .x=0xf9, .y=0xba, .sp=0xec, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb778, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb779, .a=0x78, .x=0xf9, .y=0xba, .sp=0xec, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb778, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb778, .value=0xed, .type=IO_READ},
        {.addr=0xb779, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007D) {
    const struct CPU_State initial_cpu = {.pc=0xb005, .a=0x4a, .x=0xed, .y=0x10, .sp=0x09, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb005, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb006, .a=0x4a, .x=0xed, .y=0x10, .sp=0x09, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xb005, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb005, .value=0xed, .type=IO_READ},
        {.addr=0xb006, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007E) {
    const struct CPU_State initial_cpu = {.pc=0xb25c, .a=0xa3, .x=0xb0, .y=0xa1, .sp=0x33, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb25c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb25d, .a=0xa3, .x=0xb0, .y=0xa1, .sp=0x33, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xb25c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb25c, .value=0xed, .type=IO_READ},
        {.addr=0xb25d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_007F) {
    const struct CPU_State initial_cpu = {.pc=0x3eb5, .a=0x94, .x=0xac, .y=0x7f, .sp=0xbb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3eb6, .a=0x94, .x=0xac, .y=0x7f, .sp=0xbb, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x3eb5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3eb5, .value=0xed, .type=IO_READ},
        {.addr=0x3eb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0080) {
    const struct CPU_State initial_cpu = {.pc=0xa9e6, .a=0xdf, .x=0x7c, .y=0x2c, .sp=0x40, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa9e7, .a=0xdf, .x=0x7c, .y=0x2c, .sp=0x40, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa9e6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa9e6, .value=0xed, .type=IO_READ},
        {.addr=0xa9e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb1ad, .a=0x5a, .x=0x74, .y=0x24, .sp=0xd5, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ad, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb1ae, .a=0x5a, .x=0x74, .y=0x24, .sp=0xd5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xb1ad, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb1ad, .value=0xed, .type=IO_READ},
        {.addr=0xb1ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0082) {
    const struct CPU_State initial_cpu = {.pc=0x28fa, .a=0x2b, .x=0x6c, .y=0xda, .sp=0x3f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x28fa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x28fb, .a=0x2b, .x=0x6c, .y=0xda, .sp=0x3f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x28fa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x28fa, .value=0xed, .type=IO_READ},
        {.addr=0x28fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0083) {
    const struct CPU_State initial_cpu = {.pc=0x6bea, .a=0xaa, .x=0x80, .y=0x0d, .sp=0xf9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x6bea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6beb, .a=0xaa, .x=0x80, .y=0x0d, .sp=0xf9, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6bea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6bea, .value=0xed, .type=IO_READ},
        {.addr=0x6beb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0084) {
    const struct CPU_State initial_cpu = {.pc=0x1ab7, .a=0x0f, .x=0x0b, .y=0xdc, .sp=0x16, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1ab8, .a=0x0f, .x=0x0b, .y=0xdc, .sp=0x16, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1ab7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1ab7, .value=0xed, .type=IO_READ},
        {.addr=0x1ab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0085) {
    const struct CPU_State initial_cpu = {.pc=0x3f63, .a=0x2d, .x=0x63, .y=0x79, .sp=0x36, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3f63, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3f64, .a=0x2d, .x=0x63, .y=0x79, .sp=0x36, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3f63, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3f63, .value=0xed, .type=IO_READ},
        {.addr=0x3f64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0086) {
    const struct CPU_State initial_cpu = {.pc=0xa467, .a=0x80, .x=0xb4, .y=0x8e, .sp=0x27, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa467, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa468, .a=0x80, .x=0xb4, .y=0x8e, .sp=0x27, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa467, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa467, .value=0xed, .type=IO_READ},
        {.addr=0xa468, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0087) {
    const struct CPU_State initial_cpu = {.pc=0x5eb1, .a=0xc2, .x=0x3a, .y=0x6f, .sp=0xaf, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5eb2, .a=0xc2, .x=0x3a, .y=0x6f, .sp=0xaf, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x5eb1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5eb1, .value=0xed, .type=IO_READ},
        {.addr=0x5eb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1fdc, .a=0x0e, .x=0x7b, .y=0x9b, .sp=0x8d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1fdc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1fdd, .a=0x0e, .x=0x7b, .y=0x9b, .sp=0x8d, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x1fdc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1fdc, .value=0xed, .type=IO_READ},
        {.addr=0x1fdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0089) {
    const struct CPU_State initial_cpu = {.pc=0xc147, .a=0x75, .x=0xd3, .y=0xa7, .sp=0xb9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc147, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc148, .a=0x75, .x=0xd3, .y=0xa7, .sp=0xb9, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xc147, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc147, .value=0xed, .type=IO_READ},
        {.addr=0xc148, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008A) {
    const struct CPU_State initial_cpu = {.pc=0x2a53, .a=0x92, .x=0xed, .y=0xca, .sp=0x12, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a53, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a54, .a=0x92, .x=0xed, .y=0xca, .sp=0x12, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x2a53, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a53, .value=0xed, .type=IO_READ},
        {.addr=0x2a54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008B) {
    const struct CPU_State initial_cpu = {.pc=0xabb8, .a=0x2c, .x=0xb9, .y=0xb6, .sp=0x29, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xabb8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xabb9, .a=0x2c, .x=0xb9, .y=0xb6, .sp=0x29, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xabb8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xabb8, .value=0xed, .type=IO_READ},
        {.addr=0xabb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008C) {
    const struct CPU_State initial_cpu = {.pc=0xa9bb, .a=0xde, .x=0xc1, .y=0xf1, .sp=0x4a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa9bb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa9bc, .a=0xde, .x=0xc1, .y=0xf1, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa9bb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa9bb, .value=0xed, .type=IO_READ},
        {.addr=0xa9bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008D) {
    const struct CPU_State initial_cpu = {.pc=0x11b2, .a=0x2d, .x=0xcc, .y=0x4b, .sp=0xbf, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x11b2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x11b3, .a=0x2d, .x=0xcc, .y=0x4b, .sp=0xbf, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x11b2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x11b2, .value=0xed, .type=IO_READ},
        {.addr=0x11b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008E) {
    const struct CPU_State initial_cpu = {.pc=0x9339, .a=0x3c, .x=0xa0, .y=0x8e, .sp=0x76, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9339, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x933a, .a=0x3c, .x=0xa0, .y=0x8e, .sp=0x76, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9339, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9339, .value=0xed, .type=IO_READ},
        {.addr=0x933a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_008F) {
    const struct CPU_State initial_cpu = {.pc=0x83ce, .a=0x39, .x=0xef, .y=0xb8, .sp=0xd4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x83ce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x83cf, .a=0x39, .x=0xef, .y=0xb8, .sp=0xd4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x83ce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x83ce, .value=0xed, .type=IO_READ},
        {.addr=0x83cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0090) {
    const struct CPU_State initial_cpu = {.pc=0x2031, .a=0x23, .x=0xfb, .y=0x50, .sp=0x82, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x2031, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2032, .a=0x23, .x=0xfb, .y=0x50, .sp=0x82, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x2031, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2031, .value=0xed, .type=IO_READ},
        {.addr=0x2032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0091) {
    const struct CPU_State initial_cpu = {.pc=0x72e8, .a=0xb1, .x=0x1f, .y=0xb3, .sp=0x3d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x72e8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x72e9, .a=0xb1, .x=0x1f, .y=0xb3, .sp=0x3d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x72e8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x72e8, .value=0xed, .type=IO_READ},
        {.addr=0x72e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0092) {
    const struct CPU_State initial_cpu = {.pc=0x187a, .a=0x89, .x=0x72, .y=0xa2, .sp=0x76, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x187a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x187b, .a=0x89, .x=0x72, .y=0xa2, .sp=0x76, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x187a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x187a, .value=0xed, .type=IO_READ},
        {.addr=0x187b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0093) {
    const struct CPU_State initial_cpu = {.pc=0x34dd, .a=0xd8, .x=0xf3, .y=0x6b, .sp=0xe6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x34dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x34de, .a=0xd8, .x=0xf3, .y=0x6b, .sp=0xe6, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x34dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x34dd, .value=0xed, .type=IO_READ},
        {.addr=0x34de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0094) {
    const struct CPU_State initial_cpu = {.pc=0xe7b8, .a=0x2e, .x=0x36, .y=0x41, .sp=0x95, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe7b9, .a=0x2e, .x=0x36, .y=0x41, .sp=0x95, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe7b8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe7b8, .value=0xed, .type=IO_READ},
        {.addr=0xe7b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc80a, .a=0xcf, .x=0xfc, .y=0x0c, .sp=0x22, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xc80a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc80b, .a=0xcf, .x=0xfc, .y=0x0c, .sp=0x22, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc80a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc80a, .value=0xed, .type=IO_READ},
        {.addr=0xc80b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0096) {
    const struct CPU_State initial_cpu = {.pc=0xbf1a, .a=0xd8, .x=0x96, .y=0x76, .sp=0x67, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xbf1a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbf1b, .a=0xd8, .x=0x96, .y=0x76, .sp=0x67, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbf1a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbf1a, .value=0xed, .type=IO_READ},
        {.addr=0xbf1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0097) {
    const struct CPU_State initial_cpu = {.pc=0x693a, .a=0xf7, .x=0xd5, .y=0x04, .sp=0x59, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x693a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x693b, .a=0xf7, .x=0xd5, .y=0x04, .sp=0x59, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x693a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x693a, .value=0xed, .type=IO_READ},
        {.addr=0x693b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0098) {
    const struct CPU_State initial_cpu = {.pc=0xf268, .a=0xef, .x=0x6e, .y=0x3e, .sp=0x06, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf268, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf269, .a=0xef, .x=0x6e, .y=0x3e, .sp=0x06, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf268, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf268, .value=0xed, .type=IO_READ},
        {.addr=0xf269, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0099) {
    const struct CPU_State initial_cpu = {.pc=0x6e93, .a=0xf6, .x=0x63, .y=0x95, .sp=0xab, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6e93, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6e94, .a=0xf6, .x=0x63, .y=0x95, .sp=0xab, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6e93, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6e93, .value=0xed, .type=IO_READ},
        {.addr=0x6e94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009A) {
    const struct CPU_State initial_cpu = {.pc=0x1c94, .a=0x03, .x=0x56, .y=0xcb, .sp=0xe1, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x1c94, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1c95, .a=0x03, .x=0x56, .y=0xcb, .sp=0xe1, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x1c94, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1c94, .value=0xed, .type=IO_READ},
        {.addr=0x1c95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009B) {
    const struct CPU_State initial_cpu = {.pc=0x37da, .a=0x37, .x=0xbc, .y=0xb4, .sp=0x94, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x37da, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x37db, .a=0x37, .x=0xbc, .y=0xb4, .sp=0x94, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x37da, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x37da, .value=0xed, .type=IO_READ},
        {.addr=0x37db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009C) {
    const struct CPU_State initial_cpu = {.pc=0xa621, .a=0x0c, .x=0xe4, .y=0x95, .sp=0x0b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa621, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa622, .a=0x0c, .x=0xe4, .y=0x95, .sp=0x0b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa621, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa621, .value=0xed, .type=IO_READ},
        {.addr=0xa622, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009D) {
    const struct CPU_State initial_cpu = {.pc=0x398f, .a=0xbf, .x=0x5c, .y=0x54, .sp=0x79, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x398f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3990, .a=0xbf, .x=0x5c, .y=0x54, .sp=0x79, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x398f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x398f, .value=0xed, .type=IO_READ},
        {.addr=0x3990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009E) {
    const struct CPU_State initial_cpu = {.pc=0xa0c6, .a=0x02, .x=0xeb, .y=0x34, .sp=0x06, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa0c6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa0c7, .a=0x02, .x=0xeb, .y=0x34, .sp=0x06, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa0c6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa0c6, .value=0xed, .type=IO_READ},
        {.addr=0xa0c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_009F) {
    const struct CPU_State initial_cpu = {.pc=0x1a7a, .a=0x33, .x=0xed, .y=0x5d, .sp=0xee, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1a7b, .a=0x33, .x=0xed, .y=0x5d, .sp=0xee, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x1a7a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1a7a, .value=0xed, .type=IO_READ},
        {.addr=0x1a7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x3ccf, .a=0xb3, .x=0xb6, .y=0xb2, .sp=0xfa, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3ccf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3cd0, .a=0xb3, .x=0xb6, .y=0xb2, .sp=0xfa, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3ccf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3ccf, .value=0xed, .type=IO_READ},
        {.addr=0x3cd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x798c, .a=0xd3, .x=0x8b, .y=0x00, .sp=0xea, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x798c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x798d, .a=0xd3, .x=0x8b, .y=0x00, .sp=0xea, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x798c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x798c, .value=0xed, .type=IO_READ},
        {.addr=0x798d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x99c6, .a=0x43, .x=0x30, .y=0xbe, .sp=0x7c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x99c6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x99c7, .a=0x43, .x=0x30, .y=0xbe, .sp=0x7c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x99c6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x99c6, .value=0xed, .type=IO_READ},
        {.addr=0x99c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x6bf5, .a=0x79, .x=0x50, .y=0xcc, .sp=0xd3, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6bf6, .a=0x79, .x=0x50, .y=0xcc, .sp=0xd3, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x6bf5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6bf5, .value=0xed, .type=IO_READ},
        {.addr=0x6bf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x9f88, .a=0xe9, .x=0xe4, .y=0x01, .sp=0xa0, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9f88, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9f89, .a=0xe9, .x=0xe4, .y=0x01, .sp=0xa0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9f88, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9f88, .value=0xed, .type=IO_READ},
        {.addr=0x9f89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x70ef, .a=0xed, .x=0xf8, .y=0xb4, .sp=0x5f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x70ef, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x70f0, .a=0xed, .x=0xf8, .y=0xb4, .sp=0x5f, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x70ef, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x70ef, .value=0xed, .type=IO_READ},
        {.addr=0x70f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xcf12, .a=0xf4, .x=0x43, .y=0xc0, .sp=0x0d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcf12, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcf13, .a=0xf4, .x=0x43, .y=0xc0, .sp=0x0d, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xcf12, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcf12, .value=0xed, .type=IO_READ},
        {.addr=0xcf13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x606c, .a=0x94, .x=0x88, .y=0x3c, .sp=0x43, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x606c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x606d, .a=0x94, .x=0x88, .y=0x3c, .sp=0x43, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x606c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x606c, .value=0xed, .type=IO_READ},
        {.addr=0x606d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xf9b4, .a=0x49, .x=0xea, .y=0x43, .sp=0x37, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf9b4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf9b5, .a=0x49, .x=0xea, .y=0x43, .sp=0x37, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf9b4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf9b4, .value=0xed, .type=IO_READ},
        {.addr=0xf9b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xb3f2, .a=0xeb, .x=0x8a, .y=0x4b, .sp=0x6a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb3f3, .a=0xeb, .x=0x8a, .y=0x4b, .sp=0x6a, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xb3f2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb3f2, .value=0xed, .type=IO_READ},
        {.addr=0xb3f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xafb3, .a=0xe8, .x=0x39, .y=0x31, .sp=0x5c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xafb3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xafb4, .a=0xe8, .x=0x39, .y=0x31, .sp=0x5c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xafb3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xafb3, .value=0xed, .type=IO_READ},
        {.addr=0xafb4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x00dd, .a=0x57, .x=0x24, .y=0x55, .sp=0x3f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x00de, .a=0x57, .x=0x24, .y=0x55, .sp=0x3f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x00dd, .value=0xed, .type=IO_READ},
        {.addr=0x00de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xcee4, .a=0x2b, .x=0xa6, .y=0xad, .sp=0x44, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xcee4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcee5, .a=0x2b, .x=0xa6, .y=0xad, .sp=0x44, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcee4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcee4, .value=0xed, .type=IO_READ},
        {.addr=0xcee5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1360, .a=0x63, .x=0x21, .y=0xde, .sp=0xca, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1360, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1361, .a=0x63, .x=0x21, .y=0xde, .sp=0xca, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x1360, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1360, .value=0xed, .type=IO_READ},
        {.addr=0x1361, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xc384, .a=0x8d, .x=0x54, .y=0x46, .sp=0x93, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc384, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc385, .a=0x8d, .x=0x54, .y=0x46, .sp=0x93, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc384, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc384, .value=0xed, .type=IO_READ},
        {.addr=0xc385, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x80c7, .a=0xd6, .x=0x1a, .y=0x82, .sp=0x81, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x80c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x80c8, .a=0xd6, .x=0x1a, .y=0x82, .sp=0x81, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x80c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x80c7, .value=0xed, .type=IO_READ},
        {.addr=0x80c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf1bf, .a=0xfa, .x=0xfa, .y=0xbf, .sp=0xfa, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf1bf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf1c0, .a=0xfa, .x=0xfa, .y=0xbf, .sp=0xfa, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xf1bf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf1bf, .value=0xed, .type=IO_READ},
        {.addr=0xf1c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6b1e, .a=0x85, .x=0x1a, .y=0x62, .sp=0xf1, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6b1f, .a=0x85, .x=0x1a, .y=0x62, .sp=0xf1, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x6b1e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6b1e, .value=0xed, .type=IO_READ},
        {.addr=0x6b1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xb12b, .a=0xcb, .x=0x11, .y=0x80, .sp=0xac, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xb12b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb12c, .a=0xcb, .x=0x11, .y=0x80, .sp=0xac, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xb12b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb12b, .value=0xed, .type=IO_READ},
        {.addr=0xb12c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x064e, .a=0x47, .x=0xc1, .y=0xe6, .sp=0x9c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x064e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x064f, .a=0x47, .x=0xc1, .y=0xe6, .sp=0x9c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x064e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x064e, .value=0xed, .type=IO_READ},
        {.addr=0x064f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xe7e3, .a=0x14, .x=0x8f, .y=0x3f, .sp=0x73, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe7e4, .a=0x14, .x=0x8f, .y=0x3f, .sp=0x73, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xe7e3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe7e3, .value=0xed, .type=IO_READ},
        {.addr=0xe7e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x6158, .a=0x58, .x=0x63, .y=0xe8, .sp=0x15, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6158, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6159, .a=0x58, .x=0x63, .y=0xe8, .sp=0x15, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6158, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6158, .value=0xed, .type=IO_READ},
        {.addr=0x6159, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xefb0, .a=0xb9, .x=0x7c, .y=0x98, .sp=0x10, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xefb0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xefb1, .a=0xb9, .x=0x7c, .y=0x98, .sp=0x10, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xefb0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xefb0, .value=0xed, .type=IO_READ},
        {.addr=0xefb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x5c08, .a=0xcf, .x=0x82, .y=0xc3, .sp=0x4a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5c08, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5c09, .a=0xcf, .x=0x82, .y=0xc3, .sp=0x4a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x5c08, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5c08, .value=0xed, .type=IO_READ},
        {.addr=0x5c09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0x83, .x=0x92, .y=0x4e, .sp=0xdf, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x821c, .a=0x83, .x=0x92, .y=0x4e, .sp=0xdf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0xed, .type=IO_READ},
        {.addr=0x821c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xcf30, .a=0x0a, .x=0xa6, .y=0x6d, .sp=0xcb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xcf30, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcf31, .a=0x0a, .x=0xa6, .y=0x6d, .sp=0xcb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcf30, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcf30, .value=0xed, .type=IO_READ},
        {.addr=0xcf31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x08c4, .a=0xaa, .x=0xe0, .y=0xf7, .sp=0x40, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x08c4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x08c5, .a=0xaa, .x=0xe0, .y=0xf7, .sp=0x40, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x08c4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x08c4, .value=0xed, .type=IO_READ},
        {.addr=0x08c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x240c, .a=0xf1, .x=0xc9, .y=0xc7, .sp=0x12, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x240c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x240d, .a=0xf1, .x=0xc9, .y=0xc7, .sp=0x12, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x240c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x240c, .value=0xed, .type=IO_READ},
        {.addr=0x240d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x15dc, .a=0x18, .x=0x51, .y=0x70, .sp=0xa6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x15dc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15dd, .a=0x18, .x=0x51, .y=0x70, .sp=0xa6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x15dc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15dc, .value=0xed, .type=IO_READ},
        {.addr=0x15dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x8373, .a=0x2a, .x=0x83, .y=0x13, .sp=0x27, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8373, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8374, .a=0x2a, .x=0x83, .y=0x13, .sp=0x27, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8373, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8373, .value=0xed, .type=IO_READ},
        {.addr=0x8374, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x9415, .a=0xa8, .x=0xe8, .y=0xa4, .sp=0x58, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9415, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9416, .a=0xa8, .x=0xe8, .y=0xa4, .sp=0x58, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x9415, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9415, .value=0xed, .type=IO_READ},
        {.addr=0x9416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xd0bc, .a=0xa6, .x=0xa1, .y=0x13, .sp=0x9a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd0bc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd0bd, .a=0xa6, .x=0xa1, .y=0x13, .sp=0x9a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xd0bc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd0bc, .value=0xed, .type=IO_READ},
        {.addr=0xd0bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x8b96, .a=0x48, .x=0x27, .y=0xe3, .sp=0xeb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8b96, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8b97, .a=0x48, .x=0x27, .y=0xe3, .sp=0xeb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8b96, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8b96, .value=0xed, .type=IO_READ},
        {.addr=0x8b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xf576, .a=0x1a, .x=0xdd, .y=0xd1, .sp=0x49, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf576, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf577, .a=0x1a, .x=0xdd, .y=0xd1, .sp=0x49, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xf576, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf576, .value=0xed, .type=IO_READ},
        {.addr=0xf577, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xd3e6, .a=0xfc, .x=0x2a, .y=0x34, .sp=0x5a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd3e6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd3e7, .a=0xfc, .x=0x2a, .y=0x34, .sp=0x5a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd3e6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd3e6, .value=0xed, .type=IO_READ},
        {.addr=0xd3e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xd032, .a=0x35, .x=0xd4, .y=0x5b, .sp=0x33, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd032, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd033, .a=0x35, .x=0xd4, .y=0x5b, .sp=0x33, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd032, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd032, .value=0xed, .type=IO_READ},
        {.addr=0xd033, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x541b, .a=0x8e, .x=0x1e, .y=0x76, .sp=0xda, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x541b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x541c, .a=0x8e, .x=0x1e, .y=0x76, .sp=0xda, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x541b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x541b, .value=0xed, .type=IO_READ},
        {.addr=0x541c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x238c, .a=0x6c, .x=0x95, .y=0x28, .sp=0x7a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x238c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x238d, .a=0x6c, .x=0x95, .y=0x28, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x238c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x238c, .value=0xed, .type=IO_READ},
        {.addr=0x238d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x3e30, .a=0x0e, .x=0xe9, .y=0x92, .sp=0x42, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e30, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3e31, .a=0x0e, .x=0xe9, .y=0x92, .sp=0x42, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3e30, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3e30, .value=0xed, .type=IO_READ},
        {.addr=0x3e31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xdd90, .a=0xb6, .x=0xd2, .y=0x7b, .sp=0xf2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xdd90, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdd91, .a=0xb6, .x=0xd2, .y=0x7b, .sp=0xf2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xdd90, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdd90, .value=0xed, .type=IO_READ},
        {.addr=0xdd91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xeac9, .a=0xa5, .x=0x00, .y=0xc3, .sp=0x77, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xeac9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xeaca, .a=0xa5, .x=0x00, .y=0xc3, .sp=0x77, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeac9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeac9, .value=0xed, .type=IO_READ},
        {.addr=0xeaca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x90b1, .a=0x55, .x=0xa7, .y=0x14, .sp=0x2c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x90b1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x90b2, .a=0x55, .x=0xa7, .y=0x14, .sp=0x2c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x90b1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x90b1, .value=0xed, .type=IO_READ},
        {.addr=0x90b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xde4b, .a=0x4c, .x=0xdc, .y=0x4e, .sp=0xe5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xde4b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde4c, .a=0x4c, .x=0xdc, .y=0x4e, .sp=0xe5, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xde4b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde4b, .value=0xed, .type=IO_READ},
        {.addr=0xde4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3d8b, .a=0x4f, .x=0x5f, .y=0xb5, .sp=0x48, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3d8c, .a=0x4f, .x=0x5f, .y=0xb5, .sp=0x48, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3d8b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3d8b, .value=0xed, .type=IO_READ},
        {.addr=0x3d8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x5f29, .a=0x69, .x=0xf7, .y=0x79, .sp=0x09, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5f29, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5f2a, .a=0x69, .x=0xf7, .y=0x79, .sp=0x09, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5f29, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5f29, .value=0xed, .type=IO_READ},
        {.addr=0x5f2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4bce, .a=0x6c, .x=0xa4, .y=0xda, .sp=0x4e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x4bce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4bcf, .a=0x6c, .x=0xa4, .y=0xda, .sp=0x4e, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x4bce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4bce, .value=0xed, .type=IO_READ},
        {.addr=0x4bcf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x6cd4, .a=0xc9, .x=0x1a, .y=0x8a, .sp=0xde, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6cd4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6cd5, .a=0xc9, .x=0x1a, .y=0x8a, .sp=0xde, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x6cd4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6cd4, .value=0xed, .type=IO_READ},
        {.addr=0x6cd5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa006, .a=0xb0, .x=0x3d, .y=0x17, .sp=0x9f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa006, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa007, .a=0xb0, .x=0x3d, .y=0x17, .sp=0x9f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa006, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa006, .value=0xed, .type=IO_READ},
        {.addr=0xa007, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0289, .a=0x3f, .x=0x6c, .y=0x51, .sp=0x38, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0289, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x028a, .a=0x3f, .x=0x6c, .y=0x51, .sp=0x38, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0289, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0289, .value=0xed, .type=IO_READ},
        {.addr=0x028a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x2d82, .a=0x11, .x=0x51, .y=0xad, .sp=0xf7, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d82, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2d83, .a=0x11, .x=0x51, .y=0xad, .sp=0xf7, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x2d82, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2d82, .value=0xed, .type=IO_READ},
        {.addr=0x2d83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xb111, .a=0x3a, .x=0x8f, .y=0xb5, .sp=0x72, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb111, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb112, .a=0x3a, .x=0x8f, .y=0xb5, .sp=0x72, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xb111, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb111, .value=0xed, .type=IO_READ},
        {.addr=0xb112, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x37b5, .a=0x95, .x=0x3f, .y=0x93, .sp=0x18, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x37b5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x37b6, .a=0x95, .x=0x3f, .y=0x93, .sp=0x18, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x37b5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x37b5, .value=0xed, .type=IO_READ},
        {.addr=0x37b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x2b95, .a=0x43, .x=0x3b, .y=0x29, .sp=0xbf, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2b95, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2b96, .a=0x43, .x=0x3b, .y=0x29, .sp=0xbf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2b95, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2b95, .value=0xed, .type=IO_READ},
        {.addr=0x2b96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x679e, .a=0x1f, .x=0x13, .y=0xf0, .sp=0x56, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x679e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x679f, .a=0x1f, .x=0x13, .y=0xf0, .sp=0x56, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x679e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x679e, .value=0xed, .type=IO_READ},
        {.addr=0x679f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x899e, .a=0x4e, .x=0xa7, .y=0x98, .sp=0x94, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x899e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x899f, .a=0x4e, .x=0xa7, .y=0x98, .sp=0x94, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x899e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x899e, .value=0xed, .type=IO_READ},
        {.addr=0x899f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x87f0, .a=0xdc, .x=0xde, .y=0xeb, .sp=0x24, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x87f0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x87f1, .a=0xdc, .x=0xde, .y=0xeb, .sp=0x24, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x87f0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x87f0, .value=0xed, .type=IO_READ},
        {.addr=0x87f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xac49, .a=0x0e, .x=0xb3, .y=0xb9, .sp=0xfa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xac49, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xac4a, .a=0x0e, .x=0xb3, .y=0xb9, .sp=0xfa, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xac49, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xac49, .value=0xed, .type=IO_READ},
        {.addr=0xac4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0x33, .x=0x4a, .y=0x7b, .sp=0xa3, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0fe2, .a=0x33, .x=0x4a, .y=0x7b, .sp=0xa3, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0fe1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0xed, .type=IO_READ},
        {.addr=0x0fe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xa081, .a=0x3c, .x=0x2f, .y=0xb8, .sp=0xf8, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa081, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa082, .a=0x3c, .x=0x2f, .y=0xb8, .sp=0xf8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa081, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa081, .value=0xed, .type=IO_READ},
        {.addr=0xa082, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x3730, .a=0x73, .x=0xa5, .y=0x41, .sp=0x06, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x3730, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3731, .a=0x73, .x=0xa5, .y=0x41, .sp=0x06, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x3730, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3730, .value=0xed, .type=IO_READ},
        {.addr=0x3731, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x89ca, .a=0x5e, .x=0x00, .y=0xdc, .sp=0xd7, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x89ca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x89cb, .a=0x5e, .x=0x00, .y=0xdc, .sp=0xd7, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x89ca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x89ca, .value=0xed, .type=IO_READ},
        {.addr=0x89cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x8779, .a=0x0c, .x=0x28, .y=0xd2, .sp=0xcc, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8779, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x877a, .a=0x0c, .x=0x28, .y=0xd2, .sp=0xcc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8779, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8779, .value=0xed, .type=IO_READ},
        {.addr=0x877a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xd544, .a=0x60, .x=0xc2, .y=0xa5, .sp=0xf1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd544, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd545, .a=0x60, .x=0xc2, .y=0xa5, .sp=0xf1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd544, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd544, .value=0xed, .type=IO_READ},
        {.addr=0xd545, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x004a, .a=0x15, .x=0xb8, .y=0x68, .sp=0x66, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x004b, .a=0x15, .x=0xb8, .y=0x68, .sp=0x66, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x004a, .value=0xed, .type=IO_READ},
        {.addr=0x004b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x3364, .a=0x57, .x=0x9a, .y=0xad, .sp=0x54, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3364, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3365, .a=0x57, .x=0x9a, .y=0xad, .sp=0x54, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x3364, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3364, .value=0xed, .type=IO_READ},
        {.addr=0x3365, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x9236, .a=0x8a, .x=0xe2, .y=0x64, .sp=0x96, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9236, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9237, .a=0x8a, .x=0xe2, .y=0x64, .sp=0x96, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9236, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9236, .value=0xed, .type=IO_READ},
        {.addr=0x9237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x0795, .a=0x43, .x=0xc2, .y=0xf4, .sp=0x08, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0795, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0796, .a=0x43, .x=0xc2, .y=0xf4, .sp=0x08, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0795, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0795, .value=0xed, .type=IO_READ},
        {.addr=0x0796, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xcf88, .a=0xd0, .x=0xf5, .y=0x19, .sp=0xc6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf88, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcf89, .a=0xd0, .x=0xf5, .y=0x19, .sp=0xc6, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xcf88, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcf88, .value=0xed, .type=IO_READ},
        {.addr=0xcf89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x3cf1, .a=0x83, .x=0xd6, .y=0x6e, .sp=0x84, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3cf2, .a=0x83, .x=0xd6, .y=0x6e, .sp=0x84, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3cf1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3cf1, .value=0xed, .type=IO_READ},
        {.addr=0x3cf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xf479, .a=0x46, .x=0xb2, .y=0x3e, .sp=0xdb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xf479, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf47a, .a=0x46, .x=0xb2, .y=0x3e, .sp=0xdb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf479, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf479, .value=0xed, .type=IO_READ},
        {.addr=0xf47a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xebb5, .a=0x25, .x=0xf5, .y=0x78, .sp=0x81, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xebb5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xebb6, .a=0x25, .x=0xf5, .y=0x78, .sp=0x81, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xebb5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xebb5, .value=0xed, .type=IO_READ},
        {.addr=0xebb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xe5e0, .a=0x43, .x=0x8e, .y=0x74, .sp=0x52, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe5e1, .a=0x43, .x=0x8e, .y=0x74, .sp=0x52, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xe5e0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe5e0, .value=0xed, .type=IO_READ},
        {.addr=0xe5e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x38d5, .a=0xd2, .x=0x8d, .y=0x1d, .sp=0x58, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x38d5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x38d6, .a=0xd2, .x=0x8d, .y=0x1d, .sp=0x58, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x38d5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x38d5, .value=0xed, .type=IO_READ},
        {.addr=0x38d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xd495, .a=0x26, .x=0x2b, .y=0xd3, .sp=0x28, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xd495, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd496, .a=0x26, .x=0x2b, .y=0xd3, .sp=0x28, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xd495, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd495, .value=0xed, .type=IO_READ},
        {.addr=0xd496, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xb2f1, .a=0x8d, .x=0xd3, .y=0x69, .sp=0x5d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb2f2, .a=0x8d, .x=0xd3, .y=0x69, .sp=0x5d, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xb2f1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb2f1, .value=0xed, .type=IO_READ},
        {.addr=0xb2f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf5fd, .a=0x5d, .x=0x3f, .y=0xc9, .sp=0x18, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf5fe, .a=0x5d, .x=0x3f, .y=0xc9, .sp=0x18, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xf5fd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf5fd, .value=0xed, .type=IO_READ},
        {.addr=0xf5fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x48a0, .a=0x16, .x=0x5d, .y=0x4f, .sp=0x18, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x48a0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x48a1, .a=0x16, .x=0x5d, .y=0x4f, .sp=0x18, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x48a0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x48a0, .value=0xed, .type=IO_READ},
        {.addr=0x48a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x6c02, .a=0xae, .x=0xac, .y=0x17, .sp=0xd9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c02, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6c03, .a=0xae, .x=0xac, .y=0x17, .sp=0xd9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6c02, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6c02, .value=0xed, .type=IO_READ},
        {.addr=0x6c03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xfa55, .a=0x76, .x=0x55, .y=0x60, .sp=0x2c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfa55, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfa56, .a=0x76, .x=0x55, .y=0x60, .sp=0x2c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfa55, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfa55, .value=0xed, .type=IO_READ},
        {.addr=0xfa56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x3cf7, .a=0x4a, .x=0xd7, .y=0x77, .sp=0x80, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3cf8, .a=0x4a, .x=0xd7, .y=0x77, .sp=0x80, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3cf7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3cf7, .value=0xed, .type=IO_READ},
        {.addr=0x3cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xe96c, .a=0xb3, .x=0xa3, .y=0xbb, .sp=0x26, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xe96c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0xb3, .x=0xa3, .y=0xbb, .sp=0x26, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xe96c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe96c, .value=0xed, .type=IO_READ},
        {.addr=0xe96d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0408, .a=0x3b, .x=0x22, .y=0xd8, .sp=0x36, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0408, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0409, .a=0x3b, .x=0x22, .y=0xd8, .sp=0x36, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0408, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0408, .value=0xed, .type=IO_READ},
        {.addr=0x0409, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x4ef1, .a=0xe8, .x=0x6b, .y=0x66, .sp=0xd6, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4ef2, .a=0xe8, .x=0x6b, .y=0x66, .sp=0xd6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4ef1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4ef1, .value=0xed, .type=IO_READ},
        {.addr=0x4ef2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x0be3, .a=0x47, .x=0x1a, .y=0x86, .sp=0x2d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0be3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0be4, .a=0x47, .x=0x1a, .y=0x86, .sp=0x2d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0be3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0be3, .value=0xed, .type=IO_READ},
        {.addr=0x0be4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x345e, .a=0x3f, .x=0x72, .y=0x59, .sp=0x81, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x345e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x345f, .a=0x3f, .x=0x72, .y=0x59, .sp=0x81, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x345e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x345e, .value=0xed, .type=IO_READ},
        {.addr=0x345f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4310, .a=0xc2, .x=0x10, .y=0x23, .sp=0x81, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4310, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4311, .a=0xc2, .x=0x10, .y=0x23, .sp=0x81, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x4310, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4310, .value=0xed, .type=IO_READ},
        {.addr=0x4311, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xaff3, .a=0xbd, .x=0x24, .y=0x6c, .sp=0x3c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xaff3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaff4, .a=0xbd, .x=0x24, .y=0x6c, .sp=0x3c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xaff3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaff3, .value=0xed, .type=IO_READ},
        {.addr=0xaff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xf27e, .a=0x2d, .x=0x59, .y=0x0d, .sp=0x7c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf27e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf27f, .a=0x2d, .x=0x59, .y=0x0d, .sp=0x7c, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xf27e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf27e, .value=0xed, .type=IO_READ},
        {.addr=0xf27f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x379c, .a=0xe4, .x=0x49, .y=0x5d, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x379c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x379d, .a=0xe4, .x=0x49, .y=0x5d, .sp=0xfe, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x379c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x379c, .value=0xed, .type=IO_READ},
        {.addr=0x379d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x4a90, .a=0x8b, .x=0x0a, .y=0x3b, .sp=0x69, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a90, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4a91, .a=0x8b, .x=0x0a, .y=0x3b, .sp=0x69, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4a90, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4a90, .value=0xed, .type=IO_READ},
        {.addr=0x4a91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb09a, .a=0xb9, .x=0xb0, .y=0x92, .sp=0x6a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb09a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb09b, .a=0xb9, .x=0xb0, .y=0x92, .sp=0x6a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xb09a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb09a, .value=0xed, .type=IO_READ},
        {.addr=0xb09b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xa944, .a=0xdf, .x=0x49, .y=0x19, .sp=0xe5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa944, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa945, .a=0xdf, .x=0x49, .y=0x19, .sp=0xe5, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xa944, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa944, .value=0xed, .type=IO_READ},
        {.addr=0xa945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x9603, .a=0x24, .x=0x02, .y=0x04, .sp=0x01, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9603, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9604, .a=0x24, .x=0x02, .y=0x04, .sp=0x01, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x9603, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9603, .value=0xed, .type=IO_READ},
        {.addr=0x9604, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x09f0, .a=0xf3, .x=0x6f, .y=0x31, .sp=0x5b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x09f0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x09f1, .a=0xf3, .x=0x6f, .y=0x31, .sp=0x5b, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x09f0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x09f0, .value=0xed, .type=IO_READ},
        {.addr=0x09f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x1f5c, .a=0x88, .x=0xd4, .y=0x42, .sp=0x0a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f5c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1f5d, .a=0x88, .x=0xd4, .y=0x42, .sp=0x0a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x1f5c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1f5c, .value=0xed, .type=IO_READ},
        {.addr=0x1f5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xc831, .a=0x78, .x=0xe7, .y=0x5c, .sp=0x1a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc831, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc832, .a=0x78, .x=0xe7, .y=0x5c, .sp=0x1a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xc831, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc831, .value=0xed, .type=IO_READ},
        {.addr=0xc832, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc33f, .a=0x1f, .x=0x8b, .y=0x72, .sp=0xd0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc33f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc340, .a=0x1f, .x=0x8b, .y=0x72, .sp=0xd0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc33f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc33f, .value=0xed, .type=IO_READ},
        {.addr=0xc340, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0101) {
    const struct CPU_State initial_cpu = {.pc=0x0966, .a=0x96, .x=0xe3, .y=0x45, .sp=0xa3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0966, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0967, .a=0x96, .x=0xe3, .y=0x45, .sp=0xa3, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0966, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0966, .value=0xed, .type=IO_READ},
        {.addr=0x0967, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0102) {
    const struct CPU_State initial_cpu = {.pc=0x07f3, .a=0xca, .x=0x20, .y=0xe8, .sp=0xe2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x07f3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x07f4, .a=0xca, .x=0x20, .y=0xe8, .sp=0xe2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x07f3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x07f3, .value=0xed, .type=IO_READ},
        {.addr=0x07f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0103) {
    const struct CPU_State initial_cpu = {.pc=0x0df1, .a=0xa3, .x=0xc3, .y=0x6b, .sp=0x10, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0df1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0df2, .a=0xa3, .x=0xc3, .y=0x6b, .sp=0x10, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0df1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0df1, .value=0xed, .type=IO_READ},
        {.addr=0x0df2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0104) {
    const struct CPU_State initial_cpu = {.pc=0x7638, .a=0x78, .x=0x21, .y=0x51, .sp=0x10, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x7638, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7639, .a=0x78, .x=0x21, .y=0x51, .sp=0x10, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x7638, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7638, .value=0xed, .type=IO_READ},
        {.addr=0x7639, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0105) {
    const struct CPU_State initial_cpu = {.pc=0x5317, .a=0x1e, .x=0xeb, .y=0x34, .sp=0x39, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5317, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5318, .a=0x1e, .x=0xeb, .y=0x34, .sp=0x39, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5317, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5317, .value=0xed, .type=IO_READ},
        {.addr=0x5318, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0106) {
    const struct CPU_State initial_cpu = {.pc=0xa0a0, .a=0x6f, .x=0x9a, .y=0xc7, .sp=0x3e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa0a0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa0a1, .a=0x6f, .x=0x9a, .y=0xc7, .sp=0x3e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xa0a0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa0a0, .value=0xed, .type=IO_READ},
        {.addr=0xa0a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0107) {
    const struct CPU_State initial_cpu = {.pc=0x1d9b, .a=0x76, .x=0x64, .y=0x38, .sp=0x9a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1d9c, .a=0x76, .x=0x64, .y=0x38, .sp=0x9a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x1d9b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1d9b, .value=0xed, .type=IO_READ},
        {.addr=0x1d9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0108) {
    const struct CPU_State initial_cpu = {.pc=0x9b44, .a=0xe8, .x=0xd4, .y=0x47, .sp=0x72, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9b44, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9b45, .a=0xe8, .x=0xd4, .y=0x47, .sp=0x72, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9b44, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9b44, .value=0xed, .type=IO_READ},
        {.addr=0x9b45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0109) {
    const struct CPU_State initial_cpu = {.pc=0x4e26, .a=0x54, .x=0x24, .y=0x1b, .sp=0x77, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4e26, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4e27, .a=0x54, .x=0x24, .y=0x1b, .sp=0x77, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4e26, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4e26, .value=0xed, .type=IO_READ},
        {.addr=0x4e27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010A) {
    const struct CPU_State initial_cpu = {.pc=0x9d24, .a=0x24, .x=0x08, .y=0x7e, .sp=0x3b, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9d24, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9d25, .a=0x24, .x=0x08, .y=0x7e, .sp=0x3b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x9d24, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9d24, .value=0xed, .type=IO_READ},
        {.addr=0x9d25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010B) {
    const struct CPU_State initial_cpu = {.pc=0x8c0f, .a=0x20, .x=0xe3, .y=0xad, .sp=0xa6, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8c0f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c10, .a=0x20, .x=0xe3, .y=0xad, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8c0f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c0f, .value=0xed, .type=IO_READ},
        {.addr=0x8c10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010C) {
    const struct CPU_State initial_cpu = {.pc=0xa8c4, .a=0xc3, .x=0x9e, .y=0xa3, .sp=0x48, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8c5, .a=0xc3, .x=0x9e, .y=0xa3, .sp=0x48, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xa8c4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8c4, .value=0xed, .type=IO_READ},
        {.addr=0xa8c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6046, .a=0xf7, .x=0xe4, .y=0xf4, .sp=0x6c, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6046, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6047, .a=0xf7, .x=0xe4, .y=0xf4, .sp=0x6c, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x6046, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6046, .value=0xed, .type=IO_READ},
        {.addr=0x6047, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010E) {
    const struct CPU_State initial_cpu = {.pc=0x3163, .a=0x47, .x=0xcc, .y=0x5a, .sp=0xce, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3163, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3164, .a=0x47, .x=0xcc, .y=0x5a, .sp=0xce, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3163, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3163, .value=0xed, .type=IO_READ},
        {.addr=0x3164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_010F) {
    const struct CPU_State initial_cpu = {.pc=0xdd01, .a=0xab, .x=0xaa, .y=0x62, .sp=0x50, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xdd01, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdd02, .a=0xab, .x=0xaa, .y=0x62, .sp=0x50, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdd01, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdd01, .value=0xed, .type=IO_READ},
        {.addr=0xdd02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0110) {
    const struct CPU_State initial_cpu = {.pc=0x9259, .a=0xa2, .x=0x58, .y=0x18, .sp=0x32, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9259, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x925a, .a=0xa2, .x=0x58, .y=0x18, .sp=0x32, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9259, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9259, .value=0xed, .type=IO_READ},
        {.addr=0x925a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf4d2, .a=0xd4, .x=0x8a, .y=0x95, .sp=0x4d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf4d3, .a=0xd4, .x=0x8a, .y=0x95, .sp=0x4d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf4d2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf4d2, .value=0xed, .type=IO_READ},
        {.addr=0xf4d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc24a, .a=0xa8, .x=0x46, .y=0xd9, .sp=0xb8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc24a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc24b, .a=0xa8, .x=0x46, .y=0xd9, .sp=0xb8, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xc24a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc24a, .value=0xed, .type=IO_READ},
        {.addr=0xc24b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0113) {
    const struct CPU_State initial_cpu = {.pc=0x9d40, .a=0x02, .x=0x49, .y=0xf2, .sp=0x10, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9d40, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9d41, .a=0x02, .x=0x49, .y=0xf2, .sp=0x10, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x9d40, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9d40, .value=0xed, .type=IO_READ},
        {.addr=0x9d41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0114) {
    const struct CPU_State initial_cpu = {.pc=0x70b2, .a=0xb2, .x=0x53, .y=0x43, .sp=0xa0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x70b2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x70b3, .a=0xb2, .x=0x53, .y=0x43, .sp=0xa0, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x70b2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x70b2, .value=0xed, .type=IO_READ},
        {.addr=0x70b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb4f1, .a=0xa5, .x=0xef, .y=0x94, .sp=0xfd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb4f2, .a=0xa5, .x=0xef, .y=0x94, .sp=0xfd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb4f1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb4f1, .value=0xed, .type=IO_READ},
        {.addr=0xb4f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0116) {
    const struct CPU_State initial_cpu = {.pc=0x257e, .a=0x7a, .x=0x4b, .y=0x14, .sp=0x8a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x257e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x257f, .a=0x7a, .x=0x4b, .y=0x14, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x257e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x257e, .value=0xed, .type=IO_READ},
        {.addr=0x257f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0117) {
    const struct CPU_State initial_cpu = {.pc=0xd54f, .a=0x80, .x=0xed, .y=0xa2, .sp=0xd6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd54f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd550, .a=0x80, .x=0xed, .y=0xa2, .sp=0xd6, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xd54f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd54f, .value=0xed, .type=IO_READ},
        {.addr=0xd550, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0118) {
    const struct CPU_State initial_cpu = {.pc=0xfde9, .a=0xfc, .x=0x3b, .y=0xda, .sp=0xed, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xfde9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfdea, .a=0xfc, .x=0x3b, .y=0xda, .sp=0xed, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfde9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfde9, .value=0xed, .type=IO_READ},
        {.addr=0xfdea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb0a9, .a=0x82, .x=0x1c, .y=0x6b, .sp=0x8b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb0aa, .a=0x82, .x=0x1c, .y=0x6b, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb0a9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb0a9, .value=0xed, .type=IO_READ},
        {.addr=0xb0aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011A) {
    const struct CPU_State initial_cpu = {.pc=0x709a, .a=0x66, .x=0x37, .y=0xd3, .sp=0x9f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x709a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x709b, .a=0x66, .x=0x37, .y=0xd3, .sp=0x9f, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x709a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x709a, .value=0xed, .type=IO_READ},
        {.addr=0x709b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011B) {
    const struct CPU_State initial_cpu = {.pc=0x9cf8, .a=0x08, .x=0x0e, .y=0x90, .sp=0xda, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9cf9, .a=0x08, .x=0x0e, .y=0x90, .sp=0xda, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9cf8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9cf8, .value=0xed, .type=IO_READ},
        {.addr=0x9cf9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011C) {
    const struct CPU_State initial_cpu = {.pc=0x3e73, .a=0x6b, .x=0x7d, .y=0xaa, .sp=0x0d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3e73, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3e74, .a=0x6b, .x=0x7d, .y=0xaa, .sp=0x0d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3e73, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3e73, .value=0xed, .type=IO_READ},
        {.addr=0x3e74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011D) {
    const struct CPU_State initial_cpu = {.pc=0xcbd5, .a=0x49, .x=0x40, .y=0xa5, .sp=0x14, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xcbd5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcbd6, .a=0x49, .x=0x40, .y=0xa5, .sp=0x14, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xcbd5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcbd5, .value=0xed, .type=IO_READ},
        {.addr=0xcbd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011E) {
    const struct CPU_State initial_cpu = {.pc=0x1f37, .a=0x31, .x=0xef, .y=0xb9, .sp=0x4a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1f37, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1f38, .a=0x31, .x=0xef, .y=0xb9, .sp=0x4a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1f37, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1f37, .value=0xed, .type=IO_READ},
        {.addr=0x1f38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_011F) {
    const struct CPU_State initial_cpu = {.pc=0xe39a, .a=0x01, .x=0xd4, .y=0xf0, .sp=0x02, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe39a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe39b, .a=0x01, .x=0xd4, .y=0xf0, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe39a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe39a, .value=0xed, .type=IO_READ},
        {.addr=0xe39b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd8ae, .a=0xf0, .x=0x29, .y=0x3f, .sp=0x1f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ae, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd8af, .a=0xf0, .x=0x29, .y=0x3f, .sp=0x1f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd8ae, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd8ae, .value=0xed, .type=IO_READ},
        {.addr=0xd8af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe08d, .a=0x6b, .x=0x0c, .y=0xd2, .sp=0x4d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xe08d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe08e, .a=0x6b, .x=0x0c, .y=0xd2, .sp=0x4d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe08d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe08d, .value=0xed, .type=IO_READ},
        {.addr=0xe08e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0122) {
    const struct CPU_State initial_cpu = {.pc=0xedbf, .a=0x31, .x=0x11, .y=0xd8, .sp=0x2e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xedbf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xedc0, .a=0x31, .x=0x11, .y=0xd8, .sp=0x2e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xedbf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xedbf, .value=0xed, .type=IO_READ},
        {.addr=0xedc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0123) {
    const struct CPU_State initial_cpu = {.pc=0xef04, .a=0xf8, .x=0xc8, .y=0xe4, .sp=0xaf, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xef04, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xef05, .a=0xf8, .x=0xc8, .y=0xe4, .sp=0xaf, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xef04, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xef04, .value=0xed, .type=IO_READ},
        {.addr=0xef05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0124) {
    const struct CPU_State initial_cpu = {.pc=0x7bfc, .a=0xbe, .x=0x0f, .y=0xaf, .sp=0xc7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7bfc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7bfd, .a=0xbe, .x=0x0f, .y=0xaf, .sp=0xc7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7bfc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7bfc, .value=0xed, .type=IO_READ},
        {.addr=0x7bfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc018, .a=0xb6, .x=0x1d, .y=0xa6, .sp=0xcf, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc018, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc019, .a=0xb6, .x=0x1d, .y=0xa6, .sp=0xcf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc018, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc018, .value=0xed, .type=IO_READ},
        {.addr=0xc019, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0126) {
    const struct CPU_State initial_cpu = {.pc=0x6624, .a=0x6b, .x=0xa7, .y=0x59, .sp=0xf4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x6624, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6625, .a=0x6b, .x=0xa7, .y=0x59, .sp=0xf4, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x6624, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6624, .value=0xed, .type=IO_READ},
        {.addr=0x6625, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0127) {
    const struct CPU_State initial_cpu = {.pc=0xdde4, .a=0x95, .x=0x57, .y=0x68, .sp=0x1d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xdde4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdde5, .a=0x95, .x=0x57, .y=0x68, .sp=0x1d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xdde4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdde4, .value=0xed, .type=IO_READ},
        {.addr=0xdde5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0128) {
    const struct CPU_State initial_cpu = {.pc=0xaff7, .a=0xc6, .x=0xe1, .y=0x83, .sp=0x78, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xaff7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaff8, .a=0xc6, .x=0xe1, .y=0x83, .sp=0x78, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xaff7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaff7, .value=0xed, .type=IO_READ},
        {.addr=0xaff8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0129) {
    const struct CPU_State initial_cpu = {.pc=0x56fb, .a=0x85, .x=0x1f, .y=0x65, .sp=0x3e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x56fb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x56fc, .a=0x85, .x=0x1f, .y=0x65, .sp=0x3e, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x56fb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x56fb, .value=0xed, .type=IO_READ},
        {.addr=0x56fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4f11, .a=0x5c, .x=0x70, .y=0x35, .sp=0x6b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4f11, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4f12, .a=0x5c, .x=0x70, .y=0x35, .sp=0x6b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4f11, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4f11, .value=0xed, .type=IO_READ},
        {.addr=0x4f12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012B) {
    const struct CPU_State initial_cpu = {.pc=0xb9cc, .a=0xdc, .x=0x9d, .y=0xf6, .sp=0xf1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xb9cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb9cd, .a=0xdc, .x=0x9d, .y=0xf6, .sp=0xf1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb9cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb9cc, .value=0xed, .type=IO_READ},
        {.addr=0xb9cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012C) {
    const struct CPU_State initial_cpu = {.pc=0xbdc0, .a=0x88, .x=0x3f, .y=0xd2, .sp=0x01, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbdc1, .a=0x88, .x=0x3f, .y=0xd2, .sp=0x01, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xbdc0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbdc0, .value=0xed, .type=IO_READ},
        {.addr=0xbdc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012D) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0xe7, .x=0x6d, .y=0x0b, .sp=0x9b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdf1f, .a=0xe7, .x=0x6d, .y=0x0b, .sp=0x9b, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0xed, .type=IO_READ},
        {.addr=0xdf1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012E) {
    const struct CPU_State initial_cpu = {.pc=0x4b15, .a=0x1a, .x=0x2f, .y=0xaa, .sp=0xd3, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4b15, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4b16, .a=0x1a, .x=0x2f, .y=0xaa, .sp=0xd3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4b15, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4b15, .value=0xed, .type=IO_READ},
        {.addr=0x4b16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_012F) {
    const struct CPU_State initial_cpu = {.pc=0xca29, .a=0x6d, .x=0xa9, .y=0x91, .sp=0x9a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xca29, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xca2a, .a=0x6d, .x=0xa9, .y=0x91, .sp=0x9a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xca29, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xca29, .value=0xed, .type=IO_READ},
        {.addr=0xca2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0130) {
    const struct CPU_State initial_cpu = {.pc=0x15b2, .a=0x13, .x=0x61, .y=0xa8, .sp=0x5a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x15b2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15b3, .a=0x13, .x=0x61, .y=0xa8, .sp=0x5a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x15b2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15b2, .value=0xed, .type=IO_READ},
        {.addr=0x15b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0131) {
    const struct CPU_State initial_cpu = {.pc=0xc1cc, .a=0xe7, .x=0xcc, .y=0x86, .sp=0x40, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc1cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc1cd, .a=0xe7, .x=0xcc, .y=0x86, .sp=0x40, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xc1cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc1cc, .value=0xed, .type=IO_READ},
        {.addr=0xc1cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0132) {
    const struct CPU_State initial_cpu = {.pc=0xad5e, .a=0x3c, .x=0x19, .y=0x6c, .sp=0xdb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xad5e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xad5f, .a=0x3c, .x=0x19, .y=0x6c, .sp=0xdb, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xad5e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xad5e, .value=0xed, .type=IO_READ},
        {.addr=0xad5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8a69, .a=0x40, .x=0x4e, .y=0x9d, .sp=0xbc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8a69, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8a6a, .a=0x40, .x=0x4e, .y=0x9d, .sp=0xbc, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x8a69, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8a69, .value=0xed, .type=IO_READ},
        {.addr=0x8a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0134) {
    const struct CPU_State initial_cpu = {.pc=0xa56f, .a=0x07, .x=0xbe, .y=0x68, .sp=0x20, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa56f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa570, .a=0x07, .x=0xbe, .y=0x68, .sp=0x20, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa56f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa56f, .value=0xed, .type=IO_READ},
        {.addr=0xa570, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0135) {
    const struct CPU_State initial_cpu = {.pc=0x3fd7, .a=0x13, .x=0x1f, .y=0xec, .sp=0xaf, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3fd7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3fd8, .a=0x13, .x=0x1f, .y=0xec, .sp=0xaf, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3fd7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3fd7, .value=0xed, .type=IO_READ},
        {.addr=0x3fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0136) {
    const struct CPU_State initial_cpu = {.pc=0xa36c, .a=0xd6, .x=0x44, .y=0xa6, .sp=0x44, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa36c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa36d, .a=0xd6, .x=0x44, .y=0xa6, .sp=0x44, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xa36c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa36c, .value=0xed, .type=IO_READ},
        {.addr=0xa36d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0137) {
    const struct CPU_State initial_cpu = {.pc=0xc2e3, .a=0xd4, .x=0x6f, .y=0x66, .sp=0x32, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc2e3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc2e4, .a=0xd4, .x=0x6f, .y=0x66, .sp=0x32, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc2e3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc2e3, .value=0xed, .type=IO_READ},
        {.addr=0xc2e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0138) {
    const struct CPU_State initial_cpu = {.pc=0xfb97, .a=0xe1, .x=0xa8, .y=0xe2, .sp=0x5e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xfb97, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfb98, .a=0xe1, .x=0xa8, .y=0xe2, .sp=0x5e, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xfb97, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfb97, .value=0xed, .type=IO_READ},
        {.addr=0xfb98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6ac0, .a=0xd5, .x=0x05, .y=0x82, .sp=0x92, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6ac1, .a=0xd5, .x=0x05, .y=0x82, .sp=0x92, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6ac0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6ac0, .value=0xed, .type=IO_READ},
        {.addr=0x6ac1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013A) {
    const struct CPU_State initial_cpu = {.pc=0x76db, .a=0x1e, .x=0xab, .y=0xd2, .sp=0x76, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x76db, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x76dc, .a=0x1e, .x=0xab, .y=0xd2, .sp=0x76, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x76db, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x76db, .value=0xed, .type=IO_READ},
        {.addr=0x76dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013B) {
    const struct CPU_State initial_cpu = {.pc=0x2d9a, .a=0x91, .x=0x35, .y=0xfb, .sp=0xf1, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2d9b, .a=0x91, .x=0x35, .y=0xfb, .sp=0xf1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2d9a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2d9a, .value=0xed, .type=IO_READ},
        {.addr=0x2d9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013C) {
    const struct CPU_State initial_cpu = {.pc=0x178f, .a=0x1a, .x=0x68, .y=0x9c, .sp=0x53, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x178f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1790, .a=0x1a, .x=0x68, .y=0x9c, .sp=0x53, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x178f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x178f, .value=0xed, .type=IO_READ},
        {.addr=0x1790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013D) {
    const struct CPU_State initial_cpu = {.pc=0x8f02, .a=0x86, .x=0xd8, .y=0x55, .sp=0xd0, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8f02, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8f03, .a=0x86, .x=0xd8, .y=0x55, .sp=0xd0, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x8f02, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8f02, .value=0xed, .type=IO_READ},
        {.addr=0x8f03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013E) {
    const struct CPU_State initial_cpu = {.pc=0xb7de, .a=0x73, .x=0x62, .y=0x33, .sp=0xc3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb7de, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb7df, .a=0x73, .x=0x62, .y=0x33, .sp=0xc3, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb7de, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb7de, .value=0xed, .type=IO_READ},
        {.addr=0xb7df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_013F) {
    const struct CPU_State initial_cpu = {.pc=0x29bc, .a=0x0d, .x=0x07, .y=0xb7, .sp=0xc5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x29bc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x29bd, .a=0x0d, .x=0x07, .y=0xb7, .sp=0xc5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x29bc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x29bc, .value=0xed, .type=IO_READ},
        {.addr=0x29bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0140) {
    const struct CPU_State initial_cpu = {.pc=0x67c5, .a=0xc8, .x=0xbb, .y=0x93, .sp=0x05, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x67c5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x67c6, .a=0xc8, .x=0xbb, .y=0x93, .sp=0x05, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x67c5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x67c5, .value=0xed, .type=IO_READ},
        {.addr=0x67c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0141) {
    const struct CPU_State initial_cpu = {.pc=0x0cd8, .a=0xb9, .x=0x61, .y=0x05, .sp=0x86, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0cd9, .a=0xb9, .x=0x61, .y=0x05, .sp=0x86, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0cd8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0cd8, .value=0xed, .type=IO_READ},
        {.addr=0x0cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0142) {
    const struct CPU_State initial_cpu = {.pc=0xae54, .a=0x55, .x=0x07, .y=0x64, .sp=0xc5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xae54, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xae55, .a=0x55, .x=0x07, .y=0x64, .sp=0xc5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xae54, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xae54, .value=0xed, .type=IO_READ},
        {.addr=0xae55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0143) {
    const struct CPU_State initial_cpu = {.pc=0x649f, .a=0xc0, .x=0x87, .y=0xd8, .sp=0x85, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x649f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x64a0, .a=0xc0, .x=0x87, .y=0xd8, .sp=0x85, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x649f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x649f, .value=0xed, .type=IO_READ},
        {.addr=0x64a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd655, .a=0x0c, .x=0x1f, .y=0x78, .sp=0x33, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd655, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd656, .a=0x0c, .x=0x1f, .y=0x78, .sp=0x33, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xd655, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd655, .value=0xed, .type=IO_READ},
        {.addr=0xd656, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0145) {
    const struct CPU_State initial_cpu = {.pc=0x5a8d, .a=0x93, .x=0x06, .y=0x1b, .sp=0xe3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5a8e, .a=0x93, .x=0x06, .y=0x1b, .sp=0xe3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5a8d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5a8d, .value=0xed, .type=IO_READ},
        {.addr=0x5a8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0146) {
    const struct CPU_State initial_cpu = {.pc=0xc55d, .a=0xf3, .x=0xc6, .y=0xe7, .sp=0x6c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc55d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc55e, .a=0xf3, .x=0xc6, .y=0xe7, .sp=0x6c, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc55d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc55d, .value=0xed, .type=IO_READ},
        {.addr=0xc55e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0147) {
    const struct CPU_State initial_cpu = {.pc=0xf294, .a=0x2b, .x=0x05, .y=0x01, .sp=0x31, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf294, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf295, .a=0x2b, .x=0x05, .y=0x01, .sp=0x31, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf294, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf294, .value=0xed, .type=IO_READ},
        {.addr=0xf295, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0148) {
    const struct CPU_State initial_cpu = {.pc=0x8c70, .a=0xe6, .x=0x42, .y=0x59, .sp=0xb9, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c70, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c71, .a=0xe6, .x=0x42, .y=0x59, .sp=0xb9, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8c70, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c70, .value=0xed, .type=IO_READ},
        {.addr=0x8c71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0149) {
    const struct CPU_State initial_cpu = {.pc=0x7334, .a=0x31, .x=0x42, .y=0x41, .sp=0x65, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x7334, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7335, .a=0x31, .x=0x42, .y=0x41, .sp=0x65, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7334, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7334, .value=0xed, .type=IO_READ},
        {.addr=0x7335, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014A) {
    const struct CPU_State initial_cpu = {.pc=0xe022, .a=0xd7, .x=0x5a, .y=0xc2, .sp=0x69, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe022, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe023, .a=0xd7, .x=0x5a, .y=0xc2, .sp=0x69, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe022, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe022, .value=0xed, .type=IO_READ},
        {.addr=0xe023, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014B) {
    const struct CPU_State initial_cpu = {.pc=0x8e29, .a=0x80, .x=0xba, .y=0xc2, .sp=0x3d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x8e29, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8e2a, .a=0x80, .x=0xba, .y=0xc2, .sp=0x3d, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x8e29, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8e29, .value=0xed, .type=IO_READ},
        {.addr=0x8e2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014C) {
    const struct CPU_State initial_cpu = {.pc=0xbfd5, .a=0x78, .x=0x21, .y=0x6b, .sp=0x9f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbfd6, .a=0x78, .x=0x21, .y=0x6b, .sp=0x9f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbfd5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbfd5, .value=0xed, .type=IO_READ},
        {.addr=0xbfd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014D) {
    const struct CPU_State initial_cpu = {.pc=0xa40b, .a=0xac, .x=0x00, .y=0x37, .sp=0x2a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa40b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa40c, .a=0xac, .x=0x00, .y=0x37, .sp=0x2a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xa40b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa40b, .value=0xed, .type=IO_READ},
        {.addr=0xa40c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014E) {
    const struct CPU_State initial_cpu = {.pc=0xf859, .a=0x7e, .x=0x09, .y=0xc7, .sp=0x82, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf859, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf85a, .a=0x7e, .x=0x09, .y=0xc7, .sp=0x82, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xf859, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf859, .value=0xed, .type=IO_READ},
        {.addr=0xf85a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_014F) {
    const struct CPU_State initial_cpu = {.pc=0x21db, .a=0x5c, .x=0xf1, .y=0x44, .sp=0x8e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x21db, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x21dc, .a=0x5c, .x=0xf1, .y=0x44, .sp=0x8e, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x21db, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x21db, .value=0xed, .type=IO_READ},
        {.addr=0x21dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0150) {
    const struct CPU_State initial_cpu = {.pc=0xe368, .a=0xf5, .x=0x80, .y=0xe3, .sp=0xcc, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe368, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe369, .a=0xf5, .x=0x80, .y=0xe3, .sp=0xcc, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xe368, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe368, .value=0xed, .type=IO_READ},
        {.addr=0xe369, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0151) {
    const struct CPU_State initial_cpu = {.pc=0x3b14, .a=0x31, .x=0xfd, .y=0xc7, .sp=0x29, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3b14, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3b15, .a=0x31, .x=0xfd, .y=0xc7, .sp=0x29, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3b14, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3b14, .value=0xed, .type=IO_READ},
        {.addr=0x3b15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0152) {
    const struct CPU_State initial_cpu = {.pc=0xf9f6, .a=0x16, .x=0xc3, .y=0x4a, .sp=0x56, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf9f7, .a=0x16, .x=0xc3, .y=0x4a, .sp=0x56, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf9f6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf9f6, .value=0xed, .type=IO_READ},
        {.addr=0xf9f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0153) {
    const struct CPU_State initial_cpu = {.pc=0x96b2, .a=0xc7, .x=0x9f, .y=0xfa, .sp=0xd9, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x96b2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x96b3, .a=0xc7, .x=0x9f, .y=0xfa, .sp=0xd9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x96b2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x96b2, .value=0xed, .type=IO_READ},
        {.addr=0x96b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0154) {
    const struct CPU_State initial_cpu = {.pc=0xac95, .a=0x15, .x=0x1f, .y=0xfe, .sp=0x97, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xac95, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xac96, .a=0x15, .x=0x1f, .y=0xfe, .sp=0x97, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xac95, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xac95, .value=0xed, .type=IO_READ},
        {.addr=0xac96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0155) {
    const struct CPU_State initial_cpu = {.pc=0xf35b, .a=0x6b, .x=0xee, .y=0x30, .sp=0xea, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf35b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf35c, .a=0x6b, .x=0xee, .y=0x30, .sp=0xea, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf35b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf35b, .value=0xed, .type=IO_READ},
        {.addr=0xf35c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0156) {
    const struct CPU_State initial_cpu = {.pc=0x9bed, .a=0x86, .x=0xce, .y=0xfc, .sp=0x62, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9bed, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9bee, .a=0x86, .x=0xce, .y=0xfc, .sp=0x62, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x9bed, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9bed, .value=0xed, .type=IO_READ},
        {.addr=0x9bee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0157) {
    const struct CPU_State initial_cpu = {.pc=0xfda1, .a=0xee, .x=0x13, .y=0x94, .sp=0x41, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xfda1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfda2, .a=0xee, .x=0x13, .y=0x94, .sp=0x41, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xfda1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfda1, .value=0xed, .type=IO_READ},
        {.addr=0xfda2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0158) {
    const struct CPU_State initial_cpu = {.pc=0x263c, .a=0x28, .x=0x0c, .y=0xa1, .sp=0x65, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x263c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x263d, .a=0x28, .x=0x0c, .y=0xa1, .sp=0x65, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x263c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x263c, .value=0xed, .type=IO_READ},
        {.addr=0x263d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0159) {
    const struct CPU_State initial_cpu = {.pc=0x79e2, .a=0xab, .x=0xb4, .y=0xfd, .sp=0xef, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x79e2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x79e3, .a=0xab, .x=0xb4, .y=0xfd, .sp=0xef, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x79e2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x79e2, .value=0xed, .type=IO_READ},
        {.addr=0x79e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015A) {
    const struct CPU_State initial_cpu = {.pc=0x5b50, .a=0xef, .x=0x8a, .y=0x6f, .sp=0xe1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x5b50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5b51, .a=0xef, .x=0x8a, .y=0x6f, .sp=0xe1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5b50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5b50, .value=0xed, .type=IO_READ},
        {.addr=0x5b51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe19b, .a=0xd9, .x=0xa6, .y=0x0f, .sp=0x35, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xe19b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe19c, .a=0xd9, .x=0xa6, .y=0x0f, .sp=0x35, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe19b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe19b, .value=0xed, .type=IO_READ},
        {.addr=0xe19c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015C) {
    const struct CPU_State initial_cpu = {.pc=0x08b6, .a=0x93, .x=0x0a, .y=0x2e, .sp=0x8d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x08b6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x08b7, .a=0x93, .x=0x0a, .y=0x2e, .sp=0x8d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x08b6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x08b6, .value=0xed, .type=IO_READ},
        {.addr=0x08b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015D) {
    const struct CPU_State initial_cpu = {.pc=0x459b, .a=0x9f, .x=0xb1, .y=0xe0, .sp=0xfd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x459b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x459c, .a=0x9f, .x=0xb1, .y=0xe0, .sp=0xfd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x459b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x459b, .value=0xed, .type=IO_READ},
        {.addr=0x459c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015E) {
    const struct CPU_State initial_cpu = {.pc=0x91d1, .a=0x64, .x=0xb1, .y=0x98, .sp=0x84, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x91d1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x91d2, .a=0x64, .x=0xb1, .y=0x98, .sp=0x84, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x91d1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x91d1, .value=0xed, .type=IO_READ},
        {.addr=0x91d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_015F) {
    const struct CPU_State initial_cpu = {.pc=0xf3a2, .a=0xb2, .x=0x0e, .y=0xd1, .sp=0x7d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf3a3, .a=0xb2, .x=0x0e, .y=0xd1, .sp=0x7d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf3a2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf3a2, .value=0xed, .type=IO_READ},
        {.addr=0xf3a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1f89, .a=0x3d, .x=0x05, .y=0xb6, .sp=0x4a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1f89, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1f8a, .a=0x3d, .x=0x05, .y=0xb6, .sp=0x4a, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x1f89, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1f89, .value=0xed, .type=IO_READ},
        {.addr=0x1f8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0161) {
    const struct CPU_State initial_cpu = {.pc=0xc141, .a=0x55, .x=0xd9, .y=0x90, .sp=0x61, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xc141, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc142, .a=0x55, .x=0xd9, .y=0x90, .sp=0x61, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc141, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc141, .value=0xed, .type=IO_READ},
        {.addr=0xc142, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0162) {
    const struct CPU_State initial_cpu = {.pc=0x7f3b, .a=0xef, .x=0x23, .y=0x9a, .sp=0xad, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7f3b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f3c, .a=0xef, .x=0x23, .y=0x9a, .sp=0xad, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x7f3b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f3b, .value=0xed, .type=IO_READ},
        {.addr=0x7f3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0163) {
    const struct CPU_State initial_cpu = {.pc=0x9102, .a=0x67, .x=0x1f, .y=0xcd, .sp=0xb6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x9102, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9103, .a=0x67, .x=0x1f, .y=0xcd, .sp=0xb6, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x9102, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9102, .value=0xed, .type=IO_READ},
        {.addr=0x9103, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0164) {
    const struct CPU_State initial_cpu = {.pc=0x0e7c, .a=0x32, .x=0x0d, .y=0x48, .sp=0x33, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0e7d, .a=0x32, .x=0x0d, .y=0x48, .sp=0x33, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0e7c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0e7c, .value=0xed, .type=IO_READ},
        {.addr=0x0e7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0165) {
    const struct CPU_State initial_cpu = {.pc=0x523d, .a=0xad, .x=0x7f, .y=0x16, .sp=0xd0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x523d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x523e, .a=0xad, .x=0x7f, .y=0x16, .sp=0xd0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x523d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x523d, .value=0xed, .type=IO_READ},
        {.addr=0x523e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0166) {
    const struct CPU_State initial_cpu = {.pc=0x40e1, .a=0x54, .x=0xcb, .y=0xb4, .sp=0x1c, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x40e1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x40e2, .a=0x54, .x=0xcb, .y=0xb4, .sp=0x1c, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x40e1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x40e1, .value=0xed, .type=IO_READ},
        {.addr=0x40e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0167) {
    const struct CPU_State initial_cpu = {.pc=0x0767, .a=0x44, .x=0xae, .y=0x7c, .sp=0xf8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0767, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0768, .a=0x44, .x=0xae, .y=0x7c, .sp=0xf8, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0767, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0767, .value=0xed, .type=IO_READ},
        {.addr=0x0768, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0168) {
    const struct CPU_State initial_cpu = {.pc=0xfd3c, .a=0xfe, .x=0x7c, .y=0xb2, .sp=0x0b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfd3d, .a=0xfe, .x=0x7c, .y=0xb2, .sp=0x0b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xfd3c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfd3c, .value=0xed, .type=IO_READ},
        {.addr=0xfd3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0169) {
    const struct CPU_State initial_cpu = {.pc=0x92f1, .a=0x93, .x=0x15, .y=0xde, .sp=0x98, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x92f1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x92f2, .a=0x93, .x=0x15, .y=0xde, .sp=0x98, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x92f1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x92f1, .value=0xed, .type=IO_READ},
        {.addr=0x92f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016A) {
    const struct CPU_State initial_cpu = {.pc=0x7c35, .a=0x13, .x=0x8e, .y=0xc0, .sp=0x4e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7c35, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7c36, .a=0x13, .x=0x8e, .y=0xc0, .sp=0x4e, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x7c35, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7c35, .value=0xed, .type=IO_READ},
        {.addr=0x7c36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016B) {
    const struct CPU_State initial_cpu = {.pc=0x3261, .a=0xf8, .x=0xa7, .y=0x11, .sp=0x76, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3261, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3262, .a=0xf8, .x=0xa7, .y=0x11, .sp=0x76, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x3261, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3261, .value=0xed, .type=IO_READ},
        {.addr=0x3262, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016C) {
    const struct CPU_State initial_cpu = {.pc=0xc88f, .a=0x14, .x=0x1a, .y=0x2e, .sp=0xc7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc88f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc890, .a=0x14, .x=0x1a, .y=0x2e, .sp=0xc7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc88f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc88f, .value=0xed, .type=IO_READ},
        {.addr=0xc890, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016D) {
    const struct CPU_State initial_cpu = {.pc=0x3dd7, .a=0x25, .x=0xd0, .y=0xbe, .sp=0x86, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3dd8, .a=0x25, .x=0xd0, .y=0xbe, .sp=0x86, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3dd7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3dd7, .value=0xed, .type=IO_READ},
        {.addr=0x3dd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016E) {
    const struct CPU_State initial_cpu = {.pc=0xedb1, .a=0x91, .x=0x62, .y=0xde, .sp=0xe8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xedb1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xedb2, .a=0x91, .x=0x62, .y=0xde, .sp=0xe8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xedb1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xedb1, .value=0xed, .type=IO_READ},
        {.addr=0xedb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_016F) {
    const struct CPU_State initial_cpu = {.pc=0x5374, .a=0x63, .x=0x52, .y=0xe8, .sp=0x96, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5374, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5375, .a=0x63, .x=0x52, .y=0xe8, .sp=0x96, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x5374, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5374, .value=0xed, .type=IO_READ},
        {.addr=0x5375, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0170) {
    const struct CPU_State initial_cpu = {.pc=0xaf79, .a=0x00, .x=0xee, .y=0xa0, .sp=0x74, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xaf79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaf7a, .a=0x00, .x=0xee, .y=0xa0, .sp=0x74, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xaf79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaf79, .value=0xed, .type=IO_READ},
        {.addr=0xaf7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0171) {
    const struct CPU_State initial_cpu = {.pc=0x8d03, .a=0x7c, .x=0xc1, .y=0x7c, .sp=0x98, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8d03, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8d04, .a=0x7c, .x=0xc1, .y=0x7c, .sp=0x98, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x8d03, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8d03, .value=0xed, .type=IO_READ},
        {.addr=0x8d04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0172) {
    const struct CPU_State initial_cpu = {.pc=0xc7c9, .a=0xff, .x=0x1c, .y=0x0b, .sp=0x57, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc7ca, .a=0xff, .x=0x1c, .y=0x0b, .sp=0x57, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xc7c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc7c9, .value=0xed, .type=IO_READ},
        {.addr=0xc7ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3aa2, .a=0xd4, .x=0x13, .y=0xd7, .sp=0x89, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3aa3, .a=0xd4, .x=0x13, .y=0xd7, .sp=0x89, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x3aa2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3aa2, .value=0xed, .type=IO_READ},
        {.addr=0x3aa3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0174) {
    const struct CPU_State initial_cpu = {.pc=0x5290, .a=0x0a, .x=0x4f, .y=0x73, .sp=0xf9, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5290, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5291, .a=0x0a, .x=0x4f, .y=0x73, .sp=0xf9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5290, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5290, .value=0xed, .type=IO_READ},
        {.addr=0x5291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0175) {
    const struct CPU_State initial_cpu = {.pc=0xfb55, .a=0x36, .x=0xdd, .y=0x59, .sp=0xac, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfb55, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfb56, .a=0x36, .x=0xdd, .y=0x59, .sp=0xac, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xfb55, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfb55, .value=0xed, .type=IO_READ},
        {.addr=0xfb56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0176) {
    const struct CPU_State initial_cpu = {.pc=0x7e1c, .a=0xc8, .x=0xa0, .y=0xd0, .sp=0x95, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7e1c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7e1d, .a=0xc8, .x=0xa0, .y=0xd0, .sp=0x95, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x7e1c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7e1c, .value=0xed, .type=IO_READ},
        {.addr=0x7e1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0177) {
    const struct CPU_State initial_cpu = {.pc=0xbf49, .a=0x97, .x=0x26, .y=0x9b, .sp=0xff, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xbf49, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbf4a, .a=0x97, .x=0x26, .y=0x9b, .sp=0xff, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbf49, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbf49, .value=0xed, .type=IO_READ},
        {.addr=0xbf4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb5dd, .a=0xd5, .x=0x93, .y=0xa6, .sp=0x10, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb5dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb5de, .a=0xd5, .x=0x93, .y=0xa6, .sp=0x10, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb5dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb5dd, .value=0xed, .type=IO_READ},
        {.addr=0xb5de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0179) {
    const struct CPU_State initial_cpu = {.pc=0x8bca, .a=0x0e, .x=0xac, .y=0x1e, .sp=0xe0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x8bca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8bcb, .a=0x0e, .x=0xac, .y=0x1e, .sp=0xe0, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8bca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8bca, .value=0xed, .type=IO_READ},
        {.addr=0x8bcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017A) {
    const struct CPU_State initial_cpu = {.pc=0xa2e2, .a=0x07, .x=0x06, .y=0x42, .sp=0xd3, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa2e3, .a=0x07, .x=0x06, .y=0x42, .sp=0xd3, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xa2e2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa2e2, .value=0xed, .type=IO_READ},
        {.addr=0xa2e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017B) {
    const struct CPU_State initial_cpu = {.pc=0x42d4, .a=0xdf, .x=0xca, .y=0x77, .sp=0x41, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x42d4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x42d5, .a=0xdf, .x=0xca, .y=0x77, .sp=0x41, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x42d4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x42d4, .value=0xed, .type=IO_READ},
        {.addr=0x42d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017C) {
    const struct CPU_State initial_cpu = {.pc=0x2a97, .a=0x58, .x=0x03, .y=0xda, .sp=0xd5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2a97, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a98, .a=0x58, .x=0x03, .y=0xda, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2a97, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a97, .value=0xed, .type=IO_READ},
        {.addr=0x2a98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf817, .a=0xb4, .x=0x5d, .y=0x3b, .sp=0x21, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf817, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf818, .a=0xb4, .x=0x5d, .y=0x3b, .sp=0x21, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xf817, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf817, .value=0xed, .type=IO_READ},
        {.addr=0xf818, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017E) {
    const struct CPU_State initial_cpu = {.pc=0x818e, .a=0x2a, .x=0xcb, .y=0x6f, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x818e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x818f, .a=0x2a, .x=0xcb, .y=0x6f, .sp=0xca, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x818e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x818e, .value=0xed, .type=IO_READ},
        {.addr=0x818f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_017F) {
    const struct CPU_State initial_cpu = {.pc=0x4cf0, .a=0x41, .x=0xa5, .y=0x3a, .sp=0xb2, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4cf1, .a=0x41, .x=0xa5, .y=0x3a, .sp=0xb2, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4cf0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4cf0, .value=0xed, .type=IO_READ},
        {.addr=0x4cf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0180) {
    const struct CPU_State initial_cpu = {.pc=0xde22, .a=0xc8, .x=0x77, .y=0x36, .sp=0x00, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xde22, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde23, .a=0xc8, .x=0x77, .y=0x36, .sp=0x00, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xde22, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde22, .value=0xed, .type=IO_READ},
        {.addr=0xde23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0181) {
    const struct CPU_State initial_cpu = {.pc=0xd41f, .a=0x37, .x=0x86, .y=0xc1, .sp=0xed, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xd41f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd420, .a=0x37, .x=0x86, .y=0xc1, .sp=0xed, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd41f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd41f, .value=0xed, .type=IO_READ},
        {.addr=0xd420, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0182) {
    const struct CPU_State initial_cpu = {.pc=0xc3dd, .a=0x2c, .x=0xbb, .y=0x2a, .sp=0x97, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc3dd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc3de, .a=0x2c, .x=0xbb, .y=0x2a, .sp=0x97, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc3dd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc3dd, .value=0xed, .type=IO_READ},
        {.addr=0xc3de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0183) {
    const struct CPU_State initial_cpu = {.pc=0x610a, .a=0xb8, .x=0x8e, .y=0x9d, .sp=0x45, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x610a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x610b, .a=0xb8, .x=0x8e, .y=0x9d, .sp=0x45, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x610a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x610a, .value=0xed, .type=IO_READ},
        {.addr=0x610b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0184) {
    const struct CPU_State initial_cpu = {.pc=0x3c3b, .a=0xb4, .x=0x6a, .y=0xd5, .sp=0xcb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3c3b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3c3c, .a=0xb4, .x=0x6a, .y=0xd5, .sp=0xcb, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x3c3b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3c3b, .value=0xed, .type=IO_READ},
        {.addr=0x3c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0185) {
    const struct CPU_State initial_cpu = {.pc=0xc1f3, .a=0xd9, .x=0xc1, .y=0x5a, .sp=0x33, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc1f4, .a=0xd9, .x=0xc1, .y=0x5a, .sp=0x33, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc1f3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc1f3, .value=0xed, .type=IO_READ},
        {.addr=0xc1f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb2cd, .a=0x18, .x=0x5a, .y=0xd2, .sp=0x52, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb2ce, .a=0x18, .x=0x5a, .y=0xd2, .sp=0x52, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xb2cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb2cd, .value=0xed, .type=IO_READ},
        {.addr=0xb2ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0187) {
    const struct CPU_State initial_cpu = {.pc=0xee9e, .a=0x0f, .x=0x2b, .y=0x82, .sp=0x83, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xee9e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xee9f, .a=0x0f, .x=0x2b, .y=0x82, .sp=0x83, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xee9e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xee9e, .value=0xed, .type=IO_READ},
        {.addr=0xee9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0188) {
    const struct CPU_State initial_cpu = {.pc=0xfbf0, .a=0x10, .x=0x39, .y=0xee, .sp=0x91, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfbf1, .a=0x10, .x=0x39, .y=0xee, .sp=0x91, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xfbf0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfbf0, .value=0xed, .type=IO_READ},
        {.addr=0xfbf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0189) {
    const struct CPU_State initial_cpu = {.pc=0x5dec, .a=0xd1, .x=0x77, .y=0xa0, .sp=0xbc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5dec, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5ded, .a=0xd1, .x=0x77, .y=0xa0, .sp=0xbc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5dec, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5dec, .value=0xed, .type=IO_READ},
        {.addr=0x5ded, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1f62, .a=0x53, .x=0xe3, .y=0xfa, .sp=0xad, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x1f62, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1f63, .a=0x53, .x=0xe3, .y=0xfa, .sp=0xad, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x1f62, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1f62, .value=0xed, .type=IO_READ},
        {.addr=0x1f63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018B) {
    const struct CPU_State initial_cpu = {.pc=0xdf9c, .a=0x93, .x=0x7d, .y=0x3a, .sp=0x77, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xdf9c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdf9d, .a=0x93, .x=0x7d, .y=0x3a, .sp=0x77, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdf9c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdf9c, .value=0xed, .type=IO_READ},
        {.addr=0xdf9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018C) {
    const struct CPU_State initial_cpu = {.pc=0xb4a8, .a=0x44, .x=0x50, .y=0xbf, .sp=0x48, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb4a9, .a=0x44, .x=0x50, .y=0xbf, .sp=0x48, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb4a8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb4a8, .value=0xed, .type=IO_READ},
        {.addr=0xb4a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018D) {
    const struct CPU_State initial_cpu = {.pc=0x01aa, .a=0xba, .x=0xe1, .y=0x0b, .sp=0x23, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x01ab, .a=0xba, .x=0xe1, .y=0x0b, .sp=0x23, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x01aa, .value=0xed, .type=IO_READ},
        {.addr=0x01ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7f50, .a=0x2a, .x=0x7a, .y=0x10, .sp=0x61, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x7f50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f51, .a=0x2a, .x=0x7a, .y=0x10, .sp=0x61, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x7f50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f50, .value=0xed, .type=IO_READ},
        {.addr=0x7f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_018F) {
    const struct CPU_State initial_cpu = {.pc=0x34de, .a=0xf2, .x=0xf2, .y=0xbe, .sp=0xcd, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x34de, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x34df, .a=0xf2, .x=0xf2, .y=0xbe, .sp=0xcd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x34de, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x34de, .value=0xed, .type=IO_READ},
        {.addr=0x34df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0190) {
    const struct CPU_State initial_cpu = {.pc=0xb6ae, .a=0x73, .x=0x96, .y=0x5f, .sp=0x6a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ae, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb6af, .a=0x73, .x=0x96, .y=0x5f, .sp=0x6a, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xb6ae, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb6ae, .value=0xed, .type=IO_READ},
        {.addr=0xb6af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0191) {
    const struct CPU_State initial_cpu = {.pc=0xe92b, .a=0x09, .x=0x3e, .y=0xbc, .sp=0x56, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xe92b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe92c, .a=0x09, .x=0x3e, .y=0xbc, .sp=0x56, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe92b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe92b, .value=0xed, .type=IO_READ},
        {.addr=0xe92c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0192) {
    const struct CPU_State initial_cpu = {.pc=0xf0e1, .a=0xad, .x=0xa0, .y=0xe2, .sp=0x55, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf0e2, .a=0xad, .x=0xa0, .y=0xe2, .sp=0x55, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf0e1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf0e1, .value=0xed, .type=IO_READ},
        {.addr=0xf0e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0193) {
    const struct CPU_State initial_cpu = {.pc=0x7d59, .a=0x21, .x=0x1d, .y=0x07, .sp=0xff, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7d59, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7d5a, .a=0x21, .x=0x1d, .y=0x07, .sp=0xff, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x7d59, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7d59, .value=0xed, .type=IO_READ},
        {.addr=0x7d5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0194) {
    const struct CPU_State initial_cpu = {.pc=0x45cd, .a=0x2e, .x=0x08, .y=0x62, .sp=0xac, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x45cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x45ce, .a=0x2e, .x=0x08, .y=0x62, .sp=0xac, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x45cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x45cd, .value=0xed, .type=IO_READ},
        {.addr=0x45ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0195) {
    const struct CPU_State initial_cpu = {.pc=0xfffb, .a=0x7f, .x=0x9c, .y=0xff, .sp=0x5e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfffb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfffc, .a=0x7f, .x=0x9c, .y=0xff, .sp=0x5e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfffb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfffb, .value=0xed, .type=IO_READ},
        {.addr=0xfffc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0196) {
    const struct CPU_State initial_cpu = {.pc=0x6afe, .a=0x0e, .x=0xfd, .y=0x99, .sp=0x98, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6afe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6aff, .a=0x0e, .x=0xfd, .y=0x99, .sp=0x98, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6afe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6afe, .value=0xed, .type=IO_READ},
        {.addr=0x6aff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa951, .a=0x60, .x=0xd7, .y=0x79, .sp=0xd2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa951, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa952, .a=0x60, .x=0xd7, .y=0x79, .sp=0xd2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa951, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa951, .value=0xed, .type=IO_READ},
        {.addr=0xa952, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0198) {
    const struct CPU_State initial_cpu = {.pc=0x064b, .a=0xa3, .x=0x95, .y=0x7f, .sp=0xe0, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x064b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x064c, .a=0xa3, .x=0x95, .y=0x7f, .sp=0xe0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x064b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x064b, .value=0xed, .type=IO_READ},
        {.addr=0x064c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0199) {
    const struct CPU_State initial_cpu = {.pc=0x12d8, .a=0x31, .x=0xcb, .y=0xb8, .sp=0x47, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x12d8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x12d9, .a=0x31, .x=0xcb, .y=0xb8, .sp=0x47, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x12d8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x12d8, .value=0xed, .type=IO_READ},
        {.addr=0x12d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019A) {
    const struct CPU_State initial_cpu = {.pc=0x16ca, .a=0xf9, .x=0x22, .y=0x4e, .sp=0x26, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x16ca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x16cb, .a=0xf9, .x=0x22, .y=0x4e, .sp=0x26, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x16ca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x16ca, .value=0xed, .type=IO_READ},
        {.addr=0x16cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019B) {
    const struct CPU_State initial_cpu = {.pc=0x0ecd, .a=0x06, .x=0x29, .y=0x77, .sp=0xce, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0ece, .a=0x06, .x=0x29, .y=0x77, .sp=0xce, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0ecd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0ecd, .value=0xed, .type=IO_READ},
        {.addr=0x0ece, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1ec6, .a=0x27, .x=0x78, .y=0xbe, .sp=0x4b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1ec7, .a=0x27, .x=0x78, .y=0xbe, .sp=0x4b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1ec6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1ec6, .value=0xed, .type=IO_READ},
        {.addr=0x1ec7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019D) {
    const struct CPU_State initial_cpu = {.pc=0x4aba, .a=0x68, .x=0x4f, .y=0x06, .sp=0x8a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4aba, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4abb, .a=0x68, .x=0x4f, .y=0x06, .sp=0x8a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4aba, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4aba, .value=0xed, .type=IO_READ},
        {.addr=0x4abb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019E) {
    const struct CPU_State initial_cpu = {.pc=0x2ad4, .a=0x68, .x=0xe2, .y=0x8c, .sp=0x3a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2ad5, .a=0x68, .x=0xe2, .y=0x8c, .sp=0x3a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2ad4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2ad4, .value=0xed, .type=IO_READ},
        {.addr=0x2ad5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_019F) {
    const struct CPU_State initial_cpu = {.pc=0x4b86, .a=0x55, .x=0x96, .y=0x70, .sp=0x0b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4b86, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4b87, .a=0x55, .x=0x96, .y=0x70, .sp=0x0b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x4b86, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4b86, .value=0xed, .type=IO_READ},
        {.addr=0x4b87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x93a5, .a=0xd0, .x=0x53, .y=0xe0, .sp=0x18, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x93a5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x93a6, .a=0xd0, .x=0x53, .y=0xe0, .sp=0x18, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x93a5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x93a5, .value=0xed, .type=IO_READ},
        {.addr=0x93a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x08bd, .a=0x1a, .x=0x53, .y=0xd8, .sp=0x2a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x08bd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x08be, .a=0x1a, .x=0x53, .y=0xd8, .sp=0x2a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x08bd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x08bd, .value=0xed, .type=IO_READ},
        {.addr=0x08be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x81d0, .a=0x60, .x=0x52, .y=0x0a, .sp=0x96, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x81d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x81d1, .a=0x60, .x=0x52, .y=0x0a, .sp=0x96, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x81d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x81d0, .value=0xed, .type=IO_READ},
        {.addr=0x81d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x6c14, .a=0x75, .x=0x92, .y=0xeb, .sp=0xda, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c14, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6c15, .a=0x75, .x=0x92, .y=0xeb, .sp=0xda, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6c14, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6c14, .value=0xed, .type=IO_READ},
        {.addr=0x6c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xf399, .a=0x5d, .x=0xc4, .y=0x92, .sp=0x32, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf399, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf39a, .a=0x5d, .x=0xc4, .y=0x92, .sp=0x32, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xf399, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf399, .value=0xed, .type=IO_READ},
        {.addr=0xf39a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2403, .a=0x43, .x=0x60, .y=0x7d, .sp=0x60, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2403, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2404, .a=0x43, .x=0x60, .y=0x7d, .sp=0x60, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2403, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2403, .value=0xed, .type=IO_READ},
        {.addr=0x2404, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x4f79, .a=0x2e, .x=0xa0, .y=0xc2, .sp=0x04, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4f79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4f7a, .a=0x2e, .x=0xa0, .y=0xc2, .sp=0x04, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x4f79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4f79, .value=0xed, .type=IO_READ},
        {.addr=0x4f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x1164, .a=0xda, .x=0x42, .y=0x95, .sp=0x2e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1164, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1165, .a=0xda, .x=0x42, .y=0x95, .sp=0x2e, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x1164, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1164, .value=0xed, .type=IO_READ},
        {.addr=0x1165, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x7473, .a=0x5a, .x=0x6f, .y=0x06, .sp=0x47, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x7473, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7474, .a=0x5a, .x=0x6f, .y=0x06, .sp=0x47, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x7473, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7473, .value=0xed, .type=IO_READ},
        {.addr=0x7474, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x03fc, .a=0x24, .x=0xe7, .y=0x4c, .sp=0x41, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x03fc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x03fd, .a=0x24, .x=0xe7, .y=0x4c, .sp=0x41, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x03fc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x03fc, .value=0xed, .type=IO_READ},
        {.addr=0x03fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x63fd, .a=0x04, .x=0xae, .y=0xbc, .sp=0x4a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x63fd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x63fe, .a=0x04, .x=0xae, .y=0xbc, .sp=0x4a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x63fd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x63fd, .value=0xed, .type=IO_READ},
        {.addr=0x63fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xdd92, .a=0x5b, .x=0xfd, .y=0xa0, .sp=0x87, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdd92, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdd93, .a=0x5b, .x=0xfd, .y=0xa0, .sp=0x87, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xdd92, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdd92, .value=0xed, .type=IO_READ},
        {.addr=0xdd93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x973a, .a=0xb5, .x=0xa6, .y=0x71, .sp=0xf1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x973a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x973b, .a=0xb5, .x=0xa6, .y=0x71, .sp=0xf1, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x973a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x973a, .value=0xed, .type=IO_READ},
        {.addr=0x973b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xcc50, .a=0xcc, .x=0xaf, .y=0x69, .sp=0x0a, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xcc50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcc51, .a=0xcc, .x=0xaf, .y=0x69, .sp=0x0a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xcc50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcc50, .value=0xed, .type=IO_READ},
        {.addr=0xcc51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6e0f, .a=0xdf, .x=0xa7, .y=0x03, .sp=0x55, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e0f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6e10, .a=0xdf, .x=0xa7, .y=0x03, .sp=0x55, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6e0f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6e0f, .value=0xed, .type=IO_READ},
        {.addr=0x6e10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xf9c6, .a=0x17, .x=0x07, .y=0x57, .sp=0x7a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xf9c6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf9c7, .a=0x17, .x=0x07, .y=0x57, .sp=0x7a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xf9c6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf9c6, .value=0xed, .type=IO_READ},
        {.addr=0xf9c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x6411, .a=0x39, .x=0xd9, .y=0x76, .sp=0x92, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6411, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6412, .a=0x39, .x=0xd9, .y=0x76, .sp=0x92, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x6411, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6411, .value=0xed, .type=IO_READ},
        {.addr=0x6412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x3c9c, .a=0xde, .x=0x78, .y=0xe8, .sp=0xfa, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3c9c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3c9d, .a=0xde, .x=0x78, .y=0xe8, .sp=0xfa, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3c9c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3c9c, .value=0xed, .type=IO_READ},
        {.addr=0x3c9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8a64, .a=0x49, .x=0x04, .y=0xd6, .sp=0x8d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8a64, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8a65, .a=0x49, .x=0x04, .y=0xd6, .sp=0x8d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8a64, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8a64, .value=0xed, .type=IO_READ},
        {.addr=0x8a65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x9d47, .a=0x7e, .x=0xcf, .y=0xd1, .sp=0x95, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9d47, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9d48, .a=0x7e, .x=0xcf, .y=0xd1, .sp=0x95, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9d47, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9d47, .value=0xed, .type=IO_READ},
        {.addr=0x9d48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x25ba, .a=0x48, .x=0xb4, .y=0xb5, .sp=0xe4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x25ba, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x25bb, .a=0x48, .x=0xb4, .y=0xb5, .sp=0xe4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x25ba, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x25ba, .value=0xed, .type=IO_READ},
        {.addr=0x25bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x89ed, .a=0x94, .x=0x15, .y=0xae, .sp=0xdc, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x89ed, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x89ee, .a=0x94, .x=0x15, .y=0xae, .sp=0xdc, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x89ed, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x89ed, .value=0xed, .type=IO_READ},
        {.addr=0x89ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x11a7, .a=0xfc, .x=0x25, .y=0x37, .sp=0xc8, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x11a7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x11a8, .a=0xfc, .x=0x25, .y=0x37, .sp=0xc8, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x11a7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x11a7, .value=0xed, .type=IO_READ},
        {.addr=0x11a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x6bbd, .a=0xa1, .x=0x53, .y=0xc6, .sp=0x41, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6bbd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6bbe, .a=0xa1, .x=0x53, .y=0xc6, .sp=0x41, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x6bbd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6bbd, .value=0xed, .type=IO_READ},
        {.addr=0x6bbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x3b7e, .a=0x5c, .x=0xb8, .y=0xef, .sp=0x42, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3b7e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3b7f, .a=0x5c, .x=0xb8, .y=0xef, .sp=0x42, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x3b7e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3b7e, .value=0xed, .type=IO_READ},
        {.addr=0x3b7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xf387, .a=0x35, .x=0x3f, .y=0xd8, .sp=0x17, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf387, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf388, .a=0x35, .x=0x3f, .y=0xd8, .sp=0x17, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf387, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf387, .value=0xed, .type=IO_READ},
        {.addr=0xf388, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x321c, .a=0xa2, .x=0xd1, .y=0xce, .sp=0x10, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x321c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x321d, .a=0xa2, .x=0xd1, .y=0xce, .sp=0x10, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x321c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x321c, .value=0xed, .type=IO_READ},
        {.addr=0x321d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x0bd6, .a=0x18, .x=0x12, .y=0xa8, .sp=0xfd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0bd7, .a=0x18, .x=0x12, .y=0xa8, .sp=0xfd, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0bd6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0bd6, .value=0xed, .type=IO_READ},
        {.addr=0x0bd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xe99a, .a=0xd8, .x=0x93, .y=0x30, .sp=0x7a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe99a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe99b, .a=0xd8, .x=0x93, .y=0x30, .sp=0x7a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe99a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe99a, .value=0xed, .type=IO_READ},
        {.addr=0xe99b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x057a, .a=0xdd, .x=0x0e, .y=0x37, .sp=0x06, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x057a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x057b, .a=0xdd, .x=0x0e, .y=0x37, .sp=0x06, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x057a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x057a, .value=0xed, .type=IO_READ},
        {.addr=0x057b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x4624, .a=0x02, .x=0x69, .y=0x55, .sp=0xe7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4624, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4625, .a=0x02, .x=0x69, .y=0x55, .sp=0xe7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4624, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4624, .value=0xed, .type=IO_READ},
        {.addr=0x4625, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0206, .a=0xf0, .x=0x0d, .y=0xf6, .sp=0xeb, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0206, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0207, .a=0xf0, .x=0x0d, .y=0xf6, .sp=0xeb, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0206, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0206, .value=0xed, .type=IO_READ},
        {.addr=0x0207, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1cfd, .a=0xa4, .x=0x40, .y=0x76, .sp=0x10, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1cfd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1cfe, .a=0xa4, .x=0x40, .y=0x76, .sp=0x10, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1cfd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1cfd, .value=0xed, .type=IO_READ},
        {.addr=0x1cfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xeddb, .a=0xe7, .x=0x19, .y=0x8e, .sp=0xfc, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xeddb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xeddc, .a=0xe7, .x=0x19, .y=0x8e, .sp=0xfc, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xeddb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeddb, .value=0xed, .type=IO_READ},
        {.addr=0xeddc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd761, .a=0xda, .x=0xd7, .y=0xa9, .sp=0x8c, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd761, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd762, .a=0xda, .x=0xd7, .y=0xa9, .sp=0x8c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xd761, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd761, .value=0xed, .type=IO_READ},
        {.addr=0xd762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x15ae, .a=0xe4, .x=0x2d, .y=0x2d, .sp=0xb9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x15ae, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15af, .a=0xe4, .x=0x2d, .y=0x2d, .sp=0xb9, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x15ae, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15ae, .value=0xed, .type=IO_READ},
        {.addr=0x15af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x673b, .a=0x62, .x=0x7e, .y=0x1e, .sp=0xbb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x673b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x673c, .a=0x62, .x=0x7e, .y=0x1e, .sp=0xbb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x673b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x673b, .value=0xed, .type=IO_READ},
        {.addr=0x673c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x038c, .a=0x09, .x=0x43, .y=0x37, .sp=0x73, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x038c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x038d, .a=0x09, .x=0x43, .y=0x37, .sp=0x73, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x038c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x038c, .value=0xed, .type=IO_READ},
        {.addr=0x038d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x98c9, .a=0xcb, .x=0x11, .y=0x6e, .sp=0xd1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x98c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x98ca, .a=0xcb, .x=0x11, .y=0x6e, .sp=0xd1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x98c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x98c9, .value=0xed, .type=IO_READ},
        {.addr=0x98ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x5678, .a=0x5b, .x=0x33, .y=0xc9, .sp=0x21, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5678, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5679, .a=0x5b, .x=0x33, .y=0xc9, .sp=0x21, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5678, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5678, .value=0xed, .type=IO_READ},
        {.addr=0x5679, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x5fd5, .a=0xf9, .x=0x63, .y=0x52, .sp=0x7e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5fd5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5fd6, .a=0xf9, .x=0x63, .y=0x52, .sp=0x7e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5fd5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5fd5, .value=0xed, .type=IO_READ},
        {.addr=0x5fd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xa63e, .a=0x9a, .x=0x80, .y=0xee, .sp=0x71, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa63e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa63f, .a=0x9a, .x=0x80, .y=0xee, .sp=0x71, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xa63e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa63e, .value=0xed, .type=IO_READ},
        {.addr=0xa63f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xe5e0, .a=0x17, .x=0x72, .y=0x95, .sp=0x80, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe5e1, .a=0x17, .x=0x72, .y=0x95, .sp=0x80, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe5e0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe5e0, .value=0xed, .type=IO_READ},
        {.addr=0xe5e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x8ad9, .a=0x50, .x=0x1c, .y=0xf8, .sp=0xb5, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8ada, .a=0x50, .x=0x1c, .y=0xf8, .sp=0xb5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8ad9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8ad9, .value=0xed, .type=IO_READ},
        {.addr=0x8ada, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xd80f, .a=0xeb, .x=0x5e, .y=0xdf, .sp=0xf1, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd80f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd810, .a=0xeb, .x=0x5e, .y=0xdf, .sp=0xf1, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd80f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd80f, .value=0xed, .type=IO_READ},
        {.addr=0xd810, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xf3d0, .a=0xf1, .x=0xbc, .y=0x08, .sp=0x29, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf3d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf3d1, .a=0xf1, .x=0xbc, .y=0x08, .sp=0x29, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf3d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf3d0, .value=0xed, .type=IO_READ},
        {.addr=0xf3d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x74e1, .a=0x87, .x=0x22, .y=0xf1, .sp=0x31, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x74e1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x74e2, .a=0x87, .x=0x22, .y=0xf1, .sp=0x31, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x74e1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x74e1, .value=0xed, .type=IO_READ},
        {.addr=0x74e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x87ce, .a=0x1d, .x=0x45, .y=0x02, .sp=0xfc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x87ce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x87cf, .a=0x1d, .x=0x45, .y=0x02, .sp=0xfc, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x87ce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x87ce, .value=0xed, .type=IO_READ},
        {.addr=0x87cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x6f19, .a=0x2c, .x=0xad, .y=0x49, .sp=0x09, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f19, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f1a, .a=0x2c, .x=0xad, .y=0x49, .sp=0x09, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x6f19, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f19, .value=0xed, .type=IO_READ},
        {.addr=0x6f1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xa8b1, .a=0x97, .x=0x92, .y=0x1d, .sp=0x6a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8b2, .a=0x97, .x=0x92, .y=0x1d, .sp=0x6a, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa8b1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8b1, .value=0xed, .type=IO_READ},
        {.addr=0xa8b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xd165, .a=0xad, .x=0xe9, .y=0x47, .sp=0xbf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd165, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd166, .a=0xad, .x=0xe9, .y=0x47, .sp=0xbf, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd165, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd165, .value=0xed, .type=IO_READ},
        {.addr=0xd166, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xe86a, .a=0x94, .x=0x80, .y=0xbf, .sp=0x60, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe86a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe86b, .a=0x94, .x=0x80, .y=0xbf, .sp=0x60, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xe86a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe86a, .value=0xed, .type=IO_READ},
        {.addr=0xe86b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x3f4a, .a=0xf4, .x=0x56, .y=0xde, .sp=0x7c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3f4a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3f4b, .a=0xf4, .x=0x56, .y=0xde, .sp=0x7c, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x3f4a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3f4a, .value=0xed, .type=IO_READ},
        {.addr=0x3f4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x29ab, .a=0x25, .x=0xf5, .y=0x07, .sp=0x6c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x29ab, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x29ac, .a=0x25, .x=0xf5, .y=0x07, .sp=0x6c, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x29ab, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x29ab, .value=0xed, .type=IO_READ},
        {.addr=0x29ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5068, .a=0x8a, .x=0xf5, .y=0xf8, .sp=0x4f, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5068, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5069, .a=0x8a, .x=0xf5, .y=0xf8, .sp=0x4f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x5068, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5068, .value=0xed, .type=IO_READ},
        {.addr=0x5069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x7d72, .a=0x57, .x=0xaf, .y=0xad, .sp=0xfb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x7d72, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7d73, .a=0x57, .x=0xaf, .y=0xad, .sp=0xfb, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x7d72, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7d72, .value=0xed, .type=IO_READ},
        {.addr=0x7d73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xc169, .a=0xd7, .x=0xf7, .y=0xf5, .sp=0x96, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc169, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc16a, .a=0xd7, .x=0xf7, .y=0xf5, .sp=0x96, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc169, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc169, .value=0xed, .type=IO_READ},
        {.addr=0xc16a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc7f0, .a=0xd0, .x=0x5a, .y=0x60, .sp=0x0c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc7f1, .a=0xd0, .x=0x5a, .y=0x60, .sp=0x0c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc7f0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc7f0, .value=0xed, .type=IO_READ},
        {.addr=0xc7f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x83f6, .a=0x3a, .x=0x6a, .y=0x13, .sp=0xe2, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x83f6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x83f7, .a=0x3a, .x=0x6a, .y=0x13, .sp=0xe2, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x83f6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x83f6, .value=0xed, .type=IO_READ},
        {.addr=0x83f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x681f, .a=0x1c, .x=0xcd, .y=0x3e, .sp=0xc0, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x681f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6820, .a=0x1c, .x=0xcd, .y=0x3e, .sp=0xc0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x681f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x681f, .value=0xed, .type=IO_READ},
        {.addr=0x6820, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x2d47, .a=0x22, .x=0xce, .y=0x0b, .sp=0x7c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d47, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2d48, .a=0x22, .x=0xce, .y=0x0b, .sp=0x7c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2d47, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2d47, .value=0xed, .type=IO_READ},
        {.addr=0x2d48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xa154, .a=0x5b, .x=0x7c, .y=0x06, .sp=0xca, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa154, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa155, .a=0x5b, .x=0x7c, .y=0x06, .sp=0xca, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa154, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa154, .value=0xed, .type=IO_READ},
        {.addr=0xa155, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x78b7, .a=0x8c, .x=0x93, .y=0xf7, .sp=0xaa, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x78b7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x78b8, .a=0x8c, .x=0x93, .y=0xf7, .sp=0xaa, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x78b7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x78b7, .value=0xed, .type=IO_READ},
        {.addr=0x78b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xd276, .a=0x13, .x=0x6b, .y=0x5a, .sp=0x79, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd276, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd277, .a=0x13, .x=0x6b, .y=0x5a, .sp=0x79, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd276, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd276, .value=0xed, .type=IO_READ},
        {.addr=0xd277, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x2bfc, .a=0xd7, .x=0xbf, .y=0xe6, .sp=0x71, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2bfd, .a=0xd7, .x=0xbf, .y=0xe6, .sp=0x71, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x2bfc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2bfc, .value=0xed, .type=IO_READ},
        {.addr=0x2bfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4770, .a=0xac, .x=0x5b, .y=0x86, .sp=0x32, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4770, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4771, .a=0xac, .x=0x5b, .y=0x86, .sp=0x32, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4770, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4770, .value=0xed, .type=IO_READ},
        {.addr=0x4771, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xdb21, .a=0x4c, .x=0x91, .y=0x19, .sp=0x93, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xdb21, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdb22, .a=0x4c, .x=0x91, .y=0x19, .sp=0x93, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xdb21, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdb21, .value=0xed, .type=IO_READ},
        {.addr=0xdb22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x30f1, .a=0x97, .x=0x87, .y=0x4f, .sp=0x73, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x30f1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x30f2, .a=0x97, .x=0x87, .y=0x4f, .sp=0x73, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x30f1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x30f1, .value=0xed, .type=IO_READ},
        {.addr=0x30f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xca1b, .a=0x92, .x=0x3f, .y=0xf5, .sp=0xb2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xca1b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xca1c, .a=0x92, .x=0x3f, .y=0xf5, .sp=0xb2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xca1b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xca1b, .value=0xed, .type=IO_READ},
        {.addr=0xca1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3088, .a=0x54, .x=0x83, .y=0x00, .sp=0x5e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3088, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3089, .a=0x54, .x=0x83, .y=0x00, .sp=0x5e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3088, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3088, .value=0xed, .type=IO_READ},
        {.addr=0x3089, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd782, .a=0x98, .x=0x4f, .y=0x7d, .sp=0xf3, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd782, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd783, .a=0x98, .x=0x4f, .y=0x7d, .sp=0xf3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd782, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd782, .value=0xed, .type=IO_READ},
        {.addr=0xd783, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x6f34, .a=0xcc, .x=0xe0, .y=0x33, .sp=0xf0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6f34, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f35, .a=0xcc, .x=0xe0, .y=0x33, .sp=0xf0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6f34, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f34, .value=0xed, .type=IO_READ},
        {.addr=0x6f35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x17dc, .a=0xb3, .x=0xa8, .y=0x9c, .sp=0x7c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x17dc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x17dd, .a=0xb3, .x=0xa8, .y=0x9c, .sp=0x7c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x17dc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x17dc, .value=0xed, .type=IO_READ},
        {.addr=0x17dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x9138, .a=0x73, .x=0x5b, .y=0x38, .sp=0xac, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9138, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9139, .a=0x73, .x=0x5b, .y=0x38, .sp=0xac, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9138, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9138, .value=0xed, .type=IO_READ},
        {.addr=0x9139, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xc33a, .a=0xcb, .x=0x73, .y=0x29, .sp=0x56, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc33a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc33b, .a=0xcb, .x=0x73, .y=0x29, .sp=0x56, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc33a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc33a, .value=0xed, .type=IO_READ},
        {.addr=0xc33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x19e6, .a=0x8a, .x=0xa1, .y=0x6c, .sp=0xd6, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x19e6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x19e7, .a=0x8a, .x=0xa1, .y=0x6c, .sp=0xd6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x19e6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x19e6, .value=0xed, .type=IO_READ},
        {.addr=0x19e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x21bf, .a=0x02, .x=0xbb, .y=0x2d, .sp=0x0a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x21bf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x21c0, .a=0x02, .x=0xbb, .y=0x2d, .sp=0x0a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x21bf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x21bf, .value=0xed, .type=IO_READ},
        {.addr=0x21c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x3745, .a=0x73, .x=0xa1, .y=0xbe, .sp=0x58, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3745, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3746, .a=0x73, .x=0xa1, .y=0xbe, .sp=0x58, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x3745, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3745, .value=0xed, .type=IO_READ},
        {.addr=0x3746, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xe1b9, .a=0x32, .x=0x46, .y=0x06, .sp=0xc9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe1ba, .a=0x32, .x=0x46, .y=0x06, .sp=0xc9, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe1b9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe1b9, .value=0xed, .type=IO_READ},
        {.addr=0xe1ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x17d3, .a=0x3c, .x=0x94, .y=0x7a, .sp=0xf2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x17d3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x17d4, .a=0x3c, .x=0x94, .y=0x7a, .sp=0xf2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x17d3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x17d3, .value=0xed, .type=IO_READ},
        {.addr=0x17d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x487b, .a=0xed, .x=0x3d, .y=0x1a, .sp=0x6e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x487b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x487c, .a=0xed, .x=0x3d, .y=0x1a, .sp=0x6e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x487b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x487b, .value=0xed, .type=IO_READ},
        {.addr=0x487c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x506e, .a=0x64, .x=0x75, .y=0xa4, .sp=0x0b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x506e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x506f, .a=0x64, .x=0x75, .y=0xa4, .sp=0x0b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x506e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x506e, .value=0xed, .type=IO_READ},
        {.addr=0x506f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xee07, .a=0x65, .x=0x73, .y=0x99, .sp=0xe9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xee07, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xee08, .a=0x65, .x=0x73, .y=0x99, .sp=0xe9, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xee07, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xee07, .value=0xed, .type=IO_READ},
        {.addr=0xee08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xcaf7, .a=0x7d, .x=0x92, .y=0x69, .sp=0x5f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcaf8, .a=0x7d, .x=0x92, .y=0x69, .sp=0x5f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xcaf7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcaf7, .value=0xed, .type=IO_READ},
        {.addr=0xcaf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x3537, .a=0x8e, .x=0xb8, .y=0xe1, .sp=0xd7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x3537, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3538, .a=0x8e, .x=0xb8, .y=0xe1, .sp=0xd7, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x3537, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3537, .value=0xed, .type=IO_READ},
        {.addr=0x3538, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x64d5, .a=0x1e, .x=0xb2, .y=0xe1, .sp=0x94, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x64d5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x64d6, .a=0x1e, .x=0xb2, .y=0xe1, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x64d5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x64d5, .value=0xed, .type=IO_READ},
        {.addr=0x64d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xe1e8, .a=0x96, .x=0x02, .y=0x34, .sp=0x8d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe1e9, .a=0x96, .x=0x02, .y=0x34, .sp=0x8d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe1e8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe1e8, .value=0xed, .type=IO_READ},
        {.addr=0xe1e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x0557, .a=0xca, .x=0x55, .y=0x1b, .sp=0x68, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0557, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0558, .a=0xca, .x=0x55, .y=0x1b, .sp=0x68, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0557, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0557, .value=0xed, .type=IO_READ},
        {.addr=0x0558, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x7953, .a=0x9d, .x=0x04, .y=0x39, .sp=0xf5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7953, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7954, .a=0x9d, .x=0x04, .y=0x39, .sp=0xf5, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7953, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7953, .value=0xed, .type=IO_READ},
        {.addr=0x7954, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x553c, .a=0x1e, .x=0x33, .y=0x78, .sp=0x17, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x553c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x553d, .a=0x1e, .x=0x33, .y=0x78, .sp=0x17, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x553c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x553c, .value=0xed, .type=IO_READ},
        {.addr=0x553d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xb645, .a=0xe2, .x=0x8e, .y=0xe6, .sp=0x4b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb645, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb646, .a=0xe2, .x=0x8e, .y=0xe6, .sp=0x4b, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xb645, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb645, .value=0xed, .type=IO_READ},
        {.addr=0xb646, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xc156, .a=0xb1, .x=0x62, .y=0x43, .sp=0x19, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc156, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc157, .a=0xb1, .x=0x62, .y=0x43, .sp=0x19, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xc156, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc156, .value=0xed, .type=IO_READ},
        {.addr=0xc157, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x3b74, .a=0x1d, .x=0x83, .y=0x4c, .sp=0x90, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3b74, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3b75, .a=0x1d, .x=0x83, .y=0x4c, .sp=0x90, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3b74, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3b74, .value=0xed, .type=IO_READ},
        {.addr=0x3b75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x1f62, .a=0x62, .x=0x33, .y=0x40, .sp=0x11, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x1f62, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1f63, .a=0x62, .x=0x33, .y=0x40, .sp=0x11, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x1f62, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1f62, .value=0xed, .type=IO_READ},
        {.addr=0x1f63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x4f5c, .a=0x7b, .x=0x16, .y=0x6b, .sp=0xda, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x4f5c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4f5d, .a=0x7b, .x=0x16, .y=0x6b, .sp=0xda, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x4f5c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4f5c, .value=0xed, .type=IO_READ},
        {.addr=0x4f5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x1e79, .a=0xfa, .x=0xb7, .y=0xb3, .sp=0x96, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1e79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1e7a, .a=0xfa, .x=0xb7, .y=0xb3, .sp=0x96, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1e79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1e79, .value=0xed, .type=IO_READ},
        {.addr=0x1e7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0200) {
    const struct CPU_State initial_cpu = {.pc=0xdcf2, .a=0xf6, .x=0xb7, .y=0xc5, .sp=0x23, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdcf3, .a=0xf6, .x=0xb7, .y=0xc5, .sp=0x23, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xdcf2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdcf2, .value=0xed, .type=IO_READ},
        {.addr=0xdcf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1ae1, .a=0x54, .x=0xfb, .y=0xbd, .sp=0xff, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1ae2, .a=0x54, .x=0xfb, .y=0xbd, .sp=0xff, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1ae1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1ae1, .value=0xed, .type=IO_READ},
        {.addr=0x1ae2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0202) {
    const struct CPU_State initial_cpu = {.pc=0x4494, .a=0x3f, .x=0x15, .y=0x20, .sp=0x0e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4494, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4495, .a=0x3f, .x=0x15, .y=0x20, .sp=0x0e, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x4494, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4494, .value=0xed, .type=IO_READ},
        {.addr=0x4495, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0203) {
    const struct CPU_State initial_cpu = {.pc=0x603e, .a=0x7f, .x=0xbe, .y=0x7d, .sp=0x75, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x603e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x603f, .a=0x7f, .x=0xbe, .y=0x7d, .sp=0x75, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x603e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x603e, .value=0xed, .type=IO_READ},
        {.addr=0x603f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0204) {
    const struct CPU_State initial_cpu = {.pc=0x346e, .a=0x04, .x=0x40, .y=0xfd, .sp=0x50, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x346e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x346f, .a=0x04, .x=0x40, .y=0xfd, .sp=0x50, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x346e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x346e, .value=0xed, .type=IO_READ},
        {.addr=0x346f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0205) {
    const struct CPU_State initial_cpu = {.pc=0x03cc, .a=0x64, .x=0xe3, .y=0xdc, .sp=0x39, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x03cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x03cd, .a=0x64, .x=0xe3, .y=0xdc, .sp=0x39, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x03cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x03cc, .value=0xed, .type=IO_READ},
        {.addr=0x03cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0206) {
    const struct CPU_State initial_cpu = {.pc=0xcd2f, .a=0x6e, .x=0xe8, .y=0x35, .sp=0xed, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcd30, .a=0x6e, .x=0xe8, .y=0x35, .sp=0xed, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xcd2f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcd2f, .value=0xed, .type=IO_READ},
        {.addr=0xcd30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0207) {
    const struct CPU_State initial_cpu = {.pc=0x1cf8, .a=0x83, .x=0xaf, .y=0xd6, .sp=0xaf, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1cf9, .a=0x83, .x=0xaf, .y=0xd6, .sp=0xaf, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1cf8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1cf8, .value=0xed, .type=IO_READ},
        {.addr=0x1cf9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0208) {
    const struct CPU_State initial_cpu = {.pc=0xb417, .a=0x75, .x=0xfe, .y=0xe7, .sp=0x40, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb417, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb418, .a=0x75, .x=0xfe, .y=0xe7, .sp=0x40, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xb417, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb417, .value=0xed, .type=IO_READ},
        {.addr=0xb418, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0209) {
    const struct CPU_State initial_cpu = {.pc=0xa8a0, .a=0x5a, .x=0x9c, .y=0x76, .sp=0xea, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8a1, .a=0x5a, .x=0x9c, .y=0x76, .sp=0xea, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa8a0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8a0, .value=0xed, .type=IO_READ},
        {.addr=0xa8a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020A) {
    const struct CPU_State initial_cpu = {.pc=0xab0d, .a=0x34, .x=0x2b, .y=0xfd, .sp=0xcf, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xab0d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xab0e, .a=0x34, .x=0x2b, .y=0xfd, .sp=0xcf, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xab0d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xab0d, .value=0xed, .type=IO_READ},
        {.addr=0xab0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020B) {
    const struct CPU_State initial_cpu = {.pc=0x78e4, .a=0xe3, .x=0x65, .y=0x5e, .sp=0x0f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x78e4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x78e5, .a=0xe3, .x=0x65, .y=0x5e, .sp=0x0f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x78e4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x78e4, .value=0xed, .type=IO_READ},
        {.addr=0x78e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2078, .a=0xb3, .x=0xa4, .y=0x6c, .sp=0x1d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2078, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2079, .a=0xb3, .x=0xa4, .y=0x6c, .sp=0x1d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x2078, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2078, .value=0xed, .type=IO_READ},
        {.addr=0x2079, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4abe, .a=0x49, .x=0x64, .y=0x5b, .sp=0xb9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4abe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4abf, .a=0x49, .x=0x64, .y=0x5b, .sp=0xb9, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4abe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4abe, .value=0xed, .type=IO_READ},
        {.addr=0x4abf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020E) {
    const struct CPU_State initial_cpu = {.pc=0x03de, .a=0x6f, .x=0x45, .y=0xa7, .sp=0x42, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x03de, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x03df, .a=0x6f, .x=0x45, .y=0xa7, .sp=0x42, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x03de, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x03de, .value=0xed, .type=IO_READ},
        {.addr=0x03df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_020F) {
    const struct CPU_State initial_cpu = {.pc=0xea02, .a=0x3e, .x=0x55, .y=0x83, .sp=0x40, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xea02, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xea03, .a=0x3e, .x=0x55, .y=0x83, .sp=0x40, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xea02, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xea02, .value=0xed, .type=IO_READ},
        {.addr=0xea03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0210) {
    const struct CPU_State initial_cpu = {.pc=0x0c2b, .a=0xe0, .x=0x78, .y=0x33, .sp=0x8b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0c2b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0c2c, .a=0xe0, .x=0x78, .y=0x33, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0c2b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0c2b, .value=0xed, .type=IO_READ},
        {.addr=0x0c2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0211) {
    const struct CPU_State initial_cpu = {.pc=0x35ea, .a=0x0d, .x=0x81, .y=0xf3, .sp=0xde, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x35ea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x35eb, .a=0x0d, .x=0x81, .y=0xf3, .sp=0xde, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x35ea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x35ea, .value=0xed, .type=IO_READ},
        {.addr=0x35eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0212) {
    const struct CPU_State initial_cpu = {.pc=0x29b4, .a=0xce, .x=0xba, .y=0xda, .sp=0x7f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x29b4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x29b5, .a=0xce, .x=0xba, .y=0xda, .sp=0x7f, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x29b4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x29b4, .value=0xed, .type=IO_READ},
        {.addr=0x29b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0213) {
    const struct CPU_State initial_cpu = {.pc=0x8ad6, .a=0x36, .x=0xaa, .y=0x34, .sp=0xd4, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8ad7, .a=0x36, .x=0xaa, .y=0x34, .sp=0xd4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8ad6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8ad6, .value=0xed, .type=IO_READ},
        {.addr=0x8ad7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0214) {
    const struct CPU_State initial_cpu = {.pc=0x28ea, .a=0xd6, .x=0xbd, .y=0x51, .sp=0xf7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x28ea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x28eb, .a=0xd6, .x=0xbd, .y=0x51, .sp=0xf7, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x28ea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x28ea, .value=0xed, .type=IO_READ},
        {.addr=0x28eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0215) {
    const struct CPU_State initial_cpu = {.pc=0x1650, .a=0xee, .x=0x1c, .y=0x13, .sp=0xc7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1650, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1651, .a=0xee, .x=0x1c, .y=0x13, .sp=0xc7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1650, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1650, .value=0xed, .type=IO_READ},
        {.addr=0x1651, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0216) {
    const struct CPU_State initial_cpu = {.pc=0x7d82, .a=0x44, .x=0xc9, .y=0xeb, .sp=0xcb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x7d82, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7d83, .a=0x44, .x=0xc9, .y=0xeb, .sp=0xcb, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x7d82, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7d82, .value=0xed, .type=IO_READ},
        {.addr=0x7d83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0217) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x6c, .x=0xe3, .y=0x99, .sp=0x5d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x46cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x46ce, .a=0x6c, .x=0xe3, .y=0x99, .sp=0x5d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x46cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0xed, .type=IO_READ},
        {.addr=0x46ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0218) {
    const struct CPU_State initial_cpu = {.pc=0x9319, .a=0x9c, .x=0x24, .y=0x63, .sp=0xd1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9319, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x931a, .a=0x9c, .x=0x24, .y=0x63, .sp=0xd1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9319, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9319, .value=0xed, .type=IO_READ},
        {.addr=0x931a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0219) {
    const struct CPU_State initial_cpu = {.pc=0xb360, .a=0x2c, .x=0xb6, .y=0x0b, .sp=0x5c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb360, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb361, .a=0x2c, .x=0xb6, .y=0x0b, .sp=0x5c, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xb360, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb360, .value=0xed, .type=IO_READ},
        {.addr=0xb361, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021A) {
    const struct CPU_State initial_cpu = {.pc=0x251c, .a=0x67, .x=0x77, .y=0x32, .sp=0x88, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x251c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x251d, .a=0x67, .x=0x77, .y=0x32, .sp=0x88, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x251c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x251c, .value=0xed, .type=IO_READ},
        {.addr=0x251d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021B) {
    const struct CPU_State initial_cpu = {.pc=0x59dc, .a=0x71, .x=0x72, .y=0xec, .sp=0x6d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x59dc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x59dd, .a=0x71, .x=0x72, .y=0xec, .sp=0x6d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x59dc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x59dc, .value=0xed, .type=IO_READ},
        {.addr=0x59dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021C) {
    const struct CPU_State initial_cpu = {.pc=0x7f50, .a=0x4d, .x=0x44, .y=0xbf, .sp=0x78, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7f50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f51, .a=0x4d, .x=0x44, .y=0xbf, .sp=0x78, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x7f50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f50, .value=0xed, .type=IO_READ},
        {.addr=0x7f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021D) {
    const struct CPU_State initial_cpu = {.pc=0x222c, .a=0x2a, .x=0x99, .y=0x93, .sp=0x0e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x222c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x222d, .a=0x2a, .x=0x99, .y=0x93, .sp=0x0e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x222c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x222c, .value=0xed, .type=IO_READ},
        {.addr=0x222d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa1be, .a=0x61, .x=0xbb, .y=0xf1, .sp=0x9d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xa1be, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa1bf, .a=0x61, .x=0xbb, .y=0xf1, .sp=0x9d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa1be, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa1be, .value=0xed, .type=IO_READ},
        {.addr=0xa1bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_021F) {
    const struct CPU_State initial_cpu = {.pc=0x8dbb, .a=0x64, .x=0xf5, .y=0x48, .sp=0x7c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8dbb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8dbc, .a=0x64, .x=0xf5, .y=0x48, .sp=0x7c, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x8dbb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8dbb, .value=0xed, .type=IO_READ},
        {.addr=0x8dbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0220) {
    const struct CPU_State initial_cpu = {.pc=0x308a, .a=0x60, .x=0x16, .y=0x3d, .sp=0x27, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x308a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x308b, .a=0x60, .x=0x16, .y=0x3d, .sp=0x27, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x308a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x308a, .value=0xed, .type=IO_READ},
        {.addr=0x308b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0221) {
    const struct CPU_State initial_cpu = {.pc=0x7f96, .a=0x4f, .x=0xa3, .y=0xd0, .sp=0x2c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7f96, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f97, .a=0x4f, .x=0xa3, .y=0xd0, .sp=0x2c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7f96, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f96, .value=0xed, .type=IO_READ},
        {.addr=0x7f97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0222) {
    const struct CPU_State initial_cpu = {.pc=0x092d, .a=0x79, .x=0xe8, .y=0x97, .sp=0xbc, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x092d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x092e, .a=0x79, .x=0xe8, .y=0x97, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x092d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x092d, .value=0xed, .type=IO_READ},
        {.addr=0x092e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0223) {
    const struct CPU_State initial_cpu = {.pc=0x1126, .a=0x82, .x=0xbb, .y=0x10, .sp=0x36, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1126, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1127, .a=0x82, .x=0xbb, .y=0x10, .sp=0x36, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x1126, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1126, .value=0xed, .type=IO_READ},
        {.addr=0x1127, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0224) {
    const struct CPU_State initial_cpu = {.pc=0x2cec, .a=0xe7, .x=0x52, .y=0xea, .sp=0xbb, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2cec, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2ced, .a=0xe7, .x=0x52, .y=0xea, .sp=0xbb, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x2cec, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2cec, .value=0xed, .type=IO_READ},
        {.addr=0x2ced, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0225) {
    const struct CPU_State initial_cpu = {.pc=0xdaf3, .a=0x6b, .x=0xb4, .y=0xbd, .sp=0x8f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdaf4, .a=0x6b, .x=0xb4, .y=0xbd, .sp=0x8f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xdaf3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdaf3, .value=0xed, .type=IO_READ},
        {.addr=0xdaf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0226) {
    const struct CPU_State initial_cpu = {.pc=0xa9c1, .a=0xab, .x=0x47, .y=0x7c, .sp=0xdd, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa9c2, .a=0xab, .x=0x47, .y=0x7c, .sp=0xdd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa9c1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa9c1, .value=0xed, .type=IO_READ},
        {.addr=0xa9c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0227) {
    const struct CPU_State initial_cpu = {.pc=0x0c69, .a=0x6b, .x=0x2a, .y=0x01, .sp=0x9e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0c69, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0c6a, .a=0x6b, .x=0x2a, .y=0x01, .sp=0x9e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0c69, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0c69, .value=0xed, .type=IO_READ},
        {.addr=0x0c6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0228) {
    const struct CPU_State initial_cpu = {.pc=0x9ef1, .a=0xbf, .x=0x69, .y=0xe6, .sp=0x9c, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9ef2, .a=0xbf, .x=0x69, .y=0xe6, .sp=0x9c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x9ef1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9ef1, .value=0xed, .type=IO_READ},
        {.addr=0x9ef2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0229) {
    const struct CPU_State initial_cpu = {.pc=0x0200, .a=0x26, .x=0xf3, .y=0x17, .sp=0x00, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0200, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0201, .a=0x26, .x=0xf3, .y=0x17, .sp=0x00, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0200, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0200, .value=0xed, .type=IO_READ},
        {.addr=0x0201, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022A) {
    const struct CPU_State initial_cpu = {.pc=0x07d6, .a=0x25, .x=0x8e, .y=0xa5, .sp=0x5e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x07d6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x07d7, .a=0x25, .x=0x8e, .y=0xa5, .sp=0x5e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x07d6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x07d6, .value=0xed, .type=IO_READ},
        {.addr=0x07d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022B) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0x75, .x=0xfb, .y=0xfb, .sp=0x96, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8707, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8708, .a=0x75, .x=0xfb, .y=0xfb, .sp=0x96, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8707, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0xed, .type=IO_READ},
        {.addr=0x8708, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022C) {
    const struct CPU_State initial_cpu = {.pc=0xb3d7, .a=0x59, .x=0x79, .y=0xcf, .sp=0x3a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb3d8, .a=0x59, .x=0x79, .y=0xcf, .sp=0x3a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb3d7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb3d7, .value=0xed, .type=IO_READ},
        {.addr=0xb3d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022D) {
    const struct CPU_State initial_cpu = {.pc=0xb01a, .a=0xc6, .x=0xeb, .y=0x2d, .sp=0xb6, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb01a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb01b, .a=0xc6, .x=0xeb, .y=0x2d, .sp=0xb6, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xb01a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb01a, .value=0xed, .type=IO_READ},
        {.addr=0xb01b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022E) {
    const struct CPU_State initial_cpu = {.pc=0x2db3, .a=0x95, .x=0x38, .y=0x25, .sp=0x34, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2db3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2db4, .a=0x95, .x=0x38, .y=0x25, .sp=0x34, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2db3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2db3, .value=0xed, .type=IO_READ},
        {.addr=0x2db4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_022F) {
    const struct CPU_State initial_cpu = {.pc=0x4412, .a=0x8f, .x=0x55, .y=0xfa, .sp=0xb0, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4412, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4413, .a=0x8f, .x=0x55, .y=0xfa, .sp=0xb0, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x4412, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4412, .value=0xed, .type=IO_READ},
        {.addr=0x4413, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0230) {
    const struct CPU_State initial_cpu = {.pc=0x4efc, .a=0x98, .x=0x66, .y=0x2d, .sp=0x2e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4efc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4efd, .a=0x98, .x=0x66, .y=0x2d, .sp=0x2e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4efc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4efc, .value=0xed, .type=IO_READ},
        {.addr=0x4efd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0231) {
    const struct CPU_State initial_cpu = {.pc=0xb67b, .a=0x08, .x=0xaa, .y=0x44, .sp=0x0f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb67b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb67c, .a=0x08, .x=0xaa, .y=0x44, .sp=0x0f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xb67b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb67b, .value=0xed, .type=IO_READ},
        {.addr=0xb67c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc2bb, .a=0x43, .x=0xd9, .y=0xd1, .sp=0x58, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xc2bb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc2bc, .a=0x43, .x=0xd9, .y=0xd1, .sp=0x58, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc2bb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc2bb, .value=0xed, .type=IO_READ},
        {.addr=0xc2bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0233) {
    const struct CPU_State initial_cpu = {.pc=0x7b3f, .a=0xbb, .x=0xb6, .y=0x60, .sp=0x06, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b3f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7b40, .a=0xbb, .x=0xb6, .y=0x60, .sp=0x06, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7b3f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7b3f, .value=0xed, .type=IO_READ},
        {.addr=0x7b40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0234) {
    const struct CPU_State initial_cpu = {.pc=0xbe31, .a=0x10, .x=0xe5, .y=0xde, .sp=0xf5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xbe31, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbe32, .a=0x10, .x=0xe5, .y=0xde, .sp=0xf5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbe31, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbe31, .value=0xed, .type=IO_READ},
        {.addr=0xbe32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0235) {
    const struct CPU_State initial_cpu = {.pc=0x9f39, .a=0x5f, .x=0x5a, .y=0xd2, .sp=0xa8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9f39, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9f3a, .a=0x5f, .x=0x5a, .y=0xd2, .sp=0xa8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9f39, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9f39, .value=0xed, .type=IO_READ},
        {.addr=0x9f3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0236) {
    const struct CPU_State initial_cpu = {.pc=0x814a, .a=0xfd, .x=0xba, .y=0x44, .sp=0xc0, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x814a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x814b, .a=0xfd, .x=0xba, .y=0x44, .sp=0xc0, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x814a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x814a, .value=0xed, .type=IO_READ},
        {.addr=0x814b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0237) {
    const struct CPU_State initial_cpu = {.pc=0xb2ff, .a=0x19, .x=0x2b, .y=0x64, .sp=0x63, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ff, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb300, .a=0x19, .x=0x2b, .y=0x64, .sp=0x63, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xb2ff, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb2ff, .value=0xed, .type=IO_READ},
        {.addr=0xb300, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0238) {
    const struct CPU_State initial_cpu = {.pc=0x3d8d, .a=0xbc, .x=0x48, .y=0xeb, .sp=0x9f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3d8e, .a=0xbc, .x=0x48, .y=0xeb, .sp=0x9f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3d8d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3d8d, .value=0xed, .type=IO_READ},
        {.addr=0x3d8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0239) {
    const struct CPU_State initial_cpu = {.pc=0xa300, .a=0xf7, .x=0xc7, .y=0x1e, .sp=0xcb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa300, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa301, .a=0xf7, .x=0xc7, .y=0x1e, .sp=0xcb, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xa300, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa300, .value=0xed, .type=IO_READ},
        {.addr=0xa301, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023A) {
    const struct CPU_State initial_cpu = {.pc=0x4231, .a=0x14, .x=0xa4, .y=0xa8, .sp=0x71, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4231, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4232, .a=0x14, .x=0xa4, .y=0xa8, .sp=0x71, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4231, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4231, .value=0xed, .type=IO_READ},
        {.addr=0x4232, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9722, .a=0x5d, .x=0xe0, .y=0xf0, .sp=0xea, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9722, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9723, .a=0x5d, .x=0xe0, .y=0xf0, .sp=0xea, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9722, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9722, .value=0xed, .type=IO_READ},
        {.addr=0x9723, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023C) {
    const struct CPU_State initial_cpu = {.pc=0xc238, .a=0xe3, .x=0x11, .y=0x06, .sp=0xdc, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc238, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc239, .a=0xe3, .x=0x11, .y=0x06, .sp=0xdc, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xc238, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc238, .value=0xed, .type=IO_READ},
        {.addr=0xc239, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023D) {
    const struct CPU_State initial_cpu = {.pc=0x0359, .a=0x83, .x=0x1c, .y=0x8e, .sp=0x2f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0359, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x035a, .a=0x83, .x=0x1c, .y=0x8e, .sp=0x2f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0359, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0359, .value=0xed, .type=IO_READ},
        {.addr=0x035a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023E) {
    const struct CPU_State initial_cpu = {.pc=0x0b3c, .a=0x11, .x=0x14, .y=0xdc, .sp=0xfd, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0b3c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0b3d, .a=0x11, .x=0x14, .y=0xdc, .sp=0xfd, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0b3c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0b3c, .value=0xed, .type=IO_READ},
        {.addr=0x0b3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_023F) {
    const struct CPU_State initial_cpu = {.pc=0x51c5, .a=0x2d, .x=0x2a, .y=0x01, .sp=0x4e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x51c5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x51c6, .a=0x2d, .x=0x2a, .y=0x01, .sp=0x4e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x51c5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x51c5, .value=0xed, .type=IO_READ},
        {.addr=0x51c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0240) {
    const struct CPU_State initial_cpu = {.pc=0xaffa, .a=0xdc, .x=0x4a, .y=0xc4, .sp=0x57, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xaffa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaffb, .a=0xdc, .x=0x4a, .y=0xc4, .sp=0x57, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xaffa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaffa, .value=0xed, .type=IO_READ},
        {.addr=0xaffb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0241) {
    const struct CPU_State initial_cpu = {.pc=0x11e1, .a=0xf3, .x=0xc1, .y=0x7f, .sp=0x43, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x11e1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x11e2, .a=0xf3, .x=0xc1, .y=0x7f, .sp=0x43, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x11e1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x11e1, .value=0xed, .type=IO_READ},
        {.addr=0x11e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0242) {
    const struct CPU_State initial_cpu = {.pc=0x538a, .a=0xa6, .x=0x0e, .y=0x71, .sp=0xdc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x538a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x538b, .a=0xa6, .x=0x0e, .y=0x71, .sp=0xdc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x538a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x538a, .value=0xed, .type=IO_READ},
        {.addr=0x538b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0243) {
    const struct CPU_State initial_cpu = {.pc=0x17af, .a=0x6f, .x=0x73, .y=0x5d, .sp=0xe3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x17af, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x17b0, .a=0x6f, .x=0x73, .y=0x5d, .sp=0xe3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x17af, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x17af, .value=0xed, .type=IO_READ},
        {.addr=0x17b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0244) {
    const struct CPU_State initial_cpu = {.pc=0x86cb, .a=0x36, .x=0x19, .y=0xde, .sp=0xf2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x86cb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x86cc, .a=0x36, .x=0x19, .y=0xde, .sp=0xf2, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x86cb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x86cb, .value=0xed, .type=IO_READ},
        {.addr=0x86cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0245) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0xe1, .x=0x38, .y=0x10, .sp=0xe9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe4ce, .a=0xe1, .x=0x38, .y=0x10, .sp=0xe9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe4cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0xed, .type=IO_READ},
        {.addr=0xe4ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0246) {
    const struct CPU_State initial_cpu = {.pc=0x1790, .a=0xa2, .x=0x8c, .y=0xbf, .sp=0xc7, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1790, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1791, .a=0xa2, .x=0x8c, .y=0xbf, .sp=0xc7, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x1790, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1790, .value=0xed, .type=IO_READ},
        {.addr=0x1791, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0247) {
    const struct CPU_State initial_cpu = {.pc=0x2f9a, .a=0x57, .x=0x04, .y=0x6e, .sp=0xf7, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2f9a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2f9b, .a=0x57, .x=0x04, .y=0x6e, .sp=0xf7, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x2f9a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2f9a, .value=0xed, .type=IO_READ},
        {.addr=0x2f9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0248) {
    const struct CPU_State initial_cpu = {.pc=0xed78, .a=0xdb, .x=0xd7, .y=0xee, .sp=0x17, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xed78, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xed79, .a=0xdb, .x=0xd7, .y=0xee, .sp=0x17, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xed78, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xed78, .value=0xed, .type=IO_READ},
        {.addr=0xed79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0249) {
    const struct CPU_State initial_cpu = {.pc=0xb97c, .a=0x1b, .x=0x36, .y=0xbb, .sp=0x56, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb97c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb97d, .a=0x1b, .x=0x36, .y=0xbb, .sp=0x56, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xb97c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb97c, .value=0xed, .type=IO_READ},
        {.addr=0xb97d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024A) {
    const struct CPU_State initial_cpu = {.pc=0x33e5, .a=0x7c, .x=0xc2, .y=0x68, .sp=0x26, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x33e5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x33e6, .a=0x7c, .x=0xc2, .y=0x68, .sp=0x26, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x33e5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x33e5, .value=0xed, .type=IO_READ},
        {.addr=0x33e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024B) {
    const struct CPU_State initial_cpu = {.pc=0x2f4d, .a=0x8f, .x=0x1c, .y=0xe0, .sp=0x7f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2f4e, .a=0x8f, .x=0x1c, .y=0xe0, .sp=0x7f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2f4d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2f4d, .value=0xed, .type=IO_READ},
        {.addr=0x2f4e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024C) {
    const struct CPU_State initial_cpu = {.pc=0x7f1e, .a=0x0a, .x=0x1a, .y=0xed, .sp=0xea, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f1e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f1f, .a=0x0a, .x=0x1a, .y=0xed, .sp=0xea, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x7f1e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f1e, .value=0xed, .type=IO_READ},
        {.addr=0x7f1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024D) {
    const struct CPU_State initial_cpu = {.pc=0xa86c, .a=0x72, .x=0x46, .y=0x61, .sp=0x94, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xa86c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa86d, .a=0x72, .x=0x46, .y=0x61, .sp=0x94, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xa86c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa86c, .value=0xed, .type=IO_READ},
        {.addr=0xa86d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024E) {
    const struct CPU_State initial_cpu = {.pc=0x54cd, .a=0xf2, .x=0xc2, .y=0x41, .sp=0x63, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x54cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x54ce, .a=0xf2, .x=0xc2, .y=0x41, .sp=0x63, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x54cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x54cd, .value=0xed, .type=IO_READ},
        {.addr=0x54ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf5bf, .a=0x7d, .x=0x45, .y=0x41, .sp=0x5c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xf5bf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf5c0, .a=0x7d, .x=0x45, .y=0x41, .sp=0x5c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xf5bf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf5bf, .value=0xed, .type=IO_READ},
        {.addr=0xf5c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0250) {
    const struct CPU_State initial_cpu = {.pc=0x56d0, .a=0x33, .x=0xca, .y=0x03, .sp=0x89, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x56d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x56d1, .a=0x33, .x=0xca, .y=0x03, .sp=0x89, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x56d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x56d0, .value=0xed, .type=IO_READ},
        {.addr=0x56d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0251) {
    const struct CPU_State initial_cpu = {.pc=0x91e9, .a=0x62, .x=0x0a, .y=0xe5, .sp=0xfa, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x91e9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x91ea, .a=0x62, .x=0x0a, .y=0xe5, .sp=0xfa, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x91e9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x91e9, .value=0xed, .type=IO_READ},
        {.addr=0x91ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0252) {
    const struct CPU_State initial_cpu = {.pc=0x89cb, .a=0x36, .x=0xa9, .y=0x36, .sp=0x98, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x89cb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x89cc, .a=0x36, .x=0xa9, .y=0x36, .sp=0x98, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x89cb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x89cb, .value=0xed, .type=IO_READ},
        {.addr=0x89cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0253) {
    const struct CPU_State initial_cpu = {.pc=0xa41f, .a=0x7c, .x=0xa1, .y=0x88, .sp=0x85, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa41f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa420, .a=0x7c, .x=0xa1, .y=0x88, .sp=0x85, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa41f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa41f, .value=0xed, .type=IO_READ},
        {.addr=0xa420, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0254) {
    const struct CPU_State initial_cpu = {.pc=0x16a9, .a=0xbc, .x=0x5a, .y=0x08, .sp=0x22, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x16a9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x16aa, .a=0xbc, .x=0x5a, .y=0x08, .sp=0x22, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x16a9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x16a9, .value=0xed, .type=IO_READ},
        {.addr=0x16aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0255) {
    const struct CPU_State initial_cpu = {.pc=0x2fa9, .a=0x48, .x=0x50, .y=0xac, .sp=0xf1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2faa, .a=0x48, .x=0x50, .y=0xac, .sp=0xf1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2fa9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2fa9, .value=0xed, .type=IO_READ},
        {.addr=0x2faa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0256) {
    const struct CPU_State initial_cpu = {.pc=0x6377, .a=0xfe, .x=0x3d, .y=0x32, .sp=0x42, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x6377, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6378, .a=0xfe, .x=0x3d, .y=0x32, .sp=0x42, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x6377, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6377, .value=0xed, .type=IO_READ},
        {.addr=0x6378, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0257) {
    const struct CPU_State initial_cpu = {.pc=0x311f, .a=0x2a, .x=0x0d, .y=0x35, .sp=0x3d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x311f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3120, .a=0x2a, .x=0x0d, .y=0x35, .sp=0x3d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x311f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x311f, .value=0xed, .type=IO_READ},
        {.addr=0x3120, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4228, .a=0x22, .x=0x22, .y=0x14, .sp=0xf8, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4228, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4229, .a=0x22, .x=0x22, .y=0x14, .sp=0xf8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4228, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4228, .value=0xed, .type=IO_READ},
        {.addr=0x4229, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0259) {
    const struct CPU_State initial_cpu = {.pc=0xdead, .a=0x2e, .x=0x09, .y=0x10, .sp=0x99, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xdead, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdeae, .a=0x2e, .x=0x09, .y=0x10, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdead, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdead, .value=0xed, .type=IO_READ},
        {.addr=0xdeae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025A) {
    const struct CPU_State initial_cpu = {.pc=0x29f5, .a=0xee, .x=0x65, .y=0xca, .sp=0x43, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x29f5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x29f6, .a=0xee, .x=0x65, .y=0xca, .sp=0x43, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x29f5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x29f5, .value=0xed, .type=IO_READ},
        {.addr=0x29f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025B) {
    const struct CPU_State initial_cpu = {.pc=0x7db5, .a=0xfe, .x=0xd3, .y=0x76, .sp=0x6e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x7db5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7db6, .a=0xfe, .x=0xd3, .y=0x76, .sp=0x6e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7db5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7db5, .value=0xed, .type=IO_READ},
        {.addr=0x7db6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025C) {
    const struct CPU_State initial_cpu = {.pc=0x6f9c, .a=0x9b, .x=0xbd, .y=0x48, .sp=0x4d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f9c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f9d, .a=0x9b, .x=0xbd, .y=0x48, .sp=0x4d, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6f9c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f9c, .value=0xed, .type=IO_READ},
        {.addr=0x6f9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025D) {
    const struct CPU_State initial_cpu = {.pc=0x1c3d, .a=0x8e, .x=0x97, .y=0xf0, .sp=0x5f, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1c3e, .a=0x8e, .x=0x97, .y=0xf0, .sp=0x5f, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x1c3d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1c3d, .value=0xed, .type=IO_READ},
        {.addr=0x1c3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025E) {
    const struct CPU_State initial_cpu = {.pc=0xeac1, .a=0xd7, .x=0x70, .y=0xc5, .sp=0xdb, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xeac1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xeac2, .a=0xd7, .x=0x70, .y=0xc5, .sp=0xdb, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xeac1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeac1, .value=0xed, .type=IO_READ},
        {.addr=0xeac2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_025F) {
    const struct CPU_State initial_cpu = {.pc=0xb0e4, .a=0x41, .x=0x22, .y=0xe1, .sp=0x53, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb0e5, .a=0x41, .x=0x22, .y=0xe1, .sp=0x53, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb0e4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb0e4, .value=0xed, .type=IO_READ},
        {.addr=0xb0e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0260) {
    const struct CPU_State initial_cpu = {.pc=0x23f2, .a=0xe1, .x=0x91, .y=0x22, .sp=0x2f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x23f2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x23f3, .a=0xe1, .x=0x91, .y=0x22, .sp=0x2f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x23f2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x23f2, .value=0xed, .type=IO_READ},
        {.addr=0x23f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0261) {
    const struct CPU_State initial_cpu = {.pc=0x0a81, .a=0xb5, .x=0x58, .y=0x46, .sp=0x5d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0a81, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0a82, .a=0xb5, .x=0x58, .y=0x46, .sp=0x5d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0a81, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0a81, .value=0xed, .type=IO_READ},
        {.addr=0x0a82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0262) {
    const struct CPU_State initial_cpu = {.pc=0xd58a, .a=0xea, .x=0x4e, .y=0x62, .sp=0x1d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd58a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd58b, .a=0xea, .x=0x4e, .y=0x62, .sp=0x1d, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xd58a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd58a, .value=0xed, .type=IO_READ},
        {.addr=0xd58b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0263) {
    const struct CPU_State initial_cpu = {.pc=0xdf22, .a=0x49, .x=0xd7, .y=0x35, .sp=0x29, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf22, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdf23, .a=0x49, .x=0xd7, .y=0x35, .sp=0x29, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xdf22, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdf22, .value=0xed, .type=IO_READ},
        {.addr=0xdf23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0264) {
    const struct CPU_State initial_cpu = {.pc=0x7f79, .a=0x06, .x=0x46, .y=0x1b, .sp=0xf3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7f79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7f7a, .a=0x06, .x=0x46, .y=0x1b, .sp=0xf3, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x7f79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7f79, .value=0xed, .type=IO_READ},
        {.addr=0x7f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0265) {
    const struct CPU_State initial_cpu = {.pc=0xefa5, .a=0xe8, .x=0xbe, .y=0xd7, .sp=0x20, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xefa5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xefa6, .a=0xe8, .x=0xbe, .y=0xd7, .sp=0x20, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xefa5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xefa5, .value=0xed, .type=IO_READ},
        {.addr=0xefa6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0266) {
    const struct CPU_State initial_cpu = {.pc=0x61c7, .a=0x5f, .x=0x46, .y=0xc3, .sp=0xf3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x61c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x61c8, .a=0x5f, .x=0x46, .y=0xc3, .sp=0xf3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x61c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x61c7, .value=0xed, .type=IO_READ},
        {.addr=0x61c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf96f, .a=0xd7, .x=0xe5, .y=0xb4, .sp=0x16, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xf96f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf970, .a=0xd7, .x=0xe5, .y=0xb4, .sp=0x16, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xf96f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf96f, .value=0xed, .type=IO_READ},
        {.addr=0xf970, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0268) {
    const struct CPU_State initial_cpu = {.pc=0x3ce9, .a=0x04, .x=0xc6, .y=0x27, .sp=0xb8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3ce9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3cea, .a=0x04, .x=0xc6, .y=0x27, .sp=0xb8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x3ce9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3ce9, .value=0xed, .type=IO_READ},
        {.addr=0x3cea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0269) {
    const struct CPU_State initial_cpu = {.pc=0x31c3, .a=0xd4, .x=0x99, .y=0xb9, .sp=0xe7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x31c3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x31c4, .a=0xd4, .x=0x99, .y=0xb9, .sp=0xe7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x31c3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x31c3, .value=0xed, .type=IO_READ},
        {.addr=0x31c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026A) {
    const struct CPU_State initial_cpu = {.pc=0x6177, .a=0xe0, .x=0xc2, .y=0x1e, .sp=0x57, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6177, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6178, .a=0xe0, .x=0xc2, .y=0x1e, .sp=0x57, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6177, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6177, .value=0xed, .type=IO_READ},
        {.addr=0x6178, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026B) {
    const struct CPU_State initial_cpu = {.pc=0x6a9b, .a=0xb5, .x=0x81, .y=0xb4, .sp=0xa9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6a9c, .a=0xb5, .x=0x81, .y=0xb4, .sp=0xa9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6a9b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6a9b, .value=0xed, .type=IO_READ},
        {.addr=0x6a9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026C) {
    const struct CPU_State initial_cpu = {.pc=0xb35f, .a=0xe3, .x=0x1d, .y=0xdf, .sp=0x93, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb35f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb360, .a=0xe3, .x=0x1d, .y=0xdf, .sp=0x93, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xb35f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb35f, .value=0xed, .type=IO_READ},
        {.addr=0xb360, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026D) {
    const struct CPU_State initial_cpu = {.pc=0x7a3e, .a=0xf2, .x=0xd2, .y=0x6f, .sp=0x78, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7a3e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7a3f, .a=0xf2, .x=0xd2, .y=0x6f, .sp=0x78, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7a3e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7a3e, .value=0xed, .type=IO_READ},
        {.addr=0x7a3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026E) {
    const struct CPU_State initial_cpu = {.pc=0x1516, .a=0x3f, .x=0x2d, .y=0x35, .sp=0x83, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1516, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1517, .a=0x3f, .x=0x2d, .y=0x35, .sp=0x83, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1516, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1516, .value=0xed, .type=IO_READ},
        {.addr=0x1517, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_026F) {
    const struct CPU_State initial_cpu = {.pc=0xca4b, .a=0xb8, .x=0x86, .y=0x60, .sp=0x90, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xca4b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xca4c, .a=0xb8, .x=0x86, .y=0x60, .sp=0x90, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xca4b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xca4b, .value=0xed, .type=IO_READ},
        {.addr=0xca4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0270) {
    const struct CPU_State initial_cpu = {.pc=0x6dbb, .a=0x26, .x=0xae, .y=0xca, .sp=0xbf, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6dbb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6dbc, .a=0x26, .x=0xae, .y=0xca, .sp=0xbf, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6dbb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6dbb, .value=0xed, .type=IO_READ},
        {.addr=0x6dbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0271) {
    const struct CPU_State initial_cpu = {.pc=0xfa28, .a=0xa7, .x=0x8f, .y=0x77, .sp=0xea, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xfa28, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfa29, .a=0xa7, .x=0x8f, .y=0x77, .sp=0xea, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfa28, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfa28, .value=0xed, .type=IO_READ},
        {.addr=0xfa29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0272) {
    const struct CPU_State initial_cpu = {.pc=0x31bd, .a=0xdd, .x=0x3a, .y=0x68, .sp=0x1d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x31bd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x31be, .a=0xdd, .x=0x3a, .y=0x68, .sp=0x1d, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x31bd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x31bd, .value=0xed, .type=IO_READ},
        {.addr=0x31be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0273) {
    const struct CPU_State initial_cpu = {.pc=0xd207, .a=0x23, .x=0xc8, .y=0x60, .sp=0x80, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xd207, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd208, .a=0x23, .x=0xc8, .y=0x60, .sp=0x80, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd207, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd207, .value=0xed, .type=IO_READ},
        {.addr=0xd208, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0274) {
    const struct CPU_State initial_cpu = {.pc=0x26e0, .a=0xa9, .x=0x59, .y=0xae, .sp=0x99, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x26e0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x26e1, .a=0xa9, .x=0x59, .y=0xae, .sp=0x99, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x26e0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x26e0, .value=0xed, .type=IO_READ},
        {.addr=0x26e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0275) {
    const struct CPU_State initial_cpu = {.pc=0x65db, .a=0xcd, .x=0xb8, .y=0x96, .sp=0x9f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x65db, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x65dc, .a=0xcd, .x=0xb8, .y=0x96, .sp=0x9f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x65db, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x65db, .value=0xed, .type=IO_READ},
        {.addr=0x65dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9b68, .a=0x45, .x=0xed, .y=0x37, .sp=0xbc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9b68, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9b69, .a=0x45, .x=0xed, .y=0x37, .sp=0xbc, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x9b68, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9b68, .value=0xed, .type=IO_READ},
        {.addr=0x9b69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0277) {
    const struct CPU_State initial_cpu = {.pc=0xfe82, .a=0x2a, .x=0x59, .y=0xb6, .sp=0xfc, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xfe82, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfe83, .a=0x2a, .x=0x59, .y=0xb6, .sp=0xfc, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xfe82, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfe82, .value=0xed, .type=IO_READ},
        {.addr=0xfe83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0278) {
    const struct CPU_State initial_cpu = {.pc=0x798c, .a=0xc3, .x=0xc0, .y=0x5c, .sp=0x9d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x798c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x798d, .a=0xc3, .x=0xc0, .y=0x5c, .sp=0x9d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x798c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x798c, .value=0xed, .type=IO_READ},
        {.addr=0x798d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0279) {
    const struct CPU_State initial_cpu = {.pc=0x6923, .a=0xcb, .x=0xb7, .y=0xc7, .sp=0xd0, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6923, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6924, .a=0xcb, .x=0xb7, .y=0xc7, .sp=0xd0, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x6923, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6923, .value=0xed, .type=IO_READ},
        {.addr=0x6924, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027A) {
    const struct CPU_State initial_cpu = {.pc=0x8cbf, .a=0x08, .x=0x3c, .y=0xda, .sp=0xe3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8cbf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8cc0, .a=0x08, .x=0x3c, .y=0xda, .sp=0xe3, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8cbf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8cbf, .value=0xed, .type=IO_READ},
        {.addr=0x8cc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027B) {
    const struct CPU_State initial_cpu = {.pc=0x1fb2, .a=0x02, .x=0xa4, .y=0xb3, .sp=0x81, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1fb2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1fb3, .a=0x02, .x=0xa4, .y=0xb3, .sp=0x81, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1fb2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1fb2, .value=0xed, .type=IO_READ},
        {.addr=0x1fb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027C) {
    const struct CPU_State initial_cpu = {.pc=0xc277, .a=0x8c, .x=0xf5, .y=0x2f, .sp=0xc8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc277, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc278, .a=0x8c, .x=0xf5, .y=0x2f, .sp=0xc8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc277, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc277, .value=0xed, .type=IO_READ},
        {.addr=0xc278, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027D) {
    const struct CPU_State initial_cpu = {.pc=0x7761, .a=0x69, .x=0x4f, .y=0x8c, .sp=0x12, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7761, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7762, .a=0x69, .x=0x4f, .y=0x8c, .sp=0x12, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x7761, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7761, .value=0xed, .type=IO_READ},
        {.addr=0x7762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027E) {
    const struct CPU_State initial_cpu = {.pc=0x86bb, .a=0x48, .x=0x75, .y=0x65, .sp=0x01, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x86bb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x86bc, .a=0x48, .x=0x75, .y=0x65, .sp=0x01, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x86bb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x86bb, .value=0xed, .type=IO_READ},
        {.addr=0x86bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_027F) {
    const struct CPU_State initial_cpu = {.pc=0xa652, .a=0x2f, .x=0x3b, .y=0x5f, .sp=0x58, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa652, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa653, .a=0x2f, .x=0x3b, .y=0x5f, .sp=0x58, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa652, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa652, .value=0xed, .type=IO_READ},
        {.addr=0xa653, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0280) {
    const struct CPU_State initial_cpu = {.pc=0x0308, .a=0xae, .x=0x39, .y=0x54, .sp=0x2d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0308, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0309, .a=0xae, .x=0x39, .y=0x54, .sp=0x2d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0308, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0308, .value=0xed, .type=IO_READ},
        {.addr=0x0309, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0281) {
    const struct CPU_State initial_cpu = {.pc=0x720a, .a=0x89, .x=0xe5, .y=0xcd, .sp=0x01, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x720a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x720b, .a=0x89, .x=0xe5, .y=0xcd, .sp=0x01, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x720a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x720a, .value=0xed, .type=IO_READ},
        {.addr=0x720b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0282) {
    const struct CPU_State initial_cpu = {.pc=0x6b95, .a=0x1b, .x=0x18, .y=0x3e, .sp=0xd5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6b95, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6b96, .a=0x1b, .x=0x18, .y=0x3e, .sp=0xd5, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6b95, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6b95, .value=0xed, .type=IO_READ},
        {.addr=0x6b96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0283) {
    const struct CPU_State initial_cpu = {.pc=0x144a, .a=0xa3, .x=0x8b, .y=0x2f, .sp=0xc6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x144a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x144b, .a=0xa3, .x=0x8b, .y=0x2f, .sp=0xc6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x144a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x144a, .value=0xed, .type=IO_READ},
        {.addr=0x144b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0284) {
    const struct CPU_State initial_cpu = {.pc=0x798e, .a=0xfb, .x=0x20, .y=0xca, .sp=0xac, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x798e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x798f, .a=0xfb, .x=0x20, .y=0xca, .sp=0xac, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x798e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x798e, .value=0xed, .type=IO_READ},
        {.addr=0x798f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0285) {
    const struct CPU_State initial_cpu = {.pc=0xaa62, .a=0xd1, .x=0x52, .y=0xaf, .sp=0x27, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xaa62, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaa63, .a=0xd1, .x=0x52, .y=0xaf, .sp=0x27, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xaa62, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaa62, .value=0xed, .type=IO_READ},
        {.addr=0xaa63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0286) {
    const struct CPU_State initial_cpu = {.pc=0xf460, .a=0xba, .x=0xd8, .y=0xa6, .sp=0xef, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf460, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf461, .a=0xba, .x=0xd8, .y=0xa6, .sp=0xef, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf460, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf460, .value=0xed, .type=IO_READ},
        {.addr=0xf461, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0287) {
    const struct CPU_State initial_cpu = {.pc=0x75d0, .a=0x42, .x=0xa2, .y=0x2a, .sp=0x45, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x75d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x75d1, .a=0x42, .x=0xa2, .y=0x2a, .sp=0x45, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x75d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x75d0, .value=0xed, .type=IO_READ},
        {.addr=0x75d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0288) {
    const struct CPU_State initial_cpu = {.pc=0x1517, .a=0x37, .x=0xbc, .y=0x16, .sp=0x61, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1517, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1518, .a=0x37, .x=0xbc, .y=0x16, .sp=0x61, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1517, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1517, .value=0xed, .type=IO_READ},
        {.addr=0x1518, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3dca, .a=0xa8, .x=0x81, .y=0xbc, .sp=0x97, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3dca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3dcb, .a=0xa8, .x=0x81, .y=0xbc, .sp=0x97, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3dca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3dca, .value=0xed, .type=IO_READ},
        {.addr=0x3dcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028A) {
    const struct CPU_State initial_cpu = {.pc=0xbd8e, .a=0xe1, .x=0xe5, .y=0xc0, .sp=0x91, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbd8f, .a=0xe1, .x=0xe5, .y=0xc0, .sp=0x91, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xbd8e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbd8e, .value=0xed, .type=IO_READ},
        {.addr=0xbd8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028B) {
    const struct CPU_State initial_cpu = {.pc=0x58c1, .a=0x7a, .x=0xf8, .y=0x97, .sp=0xc0, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x58c1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x58c2, .a=0x7a, .x=0xf8, .y=0x97, .sp=0xc0, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x58c1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x58c1, .value=0xed, .type=IO_READ},
        {.addr=0x58c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028C) {
    const struct CPU_State initial_cpu = {.pc=0x7240, .a=0x48, .x=0x96, .y=0xa8, .sp=0xd3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7240, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7241, .a=0x48, .x=0x96, .y=0xa8, .sp=0xd3, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7240, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7240, .value=0xed, .type=IO_READ},
        {.addr=0x7241, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028D) {
    const struct CPU_State initial_cpu = {.pc=0x2b4b, .a=0x5a, .x=0xa5, .y=0x81, .sp=0x7b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x2b4b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2b4c, .a=0x5a, .x=0xa5, .y=0x81, .sp=0x7b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x2b4b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2b4b, .value=0xed, .type=IO_READ},
        {.addr=0x2b4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028E) {
    const struct CPU_State initial_cpu = {.pc=0xc820, .a=0x9b, .x=0x7b, .y=0xed, .sp=0x71, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc820, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc821, .a=0x9b, .x=0x7b, .y=0xed, .sp=0x71, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc820, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc820, .value=0xed, .type=IO_READ},
        {.addr=0xc821, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_028F) {
    const struct CPU_State initial_cpu = {.pc=0x3340, .a=0x58, .x=0xa8, .y=0x12, .sp=0x25, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3340, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3341, .a=0x58, .x=0xa8, .y=0x12, .sp=0x25, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3340, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3340, .value=0xed, .type=IO_READ},
        {.addr=0x3341, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0290) {
    const struct CPU_State initial_cpu = {.pc=0xdb0f, .a=0xb9, .x=0x51, .y=0xa5, .sp=0x17, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xdb0f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdb10, .a=0xb9, .x=0x51, .y=0xa5, .sp=0x17, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdb0f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdb0f, .value=0xed, .type=IO_READ},
        {.addr=0xdb10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0291) {
    const struct CPU_State initial_cpu = {.pc=0xe055, .a=0x9a, .x=0x97, .y=0x7a, .sp=0x47, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe055, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe056, .a=0x9a, .x=0x97, .y=0x7a, .sp=0x47, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe055, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe055, .value=0xed, .type=IO_READ},
        {.addr=0xe056, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0292) {
    const struct CPU_State initial_cpu = {.pc=0x58d5, .a=0x30, .x=0x58, .y=0x94, .sp=0x24, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x58d5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x58d6, .a=0x30, .x=0x58, .y=0x94, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x58d5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x58d5, .value=0xed, .type=IO_READ},
        {.addr=0x58d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0293) {
    const struct CPU_State initial_cpu = {.pc=0x855d, .a=0x9e, .x=0x52, .y=0x52, .sp=0x0b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x855d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x855e, .a=0x9e, .x=0x52, .y=0x52, .sp=0x0b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x855d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x855d, .value=0xed, .type=IO_READ},
        {.addr=0x855e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6c3b, .a=0x2f, .x=0x99, .y=0xf2, .sp=0x48, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6c3b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6c3c, .a=0x2f, .x=0x99, .y=0xf2, .sp=0x48, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6c3b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6c3b, .value=0xed, .type=IO_READ},
        {.addr=0x6c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0295) {
    const struct CPU_State initial_cpu = {.pc=0xade4, .a=0xbc, .x=0x03, .y=0x33, .sp=0xc5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xade4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xade5, .a=0xbc, .x=0x03, .y=0x33, .sp=0xc5, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xade4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xade4, .value=0xed, .type=IO_READ},
        {.addr=0xade5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0296) {
    const struct CPU_State initial_cpu = {.pc=0xfe93, .a=0x19, .x=0x08, .y=0x8f, .sp=0x2e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfe93, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfe94, .a=0x19, .x=0x08, .y=0x8f, .sp=0x2e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xfe93, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfe93, .value=0xed, .type=IO_READ},
        {.addr=0xfe94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0297) {
    const struct CPU_State initial_cpu = {.pc=0x2e2c, .a=0xcd, .x=0x3b, .y=0xa9, .sp=0x71, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2e2c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2e2d, .a=0xcd, .x=0x3b, .y=0xa9, .sp=0x71, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2e2c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2e2c, .value=0xed, .type=IO_READ},
        {.addr=0x2e2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0298) {
    const struct CPU_State initial_cpu = {.pc=0x2663, .a=0xa2, .x=0x65, .y=0xf0, .sp=0x71, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2663, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2664, .a=0xa2, .x=0x65, .y=0xf0, .sp=0x71, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2663, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2663, .value=0xed, .type=IO_READ},
        {.addr=0x2664, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0299) {
    const struct CPU_State initial_cpu = {.pc=0xf53c, .a=0x1d, .x=0x51, .y=0xf2, .sp=0x71, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf53c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf53d, .a=0x1d, .x=0x51, .y=0xf2, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf53c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf53c, .value=0xed, .type=IO_READ},
        {.addr=0xf53d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029A) {
    const struct CPU_State initial_cpu = {.pc=0xbf65, .a=0x57, .x=0xd3, .y=0x1d, .sp=0xd3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xbf65, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbf66, .a=0x57, .x=0xd3, .y=0x1d, .sp=0xd3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xbf65, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbf65, .value=0xed, .type=IO_READ},
        {.addr=0xbf66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029B) {
    const struct CPU_State initial_cpu = {.pc=0xf91d, .a=0xb0, .x=0xd6, .y=0x82, .sp=0xe6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf91d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf91e, .a=0xb0, .x=0xd6, .y=0x82, .sp=0xe6, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xf91d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf91d, .value=0xed, .type=IO_READ},
        {.addr=0xf91e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc12b, .a=0xd7, .x=0xaf, .y=0xd8, .sp=0x63, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc12b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc12c, .a=0xd7, .x=0xaf, .y=0xd8, .sp=0x63, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc12b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc12b, .value=0xed, .type=IO_READ},
        {.addr=0xc12c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029D) {
    const struct CPU_State initial_cpu = {.pc=0x6a53, .a=0xfd, .x=0x62, .y=0xac, .sp=0x7a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6a53, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6a54, .a=0xfd, .x=0x62, .y=0xac, .sp=0x7a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x6a53, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6a53, .value=0xed, .type=IO_READ},
        {.addr=0x6a54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa8fd, .a=0x42, .x=0x68, .y=0x2b, .sp=0x62, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8fe, .a=0x42, .x=0x68, .y=0x2b, .sp=0x62, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xa8fd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8fd, .value=0xed, .type=IO_READ},
        {.addr=0xa8fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_029F) {
    const struct CPU_State initial_cpu = {.pc=0x8226, .a=0x1a, .x=0x06, .y=0x47, .sp=0x6e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8226, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8227, .a=0x1a, .x=0x06, .y=0x47, .sp=0x6e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x8226, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8226, .value=0xed, .type=IO_READ},
        {.addr=0x8227, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd8f3, .a=0x36, .x=0x6c, .y=0x27, .sp=0xaf, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd8f4, .a=0x36, .x=0x6c, .y=0x27, .sp=0xaf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd8f3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd8f3, .value=0xed, .type=IO_READ},
        {.addr=0xd8f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xbd79, .a=0x96, .x=0x14, .y=0xb8, .sp=0x59, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xbd79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbd7a, .a=0x96, .x=0x14, .y=0xb8, .sp=0x59, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xbd79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbd79, .value=0xed, .type=IO_READ},
        {.addr=0xbd7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x44eb, .a=0x0a, .x=0x04, .y=0x34, .sp=0x20, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x44eb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x44ec, .a=0x0a, .x=0x04, .y=0x34, .sp=0x20, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x44eb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x44eb, .value=0xed, .type=IO_READ},
        {.addr=0x44ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x3e6b, .a=0x43, .x=0x2f, .y=0x30, .sp=0x55, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3e6b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3e6c, .a=0x43, .x=0x2f, .y=0x30, .sp=0x55, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3e6b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3e6b, .value=0xed, .type=IO_READ},
        {.addr=0x3e6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xde98, .a=0x52, .x=0xa5, .y=0x1c, .sp=0xcf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xde98, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde99, .a=0x52, .x=0xa5, .y=0x1c, .sp=0xcf, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xde98, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde98, .value=0xed, .type=IO_READ},
        {.addr=0xde99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x7cfd, .a=0xe3, .x=0x19, .y=0x6e, .sp=0x90, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7cfd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7cfe, .a=0xe3, .x=0x19, .y=0x6e, .sp=0x90, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7cfd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7cfd, .value=0xed, .type=IO_READ},
        {.addr=0x7cfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd4d6, .a=0x58, .x=0x15, .y=0x02, .sp=0xa7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd4d7, .a=0x58, .x=0x15, .y=0x02, .sp=0xa7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd4d6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd4d6, .value=0xed, .type=IO_READ},
        {.addr=0xd4d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x0cf6, .a=0xda, .x=0x0c, .y=0x90, .sp=0xac, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0cf7, .a=0xda, .x=0x0c, .y=0x90, .sp=0xac, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0cf6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0cf6, .value=0xed, .type=IO_READ},
        {.addr=0x0cf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x8f0f, .a=0xe2, .x=0x25, .y=0x69, .sp=0xe1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8f0f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8f10, .a=0xe2, .x=0x25, .y=0x69, .sp=0xe1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x8f0f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8f0f, .value=0xed, .type=IO_READ},
        {.addr=0x8f10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x9fd7, .a=0xf7, .x=0xca, .y=0x97, .sp=0x7d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9fd7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9fd8, .a=0xf7, .x=0xca, .y=0x97, .sp=0x7d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9fd7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9fd7, .value=0xed, .type=IO_READ},
        {.addr=0x9fd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb25b, .a=0xfe, .x=0xaf, .y=0x84, .sp=0x47, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xb25b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb25c, .a=0xfe, .x=0xaf, .y=0x84, .sp=0x47, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb25b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb25b, .value=0xed, .type=IO_READ},
        {.addr=0xb25c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xfa6e, .a=0x0a, .x=0x3a, .y=0xb1, .sp=0x15, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfa6e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfa6f, .a=0x0a, .x=0x3a, .y=0xb1, .sp=0x15, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xfa6e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfa6e, .value=0xed, .type=IO_READ},
        {.addr=0xfa6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xa1be, .a=0x04, .x=0x06, .y=0xc2, .sp=0xe3, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa1be, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa1bf, .a=0x04, .x=0x06, .y=0xc2, .sp=0xe3, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa1be, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa1be, .value=0xed, .type=IO_READ},
        {.addr=0xa1bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xea4b, .a=0x23, .x=0x35, .y=0x8f, .sp=0x02, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xea4b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xea4c, .a=0x23, .x=0x35, .y=0x8f, .sp=0x02, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xea4b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xea4b, .value=0xed, .type=IO_READ},
        {.addr=0xea4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xecc9, .a=0xef, .x=0x9d, .y=0x1a, .sp=0x1b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xecc9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xecca, .a=0xef, .x=0x9d, .y=0x1a, .sp=0x1b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xecc9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xecc9, .value=0xed, .type=IO_READ},
        {.addr=0xecca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x8b66, .a=0x6c, .x=0x8a, .y=0x6a, .sp=0x48, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b66, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8b67, .a=0x6c, .x=0x8a, .y=0x6a, .sp=0x48, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8b66, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8b66, .value=0xed, .type=IO_READ},
        {.addr=0x8b67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x1677, .a=0x6c, .x=0xe6, .y=0xc9, .sp=0xb3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1677, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1678, .a=0x6c, .x=0xe6, .y=0xc9, .sp=0xb3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1677, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1677, .value=0xed, .type=IO_READ},
        {.addr=0x1678, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x2832, .a=0xae, .x=0x08, .y=0xb5, .sp=0x9e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2832, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2833, .a=0xae, .x=0x08, .y=0xb5, .sp=0x9e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2832, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2832, .value=0xed, .type=IO_READ},
        {.addr=0x2833, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xc61d, .a=0x7a, .x=0x3b, .y=0x81, .sp=0x51, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc61d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc61e, .a=0x7a, .x=0x3b, .y=0x81, .sp=0x51, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc61d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc61d, .value=0xed, .type=IO_READ},
        {.addr=0xc61e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x2a28, .a=0x5d, .x=0x9b, .y=0xc8, .sp=0x7d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a28, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a29, .a=0x5d, .x=0x9b, .y=0xc8, .sp=0x7d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2a28, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a28, .value=0xed, .type=IO_READ},
        {.addr=0x2a29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xcca1, .a=0x15, .x=0x98, .y=0x43, .sp=0x80, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xcca1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcca2, .a=0x15, .x=0x98, .y=0x43, .sp=0x80, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcca1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcca1, .value=0xed, .type=IO_READ},
        {.addr=0xcca2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xb720, .a=0x70, .x=0x27, .y=0x4a, .sp=0x94, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb720, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb721, .a=0x70, .x=0x27, .y=0x4a, .sp=0x94, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb720, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb720, .value=0xed, .type=IO_READ},
        {.addr=0xb721, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x8c0d, .a=0x7b, .x=0x60, .y=0x38, .sp=0x10, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8c0d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c0e, .a=0x7b, .x=0x60, .y=0x38, .sp=0x10, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x8c0d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c0d, .value=0xed, .type=IO_READ},
        {.addr=0x8c0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x15c8, .a=0x1a, .x=0x23, .y=0x2f, .sp=0x66, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x15c8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15c9, .a=0x1a, .x=0x23, .y=0x2f, .sp=0x66, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x15c8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15c8, .value=0xed, .type=IO_READ},
        {.addr=0x15c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xd7f3, .a=0x2c, .x=0xcf, .y=0xb0, .sp=0x57, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd7f4, .a=0x2c, .x=0xcf, .y=0xb0, .sp=0x57, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd7f3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd7f3, .value=0xed, .type=IO_READ},
        {.addr=0xd7f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xc144, .a=0x06, .x=0x14, .y=0x99, .sp=0xcd, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc144, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc145, .a=0x06, .x=0x14, .y=0x99, .sp=0xcd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc144, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc144, .value=0xed, .type=IO_READ},
        {.addr=0xc145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x0597, .a=0xc2, .x=0x14, .y=0x46, .sp=0x44, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0597, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0598, .a=0xc2, .x=0x14, .y=0x46, .sp=0x44, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0597, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0597, .value=0xed, .type=IO_READ},
        {.addr=0x0598, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc9d1, .a=0x84, .x=0x75, .y=0x9e, .sp=0x9c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xc9d1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc9d2, .a=0x84, .x=0x75, .y=0x9e, .sp=0x9c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc9d1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc9d1, .value=0xed, .type=IO_READ},
        {.addr=0xc9d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5518, .a=0x98, .x=0x91, .y=0x95, .sp=0x3b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5518, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5519, .a=0x98, .x=0x91, .y=0x95, .sp=0x3b, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x5518, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5518, .value=0xed, .type=IO_READ},
        {.addr=0x5519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x7d03, .a=0x44, .x=0x0f, .y=0x65, .sp=0x34, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7d03, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7d04, .a=0x44, .x=0x0f, .y=0x65, .sp=0x34, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7d03, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7d03, .value=0xed, .type=IO_READ},
        {.addr=0x7d04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xf1aa, .a=0x7b, .x=0xf5, .y=0xe2, .sp=0xcf, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf1aa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf1ab, .a=0x7b, .x=0xf5, .y=0xe2, .sp=0xcf, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xf1aa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf1aa, .value=0xed, .type=IO_READ},
        {.addr=0xf1ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xa347, .a=0x71, .x=0xe0, .y=0xc5, .sp=0x0c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa347, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa348, .a=0x71, .x=0xe0, .y=0xc5, .sp=0x0c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa347, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa347, .value=0xed, .type=IO_READ},
        {.addr=0xa348, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x6757, .a=0x97, .x=0xc3, .y=0xc4, .sp=0xe7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6757, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6758, .a=0x97, .x=0xc3, .y=0xc4, .sp=0xe7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x6757, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6757, .value=0xed, .type=IO_READ},
        {.addr=0x6758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xef54, .a=0x2c, .x=0x44, .y=0xc5, .sp=0x9e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xef54, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xef55, .a=0x2c, .x=0x44, .y=0xc5, .sp=0x9e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xef54, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xef54, .value=0xed, .type=IO_READ},
        {.addr=0xef55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x451f, .a=0x79, .x=0x67, .y=0xc2, .sp=0x50, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x451f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4520, .a=0x79, .x=0x67, .y=0xc2, .sp=0x50, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x451f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x451f, .value=0xed, .type=IO_READ},
        {.addr=0x4520, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xba71, .a=0xc9, .x=0x9f, .y=0x44, .sp=0x82, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xba71, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xba72, .a=0xc9, .x=0x9f, .y=0x44, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xba71, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xba71, .value=0xed, .type=IO_READ},
        {.addr=0xba72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xd344, .a=0xd7, .x=0x6d, .y=0x83, .sp=0x50, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd344, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd345, .a=0xd7, .x=0x6d, .y=0x83, .sp=0x50, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xd344, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd344, .value=0xed, .type=IO_READ},
        {.addr=0xd345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2411, .a=0xa4, .x=0x00, .y=0x21, .sp=0xe4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2411, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2412, .a=0xa4, .x=0x00, .y=0x21, .sp=0xe4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2411, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2411, .value=0xed, .type=IO_READ},
        {.addr=0x2412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xc16a, .a=0x43, .x=0xfe, .y=0xd2, .sp=0x84, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc16a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc16b, .a=0x43, .x=0xfe, .y=0xd2, .sp=0x84, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xc16a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc16a, .value=0xed, .type=IO_READ},
        {.addr=0xc16b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9239, .a=0x8c, .x=0xf5, .y=0x49, .sp=0x43, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9239, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x923a, .a=0x8c, .x=0xf5, .y=0x49, .sp=0x43, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9239, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9239, .value=0xed, .type=IO_READ},
        {.addr=0x923a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x42a2, .a=0xf5, .x=0xa5, .y=0x46, .sp=0x23, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x42a2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x42a3, .a=0xf5, .x=0xa5, .y=0x46, .sp=0x23, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x42a2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x42a2, .value=0xed, .type=IO_READ},
        {.addr=0x42a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x56f3, .a=0xac, .x=0x76, .y=0x4c, .sp=0x08, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x56f3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x56f4, .a=0xac, .x=0x76, .y=0x4c, .sp=0x08, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x56f3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x56f3, .value=0xed, .type=IO_READ},
        {.addr=0x56f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x6fac, .a=0xe5, .x=0x29, .y=0xa9, .sp=0x6e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x6fac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6fad, .a=0xe5, .x=0x29, .y=0xa9, .sp=0x6e, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6fac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6fac, .value=0xed, .type=IO_READ},
        {.addr=0x6fad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xc698, .a=0xd3, .x=0x77, .y=0xb3, .sp=0xd9, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc698, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc699, .a=0xd3, .x=0x77, .y=0xb3, .sp=0xd9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc698, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc698, .value=0xed, .type=IO_READ},
        {.addr=0xc699, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xd11e, .a=0x50, .x=0x99, .y=0x91, .sp=0x66, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xd11e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd11f, .a=0x50, .x=0x99, .y=0x91, .sp=0x66, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xd11e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd11e, .value=0xed, .type=IO_READ},
        {.addr=0xd11f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x71a5, .a=0xd7, .x=0x56, .y=0xca, .sp=0xc4, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x71a5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x71a6, .a=0xd7, .x=0x56, .y=0xca, .sp=0xc4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x71a5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x71a5, .value=0xed, .type=IO_READ},
        {.addr=0x71a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x38c9, .a=0x91, .x=0x22, .y=0x70, .sp=0x2f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x38c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x38ca, .a=0x91, .x=0x22, .y=0x70, .sp=0x2f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x38c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x38c9, .value=0xed, .type=IO_READ},
        {.addr=0x38ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xafa4, .a=0xa8, .x=0x9f, .y=0x4c, .sp=0x6c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xafa4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xafa5, .a=0xa8, .x=0x9f, .y=0x4c, .sp=0x6c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xafa4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xafa4, .value=0xed, .type=IO_READ},
        {.addr=0xafa5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x31db, .a=0xbf, .x=0xe5, .y=0x31, .sp=0x4d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x31db, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x31dc, .a=0xbf, .x=0xe5, .y=0x31, .sp=0x4d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x31db, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x31db, .value=0xed, .type=IO_READ},
        {.addr=0x31dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x267e, .a=0x3b, .x=0x5b, .y=0x2c, .sp=0xce, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x267e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x267f, .a=0x3b, .x=0x5b, .y=0x2c, .sp=0xce, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x267e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x267e, .value=0xed, .type=IO_READ},
        {.addr=0x267f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xfb79, .a=0x18, .x=0xb5, .y=0xee, .sp=0xba, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfb79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfb7a, .a=0x18, .x=0xb5, .y=0xee, .sp=0xba, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfb79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfb79, .value=0xed, .type=IO_READ},
        {.addr=0xfb7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x0dae, .a=0xd7, .x=0xbb, .y=0x4c, .sp=0x6d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0dae, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0daf, .a=0xd7, .x=0xbb, .y=0x4c, .sp=0x6d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0dae, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0dae, .value=0xed, .type=IO_READ},
        {.addr=0x0daf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x90bb, .a=0x73, .x=0xd5, .y=0xf4, .sp=0x66, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x90bb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x90bc, .a=0x73, .x=0xd5, .y=0xf4, .sp=0x66, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x90bb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x90bb, .value=0xed, .type=IO_READ},
        {.addr=0x90bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xa56e, .a=0x50, .x=0xc9, .y=0x73, .sp=0x5f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa56e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa56f, .a=0x50, .x=0xc9, .y=0x73, .sp=0x5f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa56e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa56e, .value=0xed, .type=IO_READ},
        {.addr=0xa56f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x6699, .a=0x5e, .x=0x06, .y=0x39, .sp=0x06, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6699, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x669a, .a=0x5e, .x=0x06, .y=0x39, .sp=0x06, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6699, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6699, .value=0xed, .type=IO_READ},
        {.addr=0x669a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x059e, .a=0x6f, .x=0x35, .y=0x9a, .sp=0xb8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x059e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x059f, .a=0x6f, .x=0x35, .y=0x9a, .sp=0xb8, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x059e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x059e, .value=0xed, .type=IO_READ},
        {.addr=0x059f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x8923, .a=0x88, .x=0x60, .y=0x9a, .sp=0xd1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8923, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8924, .a=0x88, .x=0x60, .y=0x9a, .sp=0xd1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8923, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8923, .value=0xed, .type=IO_READ},
        {.addr=0x8924, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xcd72, .a=0x23, .x=0x63, .y=0x58, .sp=0x52, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xcd72, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcd73, .a=0x23, .x=0x63, .y=0x58, .sp=0x52, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcd72, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcd72, .value=0xed, .type=IO_READ},
        {.addr=0xcd73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x6a3d, .a=0x40, .x=0xd7, .y=0xf4, .sp=0x3f, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6a3e, .a=0x40, .x=0xd7, .y=0xf4, .sp=0x3f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x6a3d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6a3d, .value=0xed, .type=IO_READ},
        {.addr=0x6a3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xc37d, .a=0xb6, .x=0x80, .y=0x4c, .sp=0xe1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xc37d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc37e, .a=0xb6, .x=0x80, .y=0x4c, .sp=0xe1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xc37d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc37d, .value=0xed, .type=IO_READ},
        {.addr=0xc37e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xdb5d, .a=0x11, .x=0x99, .y=0x66, .sp=0xda, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xdb5d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdb5e, .a=0x11, .x=0x99, .y=0x66, .sp=0xda, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xdb5d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdb5d, .value=0xed, .type=IO_READ},
        {.addr=0xdb5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xd341, .a=0x6d, .x=0x00, .y=0xaf, .sp=0x21, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd341, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd342, .a=0x6d, .x=0x00, .y=0xaf, .sp=0x21, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd341, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd341, .value=0xed, .type=IO_READ},
        {.addr=0xd342, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xac3a, .a=0x12, .x=0x8d, .y=0xea, .sp=0xc5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xac3a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xac3b, .a=0x12, .x=0x8d, .y=0xea, .sp=0xc5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xac3a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xac3a, .value=0xed, .type=IO_READ},
        {.addr=0xac3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x45e9, .a=0xef, .x=0xbf, .y=0x14, .sp=0x10, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x45e9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x45ea, .a=0xef, .x=0xbf, .y=0x14, .sp=0x10, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x45e9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x45e9, .value=0xed, .type=IO_READ},
        {.addr=0x45ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x4f79, .a=0x62, .x=0x48, .y=0x3f, .sp=0xa9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x4f79, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4f7a, .a=0x62, .x=0x48, .y=0x3f, .sp=0xa9, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4f79, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4f79, .value=0xed, .type=IO_READ},
        {.addr=0x4f7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xabfe, .a=0xec, .x=0x57, .y=0x7c, .sp=0xd4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xabfe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xabff, .a=0xec, .x=0x57, .y=0x7c, .sp=0xd4, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xabfe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xabfe, .value=0xed, .type=IO_READ},
        {.addr=0xabff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x5cf2, .a=0xa6, .x=0x2d, .y=0x9f, .sp=0x1b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5cf3, .a=0xa6, .x=0x2d, .y=0x9f, .sp=0x1b, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x5cf2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5cf2, .value=0xed, .type=IO_READ},
        {.addr=0x5cf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x30fc, .a=0x96, .x=0xd6, .y=0xb5, .sp=0x45, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x30fc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x30fd, .a=0x96, .x=0xd6, .y=0xb5, .sp=0x45, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x30fc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x30fc, .value=0xed, .type=IO_READ},
        {.addr=0x30fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xf178, .a=0xe5, .x=0x24, .y=0x31, .sp=0xda, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xf178, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf179, .a=0xe5, .x=0x24, .y=0x31, .sp=0xda, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf178, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf178, .value=0xed, .type=IO_READ},
        {.addr=0xf179, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0x37, .x=0xc0, .y=0x16, .sp=0x54, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9ef7, .a=0x37, .x=0xc0, .y=0x16, .sp=0x54, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9ef6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0xed, .type=IO_READ},
        {.addr=0x9ef7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x7bdb, .a=0x83, .x=0x20, .y=0xdc, .sp=0x38, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7bdb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7bdc, .a=0x83, .x=0x20, .y=0xdc, .sp=0x38, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x7bdb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7bdb, .value=0xed, .type=IO_READ},
        {.addr=0x7bdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xe54b, .a=0x10, .x=0x58, .y=0x11, .sp=0x6f, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xe54b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe54c, .a=0x10, .x=0x58, .y=0x11, .sp=0x6f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe54b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe54b, .value=0xed, .type=IO_READ},
        {.addr=0xe54c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xa3ab, .a=0x3b, .x=0x86, .y=0xea, .sp=0xed, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ab, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa3ac, .a=0x3b, .x=0x86, .y=0xea, .sp=0xed, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xa3ab, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa3ab, .value=0xed, .type=IO_READ},
        {.addr=0xa3ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x8c41, .a=0xfe, .x=0x03, .y=0x39, .sp=0xc7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8c41, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c42, .a=0xfe, .x=0x03, .y=0x39, .sp=0xc7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8c41, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c41, .value=0xed, .type=IO_READ},
        {.addr=0x8c42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x68ee, .a=0xa7, .x=0x3b, .y=0x6e, .sp=0x4e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x68ee, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x68ef, .a=0xa7, .x=0x3b, .y=0x6e, .sp=0x4e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x68ee, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x68ee, .value=0xed, .type=IO_READ},
        {.addr=0x68ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xb831, .a=0xe2, .x=0x64, .y=0x4f, .sp=0xad, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb831, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb832, .a=0xe2, .x=0x64, .y=0x4f, .sp=0xad, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb831, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb831, .value=0xed, .type=IO_READ},
        {.addr=0xb832, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x82f0, .a=0xaf, .x=0x63, .y=0x56, .sp=0xd7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x82f0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x82f1, .a=0xaf, .x=0x63, .y=0x56, .sp=0xd7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x82f0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x82f0, .value=0xed, .type=IO_READ},
        {.addr=0x82f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x8ec9, .a=0xcf, .x=0xdc, .y=0xbb, .sp=0x51, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8eca, .a=0xcf, .x=0xdc, .y=0xbb, .sp=0x51, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8ec9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8ec9, .value=0xed, .type=IO_READ},
        {.addr=0x8eca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xacb0, .a=0x8d, .x=0x4c, .y=0xd4, .sp=0x0c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xacb0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xacb1, .a=0x8d, .x=0x4c, .y=0xd4, .sp=0x0c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xacb0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xacb0, .value=0xed, .type=IO_READ},
        {.addr=0xacb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x58f9, .a=0x42, .x=0x5c, .y=0x88, .sp=0xb8, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x58f9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x58fa, .a=0x42, .x=0x5c, .y=0x88, .sp=0xb8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x58f9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x58f9, .value=0xed, .type=IO_READ},
        {.addr=0x58fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x5ec8, .a=0xce, .x=0xdd, .y=0x7c, .sp=0x2f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5ec9, .a=0xce, .x=0xdd, .y=0x7c, .sp=0x2f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5ec8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5ec8, .value=0xed, .type=IO_READ},
        {.addr=0x5ec9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xa695, .a=0xf3, .x=0x0c, .y=0x34, .sp=0xb9, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa695, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa696, .a=0xf3, .x=0x0c, .y=0x34, .sp=0xb9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xa695, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa695, .value=0xed, .type=IO_READ},
        {.addr=0xa696, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x50e3, .a=0xb7, .x=0x7e, .y=0xf1, .sp=0x74, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x50e3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x50e4, .a=0xb7, .x=0x7e, .y=0xf1, .sp=0x74, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x50e3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x50e3, .value=0xed, .type=IO_READ},
        {.addr=0x50e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4e42, .a=0x04, .x=0xcd, .y=0x88, .sp=0x9a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4e42, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4e43, .a=0x04, .x=0xcd, .y=0x88, .sp=0x9a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4e42, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4e42, .value=0xed, .type=IO_READ},
        {.addr=0x4e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x2e14, .a=0x96, .x=0xfd, .y=0x69, .sp=0x90, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e14, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2e15, .a=0x96, .x=0xfd, .y=0x69, .sp=0x90, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2e14, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2e14, .value=0xed, .type=IO_READ},
        {.addr=0x2e15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xf05a, .a=0x9e, .x=0x43, .y=0x94, .sp=0xa8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf05a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0x9e, .x=0x43, .y=0x94, .sp=0xa8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf05a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf05a, .value=0xed, .type=IO_READ},
        {.addr=0xf05b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc78e, .a=0x58, .x=0x73, .y=0xc8, .sp=0x62, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc78e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc78f, .a=0x58, .x=0x73, .y=0xc8, .sp=0x62, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc78e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc78e, .value=0xed, .type=IO_READ},
        {.addr=0xc78f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xa219, .a=0xd8, .x=0xd1, .y=0xff, .sp=0xf5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa219, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa21a, .a=0xd8, .x=0xd1, .y=0xff, .sp=0xf5, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xa219, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa219, .value=0xed, .type=IO_READ},
        {.addr=0xa21a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x29a5, .a=0xfc, .x=0xbc, .y=0x2d, .sp=0x38, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x29a5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x29a6, .a=0xfc, .x=0xbc, .y=0x2d, .sp=0x38, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x29a5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x29a5, .value=0xed, .type=IO_READ},
        {.addr=0x29a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x626b, .a=0xd6, .x=0xe5, .y=0x5f, .sp=0x10, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x626b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x626c, .a=0xd6, .x=0xe5, .y=0x5f, .sp=0x10, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x626b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x626b, .value=0xed, .type=IO_READ},
        {.addr=0x626c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x7e6e, .a=0xc7, .x=0xec, .y=0x58, .sp=0x32, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7e6e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7e6f, .a=0xc7, .x=0xec, .y=0x58, .sp=0x32, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x7e6e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7e6e, .value=0xed, .type=IO_READ},
        {.addr=0x7e6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x4322, .a=0x34, .x=0xe7, .y=0x7a, .sp=0xb9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x4322, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4323, .a=0x34, .x=0xe7, .y=0x7a, .sp=0xb9, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x4322, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4322, .value=0xed, .type=IO_READ},
        {.addr=0x4323, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb5cf, .a=0x95, .x=0xbf, .y=0x5f, .sp=0xaa, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xb5cf, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb5d0, .a=0x95, .x=0xbf, .y=0x5f, .sp=0xaa, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xb5cf, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb5cf, .value=0xed, .type=IO_READ},
        {.addr=0xb5d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x3047, .a=0xcd, .x=0x19, .y=0x0c, .sp=0xff, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x3047, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3048, .a=0xcd, .x=0x19, .y=0x0c, .sp=0xff, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3047, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3047, .value=0xed, .type=IO_READ},
        {.addr=0x3048, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x16ef, .a=0xa3, .x=0xd9, .y=0x39, .sp=0xb8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x16ef, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x16f0, .a=0xa3, .x=0xd9, .y=0x39, .sp=0xb8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x16ef, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x16ef, .value=0xed, .type=IO_READ},
        {.addr=0x16f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x2492, .a=0xa6, .x=0x1d, .y=0x23, .sp=0xc5, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2492, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2493, .a=0xa6, .x=0x1d, .y=0x23, .sp=0xc5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x2492, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2492, .value=0xed, .type=IO_READ},
        {.addr=0x2493, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0300) {
    const struct CPU_State initial_cpu = {.pc=0xd0f4, .a=0xa5, .x=0xad, .y=0xb0, .sp=0x3b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd0f5, .a=0xa5, .x=0xad, .y=0xb0, .sp=0x3b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd0f4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd0f4, .value=0xed, .type=IO_READ},
        {.addr=0xd0f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0301) {
    const struct CPU_State initial_cpu = {.pc=0xd198, .a=0x11, .x=0xc5, .y=0xe0, .sp=0xb9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd198, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd199, .a=0x11, .x=0xc5, .y=0xe0, .sp=0xb9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd198, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd198, .value=0xed, .type=IO_READ},
        {.addr=0xd199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0302) {
    const struct CPU_State initial_cpu = {.pc=0x72a4, .a=0xc8, .x=0x37, .y=0x6d, .sp=0x9d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x72a4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x72a5, .a=0xc8, .x=0x37, .y=0x6d, .sp=0x9d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x72a4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x72a4, .value=0xed, .type=IO_READ},
        {.addr=0x72a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0303) {
    const struct CPU_State initial_cpu = {.pc=0x7973, .a=0xab, .x=0x06, .y=0x73, .sp=0xd9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7973, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7974, .a=0xab, .x=0x06, .y=0x73, .sp=0xd9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7973, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7973, .value=0xed, .type=IO_READ},
        {.addr=0x7974, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0304) {
    const struct CPU_State initial_cpu = {.pc=0x9847, .a=0x29, .x=0xa0, .y=0xdd, .sp=0xd7, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9847, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9848, .a=0x29, .x=0xa0, .y=0xdd, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9847, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9847, .value=0xed, .type=IO_READ},
        {.addr=0x9848, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0305) {
    const struct CPU_State initial_cpu = {.pc=0x9c2c, .a=0xd9, .x=0x09, .y=0x56, .sp=0x09, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9c2c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9c2d, .a=0xd9, .x=0x09, .y=0x56, .sp=0x09, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9c2c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9c2c, .value=0xed, .type=IO_READ},
        {.addr=0x9c2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0306) {
    const struct CPU_State initial_cpu = {.pc=0x65a3, .a=0xb0, .x=0xaf, .y=0xa9, .sp=0x3b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x65a3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x65a4, .a=0xb0, .x=0xaf, .y=0xa9, .sp=0x3b, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x65a3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x65a3, .value=0xed, .type=IO_READ},
        {.addr=0x65a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0307) {
    const struct CPU_State initial_cpu = {.pc=0x7ca1, .a=0x4c, .x=0xaf, .y=0xa1, .sp=0x70, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7ca2, .a=0x4c, .x=0xaf, .y=0xa1, .sp=0x70, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x7ca1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7ca1, .value=0xed, .type=IO_READ},
        {.addr=0x7ca2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0308) {
    const struct CPU_State initial_cpu = {.pc=0xec89, .a=0xe0, .x=0x9f, .y=0x0b, .sp=0x0b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xec89, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xec8a, .a=0xe0, .x=0x9f, .y=0x0b, .sp=0x0b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xec89, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xec89, .value=0xed, .type=IO_READ},
        {.addr=0xec8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe4cb, .a=0xbe, .x=0xfe, .y=0x6e, .sp=0x3e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe4cc, .a=0xbe, .x=0xfe, .y=0x6e, .sp=0x3e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe4cb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe4cb, .value=0xed, .type=IO_READ},
        {.addr=0xe4cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030A) {
    const struct CPU_State initial_cpu = {.pc=0x6f39, .a=0xb3, .x=0xcf, .y=0x60, .sp=0x29, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6f39, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f3a, .a=0xb3, .x=0xcf, .y=0x60, .sp=0x29, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x6f39, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f39, .value=0xed, .type=IO_READ},
        {.addr=0x6f3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030B) {
    const struct CPU_State initial_cpu = {.pc=0x5208, .a=0xa6, .x=0x1c, .y=0x13, .sp=0x03, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5208, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5209, .a=0xa6, .x=0x1c, .y=0x13, .sp=0x03, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x5208, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5208, .value=0xed, .type=IO_READ},
        {.addr=0x5209, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8c9e, .a=0x54, .x=0xd0, .y=0x46, .sp=0x30, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c9f, .a=0x54, .x=0xd0, .y=0x46, .sp=0x30, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8c9e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c9e, .value=0xed, .type=IO_READ},
        {.addr=0x8c9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb658, .a=0x2b, .x=0x3c, .y=0xea, .sp=0x8f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xb658, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb659, .a=0x2b, .x=0x3c, .y=0xea, .sp=0x8f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb658, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb658, .value=0xed, .type=IO_READ},
        {.addr=0xb659, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030E) {
    const struct CPU_State initial_cpu = {.pc=0x2918, .a=0x26, .x=0x12, .y=0xda, .sp=0x80, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2918, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2919, .a=0x26, .x=0x12, .y=0xda, .sp=0x80, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x2918, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2918, .value=0xed, .type=IO_READ},
        {.addr=0x2919, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_030F) {
    const struct CPU_State initial_cpu = {.pc=0x98cc, .a=0x2b, .x=0x23, .y=0x87, .sp=0x75, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x98cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x98cd, .a=0x2b, .x=0x23, .y=0x87, .sp=0x75, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x98cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x98cc, .value=0xed, .type=IO_READ},
        {.addr=0x98cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0310) {
    const struct CPU_State initial_cpu = {.pc=0x4e2c, .a=0x32, .x=0x06, .y=0x9f, .sp=0x33, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4e2c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4e2d, .a=0x32, .x=0x06, .y=0x9f, .sp=0x33, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4e2c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4e2c, .value=0xed, .type=IO_READ},
        {.addr=0x4e2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0311) {
    const struct CPU_State initial_cpu = {.pc=0x423d, .a=0x3e, .x=0x0b, .y=0x20, .sp=0x44, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x423d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x423e, .a=0x3e, .x=0x0b, .y=0x20, .sp=0x44, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x423d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x423d, .value=0xed, .type=IO_READ},
        {.addr=0x423e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0312) {
    const struct CPU_State initial_cpu = {.pc=0x95e9, .a=0x94, .x=0xb5, .y=0xc8, .sp=0x0d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x95e9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x95ea, .a=0x94, .x=0xb5, .y=0xc8, .sp=0x0d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x95e9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x95e9, .value=0xed, .type=IO_READ},
        {.addr=0x95ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0313) {
    const struct CPU_State initial_cpu = {.pc=0xb52f, .a=0x69, .x=0x24, .y=0x87, .sp=0x7a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xb52f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb530, .a=0x69, .x=0x24, .y=0x87, .sp=0x7a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb52f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb52f, .value=0xed, .type=IO_READ},
        {.addr=0xb530, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0314) {
    const struct CPU_State initial_cpu = {.pc=0x8d37, .a=0x8b, .x=0x26, .y=0x43, .sp=0x36, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8d37, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8d38, .a=0x8b, .x=0x26, .y=0x43, .sp=0x36, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8d37, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8d37, .value=0xed, .type=IO_READ},
        {.addr=0x8d38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0315) {
    const struct CPU_State initial_cpu = {.pc=0x3528, .a=0x5c, .x=0x4c, .y=0xc6, .sp=0x79, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3528, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3529, .a=0x5c, .x=0x4c, .y=0xc6, .sp=0x79, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x3528, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3528, .value=0xed, .type=IO_READ},
        {.addr=0x3529, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc03d, .a=0x0d, .x=0xcf, .y=0x04, .sp=0xd6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc03d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc03e, .a=0x0d, .x=0xcf, .y=0x04, .sp=0xd6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc03d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc03d, .value=0xed, .type=IO_READ},
        {.addr=0xc03e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0317) {
    const struct CPU_State initial_cpu = {.pc=0xf9b3, .a=0x60, .x=0x55, .y=0xe0, .sp=0x26, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf9b3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf9b4, .a=0x60, .x=0x55, .y=0xe0, .sp=0x26, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xf9b3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf9b3, .value=0xed, .type=IO_READ},
        {.addr=0xf9b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0318) {
    const struct CPU_State initial_cpu = {.pc=0x2bee, .a=0x14, .x=0x8e, .y=0xa3, .sp=0x26, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2bee, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2bef, .a=0x14, .x=0x8e, .y=0xa3, .sp=0x26, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x2bee, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2bee, .value=0xed, .type=IO_READ},
        {.addr=0x2bef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0319) {
    const struct CPU_State initial_cpu = {.pc=0xd60b, .a=0x92, .x=0x0c, .y=0x87, .sp=0x9c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd60b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd60c, .a=0x92, .x=0x0c, .y=0x87, .sp=0x9c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xd60b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd60b, .value=0xed, .type=IO_READ},
        {.addr=0xd60c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2fd8, .a=0xf9, .x=0x5e, .y=0x80, .sp=0x6e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2fd9, .a=0xf9, .x=0x5e, .y=0x80, .sp=0x6e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2fd8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2fd8, .value=0xed, .type=IO_READ},
        {.addr=0x2fd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8f65, .a=0x6f, .x=0xfb, .y=0x59, .sp=0xfd, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8f65, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8f66, .a=0x6f, .x=0xfb, .y=0x59, .sp=0xfd, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x8f65, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8f65, .value=0xed, .type=IO_READ},
        {.addr=0x8f66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031C) {
    const struct CPU_State initial_cpu = {.pc=0x64e7, .a=0x79, .x=0x9a, .y=0x8b, .sp=0x2e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x64e7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x64e8, .a=0x79, .x=0x9a, .y=0x8b, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x64e7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x64e7, .value=0xed, .type=IO_READ},
        {.addr=0x64e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031D) {
    const struct CPU_State initial_cpu = {.pc=0x126e, .a=0xf3, .x=0x97, .y=0x6b, .sp=0x44, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x126e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x126f, .a=0xf3, .x=0x97, .y=0x6b, .sp=0x44, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x126e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x126e, .value=0xed, .type=IO_READ},
        {.addr=0x126f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031E) {
    const struct CPU_State initial_cpu = {.pc=0xcc71, .a=0x4f, .x=0xea, .y=0x4f, .sp=0xe8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xcc71, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcc72, .a=0x4f, .x=0xea, .y=0x4f, .sp=0xe8, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xcc71, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcc71, .value=0xed, .type=IO_READ},
        {.addr=0xcc72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_031F) {
    const struct CPU_State initial_cpu = {.pc=0x3233, .a=0x80, .x=0x9c, .y=0xcd, .sp=0x92, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3233, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3234, .a=0x80, .x=0x9c, .y=0xcd, .sp=0x92, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x3233, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3233, .value=0xed, .type=IO_READ},
        {.addr=0x3234, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0320) {
    const struct CPU_State initial_cpu = {.pc=0xa3d3, .a=0x82, .x=0xd7, .y=0x36, .sp=0x92, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa3d4, .a=0x82, .x=0xd7, .y=0x36, .sp=0x92, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa3d3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa3d3, .value=0xed, .type=IO_READ},
        {.addr=0xa3d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0321) {
    const struct CPU_State initial_cpu = {.pc=0x2d01, .a=0x51, .x=0x65, .y=0xf2, .sp=0xa3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d01, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2d02, .a=0x51, .x=0x65, .y=0xf2, .sp=0xa3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2d01, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2d01, .value=0xed, .type=IO_READ},
        {.addr=0x2d02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0322) {
    const struct CPU_State initial_cpu = {.pc=0x3d70, .a=0x41, .x=0xd4, .y=0xe8, .sp=0x20, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3d70, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3d71, .a=0x41, .x=0xd4, .y=0xe8, .sp=0x20, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3d70, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3d70, .value=0xed, .type=IO_READ},
        {.addr=0x3d71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa1cc, .a=0xe6, .x=0x3c, .y=0x27, .sp=0x19, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa1cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa1cd, .a=0xe6, .x=0x3c, .y=0x27, .sp=0x19, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa1cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa1cc, .value=0xed, .type=IO_READ},
        {.addr=0xa1cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0324) {
    const struct CPU_State initial_cpu = {.pc=0x8c5d, .a=0x89, .x=0xb9, .y=0x6a, .sp=0x83, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c5e, .a=0x89, .x=0xb9, .y=0x6a, .sp=0x83, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8c5d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c5d, .value=0xed, .type=IO_READ},
        {.addr=0x8c5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0325) {
    const struct CPU_State initial_cpu = {.pc=0x9e68, .a=0x8d, .x=0x8c, .y=0x61, .sp=0x57, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9e68, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9e69, .a=0x8d, .x=0x8c, .y=0x61, .sp=0x57, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x9e68, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9e68, .value=0xed, .type=IO_READ},
        {.addr=0x9e69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0326) {
    const struct CPU_State initial_cpu = {.pc=0xde50, .a=0x9d, .x=0x8e, .y=0x11, .sp=0x66, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xde50, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde51, .a=0x9d, .x=0x8e, .y=0x11, .sp=0x66, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xde50, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde50, .value=0xed, .type=IO_READ},
        {.addr=0xde51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0327) {
    const struct CPU_State initial_cpu = {.pc=0x4277, .a=0x1d, .x=0x51, .y=0x9c, .sp=0x2f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4277, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4278, .a=0x1d, .x=0x51, .y=0x9c, .sp=0x2f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4277, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4277, .value=0xed, .type=IO_READ},
        {.addr=0x4278, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0328) {
    const struct CPU_State initial_cpu = {.pc=0x2886, .a=0x83, .x=0xb1, .y=0xf9, .sp=0xe0, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2886, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2887, .a=0x83, .x=0xb1, .y=0xf9, .sp=0xe0, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x2886, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2886, .value=0xed, .type=IO_READ},
        {.addr=0x2887, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0329) {
    const struct CPU_State initial_cpu = {.pc=0x4aee, .a=0xb9, .x=0x34, .y=0xdf, .sp=0xcc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4aee, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4aef, .a=0xb9, .x=0x34, .y=0xdf, .sp=0xcc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4aee, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4aee, .value=0xed, .type=IO_READ},
        {.addr=0x4aef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4a56, .a=0xe0, .x=0x57, .y=0xd7, .sp=0xa6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4a56, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4a57, .a=0xe0, .x=0x57, .y=0xd7, .sp=0xa6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4a56, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4a56, .value=0xed, .type=IO_READ},
        {.addr=0x4a57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032B) {
    const struct CPU_State initial_cpu = {.pc=0xf8ac, .a=0xed, .x=0xb6, .y=0x28, .sp=0x7b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf8ad, .a=0xed, .x=0xb6, .y=0x28, .sp=0x7b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf8ac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf8ac, .value=0xed, .type=IO_READ},
        {.addr=0xf8ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032C) {
    const struct CPU_State initial_cpu = {.pc=0x2401, .a=0xde, .x=0x76, .y=0x4d, .sp=0x49, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2401, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2402, .a=0xde, .x=0x76, .y=0x4d, .sp=0x49, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2401, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2401, .value=0xed, .type=IO_READ},
        {.addr=0x2402, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032D) {
    const struct CPU_State initial_cpu = {.pc=0x74dc, .a=0xdf, .x=0xc8, .y=0x47, .sp=0x7d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x74dc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x74dd, .a=0xdf, .x=0xc8, .y=0x47, .sp=0x7d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x74dc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x74dc, .value=0xed, .type=IO_READ},
        {.addr=0x74dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032E) {
    const struct CPU_State initial_cpu = {.pc=0x3ddd, .a=0x36, .x=0x90, .y=0x1c, .sp=0xbb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3ddd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3dde, .a=0x36, .x=0x90, .y=0x1c, .sp=0xbb, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3ddd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3ddd, .value=0xed, .type=IO_READ},
        {.addr=0x3dde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_032F) {
    const struct CPU_State initial_cpu = {.pc=0xc8b1, .a=0xcb, .x=0xac, .y=0x31, .sp=0x36, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc8b2, .a=0xcb, .x=0xac, .y=0x31, .sp=0x36, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xc8b1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc8b1, .value=0xed, .type=IO_READ},
        {.addr=0xc8b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0330) {
    const struct CPU_State initial_cpu = {.pc=0x76a9, .a=0x3b, .x=0x52, .y=0x4e, .sp=0xbd, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x76a9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x76aa, .a=0x3b, .x=0x52, .y=0x4e, .sp=0xbd, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x76a9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x76a9, .value=0xed, .type=IO_READ},
        {.addr=0x76aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5260, .a=0x95, .x=0x79, .y=0x6b, .sp=0xf1, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5260, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5261, .a=0x95, .x=0x79, .y=0x6b, .sp=0xf1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5260, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5260, .value=0xed, .type=IO_READ},
        {.addr=0x5261, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0332) {
    const struct CPU_State initial_cpu = {.pc=0xee14, .a=0x22, .x=0xe5, .y=0xa2, .sp=0xf7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xee14, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xee15, .a=0x22, .x=0xe5, .y=0xa2, .sp=0xf7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xee14, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xee14, .value=0xed, .type=IO_READ},
        {.addr=0xee15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0333) {
    const struct CPU_State initial_cpu = {.pc=0x340e, .a=0xd5, .x=0x84, .y=0xf1, .sp=0x6e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x340e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x340f, .a=0xd5, .x=0x84, .y=0xf1, .sp=0x6e, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x340e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x340e, .value=0xed, .type=IO_READ},
        {.addr=0x340f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0334) {
    const struct CPU_State initial_cpu = {.pc=0x2e69, .a=0x1c, .x=0xdc, .y=0x3e, .sp=0xd3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2e69, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2e6a, .a=0x1c, .x=0xdc, .y=0x3e, .sp=0xd3, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2e69, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2e69, .value=0xed, .type=IO_READ},
        {.addr=0x2e6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0335) {
    const struct CPU_State initial_cpu = {.pc=0xc40a, .a=0x10, .x=0x25, .y=0x92, .sp=0x89, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc40a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc40b, .a=0x10, .x=0x25, .y=0x92, .sp=0x89, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xc40a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc40a, .value=0xed, .type=IO_READ},
        {.addr=0xc40b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0336) {
    const struct CPU_State initial_cpu = {.pc=0xeca9, .a=0xd2, .x=0x9e, .y=0x68, .sp=0x2e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xeca9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xecaa, .a=0xd2, .x=0x9e, .y=0x68, .sp=0x2e, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xeca9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xeca9, .value=0xed, .type=IO_READ},
        {.addr=0xecaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0337) {
    const struct CPU_State initial_cpu = {.pc=0xd5d0, .a=0xee, .x=0xff, .y=0x9a, .sp=0x6c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd5d1, .a=0xee, .x=0xff, .y=0x9a, .sp=0x6c, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd5d0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd5d0, .value=0xed, .type=IO_READ},
        {.addr=0xd5d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0338) {
    const struct CPU_State initial_cpu = {.pc=0x56d4, .a=0x98, .x=0x3b, .y=0xeb, .sp=0x7f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x56d4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x56d5, .a=0x98, .x=0x3b, .y=0xeb, .sp=0x7f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x56d4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x56d4, .value=0xed, .type=IO_READ},
        {.addr=0x56d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0339) {
    const struct CPU_State initial_cpu = {.pc=0x8207, .a=0x36, .x=0x50, .y=0x64, .sp=0x61, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x8207, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8208, .a=0x36, .x=0x50, .y=0x64, .sp=0x61, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x8207, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8207, .value=0xed, .type=IO_READ},
        {.addr=0x8208, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033A) {
    const struct CPU_State initial_cpu = {.pc=0x36ac, .a=0x68, .x=0xe9, .y=0xb1, .sp=0x47, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x36ac, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x36ad, .a=0x68, .x=0xe9, .y=0xb1, .sp=0x47, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x36ac, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x36ac, .value=0xed, .type=IO_READ},
        {.addr=0x36ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6f22, .a=0x8b, .x=0xa0, .y=0x33, .sp=0x04, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6f22, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f23, .a=0x8b, .x=0xa0, .y=0x33, .sp=0x04, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6f22, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f22, .value=0xed, .type=IO_READ},
        {.addr=0x6f23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa7bd, .a=0x2a, .x=0x2c, .y=0xb9, .sp=0xbd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa7bd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa7be, .a=0x2a, .x=0x2c, .y=0xb9, .sp=0xbd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa7bd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa7bd, .value=0xed, .type=IO_READ},
        {.addr=0xa7be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033D) {
    const struct CPU_State initial_cpu = {.pc=0x30d5, .a=0xd0, .x=0x33, .y=0x12, .sp=0x27, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x30d5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x30d6, .a=0xd0, .x=0x33, .y=0x12, .sp=0x27, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x30d5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x30d5, .value=0xed, .type=IO_READ},
        {.addr=0x30d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033E) {
    const struct CPU_State initial_cpu = {.pc=0x8ec6, .a=0x94, .x=0x32, .y=0x43, .sp=0xd9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8ec7, .a=0x94, .x=0x32, .y=0x43, .sp=0xd9, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x8ec6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8ec6, .value=0xed, .type=IO_READ},
        {.addr=0x8ec7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_033F) {
    const struct CPU_State initial_cpu = {.pc=0x42fa, .a=0x48, .x=0xe9, .y=0x3b, .sp=0x04, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x42fa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x42fb, .a=0x48, .x=0xe9, .y=0x3b, .sp=0x04, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x42fa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x42fa, .value=0xed, .type=IO_READ},
        {.addr=0x42fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0340) {
    const struct CPU_State initial_cpu = {.pc=0x84df, .a=0x6d, .x=0xfd, .y=0xa8, .sp=0xee, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x84df, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x84e0, .a=0x6d, .x=0xfd, .y=0xa8, .sp=0xee, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x84df, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x84df, .value=0xed, .type=IO_READ},
        {.addr=0x84e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0341) {
    const struct CPU_State initial_cpu = {.pc=0xec93, .a=0x3f, .x=0x54, .y=0x74, .sp=0xb7, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xec93, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xec94, .a=0x3f, .x=0x54, .y=0x74, .sp=0xb7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xec93, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xec93, .value=0xed, .type=IO_READ},
        {.addr=0xec94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0342) {
    const struct CPU_State initial_cpu = {.pc=0x55fb, .a=0xb6, .x=0xdc, .y=0x10, .sp=0x6b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x55fb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x55fc, .a=0xb6, .x=0xdc, .y=0x10, .sp=0x6b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x55fb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x55fb, .value=0xed, .type=IO_READ},
        {.addr=0x55fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0343) {
    const struct CPU_State initial_cpu = {.pc=0xbddd, .a=0x41, .x=0x5f, .y=0x74, .sp=0x0b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xbddd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbdde, .a=0x41, .x=0x5f, .y=0x74, .sp=0x0b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xbddd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbddd, .value=0xed, .type=IO_READ},
        {.addr=0xbdde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0344) {
    const struct CPU_State initial_cpu = {.pc=0xb18b, .a=0x14, .x=0xde, .y=0xb7, .sp=0xdb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb18b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb18c, .a=0x14, .x=0xde, .y=0xb7, .sp=0xdb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb18b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb18b, .value=0xed, .type=IO_READ},
        {.addr=0xb18c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0345) {
    const struct CPU_State initial_cpu = {.pc=0x46c4, .a=0xc7, .x=0x3a, .y=0x87, .sp=0x5c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x46c4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x46c5, .a=0xc7, .x=0x3a, .y=0x87, .sp=0x5c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x46c4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x46c4, .value=0xed, .type=IO_READ},
        {.addr=0x46c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0346) {
    const struct CPU_State initial_cpu = {.pc=0xb2bc, .a=0xb9, .x=0x9b, .y=0x0a, .sp=0x4f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xb2bc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb2bd, .a=0xb9, .x=0x9b, .y=0x0a, .sp=0x4f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb2bc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb2bc, .value=0xed, .type=IO_READ},
        {.addr=0xb2bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0347) {
    const struct CPU_State initial_cpu = {.pc=0x2f4c, .a=0x07, .x=0x57, .y=0xcf, .sp=0x65, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2f4d, .a=0x07, .x=0x57, .y=0xcf, .sp=0x65, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x2f4c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2f4c, .value=0xed, .type=IO_READ},
        {.addr=0x2f4d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0348) {
    const struct CPU_State initial_cpu = {.pc=0x021e, .a=0x82, .x=0xa4, .y=0x47, .sp=0xa9, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x021e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x021f, .a=0x82, .x=0xa4, .y=0x47, .sp=0xa9, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x021e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x021e, .value=0xed, .type=IO_READ},
        {.addr=0x021f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0349) {
    const struct CPU_State initial_cpu = {.pc=0x2c7b, .a=0xa3, .x=0x19, .y=0x24, .sp=0xd9, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2c7b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2c7c, .a=0xa3, .x=0x19, .y=0x24, .sp=0xd9, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x2c7b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2c7b, .value=0xed, .type=IO_READ},
        {.addr=0x2c7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034A) {
    const struct CPU_State initial_cpu = {.pc=0x4d8e, .a=0x01, .x=0xaa, .y=0xd9, .sp=0xae, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4d8f, .a=0x01, .x=0xaa, .y=0xd9, .sp=0xae, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4d8e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4d8e, .value=0xed, .type=IO_READ},
        {.addr=0x4d8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034B) {
    const struct CPU_State initial_cpu = {.pc=0x0e2d, .a=0x60, .x=0x97, .y=0xa0, .sp=0xa2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0e2d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0e2e, .a=0x60, .x=0x97, .y=0xa0, .sp=0xa2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0e2d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0e2d, .value=0xed, .type=IO_READ},
        {.addr=0x0e2e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034C) {
    const struct CPU_State initial_cpu = {.pc=0x0665, .a=0x54, .x=0x73, .y=0x45, .sp=0xdf, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0665, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0666, .a=0x54, .x=0x73, .y=0x45, .sp=0xdf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0665, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0665, .value=0xed, .type=IO_READ},
        {.addr=0x0666, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034D) {
    const struct CPU_State initial_cpu = {.pc=0x5a0f, .a=0x9f, .x=0xf0, .y=0x77, .sp=0x2a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5a10, .a=0x9f, .x=0xf0, .y=0x77, .sp=0x2a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5a0f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5a0f, .value=0xed, .type=IO_READ},
        {.addr=0x5a10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034E) {
    const struct CPU_State initial_cpu = {.pc=0x834a, .a=0xd2, .x=0x81, .y=0xd0, .sp=0x8b, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x834a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x834b, .a=0xd2, .x=0x81, .y=0xd0, .sp=0x8b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x834a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x834a, .value=0xed, .type=IO_READ},
        {.addr=0x834b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_034F) {
    const struct CPU_State initial_cpu = {.pc=0xf447, .a=0x2f, .x=0x58, .y=0x52, .sp=0x00, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf447, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf448, .a=0x2f, .x=0x58, .y=0x52, .sp=0x00, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf447, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf447, .value=0xed, .type=IO_READ},
        {.addr=0xf448, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0350) {
    const struct CPU_State initial_cpu = {.pc=0xd7d4, .a=0xcf, .x=0xce, .y=0xac, .sp=0xa9, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd7d5, .a=0xcf, .x=0xce, .y=0xac, .sp=0xa9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd7d4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd7d4, .value=0xed, .type=IO_READ},
        {.addr=0xd7d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0351) {
    const struct CPU_State initial_cpu = {.pc=0x4294, .a=0x55, .x=0xa3, .y=0x09, .sp=0xc9, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x4294, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4295, .a=0x55, .x=0xa3, .y=0x09, .sp=0xc9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4294, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4294, .value=0xed, .type=IO_READ},
        {.addr=0x4295, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7eea, .a=0xf3, .x=0xfe, .y=0xed, .sp=0xab, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x7eea, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7eeb, .a=0xf3, .x=0xfe, .y=0xed, .sp=0xab, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7eea, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7eea, .value=0xed, .type=IO_READ},
        {.addr=0x7eeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0353) {
    const struct CPU_State initial_cpu = {.pc=0xc04e, .a=0xbc, .x=0x4a, .y=0x4e, .sp=0x98, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc04e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc04f, .a=0xbc, .x=0x4a, .y=0x4e, .sp=0x98, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc04e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc04e, .value=0xed, .type=IO_READ},
        {.addr=0xc04f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0354) {
    const struct CPU_State initial_cpu = {.pc=0x2a41, .a=0x60, .x=0x55, .y=0x10, .sp=0x0d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a41, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2a42, .a=0x60, .x=0x55, .y=0x10, .sp=0x0d, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x2a41, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2a41, .value=0xed, .type=IO_READ},
        {.addr=0x2a42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0355) {
    const struct CPU_State initial_cpu = {.pc=0x65cd, .a=0xde, .x=0x93, .y=0x56, .sp=0xb6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x65cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x65ce, .a=0xde, .x=0x93, .y=0x56, .sp=0xb6, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x65cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x65cd, .value=0xed, .type=IO_READ},
        {.addr=0x65ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0356) {
    const struct CPU_State initial_cpu = {.pc=0x6dd0, .a=0xb5, .x=0x3c, .y=0xd1, .sp=0x97, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6dd1, .a=0xb5, .x=0x3c, .y=0xd1, .sp=0x97, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6dd0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6dd0, .value=0xed, .type=IO_READ},
        {.addr=0x6dd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6d87, .a=0x9a, .x=0x84, .y=0x30, .sp=0x17, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6d87, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6d88, .a=0x9a, .x=0x84, .y=0x30, .sp=0x17, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6d87, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6d87, .value=0xed, .type=IO_READ},
        {.addr=0x6d88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0358) {
    const struct CPU_State initial_cpu = {.pc=0xedca, .a=0x24, .x=0x83, .y=0x50, .sp=0xb7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xedca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xedcb, .a=0x24, .x=0x83, .y=0x50, .sp=0xb7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xedca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xedca, .value=0xed, .type=IO_READ},
        {.addr=0xedcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0359) {
    const struct CPU_State initial_cpu = {.pc=0xb0f7, .a=0xd1, .x=0x4c, .y=0x05, .sp=0x56, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb0f8, .a=0xd1, .x=0x4c, .y=0x05, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb0f7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb0f7, .value=0xed, .type=IO_READ},
        {.addr=0xb0f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035A) {
    const struct CPU_State initial_cpu = {.pc=0x77a5, .a=0xbf, .x=0x8a, .y=0xd1, .sp=0xbf, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x77a5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x77a6, .a=0xbf, .x=0x8a, .y=0xd1, .sp=0xbf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x77a5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x77a5, .value=0xed, .type=IO_READ},
        {.addr=0x77a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035B) {
    const struct CPU_State initial_cpu = {.pc=0xe47a, .a=0x73, .x=0xc6, .y=0x38, .sp=0xb3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe47a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe47b, .a=0x73, .x=0xc6, .y=0x38, .sp=0xb3, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe47a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe47a, .value=0xed, .type=IO_READ},
        {.addr=0xe47b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035C) {
    const struct CPU_State initial_cpu = {.pc=0xc9fa, .a=0x65, .x=0xa4, .y=0x5d, .sp=0x0c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc9fa, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc9fb, .a=0x65, .x=0xa4, .y=0x5d, .sp=0x0c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc9fa, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc9fa, .value=0xed, .type=IO_READ},
        {.addr=0xc9fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035D) {
    const struct CPU_State initial_cpu = {.pc=0xcb7d, .a=0xd6, .x=0xf1, .y=0x06, .sp=0xc9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcb7e, .a=0xd6, .x=0xf1, .y=0x06, .sp=0xc9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xcb7d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcb7d, .value=0xed, .type=IO_READ},
        {.addr=0xcb7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5547, .a=0xd9, .x=0xf5, .y=0x40, .sp=0x49, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5547, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5548, .a=0xd9, .x=0xf5, .y=0x40, .sp=0x49, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5547, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5547, .value=0xed, .type=IO_READ},
        {.addr=0x5548, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_035F) {
    const struct CPU_State initial_cpu = {.pc=0x15bb, .a=0x99, .x=0xaa, .y=0xd4, .sp=0xd0, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x15bb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x15bc, .a=0x99, .x=0xaa, .y=0xd4, .sp=0xd0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x15bb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x15bb, .value=0xed, .type=IO_READ},
        {.addr=0x15bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0360) {
    const struct CPU_State initial_cpu = {.pc=0x192f, .a=0xbd, .x=0x85, .y=0x4e, .sp=0x68, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x192f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1930, .a=0xbd, .x=0x85, .y=0x4e, .sp=0x68, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x192f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x192f, .value=0xed, .type=IO_READ},
        {.addr=0x1930, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0361) {
    const struct CPU_State initial_cpu = {.pc=0xef68, .a=0xa8, .x=0xe9, .y=0x7b, .sp=0xc4, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xef68, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xef69, .a=0xa8, .x=0xe9, .y=0x7b, .sp=0xc4, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xef68, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xef68, .value=0xed, .type=IO_READ},
        {.addr=0xef69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0362) {
    const struct CPU_State initial_cpu = {.pc=0xef4e, .a=0xba, .x=0xec, .y=0xdf, .sp=0x9b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xef4e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xef4f, .a=0xba, .x=0xec, .y=0xdf, .sp=0x9b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xef4e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xef4e, .value=0xed, .type=IO_READ},
        {.addr=0xef4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0363) {
    const struct CPU_State initial_cpu = {.pc=0x45fb, .a=0x31, .x=0x8c, .y=0x17, .sp=0x0d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x45fb, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x45fc, .a=0x31, .x=0x8c, .y=0x17, .sp=0x0d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x45fb, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x45fb, .value=0xed, .type=IO_READ},
        {.addr=0x45fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0364) {
    const struct CPU_State initial_cpu = {.pc=0x5b14, .a=0xc8, .x=0x9c, .y=0x09, .sp=0x92, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5b14, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5b15, .a=0xc8, .x=0x9c, .y=0x09, .sp=0x92, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x5b14, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5b14, .value=0xed, .type=IO_READ},
        {.addr=0x5b15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0365) {
    const struct CPU_State initial_cpu = {.pc=0x48a1, .a=0x78, .x=0xb3, .y=0x75, .sp=0xb0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x48a1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x48a2, .a=0x78, .x=0xb3, .y=0x75, .sp=0xb0, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x48a1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x48a1, .value=0xed, .type=IO_READ},
        {.addr=0x48a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0366) {
    const struct CPU_State initial_cpu = {.pc=0x7586, .a=0x71, .x=0xc3, .y=0x81, .sp=0x76, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7586, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7587, .a=0x71, .x=0xc3, .y=0x81, .sp=0x76, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7586, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7586, .value=0xed, .type=IO_READ},
        {.addr=0x7587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0367) {
    const struct CPU_State initial_cpu = {.pc=0xb920, .a=0xb4, .x=0xf5, .y=0x73, .sp=0xc7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb920, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb921, .a=0xb4, .x=0xf5, .y=0x73, .sp=0xc7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb920, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb920, .value=0xed, .type=IO_READ},
        {.addr=0xb921, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0368) {
    const struct CPU_State initial_cpu = {.pc=0x9866, .a=0x7c, .x=0xb5, .y=0x36, .sp=0xd5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9866, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9867, .a=0x7c, .x=0xb5, .y=0x36, .sp=0xd5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9866, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9866, .value=0xed, .type=IO_READ},
        {.addr=0x9867, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0369) {
    const struct CPU_State initial_cpu = {.pc=0x5461, .a=0x43, .x=0x4e, .y=0x43, .sp=0xce, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5461, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5462, .a=0x43, .x=0x4e, .y=0x43, .sp=0xce, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5461, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5461, .value=0xed, .type=IO_READ},
        {.addr=0x5462, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036A) {
    const struct CPU_State initial_cpu = {.pc=0x77b5, .a=0x1f, .x=0x7a, .y=0xf5, .sp=0x4f, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x77b5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x77b6, .a=0x1f, .x=0x7a, .y=0xf5, .sp=0x4f, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x77b5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x77b5, .value=0xed, .type=IO_READ},
        {.addr=0x77b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036B) {
    const struct CPU_State initial_cpu = {.pc=0x1a09, .a=0xf0, .x=0xc3, .y=0xfa, .sp=0x66, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1a09, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1a0a, .a=0xf0, .x=0xc3, .y=0xfa, .sp=0x66, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x1a09, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1a09, .value=0xed, .type=IO_READ},
        {.addr=0x1a0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa32a, .a=0x41, .x=0x9e, .y=0x6a, .sp=0x5d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa32a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa32b, .a=0x41, .x=0x9e, .y=0x6a, .sp=0x5d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa32a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa32a, .value=0xed, .type=IO_READ},
        {.addr=0xa32b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036D) {
    const struct CPU_State initial_cpu = {.pc=0x213e, .a=0xf0, .x=0x80, .y=0xf2, .sp=0xe4, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x213e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x213f, .a=0xf0, .x=0x80, .y=0xf2, .sp=0xe4, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x213e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x213e, .value=0xed, .type=IO_READ},
        {.addr=0x213f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036E) {
    const struct CPU_State initial_cpu = {.pc=0x7288, .a=0xbf, .x=0xde, .y=0x6b, .sp=0x6a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7288, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7289, .a=0xbf, .x=0xde, .y=0x6b, .sp=0x6a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7288, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7288, .value=0xed, .type=IO_READ},
        {.addr=0x7289, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_036F) {
    const struct CPU_State initial_cpu = {.pc=0xaaa7, .a=0x39, .x=0xfa, .y=0x8b, .sp=0xf5, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaaa8, .a=0x39, .x=0xfa, .y=0x8b, .sp=0xf5, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xaaa7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaaa7, .value=0xed, .type=IO_READ},
        {.addr=0xaaa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0370) {
    const struct CPU_State initial_cpu = {.pc=0x8c9a, .a=0x11, .x=0x49, .y=0xc8, .sp=0x66, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8c9b, .a=0x11, .x=0x49, .y=0xc8, .sp=0x66, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8c9a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8c9a, .value=0xed, .type=IO_READ},
        {.addr=0x8c9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0371) {
    const struct CPU_State initial_cpu = {.pc=0x4e25, .a=0x7c, .x=0xd9, .y=0x7d, .sp=0xec, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4e25, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4e26, .a=0x7c, .x=0xd9, .y=0x7d, .sp=0xec, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4e25, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4e25, .value=0xed, .type=IO_READ},
        {.addr=0x4e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0372) {
    const struct CPU_State initial_cpu = {.pc=0xca3b, .a=0xf5, .x=0xa1, .y=0x37, .sp=0x92, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xca3b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xca3c, .a=0xf5, .x=0xa1, .y=0x37, .sp=0x92, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xca3b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xca3b, .value=0xed, .type=IO_READ},
        {.addr=0xca3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0373) {
    const struct CPU_State initial_cpu = {.pc=0xa8cd, .a=0x35, .x=0x13, .y=0x25, .sp=0x0d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xa8cd, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa8ce, .a=0x35, .x=0x13, .y=0x25, .sp=0x0d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xa8cd, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa8cd, .value=0xed, .type=IO_READ},
        {.addr=0xa8ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0374) {
    const struct CPU_State initial_cpu = {.pc=0x18fe, .a=0x51, .x=0x95, .y=0xea, .sp=0x84, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x18fe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x18ff, .a=0x51, .x=0x95, .y=0xea, .sp=0x84, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x18fe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x18fe, .value=0xed, .type=IO_READ},
        {.addr=0x18ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0375) {
    const struct CPU_State initial_cpu = {.pc=0xf236, .a=0xc9, .x=0x28, .y=0x4b, .sp=0xeb, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf236, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf237, .a=0xc9, .x=0x28, .y=0x4b, .sp=0xeb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf236, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf236, .value=0xed, .type=IO_READ},
        {.addr=0xf237, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0376) {
    const struct CPU_State initial_cpu = {.pc=0x8ae0, .a=0x64, .x=0x5f, .y=0x29, .sp=0x34, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8ae1, .a=0x64, .x=0x5f, .y=0x29, .sp=0x34, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x8ae0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8ae0, .value=0xed, .type=IO_READ},
        {.addr=0x8ae1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0377) {
    const struct CPU_State initial_cpu = {.pc=0xbfa8, .a=0x5e, .x=0x21, .y=0x76, .sp=0x9a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbfa9, .a=0x5e, .x=0x21, .y=0x76, .sp=0x9a, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xbfa8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbfa8, .value=0xed, .type=IO_READ},
        {.addr=0xbfa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0378) {
    const struct CPU_State initial_cpu = {.pc=0x96c9, .a=0xe7, .x=0xdd, .y=0x6a, .sp=0xa9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x96c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x96ca, .a=0xe7, .x=0xdd, .y=0x6a, .sp=0xa9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x96c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x96c9, .value=0xed, .type=IO_READ},
        {.addr=0x96ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0379) {
    const struct CPU_State initial_cpu = {.pc=0xbcb8, .a=0x2b, .x=0xab, .y=0x43, .sp=0xa6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbcb9, .a=0x2b, .x=0xab, .y=0x43, .sp=0xa6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xbcb8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbcb8, .value=0xed, .type=IO_READ},
        {.addr=0xbcb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037A) {
    const struct CPU_State initial_cpu = {.pc=0xb798, .a=0xc4, .x=0x4a, .y=0x2f, .sp=0x46, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb798, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb799, .a=0xc4, .x=0x4a, .y=0x2f, .sp=0x46, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb798, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb798, .value=0xed, .type=IO_READ},
        {.addr=0xb799, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf0e9, .a=0x85, .x=0x37, .y=0xd0, .sp=0xae, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf0ea, .a=0x85, .x=0x37, .y=0xd0, .sp=0xae, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xf0e9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf0e9, .value=0xed, .type=IO_READ},
        {.addr=0xf0ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8097, .a=0xc4, .x=0xe4, .y=0x18, .sp=0x8c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8097, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8098, .a=0xc4, .x=0xe4, .y=0x18, .sp=0x8c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8097, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8097, .value=0xed, .type=IO_READ},
        {.addr=0x8098, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037D) {
    const struct CPU_State initial_cpu = {.pc=0x334a, .a=0xdd, .x=0x3f, .y=0xfd, .sp=0xad, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x334a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x334b, .a=0xdd, .x=0x3f, .y=0xfd, .sp=0xad, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x334a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x334a, .value=0xed, .type=IO_READ},
        {.addr=0x334b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037E) {
    const struct CPU_State initial_cpu = {.pc=0x9a53, .a=0xcb, .x=0xb1, .y=0x25, .sp=0x41, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9a53, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9a54, .a=0xcb, .x=0xb1, .y=0x25, .sp=0x41, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9a53, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9a53, .value=0xed, .type=IO_READ},
        {.addr=0x9a54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_037F) {
    const struct CPU_State initial_cpu = {.pc=0x227d, .a=0xc7, .x=0xb5, .y=0x6f, .sp=0x6d, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x227d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x227e, .a=0xc7, .x=0xb5, .y=0x6f, .sp=0x6d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x227d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x227d, .value=0xed, .type=IO_READ},
        {.addr=0x227e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0380) {
    const struct CPU_State initial_cpu = {.pc=0xe935, .a=0x8b, .x=0x09, .y=0x8f, .sp=0xb5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xe935, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe936, .a=0x8b, .x=0x09, .y=0x8f, .sp=0xb5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe935, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe935, .value=0xed, .type=IO_READ},
        {.addr=0xe936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0381) {
    const struct CPU_State initial_cpu = {.pc=0x9307, .a=0x82, .x=0x36, .y=0x5b, .sp=0x06, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9307, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9308, .a=0x82, .x=0x36, .y=0x5b, .sp=0x06, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9307, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9307, .value=0xed, .type=IO_READ},
        {.addr=0x9308, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0382) {
    const struct CPU_State initial_cpu = {.pc=0xaf54, .a=0xbf, .x=0x35, .y=0x9a, .sp=0x41, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xaf54, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xaf55, .a=0xbf, .x=0x35, .y=0x9a, .sp=0x41, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xaf54, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xaf54, .value=0xed, .type=IO_READ},
        {.addr=0xaf55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0383) {
    const struct CPU_State initial_cpu = {.pc=0xc7f2, .a=0xc8, .x=0x39, .y=0xb4, .sp=0xe6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc7f3, .a=0xc8, .x=0x39, .y=0xb4, .sp=0xe6, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc7f2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc7f2, .value=0xed, .type=IO_READ},
        {.addr=0xc7f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0384) {
    const struct CPU_State initial_cpu = {.pc=0x2647, .a=0xd6, .x=0x23, .y=0x13, .sp=0xc0, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2647, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2648, .a=0xd6, .x=0x23, .y=0x13, .sp=0xc0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2647, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2647, .value=0xed, .type=IO_READ},
        {.addr=0x2648, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0385) {
    const struct CPU_State initial_cpu = {.pc=0x59de, .a=0x20, .x=0xd8, .y=0x6a, .sp=0x0c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x59de, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x59df, .a=0x20, .x=0xd8, .y=0x6a, .sp=0x0c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x59de, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x59de, .value=0xed, .type=IO_READ},
        {.addr=0x59df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0386) {
    const struct CPU_State initial_cpu = {.pc=0x5bc5, .a=0x73, .x=0xc9, .y=0x89, .sp=0x94, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc5, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5bc6, .a=0x73, .x=0xc9, .y=0x89, .sp=0x94, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x5bc5, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5bc5, .value=0xed, .type=IO_READ},
        {.addr=0x5bc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0387) {
    const struct CPU_State initial_cpu = {.pc=0x748e, .a=0x16, .x=0x51, .y=0x2a, .sp=0xc5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x748e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x748f, .a=0x16, .x=0x51, .y=0x2a, .sp=0xc5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x748e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x748e, .value=0xed, .type=IO_READ},
        {.addr=0x748f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0388) {
    const struct CPU_State initial_cpu = {.pc=0x7194, .a=0xb5, .x=0xff, .y=0x76, .sp=0x2d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7194, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7195, .a=0xb5, .x=0xff, .y=0x76, .sp=0x2d, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7194, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7194, .value=0xed, .type=IO_READ},
        {.addr=0x7195, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0389) {
    const struct CPU_State initial_cpu = {.pc=0x150c, .a=0x08, .x=0xb4, .y=0x04, .sp=0x63, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x150c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x150d, .a=0x08, .x=0xb4, .y=0x04, .sp=0x63, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x150c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x150c, .value=0xed, .type=IO_READ},
        {.addr=0x150d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038A) {
    const struct CPU_State initial_cpu = {.pc=0xe255, .a=0x2f, .x=0x52, .y=0x2f, .sp=0x4a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe255, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe256, .a=0x2f, .x=0x52, .y=0x2f, .sp=0x4a, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xe255, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe255, .value=0xed, .type=IO_READ},
        {.addr=0xe256, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7cce, .a=0xe5, .x=0xdb, .y=0x13, .sp=0xa2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7cce, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7ccf, .a=0xe5, .x=0xdb, .y=0x13, .sp=0xa2, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x7cce, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7cce, .value=0xed, .type=IO_READ},
        {.addr=0x7ccf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038C) {
    const struct CPU_State initial_cpu = {.pc=0x9fbe, .a=0xb8, .x=0x87, .y=0x29, .sp=0xac, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9fbe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9fbf, .a=0xb8, .x=0x87, .y=0x29, .sp=0xac, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9fbe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9fbe, .value=0xed, .type=IO_READ},
        {.addr=0x9fbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038D) {
    const struct CPU_State initial_cpu = {.pc=0x8b6b, .a=0xc3, .x=0x96, .y=0xc7, .sp=0x00, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8b6c, .a=0xc3, .x=0x96, .y=0xc7, .sp=0x00, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x8b6b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8b6b, .value=0xed, .type=IO_READ},
        {.addr=0x8b6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038E) {
    const struct CPU_State initial_cpu = {.pc=0x95ca, .a=0x3d, .x=0x1c, .y=0x18, .sp=0xee, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x95ca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x95cb, .a=0x3d, .x=0x1c, .y=0x18, .sp=0xee, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x95ca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x95ca, .value=0xed, .type=IO_READ},
        {.addr=0x95cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_038F) {
    const struct CPU_State initial_cpu = {.pc=0x9b94, .a=0x02, .x=0xe7, .y=0x04, .sp=0xd9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9b94, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9b95, .a=0x02, .x=0xe7, .y=0x04, .sp=0xd9, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x9b94, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9b94, .value=0xed, .type=IO_READ},
        {.addr=0x9b95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0390) {
    const struct CPU_State initial_cpu = {.pc=0x0916, .a=0x6b, .x=0x95, .y=0x66, .sp=0xe0, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0916, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0917, .a=0x6b, .x=0x95, .y=0x66, .sp=0xe0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0916, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0916, .value=0xed, .type=IO_READ},
        {.addr=0x0917, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5922, .a=0x31, .x=0x3a, .y=0x57, .sp=0x95, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5922, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5923, .a=0x31, .x=0x3a, .y=0x57, .sp=0x95, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x5922, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5922, .value=0xed, .type=IO_READ},
        {.addr=0x5923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0392) {
    const struct CPU_State initial_cpu = {.pc=0xf4d7, .a=0xd4, .x=0x3a, .y=0x4c, .sp=0x14, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf4d8, .a=0xd4, .x=0x3a, .y=0x4c, .sp=0x14, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf4d7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf4d7, .value=0xed, .type=IO_READ},
        {.addr=0xf4d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0393) {
    const struct CPU_State initial_cpu = {.pc=0x5818, .a=0x3c, .x=0x13, .y=0x7f, .sp=0x37, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5818, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5819, .a=0x3c, .x=0x13, .y=0x7f, .sp=0x37, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x5818, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5818, .value=0xed, .type=IO_READ},
        {.addr=0x5819, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0394) {
    const struct CPU_State initial_cpu = {.pc=0xcb20, .a=0xc8, .x=0x56, .y=0x52, .sp=0xca, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb20, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xcb21, .a=0xc8, .x=0x56, .y=0x52, .sp=0xca, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xcb20, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xcb20, .value=0xed, .type=IO_READ},
        {.addr=0xcb21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0395) {
    const struct CPU_State initial_cpu = {.pc=0xf070, .a=0xad, .x=0xc7, .y=0x2d, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf070, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf071, .a=0xad, .x=0xc7, .y=0x2d, .sp=0x1d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf070, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf070, .value=0xed, .type=IO_READ},
        {.addr=0xf071, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0396) {
    const struct CPU_State initial_cpu = {.pc=0x3882, .a=0x7c, .x=0x66, .y=0xd5, .sp=0x96, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3882, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3883, .a=0x7c, .x=0x66, .y=0xd5, .sp=0x96, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x3882, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3882, .value=0xed, .type=IO_READ},
        {.addr=0x3883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0397) {
    const struct CPU_State initial_cpu = {.pc=0x5a43, .a=0xf0, .x=0x1c, .y=0x1e, .sp=0x40, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5a43, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5a44, .a=0xf0, .x=0x1c, .y=0x1e, .sp=0x40, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5a43, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5a43, .value=0xed, .type=IO_READ},
        {.addr=0x5a44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0398) {
    const struct CPU_State initial_cpu = {.pc=0x38df, .a=0xec, .x=0xe0, .y=0xa6, .sp=0x44, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x38df, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x38e0, .a=0xec, .x=0xe0, .y=0xa6, .sp=0x44, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x38df, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x38df, .value=0xed, .type=IO_READ},
        {.addr=0x38e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_0399) {
    const struct CPU_State initial_cpu = {.pc=0x06f6, .a=0xf8, .x=0x29, .y=0x09, .sp=0x19, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x06f6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x06f7, .a=0xf8, .x=0x29, .y=0x09, .sp=0x19, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x06f6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x06f6, .value=0xed, .type=IO_READ},
        {.addr=0x06f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039A) {
    const struct CPU_State initial_cpu = {.pc=0x4682, .a=0x6f, .x=0xff, .y=0x33, .sp=0xc6, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4682, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4683, .a=0x6f, .x=0xff, .y=0x33, .sp=0xc6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4682, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4682, .value=0xed, .type=IO_READ},
        {.addr=0x4683, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039B) {
    const struct CPU_State initial_cpu = {.pc=0xfc8d, .a=0x7b, .x=0x6e, .y=0x70, .sp=0xd0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfc8e, .a=0x7b, .x=0x6e, .y=0x70, .sp=0xd0, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xfc8d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfc8d, .value=0xed, .type=IO_READ},
        {.addr=0xfc8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039C) {
    const struct CPU_State initial_cpu = {.pc=0x311d, .a=0x41, .x=0x3d, .y=0x79, .sp=0x23, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x311d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x311e, .a=0x41, .x=0x3d, .y=0x79, .sp=0x23, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x311d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x311d, .value=0xed, .type=IO_READ},
        {.addr=0x311e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039D) {
    const struct CPU_State initial_cpu = {.pc=0x6051, .a=0x5f, .x=0xb8, .y=0xe5, .sp=0x2a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6051, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6052, .a=0x5f, .x=0xb8, .y=0xe5, .sp=0x2a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x6051, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6051, .value=0xed, .type=IO_READ},
        {.addr=0x6052, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039E) {
    const struct CPU_State initial_cpu = {.pc=0x22fc, .a=0x56, .x=0xf7, .y=0xd8, .sp=0xab, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x22fc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x22fd, .a=0x56, .x=0xf7, .y=0xd8, .sp=0xab, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x22fc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x22fc, .value=0xed, .type=IO_READ},
        {.addr=0x22fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3745, .a=0xeb, .x=0x10, .y=0xe8, .sp=0x60, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3745, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3746, .a=0xeb, .x=0x10, .y=0xe8, .sp=0x60, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3745, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3745, .value=0xed, .type=IO_READ},
        {.addr=0x3746, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x9b96, .a=0xc4, .x=0xc1, .y=0x20, .sp=0x3c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9b96, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9b97, .a=0xc4, .x=0xc1, .y=0x20, .sp=0x3c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9b96, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9b96, .value=0xed, .type=IO_READ},
        {.addr=0x9b97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xb2a3, .a=0x6c, .x=0x41, .y=0x97, .sp=0x12, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb2a4, .a=0x6c, .x=0x41, .y=0x97, .sp=0x12, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xb2a3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb2a3, .value=0xed, .type=IO_READ},
        {.addr=0xb2a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x370f, .a=0xbb, .x=0x79, .y=0xf4, .sp=0x88, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x370f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3710, .a=0xbb, .x=0x79, .y=0xf4, .sp=0x88, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x370f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x370f, .value=0xed, .type=IO_READ},
        {.addr=0x3710, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x7ca4, .a=0x9b, .x=0x18, .y=0x88, .sp=0x2e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7ca5, .a=0x9b, .x=0x18, .y=0x88, .sp=0x2e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7ca4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7ca4, .value=0xed, .type=IO_READ},
        {.addr=0x7ca5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x1a47, .a=0x88, .x=0xed, .y=0xb8, .sp=0xca, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1a47, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1a48, .a=0x88, .x=0xed, .y=0xb8, .sp=0xca, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1a47, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1a47, .value=0xed, .type=IO_READ},
        {.addr=0x1a48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x2ad3, .a=0x94, .x=0xe0, .y=0xc3, .sp=0xaf, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2ad4, .a=0x94, .x=0xe0, .y=0xc3, .sp=0xaf, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x2ad3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2ad3, .value=0xed, .type=IO_READ},
        {.addr=0x2ad4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xf324, .a=0x13, .x=0x8b, .y=0x20, .sp=0x3d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf324, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf325, .a=0x13, .x=0x8b, .y=0x20, .sp=0x3d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf324, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf324, .value=0xed, .type=IO_READ},
        {.addr=0xf325, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x1537, .a=0x9a, .x=0x02, .y=0xba, .sp=0x5e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1537, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1538, .a=0x9a, .x=0x02, .y=0xba, .sp=0x5e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1537, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1537, .value=0xed, .type=IO_READ},
        {.addr=0x1538, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xbf20, .a=0x7a, .x=0xed, .y=0x70, .sp=0x7f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xbf20, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbf21, .a=0x7a, .x=0xed, .y=0x70, .sp=0x7f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xbf20, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbf20, .value=0xed, .type=IO_READ},
        {.addr=0xbf21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xe579, .a=0x9f, .x=0xd6, .y=0xde, .sp=0x81, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe579, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe57a, .a=0x9f, .x=0xd6, .y=0xde, .sp=0x81, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xe579, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe579, .value=0xed, .type=IO_READ},
        {.addr=0xe57a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xf793, .a=0x6d, .x=0x27, .y=0xab, .sp=0x64, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf793, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xf794, .a=0x6d, .x=0x27, .y=0xab, .sp=0x64, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf793, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xf793, .value=0xed, .type=IO_READ},
        {.addr=0xf794, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x53c7, .a=0x0d, .x=0x84, .y=0x70, .sp=0xbe, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x53c7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x53c8, .a=0x0d, .x=0x84, .y=0x70, .sp=0xbe, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x53c7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x53c7, .value=0xed, .type=IO_READ},
        {.addr=0x53c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xe0fe, .a=0xc2, .x=0x54, .y=0xac, .sp=0xfc, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe0ff, .a=0xc2, .x=0x54, .y=0xac, .sp=0xfc, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xe0fe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe0fe, .value=0xed, .type=IO_READ},
        {.addr=0xe0ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x4e92, .a=0x2b, .x=0xcc, .y=0x2f, .sp=0x2d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e92, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4e93, .a=0x2b, .x=0xcc, .y=0x2f, .sp=0x2d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4e92, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4e92, .value=0xed, .type=IO_READ},
        {.addr=0x4e93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xfec0, .a=0x0a, .x=0x20, .y=0x55, .sp=0x70, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfec0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfec1, .a=0x0a, .x=0x20, .y=0x55, .sp=0x70, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xfec0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfec0, .value=0xed, .type=IO_READ},
        {.addr=0xfec1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xb7b0, .a=0xf6, .x=0xdc, .y=0x48, .sp=0x75, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb7b1, .a=0xf6, .x=0xdc, .y=0x48, .sp=0x75, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xb7b0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb7b0, .value=0xed, .type=IO_READ},
        {.addr=0xb7b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xe30c, .a=0x95, .x=0xdb, .y=0x7d, .sp=0xca, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe30c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xe30d, .a=0x95, .x=0xdb, .y=0x7d, .sp=0xca, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe30c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xe30c, .value=0xed, .type=IO_READ},
        {.addr=0xe30d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x3e25, .a=0x41, .x=0xb6, .y=0xa5, .sp=0xaf, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3e25, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3e26, .a=0x41, .x=0xb6, .y=0xa5, .sp=0xaf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3e25, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3e25, .value=0xed, .type=IO_READ},
        {.addr=0x3e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xc8cc, .a=0xc6, .x=0xd5, .y=0x6d, .sp=0x54, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xc8cc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc8cd, .a=0xc6, .x=0xd5, .y=0x6d, .sp=0x54, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc8cc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc8cc, .value=0xed, .type=IO_READ},
        {.addr=0xc8cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x0b1f, .a=0xbe, .x=0x9b, .y=0xdc, .sp=0x19, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0b1f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0b20, .a=0xbe, .x=0x9b, .y=0xdc, .sp=0x19, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0b1f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0b1f, .value=0xed, .type=IO_READ},
        {.addr=0x0b20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xde1c, .a=0x3d, .x=0x2b, .y=0x77, .sp=0x6f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xde1c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xde1d, .a=0x3d, .x=0x2b, .y=0x77, .sp=0x6f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xde1c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xde1c, .value=0xed, .type=IO_READ},
        {.addr=0xde1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x11b7, .a=0x1c, .x=0x98, .y=0x8a, .sp=0x7b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x11b7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x11b8, .a=0x1c, .x=0x98, .y=0x8a, .sp=0x7b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x11b7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x11b7, .value=0xed, .type=IO_READ},
        {.addr=0x11b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xac68, .a=0xae, .x=0xb1, .y=0x49, .sp=0xe5, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xac68, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xac69, .a=0xae, .x=0xb1, .y=0x49, .sp=0xe5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xac68, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xac68, .value=0xed, .type=IO_READ},
        {.addr=0xac69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xa582, .a=0x14, .x=0xf6, .y=0xa9, .sp=0x60, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa582, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa583, .a=0x14, .x=0xf6, .y=0xa9, .sp=0x60, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa582, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa582, .value=0xed, .type=IO_READ},
        {.addr=0xa583, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xd758, .a=0x6c, .x=0xde, .y=0xd0, .sp=0xfa, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd758, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd759, .a=0x6c, .x=0xde, .y=0xd0, .sp=0xfa, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd758, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd758, .value=0xed, .type=IO_READ},
        {.addr=0xd759, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xa0fe, .a=0x5b, .x=0x1a, .y=0x1d, .sp=0x9b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fe, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa0ff, .a=0x5b, .x=0x1a, .y=0x1d, .sp=0x9b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa0fe, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa0fe, .value=0xed, .type=IO_READ},
        {.addr=0xa0ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x33d6, .a=0x53, .x=0x12, .y=0xa0, .sp=0x55, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x33d6, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x33d7, .a=0x53, .x=0x12, .y=0xa0, .sp=0x55, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x33d6, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x33d6, .value=0xed, .type=IO_READ},
        {.addr=0x33d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xed18, .a=0x02, .x=0xa4, .y=0xf4, .sp=0x5b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xed18, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xed19, .a=0x02, .x=0xa4, .y=0xf4, .sp=0x5b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xed18, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xed18, .value=0xed, .type=IO_READ},
        {.addr=0xed19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xdf6a, .a=0x6c, .x=0xc8, .y=0xf7, .sp=0xda, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdf6b, .a=0x6c, .x=0xc8, .y=0xf7, .sp=0xda, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xdf6a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdf6a, .value=0xed, .type=IO_READ},
        {.addr=0xdf6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xd04b, .a=0x6c, .x=0x56, .y=0x45, .sp=0x21, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd04b, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd04c, .a=0x6c, .x=0x56, .y=0x45, .sp=0x21, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd04b, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd04b, .value=0xed, .type=IO_READ},
        {.addr=0xd04c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x7ed9, .a=0x5e, .x=0xd0, .y=0x69, .sp=0x86, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7ed9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7eda, .a=0x5e, .x=0xd0, .y=0x69, .sp=0x86, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7ed9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7ed9, .value=0xed, .type=IO_READ},
        {.addr=0x7eda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x2701, .a=0xc4, .x=0xc1, .y=0x8e, .sp=0xd1, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x2701, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2702, .a=0xc4, .x=0xc1, .y=0x8e, .sp=0xd1, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x2701, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2701, .value=0xed, .type=IO_READ},
        {.addr=0x2702, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x9465, .a=0x59, .x=0xb0, .y=0x0d, .sp=0xac, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9465, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9466, .a=0x59, .x=0xb0, .y=0x0d, .sp=0xac, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9465, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9465, .value=0xed, .type=IO_READ},
        {.addr=0x9466, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x8572, .a=0xe2, .x=0x77, .y=0xc6, .sp=0x12, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8572, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8573, .a=0xe2, .x=0x77, .y=0xc6, .sp=0x12, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8572, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8572, .value=0xed, .type=IO_READ},
        {.addr=0x8573, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x3640, .a=0x57, .x=0x0c, .y=0xf7, .sp=0x35, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3640, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3641, .a=0x57, .x=0x0c, .y=0xf7, .sp=0x35, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3640, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3640, .value=0xed, .type=IO_READ},
        {.addr=0x3641, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xfca1, .a=0x76, .x=0x85, .y=0x59, .sp=0x26, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfca1, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfca2, .a=0x76, .x=0x85, .y=0x59, .sp=0x26, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfca1, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfca1, .value=0xed, .type=IO_READ},
        {.addr=0xfca2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x6e8c, .a=0x12, .x=0x64, .y=0x94, .sp=0xbc, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6e8c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6e8d, .a=0x12, .x=0x64, .y=0x94, .sp=0xbc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6e8c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6e8c, .value=0xed, .type=IO_READ},
        {.addr=0x6e8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x7e5e, .a=0xfa, .x=0x27, .y=0xec, .sp=0xc9, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7e5e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7e5f, .a=0xfa, .x=0x27, .y=0xec, .sp=0xc9, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x7e5e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7e5e, .value=0xed, .type=IO_READ},
        {.addr=0x7e5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x1700, .a=0xf0, .x=0x27, .y=0x48, .sp=0x1f, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1700, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x1701, .a=0xf0, .x=0x27, .y=0x48, .sp=0x1f, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x1700, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x1700, .value=0xed, .type=IO_READ},
        {.addr=0x1701, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x5370, .a=0x38, .x=0xcd, .y=0xda, .sp=0xeb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5370, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5371, .a=0x38, .x=0xcd, .y=0xda, .sp=0xeb, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x5370, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5370, .value=0xed, .type=IO_READ},
        {.addr=0x5371, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xbee3, .a=0x34, .x=0xaa, .y=0x59, .sp=0x1d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbee3, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbee4, .a=0x34, .x=0xaa, .y=0x59, .sp=0x1d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbee3, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbee3, .value=0xed, .type=IO_READ},
        {.addr=0xbee4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xbe87, .a=0x9e, .x=0x71, .y=0x1e, .sp=0xb7, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xbe87, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbe88, .a=0x9e, .x=0x71, .y=0x1e, .sp=0xb7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xbe87, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbe87, .value=0xed, .type=IO_READ},
        {.addr=0xbe88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xd2d7, .a=0x01, .x=0x67, .y=0x0c, .sp=0x38, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd2d8, .a=0x01, .x=0x67, .y=0x0c, .sp=0x38, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xd2d7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd2d7, .value=0xed, .type=IO_READ},
        {.addr=0xd2d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xd2d9, .a=0x0a, .x=0x68, .y=0xa0, .sp=0xba, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd2da, .a=0x0a, .x=0x68, .y=0xa0, .sp=0xba, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xd2d9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd2d9, .value=0xed, .type=IO_READ},
        {.addr=0xd2da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x23a7, .a=0x76, .x=0xae, .y=0x3a, .sp=0xa7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x23a7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x23a8, .a=0x76, .x=0xae, .y=0x3a, .sp=0xa7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x23a7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x23a7, .value=0xed, .type=IO_READ},
        {.addr=0x23a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa4c9, .a=0x6f, .x=0x57, .y=0x49, .sp=0x29, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c9, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa4ca, .a=0x6f, .x=0x57, .y=0x49, .sp=0x29, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xa4c9, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa4c9, .value=0xed, .type=IO_READ},
        {.addr=0xa4ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x0e26, .a=0x6c, .x=0xcc, .y=0x58, .sp=0x9d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0e26, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0e27, .a=0x6c, .x=0xcc, .y=0x58, .sp=0x9d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0e26, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0e26, .value=0xed, .type=IO_READ},
        {.addr=0x0e27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xa883, .a=0x41, .x=0xd3, .y=0xbd, .sp=0x1b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa883, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa884, .a=0x41, .x=0xd3, .y=0xbd, .sp=0x1b, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xa883, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa883, .value=0xed, .type=IO_READ},
        {.addr=0xa884, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x3f3c, .a=0xe7, .x=0x05, .y=0xb3, .sp=0xda, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3f3c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3f3d, .a=0xe7, .x=0x05, .y=0xb3, .sp=0xda, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x3f3c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x3f3c, .value=0xed, .type=IO_READ},
        {.addr=0x3f3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x811a, .a=0xde, .x=0xf4, .y=0xf0, .sp=0x26, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x811a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x811b, .a=0xde, .x=0xf4, .y=0xf0, .sp=0x26, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x811a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x811a, .value=0xed, .type=IO_READ},
        {.addr=0x811b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x444e, .a=0x48, .x=0x08, .y=0x1b, .sp=0x4c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x444e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x444f, .a=0x48, .x=0x08, .y=0x1b, .sp=0x4c, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x444e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x444e, .value=0xed, .type=IO_READ},
        {.addr=0x444f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xd69a, .a=0x1f, .x=0xc8, .y=0xf7, .sp=0xd4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd69a, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd69b, .a=0x1f, .x=0xc8, .y=0xf7, .sp=0xd4, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xd69a, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd69a, .value=0xed, .type=IO_READ},
        {.addr=0xd69b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xa9c2, .a=0x4d, .x=0x67, .y=0xa0, .sp=0x31, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa9c3, .a=0x4d, .x=0x67, .y=0xa0, .sp=0x31, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa9c2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa9c2, .value=0xed, .type=IO_READ},
        {.addr=0xa9c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6ec0, .a=0x72, .x=0x5c, .y=0xb8, .sp=0x30, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6ec1, .a=0x72, .x=0x5c, .y=0xb8, .sp=0x30, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x6ec0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6ec0, .value=0xed, .type=IO_READ},
        {.addr=0x6ec1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6f91, .a=0x16, .x=0x55, .y=0x39, .sp=0x7a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6f91, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x6f92, .a=0x16, .x=0x55, .y=0x39, .sp=0x7a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6f91, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x6f91, .value=0xed, .type=IO_READ},
        {.addr=0x6f92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x69b7, .a=0xcb, .x=0xc4, .y=0xa1, .sp=0x10, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x69b7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x69b8, .a=0xcb, .x=0xc4, .y=0xa1, .sp=0x10, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x69b7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x69b7, .value=0xed, .type=IO_READ},
        {.addr=0x69b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x7527, .a=0xf5, .x=0x8a, .y=0xf0, .sp=0xdb, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7527, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x7528, .a=0xf5, .x=0x8a, .y=0xf0, .sp=0xdb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7527, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x7527, .value=0xed, .type=IO_READ},
        {.addr=0x7528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x19ca, .a=0x3d, .x=0x93, .y=0xfe, .sp=0x6b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x19ca, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x19cb, .a=0x3d, .x=0x93, .y=0xfe, .sp=0x6b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x19ca, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x19ca, .value=0xed, .type=IO_READ},
        {.addr=0x19cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd6d4, .a=0xc8, .x=0xf5, .y=0xb4, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d4, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd6d5, .a=0xc8, .x=0xf5, .y=0xb4, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd6d4, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd6d4, .value=0xed, .type=IO_READ},
        {.addr=0xd6d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x2097, .a=0x6e, .x=0xd3, .y=0xcd, .sp=0xea, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2097, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x2098, .a=0x6e, .x=0xd3, .y=0xcd, .sp=0xea, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x2097, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x2097, .value=0xed, .type=IO_READ},
        {.addr=0x2098, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x0d58, .a=0x1d, .x=0x2e, .y=0x57, .sp=0x3f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0d58, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0d59, .a=0x1d, .x=0x2e, .y=0x57, .sp=0x3f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0d58, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0d58, .value=0xed, .type=IO_READ},
        {.addr=0x0d59, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x5b10, .a=0xbf, .x=0xcb, .y=0x87, .sp=0x14, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5b10, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x5b11, .a=0xbf, .x=0xcb, .y=0x87, .sp=0x14, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x5b10, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x5b10, .value=0xed, .type=IO_READ},
        {.addr=0x5b11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb911, .a=0x20, .x=0x48, .y=0x0c, .sp=0xc9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb911, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb912, .a=0x20, .x=0x48, .y=0x0c, .sp=0xc9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb911, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb911, .value=0xed, .type=IO_READ},
        {.addr=0xb912, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x9f46, .a=0xde, .x=0x6d, .y=0x88, .sp=0x29, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9f46, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x9f47, .a=0xde, .x=0x6d, .y=0x88, .sp=0x29, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9f46, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x9f46, .value=0xed, .type=IO_READ},
        {.addr=0x9f47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xd880, .a=0x5f, .x=0xd8, .y=0x08, .sp=0x96, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd880, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd881, .a=0x5f, .x=0xd8, .y=0x08, .sp=0x96, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd880, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd880, .value=0xed, .type=IO_READ},
        {.addr=0xd881, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x4cfc, .a=0xe2, .x=0xa6, .y=0x96, .sp=0x07, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfc, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4cfd, .a=0xe2, .x=0xa6, .y=0x96, .sp=0x07, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4cfc, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4cfc, .value=0xed, .type=IO_READ},
        {.addr=0x4cfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x4547, .a=0xa5, .x=0xae, .y=0x2b, .sp=0x58, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4547, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4548, .a=0xa5, .x=0xae, .y=0x2b, .sp=0x58, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x4547, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4547, .value=0xed, .type=IO_READ},
        {.addr=0x4548, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x31db, .a=0xae, .x=0xdc, .y=0x1c, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x31db, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x31dc, .a=0xae, .x=0xdc, .y=0x1c, .sp=0xdc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x31db, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x31db, .value=0xed, .type=IO_READ},
        {.addr=0x31dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb031, .a=0x7c, .x=0xcf, .y=0xea, .sp=0x21, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb031, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xb032, .a=0x7c, .x=0xcf, .y=0xea, .sp=0x21, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xb031, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xb031, .value=0xed, .type=IO_READ},
        {.addr=0xb032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xfb3f, .a=0xca, .x=0x3d, .y=0x74, .sp=0x66, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfb3f, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfb40, .a=0xca, .x=0x3d, .y=0x74, .sp=0x66, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfb3f, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfb3f, .value=0xed, .type=IO_READ},
        {.addr=0xfb40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xd068, .a=0x15, .x=0x4d, .y=0x39, .sp=0x83, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xd068, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd069, .a=0x15, .x=0x4d, .y=0x39, .sp=0x83, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xd068, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd068, .value=0xed, .type=IO_READ},
        {.addr=0xd069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_ED, _ED_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x4402, .a=0x19, .x=0x95, .y=0xa4, .sp=0xbc, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4402, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x4403, .a=0x19, .x=0x95, .y=0xa4, .sp=0xbc, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x4402, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x4402, .value=0xed, .type=IO_READ},
        {.addr=0x4403, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("ED 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
