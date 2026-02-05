#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_20, _20_0000) {
    const struct CPU_State initial_cpu = {.pc=0x66b2, .a=0xa9, .x=0x8a, .y=0xf4, .sp=0x8c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x66b2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x66b3, .a=0xa9, .x=0x8a, .y=0xf4, .sp=0x8c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x66b2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x66b2, .value=0x20, .type=IO_READ},
        {.addr=0x66b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0af6, .a=0xde, .x=0x1f, .y=0xd0, .sp=0x42, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0af6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0af7, .a=0xde, .x=0x1f, .y=0xd0, .sp=0x42, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0af6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0af6, .value=0x20, .type=IO_READ},
        {.addr=0x0af7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0002) {
    const struct CPU_State initial_cpu = {.pc=0x7947, .a=0x39, .x=0xaf, .y=0x37, .sp=0xec, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7947, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7948, .a=0x39, .x=0xaf, .y=0x37, .sp=0xec, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x7947, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7947, .value=0x20, .type=IO_READ},
        {.addr=0x7948, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0003) {
    const struct CPU_State initial_cpu = {.pc=0xca53, .a=0xfa, .x=0xe9, .y=0x66, .sp=0xdf, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xca53, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xca54, .a=0xfa, .x=0xe9, .y=0x66, .sp=0xdf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xca53, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xca53, .value=0x20, .type=IO_READ},
        {.addr=0xca54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa4d9, .a=0xf1, .x=0x8d, .y=0xaf, .sp=0x0c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4da, .a=0xf1, .x=0x8d, .y=0xaf, .sp=0x0c, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa4d9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4d9, .value=0x20, .type=IO_READ},
        {.addr=0xa4da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0005) {
    const struct CPU_State initial_cpu = {.pc=0x253d, .a=0x8b, .x=0x12, .y=0x69, .sp=0x59, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x253d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x253e, .a=0x8b, .x=0x12, .y=0x69, .sp=0x59, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x253d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x253d, .value=0x20, .type=IO_READ},
        {.addr=0x253e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0006) {
    const struct CPU_State initial_cpu = {.pc=0xf6a6, .a=0x6a, .x=0x52, .y=0x56, .sp=0x8e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf6a7, .a=0x6a, .x=0x52, .y=0x56, .sp=0x8e, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xf6a6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf6a6, .value=0x20, .type=IO_READ},
        {.addr=0xf6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0007) {
    const struct CPU_State initial_cpu = {.pc=0xeb46, .a=0xbc, .x=0x65, .y=0x40, .sp=0x5d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb46, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeb47, .a=0xbc, .x=0x65, .y=0x40, .sp=0x5d, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xeb46, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeb46, .value=0x20, .type=IO_READ},
        {.addr=0xeb47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0008) {
    const struct CPU_State initial_cpu = {.pc=0xd6ea, .a=0xce, .x=0x06, .y=0x4d, .sp=0xc9, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ea, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd6eb, .a=0xce, .x=0x06, .y=0x4d, .sp=0xc9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd6ea, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd6ea, .value=0x20, .type=IO_READ},
        {.addr=0xd6eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0009) {
    const struct CPU_State initial_cpu = {.pc=0xd900, .a=0x46, .x=0xa3, .y=0xef, .sp=0xe9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd900, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd901, .a=0x46, .x=0xa3, .y=0xef, .sp=0xe9, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xd900, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd900, .value=0x20, .type=IO_READ},
        {.addr=0xd901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000A) {
    const struct CPU_State initial_cpu = {.pc=0x3e39, .a=0xb3, .x=0xf6, .y=0x9e, .sp=0x41, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3e39, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3e3a, .a=0xb3, .x=0xf6, .y=0x9e, .sp=0x41, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x3e39, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3e39, .value=0x20, .type=IO_READ},
        {.addr=0x3e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000B) {
    const struct CPU_State initial_cpu = {.pc=0xaf17, .a=0x8d, .x=0x20, .y=0x23, .sp=0x91, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf17, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaf18, .a=0x8d, .x=0x20, .y=0x23, .sp=0x91, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xaf17, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaf17, .value=0x20, .type=IO_READ},
        {.addr=0xaf18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000C) {
    const struct CPU_State initial_cpu = {.pc=0xe00c, .a=0xbf, .x=0x41, .y=0x78, .sp=0xa4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xe00c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe00d, .a=0xbf, .x=0x41, .y=0x78, .sp=0xa4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe00c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe00c, .value=0x20, .type=IO_READ},
        {.addr=0xe00d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000D) {
    const struct CPU_State initial_cpu = {.pc=0x757c, .a=0x0b, .x=0x81, .y=0x0f, .sp=0xc8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x757c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x757d, .a=0x0b, .x=0x81, .y=0x0f, .sp=0xc8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x757c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x757c, .value=0x20, .type=IO_READ},
        {.addr=0x757d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000E) {
    const struct CPU_State initial_cpu = {.pc=0xf32c, .a=0x24, .x=0x1f, .y=0xb8, .sp=0xdb, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf32c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf32d, .a=0x24, .x=0x1f, .y=0xb8, .sp=0xdb, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xf32c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf32c, .value=0x20, .type=IO_READ},
        {.addr=0xf32d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_000F) {
    const struct CPU_State initial_cpu = {.pc=0xeaba, .a=0xea, .x=0xf4, .y=0x16, .sp=0xa1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xeaba, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeabb, .a=0xea, .x=0xf4, .y=0x16, .sp=0xa1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xeaba, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeaba, .value=0x20, .type=IO_READ},
        {.addr=0xeabb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0010) {
    const struct CPU_State initial_cpu = {.pc=0x8d52, .a=0x91, .x=0x60, .y=0xe9, .sp=0xeb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8d52, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8d53, .a=0x91, .x=0x60, .y=0xe9, .sp=0xeb, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8d52, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8d52, .value=0x20, .type=IO_READ},
        {.addr=0x8d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0011) {
    const struct CPU_State initial_cpu = {.pc=0xa0b3, .a=0x4d, .x=0x79, .y=0x3b, .sp=0x28, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa0b4, .a=0x4d, .x=0x79, .y=0x3b, .sp=0x28, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xa0b3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa0b3, .value=0x20, .type=IO_READ},
        {.addr=0xa0b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0012) {
    const struct CPU_State initial_cpu = {.pc=0x1392, .a=0x1e, .x=0xb5, .y=0x6c, .sp=0x99, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x1392, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1393, .a=0x1e, .x=0xb5, .y=0x6c, .sp=0x99, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1392, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1392, .value=0x20, .type=IO_READ},
        {.addr=0x1393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0013) {
    const struct CPU_State initial_cpu = {.pc=0x87b7, .a=0x0a, .x=0x10, .y=0xba, .sp=0x81, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x87b7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x87b8, .a=0x0a, .x=0x10, .y=0xba, .sp=0x81, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x87b7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x87b7, .value=0x20, .type=IO_READ},
        {.addr=0x87b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0014) {
    const struct CPU_State initial_cpu = {.pc=0xe2b6, .a=0xf6, .x=0x5e, .y=0xa8, .sp=0xdf, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe2b6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe2b7, .a=0xf6, .x=0x5e, .y=0xa8, .sp=0xdf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe2b6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe2b6, .value=0x20, .type=IO_READ},
        {.addr=0xe2b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0015) {
    const struct CPU_State initial_cpu = {.pc=0x1b73, .a=0x26, .x=0x3c, .y=0x07, .sp=0x68, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1b73, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1b74, .a=0x26, .x=0x3c, .y=0x07, .sp=0x68, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x1b73, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1b73, .value=0x20, .type=IO_READ},
        {.addr=0x1b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0016) {
    const struct CPU_State initial_cpu = {.pc=0xcf5f, .a=0xae, .x=0xcd, .y=0x2b, .sp=0xe0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf5f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcf60, .a=0xae, .x=0xcd, .y=0x2b, .sp=0xe0, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xcf5f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcf5f, .value=0x20, .type=IO_READ},
        {.addr=0xcf60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0017) {
    const struct CPU_State initial_cpu = {.pc=0xbb9b, .a=0xac, .x=0x97, .y=0x29, .sp=0x72, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbb9c, .a=0xac, .x=0x97, .y=0x29, .sp=0x72, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbb9b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbb9b, .value=0x20, .type=IO_READ},
        {.addr=0xbb9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0018) {
    const struct CPU_State initial_cpu = {.pc=0x6eeb, .a=0x4d, .x=0x9b, .y=0x51, .sp=0xda, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6eeb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6eec, .a=0x4d, .x=0x9b, .y=0x51, .sp=0xda, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6eeb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6eeb, .value=0x20, .type=IO_READ},
        {.addr=0x6eec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0019) {
    const struct CPU_State initial_cpu = {.pc=0x974c, .a=0x16, .x=0x89, .y=0xbc, .sp=0xad, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x974c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x974d, .a=0x16, .x=0x89, .y=0xbc, .sp=0xad, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x974c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x974c, .value=0x20, .type=IO_READ},
        {.addr=0x974d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001A) {
    const struct CPU_State initial_cpu = {.pc=0x688b, .a=0xfa, .x=0x86, .y=0x9c, .sp=0x1b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x688b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x688c, .a=0xfa, .x=0x86, .y=0x9c, .sp=0x1b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x688b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x688b, .value=0x20, .type=IO_READ},
        {.addr=0x688c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001B) {
    const struct CPU_State initial_cpu = {.pc=0x8ded, .a=0x28, .x=0xad, .y=0x3a, .sp=0x96, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x8ded, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8dee, .a=0x28, .x=0xad, .y=0x3a, .sp=0x96, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x8ded, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8ded, .value=0x20, .type=IO_READ},
        {.addr=0x8dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001C) {
    const struct CPU_State initial_cpu = {.pc=0x020a, .a=0xa9, .x=0x29, .y=0xa7, .sp=0x41, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x020a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x020b, .a=0xa9, .x=0x29, .y=0xa7, .sp=0x41, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x020a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x020a, .value=0x20, .type=IO_READ},
        {.addr=0x020b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001D) {
    const struct CPU_State initial_cpu = {.pc=0xb13e, .a=0xeb, .x=0xb8, .y=0x4d, .sp=0x4d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb13e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb13f, .a=0xeb, .x=0xb8, .y=0x4d, .sp=0x4d, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xb13e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb13e, .value=0x20, .type=IO_READ},
        {.addr=0xb13f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001E) {
    const struct CPU_State initial_cpu = {.pc=0x3742, .a=0x88, .x=0x51, .y=0xf2, .sp=0x55, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3742, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3743, .a=0x88, .x=0x51, .y=0xf2, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3742, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3742, .value=0x20, .type=IO_READ},
        {.addr=0x3743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4763, .a=0x90, .x=0x0e, .y=0xfa, .sp=0xd2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4763, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4764, .a=0x90, .x=0x0e, .y=0xfa, .sp=0xd2, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x4763, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4763, .value=0x20, .type=IO_READ},
        {.addr=0x4764, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0020) {
    const struct CPU_State initial_cpu = {.pc=0xfcfd, .a=0xf5, .x=0xf1, .y=0x08, .sp=0xb4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xfcfd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfcfe, .a=0xf5, .x=0xf1, .y=0x08, .sp=0xb4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfcfd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfcfd, .value=0x20, .type=IO_READ},
        {.addr=0xfcfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0021) {
    const struct CPU_State initial_cpu = {.pc=0xe0d4, .a=0x80, .x=0x66, .y=0x41, .sp=0xde, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe0d5, .a=0x80, .x=0x66, .y=0x41, .sp=0xde, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe0d4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe0d4, .value=0x20, .type=IO_READ},
        {.addr=0xe0d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9f1e, .a=0x05, .x=0x9e, .y=0x5f, .sp=0xf4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9f1e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9f1f, .a=0x05, .x=0x9e, .y=0x5f, .sp=0xf4, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x9f1e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9f1e, .value=0x20, .type=IO_READ},
        {.addr=0x9f1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0023) {
    const struct CPU_State initial_cpu = {.pc=0xb077, .a=0x99, .x=0x73, .y=0xfa, .sp=0xaa, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb077, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb078, .a=0x99, .x=0x73, .y=0xfa, .sp=0xaa, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb077, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb077, .value=0x20, .type=IO_READ},
        {.addr=0xb078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0024) {
    const struct CPU_State initial_cpu = {.pc=0x7dd4, .a=0x52, .x=0x5e, .y=0x35, .sp=0xdb, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7dd5, .a=0x52, .x=0x5e, .y=0x35, .sp=0xdb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7dd4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7dd4, .value=0x20, .type=IO_READ},
        {.addr=0x7dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0025) {
    const struct CPU_State initial_cpu = {.pc=0xd537, .a=0x0c, .x=0x9c, .y=0xd9, .sp=0x83, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xd537, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd538, .a=0x0c, .x=0x9c, .y=0xd9, .sp=0x83, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd537, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd537, .value=0x20, .type=IO_READ},
        {.addr=0xd538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0026) {
    const struct CPU_State initial_cpu = {.pc=0xa935, .a=0x0c, .x=0xed, .y=0x72, .sp=0x6f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa935, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa936, .a=0x0c, .x=0xed, .y=0x72, .sp=0x6f, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa935, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa935, .value=0x20, .type=IO_READ},
        {.addr=0xa936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5032, .a=0x18, .x=0xe9, .y=0x5d, .sp=0xe5, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5032, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5033, .a=0x18, .x=0xe9, .y=0x5d, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5032, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5032, .value=0x20, .type=IO_READ},
        {.addr=0x5033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0028) {
    const struct CPU_State initial_cpu = {.pc=0x5958, .a=0x6b, .x=0xdf, .y=0x7f, .sp=0xf0, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5958, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5959, .a=0x6b, .x=0xdf, .y=0x7f, .sp=0xf0, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5958, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5958, .value=0x20, .type=IO_READ},
        {.addr=0x5959, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0029) {
    const struct CPU_State initial_cpu = {.pc=0xfd34, .a=0x17, .x=0x47, .y=0xd7, .sp=0x42, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xfd34, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfd35, .a=0x17, .x=0x47, .y=0xd7, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xfd34, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfd34, .value=0x20, .type=IO_READ},
        {.addr=0xfd35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002A) {
    const struct CPU_State initial_cpu = {.pc=0x934e, .a=0x3b, .x=0xef, .y=0x34, .sp=0xbb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x934e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x934f, .a=0x3b, .x=0xef, .y=0x34, .sp=0xbb, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x934e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x934e, .value=0x20, .type=IO_READ},
        {.addr=0x934f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002B) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0x88, .x=0x3d, .y=0x50, .sp=0xc9, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0x88, .x=0x3d, .y=0x50, .sp=0xc9, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0x20, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002C) {
    const struct CPU_State initial_cpu = {.pc=0x0807, .a=0x79, .x=0x54, .y=0xce, .sp=0xa0, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0807, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0808, .a=0x79, .x=0x54, .y=0xce, .sp=0xa0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0807, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0807, .value=0x20, .type=IO_READ},
        {.addr=0x0808, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9bf3, .a=0x93, .x=0xda, .y=0xa9, .sp=0xa5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9bf4, .a=0x93, .x=0xda, .y=0xa9, .sp=0xa5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9bf3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9bf3, .value=0x20, .type=IO_READ},
        {.addr=0x9bf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9494, .a=0xc2, .x=0x02, .y=0xb6, .sp=0x0d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9494, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9495, .a=0xc2, .x=0x02, .y=0xb6, .sp=0x0d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x9494, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9494, .value=0x20, .type=IO_READ},
        {.addr=0x9495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_002F) {
    const struct CPU_State initial_cpu = {.pc=0x728b, .a=0x74, .x=0x7d, .y=0x9f, .sp=0xe0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x728b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x728c, .a=0x74, .x=0x7d, .y=0x9f, .sp=0xe0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x728b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x728b, .value=0x20, .type=IO_READ},
        {.addr=0x728c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0030) {
    const struct CPU_State initial_cpu = {.pc=0x422d, .a=0x93, .x=0x50, .y=0x35, .sp=0xed, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x422d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x422e, .a=0x93, .x=0x50, .y=0x35, .sp=0xed, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x422d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x422d, .value=0x20, .type=IO_READ},
        {.addr=0x422e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0031) {
    const struct CPU_State initial_cpu = {.pc=0xd19b, .a=0x55, .x=0x89, .y=0xea, .sp=0x27, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd19b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd19c, .a=0x55, .x=0x89, .y=0xea, .sp=0x27, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd19b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd19b, .value=0x20, .type=IO_READ},
        {.addr=0xd19c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0032) {
    const struct CPU_State initial_cpu = {.pc=0xd208, .a=0x2f, .x=0xd2, .y=0xbf, .sp=0x53, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd208, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd209, .a=0x2f, .x=0xd2, .y=0xbf, .sp=0x53, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd208, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd208, .value=0x20, .type=IO_READ},
        {.addr=0xd209, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0033) {
    const struct CPU_State initial_cpu = {.pc=0x69e1, .a=0xa0, .x=0x17, .y=0x36, .sp=0xec, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x69e1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x69e2, .a=0xa0, .x=0x17, .y=0x36, .sp=0xec, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x69e1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x69e1, .value=0x20, .type=IO_READ},
        {.addr=0x69e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0034) {
    const struct CPU_State initial_cpu = {.pc=0x554f, .a=0x53, .x=0x58, .y=0x1c, .sp=0x0b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x554f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5550, .a=0x53, .x=0x58, .y=0x1c, .sp=0x0b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x554f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x554f, .value=0x20, .type=IO_READ},
        {.addr=0x5550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0035) {
    const struct CPU_State initial_cpu = {.pc=0xaebb, .a=0x53, .x=0x3a, .y=0x0f, .sp=0x7d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xaebb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaebc, .a=0x53, .x=0x3a, .y=0x0f, .sp=0x7d, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xaebb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaebb, .value=0x20, .type=IO_READ},
        {.addr=0xaebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0036) {
    const struct CPU_State initial_cpu = {.pc=0xac0c, .a=0x95, .x=0x3a, .y=0xc7, .sp=0x4c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xac0c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xac0d, .a=0x95, .x=0x3a, .y=0xc7, .sp=0x4c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xac0c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xac0c, .value=0x20, .type=IO_READ},
        {.addr=0xac0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0037) {
    const struct CPU_State initial_cpu = {.pc=0x289c, .a=0xda, .x=0xf7, .y=0x2a, .sp=0xb8, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x289c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x289d, .a=0xda, .x=0xf7, .y=0x2a, .sp=0xb8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x289c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x289c, .value=0x20, .type=IO_READ},
        {.addr=0x289d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0038) {
    const struct CPU_State initial_cpu = {.pc=0x0b98, .a=0xf3, .x=0x91, .y=0xb8, .sp=0x99, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0b98, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0b99, .a=0xf3, .x=0x91, .y=0xb8, .sp=0x99, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0b98, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0b98, .value=0x20, .type=IO_READ},
        {.addr=0x0b99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0039) {
    const struct CPU_State initial_cpu = {.pc=0xd4bd, .a=0x17, .x=0x54, .y=0xe7, .sp=0x1b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xd4bd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd4be, .a=0x17, .x=0x54, .y=0xe7, .sp=0x1b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd4bd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd4bd, .value=0x20, .type=IO_READ},
        {.addr=0xd4be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003A) {
    const struct CPU_State initial_cpu = {.pc=0x9cda, .a=0x79, .x=0x18, .y=0x6b, .sp=0x1d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9cda, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9cdb, .a=0x79, .x=0x18, .y=0x6b, .sp=0x1d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9cda, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9cda, .value=0x20, .type=IO_READ},
        {.addr=0x9cdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003B) {
    const struct CPU_State initial_cpu = {.pc=0x6a06, .a=0x5b, .x=0xc4, .y=0x8f, .sp=0xb6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6a06, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a07, .a=0x5b, .x=0xc4, .y=0x8f, .sp=0xb6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x6a06, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a06, .value=0x20, .type=IO_READ},
        {.addr=0x6a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003C) {
    const struct CPU_State initial_cpu = {.pc=0x807b, .a=0x46, .x=0x35, .y=0x4b, .sp=0xf6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x807b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x807c, .a=0x46, .x=0x35, .y=0x4b, .sp=0xf6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x807b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x807b, .value=0x20, .type=IO_READ},
        {.addr=0x807c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003D) {
    const struct CPU_State initial_cpu = {.pc=0x5e87, .a=0xbd, .x=0x10, .y=0x53, .sp=0x10, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5e87, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e88, .a=0xbd, .x=0x10, .y=0x53, .sp=0x10, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5e87, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e87, .value=0x20, .type=IO_READ},
        {.addr=0x5e88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003E) {
    const struct CPU_State initial_cpu = {.pc=0x70b7, .a=0x43, .x=0xcd, .y=0xe4, .sp=0xe6, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x70b7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x70b8, .a=0x43, .x=0xcd, .y=0xe4, .sp=0xe6, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x70b7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x70b7, .value=0x20, .type=IO_READ},
        {.addr=0x70b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_003F) {
    const struct CPU_State initial_cpu = {.pc=0x347d, .a=0xbf, .x=0xdb, .y=0x43, .sp=0xb6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x347d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x347e, .a=0xbf, .x=0xdb, .y=0x43, .sp=0xb6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x347d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x347d, .value=0x20, .type=IO_READ},
        {.addr=0x347e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0040) {
    const struct CPU_State initial_cpu = {.pc=0x021a, .a=0x1f, .x=0xeb, .y=0x71, .sp=0x4b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x021a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x021b, .a=0x1f, .x=0xeb, .y=0x71, .sp=0x4b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x021a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x021a, .value=0x20, .type=IO_READ},
        {.addr=0x021b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0041) {
    const struct CPU_State initial_cpu = {.pc=0xae82, .a=0x1e, .x=0xc8, .y=0x8d, .sp=0xdf, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xae82, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae83, .a=0x1e, .x=0xc8, .y=0x8d, .sp=0xdf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xae82, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae82, .value=0x20, .type=IO_READ},
        {.addr=0xae83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0042) {
    const struct CPU_State initial_cpu = {.pc=0x2dac, .a=0xb3, .x=0x75, .y=0xe9, .sp=0x60, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x2dac, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2dad, .a=0xb3, .x=0x75, .y=0xe9, .sp=0x60, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2dac, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2dac, .value=0x20, .type=IO_READ},
        {.addr=0x2dad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0043) {
    const struct CPU_State initial_cpu = {.pc=0x0d0c, .a=0xe7, .x=0x6d, .y=0x0f, .sp=0x60, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0d0c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0d0d, .a=0xe7, .x=0x6d, .y=0x0f, .sp=0x60, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0d0c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0d0c, .value=0x20, .type=IO_READ},
        {.addr=0x0d0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0044) {
    const struct CPU_State initial_cpu = {.pc=0xca2c, .a=0x3d, .x=0xcb, .y=0xaa, .sp=0x6c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xca2c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xca2d, .a=0x3d, .x=0xcb, .y=0xaa, .sp=0x6c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xca2c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xca2c, .value=0x20, .type=IO_READ},
        {.addr=0xca2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0045) {
    const struct CPU_State initial_cpu = {.pc=0xdabb, .a=0x93, .x=0xda, .y=0x12, .sp=0x86, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xdabb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdabc, .a=0x93, .x=0xda, .y=0x12, .sp=0x86, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdabb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdabb, .value=0x20, .type=IO_READ},
        {.addr=0xdabc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0046) {
    const struct CPU_State initial_cpu = {.pc=0x5d66, .a=0xc6, .x=0xd8, .y=0x54, .sp=0xd8, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5d66, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5d67, .a=0xc6, .x=0xd8, .y=0x54, .sp=0xd8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5d66, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5d66, .value=0x20, .type=IO_READ},
        {.addr=0x5d67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0047) {
    const struct CPU_State initial_cpu = {.pc=0x175d, .a=0x62, .x=0xfa, .y=0x86, .sp=0x17, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x175d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x175e, .a=0x62, .x=0xfa, .y=0x86, .sp=0x17, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x175d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x175d, .value=0x20, .type=IO_READ},
        {.addr=0x175e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0048) {
    const struct CPU_State initial_cpu = {.pc=0x0f8f, .a=0x58, .x=0x4d, .y=0xc0, .sp=0x32, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0f8f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0f90, .a=0x58, .x=0x4d, .y=0xc0, .sp=0x32, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0f8f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0f8f, .value=0x20, .type=IO_READ},
        {.addr=0x0f90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0049) {
    const struct CPU_State initial_cpu = {.pc=0x77d5, .a=0xe1, .x=0x15, .y=0x54, .sp=0x9c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x77d5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0xe1, .x=0x15, .y=0x54, .sp=0x9c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x77d5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x77d5, .value=0x20, .type=IO_READ},
        {.addr=0x77d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb9bd, .a=0x07, .x=0x3d, .y=0x51, .sp=0x1d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb9bd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb9be, .a=0x07, .x=0x3d, .y=0x51, .sp=0x1d, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb9bd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb9bd, .value=0x20, .type=IO_READ},
        {.addr=0xb9be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004B) {
    const struct CPU_State initial_cpu = {.pc=0xe5e0, .a=0x52, .x=0x2d, .y=0x7b, .sp=0xbd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe5e1, .a=0x52, .x=0x2d, .y=0x7b, .sp=0xbd, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xe5e0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe5e0, .value=0x20, .type=IO_READ},
        {.addr=0xe5e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004C) {
    const struct CPU_State initial_cpu = {.pc=0x8666, .a=0xd9, .x=0xfa, .y=0xea, .sp=0x5d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8666, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8667, .a=0xd9, .x=0xfa, .y=0xea, .sp=0x5d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8666, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8666, .value=0x20, .type=IO_READ},
        {.addr=0x8667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf6fc, .a=0x53, .x=0xd6, .y=0x17, .sp=0x70, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf6fc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf6fd, .a=0x53, .x=0xd6, .y=0x17, .sp=0x70, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf6fc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf6fc, .value=0x20, .type=IO_READ},
        {.addr=0xf6fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004E) {
    const struct CPU_State initial_cpu = {.pc=0x2ac3, .a=0x77, .x=0xb3, .y=0xbf, .sp=0xb2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2ac4, .a=0x77, .x=0xb3, .y=0xbf, .sp=0xb2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2ac3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ac3, .value=0x20, .type=IO_READ},
        {.addr=0x2ac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_004F) {
    const struct CPU_State initial_cpu = {.pc=0x8113, .a=0x8e, .x=0xcc, .y=0x91, .sp=0xb9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8113, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8114, .a=0x8e, .x=0xcc, .y=0x91, .sp=0xb9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8113, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8113, .value=0x20, .type=IO_READ},
        {.addr=0x8114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0050) {
    const struct CPU_State initial_cpu = {.pc=0x1fec, .a=0x1a, .x=0xc7, .y=0xc3, .sp=0x0c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1fec, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1fed, .a=0x1a, .x=0xc7, .y=0xc3, .sp=0x0c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1fec, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1fec, .value=0x20, .type=IO_READ},
        {.addr=0x1fed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8bb6, .a=0x85, .x=0xaf, .y=0x64, .sp=0x16, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8bb7, .a=0x85, .x=0xaf, .y=0x64, .sp=0x16, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x8bb6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8bb6, .value=0x20, .type=IO_READ},
        {.addr=0x8bb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0052) {
    const struct CPU_State initial_cpu = {.pc=0xae3d, .a=0x0e, .x=0x2e, .y=0xb9, .sp=0xda, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xae3d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae3e, .a=0x0e, .x=0x2e, .y=0xb9, .sp=0xda, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xae3d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae3d, .value=0x20, .type=IO_READ},
        {.addr=0xae3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0053) {
    const struct CPU_State initial_cpu = {.pc=0x0fc3, .a=0xab, .x=0xa3, .y=0xd3, .sp=0x68, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0fc4, .a=0xab, .x=0xa3, .y=0xd3, .sp=0x68, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0fc3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0fc3, .value=0x20, .type=IO_READ},
        {.addr=0x0fc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0054) {
    const struct CPU_State initial_cpu = {.pc=0xe030, .a=0x33, .x=0x74, .y=0x81, .sp=0x21, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe030, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe031, .a=0x33, .x=0x74, .y=0x81, .sp=0x21, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe030, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe030, .value=0x20, .type=IO_READ},
        {.addr=0xe031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0055) {
    const struct CPU_State initial_cpu = {.pc=0xf743, .a=0x02, .x=0x4a, .y=0xe8, .sp=0xcf, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xf743, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf744, .a=0x02, .x=0x4a, .y=0xe8, .sp=0xcf, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xf743, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf743, .value=0x20, .type=IO_READ},
        {.addr=0xf744, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0056) {
    const struct CPU_State initial_cpu = {.pc=0x8caa, .a=0x5d, .x=0xa7, .y=0xe2, .sp=0x87, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8caa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8cab, .a=0x5d, .x=0xa7, .y=0xe2, .sp=0x87, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x8caa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8caa, .value=0x20, .type=IO_READ},
        {.addr=0x8cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0057) {
    const struct CPU_State initial_cpu = {.pc=0xf5af, .a=0x36, .x=0x7e, .y=0x0f, .sp=0xd0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf5af, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf5b0, .a=0x36, .x=0x7e, .y=0x0f, .sp=0xd0, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf5af, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf5af, .value=0x20, .type=IO_READ},
        {.addr=0xf5b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0058) {
    const struct CPU_State initial_cpu = {.pc=0x89e7, .a=0x92, .x=0x7c, .y=0xc3, .sp=0xaf, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x89e7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x89e8, .a=0x92, .x=0x7c, .y=0xc3, .sp=0xaf, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x89e7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x89e7, .value=0x20, .type=IO_READ},
        {.addr=0x89e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0059) {
    const struct CPU_State initial_cpu = {.pc=0x3801, .a=0xed, .x=0x33, .y=0xc7, .sp=0xcb, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3801, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3802, .a=0xed, .x=0x33, .y=0xc7, .sp=0xcb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3801, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3801, .value=0x20, .type=IO_READ},
        {.addr=0x3802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005A) {
    const struct CPU_State initial_cpu = {.pc=0x02ca, .a=0x1b, .x=0x76, .y=0xa3, .sp=0x14, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x02ca, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x02cb, .a=0x1b, .x=0x76, .y=0xa3, .sp=0x14, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x02ca, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x02ca, .value=0x20, .type=IO_READ},
        {.addr=0x02cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005B) {
    const struct CPU_State initial_cpu = {.pc=0x035f, .a=0xee, .x=0x89, .y=0xbc, .sp=0xdc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x035f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0360, .a=0xee, .x=0x89, .y=0xbc, .sp=0xdc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x035f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x035f, .value=0x20, .type=IO_READ},
        {.addr=0x0360, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005C) {
    const struct CPU_State initial_cpu = {.pc=0xfcf1, .a=0x9a, .x=0x22, .y=0xbf, .sp=0x98, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfcf2, .a=0x9a, .x=0x22, .y=0xbf, .sp=0x98, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfcf1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfcf1, .value=0x20, .type=IO_READ},
        {.addr=0xfcf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005D) {
    const struct CPU_State initial_cpu = {.pc=0x5ab8, .a=0xc8, .x=0x75, .y=0x8c, .sp=0x21, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5ab9, .a=0xc8, .x=0x75, .y=0x8c, .sp=0x21, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x5ab8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5ab8, .value=0x20, .type=IO_READ},
        {.addr=0x5ab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb229, .a=0xe0, .x=0x2a, .y=0x9c, .sp=0xae, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb229, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb22a, .a=0xe0, .x=0x2a, .y=0x9c, .sp=0xae, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xb229, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb229, .value=0x20, .type=IO_READ},
        {.addr=0xb22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_005F) {
    const struct CPU_State initial_cpu = {.pc=0xd0a7, .a=0x56, .x=0x2f, .y=0x57, .sp=0x5a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd0a8, .a=0x56, .x=0x2f, .y=0x57, .sp=0x5a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd0a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd0a7, .value=0x20, .type=IO_READ},
        {.addr=0xd0a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0060) {
    const struct CPU_State initial_cpu = {.pc=0xc495, .a=0x40, .x=0x0e, .y=0xf5, .sp=0x39, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xc495, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc496, .a=0x40, .x=0x0e, .y=0xf5, .sp=0x39, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc495, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc495, .value=0x20, .type=IO_READ},
        {.addr=0xc496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9ba3, .a=0x5f, .x=0xa2, .y=0x22, .sp=0xff, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9ba4, .a=0x5f, .x=0xa2, .y=0x22, .sp=0xff, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9ba3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ba3, .value=0x20, .type=IO_READ},
        {.addr=0x9ba4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0062) {
    const struct CPU_State initial_cpu = {.pc=0x1c06, .a=0x9f, .x=0x8e, .y=0x46, .sp=0xe9, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1c06, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1c07, .a=0x9f, .x=0x8e, .y=0x46, .sp=0xe9, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x1c06, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1c06, .value=0x20, .type=IO_READ},
        {.addr=0x1c07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0063) {
    const struct CPU_State initial_cpu = {.pc=0x1728, .a=0x37, .x=0x40, .y=0xa3, .sp=0x0c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1728, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1729, .a=0x37, .x=0x40, .y=0xa3, .sp=0x0c, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x1728, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1728, .value=0x20, .type=IO_READ},
        {.addr=0x1729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0064) {
    const struct CPU_State initial_cpu = {.pc=0x31bf, .a=0x78, .x=0x20, .y=0xb5, .sp=0x5a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x31bf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x31c0, .a=0x78, .x=0x20, .y=0xb5, .sp=0x5a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x31bf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x31bf, .value=0x20, .type=IO_READ},
        {.addr=0x31c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0065) {
    const struct CPU_State initial_cpu = {.pc=0x5e1b, .a=0xba, .x=0x04, .y=0xe9, .sp=0x7d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e1c, .a=0xba, .x=0x04, .y=0xe9, .sp=0x7d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5e1b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e1b, .value=0x20, .type=IO_READ},
        {.addr=0x5e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0066) {
    const struct CPU_State initial_cpu = {.pc=0xa951, .a=0xa0, .x=0x1d, .y=0x46, .sp=0xc7, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa951, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa952, .a=0xa0, .x=0x1d, .y=0x46, .sp=0xc7, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xa951, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa951, .value=0x20, .type=IO_READ},
        {.addr=0xa952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0067) {
    const struct CPU_State initial_cpu = {.pc=0x6e3c, .a=0x1f, .x=0xe7, .y=0x34, .sp=0xfb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6e3c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6e3d, .a=0x1f, .x=0xe7, .y=0x34, .sp=0xfb, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x6e3c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6e3c, .value=0x20, .type=IO_READ},
        {.addr=0x6e3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0068) {
    const struct CPU_State initial_cpu = {.pc=0x67d4, .a=0xfa, .x=0xf8, .y=0x69, .sp=0xbc, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x67d4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x67d5, .a=0xfa, .x=0xf8, .y=0x69, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x67d4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x67d4, .value=0x20, .type=IO_READ},
        {.addr=0x67d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0069) {
    const struct CPU_State initial_cpu = {.pc=0xd64b, .a=0xec, .x=0xb0, .y=0x98, .sp=0xc0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd64b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd64c, .a=0xec, .x=0xb0, .y=0x98, .sp=0xc0, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xd64b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd64b, .value=0x20, .type=IO_READ},
        {.addr=0xd64c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006A) {
    const struct CPU_State initial_cpu = {.pc=0xc612, .a=0x9b, .x=0x3e, .y=0xfc, .sp=0xff, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc612, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc613, .a=0x9b, .x=0x3e, .y=0xfc, .sp=0xff, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc612, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc612, .value=0x20, .type=IO_READ},
        {.addr=0xc613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006B) {
    const struct CPU_State initial_cpu = {.pc=0x85ed, .a=0x71, .x=0x8f, .y=0x46, .sp=0xbb, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x85ed, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x85ee, .a=0x71, .x=0x8f, .y=0x46, .sp=0xbb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x85ed, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x85ed, .value=0x20, .type=IO_READ},
        {.addr=0x85ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006C) {
    const struct CPU_State initial_cpu = {.pc=0xe1e4, .a=0x99, .x=0xa8, .y=0x65, .sp=0xd2, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe1e5, .a=0x99, .x=0xa8, .y=0x65, .sp=0xd2, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xe1e4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe1e4, .value=0x20, .type=IO_READ},
        {.addr=0xe1e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006D) {
    const struct CPU_State initial_cpu = {.pc=0x8eef, .a=0xf0, .x=0xde, .y=0xbc, .sp=0xa6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x8eef, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0xf0, .x=0xde, .y=0xbc, .sp=0xa6, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x8eef, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8eef, .value=0x20, .type=IO_READ},
        {.addr=0x8ef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6186, .a=0x92, .x=0x5d, .y=0x3f, .sp=0xa2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x6186, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6187, .a=0x92, .x=0x5d, .y=0x3f, .sp=0xa2, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x6186, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6186, .value=0x20, .type=IO_READ},
        {.addr=0x6187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_006F) {
    const struct CPU_State initial_cpu = {.pc=0x0a35, .a=0xc4, .x=0xd0, .y=0xb1, .sp=0x1f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a35, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0a36, .a=0xc4, .x=0xd0, .y=0xb1, .sp=0x1f, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0a35, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0a35, .value=0x20, .type=IO_READ},
        {.addr=0x0a36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0070) {
    const struct CPU_State initial_cpu = {.pc=0xf504, .a=0x45, .x=0x51, .y=0xb9, .sp=0x39, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf504, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf505, .a=0x45, .x=0x51, .y=0xb9, .sp=0x39, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf504, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf504, .value=0x20, .type=IO_READ},
        {.addr=0xf505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0071) {
    const struct CPU_State initial_cpu = {.pc=0x6a26, .a=0xb3, .x=0x48, .y=0x69, .sp=0x62, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a26, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a27, .a=0xb3, .x=0x48, .y=0x69, .sp=0x62, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6a26, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a26, .value=0x20, .type=IO_READ},
        {.addr=0x6a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0072) {
    const struct CPU_State initial_cpu = {.pc=0x3bcb, .a=0xd9, .x=0xa9, .y=0x87, .sp=0x1f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3bcb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3bcc, .a=0xd9, .x=0xa9, .y=0x87, .sp=0x1f, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x3bcb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3bcb, .value=0x20, .type=IO_READ},
        {.addr=0x3bcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0073) {
    const struct CPU_State initial_cpu = {.pc=0x533c, .a=0x23, .x=0xe9, .y=0xa1, .sp=0xb6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x533c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x533d, .a=0x23, .x=0xe9, .y=0xa1, .sp=0xb6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x533c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x533c, .value=0x20, .type=IO_READ},
        {.addr=0x533d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0074) {
    const struct CPU_State initial_cpu = {.pc=0x87a7, .a=0x6c, .x=0xe4, .y=0xe0, .sp=0x1c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x87a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x87a8, .a=0x6c, .x=0xe4, .y=0xe0, .sp=0x1c, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x87a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x87a7, .value=0x20, .type=IO_READ},
        {.addr=0x87a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0075) {
    const struct CPU_State initial_cpu = {.pc=0x6a95, .a=0x88, .x=0x52, .y=0xa3, .sp=0xe7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6a95, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a96, .a=0x88, .x=0x52, .y=0xa3, .sp=0xe7, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6a95, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a95, .value=0x20, .type=IO_READ},
        {.addr=0x6a96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0076) {
    const struct CPU_State initial_cpu = {.pc=0xbfce, .a=0xac, .x=0x33, .y=0x50, .sp=0x8d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbfce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbfcf, .a=0xac, .x=0x33, .y=0x50, .sp=0x8d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbfce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbfce, .value=0x20, .type=IO_READ},
        {.addr=0xbfcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0077) {
    const struct CPU_State initial_cpu = {.pc=0x1bef, .a=0x8e, .x=0x38, .y=0x20, .sp=0xbc, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x1bef, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1bf0, .a=0x8e, .x=0x38, .y=0x20, .sp=0xbc, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1bef, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1bef, .value=0x20, .type=IO_READ},
        {.addr=0x1bf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0078) {
    const struct CPU_State initial_cpu = {.pc=0xbfca, .a=0x70, .x=0x3d, .y=0xbd, .sp=0x9a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbfca, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbfcb, .a=0x70, .x=0x3d, .y=0xbd, .sp=0x9a, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xbfca, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbfca, .value=0x20, .type=IO_READ},
        {.addr=0xbfcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0079) {
    const struct CPU_State initial_cpu = {.pc=0x4652, .a=0x87, .x=0x34, .y=0x0d, .sp=0xca, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4652, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4653, .a=0x87, .x=0x34, .y=0x0d, .sp=0xca, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4652, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4652, .value=0x20, .type=IO_READ},
        {.addr=0x4653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007A) {
    const struct CPU_State initial_cpu = {.pc=0xf115, .a=0xe2, .x=0x9d, .y=0x76, .sp=0x6d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf115, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf116, .a=0xe2, .x=0x9d, .y=0x76, .sp=0x6d, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf115, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf115, .value=0x20, .type=IO_READ},
        {.addr=0xf116, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007B) {
    const struct CPU_State initial_cpu = {.pc=0x6146, .a=0x7d, .x=0x7e, .y=0x22, .sp=0x2f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6146, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6147, .a=0x7d, .x=0x7e, .y=0x22, .sp=0x2f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6146, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6146, .value=0x20, .type=IO_READ},
        {.addr=0x6147, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007C) {
    const struct CPU_State initial_cpu = {.pc=0x251d, .a=0x51, .x=0xbe, .y=0xc1, .sp=0x85, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x251d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x251e, .a=0x51, .x=0xbe, .y=0xc1, .sp=0x85, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x251d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x251d, .value=0x20, .type=IO_READ},
        {.addr=0x251e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007D) {
    const struct CPU_State initial_cpu = {.pc=0xb01d, .a=0xd2, .x=0x4a, .y=0xe2, .sp=0x13, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb01d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb01e, .a=0xd2, .x=0x4a, .y=0xe2, .sp=0x13, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb01d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb01d, .value=0x20, .type=IO_READ},
        {.addr=0xb01e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007E) {
    const struct CPU_State initial_cpu = {.pc=0xe050, .a=0x69, .x=0x9d, .y=0x30, .sp=0x8e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe050, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe051, .a=0x69, .x=0x9d, .y=0x30, .sp=0x8e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xe050, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe050, .value=0x20, .type=IO_READ},
        {.addr=0xe051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_007F) {
    const struct CPU_State initial_cpu = {.pc=0x10c3, .a=0x8d, .x=0x70, .y=0x1e, .sp=0x58, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x10c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x10c4, .a=0x8d, .x=0x70, .y=0x1e, .sp=0x58, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x10c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x10c3, .value=0x20, .type=IO_READ},
        {.addr=0x10c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0080) {
    const struct CPU_State initial_cpu = {.pc=0x5af4, .a=0xe7, .x=0x4f, .y=0xdd, .sp=0x32, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x5af4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5af5, .a=0xe7, .x=0x4f, .y=0xdd, .sp=0x32, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x5af4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5af4, .value=0x20, .type=IO_READ},
        {.addr=0x5af5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0081) {
    const struct CPU_State initial_cpu = {.pc=0x4c2c, .a=0xe8, .x=0x71, .y=0xea, .sp=0x17, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4c2d, .a=0xe8, .x=0x71, .y=0xea, .sp=0x17, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4c2c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4c2c, .value=0x20, .type=IO_READ},
        {.addr=0x4c2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0082) {
    const struct CPU_State initial_cpu = {.pc=0x7a06, .a=0x95, .x=0xe1, .y=0x6a, .sp=0xd4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7a06, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7a07, .a=0x95, .x=0xe1, .y=0x6a, .sp=0xd4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7a06, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7a06, .value=0x20, .type=IO_READ},
        {.addr=0x7a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7093, .a=0x37, .x=0x26, .y=0xbb, .sp=0x9c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7093, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7094, .a=0x37, .x=0x26, .y=0xbb, .sp=0x9c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7093, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7093, .value=0x20, .type=IO_READ},
        {.addr=0x7094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0084) {
    const struct CPU_State initial_cpu = {.pc=0x85c3, .a=0x93, .x=0xd8, .y=0x83, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x85c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x85c4, .a=0x93, .x=0xd8, .y=0x83, .sp=0x51, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x85c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x85c3, .value=0x20, .type=IO_READ},
        {.addr=0x85c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0085) {
    const struct CPU_State initial_cpu = {.pc=0x4048, .a=0xd3, .x=0x8d, .y=0x9d, .sp=0xca, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4048, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4049, .a=0xd3, .x=0x8d, .y=0x9d, .sp=0xca, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4048, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4048, .value=0x20, .type=IO_READ},
        {.addr=0x4049, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0086) {
    const struct CPU_State initial_cpu = {.pc=0x754f, .a=0xf4, .x=0x69, .y=0xa3, .sp=0x98, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x754f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7550, .a=0xf4, .x=0x69, .y=0xa3, .sp=0x98, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x754f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x754f, .value=0x20, .type=IO_READ},
        {.addr=0x7550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0087) {
    const struct CPU_State initial_cpu = {.pc=0x489a, .a=0x94, .x=0x8e, .y=0x29, .sp=0x92, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x489a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x489b, .a=0x94, .x=0x8e, .y=0x29, .sp=0x92, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x489a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x489a, .value=0x20, .type=IO_READ},
        {.addr=0x489b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0088) {
    const struct CPU_State initial_cpu = {.pc=0x891e, .a=0x46, .x=0x24, .y=0x33, .sp=0x06, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x891e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x891f, .a=0x46, .x=0x24, .y=0x33, .sp=0x06, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x891e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x891e, .value=0x20, .type=IO_READ},
        {.addr=0x891f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0089) {
    const struct CPU_State initial_cpu = {.pc=0xc4be, .a=0xd7, .x=0x97, .y=0x33, .sp=0x5a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc4be, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc4bf, .a=0xd7, .x=0x97, .y=0x33, .sp=0x5a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc4be, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc4be, .value=0x20, .type=IO_READ},
        {.addr=0xc4bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008A) {
    const struct CPU_State initial_cpu = {.pc=0xf968, .a=0x8b, .x=0xdc, .y=0x57, .sp=0x2b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf968, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf969, .a=0x8b, .x=0xdc, .y=0x57, .sp=0x2b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf968, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf968, .value=0x20, .type=IO_READ},
        {.addr=0xf969, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008B) {
    const struct CPU_State initial_cpu = {.pc=0xe083, .a=0x5c, .x=0x43, .y=0x3b, .sp=0x3e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe083, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe084, .a=0x5c, .x=0x43, .y=0x3b, .sp=0x3e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe083, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe083, .value=0x20, .type=IO_READ},
        {.addr=0xe084, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008C) {
    const struct CPU_State initial_cpu = {.pc=0x946d, .a=0xd1, .x=0x3f, .y=0x38, .sp=0xd6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x946d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x946e, .a=0xd1, .x=0x3f, .y=0x38, .sp=0xd6, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x946d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x946d, .value=0x20, .type=IO_READ},
        {.addr=0x946e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008D) {
    const struct CPU_State initial_cpu = {.pc=0xfdf7, .a=0x80, .x=0xe3, .y=0x30, .sp=0xa3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xfdf7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfdf8, .a=0x80, .x=0xe3, .y=0x30, .sp=0xa3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xfdf7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfdf7, .value=0x20, .type=IO_READ},
        {.addr=0xfdf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008E) {
    const struct CPU_State initial_cpu = {.pc=0xff96, .a=0x7e, .x=0x84, .y=0xc2, .sp=0x4a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xff96, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xff97, .a=0x7e, .x=0x84, .y=0xc2, .sp=0x4a, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xff96, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xff96, .value=0x20, .type=IO_READ},
        {.addr=0xff97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3c3e, .a=0x73, .x=0x9e, .y=0x30, .sp=0xbc, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3c3e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3c3f, .a=0x73, .x=0x9e, .y=0x30, .sp=0xbc, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x3c3e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3c3e, .value=0x20, .type=IO_READ},
        {.addr=0x3c3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0090) {
    const struct CPU_State initial_cpu = {.pc=0xd618, .a=0x38, .x=0x93, .y=0x63, .sp=0x3a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xd618, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd619, .a=0x38, .x=0x93, .y=0x63, .sp=0x3a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd618, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd618, .value=0x20, .type=IO_READ},
        {.addr=0xd619, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0091) {
    const struct CPU_State initial_cpu = {.pc=0x0a3f, .a=0x9d, .x=0x55, .y=0x27, .sp=0x92, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0a3f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0a40, .a=0x9d, .x=0x55, .y=0x27, .sp=0x92, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0a3f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0a3f, .value=0x20, .type=IO_READ},
        {.addr=0x0a40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0092) {
    const struct CPU_State initial_cpu = {.pc=0xbeab, .a=0x08, .x=0xd8, .y=0xb2, .sp=0xef, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xbeab, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbeac, .a=0x08, .x=0xd8, .y=0xb2, .sp=0xef, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xbeab, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbeab, .value=0x20, .type=IO_READ},
        {.addr=0xbeac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0093) {
    const struct CPU_State initial_cpu = {.pc=0x93e0, .a=0xae, .x=0x13, .y=0x84, .sp=0x49, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x93e0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x93e1, .a=0xae, .x=0x13, .y=0x84, .sp=0x49, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x93e0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x93e0, .value=0x20, .type=IO_READ},
        {.addr=0x93e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0094) {
    const struct CPU_State initial_cpu = {.pc=0x3e5d, .a=0xfc, .x=0x71, .y=0xd4, .sp=0x43, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3e5d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3e5e, .a=0xfc, .x=0x71, .y=0xd4, .sp=0x43, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3e5d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3e5d, .value=0x20, .type=IO_READ},
        {.addr=0x3e5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0095) {
    const struct CPU_State initial_cpu = {.pc=0x4bce, .a=0xbc, .x=0xf8, .y=0xe7, .sp=0x04, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4bce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4bcf, .a=0xbc, .x=0xf8, .y=0xe7, .sp=0x04, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4bce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4bce, .value=0x20, .type=IO_READ},
        {.addr=0x4bcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0096) {
    const struct CPU_State initial_cpu = {.pc=0x7ea6, .a=0xb0, .x=0x40, .y=0xa8, .sp=0xd0, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7ea7, .a=0xb0, .x=0x40, .y=0xa8, .sp=0xd0, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7ea6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7ea6, .value=0x20, .type=IO_READ},
        {.addr=0x7ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0097) {
    const struct CPU_State initial_cpu = {.pc=0x5377, .a=0xbd, .x=0xda, .y=0xe1, .sp=0x4c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x5377, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5378, .a=0xbd, .x=0xda, .y=0xe1, .sp=0x4c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x5377, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5377, .value=0x20, .type=IO_READ},
        {.addr=0x5378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0098) {
    const struct CPU_State initial_cpu = {.pc=0x393c, .a=0x4a, .x=0x98, .y=0x2e, .sp=0xe3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x393c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x393d, .a=0x4a, .x=0x98, .y=0x2e, .sp=0xe3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x393c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x393c, .value=0x20, .type=IO_READ},
        {.addr=0x393d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0099) {
    const struct CPU_State initial_cpu = {.pc=0x4e3e, .a=0x51, .x=0x0d, .y=0x8b, .sp=0x65, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4e3e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4e3f, .a=0x51, .x=0x0d, .y=0x8b, .sp=0x65, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x4e3e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4e3e, .value=0x20, .type=IO_READ},
        {.addr=0x4e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009A) {
    const struct CPU_State initial_cpu = {.pc=0x0242, .a=0xdb, .x=0x5d, .y=0xf0, .sp=0x21, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0242, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0243, .a=0xdb, .x=0x5d, .y=0xf0, .sp=0x21, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0242, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0242, .value=0x20, .type=IO_READ},
        {.addr=0x0243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009B) {
    const struct CPU_State initial_cpu = {.pc=0x541c, .a=0x8c, .x=0xb3, .y=0xb2, .sp=0xb0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x541c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x541d, .a=0x8c, .x=0xb3, .y=0xb2, .sp=0xb0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x541c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x541c, .value=0x20, .type=IO_READ},
        {.addr=0x541d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009C) {
    const struct CPU_State initial_cpu = {.pc=0xa4b7, .a=0xef, .x=0x43, .y=0xaa, .sp=0xaa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4b8, .a=0xef, .x=0x43, .y=0xaa, .sp=0xaa, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xa4b7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4b7, .value=0x20, .type=IO_READ},
        {.addr=0xa4b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009D) {
    const struct CPU_State initial_cpu = {.pc=0xf071, .a=0xb5, .x=0xbc, .y=0xb3, .sp=0x50, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf071, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf072, .a=0xb5, .x=0xbc, .y=0xb3, .sp=0x50, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf071, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf071, .value=0x20, .type=IO_READ},
        {.addr=0xf072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009E) {
    const struct CPU_State initial_cpu = {.pc=0xd021, .a=0xdb, .x=0x6d, .y=0xcc, .sp=0x3e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd021, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd022, .a=0xdb, .x=0x6d, .y=0xcc, .sp=0x3e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd021, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd021, .value=0x20, .type=IO_READ},
        {.addr=0xd022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_009F) {
    const struct CPU_State initial_cpu = {.pc=0xe2cb, .a=0x4a, .x=0xaa, .y=0xe8, .sp=0x5e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe2cb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe2cc, .a=0x4a, .x=0xaa, .y=0xe8, .sp=0x5e, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xe2cb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe2cb, .value=0x20, .type=IO_READ},
        {.addr=0xe2cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x1863, .a=0x67, .x=0xb4, .y=0xe0, .sp=0xed, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1863, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1864, .a=0x67, .x=0xb4, .y=0xe0, .sp=0xed, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x1863, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1863, .value=0x20, .type=IO_READ},
        {.addr=0x1864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x5f78, .a=0xa0, .x=0xeb, .y=0x87, .sp=0xae, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f78, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5f79, .a=0xa0, .x=0xeb, .y=0x87, .sp=0xae, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5f78, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5f78, .value=0x20, .type=IO_READ},
        {.addr=0x5f79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xd4ec, .a=0xb3, .x=0x0d, .y=0x7d, .sp=0x01, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ec, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd4ed, .a=0xb3, .x=0x0d, .y=0x7d, .sp=0x01, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd4ec, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd4ec, .value=0x20, .type=IO_READ},
        {.addr=0xd4ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x438b, .a=0xdb, .x=0x88, .y=0x68, .sp=0x58, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x438b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x438c, .a=0xdb, .x=0x88, .y=0x68, .sp=0x58, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x438b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x438b, .value=0x20, .type=IO_READ},
        {.addr=0x438c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x307f, .a=0x2c, .x=0xc8, .y=0x55, .sp=0x78, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x307f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3080, .a=0x2c, .x=0xc8, .y=0x55, .sp=0x78, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x307f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x307f, .value=0x20, .type=IO_READ},
        {.addr=0x3080, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xfa9b, .a=0xb8, .x=0x52, .y=0xc6, .sp=0xc8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xfa9b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfa9c, .a=0xb8, .x=0x52, .y=0xc6, .sp=0xc8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfa9b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfa9b, .value=0x20, .type=IO_READ},
        {.addr=0xfa9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xa054, .a=0x56, .x=0x9b, .y=0x51, .sp=0x8d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa054, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa055, .a=0x56, .x=0x9b, .y=0x51, .sp=0x8d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa054, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa054, .value=0x20, .type=IO_READ},
        {.addr=0xa055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x8ef2, .a=0xb8, .x=0x84, .y=0x91, .sp=0x51, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ef2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8ef3, .a=0xb8, .x=0x84, .y=0x91, .sp=0x51, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8ef2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8ef2, .value=0x20, .type=IO_READ},
        {.addr=0x8ef3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6cbf, .a=0x54, .x=0xf7, .y=0xbc, .sp=0xce, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6cc0, .a=0x54, .x=0xf7, .y=0xbc, .sp=0xce, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x6cbf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6cbf, .value=0x20, .type=IO_READ},
        {.addr=0x6cc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x2f23, .a=0x06, .x=0x91, .y=0x6a, .sp=0xa9, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2f23, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2f24, .a=0x06, .x=0x91, .y=0x6a, .sp=0xa9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2f23, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2f23, .value=0x20, .type=IO_READ},
        {.addr=0x2f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5c44, .a=0x18, .x=0x70, .y=0x12, .sp=0x16, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x5c44, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5c45, .a=0x18, .x=0x70, .y=0x12, .sp=0x16, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5c44, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5c44, .value=0x20, .type=IO_READ},
        {.addr=0x5c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xb4dd, .a=0x0f, .x=0x31, .y=0xda, .sp=0x02, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb4dd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb4de, .a=0x0f, .x=0x31, .y=0xda, .sp=0x02, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb4dd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb4dd, .value=0x20, .type=IO_READ},
        {.addr=0xb4de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x428a, .a=0x10, .x=0xad, .y=0xc3, .sp=0x78, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x428a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x428b, .a=0x10, .x=0xad, .y=0xc3, .sp=0x78, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x428a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x428a, .value=0x20, .type=IO_READ},
        {.addr=0x428b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x8390, .a=0xf4, .x=0xf0, .y=0x64, .sp=0xc6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8390, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8391, .a=0xf4, .x=0xf0, .y=0x64, .sp=0xc6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x8390, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8390, .value=0x20, .type=IO_READ},
        {.addr=0x8391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xcc99, .a=0x97, .x=0xb1, .y=0xb1, .sp=0x55, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcc99, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcc9a, .a=0x97, .x=0xb1, .y=0xb1, .sp=0x55, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xcc99, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcc99, .value=0x20, .type=IO_READ},
        {.addr=0xcc9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa581, .a=0x19, .x=0x32, .y=0x4f, .sp=0xcb, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa581, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa582, .a=0x19, .x=0x32, .y=0x4f, .sp=0xcb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xa581, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa581, .value=0x20, .type=IO_READ},
        {.addr=0xa582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x4cb3, .a=0x70, .x=0x95, .y=0xed, .sp=0x78, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4cb3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4cb4, .a=0x70, .x=0x95, .y=0xed, .sp=0x78, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x4cb3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4cb3, .value=0x20, .type=IO_READ},
        {.addr=0x4cb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xf32f, .a=0xbf, .x=0xd8, .y=0x40, .sp=0xc5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xf32f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf330, .a=0xbf, .x=0xd8, .y=0x40, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf32f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf32f, .value=0x20, .type=IO_READ},
        {.addr=0xf330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x1caf, .a=0xaf, .x=0x6a, .y=0x5a, .sp=0x02, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x1caf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1cb0, .a=0xaf, .x=0x6a, .y=0x5a, .sp=0x02, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x1caf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1caf, .value=0x20, .type=IO_READ},
        {.addr=0x1cb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xad62, .a=0xbf, .x=0x01, .y=0xfb, .sp=0xaf, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xad62, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xad63, .a=0xbf, .x=0x01, .y=0xfb, .sp=0xaf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xad62, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xad62, .value=0x20, .type=IO_READ},
        {.addr=0xad63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x1988, .a=0x8a, .x=0x23, .y=0xe6, .sp=0x3b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1988, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1989, .a=0x8a, .x=0x23, .y=0xe6, .sp=0x3b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1988, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1988, .value=0x20, .type=IO_READ},
        {.addr=0x1989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x6cd3, .a=0x1f, .x=0xd9, .y=0x8f, .sp=0x78, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6cd3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6cd4, .a=0x1f, .x=0xd9, .y=0x8f, .sp=0x78, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x6cd3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6cd3, .value=0x20, .type=IO_READ},
        {.addr=0x6cd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xb56a, .a=0x0b, .x=0x21, .y=0x1f, .sp=0xf9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb56a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb56b, .a=0x0b, .x=0x21, .y=0x1f, .sp=0xf9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb56a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb56a, .value=0x20, .type=IO_READ},
        {.addr=0xb56b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x618b, .a=0x23, .x=0x53, .y=0x65, .sp=0xf9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x618b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x618c, .a=0x23, .x=0x53, .y=0x65, .sp=0xf9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x618b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x618b, .value=0x20, .type=IO_READ},
        {.addr=0x618c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x0d52, .a=0x35, .x=0x46, .y=0x6e, .sp=0xe5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d52, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0d53, .a=0x35, .x=0x46, .y=0x6e, .sp=0xe5, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0d52, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0d52, .value=0x20, .type=IO_READ},
        {.addr=0x0d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x0dce, .a=0x68, .x=0xe1, .y=0x46, .sp=0x8e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0dce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0dcf, .a=0x68, .x=0xe1, .y=0x46, .sp=0x8e, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0dce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0dce, .value=0x20, .type=IO_READ},
        {.addr=0x0dcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x54d5, .a=0xb9, .x=0xb8, .y=0x67, .sp=0x53, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x54d5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x54d6, .a=0xb9, .x=0xb8, .y=0x67, .sp=0x53, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x54d5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x54d5, .value=0x20, .type=IO_READ},
        {.addr=0x54d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xef57, .a=0x8b, .x=0x12, .y=0x1f, .sp=0x92, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xef57, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xef58, .a=0x8b, .x=0x12, .y=0x1f, .sp=0x92, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xef57, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xef57, .value=0x20, .type=IO_READ},
        {.addr=0xef58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xc533, .a=0xe2, .x=0xa2, .y=0x3d, .sp=0xbd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc533, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc534, .a=0xe2, .x=0xa2, .y=0x3d, .sp=0xbd, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc533, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc533, .value=0x20, .type=IO_READ},
        {.addr=0xc534, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x936a, .a=0x04, .x=0x7a, .y=0x5f, .sp=0xdd, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x936a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x936b, .a=0x04, .x=0x7a, .y=0x5f, .sp=0xdd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x936a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x936a, .value=0x20, .type=IO_READ},
        {.addr=0x936b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xd33c, .a=0xca, .x=0xf6, .y=0x5c, .sp=0x80, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xd33c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd33d, .a=0xca, .x=0xf6, .y=0x5c, .sp=0x80, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd33c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd33c, .value=0x20, .type=IO_READ},
        {.addr=0xd33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xfb21, .a=0xcc, .x=0x3d, .y=0x75, .sp=0x7e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfb21, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb22, .a=0xcc, .x=0x3d, .y=0x75, .sp=0x7e, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xfb21, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb21, .value=0x20, .type=IO_READ},
        {.addr=0xfb22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xa4e8, .a=0x6f, .x=0x68, .y=0x3c, .sp=0x24, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4e9, .a=0x6f, .x=0x68, .y=0x3c, .sp=0x24, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa4e8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4e8, .value=0x20, .type=IO_READ},
        {.addr=0xa4e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xb515, .a=0x0a, .x=0xb5, .y=0x8e, .sp=0xb4, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb515, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb516, .a=0x0a, .x=0xb5, .y=0x8e, .sp=0xb4, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xb515, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb515, .value=0x20, .type=IO_READ},
        {.addr=0xb516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xfb5f, .a=0x11, .x=0x5b, .y=0x33, .sp=0x5d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xfb5f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb60, .a=0x11, .x=0x5b, .y=0x33, .sp=0x5d, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xfb5f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb5f, .value=0x20, .type=IO_READ},
        {.addr=0xfb60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x3ad0, .a=0xd8, .x=0x51, .y=0x2e, .sp=0xcb, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3ad0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3ad1, .a=0xd8, .x=0x51, .y=0x2e, .sp=0xcb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3ad0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3ad0, .value=0x20, .type=IO_READ},
        {.addr=0x3ad1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0dd0, .a=0x4e, .x=0xf3, .y=0x87, .sp=0x57, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0dd1, .a=0x4e, .x=0xf3, .y=0x87, .sp=0x57, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0dd0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0dd0, .value=0x20, .type=IO_READ},
        {.addr=0x0dd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xfaf4, .a=0x27, .x=0x5b, .y=0x91, .sp=0x40, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xfaf4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfaf5, .a=0x27, .x=0x5b, .y=0x91, .sp=0x40, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xfaf4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfaf4, .value=0x20, .type=IO_READ},
        {.addr=0xfaf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xf4f8, .a=0x02, .x=0xcc, .y=0x52, .sp=0xe3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf4f8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf4f9, .a=0x02, .x=0xcc, .y=0x52, .sp=0xe3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf4f8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf4f8, .value=0x20, .type=IO_READ},
        {.addr=0xf4f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x7901, .a=0x00, .x=0xe0, .y=0x10, .sp=0x1f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7901, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7902, .a=0x00, .x=0xe0, .y=0x10, .sp=0x1f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x7901, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7901, .value=0x20, .type=IO_READ},
        {.addr=0x7902, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x3d2a, .a=0x94, .x=0x92, .y=0x97, .sp=0x59, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3d2b, .a=0x94, .x=0x92, .y=0x97, .sp=0x59, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x3d2a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3d2a, .value=0x20, .type=IO_READ},
        {.addr=0x3d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x7b56, .a=0x94, .x=0x08, .y=0x4b, .sp=0x08, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7b56, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7b57, .a=0x94, .x=0x08, .y=0x4b, .sp=0x08, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7b56, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7b56, .value=0x20, .type=IO_READ},
        {.addr=0x7b57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x33c9, .a=0xbe, .x=0x06, .y=0x2f, .sp=0x09, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x33c9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x33ca, .a=0xbe, .x=0x06, .y=0x2f, .sp=0x09, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x33c9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x33c9, .value=0x20, .type=IO_READ},
        {.addr=0x33ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3b42, .a=0xca, .x=0xcc, .y=0x39, .sp=0x46, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3b42, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3b43, .a=0xca, .x=0xcc, .y=0x39, .sp=0x46, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x3b42, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3b42, .value=0x20, .type=IO_READ},
        {.addr=0x3b43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x80ec, .a=0x83, .x=0x4c, .y=0xe6, .sp=0xc4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x80ec, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x80ed, .a=0x83, .x=0x4c, .y=0xe6, .sp=0xc4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x80ec, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x80ec, .value=0x20, .type=IO_READ},
        {.addr=0x80ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x304e, .a=0xd8, .x=0xad, .y=0x97, .sp=0x74, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x304e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x304f, .a=0xd8, .x=0xad, .y=0x97, .sp=0x74, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x304e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x304e, .value=0x20, .type=IO_READ},
        {.addr=0x304f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0e4d, .a=0xe2, .x=0xec, .y=0x4f, .sp=0xbe, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0e4d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0e4e, .a=0xe2, .x=0xec, .y=0x4f, .sp=0xbe, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0e4d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0e4d, .value=0x20, .type=IO_READ},
        {.addr=0x0e4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9b49, .a=0x7e, .x=0x94, .y=0x87, .sp=0x98, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9b49, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9b4a, .a=0x7e, .x=0x94, .y=0x87, .sp=0x98, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9b49, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9b49, .value=0x20, .type=IO_READ},
        {.addr=0x9b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xf6af, .a=0x2b, .x=0x63, .y=0xd8, .sp=0x8b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf6af, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf6b0, .a=0x2b, .x=0x63, .y=0xd8, .sp=0x8b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf6af, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf6af, .value=0x20, .type=IO_READ},
        {.addr=0xf6b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x0a87, .a=0xc1, .x=0xa6, .y=0xb5, .sp=0xa6, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0a87, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0a88, .a=0xc1, .x=0xa6, .y=0xb5, .sp=0xa6, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0a87, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0a87, .value=0x20, .type=IO_READ},
        {.addr=0x0a88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xe5b9, .a=0x87, .x=0xd4, .y=0x8e, .sp=0xae, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe5ba, .a=0x87, .x=0xd4, .y=0x8e, .sp=0xae, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe5b9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe5b9, .value=0x20, .type=IO_READ},
        {.addr=0xe5ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xcf6c, .a=0x83, .x=0x8e, .y=0x52, .sp=0x90, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcf6c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcf6d, .a=0x83, .x=0x8e, .y=0x52, .sp=0x90, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xcf6c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcf6c, .value=0x20, .type=IO_READ},
        {.addr=0xcf6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xb9f1, .a=0x3e, .x=0xb6, .y=0x17, .sp=0x46, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb9f2, .a=0x3e, .x=0xb6, .y=0x17, .sp=0x46, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb9f1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb9f1, .value=0x20, .type=IO_READ},
        {.addr=0xb9f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x3fa1, .a=0xac, .x=0x18, .y=0x23, .sp=0x45, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3fa2, .a=0xac, .x=0x18, .y=0x23, .sp=0x45, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3fa1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3fa1, .value=0x20, .type=IO_READ},
        {.addr=0x3fa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x8e89, .a=0x34, .x=0x73, .y=0x09, .sp=0x83, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8e89, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8e8a, .a=0x34, .x=0x73, .y=0x09, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8e89, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8e89, .value=0x20, .type=IO_READ},
        {.addr=0x8e8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xc95f, .a=0xe7, .x=0xa1, .y=0x3e, .sp=0x6c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc95f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc960, .a=0xe7, .x=0xa1, .y=0x3e, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc95f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc95f, .value=0x20, .type=IO_READ},
        {.addr=0xc960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x36ce, .a=0x5d, .x=0x06, .y=0x53, .sp=0xeb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x36ce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x36cf, .a=0x5d, .x=0x06, .y=0x53, .sp=0xeb, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x36ce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x36ce, .value=0x20, .type=IO_READ},
        {.addr=0x36cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xe866, .a=0xfb, .x=0x72, .y=0xd6, .sp=0x3e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe866, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe867, .a=0xfb, .x=0x72, .y=0xd6, .sp=0x3e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe866, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe866, .value=0x20, .type=IO_READ},
        {.addr=0xe867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xe1a9, .a=0x55, .x=0x6f, .y=0x51, .sp=0x06, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe1aa, .a=0x55, .x=0x6f, .y=0x51, .sp=0x06, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe1a9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe1a9, .value=0x20, .type=IO_READ},
        {.addr=0xe1aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x344f, .a=0x5e, .x=0x1e, .y=0x01, .sp=0xe6, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x344f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3450, .a=0x5e, .x=0x1e, .y=0x01, .sp=0xe6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x344f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x344f, .value=0x20, .type=IO_READ},
        {.addr=0x3450, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xd3f9, .a=0x0c, .x=0xc8, .y=0x1a, .sp=0x69, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd3fa, .a=0x0c, .x=0xc8, .y=0x1a, .sp=0x69, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xd3f9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd3f9, .value=0x20, .type=IO_READ},
        {.addr=0xd3fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x7118, .a=0x53, .x=0xe4, .y=0xa9, .sp=0x71, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7118, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7119, .a=0x53, .x=0xe4, .y=0xa9, .sp=0x71, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x7118, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7118, .value=0x20, .type=IO_READ},
        {.addr=0x7119, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xc2a3, .a=0x57, .x=0x00, .y=0xee, .sp=0xe4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc2a4, .a=0x57, .x=0x00, .y=0xee, .sp=0xe4, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc2a3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc2a3, .value=0x20, .type=IO_READ},
        {.addr=0xc2a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb9f9, .a=0x7f, .x=0x35, .y=0xf4, .sp=0xe7, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb9fa, .a=0x7f, .x=0x35, .y=0xf4, .sp=0xe7, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb9f9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb9f9, .value=0x20, .type=IO_READ},
        {.addr=0xb9fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x659f, .a=0x53, .x=0xcf, .y=0x93, .sp=0x26, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x659f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x65a0, .a=0x53, .x=0xcf, .y=0x93, .sp=0x26, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x659f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x659f, .value=0x20, .type=IO_READ},
        {.addr=0x65a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x0270, .a=0x8c, .x=0x3f, .y=0x93, .sp=0xa5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0270, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0271, .a=0x8c, .x=0x3f, .y=0x93, .sp=0xa5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0270, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0270, .value=0x20, .type=IO_READ},
        {.addr=0x0271, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x5e23, .a=0xc7, .x=0x6b, .y=0x8f, .sp=0xc4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e23, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e24, .a=0xc7, .x=0x6b, .y=0x8f, .sp=0xc4, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5e23, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e23, .value=0x20, .type=IO_READ},
        {.addr=0x5e24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x25a4, .a=0xbd, .x=0x87, .y=0xb1, .sp=0xb5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x25a4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x25a5, .a=0xbd, .x=0x87, .y=0xb1, .sp=0xb5, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x25a4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x25a4, .value=0x20, .type=IO_READ},
        {.addr=0x25a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9b29, .a=0x3e, .x=0xe7, .y=0xa0, .sp=0x8e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9b29, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9b2a, .a=0x3e, .x=0xe7, .y=0xa0, .sp=0x8e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9b29, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9b29, .value=0x20, .type=IO_READ},
        {.addr=0x9b2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xeb90, .a=0xc2, .x=0x78, .y=0x3c, .sp=0xd0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xeb90, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xeb91, .a=0xc2, .x=0x78, .y=0x3c, .sp=0xd0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xeb90, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeb90, .value=0x20, .type=IO_READ},
        {.addr=0xeb91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2fee, .a=0x0d, .x=0xb1, .y=0xfe, .sp=0xa3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2fee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2fef, .a=0x0d, .x=0xb1, .y=0xfe, .sp=0xa3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2fee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2fee, .value=0x20, .type=IO_READ},
        {.addr=0x2fef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xefc7, .a=0x08, .x=0xfb, .y=0x1d, .sp=0xf5, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xefc7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xefc8, .a=0x08, .x=0xfb, .y=0x1d, .sp=0xf5, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xefc7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xefc7, .value=0x20, .type=IO_READ},
        {.addr=0xefc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x2ab2, .a=0x11, .x=0x61, .y=0xba, .sp=0x24, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2ab3, .a=0x11, .x=0x61, .y=0xba, .sp=0x24, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x2ab2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ab2, .value=0x20, .type=IO_READ},
        {.addr=0x2ab3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x2ede, .a=0x38, .x=0xd1, .y=0x1f, .sp=0xb1, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x2ede, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2edf, .a=0x38, .x=0xd1, .y=0x1f, .sp=0xb1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2ede, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ede, .value=0x20, .type=IO_READ},
        {.addr=0x2edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x94c3, .a=0x95, .x=0x61, .y=0x67, .sp=0x12, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x94c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x94c4, .a=0x95, .x=0x61, .y=0x67, .sp=0x12, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x94c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x94c3, .value=0x20, .type=IO_READ},
        {.addr=0x94c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5cb0, .a=0x5a, .x=0x6d, .y=0x8a, .sp=0x0f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5cb1, .a=0x5a, .x=0x6d, .y=0x8a, .sp=0x0f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5cb0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5cb0, .value=0x20, .type=IO_READ},
        {.addr=0x5cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x6bdd, .a=0x0e, .x=0x8b, .y=0x0d, .sp=0xfc, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6bdd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6bde, .a=0x0e, .x=0x8b, .y=0x0d, .sp=0xfc, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6bdd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6bdd, .value=0x20, .type=IO_READ},
        {.addr=0x6bde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x31f7, .a=0xa8, .x=0x94, .y=0x8f, .sp=0xd2, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x31f7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x31f8, .a=0xa8, .x=0x94, .y=0x8f, .sp=0xd2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x31f7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x31f7, .value=0x20, .type=IO_READ},
        {.addr=0x31f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xec31, .a=0x67, .x=0x12, .y=0x25, .sp=0x5d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xec31, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xec32, .a=0x67, .x=0x12, .y=0x25, .sp=0x5d, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xec31, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xec31, .value=0x20, .type=IO_READ},
        {.addr=0xec32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x541a, .a=0xc6, .x=0x8c, .y=0xd7, .sp=0xea, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x541a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x541b, .a=0xc6, .x=0x8c, .y=0xd7, .sp=0xea, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x541a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x541a, .value=0x20, .type=IO_READ},
        {.addr=0x541b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xcb9d, .a=0xf1, .x=0x65, .y=0xfd, .sp=0x08, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcb9d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcb9e, .a=0xf1, .x=0x65, .y=0xfd, .sp=0x08, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcb9d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcb9d, .value=0x20, .type=IO_READ},
        {.addr=0xcb9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x6a43, .a=0x91, .x=0x84, .y=0x86, .sp=0xd3, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6a43, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a44, .a=0x91, .x=0x84, .y=0x86, .sp=0xd3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6a43, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a43, .value=0x20, .type=IO_READ},
        {.addr=0x6a44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8dd9, .a=0x13, .x=0x4a, .y=0x8c, .sp=0x52, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8dda, .a=0x13, .x=0x4a, .y=0x8c, .sp=0x52, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8dd9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8dd9, .value=0x20, .type=IO_READ},
        {.addr=0x8dda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x8fa3, .a=0x54, .x=0xb3, .y=0x5b, .sp=0x5c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8fa4, .a=0x54, .x=0xb3, .y=0x5b, .sp=0x5c, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x8fa3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8fa3, .value=0x20, .type=IO_READ},
        {.addr=0x8fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x5434, .a=0x50, .x=0x55, .y=0xd1, .sp=0x0a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x5434, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5435, .a=0x50, .x=0x55, .y=0xd1, .sp=0x0a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5434, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5434, .value=0x20, .type=IO_READ},
        {.addr=0x5435, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xaa73, .a=0x11, .x=0x3a, .y=0x35, .sp=0x01, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xaa73, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaa74, .a=0x11, .x=0x3a, .y=0x35, .sp=0x01, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xaa73, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaa73, .value=0x20, .type=IO_READ},
        {.addr=0xaa74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x1d28, .a=0xb7, .x=0x93, .y=0xf4, .sp=0xad, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x1d28, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1d29, .a=0xb7, .x=0x93, .y=0xf4, .sp=0xad, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1d28, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1d28, .value=0x20, .type=IO_READ},
        {.addr=0x1d29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xf3dc, .a=0x6e, .x=0x07, .y=0x07, .sp=0x98, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf3dc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf3dd, .a=0x6e, .x=0x07, .y=0x07, .sp=0x98, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf3dc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf3dc, .value=0x20, .type=IO_READ},
        {.addr=0xf3dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc8ce, .a=0xb1, .x=0x77, .y=0x65, .sp=0x3c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc8cf, .a=0xb1, .x=0x77, .y=0x65, .sp=0x3c, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xc8ce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc8ce, .value=0x20, .type=IO_READ},
        {.addr=0xc8cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x345b, .a=0x77, .x=0xe0, .y=0x13, .sp=0xbe, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x345b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x345c, .a=0x77, .x=0xe0, .y=0x13, .sp=0xbe, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x345b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x345b, .value=0x20, .type=IO_READ},
        {.addr=0x345c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xe790, .a=0x64, .x=0x3f, .y=0x86, .sp=0x8f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe790, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe791, .a=0x64, .x=0x3f, .y=0x86, .sp=0x8f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe790, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe790, .value=0x20, .type=IO_READ},
        {.addr=0xe791, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xee38, .a=0xfb, .x=0xc0, .y=0x87, .sp=0x67, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xee38, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee39, .a=0xfb, .x=0xc0, .y=0x87, .sp=0x67, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xee38, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee38, .value=0x20, .type=IO_READ},
        {.addr=0xee39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x5ac9, .a=0xc3, .x=0xa2, .y=0xe1, .sp=0x43, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5aca, .a=0xc3, .x=0xa2, .y=0xe1, .sp=0x43, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5ac9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5ac9, .value=0x20, .type=IO_READ},
        {.addr=0x5aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x283d, .a=0x9a, .x=0x06, .y=0xa8, .sp=0x82, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x283d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x283e, .a=0x9a, .x=0x06, .y=0xa8, .sp=0x82, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x283d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x283d, .value=0x20, .type=IO_READ},
        {.addr=0x283e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xb0c8, .a=0x34, .x=0x60, .y=0xcf, .sp=0x79, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb0c9, .a=0x34, .x=0x60, .y=0xcf, .sp=0x79, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb0c8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb0c8, .value=0x20, .type=IO_READ},
        {.addr=0xb0c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xb092, .a=0xc6, .x=0x09, .y=0xd8, .sp=0x73, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb092, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb093, .a=0xc6, .x=0x09, .y=0xd8, .sp=0x73, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xb092, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb092, .value=0x20, .type=IO_READ},
        {.addr=0xb093, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0100) {
    const struct CPU_State initial_cpu = {.pc=0x013b, .a=0x05, .x=0x9d, .y=0x7c, .sp=0x3c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x013c, .a=0x05, .x=0x9d, .y=0x7c, .sp=0x3c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x013b, .value=0x20, .type=IO_READ},
        {.addr=0x013c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0101) {
    const struct CPU_State initial_cpu = {.pc=0x03a5, .a=0x4b, .x=0x34, .y=0x45, .sp=0xca, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x03a5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x03a6, .a=0x4b, .x=0x34, .y=0x45, .sp=0xca, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x03a5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x03a5, .value=0x20, .type=IO_READ},
        {.addr=0x03a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0102) {
    const struct CPU_State initial_cpu = {.pc=0x82c7, .a=0xb6, .x=0x53, .y=0x36, .sp=0xa4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x82c7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x82c8, .a=0xb6, .x=0x53, .y=0x36, .sp=0xa4, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x82c7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x82c7, .value=0x20, .type=IO_READ},
        {.addr=0x82c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0103) {
    const struct CPU_State initial_cpu = {.pc=0x3cee, .a=0x73, .x=0x2a, .y=0x23, .sp=0xb0, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3cee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3cef, .a=0x73, .x=0x2a, .y=0x23, .sp=0xb0, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x3cee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3cee, .value=0x20, .type=IO_READ},
        {.addr=0x3cef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0104) {
    const struct CPU_State initial_cpu = {.pc=0x151e, .a=0x0f, .x=0xbf, .y=0x1d, .sp=0x7b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x151e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x151f, .a=0x0f, .x=0xbf, .y=0x1d, .sp=0x7b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x151e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x151e, .value=0x20, .type=IO_READ},
        {.addr=0x151f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0f47, .a=0x15, .x=0xe1, .y=0xb3, .sp=0xd7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f47, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0f48, .a=0x15, .x=0xe1, .y=0xb3, .sp=0xd7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0f47, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0f47, .value=0x20, .type=IO_READ},
        {.addr=0x0f48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb0de, .a=0x1d, .x=0x52, .y=0x76, .sp=0x71, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb0de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb0df, .a=0x1d, .x=0x52, .y=0x76, .sp=0x71, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xb0de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb0de, .value=0x20, .type=IO_READ},
        {.addr=0xb0df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0107) {
    const struct CPU_State initial_cpu = {.pc=0xfb13, .a=0x7b, .x=0x6b, .y=0xcc, .sp=0x88, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xfb13, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb14, .a=0x7b, .x=0x6b, .y=0xcc, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfb13, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb13, .value=0x20, .type=IO_READ},
        {.addr=0xfb14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0108) {
    const struct CPU_State initial_cpu = {.pc=0x80a7, .a=0x99, .x=0x73, .y=0x43, .sp=0x44, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x80a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x80a8, .a=0x99, .x=0x73, .y=0x43, .sp=0x44, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x80a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x80a7, .value=0x20, .type=IO_READ},
        {.addr=0x80a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0109) {
    const struct CPU_State initial_cpu = {.pc=0xee1c, .a=0xd2, .x=0xfd, .y=0xb9, .sp=0xaf, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xee1c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee1d, .a=0xd2, .x=0xfd, .y=0xb9, .sp=0xaf, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xee1c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee1c, .value=0x20, .type=IO_READ},
        {.addr=0xee1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010A) {
    const struct CPU_State initial_cpu = {.pc=0x451e, .a=0x1f, .x=0x5d, .y=0x04, .sp=0x0b, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x451e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x451f, .a=0x1f, .x=0x5d, .y=0x04, .sp=0x0b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x451e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x451e, .value=0x20, .type=IO_READ},
        {.addr=0x451f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010B) {
    const struct CPU_State initial_cpu = {.pc=0x83e0, .a=0x72, .x=0xde, .y=0x48, .sp=0x5c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x83e0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x83e1, .a=0x72, .x=0xde, .y=0x48, .sp=0x5c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x83e0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x83e0, .value=0x20, .type=IO_READ},
        {.addr=0x83e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010C) {
    const struct CPU_State initial_cpu = {.pc=0xe21c, .a=0x07, .x=0xe8, .y=0x18, .sp=0x9e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe21c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe21d, .a=0x07, .x=0xe8, .y=0x18, .sp=0x9e, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xe21c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe21c, .value=0x20, .type=IO_READ},
        {.addr=0xe21d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010D) {
    const struct CPU_State initial_cpu = {.pc=0xe7be, .a=0x00, .x=0xf4, .y=0x75, .sp=0x53, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe7be, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe7bf, .a=0x00, .x=0xf4, .y=0x75, .sp=0x53, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe7be, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe7be, .value=0x20, .type=IO_READ},
        {.addr=0xe7bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010E) {
    const struct CPU_State initial_cpu = {.pc=0x0fe9, .a=0xc9, .x=0x99, .y=0xa1, .sp=0xc2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0fea, .a=0xc9, .x=0x99, .y=0xa1, .sp=0xc2, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0fe9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0fe9, .value=0x20, .type=IO_READ},
        {.addr=0x0fea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_010F) {
    const struct CPU_State initial_cpu = {.pc=0x07fd, .a=0x88, .x=0xfa, .y=0x1c, .sp=0x90, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x07fd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x07fe, .a=0x88, .x=0xfa, .y=0x1c, .sp=0x90, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x07fd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x07fd, .value=0x20, .type=IO_READ},
        {.addr=0x07fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0110) {
    const struct CPU_State initial_cpu = {.pc=0x4711, .a=0x4c, .x=0xba, .y=0x7f, .sp=0x08, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4711, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4712, .a=0x4c, .x=0xba, .y=0x7f, .sp=0x08, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4711, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4711, .value=0x20, .type=IO_READ},
        {.addr=0x4712, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0111) {
    const struct CPU_State initial_cpu = {.pc=0x3ab2, .a=0x8f, .x=0x4e, .y=0xa2, .sp=0xf2, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3ab3, .a=0x8f, .x=0x4e, .y=0xa2, .sp=0xf2, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x3ab2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3ab2, .value=0x20, .type=IO_READ},
        {.addr=0x3ab3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0112) {
    const struct CPU_State initial_cpu = {.pc=0x48a3, .a=0x06, .x=0x71, .y=0x9e, .sp=0x1a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x48a3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x48a4, .a=0x06, .x=0x71, .y=0x9e, .sp=0x1a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x48a3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x48a3, .value=0x20, .type=IO_READ},
        {.addr=0x48a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf51e, .a=0xb3, .x=0xc4, .y=0x2f, .sp=0xf7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf51e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf51f, .a=0xb3, .x=0xc4, .y=0x2f, .sp=0xf7, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xf51e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf51e, .value=0x20, .type=IO_READ},
        {.addr=0xf51f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0114) {
    const struct CPU_State initial_cpu = {.pc=0x1427, .a=0x8c, .x=0x4c, .y=0xe7, .sp=0x80, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1427, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1428, .a=0x8c, .x=0x4c, .y=0xe7, .sp=0x80, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x1427, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1427, .value=0x20, .type=IO_READ},
        {.addr=0x1428, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0115) {
    const struct CPU_State initial_cpu = {.pc=0x4016, .a=0x3d, .x=0xea, .y=0xc8, .sp=0x2d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4016, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4017, .a=0x3d, .x=0xea, .y=0xc8, .sp=0x2d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4016, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4016, .value=0x20, .type=IO_READ},
        {.addr=0x4017, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0116) {
    const struct CPU_State initial_cpu = {.pc=0x89a8, .a=0xe7, .x=0xc8, .y=0xf6, .sp=0x51, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x89a8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x89a9, .a=0xe7, .x=0xc8, .y=0xf6, .sp=0x51, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x89a8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x89a8, .value=0x20, .type=IO_READ},
        {.addr=0x89a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0117) {
    const struct CPU_State initial_cpu = {.pc=0x6538, .a=0x71, .x=0x4d, .y=0xc7, .sp=0x4d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6538, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6539, .a=0x71, .x=0x4d, .y=0xc7, .sp=0x4d, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x6538, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6538, .value=0x20, .type=IO_READ},
        {.addr=0x6539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0118) {
    const struct CPU_State initial_cpu = {.pc=0xa1a5, .a=0x49, .x=0x57, .y=0x83, .sp=0x6b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa1a6, .a=0x49, .x=0x57, .y=0x83, .sp=0x6b, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xa1a5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa1a5, .value=0x20, .type=IO_READ},
        {.addr=0xa1a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0119) {
    const struct CPU_State initial_cpu = {.pc=0xfa7a, .a=0x15, .x=0x59, .y=0x9e, .sp=0xa8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xfa7a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfa7b, .a=0x15, .x=0x59, .y=0x9e, .sp=0xa8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfa7a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfa7a, .value=0x20, .type=IO_READ},
        {.addr=0xfa7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011A) {
    const struct CPU_State initial_cpu = {.pc=0x5257, .a=0x8a, .x=0x44, .y=0xa0, .sp=0x19, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5257, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5258, .a=0x8a, .x=0x44, .y=0xa0, .sp=0x19, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5257, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5257, .value=0x20, .type=IO_READ},
        {.addr=0x5258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc081, .a=0x11, .x=0x95, .y=0xfa, .sp=0x70, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc081, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc082, .a=0x11, .x=0x95, .y=0xfa, .sp=0x70, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xc081, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc081, .value=0x20, .type=IO_READ},
        {.addr=0xc082, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011C) {
    const struct CPU_State initial_cpu = {.pc=0x7488, .a=0xed, .x=0x8a, .y=0xbc, .sp=0x52, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7488, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7489, .a=0xed, .x=0x8a, .y=0xbc, .sp=0x52, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7488, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7488, .value=0x20, .type=IO_READ},
        {.addr=0x7489, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011D) {
    const struct CPU_State initial_cpu = {.pc=0xe5c8, .a=0x33, .x=0xfb, .y=0xa1, .sp=0xd3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe5c9, .a=0x33, .x=0xfb, .y=0xa1, .sp=0xd3, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xe5c8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe5c8, .value=0x20, .type=IO_READ},
        {.addr=0xe5c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011E) {
    const struct CPU_State initial_cpu = {.pc=0x19ce, .a=0x9d, .x=0xe2, .y=0xbb, .sp=0x1e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x19ce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x19cf, .a=0x9d, .x=0xe2, .y=0xbb, .sp=0x1e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x19ce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x19ce, .value=0x20, .type=IO_READ},
        {.addr=0x19cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_011F) {
    const struct CPU_State initial_cpu = {.pc=0x6634, .a=0x02, .x=0x2b, .y=0x58, .sp=0xc9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6634, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6635, .a=0x02, .x=0x2b, .y=0x58, .sp=0xc9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6634, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6634, .value=0x20, .type=IO_READ},
        {.addr=0x6635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0120) {
    const struct CPU_State initial_cpu = {.pc=0xce8e, .a=0xd0, .x=0x13, .y=0xb0, .sp=0x91, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xce8e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xce8f, .a=0xd0, .x=0x13, .y=0xb0, .sp=0x91, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xce8e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xce8e, .value=0x20, .type=IO_READ},
        {.addr=0xce8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0121) {
    const struct CPU_State initial_cpu = {.pc=0x333d, .a=0x9c, .x=0x02, .y=0xaa, .sp=0x9b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x333d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x333e, .a=0x9c, .x=0x02, .y=0xaa, .sp=0x9b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x333d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x333d, .value=0x20, .type=IO_READ},
        {.addr=0x333e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0122) {
    const struct CPU_State initial_cpu = {.pc=0x2fbc, .a=0x5d, .x=0x39, .y=0x5a, .sp=0xe1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2fbc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2fbd, .a=0x5d, .x=0x39, .y=0x5a, .sp=0xe1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2fbc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2fbc, .value=0x20, .type=IO_READ},
        {.addr=0x2fbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0123) {
    const struct CPU_State initial_cpu = {.pc=0x2725, .a=0xd2, .x=0x7b, .y=0x3d, .sp=0xb1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x2725, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2726, .a=0xd2, .x=0x7b, .y=0x3d, .sp=0xb1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2725, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2725, .value=0x20, .type=IO_READ},
        {.addr=0x2726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0124) {
    const struct CPU_State initial_cpu = {.pc=0x3adf, .a=0x8a, .x=0x64, .y=0x59, .sp=0x21, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3adf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3ae0, .a=0x8a, .x=0x64, .y=0x59, .sp=0x21, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x3adf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3adf, .value=0x20, .type=IO_READ},
        {.addr=0x3ae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe0c2, .a=0x5e, .x=0xce, .y=0x61, .sp=0xa2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe0c3, .a=0x5e, .x=0xce, .y=0x61, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe0c2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe0c2, .value=0x20, .type=IO_READ},
        {.addr=0xe0c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0126) {
    const struct CPU_State initial_cpu = {.pc=0xd4a0, .a=0x2a, .x=0xfc, .y=0x75, .sp=0x1a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd4a0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd4a1, .a=0x2a, .x=0xfc, .y=0x75, .sp=0x1a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd4a0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd4a0, .value=0x20, .type=IO_READ},
        {.addr=0xd4a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9d09, .a=0xe7, .x=0x13, .y=0x81, .sp=0xde, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9d09, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9d0a, .a=0xe7, .x=0x13, .y=0x81, .sp=0xde, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x9d09, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9d09, .value=0x20, .type=IO_READ},
        {.addr=0x9d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc123, .a=0xa1, .x=0xd9, .y=0x6c, .sp=0x96, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xc123, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc124, .a=0xa1, .x=0xd9, .y=0x6c, .sp=0x96, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc123, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc123, .value=0x20, .type=IO_READ},
        {.addr=0xc124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9d95, .a=0x1d, .x=0x27, .y=0x7a, .sp=0xfb, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9d95, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9d96, .a=0x1d, .x=0x27, .y=0x7a, .sp=0xfb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9d95, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9d95, .value=0x20, .type=IO_READ},
        {.addr=0x9d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012A) {
    const struct CPU_State initial_cpu = {.pc=0x3ebd, .a=0xe3, .x=0x3d, .y=0xd7, .sp=0x6d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3ebe, .a=0xe3, .x=0x3d, .y=0xd7, .sp=0x6d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3ebd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3ebd, .value=0x20, .type=IO_READ},
        {.addr=0x3ebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012B) {
    const struct CPU_State initial_cpu = {.pc=0x30a1, .a=0x6c, .x=0x79, .y=0x4c, .sp=0x65, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x30a1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x30a2, .a=0x6c, .x=0x79, .y=0x4c, .sp=0x65, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x30a1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x30a1, .value=0x20, .type=IO_READ},
        {.addr=0x30a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012C) {
    const struct CPU_State initial_cpu = {.pc=0xe096, .a=0x29, .x=0x08, .y=0x05, .sp=0x08, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe096, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe097, .a=0x29, .x=0x08, .y=0x05, .sp=0x08, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xe096, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe096, .value=0x20, .type=IO_READ},
        {.addr=0xe097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012D) {
    const struct CPU_State initial_cpu = {.pc=0x4baf, .a=0xcb, .x=0x17, .y=0x93, .sp=0x64, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4baf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4bb0, .a=0xcb, .x=0x17, .y=0x93, .sp=0x64, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x4baf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4baf, .value=0x20, .type=IO_READ},
        {.addr=0x4bb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012E) {
    const struct CPU_State initial_cpu = {.pc=0x377d, .a=0x42, .x=0xc4, .y=0x51, .sp=0x9d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x377d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x377e, .a=0x42, .x=0xc4, .y=0x51, .sp=0x9d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x377d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x377d, .value=0x20, .type=IO_READ},
        {.addr=0x377e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_012F) {
    const struct CPU_State initial_cpu = {.pc=0x8050, .a=0x99, .x=0x85, .y=0x17, .sp=0x1b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8050, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8051, .a=0x99, .x=0x85, .y=0x17, .sp=0x1b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x8050, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8050, .value=0x20, .type=IO_READ},
        {.addr=0x8051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0130) {
    const struct CPU_State initial_cpu = {.pc=0xaf68, .a=0xd6, .x=0x50, .y=0xb3, .sp=0x94, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xaf68, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaf69, .a=0xd6, .x=0x50, .y=0xb3, .sp=0x94, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xaf68, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaf68, .value=0x20, .type=IO_READ},
        {.addr=0xaf69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8be8, .a=0xf7, .x=0xc9, .y=0x02, .sp=0x36, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8be8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8be9, .a=0xf7, .x=0xc9, .y=0x02, .sp=0x36, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x8be8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8be8, .value=0x20, .type=IO_READ},
        {.addr=0x8be9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0132) {
    const struct CPU_State initial_cpu = {.pc=0xcfa2, .a=0x2f, .x=0x5b, .y=0xe0, .sp=0xb0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcfa3, .a=0x2f, .x=0x5b, .y=0xe0, .sp=0xb0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcfa2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcfa2, .value=0x20, .type=IO_READ},
        {.addr=0xcfa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0133) {
    const struct CPU_State initial_cpu = {.pc=0x2da0, .a=0xc0, .x=0x6a, .y=0x1f, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2da0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2da1, .a=0xc0, .x=0x6a, .y=0x1f, .sp=0x23, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2da0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2da0, .value=0x20, .type=IO_READ},
        {.addr=0x2da1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0134) {
    const struct CPU_State initial_cpu = {.pc=0xe1f3, .a=0x7f, .x=0x9c, .y=0xc1, .sp=0xc3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe1f3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe1f4, .a=0x7f, .x=0x9c, .y=0xc1, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe1f3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe1f3, .value=0x20, .type=IO_READ},
        {.addr=0xe1f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0135) {
    const struct CPU_State initial_cpu = {.pc=0xbc10, .a=0x9c, .x=0x69, .y=0xf2, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xbc10, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbc11, .a=0x9c, .x=0x69, .y=0xf2, .sp=0xa2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xbc10, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbc10, .value=0x20, .type=IO_READ},
        {.addr=0xbc11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0136) {
    const struct CPU_State initial_cpu = {.pc=0x0ce7, .a=0xc7, .x=0x68, .y=0x09, .sp=0x05, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0ce7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0ce8, .a=0xc7, .x=0x68, .y=0x09, .sp=0x05, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0ce7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0ce7, .value=0x20, .type=IO_READ},
        {.addr=0x0ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0137) {
    const struct CPU_State initial_cpu = {.pc=0xaaa1, .a=0xcd, .x=0xc4, .y=0xfb, .sp=0x02, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaaa2, .a=0xcd, .x=0xc4, .y=0xfb, .sp=0x02, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xaaa1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaaa1, .value=0x20, .type=IO_READ},
        {.addr=0xaaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8eec, .a=0xdc, .x=0x1b, .y=0xf9, .sp=0x02, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8eec, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8eed, .a=0xdc, .x=0x1b, .y=0xf9, .sp=0x02, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x8eec, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8eec, .value=0x20, .type=IO_READ},
        {.addr=0x8eed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6ac4, .a=0xb0, .x=0x4f, .y=0x03, .sp=0x93, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6ac5, .a=0xb0, .x=0x4f, .y=0x03, .sp=0x93, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x6ac4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6ac4, .value=0x20, .type=IO_READ},
        {.addr=0x6ac5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013A) {
    const struct CPU_State initial_cpu = {.pc=0xf51b, .a=0x4d, .x=0x06, .y=0xb8, .sp=0x54, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf51b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf51c, .a=0x4d, .x=0x06, .y=0xb8, .sp=0x54, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf51b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf51b, .value=0x20, .type=IO_READ},
        {.addr=0xf51c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013B) {
    const struct CPU_State initial_cpu = {.pc=0x74fe, .a=0x18, .x=0xd0, .y=0xca, .sp=0x6a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x74fe, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x74ff, .a=0x18, .x=0xd0, .y=0xca, .sp=0x6a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x74fe, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x74fe, .value=0x20, .type=IO_READ},
        {.addr=0x74ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013C) {
    const struct CPU_State initial_cpu = {.pc=0x8cb6, .a=0x46, .x=0xab, .y=0x11, .sp=0xd9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8cb7, .a=0x46, .x=0xab, .y=0x11, .sp=0xd9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8cb6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8cb6, .value=0x20, .type=IO_READ},
        {.addr=0x8cb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013D) {
    const struct CPU_State initial_cpu = {.pc=0xb301, .a=0xc6, .x=0xcd, .y=0x99, .sp=0xe6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb301, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb302, .a=0xc6, .x=0xcd, .y=0x99, .sp=0xe6, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xb301, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb301, .value=0x20, .type=IO_READ},
        {.addr=0xb302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa2a7, .a=0xcb, .x=0x88, .y=0xa5, .sp=0xf9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa2a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa2a8, .a=0xcb, .x=0x88, .y=0xa5, .sp=0xf9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa2a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa2a7, .value=0x20, .type=IO_READ},
        {.addr=0xa2a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_013F) {
    const struct CPU_State initial_cpu = {.pc=0x1751, .a=0x79, .x=0x74, .y=0x0e, .sp=0xf8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x1751, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1752, .a=0x79, .x=0x74, .y=0x0e, .sp=0xf8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1751, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1751, .value=0x20, .type=IO_READ},
        {.addr=0x1752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0140) {
    const struct CPU_State initial_cpu = {.pc=0xee2e, .a=0x9c, .x=0xc8, .y=0x54, .sp=0xf6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xee2e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee2f, .a=0x9c, .x=0xc8, .y=0x54, .sp=0xf6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xee2e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee2e, .value=0x20, .type=IO_READ},
        {.addr=0xee2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0141) {
    const struct CPU_State initial_cpu = {.pc=0x3d7e, .a=0xd2, .x=0x34, .y=0x67, .sp=0x35, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3d7e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3d7f, .a=0xd2, .x=0x34, .y=0x67, .sp=0x35, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3d7e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3d7e, .value=0x20, .type=IO_READ},
        {.addr=0x3d7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0142) {
    const struct CPU_State initial_cpu = {.pc=0x888b, .a=0xb8, .x=0xd1, .y=0x32, .sp=0xe9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x888b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x888c, .a=0xb8, .x=0xd1, .y=0x32, .sp=0xe9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x888b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x888b, .value=0x20, .type=IO_READ},
        {.addr=0x888c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0143) {
    const struct CPU_State initial_cpu = {.pc=0xe895, .a=0x4e, .x=0xca, .y=0x71, .sp=0x9b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe895, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe896, .a=0x4e, .x=0xca, .y=0x71, .sp=0x9b, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xe895, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe895, .value=0x20, .type=IO_READ},
        {.addr=0xe896, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7e00, .a=0x4c, .x=0xc8, .y=0x38, .sp=0x3b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7e00, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7e01, .a=0x4c, .x=0xc8, .y=0x38, .sp=0x3b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7e00, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7e00, .value=0x20, .type=IO_READ},
        {.addr=0x7e01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0145) {
    const struct CPU_State initial_cpu = {.pc=0x9bfa, .a=0xc4, .x=0xdc, .y=0x74, .sp=0x94, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9bfa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9bfb, .a=0xc4, .x=0xdc, .y=0x74, .sp=0x94, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9bfa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9bfa, .value=0x20, .type=IO_READ},
        {.addr=0x9bfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0146) {
    const struct CPU_State initial_cpu = {.pc=0x1c3d, .a=0x95, .x=0xfd, .y=0xbc, .sp=0x2b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1c3e, .a=0x95, .x=0xfd, .y=0xbc, .sp=0x2b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1c3d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1c3d, .value=0x20, .type=IO_READ},
        {.addr=0x1c3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0147) {
    const struct CPU_State initial_cpu = {.pc=0x85c1, .a=0x35, .x=0x7b, .y=0x80, .sp=0xda, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x85c1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x85c2, .a=0x35, .x=0x7b, .y=0x80, .sp=0xda, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x85c1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x85c1, .value=0x20, .type=IO_READ},
        {.addr=0x85c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0148) {
    const struct CPU_State initial_cpu = {.pc=0x62f6, .a=0x93, .x=0x65, .y=0x10, .sp=0xbc, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x62f6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x62f7, .a=0x93, .x=0x65, .y=0x10, .sp=0xbc, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x62f6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x62f6, .value=0x20, .type=IO_READ},
        {.addr=0x62f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0149) {
    const struct CPU_State initial_cpu = {.pc=0xfa2e, .a=0xbd, .x=0x0f, .y=0xff, .sp=0x67, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfa2f, .a=0xbd, .x=0x0f, .y=0xff, .sp=0x67, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xfa2e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfa2e, .value=0x20, .type=IO_READ},
        {.addr=0xfa2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014A) {
    const struct CPU_State initial_cpu = {.pc=0x92d6, .a=0x91, .x=0xbe, .y=0x86, .sp=0x26, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x92d6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x92d7, .a=0x91, .x=0xbe, .y=0x86, .sp=0x26, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x92d6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x92d6, .value=0x20, .type=IO_READ},
        {.addr=0x92d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014B) {
    const struct CPU_State initial_cpu = {.pc=0xd638, .a=0x93, .x=0x3a, .y=0xa3, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd638, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd639, .a=0x93, .x=0x3a, .y=0xa3, .sp=0x26, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xd638, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd638, .value=0x20, .type=IO_READ},
        {.addr=0xd639, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014C) {
    const struct CPU_State initial_cpu = {.pc=0x6dee, .a=0x68, .x=0x31, .y=0x2c, .sp=0xd1, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6dee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6def, .a=0x68, .x=0x31, .y=0x2c, .sp=0xd1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6dee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6dee, .value=0x20, .type=IO_READ},
        {.addr=0x6def, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014D) {
    const struct CPU_State initial_cpu = {.pc=0x8d8d, .a=0xa3, .x=0xf1, .y=0xd9, .sp=0x2e, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8d8e, .a=0xa3, .x=0xf1, .y=0xd9, .sp=0x2e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8d8d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8d8d, .value=0x20, .type=IO_READ},
        {.addr=0x8d8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014E) {
    const struct CPU_State initial_cpu = {.pc=0x79b1, .a=0x15, .x=0x7e, .y=0xb5, .sp=0xbd, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x79b1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x79b2, .a=0x15, .x=0x7e, .y=0xb5, .sp=0xbd, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x79b1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x79b1, .value=0x20, .type=IO_READ},
        {.addr=0x79b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4646, .a=0xad, .x=0xf8, .y=0x64, .sp=0xee, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x4646, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4647, .a=0xad, .x=0xf8, .y=0x64, .sp=0xee, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4646, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4646, .value=0x20, .type=IO_READ},
        {.addr=0x4647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0150) {
    const struct CPU_State initial_cpu = {.pc=0x5f57, .a=0xea, .x=0x81, .y=0xc8, .sp=0xd1, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5f57, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5f58, .a=0xea, .x=0x81, .y=0xc8, .sp=0xd1, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5f57, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5f57, .value=0x20, .type=IO_READ},
        {.addr=0x5f58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0151) {
    const struct CPU_State initial_cpu = {.pc=0xe261, .a=0x37, .x=0x98, .y=0xa6, .sp=0x9b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe261, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe262, .a=0x37, .x=0x98, .y=0xa6, .sp=0x9b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe261, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe261, .value=0x20, .type=IO_READ},
        {.addr=0xe262, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0152) {
    const struct CPU_State initial_cpu = {.pc=0x4a1b, .a=0xb4, .x=0x6d, .y=0xc1, .sp=0x13, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4a1c, .a=0xb4, .x=0x6d, .y=0xc1, .sp=0x13, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x4a1b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4a1b, .value=0x20, .type=IO_READ},
        {.addr=0x4a1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0153) {
    const struct CPU_State initial_cpu = {.pc=0x69eb, .a=0x93, .x=0x29, .y=0x1e, .sp=0x2c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x69eb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x69ec, .a=0x93, .x=0x29, .y=0x1e, .sp=0x2c, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x69eb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x69eb, .value=0x20, .type=IO_READ},
        {.addr=0x69ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0154) {
    const struct CPU_State initial_cpu = {.pc=0xc85c, .a=0x2d, .x=0x25, .y=0x71, .sp=0xdc, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xc85c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc85d, .a=0x2d, .x=0x25, .y=0x71, .sp=0xdc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc85c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc85c, .value=0x20, .type=IO_READ},
        {.addr=0xc85d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0155) {
    const struct CPU_State initial_cpu = {.pc=0xb16b, .a=0xb7, .x=0x03, .y=0x06, .sp=0x3c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xb16b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb16c, .a=0xb7, .x=0x03, .y=0x06, .sp=0x3c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb16b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb16b, .value=0x20, .type=IO_READ},
        {.addr=0xb16c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0156) {
    const struct CPU_State initial_cpu = {.pc=0x2449, .a=0xfe, .x=0xdf, .y=0x2e, .sp=0x02, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x2449, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x244a, .a=0xfe, .x=0xdf, .y=0x2e, .sp=0x02, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2449, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2449, .value=0x20, .type=IO_READ},
        {.addr=0x244a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0157) {
    const struct CPU_State initial_cpu = {.pc=0x32ba, .a=0xb6, .x=0xcf, .y=0xfa, .sp=0xa5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x32ba, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x32bb, .a=0xb6, .x=0xcf, .y=0xfa, .sp=0xa5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x32ba, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x32ba, .value=0x20, .type=IO_READ},
        {.addr=0x32bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0158) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0xee, .x=0xa9, .y=0x45, .sp=0xbe, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2367, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2368, .a=0xee, .x=0xa9, .y=0x45, .sp=0xbe, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x2367, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0x20, .type=IO_READ},
        {.addr=0x2368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0159) {
    const struct CPU_State initial_cpu = {.pc=0xa24c, .a=0x0c, .x=0x49, .y=0xfe, .sp=0xf5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa24c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa24d, .a=0x0c, .x=0x49, .y=0xfe, .sp=0xf5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa24c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa24c, .value=0x20, .type=IO_READ},
        {.addr=0xa24d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015A) {
    const struct CPU_State initial_cpu = {.pc=0xe542, .a=0x75, .x=0x25, .y=0x07, .sp=0xf6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe542, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe543, .a=0x75, .x=0x25, .y=0x07, .sp=0xf6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe542, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe542, .value=0x20, .type=IO_READ},
        {.addr=0xe543, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015B) {
    const struct CPU_State initial_cpu = {.pc=0x039b, .a=0x3a, .x=0x46, .y=0xa6, .sp=0xb3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x039b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x039c, .a=0x3a, .x=0x46, .y=0xa6, .sp=0xb3, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x039b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x039b, .value=0x20, .type=IO_READ},
        {.addr=0x039c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015C) {
    const struct CPU_State initial_cpu = {.pc=0x481b, .a=0xc7, .x=0x49, .y=0x1e, .sp=0xe0, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x481b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x481c, .a=0xc7, .x=0x49, .y=0x1e, .sp=0xe0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x481b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x481b, .value=0x20, .type=IO_READ},
        {.addr=0x481c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015D) {
    const struct CPU_State initial_cpu = {.pc=0x0aac, .a=0xad, .x=0xdc, .y=0x1a, .sp=0x56, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0aac, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0aad, .a=0xad, .x=0xdc, .y=0x1a, .sp=0x56, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0aac, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0aac, .value=0x20, .type=IO_READ},
        {.addr=0x0aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015E) {
    const struct CPU_State initial_cpu = {.pc=0x742e, .a=0xef, .x=0x0b, .y=0x99, .sp=0xa5, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x742e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x742f, .a=0xef, .x=0x0b, .y=0x99, .sp=0xa5, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x742e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x742e, .value=0x20, .type=IO_READ},
        {.addr=0x742f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_015F) {
    const struct CPU_State initial_cpu = {.pc=0xa412, .a=0x6a, .x=0x95, .y=0xda, .sp=0x97, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa412, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa413, .a=0x6a, .x=0x95, .y=0xda, .sp=0x97, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa412, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa412, .value=0x20, .type=IO_READ},
        {.addr=0xa413, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0160) {
    const struct CPU_State initial_cpu = {.pc=0xa23d, .a=0xea, .x=0x70, .y=0x2c, .sp=0xbd, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa23d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa23e, .a=0xea, .x=0x70, .y=0x2c, .sp=0xbd, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa23d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa23d, .value=0x20, .type=IO_READ},
        {.addr=0xa23e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0161) {
    const struct CPU_State initial_cpu = {.pc=0x00d7, .a=0x1c, .x=0x9e, .y=0x2c, .sp=0xdc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x00d8, .a=0x1c, .x=0x9e, .y=0x2c, .sp=0xdc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x00d7, .value=0x20, .type=IO_READ},
        {.addr=0x00d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0162) {
    const struct CPU_State initial_cpu = {.pc=0xef78, .a=0x86, .x=0x62, .y=0x06, .sp=0x95, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xef78, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xef79, .a=0x86, .x=0x62, .y=0x06, .sp=0x95, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xef78, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xef78, .value=0x20, .type=IO_READ},
        {.addr=0xef79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0163) {
    const struct CPU_State initial_cpu = {.pc=0xbb5c, .a=0x5b, .x=0x3c, .y=0x4a, .sp=0x19, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbb5d, .a=0x5b, .x=0x3c, .y=0x4a, .sp=0x19, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xbb5c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbb5c, .value=0x20, .type=IO_READ},
        {.addr=0xbb5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0164) {
    const struct CPU_State initial_cpu = {.pc=0x8b76, .a=0xd4, .x=0xdd, .y=0x97, .sp=0xbf, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8b76, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8b77, .a=0xd4, .x=0xdd, .y=0x97, .sp=0xbf, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x8b76, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8b76, .value=0x20, .type=IO_READ},
        {.addr=0x8b77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0165) {
    const struct CPU_State initial_cpu = {.pc=0x0c64, .a=0xf0, .x=0xb9, .y=0xa4, .sp=0xcd, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0c64, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0c65, .a=0xf0, .x=0xb9, .y=0xa4, .sp=0xcd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0c64, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0c64, .value=0x20, .type=IO_READ},
        {.addr=0x0c65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0166) {
    const struct CPU_State initial_cpu = {.pc=0x6b7f, .a=0xf2, .x=0x40, .y=0xa8, .sp=0xd5, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6b7f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6b80, .a=0xf2, .x=0x40, .y=0xa8, .sp=0xd5, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6b7f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6b7f, .value=0x20, .type=IO_READ},
        {.addr=0x6b80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe31b, .a=0x9b, .x=0xb5, .y=0x90, .sp=0x57, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe31b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe31c, .a=0x9b, .x=0xb5, .y=0x90, .sp=0x57, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xe31b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe31b, .value=0x20, .type=IO_READ},
        {.addr=0xe31c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0168) {
    const struct CPU_State initial_cpu = {.pc=0x2ef9, .a=0x80, .x=0x6a, .y=0x88, .sp=0xa3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2efa, .a=0x80, .x=0x6a, .y=0x88, .sp=0xa3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x2ef9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ef9, .value=0x20, .type=IO_READ},
        {.addr=0x2efa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0169) {
    const struct CPU_State initial_cpu = {.pc=0x2472, .a=0x84, .x=0x08, .y=0xe9, .sp=0x9e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2472, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2473, .a=0x84, .x=0x08, .y=0xe9, .sp=0x9e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2472, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2472, .value=0x20, .type=IO_READ},
        {.addr=0x2473, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016A) {
    const struct CPU_State initial_cpu = {.pc=0xcf14, .a=0x6d, .x=0xb5, .y=0x8c, .sp=0x3b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xcf14, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcf15, .a=0x6d, .x=0xb5, .y=0x8c, .sp=0x3b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xcf14, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcf14, .value=0x20, .type=IO_READ},
        {.addr=0xcf15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0976, .a=0xa0, .x=0x82, .y=0x91, .sp=0xbc, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0976, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0977, .a=0xa0, .x=0x82, .y=0x91, .sp=0xbc, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0976, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0976, .value=0x20, .type=IO_READ},
        {.addr=0x0977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016C) {
    const struct CPU_State initial_cpu = {.pc=0xe8a7, .a=0x0e, .x=0x5e, .y=0x6d, .sp=0xde, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xe8a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe8a8, .a=0x0e, .x=0x5e, .y=0x6d, .sp=0xde, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe8a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe8a7, .value=0x20, .type=IO_READ},
        {.addr=0xe8a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016D) {
    const struct CPU_State initial_cpu = {.pc=0x3a91, .a=0x29, .x=0x66, .y=0x16, .sp=0x56, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3a91, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3a92, .a=0x29, .x=0x66, .y=0x16, .sp=0x56, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3a91, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3a91, .value=0x20, .type=IO_READ},
        {.addr=0x3a92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016E) {
    const struct CPU_State initial_cpu = {.pc=0x5d1a, .a=0x62, .x=0xe1, .y=0x1f, .sp=0xb4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5d1a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5d1b, .a=0x62, .x=0xe1, .y=0x1f, .sp=0xb4, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5d1a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5d1a, .value=0x20, .type=IO_READ},
        {.addr=0x5d1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_016F) {
    const struct CPU_State initial_cpu = {.pc=0xc867, .a=0x37, .x=0xe6, .y=0x06, .sp=0x2a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc867, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc868, .a=0x37, .x=0xe6, .y=0x06, .sp=0x2a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc867, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc867, .value=0x20, .type=IO_READ},
        {.addr=0xc868, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0170) {
    const struct CPU_State initial_cpu = {.pc=0xc051, .a=0xdd, .x=0x1a, .y=0x07, .sp=0xe0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc051, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc052, .a=0xdd, .x=0x1a, .y=0x07, .sp=0xe0, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xc051, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc051, .value=0x20, .type=IO_READ},
        {.addr=0xc052, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0171) {
    const struct CPU_State initial_cpu = {.pc=0xa09b, .a=0xc7, .x=0x2e, .y=0xc4, .sp=0x50, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa09b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa09c, .a=0xc7, .x=0x2e, .y=0xc4, .sp=0x50, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xa09b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa09b, .value=0x20, .type=IO_READ},
        {.addr=0xa09c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0172) {
    const struct CPU_State initial_cpu = {.pc=0x4b60, .a=0xe2, .x=0x46, .y=0xe7, .sp=0x23, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b60, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4b61, .a=0xe2, .x=0x46, .y=0xe7, .sp=0x23, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x4b60, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4b60, .value=0x20, .type=IO_READ},
        {.addr=0x4b61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3e2b, .a=0x6a, .x=0x50, .y=0x43, .sp=0x5b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x3e2b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3e2c, .a=0x6a, .x=0x50, .y=0x43, .sp=0x5b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x3e2b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3e2b, .value=0x20, .type=IO_READ},
        {.addr=0x3e2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0174) {
    const struct CPU_State initial_cpu = {.pc=0x5a1a, .a=0x8f, .x=0xb3, .y=0xb2, .sp=0x0d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x5a1a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5a1b, .a=0x8f, .x=0xb3, .y=0xb2, .sp=0x0d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5a1a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5a1a, .value=0x20, .type=IO_READ},
        {.addr=0x5a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0175) {
    const struct CPU_State initial_cpu = {.pc=0x5c1e, .a=0x4e, .x=0xf0, .y=0xd2, .sp=0xff, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x5c1e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5c1f, .a=0x4e, .x=0xf0, .y=0xd2, .sp=0xff, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5c1e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5c1e, .value=0x20, .type=IO_READ},
        {.addr=0x5c1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0176) {
    const struct CPU_State initial_cpu = {.pc=0x7631, .a=0x66, .x=0xd8, .y=0x29, .sp=0x42, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7631, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7632, .a=0x66, .x=0xd8, .y=0x29, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7631, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7631, .value=0x20, .type=IO_READ},
        {.addr=0x7632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0177) {
    const struct CPU_State initial_cpu = {.pc=0x9bd7, .a=0x3e, .x=0x52, .y=0xfb, .sp=0x73, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9bd8, .a=0x3e, .x=0x52, .y=0xfb, .sp=0x73, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9bd7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9bd7, .value=0x20, .type=IO_READ},
        {.addr=0x9bd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0178) {
    const struct CPU_State initial_cpu = {.pc=0xf20f, .a=0x73, .x=0xe8, .y=0x9a, .sp=0x1f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf20f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf210, .a=0x73, .x=0xe8, .y=0x9a, .sp=0x1f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf20f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf20f, .value=0x20, .type=IO_READ},
        {.addr=0xf210, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0179) {
    const struct CPU_State initial_cpu = {.pc=0x57ff, .a=0xd8, .x=0xa5, .y=0xf1, .sp=0x9c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x57ff, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5800, .a=0xd8, .x=0xa5, .y=0xf1, .sp=0x9c, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x57ff, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x57ff, .value=0x20, .type=IO_READ},
        {.addr=0x5800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017A) {
    const struct CPU_State initial_cpu = {.pc=0x4555, .a=0xe8, .x=0xc2, .y=0x99, .sp=0xf7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4555, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4556, .a=0xe8, .x=0xc2, .y=0x99, .sp=0xf7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4555, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4555, .value=0x20, .type=IO_READ},
        {.addr=0x4556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017B) {
    const struct CPU_State initial_cpu = {.pc=0xf70c, .a=0x7b, .x=0x7c, .y=0xa0, .sp=0x4a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf70c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf70d, .a=0x7b, .x=0x7c, .y=0xa0, .sp=0x4a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf70c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf70c, .value=0x20, .type=IO_READ},
        {.addr=0xf70d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017C) {
    const struct CPU_State initial_cpu = {.pc=0x8d80, .a=0x70, .x=0x6e, .y=0xa5, .sp=0xd6, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8d80, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8d81, .a=0x70, .x=0x6e, .y=0xa5, .sp=0xd6, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8d80, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8d80, .value=0x20, .type=IO_READ},
        {.addr=0x8d81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5601, .a=0xa5, .x=0x77, .y=0x90, .sp=0xf3, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5601, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5602, .a=0xa5, .x=0x77, .y=0x90, .sp=0xf3, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x5601, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5601, .value=0x20, .type=IO_READ},
        {.addr=0x5602, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9a6c, .a=0xc1, .x=0x26, .y=0xe1, .sp=0x16, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9a6c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9a6d, .a=0xc1, .x=0x26, .y=0xe1, .sp=0x16, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x9a6c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9a6c, .value=0x20, .type=IO_READ},
        {.addr=0x9a6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa037, .a=0x79, .x=0xfd, .y=0x10, .sp=0x1b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa037, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa038, .a=0x79, .x=0xfd, .y=0x10, .sp=0x1b, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa037, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa037, .value=0x20, .type=IO_READ},
        {.addr=0xa038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0180) {
    const struct CPU_State initial_cpu = {.pc=0x22d5, .a=0xde, .x=0x9b, .y=0xbd, .sp=0xc7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x22d5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x22d6, .a=0xde, .x=0x9b, .y=0xbd, .sp=0xc7, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x22d5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x22d5, .value=0x20, .type=IO_READ},
        {.addr=0x22d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0181) {
    const struct CPU_State initial_cpu = {.pc=0xfb40, .a=0x76, .x=0x70, .y=0x0e, .sp=0xaf, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xfb40, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb41, .a=0x76, .x=0x70, .y=0x0e, .sp=0xaf, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xfb40, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb40, .value=0x20, .type=IO_READ},
        {.addr=0xfb41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0182) {
    const struct CPU_State initial_cpu = {.pc=0x2046, .a=0x86, .x=0x93, .y=0xdb, .sp=0x70, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2046, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2047, .a=0x86, .x=0x93, .y=0xdb, .sp=0x70, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x2046, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2046, .value=0x20, .type=IO_READ},
        {.addr=0x2047, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5475, .a=0x6e, .x=0x20, .y=0x46, .sp=0x3f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x5475, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5476, .a=0x6e, .x=0x20, .y=0x46, .sp=0x3f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x5475, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5475, .value=0x20, .type=IO_READ},
        {.addr=0x5476, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0184) {
    const struct CPU_State initial_cpu = {.pc=0xebc7, .a=0xe3, .x=0xbe, .y=0xec, .sp=0x8d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xebc7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xebc8, .a=0xe3, .x=0xbe, .y=0xec, .sp=0x8d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xebc7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xebc7, .value=0x20, .type=IO_READ},
        {.addr=0xebc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0185) {
    const struct CPU_State initial_cpu = {.pc=0x6a49, .a=0x75, .x=0x43, .y=0xa4, .sp=0x16, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6a49, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a4a, .a=0x75, .x=0x43, .y=0xa4, .sp=0x16, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6a49, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a49, .value=0x20, .type=IO_READ},
        {.addr=0x6a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0186) {
    const struct CPU_State initial_cpu = {.pc=0x1aad, .a=0xb9, .x=0x1d, .y=0x21, .sp=0x03, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1aad, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1aae, .a=0xb9, .x=0x1d, .y=0x21, .sp=0x03, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1aad, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1aad, .value=0x20, .type=IO_READ},
        {.addr=0x1aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0187) {
    const struct CPU_State initial_cpu = {.pc=0x50f4, .a=0xa5, .x=0xc1, .y=0xc9, .sp=0x18, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x50f4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x50f5, .a=0xa5, .x=0xc1, .y=0xc9, .sp=0x18, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x50f4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x50f4, .value=0x20, .type=IO_READ},
        {.addr=0x50f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0188) {
    const struct CPU_State initial_cpu = {.pc=0xa281, .a=0x5d, .x=0x0a, .y=0xd9, .sp=0x30, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa281, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa282, .a=0x5d, .x=0x0a, .y=0xd9, .sp=0x30, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa281, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa281, .value=0x20, .type=IO_READ},
        {.addr=0xa282, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd44a, .a=0x9d, .x=0x7a, .y=0xa8, .sp=0x70, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd44a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd44b, .a=0x9d, .x=0x7a, .y=0xa8, .sp=0x70, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd44a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd44a, .value=0x20, .type=IO_READ},
        {.addr=0xd44b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018A) {
    const struct CPU_State initial_cpu = {.pc=0x0941, .a=0x21, .x=0xc2, .y=0x14, .sp=0x15, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0941, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0942, .a=0x21, .x=0xc2, .y=0x14, .sp=0x15, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0941, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0941, .value=0x20, .type=IO_READ},
        {.addr=0x0942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018B) {
    const struct CPU_State initial_cpu = {.pc=0x1ab8, .a=0x8d, .x=0x2d, .y=0x53, .sp=0x79, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1ab9, .a=0x8d, .x=0x2d, .y=0x53, .sp=0x79, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x1ab8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1ab8, .value=0x20, .type=IO_READ},
        {.addr=0x1ab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018C) {
    const struct CPU_State initial_cpu = {.pc=0xd373, .a=0xb5, .x=0xb5, .y=0x39, .sp=0x27, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd373, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd374, .a=0xb5, .x=0xb5, .y=0x39, .sp=0x27, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd373, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd373, .value=0x20, .type=IO_READ},
        {.addr=0xd374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018D) {
    const struct CPU_State initial_cpu = {.pc=0xed30, .a=0xa3, .x=0x83, .y=0x16, .sp=0x62, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xed30, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xed31, .a=0xa3, .x=0x83, .y=0x16, .sp=0x62, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xed30, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xed30, .value=0x20, .type=IO_READ},
        {.addr=0xed31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018E) {
    const struct CPU_State initial_cpu = {.pc=0xc2f3, .a=0x92, .x=0x54, .y=0x87, .sp=0xb6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc2f4, .a=0x92, .x=0x54, .y=0x87, .sp=0xb6, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xc2f3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc2f3, .value=0x20, .type=IO_READ},
        {.addr=0xc2f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_018F) {
    const struct CPU_State initial_cpu = {.pc=0xc5a3, .a=0x8f, .x=0x09, .y=0xa2, .sp=0xb4, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc5a4, .a=0x8f, .x=0x09, .y=0xa2, .sp=0xb4, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xc5a3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc5a3, .value=0x20, .type=IO_READ},
        {.addr=0xc5a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0190) {
    const struct CPU_State initial_cpu = {.pc=0x7983, .a=0xbe, .x=0x01, .y=0xa3, .sp=0xf7, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7983, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7984, .a=0xbe, .x=0x01, .y=0xa3, .sp=0xf7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7983, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7983, .value=0x20, .type=IO_READ},
        {.addr=0x7984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0191) {
    const struct CPU_State initial_cpu = {.pc=0xcc24, .a=0x84, .x=0xb8, .y=0x3a, .sp=0x00, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcc24, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcc25, .a=0x84, .x=0xb8, .y=0x3a, .sp=0x00, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcc24, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcc24, .value=0x20, .type=IO_READ},
        {.addr=0xcc25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0192) {
    const struct CPU_State initial_cpu = {.pc=0x887a, .a=0xcc, .x=0xfe, .y=0x97, .sp=0x95, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x887a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x887b, .a=0xcc, .x=0xfe, .y=0x97, .sp=0x95, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x887a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x887a, .value=0x20, .type=IO_READ},
        {.addr=0x887b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0193) {
    const struct CPU_State initial_cpu = {.pc=0xa02a, .a=0x68, .x=0xaa, .y=0x7a, .sp=0x6c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xa02a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa02b, .a=0x68, .x=0xaa, .y=0x7a, .sp=0x6c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa02a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa02a, .value=0x20, .type=IO_READ},
        {.addr=0xa02b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2f63, .a=0xe2, .x=0x7b, .y=0x35, .sp=0x39, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2f63, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2f64, .a=0xe2, .x=0x7b, .y=0x35, .sp=0x39, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x2f63, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2f63, .value=0x20, .type=IO_READ},
        {.addr=0x2f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0195) {
    const struct CPU_State initial_cpu = {.pc=0x7c41, .a=0xb9, .x=0xef, .y=0xe7, .sp=0xa8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c41, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7c42, .a=0xb9, .x=0xef, .y=0xe7, .sp=0xa8, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x7c41, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7c41, .value=0x20, .type=IO_READ},
        {.addr=0x7c42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0196) {
    const struct CPU_State initial_cpu = {.pc=0x47bf, .a=0xbd, .x=0xc1, .y=0xac, .sp=0xcc, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x47bf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x47c0, .a=0xbd, .x=0xc1, .y=0xac, .sp=0xcc, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x47bf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x47bf, .value=0x20, .type=IO_READ},
        {.addr=0x47c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0197) {
    const struct CPU_State initial_cpu = {.pc=0x2ded, .a=0xc7, .x=0x7e, .y=0xa6, .sp=0x2e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ded, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2dee, .a=0xc7, .x=0x7e, .y=0xa6, .sp=0x2e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2ded, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ded, .value=0x20, .type=IO_READ},
        {.addr=0x2dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0198) {
    const struct CPU_State initial_cpu = {.pc=0x946e, .a=0xd4, .x=0x4e, .y=0x32, .sp=0xcd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x946e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x946f, .a=0xd4, .x=0x4e, .y=0x32, .sp=0xcd, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x946e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x946e, .value=0x20, .type=IO_READ},
        {.addr=0x946f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0199) {
    const struct CPU_State initial_cpu = {.pc=0x0ad6, .a=0x66, .x=0x9c, .y=0xde, .sp=0x00, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ad6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0ad7, .a=0x66, .x=0x9c, .y=0xde, .sp=0x00, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0ad6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0ad6, .value=0x20, .type=IO_READ},
        {.addr=0x0ad7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa981, .a=0x61, .x=0x9a, .y=0x12, .sp=0xd6, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa981, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa982, .a=0x61, .x=0x9a, .y=0x12, .sp=0xd6, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xa981, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa981, .value=0x20, .type=IO_READ},
        {.addr=0xa982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019B) {
    const struct CPU_State initial_cpu = {.pc=0xbda6, .a=0x26, .x=0xb4, .y=0x9c, .sp=0xb7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xbda6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbda7, .a=0x26, .x=0xb4, .y=0x9c, .sp=0xb7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xbda6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbda6, .value=0x20, .type=IO_READ},
        {.addr=0xbda7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019C) {
    const struct CPU_State initial_cpu = {.pc=0xc271, .a=0xf1, .x=0x4e, .y=0x0e, .sp=0x72, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc271, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc272, .a=0xf1, .x=0x4e, .y=0x0e, .sp=0x72, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc271, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc271, .value=0x20, .type=IO_READ},
        {.addr=0xc272, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8e84, .a=0xf1, .x=0x73, .y=0x77, .sp=0xb2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x8e84, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8e85, .a=0xf1, .x=0x73, .y=0x77, .sp=0xb2, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x8e84, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8e84, .value=0x20, .type=IO_READ},
        {.addr=0x8e85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc72e, .a=0x6c, .x=0xae, .y=0x25, .sp=0xfb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc72e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc72f, .a=0x6c, .x=0xae, .y=0x25, .sp=0xfb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc72e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc72e, .value=0x20, .type=IO_READ},
        {.addr=0xc72f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_019F) {
    const struct CPU_State initial_cpu = {.pc=0xe77b, .a=0xf0, .x=0xbe, .y=0xe5, .sp=0xd0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xe77b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe77c, .a=0xf0, .x=0xbe, .y=0xe5, .sp=0xd0, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xe77b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe77b, .value=0x20, .type=IO_READ},
        {.addr=0xe77c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x2a73, .a=0xfb, .x=0x4b, .y=0x4b, .sp=0xfe, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a73, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2a74, .a=0xfb, .x=0x4b, .y=0x4b, .sp=0xfe, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2a73, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2a73, .value=0x20, .type=IO_READ},
        {.addr=0x2a74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xb6c0, .a=0x0c, .x=0x8d, .y=0xe6, .sp=0xaa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb6c1, .a=0x0c, .x=0x8d, .y=0xe6, .sp=0xaa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb6c0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb6c0, .value=0x20, .type=IO_READ},
        {.addr=0xb6c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xe367, .a=0x9d, .x=0xf1, .y=0xde, .sp=0x82, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe367, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe368, .a=0x9d, .x=0xf1, .y=0xde, .sp=0x82, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe367, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe367, .value=0x20, .type=IO_READ},
        {.addr=0xe368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xde2d, .a=0x90, .x=0x0f, .y=0x6f, .sp=0x08, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xde2d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xde2e, .a=0x90, .x=0x0f, .y=0x6f, .sp=0x08, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xde2d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xde2d, .value=0x20, .type=IO_READ},
        {.addr=0xde2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xdfb8, .a=0xa6, .x=0x79, .y=0x2b, .sp=0x14, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdfb9, .a=0xa6, .x=0x79, .y=0x2b, .sp=0x14, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xdfb8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdfb8, .value=0x20, .type=IO_READ},
        {.addr=0xdfb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x7c70, .a=0x3c, .x=0x5e, .y=0x57, .sp=0x9a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7c70, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7c71, .a=0x3c, .x=0x5e, .y=0x57, .sp=0x9a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7c70, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7c70, .value=0x20, .type=IO_READ},
        {.addr=0x7c71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x718e, .a=0x3f, .x=0x12, .y=0xaf, .sp=0x5a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x718e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x718f, .a=0x3f, .x=0x12, .y=0xaf, .sp=0x5a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x718e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x718e, .value=0x20, .type=IO_READ},
        {.addr=0x718f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x1178, .a=0xd6, .x=0x5f, .y=0xc7, .sp=0xd8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1178, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1179, .a=0xd6, .x=0x5f, .y=0xc7, .sp=0xd8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1178, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1178, .value=0x20, .type=IO_READ},
        {.addr=0x1179, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xae60, .a=0x45, .x=0x48, .y=0xdb, .sp=0xae, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xae60, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae61, .a=0x45, .x=0x48, .y=0xdb, .sp=0xae, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xae60, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae60, .value=0x20, .type=IO_READ},
        {.addr=0xae61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5284, .a=0xf0, .x=0x5d, .y=0x3c, .sp=0xb5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5284, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5285, .a=0xf0, .x=0x5d, .y=0x3c, .sp=0xb5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5284, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5284, .value=0x20, .type=IO_READ},
        {.addr=0x5285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x6bbc, .a=0xab, .x=0x96, .y=0x78, .sp=0x54, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x6bbc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6bbd, .a=0xab, .x=0x96, .y=0x78, .sp=0x54, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6bbc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6bbc, .value=0x20, .type=IO_READ},
        {.addr=0x6bbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x8f38, .a=0xe2, .x=0xfd, .y=0x5a, .sp=0xa6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8f38, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8f39, .a=0xe2, .x=0xfd, .y=0x5a, .sp=0xa6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8f38, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8f38, .value=0x20, .type=IO_READ},
        {.addr=0x8f39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x2172, .a=0x16, .x=0x14, .y=0x56, .sp=0xd3, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x2172, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2173, .a=0x16, .x=0x14, .y=0x56, .sp=0xd3, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x2172, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2172, .value=0x20, .type=IO_READ},
        {.addr=0x2173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xe011, .a=0xdc, .x=0x78, .y=0x40, .sp=0xb0, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe011, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe012, .a=0xdc, .x=0x78, .y=0x40, .sp=0xb0, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xe011, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe011, .value=0x20, .type=IO_READ},
        {.addr=0xe012, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xf88d, .a=0x8a, .x=0xe7, .y=0xe9, .sp=0xaf, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf88d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf88e, .a=0x8a, .x=0xe7, .y=0xe9, .sp=0xaf, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xf88d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf88d, .value=0x20, .type=IO_READ},
        {.addr=0xf88e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x7e71, .a=0xeb, .x=0x27, .y=0x75, .sp=0x84, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7e71, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7e72, .a=0xeb, .x=0x27, .y=0x75, .sp=0x84, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x7e71, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7e71, .value=0x20, .type=IO_READ},
        {.addr=0x7e72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0868, .a=0x12, .x=0xbc, .y=0x01, .sp=0x66, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0868, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0869, .a=0x12, .x=0xbc, .y=0x01, .sp=0x66, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0868, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0868, .value=0x20, .type=IO_READ},
        {.addr=0x0869, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x8ccd, .a=0x99, .x=0x5c, .y=0xd2, .sp=0x4c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8ccd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8cce, .a=0x99, .x=0x5c, .y=0xd2, .sp=0x4c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8ccd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8ccd, .value=0x20, .type=IO_READ},
        {.addr=0x8cce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xda11, .a=0xd6, .x=0x02, .y=0x5a, .sp=0xdc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xda11, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xda12, .a=0xd6, .x=0x02, .y=0x5a, .sp=0xdc, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xda11, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xda11, .value=0x20, .type=IO_READ},
        {.addr=0xda12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xc70b, .a=0x84, .x=0xa6, .y=0x37, .sp=0x61, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc70b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc70c, .a=0x84, .x=0xa6, .y=0x37, .sp=0x61, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc70b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc70b, .value=0x20, .type=IO_READ},
        {.addr=0xc70c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x355e, .a=0x52, .x=0x9d, .y=0x5f, .sp=0x15, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x355e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x355f, .a=0x52, .x=0x9d, .y=0x5f, .sp=0x15, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x355e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x355e, .value=0x20, .type=IO_READ},
        {.addr=0x355f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x3664, .a=0x48, .x=0x32, .y=0x4e, .sp=0xa2, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x3664, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3665, .a=0x48, .x=0x32, .y=0x4e, .sp=0xa2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3664, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3664, .value=0x20, .type=IO_READ},
        {.addr=0x3665, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x5beb, .a=0xd6, .x=0xc3, .y=0x92, .sp=0xed, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5beb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5bec, .a=0xd6, .x=0xc3, .y=0x92, .sp=0xed, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5beb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5beb, .value=0x20, .type=IO_READ},
        {.addr=0x5bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x5c2c, .a=0x85, .x=0xf8, .y=0xb5, .sp=0x8a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5c2c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5c2d, .a=0x85, .x=0xf8, .y=0xb5, .sp=0x8a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5c2c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5c2c, .value=0x20, .type=IO_READ},
        {.addr=0x5c2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x2d21, .a=0xb4, .x=0x6e, .y=0x9a, .sp=0x22, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2d21, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2d22, .a=0xb4, .x=0x6e, .y=0x9a, .sp=0x22, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2d21, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2d21, .value=0x20, .type=IO_READ},
        {.addr=0x2d22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xdf0d, .a=0xf2, .x=0x0d, .y=0xc0, .sp=0x98, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xdf0d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdf0e, .a=0xf2, .x=0x0d, .y=0xc0, .sp=0x98, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xdf0d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdf0d, .value=0x20, .type=IO_READ},
        {.addr=0xdf0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x2d75, .a=0xf6, .x=0xa3, .y=0x18, .sp=0x55, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2d75, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2d76, .a=0xf6, .x=0xa3, .y=0x18, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2d75, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2d75, .value=0x20, .type=IO_READ},
        {.addr=0x2d76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xd103, .a=0x7e, .x=0x8e, .y=0x9f, .sp=0x84, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd103, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd104, .a=0x7e, .x=0x8e, .y=0x9f, .sp=0x84, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd103, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd103, .value=0x20, .type=IO_READ},
        {.addr=0xd104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xd5f8, .a=0x07, .x=0x12, .y=0xbc, .sp=0x51, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd5f9, .a=0x07, .x=0x12, .y=0xbc, .sp=0x51, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd5f8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd5f8, .value=0x20, .type=IO_READ},
        {.addr=0xd5f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xd1ce, .a=0x22, .x=0x20, .y=0xe9, .sp=0x88, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd1ce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd1cf, .a=0x22, .x=0x20, .y=0xe9, .sp=0x88, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd1ce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd1ce, .value=0x20, .type=IO_READ},
        {.addr=0xd1cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x1406, .a=0x0e, .x=0xad, .y=0x09, .sp=0x72, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x1406, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1407, .a=0x0e, .x=0xad, .y=0x09, .sp=0x72, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1406, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1406, .value=0x20, .type=IO_READ},
        {.addr=0x1407, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x4909, .a=0xed, .x=0x6b, .y=0x1d, .sp=0xb1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4909, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x490a, .a=0xed, .x=0x6b, .y=0x1d, .sp=0xb1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4909, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4909, .value=0x20, .type=IO_READ},
        {.addr=0x490a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xbc8a, .a=0x1f, .x=0x7f, .y=0x38, .sp=0x4d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc8a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbc8b, .a=0x1f, .x=0x7f, .y=0x38, .sp=0x4d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbc8a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbc8a, .value=0x20, .type=IO_READ},
        {.addr=0xbc8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x6442, .a=0xc8, .x=0x81, .y=0x6f, .sp=0x7e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6442, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6443, .a=0xc8, .x=0x81, .y=0x6f, .sp=0x7e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6442, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6442, .value=0x20, .type=IO_READ},
        {.addr=0x6443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x5554, .a=0x99, .x=0xc4, .y=0x5a, .sp=0xc6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5554, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5555, .a=0x99, .x=0xc4, .y=0x5a, .sp=0xc6, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x5554, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5554, .value=0x20, .type=IO_READ},
        {.addr=0x5555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x1107, .a=0x72, .x=0x42, .y=0xa3, .sp=0xee, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1107, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1108, .a=0x72, .x=0x42, .y=0xa3, .sp=0xee, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x1107, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1107, .value=0x20, .type=IO_READ},
        {.addr=0x1108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xb639, .a=0xfd, .x=0x83, .y=0x7e, .sp=0x72, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xb639, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb63a, .a=0xfd, .x=0x83, .y=0x7e, .sp=0x72, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xb639, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb639, .value=0x20, .type=IO_READ},
        {.addr=0xb63a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xa3c3, .a=0x93, .x=0x96, .y=0x35, .sp=0x39, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa3c4, .a=0x93, .x=0x96, .y=0x35, .sp=0x39, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa3c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa3c3, .value=0x20, .type=IO_READ},
        {.addr=0xa3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xfbe8, .a=0xba, .x=0x68, .y=0xb3, .sp=0x7d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfbe9, .a=0xba, .x=0x68, .y=0xb3, .sp=0x7d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xfbe8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfbe8, .value=0x20, .type=IO_READ},
        {.addr=0xfbe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x5ebf, .a=0xc2, .x=0xe4, .y=0xd5, .sp=0x9d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5ec0, .a=0xc2, .x=0xe4, .y=0xd5, .sp=0x9d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5ebf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5ebf, .value=0x20, .type=IO_READ},
        {.addr=0x5ec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xa3c0, .a=0x6a, .x=0x8e, .y=0x2a, .sp=0x9d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa3c1, .a=0x6a, .x=0x8e, .y=0x2a, .sp=0x9d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xa3c0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa3c0, .value=0x20, .type=IO_READ},
        {.addr=0xa3c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x7999, .a=0x4c, .x=0x42, .y=0x7e, .sp=0x2b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7999, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x799a, .a=0x4c, .x=0x42, .y=0x7e, .sp=0x2b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x7999, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7999, .value=0x20, .type=IO_READ},
        {.addr=0x799a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x74e7, .a=0x99, .x=0x37, .y=0xd9, .sp=0xf9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x74e7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x74e8, .a=0x99, .x=0x37, .y=0xd9, .sp=0xf9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x74e7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x74e7, .value=0x20, .type=IO_READ},
        {.addr=0x74e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xf07c, .a=0xfc, .x=0xb1, .y=0xdd, .sp=0x49, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf07c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf07d, .a=0xfc, .x=0xb1, .y=0xdd, .sp=0x49, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xf07c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf07c, .value=0x20, .type=IO_READ},
        {.addr=0xf07d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x6638, .a=0xe3, .x=0x23, .y=0x71, .sp=0xb0, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6638, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6639, .a=0xe3, .x=0x23, .y=0x71, .sp=0xb0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6638, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6638, .value=0x20, .type=IO_READ},
        {.addr=0x6639, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x01eb, .a=0xb3, .x=0xe5, .y=0x13, .sp=0xd2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x01ec, .a=0xb3, .x=0xe5, .y=0x13, .sp=0xd2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x01eb, .value=0x20, .type=IO_READ},
        {.addr=0x01ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x518a, .a=0x92, .x=0x23, .y=0x47, .sp=0x17, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x518a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x518b, .a=0x92, .x=0x23, .y=0x47, .sp=0x17, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x518a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x518a, .value=0x20, .type=IO_READ},
        {.addr=0x518b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x1ecb, .a=0x4e, .x=0x6e, .y=0x86, .sp=0x73, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1ecb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1ecc, .a=0x4e, .x=0x6e, .y=0x86, .sp=0x73, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1ecb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1ecb, .value=0x20, .type=IO_READ},
        {.addr=0x1ecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xe0fe, .a=0xf8, .x=0x9d, .y=0x3b, .sp=0xd3, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fe, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe0ff, .a=0xf8, .x=0x9d, .y=0x3b, .sp=0xd3, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe0fe, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe0fe, .value=0x20, .type=IO_READ},
        {.addr=0xe0ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x651a, .a=0xd2, .x=0xfc, .y=0x06, .sp=0x30, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x651a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x651b, .a=0xd2, .x=0xfc, .y=0x06, .sp=0x30, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x651a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x651a, .value=0x20, .type=IO_READ},
        {.addr=0x651b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x9df9, .a=0xd2, .x=0x3f, .y=0xd8, .sp=0x70, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9df9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9dfa, .a=0xd2, .x=0x3f, .y=0xd8, .sp=0x70, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x9df9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9df9, .value=0x20, .type=IO_READ},
        {.addr=0x9dfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xaa25, .a=0xca, .x=0x42, .y=0xf2, .sp=0xac, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xaa25, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaa26, .a=0xca, .x=0x42, .y=0xf2, .sp=0xac, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xaa25, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaa25, .value=0x20, .type=IO_READ},
        {.addr=0xaa26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xbcc4, .a=0x4b, .x=0x3b, .y=0x35, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbcc4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbcc5, .a=0x4b, .x=0x3b, .y=0x35, .sp=0xe6, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xbcc4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbcc4, .value=0x20, .type=IO_READ},
        {.addr=0xbcc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x75c4, .a=0xaa, .x=0xe4, .y=0xac, .sp=0x32, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x75c4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x75c5, .a=0xaa, .x=0xe4, .y=0xac, .sp=0x32, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x75c4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x75c4, .value=0x20, .type=IO_READ},
        {.addr=0x75c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x5e17, .a=0x01, .x=0x26, .y=0xd6, .sp=0x2b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5e17, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e18, .a=0x01, .x=0x26, .y=0xd6, .sp=0x2b, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x5e17, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e17, .value=0x20, .type=IO_READ},
        {.addr=0x5e18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x3b3c, .a=0x96, .x=0xdc, .y=0x3c, .sp=0xe8, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3b3c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3b3d, .a=0x96, .x=0xdc, .y=0x3c, .sp=0xe8, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x3b3c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3b3c, .value=0x20, .type=IO_READ},
        {.addr=0x3b3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xa504, .a=0x3d, .x=0x25, .y=0xb9, .sp=0xbc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa504, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa505, .a=0x3d, .x=0x25, .y=0xb9, .sp=0xbc, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xa504, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa504, .value=0x20, .type=IO_READ},
        {.addr=0xa505, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3f15, .a=0xc3, .x=0x78, .y=0xbc, .sp=0xd1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3f15, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3f16, .a=0xc3, .x=0x78, .y=0xbc, .sp=0xd1, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x3f15, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3f15, .value=0x20, .type=IO_READ},
        {.addr=0x3f16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xf800, .a=0x51, .x=0x73, .y=0x17, .sp=0x57, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf800, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf801, .a=0x51, .x=0x73, .y=0x17, .sp=0x57, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf800, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf800, .value=0x20, .type=IO_READ},
        {.addr=0xf801, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x78d1, .a=0xab, .x=0xc1, .y=0xe5, .sp=0x8c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x78d1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x78d2, .a=0xab, .x=0xc1, .y=0xe5, .sp=0x8c, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x78d1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x78d1, .value=0x20, .type=IO_READ},
        {.addr=0x78d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x510e, .a=0x96, .x=0x0c, .y=0x00, .sp=0x93, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x510e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x510f, .a=0x96, .x=0x0c, .y=0x00, .sp=0x93, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x510e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x510e, .value=0x20, .type=IO_READ},
        {.addr=0x510f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xd728, .a=0xa6, .x=0x1e, .y=0x6f, .sp=0x79, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd728, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd729, .a=0xa6, .x=0x1e, .y=0x6f, .sp=0x79, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd728, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd728, .value=0x20, .type=IO_READ},
        {.addr=0xd729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x3546, .a=0x09, .x=0xbb, .y=0xb4, .sp=0x43, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3546, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3547, .a=0x09, .x=0xbb, .y=0xb4, .sp=0x43, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3546, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3546, .value=0x20, .type=IO_READ},
        {.addr=0x3547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x22e4, .a=0x2d, .x=0x79, .y=0x3c, .sp=0xe2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x22e4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x22e5, .a=0x2d, .x=0x79, .y=0x3c, .sp=0xe2, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x22e4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x22e4, .value=0x20, .type=IO_READ},
        {.addr=0x22e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xb071, .a=0xbd, .x=0xf2, .y=0x70, .sp=0xaf, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb071, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb072, .a=0xbd, .x=0xf2, .y=0x70, .sp=0xaf, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xb071, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb071, .value=0x20, .type=IO_READ},
        {.addr=0xb072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x931d, .a=0x89, .x=0x95, .y=0x7a, .sp=0x9f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x931d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x931e, .a=0x89, .x=0x95, .y=0x7a, .sp=0x9f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x931d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x931d, .value=0x20, .type=IO_READ},
        {.addr=0x931e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xafb8, .a=0x81, .x=0xc1, .y=0x89, .sp=0x4d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xafb8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xafb9, .a=0x81, .x=0xc1, .y=0x89, .sp=0x4d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xafb8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xafb8, .value=0x20, .type=IO_READ},
        {.addr=0xafb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x1a80, .a=0xcf, .x=0x2e, .y=0xf2, .sp=0x98, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1a80, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1a81, .a=0xcf, .x=0x2e, .y=0xf2, .sp=0x98, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1a80, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1a80, .value=0x20, .type=IO_READ},
        {.addr=0x1a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xe773, .a=0x39, .x=0x6e, .y=0x3e, .sp=0xbb, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe773, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe774, .a=0x39, .x=0x6e, .y=0x3e, .sp=0xbb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe773, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe773, .value=0x20, .type=IO_READ},
        {.addr=0xe774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xa46e, .a=0x45, .x=0x50, .y=0xcd, .sp=0x3e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa46e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa46f, .a=0x45, .x=0x50, .y=0xcd, .sp=0x3e, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xa46e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa46e, .value=0x20, .type=IO_READ},
        {.addr=0xa46f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xf514, .a=0x36, .x=0x17, .y=0x50, .sp=0x68, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf514, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf515, .a=0x36, .x=0x17, .y=0x50, .sp=0x68, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf514, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf514, .value=0x20, .type=IO_READ},
        {.addr=0xf515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x12e3, .a=0x93, .x=0x7e, .y=0xed, .sp=0x13, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x12e3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x12e4, .a=0x93, .x=0x7e, .y=0xed, .sp=0x13, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x12e3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x12e3, .value=0x20, .type=IO_READ},
        {.addr=0x12e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x6411, .a=0x46, .x=0xd3, .y=0x3b, .sp=0x16, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x6411, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6412, .a=0x46, .x=0xd3, .y=0x3b, .sp=0x16, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x6411, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6411, .value=0x20, .type=IO_READ},
        {.addr=0x6412, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xb57f, .a=0x66, .x=0x4d, .y=0xd8, .sp=0xe8, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb57f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb580, .a=0x66, .x=0x4d, .y=0xd8, .sp=0xe8, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xb57f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb57f, .value=0x20, .type=IO_READ},
        {.addr=0xb580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xb5e6, .a=0x7c, .x=0x26, .y=0xcd, .sp=0xc3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb5e7, .a=0x7c, .x=0x26, .y=0xcd, .sp=0xc3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb5e6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb5e6, .value=0x20, .type=IO_READ},
        {.addr=0xb5e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x61ba, .a=0xb0, .x=0x72, .y=0x0f, .sp=0x22, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x61ba, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x61bb, .a=0xb0, .x=0x72, .y=0x0f, .sp=0x22, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x61ba, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x61ba, .value=0x20, .type=IO_READ},
        {.addr=0x61bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xb324, .a=0xd6, .x=0x1a, .y=0xde, .sp=0xa2, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb324, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb325, .a=0xd6, .x=0x1a, .y=0xde, .sp=0xa2, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xb324, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb324, .value=0x20, .type=IO_READ},
        {.addr=0xb325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4fb5, .a=0x84, .x=0x47, .y=0xc1, .sp=0x9d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4fb6, .a=0x84, .x=0x47, .y=0xc1, .sp=0x9d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4fb5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4fb5, .value=0x20, .type=IO_READ},
        {.addr=0x4fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xf250, .a=0x14, .x=0xa7, .y=0xbf, .sp=0x2c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xf250, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf251, .a=0x14, .x=0xa7, .y=0xbf, .sp=0x2c, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xf250, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf250, .value=0x20, .type=IO_READ},
        {.addr=0xf251, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe284, .a=0xa3, .x=0x4f, .y=0xb0, .sp=0xe3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe284, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe285, .a=0xa3, .x=0x4f, .y=0xb0, .sp=0xe3, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xe284, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe284, .value=0x20, .type=IO_READ},
        {.addr=0xe285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x6406, .a=0xd3, .x=0xd1, .y=0xc2, .sp=0x6d, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6406, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6407, .a=0xd3, .x=0xd1, .y=0xc2, .sp=0x6d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x6406, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6406, .value=0x20, .type=IO_READ},
        {.addr=0x6407, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe3d0, .a=0xcd, .x=0x4d, .y=0x95, .sp=0x75, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe3d0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe3d1, .a=0xcd, .x=0x4d, .y=0x95, .sp=0x75, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xe3d0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe3d0, .value=0x20, .type=IO_READ},
        {.addr=0xe3d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x38d6, .a=0x4f, .x=0xd4, .y=0x63, .sp=0x3c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x38d6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x38d7, .a=0x4f, .x=0xd4, .y=0x63, .sp=0x3c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x38d6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x38d6, .value=0x20, .type=IO_READ},
        {.addr=0x38d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc350, .a=0x65, .x=0x84, .y=0x6a, .sp=0x6c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc350, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc351, .a=0x65, .x=0x84, .y=0x6a, .sp=0x6c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc350, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc350, .value=0x20, .type=IO_READ},
        {.addr=0xc351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xd752, .a=0xfc, .x=0x86, .y=0x5a, .sp=0x8a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd752, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd753, .a=0xfc, .x=0x86, .y=0x5a, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd752, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd752, .value=0x20, .type=IO_READ},
        {.addr=0xd753, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x76bf, .a=0xc8, .x=0x68, .y=0x27, .sp=0x3c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x76bf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x76c0, .a=0xc8, .x=0x68, .y=0x27, .sp=0x3c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x76bf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x76bf, .value=0x20, .type=IO_READ},
        {.addr=0x76c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x4671, .a=0xec, .x=0x35, .y=0x56, .sp=0x3c, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4671, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4672, .a=0xec, .x=0x35, .y=0x56, .sp=0x3c, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x4671, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4671, .value=0x20, .type=IO_READ},
        {.addr=0x4672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x1413, .a=0x6c, .x=0xad, .y=0x1c, .sp=0x74, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1413, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1414, .a=0x6c, .x=0xad, .y=0x1c, .sp=0x74, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1413, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1413, .value=0x20, .type=IO_READ},
        {.addr=0x1414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x78e6, .a=0x84, .x=0xaa, .y=0x4c, .sp=0x78, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x78e6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x78e7, .a=0x84, .x=0xaa, .y=0x4c, .sp=0x78, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x78e6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x78e6, .value=0x20, .type=IO_READ},
        {.addr=0x78e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x4fce, .a=0x51, .x=0xc5, .y=0x16, .sp=0xa8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4fce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4fcf, .a=0x51, .x=0xc5, .y=0x16, .sp=0xa8, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x4fce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4fce, .value=0x20, .type=IO_READ},
        {.addr=0x4fcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xb7fe, .a=0x35, .x=0x0a, .y=0xf4, .sp=0xae, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fe, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb7ff, .a=0x35, .x=0x0a, .y=0xf4, .sp=0xae, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xb7fe, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb7fe, .value=0x20, .type=IO_READ},
        {.addr=0xb7ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x2188, .a=0x7f, .x=0x6c, .y=0xad, .sp=0xcd, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2188, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2189, .a=0x7f, .x=0x6c, .y=0xad, .sp=0xcd, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2188, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2188, .value=0x20, .type=IO_READ},
        {.addr=0x2189, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xa4dc, .a=0xdf, .x=0x6b, .y=0x10, .sp=0x73, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa4dc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4dd, .a=0xdf, .x=0x6b, .y=0x10, .sp=0x73, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa4dc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4dc, .value=0x20, .type=IO_READ},
        {.addr=0xa4dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x97e3, .a=0x08, .x=0xbe, .y=0x56, .sp=0x1f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x97e3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x97e4, .a=0x08, .x=0xbe, .y=0x56, .sp=0x1f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x97e3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x97e3, .value=0x20, .type=IO_READ},
        {.addr=0x97e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x15d0, .a=0xff, .x=0xb6, .y=0x49, .sp=0x21, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x15d0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x15d1, .a=0xff, .x=0xb6, .y=0x49, .sp=0x21, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x15d0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x15d0, .value=0x20, .type=IO_READ},
        {.addr=0x15d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xc99d, .a=0xd4, .x=0xe8, .y=0x27, .sp=0x54, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc99d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc99e, .a=0xd4, .x=0xe8, .y=0x27, .sp=0x54, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xc99d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc99d, .value=0x20, .type=IO_READ},
        {.addr=0xc99e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0200) {
    const struct CPU_State initial_cpu = {.pc=0x12a6, .a=0xbc, .x=0x6d, .y=0x06, .sp=0xb1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x12a6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x12a7, .a=0xbc, .x=0x6d, .y=0x06, .sp=0xb1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x12a6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x12a6, .value=0x20, .type=IO_READ},
        {.addr=0x12a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0201) {
    const struct CPU_State initial_cpu = {.pc=0xa597, .a=0x8a, .x=0x6e, .y=0x92, .sp=0x20, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa597, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa598, .a=0x8a, .x=0x6e, .y=0x92, .sp=0x20, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa597, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa597, .value=0x20, .type=IO_READ},
        {.addr=0xa598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0202) {
    const struct CPU_State initial_cpu = {.pc=0x5ef0, .a=0xe8, .x=0x3f, .y=0xc2, .sp=0xb2, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5ef0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5ef1, .a=0xe8, .x=0x3f, .y=0xc2, .sp=0xb2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5ef0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5ef0, .value=0x20, .type=IO_READ},
        {.addr=0x5ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0203) {
    const struct CPU_State initial_cpu = {.pc=0xb6f5, .a=0x79, .x=0x66, .y=0xa2, .sp=0x94, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb6f5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb6f6, .a=0x79, .x=0x66, .y=0xa2, .sp=0x94, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xb6f5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb6f5, .value=0x20, .type=IO_READ},
        {.addr=0xb6f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0204) {
    const struct CPU_State initial_cpu = {.pc=0x3852, .a=0xc8, .x=0x57, .y=0x5c, .sp=0x3c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3852, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3853, .a=0xc8, .x=0x57, .y=0x5c, .sp=0x3c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3852, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3852, .value=0x20, .type=IO_READ},
        {.addr=0x3853, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0205) {
    const struct CPU_State initial_cpu = {.pc=0xa6ae, .a=0x9d, .x=0x97, .y=0x3e, .sp=0xd9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ae, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa6af, .a=0x9d, .x=0x97, .y=0x3e, .sp=0xd9, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xa6ae, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa6ae, .value=0x20, .type=IO_READ},
        {.addr=0xa6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0206) {
    const struct CPU_State initial_cpu = {.pc=0xee73, .a=0x22, .x=0x7a, .y=0x54, .sp=0x3b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xee73, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee74, .a=0x22, .x=0x7a, .y=0x54, .sp=0x3b, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xee73, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee73, .value=0x20, .type=IO_READ},
        {.addr=0xee74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9faf, .a=0x1e, .x=0x27, .y=0x42, .sp=0x49, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9faf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9fb0, .a=0x1e, .x=0x27, .y=0x42, .sp=0x49, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9faf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9faf, .value=0x20, .type=IO_READ},
        {.addr=0x9fb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0208) {
    const struct CPU_State initial_cpu = {.pc=0x9793, .a=0x93, .x=0x8c, .y=0x15, .sp=0xc8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9793, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9794, .a=0x93, .x=0x8c, .y=0x15, .sp=0xc8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9793, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9793, .value=0x20, .type=IO_READ},
        {.addr=0x9794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0209) {
    const struct CPU_State initial_cpu = {.pc=0x439d, .a=0xb8, .x=0x1d, .y=0xbe, .sp=0xf0, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x439d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x439e, .a=0xb8, .x=0x1d, .y=0xbe, .sp=0xf0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x439d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x439d, .value=0x20, .type=IO_READ},
        {.addr=0x439e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb381, .a=0x74, .x=0xd6, .y=0xce, .sp=0x34, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xb381, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb382, .a=0x74, .x=0xd6, .y=0xce, .sp=0x34, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xb381, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb381, .value=0x20, .type=IO_READ},
        {.addr=0xb382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020B) {
    const struct CPU_State initial_cpu = {.pc=0x9126, .a=0xa9, .x=0x4c, .y=0xea, .sp=0xcd, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9126, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9127, .a=0xa9, .x=0x4c, .y=0xea, .sp=0xcd, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9126, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9126, .value=0x20, .type=IO_READ},
        {.addr=0x9127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020C) {
    const struct CPU_State initial_cpu = {.pc=0x182d, .a=0x70, .x=0xba, .y=0x47, .sp=0x69, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x182d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x182e, .a=0x70, .x=0xba, .y=0x47, .sp=0x69, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x182d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x182d, .value=0x20, .type=IO_READ},
        {.addr=0x182e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020D) {
    const struct CPU_State initial_cpu = {.pc=0xc3c2, .a=0x2b, .x=0xfa, .y=0x43, .sp=0x73, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0x2b, .x=0xfa, .y=0x43, .sp=0x73, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xc3c2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc3c2, .value=0x20, .type=IO_READ},
        {.addr=0xc3c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020E) {
    const struct CPU_State initial_cpu = {.pc=0x833b, .a=0x95, .x=0xb6, .y=0x1b, .sp=0x03, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x833b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x833c, .a=0x95, .x=0xb6, .y=0x1b, .sp=0x03, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x833b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x833b, .value=0x20, .type=IO_READ},
        {.addr=0x833c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb6ed, .a=0xe5, .x=0xb6, .y=0x66, .sp=0xa6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ed, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb6ee, .a=0xe5, .x=0xb6, .y=0x66, .sp=0xa6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xb6ed, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb6ed, .value=0x20, .type=IO_READ},
        {.addr=0xb6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0210) {
    const struct CPU_State initial_cpu = {.pc=0xd798, .a=0x1d, .x=0xd5, .y=0xb1, .sp=0x54, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd798, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd799, .a=0x1d, .x=0xd5, .y=0xb1, .sp=0x54, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xd798, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd798, .value=0x20, .type=IO_READ},
        {.addr=0xd799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0211) {
    const struct CPU_State initial_cpu = {.pc=0x7c27, .a=0x50, .x=0x3c, .y=0x4c, .sp=0x65, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7c27, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7c28, .a=0x50, .x=0x3c, .y=0x4c, .sp=0x65, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7c27, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7c27, .value=0x20, .type=IO_READ},
        {.addr=0x7c28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0212) {
    const struct CPU_State initial_cpu = {.pc=0x5114, .a=0x3e, .x=0x45, .y=0xd5, .sp=0xa1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5114, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5115, .a=0x3e, .x=0x45, .y=0xd5, .sp=0xa1, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x5114, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5114, .value=0x20, .type=IO_READ},
        {.addr=0x5115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0213) {
    const struct CPU_State initial_cpu = {.pc=0xdbc5, .a=0x18, .x=0x97, .y=0x11, .sp=0x79, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdbc6, .a=0x18, .x=0x97, .y=0x11, .sp=0x79, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xdbc5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdbc5, .value=0x20, .type=IO_READ},
        {.addr=0xdbc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0214) {
    const struct CPU_State initial_cpu = {.pc=0x5c83, .a=0xbe, .x=0x42, .y=0x2a, .sp=0xe3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5c83, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5c84, .a=0xbe, .x=0x42, .y=0x2a, .sp=0xe3, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x5c83, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5c83, .value=0x20, .type=IO_READ},
        {.addr=0x5c84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0215) {
    const struct CPU_State initial_cpu = {.pc=0xec68, .a=0x1c, .x=0xcf, .y=0x8a, .sp=0x9f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xec68, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xec69, .a=0x1c, .x=0xcf, .y=0x8a, .sp=0x9f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xec68, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xec68, .value=0x20, .type=IO_READ},
        {.addr=0xec69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0216) {
    const struct CPU_State initial_cpu = {.pc=0x387b, .a=0x4f, .x=0xaf, .y=0xd0, .sp=0x90, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x387b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x387c, .a=0x4f, .x=0xaf, .y=0xd0, .sp=0x90, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x387b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x387b, .value=0x20, .type=IO_READ},
        {.addr=0x387c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0217) {
    const struct CPU_State initial_cpu = {.pc=0x99cf, .a=0x90, .x=0x94, .y=0xf8, .sp=0xb0, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x99cf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x99d0, .a=0x90, .x=0x94, .y=0xf8, .sp=0xb0, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x99cf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x99cf, .value=0x20, .type=IO_READ},
        {.addr=0x99d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0218) {
    const struct CPU_State initial_cpu = {.pc=0xaeb9, .a=0x35, .x=0x9d, .y=0x9a, .sp=0xdf, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaeba, .a=0x35, .x=0x9d, .y=0x9a, .sp=0xdf, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xaeb9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaeb9, .value=0x20, .type=IO_READ},
        {.addr=0xaeba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0219) {
    const struct CPU_State initial_cpu = {.pc=0x454e, .a=0x83, .x=0x59, .y=0xe3, .sp=0x2f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x454e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x454f, .a=0x83, .x=0x59, .y=0xe3, .sp=0x2f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x454e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x454e, .value=0x20, .type=IO_READ},
        {.addr=0x454f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021A) {
    const struct CPU_State initial_cpu = {.pc=0xbdde, .a=0x07, .x=0x39, .y=0x51, .sp=0x4d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbdde, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbddf, .a=0x07, .x=0x39, .y=0x51, .sp=0x4d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbdde, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbdde, .value=0x20, .type=IO_READ},
        {.addr=0xbddf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021B) {
    const struct CPU_State initial_cpu = {.pc=0x1399, .a=0xa6, .x=0x09, .y=0xe8, .sp=0xa6, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1399, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x139a, .a=0xa6, .x=0x09, .y=0xe8, .sp=0xa6, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x1399, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1399, .value=0x20, .type=IO_READ},
        {.addr=0x139a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021C) {
    const struct CPU_State initial_cpu = {.pc=0xaf00, .a=0xd1, .x=0x4e, .y=0x1e, .sp=0x42, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xaf00, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaf01, .a=0xd1, .x=0x4e, .y=0x1e, .sp=0x42, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xaf00, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaf00, .value=0x20, .type=IO_READ},
        {.addr=0xaf01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021D) {
    const struct CPU_State initial_cpu = {.pc=0x8b13, .a=0x62, .x=0xb7, .y=0x66, .sp=0x76, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8b13, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8b14, .a=0x62, .x=0xb7, .y=0x66, .sp=0x76, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8b13, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8b13, .value=0x20, .type=IO_READ},
        {.addr=0x8b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021E) {
    const struct CPU_State initial_cpu = {.pc=0x3ddf, .a=0x2d, .x=0x23, .y=0x29, .sp=0x16, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3ddf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3de0, .a=0x2d, .x=0x23, .y=0x29, .sp=0x16, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x3ddf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3ddf, .value=0x20, .type=IO_READ},
        {.addr=0x3de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_021F) {
    const struct CPU_State initial_cpu = {.pc=0x6ec6, .a=0xc4, .x=0x50, .y=0x41, .sp=0x28, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6ec7, .a=0xc4, .x=0x50, .y=0x41, .sp=0x28, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x6ec6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6ec6, .value=0x20, .type=IO_READ},
        {.addr=0x6ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9d66, .a=0x54, .x=0x29, .y=0x18, .sp=0x25, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9d66, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9d67, .a=0x54, .x=0x29, .y=0x18, .sp=0x25, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x9d66, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9d66, .value=0x20, .type=IO_READ},
        {.addr=0x9d67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0221) {
    const struct CPU_State initial_cpu = {.pc=0x19b9, .a=0x5d, .x=0x2b, .y=0x9d, .sp=0xbe, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x19b9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x19ba, .a=0x5d, .x=0x2b, .y=0x9d, .sp=0xbe, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x19b9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x19b9, .value=0x20, .type=IO_READ},
        {.addr=0x19ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0222) {
    const struct CPU_State initial_cpu = {.pc=0xba28, .a=0x11, .x=0x04, .y=0x9a, .sp=0x86, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xba28, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xba29, .a=0x11, .x=0x04, .y=0x9a, .sp=0x86, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xba28, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xba28, .value=0x20, .type=IO_READ},
        {.addr=0xba29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0223) {
    const struct CPU_State initial_cpu = {.pc=0x5710, .a=0xb5, .x=0x08, .y=0x86, .sp=0x9b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x5710, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5711, .a=0xb5, .x=0x08, .y=0x86, .sp=0x9b, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x5710, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5710, .value=0x20, .type=IO_READ},
        {.addr=0x5711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0224) {
    const struct CPU_State initial_cpu = {.pc=0x0c8e, .a=0x24, .x=0xe8, .y=0xaa, .sp=0x0a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0c8e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0c8f, .a=0x24, .x=0xe8, .y=0xaa, .sp=0x0a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0c8e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0c8e, .value=0x20, .type=IO_READ},
        {.addr=0x0c8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0225) {
    const struct CPU_State initial_cpu = {.pc=0x2cf3, .a=0x94, .x=0x86, .y=0x93, .sp=0xdb, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2cf4, .a=0x94, .x=0x86, .y=0x93, .sp=0xdb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2cf3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2cf3, .value=0x20, .type=IO_READ},
        {.addr=0x2cf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0226) {
    const struct CPU_State initial_cpu = {.pc=0x49d6, .a=0x43, .x=0xc5, .y=0x7e, .sp=0x92, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x49d6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x49d7, .a=0x43, .x=0xc5, .y=0x7e, .sp=0x92, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x49d6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x49d6, .value=0x20, .type=IO_READ},
        {.addr=0x49d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0227) {
    const struct CPU_State initial_cpu = {.pc=0xd257, .a=0x12, .x=0xf4, .y=0x53, .sp=0xe7, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xd257, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd258, .a=0x12, .x=0xf4, .y=0x53, .sp=0xe7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xd257, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd257, .value=0x20, .type=IO_READ},
        {.addr=0xd258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0228) {
    const struct CPU_State initial_cpu = {.pc=0x6c6f, .a=0xe1, .x=0x21, .y=0xe1, .sp=0x51, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6c6f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6c70, .a=0xe1, .x=0x21, .y=0xe1, .sp=0x51, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6c6f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6c6f, .value=0x20, .type=IO_READ},
        {.addr=0x6c70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4d91, .a=0x8a, .x=0x99, .y=0x4d, .sp=0xe7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4d91, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4d92, .a=0x8a, .x=0x99, .y=0x4d, .sp=0xe7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x4d91, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4d91, .value=0x20, .type=IO_READ},
        {.addr=0x4d92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022A) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0x74, .x=0xe3, .y=0x85, .sp=0x15, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9357, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9358, .a=0x74, .x=0xe3, .y=0x85, .sp=0x15, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9357, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0x20, .type=IO_READ},
        {.addr=0x9358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022B) {
    const struct CPU_State initial_cpu = {.pc=0x336d, .a=0xea, .x=0xcd, .y=0xe6, .sp=0x96, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x336d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x336e, .a=0xea, .x=0xcd, .y=0xe6, .sp=0x96, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x336d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x336d, .value=0x20, .type=IO_READ},
        {.addr=0x336e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022C) {
    const struct CPU_State initial_cpu = {.pc=0xae6f, .a=0x2b, .x=0x99, .y=0xca, .sp=0xc3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xae6f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae70, .a=0x2b, .x=0x99, .y=0xca, .sp=0xc3, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xae6f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae6f, .value=0x20, .type=IO_READ},
        {.addr=0xae70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022D) {
    const struct CPU_State initial_cpu = {.pc=0x612a, .a=0x1b, .x=0x2b, .y=0x98, .sp=0x58, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x612a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x612b, .a=0x1b, .x=0x2b, .y=0x98, .sp=0x58, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x612a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x612a, .value=0x20, .type=IO_READ},
        {.addr=0x612b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022E) {
    const struct CPU_State initial_cpu = {.pc=0x28d3, .a=0x1d, .x=0xb5, .y=0x56, .sp=0x9b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x28d3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x28d4, .a=0x1d, .x=0xb5, .y=0x56, .sp=0x9b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x28d3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x28d3, .value=0x20, .type=IO_READ},
        {.addr=0x28d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe969, .a=0x56, .x=0x67, .y=0x5b, .sp=0x13, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe969, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe96a, .a=0x56, .x=0x67, .y=0x5b, .sp=0x13, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xe969, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe969, .value=0x20, .type=IO_READ},
        {.addr=0xe96a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0230) {
    const struct CPU_State initial_cpu = {.pc=0xd245, .a=0x7e, .x=0x0f, .y=0x2f, .sp=0x39, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd245, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd246, .a=0x7e, .x=0x0f, .y=0x2f, .sp=0x39, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd245, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd245, .value=0x20, .type=IO_READ},
        {.addr=0xd246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0231) {
    const struct CPU_State initial_cpu = {.pc=0xf558, .a=0x38, .x=0xea, .y=0xd7, .sp=0x56, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf558, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf559, .a=0x38, .x=0xea, .y=0xd7, .sp=0x56, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xf558, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf558, .value=0x20, .type=IO_READ},
        {.addr=0xf559, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0232) {
    const struct CPU_State initial_cpu = {.pc=0x78c7, .a=0x7f, .x=0x05, .y=0x34, .sp=0xa0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x78c7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x78c8, .a=0x7f, .x=0x05, .y=0x34, .sp=0xa0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x78c7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x78c7, .value=0x20, .type=IO_READ},
        {.addr=0x78c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0233) {
    const struct CPU_State initial_cpu = {.pc=0xfea0, .a=0x59, .x=0x97, .y=0x05, .sp=0x17, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfea0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfea1, .a=0x59, .x=0x97, .y=0x05, .sp=0x17, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xfea0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfea0, .value=0x20, .type=IO_READ},
        {.addr=0xfea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd5c5, .a=0xbe, .x=0x77, .y=0x04, .sp=0x33, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd5c6, .a=0xbe, .x=0x77, .y=0x04, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd5c5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd5c5, .value=0x20, .type=IO_READ},
        {.addr=0xd5c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0235) {
    const struct CPU_State initial_cpu = {.pc=0xf209, .a=0x49, .x=0x8e, .y=0x79, .sp=0xc5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf209, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf20a, .a=0x49, .x=0x8e, .y=0x79, .sp=0xc5, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xf209, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf209, .value=0x20, .type=IO_READ},
        {.addr=0xf20a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0236) {
    const struct CPU_State initial_cpu = {.pc=0x233f, .a=0xb8, .x=0xcb, .y=0xf5, .sp=0x4e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x233f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2340, .a=0xb8, .x=0xcb, .y=0xf5, .sp=0x4e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x233f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x233f, .value=0x20, .type=IO_READ},
        {.addr=0x2340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0237) {
    const struct CPU_State initial_cpu = {.pc=0x860d, .a=0x9e, .x=0x9f, .y=0xc6, .sp=0x99, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x860d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x860e, .a=0x9e, .x=0x9f, .y=0xc6, .sp=0x99, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x860d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x860d, .value=0x20, .type=IO_READ},
        {.addr=0x860e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0238) {
    const struct CPU_State initial_cpu = {.pc=0x3bf5, .a=0xad, .x=0xf2, .y=0xbb, .sp=0x6f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3bf6, .a=0xad, .x=0xf2, .y=0xbb, .sp=0x6f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3bf5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3bf5, .value=0x20, .type=IO_READ},
        {.addr=0x3bf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb28f, .a=0x0a, .x=0x74, .y=0x91, .sp=0x06, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb28f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb290, .a=0x0a, .x=0x74, .y=0x91, .sp=0x06, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb28f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb28f, .value=0x20, .type=IO_READ},
        {.addr=0xb290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023A) {
    const struct CPU_State initial_cpu = {.pc=0xe415, .a=0x66, .x=0xac, .y=0x75, .sp=0xb6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe415, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe416, .a=0x66, .x=0xac, .y=0x75, .sp=0xb6, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe415, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe415, .value=0x20, .type=IO_READ},
        {.addr=0xe416, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023B) {
    const struct CPU_State initial_cpu = {.pc=0x7643, .a=0x1e, .x=0xf7, .y=0xa9, .sp=0x5a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7643, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7644, .a=0x1e, .x=0xf7, .y=0xa9, .sp=0x5a, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x7643, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7643, .value=0x20, .type=IO_READ},
        {.addr=0x7644, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023C) {
    const struct CPU_State initial_cpu = {.pc=0xbccb, .a=0xad, .x=0x97, .y=0x23, .sp=0x01, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xbccb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbccc, .a=0xad, .x=0x97, .y=0x23, .sp=0x01, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbccb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbccb, .value=0x20, .type=IO_READ},
        {.addr=0xbccc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023D) {
    const struct CPU_State initial_cpu = {.pc=0x1568, .a=0xf7, .x=0x82, .y=0x37, .sp=0x10, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1568, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1569, .a=0xf7, .x=0x82, .y=0x37, .sp=0x10, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1568, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1568, .value=0x20, .type=IO_READ},
        {.addr=0x1569, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023E) {
    const struct CPU_State initial_cpu = {.pc=0xad2b, .a=0xed, .x=0x30, .y=0x01, .sp=0x4c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xad2b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xad2c, .a=0xed, .x=0x30, .y=0x01, .sp=0x4c, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xad2b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xad2b, .value=0x20, .type=IO_READ},
        {.addr=0xad2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_023F) {
    const struct CPU_State initial_cpu = {.pc=0x9a41, .a=0xfd, .x=0xd3, .y=0xa1, .sp=0xde, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9a41, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9a42, .a=0xfd, .x=0xd3, .y=0xa1, .sp=0xde, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9a41, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9a41, .value=0x20, .type=IO_READ},
        {.addr=0x9a42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0240) {
    const struct CPU_State initial_cpu = {.pc=0x5e09, .a=0x6d, .x=0x2b, .y=0xcd, .sp=0x3b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5e09, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e0a, .a=0x6d, .x=0x2b, .y=0xcd, .sp=0x3b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5e09, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e09, .value=0x20, .type=IO_READ},
        {.addr=0x5e0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0241) {
    const struct CPU_State initial_cpu = {.pc=0x61f5, .a=0xc5, .x=0x3e, .y=0x64, .sp=0x82, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x61f5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x61f6, .a=0xc5, .x=0x3e, .y=0x64, .sp=0x82, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x61f5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x61f5, .value=0x20, .type=IO_READ},
        {.addr=0x61f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0242) {
    const struct CPU_State initial_cpu = {.pc=0xc0fd, .a=0x25, .x=0x2d, .y=0x9b, .sp=0xe3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc0fe, .a=0x25, .x=0x2d, .y=0x9b, .sp=0xe3, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xc0fd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc0fd, .value=0x20, .type=IO_READ},
        {.addr=0xc0fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0243) {
    const struct CPU_State initial_cpu = {.pc=0x31bb, .a=0xce, .x=0x9e, .y=0x03, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x31bb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x31bc, .a=0xce, .x=0x9e, .y=0x03, .sp=0x42, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x31bb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x31bb, .value=0x20, .type=IO_READ},
        {.addr=0x31bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0244) {
    const struct CPU_State initial_cpu = {.pc=0x7c18, .a=0x3d, .x=0xa7, .y=0xab, .sp=0x2f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7c18, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7c19, .a=0x3d, .x=0xa7, .y=0xab, .sp=0x2f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7c18, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7c18, .value=0x20, .type=IO_READ},
        {.addr=0x7c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0245) {
    const struct CPU_State initial_cpu = {.pc=0x3030, .a=0x24, .x=0xb4, .y=0x82, .sp=0x76, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x3030, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3031, .a=0x24, .x=0xb4, .y=0x82, .sp=0x76, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3030, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3030, .value=0x20, .type=IO_READ},
        {.addr=0x3031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0246) {
    const struct CPU_State initial_cpu = {.pc=0xe9ff, .a=0xb2, .x=0xf2, .y=0xf4, .sp=0xcc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ff, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xea00, .a=0xb2, .x=0xf2, .y=0xf4, .sp=0xcc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe9ff, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe9ff, .value=0x20, .type=IO_READ},
        {.addr=0xea00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0247) {
    const struct CPU_State initial_cpu = {.pc=0x7b45, .a=0x6d, .x=0x43, .y=0x96, .sp=0x6e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7b45, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7b46, .a=0x6d, .x=0x43, .y=0x96, .sp=0x6e, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x7b45, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7b45, .value=0x20, .type=IO_READ},
        {.addr=0x7b46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0248) {
    const struct CPU_State initial_cpu = {.pc=0x5669, .a=0x1c, .x=0xfd, .y=0xc1, .sp=0xf8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5669, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x566a, .a=0x1c, .x=0xfd, .y=0xc1, .sp=0xf8, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5669, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5669, .value=0x20, .type=IO_READ},
        {.addr=0x566a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0249) {
    const struct CPU_State initial_cpu = {.pc=0xc091, .a=0x59, .x=0xa1, .y=0x40, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc091, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc092, .a=0x59, .x=0xa1, .y=0x40, .sp=0x66, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc091, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc091, .value=0x20, .type=IO_READ},
        {.addr=0xc092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024A) {
    const struct CPU_State initial_cpu = {.pc=0x676f, .a=0x7e, .x=0x91, .y=0xc0, .sp=0x06, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x676f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6770, .a=0x7e, .x=0x91, .y=0xc0, .sp=0x06, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x676f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x676f, .value=0x20, .type=IO_READ},
        {.addr=0x6770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024B) {
    const struct CPU_State initial_cpu = {.pc=0x261f, .a=0xb7, .x=0x7e, .y=0x99, .sp=0xc3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x261f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2620, .a=0xb7, .x=0x7e, .y=0x99, .sp=0xc3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x261f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x261f, .value=0x20, .type=IO_READ},
        {.addr=0x2620, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024C) {
    const struct CPU_State initial_cpu = {.pc=0x364c, .a=0x14, .x=0x76, .y=0x68, .sp=0x37, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x364c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x364d, .a=0x14, .x=0x76, .y=0x68, .sp=0x37, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x364c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x364c, .value=0x20, .type=IO_READ},
        {.addr=0x364d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024D) {
    const struct CPU_State initial_cpu = {.pc=0xee3b, .a=0x60, .x=0xb8, .y=0x49, .sp=0x5e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xee3b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee3c, .a=0x60, .x=0xb8, .y=0x49, .sp=0x5e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xee3b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee3b, .value=0x20, .type=IO_READ},
        {.addr=0xee3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024E) {
    const struct CPU_State initial_cpu = {.pc=0xd528, .a=0x17, .x=0x00, .y=0x86, .sp=0x0d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd528, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd529, .a=0x17, .x=0x00, .y=0x86, .sp=0x0d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd528, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd528, .value=0x20, .type=IO_READ},
        {.addr=0xd529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_024F) {
    const struct CPU_State initial_cpu = {.pc=0xfd74, .a=0x15, .x=0xf2, .y=0x32, .sp=0x73, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfd74, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfd75, .a=0x15, .x=0xf2, .y=0x32, .sp=0x73, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xfd74, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfd74, .value=0x20, .type=IO_READ},
        {.addr=0xfd75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0250) {
    const struct CPU_State initial_cpu = {.pc=0x004a, .a=0x36, .x=0x4b, .y=0x43, .sp=0xdc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x004b, .a=0x36, .x=0x4b, .y=0x43, .sp=0xdc, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x004a, .value=0x20, .type=IO_READ},
        {.addr=0x004b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0251) {
    const struct CPU_State initial_cpu = {.pc=0x312f, .a=0x09, .x=0x40, .y=0xbb, .sp=0x04, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x312f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3130, .a=0x09, .x=0x40, .y=0xbb, .sp=0x04, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x312f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x312f, .value=0x20, .type=IO_READ},
        {.addr=0x3130, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0252) {
    const struct CPU_State initial_cpu = {.pc=0xe57c, .a=0x81, .x=0x3a, .y=0xcc, .sp=0x02, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xe57c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe57d, .a=0x81, .x=0x3a, .y=0xcc, .sp=0x02, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe57c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe57c, .value=0x20, .type=IO_READ},
        {.addr=0xe57d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0253) {
    const struct CPU_State initial_cpu = {.pc=0xfb00, .a=0x38, .x=0x34, .y=0x7d, .sp=0x46, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xfb00, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb01, .a=0x38, .x=0x34, .y=0x7d, .sp=0x46, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfb00, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb00, .value=0x20, .type=IO_READ},
        {.addr=0xfb01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0254) {
    const struct CPU_State initial_cpu = {.pc=0xe399, .a=0xd0, .x=0x6e, .y=0x5f, .sp=0xfe, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xe399, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe39a, .a=0xd0, .x=0x6e, .y=0x5f, .sp=0xfe, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xe399, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe399, .value=0x20, .type=IO_READ},
        {.addr=0xe39a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0255) {
    const struct CPU_State initial_cpu = {.pc=0xfca0, .a=0x0d, .x=0xfc, .y=0xd1, .sp=0xc8, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xfca0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfca1, .a=0x0d, .x=0xfc, .y=0xd1, .sp=0xc8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfca0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfca0, .value=0x20, .type=IO_READ},
        {.addr=0xfca1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0256) {
    const struct CPU_State initial_cpu = {.pc=0x51e4, .a=0x42, .x=0x5a, .y=0xbb, .sp=0x09, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x51e4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x51e5, .a=0x42, .x=0x5a, .y=0xbb, .sp=0x09, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x51e4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x51e4, .value=0x20, .type=IO_READ},
        {.addr=0x51e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0257) {
    const struct CPU_State initial_cpu = {.pc=0x5dcb, .a=0xeb, .x=0xfe, .y=0x5a, .sp=0x75, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5dcc, .a=0xeb, .x=0xfe, .y=0x5a, .sp=0x75, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x5dcb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5dcb, .value=0x20, .type=IO_READ},
        {.addr=0x5dcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0258) {
    const struct CPU_State initial_cpu = {.pc=0x8b51, .a=0xde, .x=0xfc, .y=0x9f, .sp=0xda, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x8b51, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8b52, .a=0xde, .x=0xfc, .y=0x9f, .sp=0xda, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8b51, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8b51, .value=0x20, .type=IO_READ},
        {.addr=0x8b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0259) {
    const struct CPU_State initial_cpu = {.pc=0x0469, .a=0xc3, .x=0x4b, .y=0x75, .sp=0x65, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0469, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x046a, .a=0xc3, .x=0x4b, .y=0x75, .sp=0x65, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0469, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0469, .value=0x20, .type=IO_READ},
        {.addr=0x046a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025A) {
    const struct CPU_State initial_cpu = {.pc=0x697f, .a=0xd6, .x=0x5b, .y=0xaf, .sp=0xe8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x697f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6980, .a=0xd6, .x=0x5b, .y=0xaf, .sp=0xe8, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x697f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x697f, .value=0x20, .type=IO_READ},
        {.addr=0x6980, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025B) {
    const struct CPU_State initial_cpu = {.pc=0x9659, .a=0x61, .x=0x8b, .y=0x30, .sp=0xa5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9659, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x965a, .a=0x61, .x=0x8b, .y=0x30, .sp=0xa5, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9659, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9659, .value=0x20, .type=IO_READ},
        {.addr=0x965a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025C) {
    const struct CPU_State initial_cpu = {.pc=0x4d59, .a=0x6c, .x=0xa7, .y=0x2b, .sp=0x39, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4d59, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4d5a, .a=0x6c, .x=0xa7, .y=0x2b, .sp=0x39, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4d59, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4d59, .value=0x20, .type=IO_READ},
        {.addr=0x4d5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025D) {
    const struct CPU_State initial_cpu = {.pc=0x5335, .a=0x0e, .x=0xaf, .y=0x9b, .sp=0xa5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5335, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5336, .a=0x0e, .x=0xaf, .y=0x9b, .sp=0xa5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5335, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5335, .value=0x20, .type=IO_READ},
        {.addr=0x5336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025E) {
    const struct CPU_State initial_cpu = {.pc=0x119c, .a=0xaf, .x=0x27, .y=0x88, .sp=0x8d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x119c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x119d, .a=0xaf, .x=0x27, .y=0x88, .sp=0x8d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x119c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x119c, .value=0x20, .type=IO_READ},
        {.addr=0x119d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_025F) {
    const struct CPU_State initial_cpu = {.pc=0x3200, .a=0x6e, .x=0x27, .y=0xc7, .sp=0xbb, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x3200, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3201, .a=0x6e, .x=0x27, .y=0xc7, .sp=0xbb, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x3200, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3200, .value=0x20, .type=IO_READ},
        {.addr=0x3201, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0260) {
    const struct CPU_State initial_cpu = {.pc=0x17b8, .a=0xdb, .x=0x19, .y=0x11, .sp=0x9f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x17b8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x17b9, .a=0xdb, .x=0x19, .y=0x11, .sp=0x9f, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x17b8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x17b8, .value=0x20, .type=IO_READ},
        {.addr=0x17b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0261) {
    const struct CPU_State initial_cpu = {.pc=0xd177, .a=0xc4, .x=0x6f, .y=0xea, .sp=0xf4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd177, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd178, .a=0xc4, .x=0x6f, .y=0xea, .sp=0xf4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd177, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd177, .value=0x20, .type=IO_READ},
        {.addr=0xd178, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0262) {
    const struct CPU_State initial_cpu = {.pc=0xcd16, .a=0x47, .x=0x4e, .y=0xcb, .sp=0xc2, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd16, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcd17, .a=0x47, .x=0x4e, .y=0xcb, .sp=0xc2, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xcd16, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcd16, .value=0x20, .type=IO_READ},
        {.addr=0xcd17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa868, .a=0x6a, .x=0x6b, .y=0x29, .sp=0xf7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa868, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa869, .a=0x6a, .x=0x6b, .y=0x29, .sp=0xf7, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa868, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa868, .value=0x20, .type=IO_READ},
        {.addr=0xa869, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0264) {
    const struct CPU_State initial_cpu = {.pc=0xa602, .a=0x18, .x=0x00, .y=0xf0, .sp=0x89, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa602, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa603, .a=0x18, .x=0x00, .y=0xf0, .sp=0x89, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa602, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa602, .value=0x20, .type=IO_READ},
        {.addr=0xa603, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0265) {
    const struct CPU_State initial_cpu = {.pc=0x5fbd, .a=0xd4, .x=0xbd, .y=0xd6, .sp=0x30, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x5fbd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5fbe, .a=0xd4, .x=0xbd, .y=0xd6, .sp=0x30, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5fbd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5fbd, .value=0x20, .type=IO_READ},
        {.addr=0x5fbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0266) {
    const struct CPU_State initial_cpu = {.pc=0xa4d4, .a=0x02, .x=0xda, .y=0xea, .sp=0x85, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4d5, .a=0x02, .x=0xda, .y=0xea, .sp=0x85, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xa4d4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4d4, .value=0x20, .type=IO_READ},
        {.addr=0xa4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0267) {
    const struct CPU_State initial_cpu = {.pc=0xc64b, .a=0xe1, .x=0xa7, .y=0xc0, .sp=0xdb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc64b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc64c, .a=0xe1, .x=0xa7, .y=0xc0, .sp=0xdb, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xc64b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc64b, .value=0x20, .type=IO_READ},
        {.addr=0xc64c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0268) {
    const struct CPU_State initial_cpu = {.pc=0x9a1d, .a=0x28, .x=0x57, .y=0xbf, .sp=0x41, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9a1e, .a=0x28, .x=0x57, .y=0xbf, .sp=0x41, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9a1d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9a1d, .value=0x20, .type=IO_READ},
        {.addr=0x9a1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0269) {
    const struct CPU_State initial_cpu = {.pc=0x46d5, .a=0x36, .x=0x25, .y=0xce, .sp=0x92, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x46d5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x46d6, .a=0x36, .x=0x25, .y=0xce, .sp=0x92, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x46d5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x46d5, .value=0x20, .type=IO_READ},
        {.addr=0x46d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026A) {
    const struct CPU_State initial_cpu = {.pc=0x90fb, .a=0xb5, .x=0xd7, .y=0x58, .sp=0xc2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x90fb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x90fc, .a=0xb5, .x=0xd7, .y=0x58, .sp=0xc2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x90fb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x90fb, .value=0x20, .type=IO_READ},
        {.addr=0x90fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026B) {
    const struct CPU_State initial_cpu = {.pc=0xc76c, .a=0xa5, .x=0x7f, .y=0x3d, .sp=0xb8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc76c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc76d, .a=0xa5, .x=0x7f, .y=0x3d, .sp=0xb8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc76c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc76c, .value=0x20, .type=IO_READ},
        {.addr=0xc76d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026C) {
    const struct CPU_State initial_cpu = {.pc=0xeffe, .a=0x6a, .x=0x0c, .y=0x45, .sp=0xe3, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xeffe, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xefff, .a=0x6a, .x=0x0c, .y=0x45, .sp=0xe3, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xeffe, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xeffe, .value=0x20, .type=IO_READ},
        {.addr=0xefff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026D) {
    const struct CPU_State initial_cpu = {.pc=0xac85, .a=0xe2, .x=0x96, .y=0x0e, .sp=0x5e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xac85, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xac86, .a=0xe2, .x=0x96, .y=0x0e, .sp=0x5e, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xac85, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xac85, .value=0x20, .type=IO_READ},
        {.addr=0xac86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8eae, .a=0x14, .x=0xf3, .y=0xae, .sp=0x53, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8eae, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8eaf, .a=0x14, .x=0xf3, .y=0xae, .sp=0x53, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x8eae, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8eae, .value=0x20, .type=IO_READ},
        {.addr=0x8eaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_026F) {
    const struct CPU_State initial_cpu = {.pc=0x1b37, .a=0xc8, .x=0x7e, .y=0x92, .sp=0x53, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1b37, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1b38, .a=0xc8, .x=0x7e, .y=0x92, .sp=0x53, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1b37, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1b37, .value=0x20, .type=IO_READ},
        {.addr=0x1b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0270) {
    const struct CPU_State initial_cpu = {.pc=0xf878, .a=0x8d, .x=0x57, .y=0x11, .sp=0xc1, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf878, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf879, .a=0x8d, .x=0x57, .y=0x11, .sp=0xc1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xf878, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf878, .value=0x20, .type=IO_READ},
        {.addr=0xf879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0271) {
    const struct CPU_State initial_cpu = {.pc=0x12c3, .a=0xf8, .x=0x18, .y=0x1f, .sp=0xe2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x12c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x12c4, .a=0xf8, .x=0x18, .y=0x1f, .sp=0xe2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x12c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x12c3, .value=0x20, .type=IO_READ},
        {.addr=0x12c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0272) {
    const struct CPU_State initial_cpu = {.pc=0xda0a, .a=0x95, .x=0xe8, .y=0x1e, .sp=0x46, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xda0a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xda0b, .a=0x95, .x=0xe8, .y=0x1e, .sp=0x46, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xda0a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xda0a, .value=0x20, .type=IO_READ},
        {.addr=0xda0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0273) {
    const struct CPU_State initial_cpu = {.pc=0x2413, .a=0x40, .x=0x93, .y=0x2a, .sp=0x52, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2413, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2414, .a=0x40, .x=0x93, .y=0x2a, .sp=0x52, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2413, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2413, .value=0x20, .type=IO_READ},
        {.addr=0x2414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0274) {
    const struct CPU_State initial_cpu = {.pc=0x6e72, .a=0xc7, .x=0x1a, .y=0xea, .sp=0x76, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6e72, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6e73, .a=0xc7, .x=0x1a, .y=0xea, .sp=0x76, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6e72, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6e72, .value=0x20, .type=IO_READ},
        {.addr=0x6e73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0275) {
    const struct CPU_State initial_cpu = {.pc=0x75b1, .a=0x5e, .x=0x2f, .y=0x62, .sp=0x25, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x75b1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x75b2, .a=0x5e, .x=0x2f, .y=0x62, .sp=0x25, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x75b1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x75b1, .value=0x20, .type=IO_READ},
        {.addr=0x75b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0276) {
    const struct CPU_State initial_cpu = {.pc=0x3479, .a=0xb5, .x=0xe6, .y=0x60, .sp=0x2c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3479, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x347a, .a=0xb5, .x=0xe6, .y=0x60, .sp=0x2c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3479, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3479, .value=0x20, .type=IO_READ},
        {.addr=0x347a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0277) {
    const struct CPU_State initial_cpu = {.pc=0xef6f, .a=0x4f, .x=0xcc, .y=0x35, .sp=0xaa, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xef6f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xef70, .a=0x4f, .x=0xcc, .y=0x35, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xef6f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xef6f, .value=0x20, .type=IO_READ},
        {.addr=0xef70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0278) {
    const struct CPU_State initial_cpu = {.pc=0x5854, .a=0x73, .x=0xab, .y=0xaa, .sp=0x2b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x5854, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5855, .a=0x73, .x=0xab, .y=0xaa, .sp=0x2b, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x5854, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5854, .value=0x20, .type=IO_READ},
        {.addr=0x5855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0279) {
    const struct CPU_State initial_cpu = {.pc=0xc55c, .a=0xb5, .x=0x0e, .y=0x3d, .sp=0x01, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc55c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc55d, .a=0xb5, .x=0x0e, .y=0x3d, .sp=0x01, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xc55c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc55c, .value=0x20, .type=IO_READ},
        {.addr=0xc55d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027A) {
    const struct CPU_State initial_cpu = {.pc=0x5dcf, .a=0xf5, .x=0xd9, .y=0xdc, .sp=0xdb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5dd0, .a=0xf5, .x=0xd9, .y=0xdc, .sp=0xdb, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x5dcf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5dcf, .value=0x20, .type=IO_READ},
        {.addr=0x5dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027B) {
    const struct CPU_State initial_cpu = {.pc=0x4385, .a=0x58, .x=0x7f, .y=0x01, .sp=0xeb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4385, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4386, .a=0x58, .x=0x7f, .y=0x01, .sp=0xeb, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x4385, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4385, .value=0x20, .type=IO_READ},
        {.addr=0x4386, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027C) {
    const struct CPU_State initial_cpu = {.pc=0x9c82, .a=0x50, .x=0x01, .y=0x1d, .sp=0x48, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9c82, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9c83, .a=0x50, .x=0x01, .y=0x1d, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9c82, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9c82, .value=0x20, .type=IO_READ},
        {.addr=0x9c83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027D) {
    const struct CPU_State initial_cpu = {.pc=0x2063, .a=0xde, .x=0x6d, .y=0x41, .sp=0x7a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2063, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2064, .a=0xde, .x=0x6d, .y=0x41, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2063, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2063, .value=0x20, .type=IO_READ},
        {.addr=0x2064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027E) {
    const struct CPU_State initial_cpu = {.pc=0x4f71, .a=0xcb, .x=0xaf, .y=0xe0, .sp=0x6d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4f71, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4f72, .a=0xcb, .x=0xaf, .y=0xe0, .sp=0x6d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x4f71, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4f71, .value=0x20, .type=IO_READ},
        {.addr=0x4f72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4c7c, .a=0x30, .x=0xbb, .y=0xee, .sp=0xf9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4c7c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4c7d, .a=0x30, .x=0xbb, .y=0xee, .sp=0xf9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4c7c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4c7c, .value=0x20, .type=IO_READ},
        {.addr=0x4c7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0280) {
    const struct CPU_State initial_cpu = {.pc=0x1ea0, .a=0xff, .x=0xd1, .y=0x13, .sp=0xd4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ea0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1ea1, .a=0xff, .x=0xd1, .y=0x13, .sp=0xd4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1ea0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1ea0, .value=0x20, .type=IO_READ},
        {.addr=0x1ea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0281) {
    const struct CPU_State initial_cpu = {.pc=0x48c7, .a=0xf9, .x=0xbe, .y=0x93, .sp=0x1f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x48c7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x48c8, .a=0xf9, .x=0xbe, .y=0x93, .sp=0x1f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x48c7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x48c7, .value=0x20, .type=IO_READ},
        {.addr=0x48c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0282) {
    const struct CPU_State initial_cpu = {.pc=0x4ece, .a=0x00, .x=0x47, .y=0x2f, .sp=0xe7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4ece, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4ecf, .a=0x00, .x=0x47, .y=0x2f, .sp=0xe7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4ece, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4ece, .value=0x20, .type=IO_READ},
        {.addr=0x4ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0283) {
    const struct CPU_State initial_cpu = {.pc=0xb725, .a=0xcf, .x=0xaf, .y=0x5e, .sp=0x4f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb725, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb726, .a=0xcf, .x=0xaf, .y=0x5e, .sp=0x4f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb725, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb725, .value=0x20, .type=IO_READ},
        {.addr=0xb726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe96c, .a=0xaa, .x=0x9a, .y=0xf0, .sp=0xe2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xe96c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0xaa, .x=0x9a, .y=0xf0, .sp=0xe2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe96c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe96c, .value=0x20, .type=IO_READ},
        {.addr=0xe96d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb0b5, .a=0x77, .x=0x0c, .y=0x49, .sp=0xbe, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb0b6, .a=0x77, .x=0x0c, .y=0x49, .sp=0xbe, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xb0b5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb0b5, .value=0x20, .type=IO_READ},
        {.addr=0xb0b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0286) {
    const struct CPU_State initial_cpu = {.pc=0x42fd, .a=0xe9, .x=0xd7, .y=0xd2, .sp=0x91, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x42fd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x42fe, .a=0xe9, .x=0xd7, .y=0xd2, .sp=0x91, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x42fd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x42fd, .value=0x20, .type=IO_READ},
        {.addr=0x42fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0287) {
    const struct CPU_State initial_cpu = {.pc=0xd677, .a=0x51, .x=0xc3, .y=0x18, .sp=0x57, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd677, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd678, .a=0x51, .x=0xc3, .y=0x18, .sp=0x57, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd677, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd677, .value=0x20, .type=IO_READ},
        {.addr=0xd678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0288) {
    const struct CPU_State initial_cpu = {.pc=0xcbcc, .a=0x31, .x=0xda, .y=0xf0, .sp=0x49, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcbcc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcbcd, .a=0x31, .x=0xda, .y=0xf0, .sp=0x49, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xcbcc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcbcc, .value=0x20, .type=IO_READ},
        {.addr=0xcbcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0289) {
    const struct CPU_State initial_cpu = {.pc=0x7972, .a=0xaf, .x=0xad, .y=0x97, .sp=0xf3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7972, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7973, .a=0xaf, .x=0xad, .y=0x97, .sp=0xf3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7972, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7972, .value=0x20, .type=IO_READ},
        {.addr=0x7973, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028A) {
    const struct CPU_State initial_cpu = {.pc=0x1fa2, .a=0x2d, .x=0xa9, .y=0x48, .sp=0xbb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1fa3, .a=0x2d, .x=0xa9, .y=0x48, .sp=0xbb, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x1fa2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1fa2, .value=0x20, .type=IO_READ},
        {.addr=0x1fa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028B) {
    const struct CPU_State initial_cpu = {.pc=0x0344, .a=0xe2, .x=0x11, .y=0xfc, .sp=0x70, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0344, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0345, .a=0xe2, .x=0x11, .y=0xfc, .sp=0x70, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0344, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0344, .value=0x20, .type=IO_READ},
        {.addr=0x0345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028C) {
    const struct CPU_State initial_cpu = {.pc=0xcf96, .a=0x8f, .x=0xdd, .y=0x37, .sp=0x5a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xcf96, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcf97, .a=0x8f, .x=0xdd, .y=0x37, .sp=0x5a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xcf96, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcf96, .value=0x20, .type=IO_READ},
        {.addr=0xcf97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028D) {
    const struct CPU_State initial_cpu = {.pc=0x5feb, .a=0x66, .x=0x46, .y=0x82, .sp=0x8a, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5feb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5fec, .a=0x66, .x=0x46, .y=0x82, .sp=0x8a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5feb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5feb, .value=0x20, .type=IO_READ},
        {.addr=0x5fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028E) {
    const struct CPU_State initial_cpu = {.pc=0x9f02, .a=0xab, .x=0xef, .y=0x8d, .sp=0x51, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x9f02, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9f03, .a=0xab, .x=0xef, .y=0x8d, .sp=0x51, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x9f02, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9f02, .value=0x20, .type=IO_READ},
        {.addr=0x9f03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_028F) {
    const struct CPU_State initial_cpu = {.pc=0x1876, .a=0x35, .x=0x7a, .y=0x5e, .sp=0x49, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1876, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1877, .a=0x35, .x=0x7a, .y=0x5e, .sp=0x49, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x1876, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1876, .value=0x20, .type=IO_READ},
        {.addr=0x1877, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0290) {
    const struct CPU_State initial_cpu = {.pc=0xc6d7, .a=0x41, .x=0xae, .y=0x0d, .sp=0xd9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc6d8, .a=0x41, .x=0xae, .y=0x0d, .sp=0xd9, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xc6d7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc6d7, .value=0x20, .type=IO_READ},
        {.addr=0xc6d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0291) {
    const struct CPU_State initial_cpu = {.pc=0x24f4, .a=0x65, .x=0xf2, .y=0xd1, .sp=0x0a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x24f4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x24f5, .a=0x65, .x=0xf2, .y=0xd1, .sp=0x0a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x24f4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x24f4, .value=0x20, .type=IO_READ},
        {.addr=0x24f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0292) {
    const struct CPU_State initial_cpu = {.pc=0x59b2, .a=0x9a, .x=0x5a, .y=0xf7, .sp=0xcb, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x59b2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x59b3, .a=0x9a, .x=0x5a, .y=0xf7, .sp=0xcb, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x59b2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x59b2, .value=0x20, .type=IO_READ},
        {.addr=0x59b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0293) {
    const struct CPU_State initial_cpu = {.pc=0xb7a7, .a=0x9b, .x=0x8e, .y=0x86, .sp=0x3e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb7a8, .a=0x9b, .x=0x8e, .y=0x86, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb7a7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb7a7, .value=0x20, .type=IO_READ},
        {.addr=0xb7a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0294) {
    const struct CPU_State initial_cpu = {.pc=0xd278, .a=0xa6, .x=0x92, .y=0x6a, .sp=0x26, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd278, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd279, .a=0xa6, .x=0x92, .y=0x6a, .sp=0x26, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xd278, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd278, .value=0x20, .type=IO_READ},
        {.addr=0xd279, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9a59, .a=0x0d, .x=0x3d, .y=0x52, .sp=0xb1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9a59, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9a5a, .a=0x0d, .x=0x3d, .y=0x52, .sp=0xb1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9a59, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9a59, .value=0x20, .type=IO_READ},
        {.addr=0x9a5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0296) {
    const struct CPU_State initial_cpu = {.pc=0x4990, .a=0xc9, .x=0x80, .y=0x06, .sp=0xca, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4990, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4991, .a=0xc9, .x=0x80, .y=0x06, .sp=0xca, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4990, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4990, .value=0x20, .type=IO_READ},
        {.addr=0x4991, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0297) {
    const struct CPU_State initial_cpu = {.pc=0xa3c8, .a=0xad, .x=0xb1, .y=0x44, .sp=0xaf, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa3c9, .a=0xad, .x=0xb1, .y=0x44, .sp=0xaf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa3c8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa3c8, .value=0x20, .type=IO_READ},
        {.addr=0xa3c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0298) {
    const struct CPU_State initial_cpu = {.pc=0x7bfb, .a=0x07, .x=0x2a, .y=0xc1, .sp=0x82, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7bfb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7bfc, .a=0x07, .x=0x2a, .y=0xc1, .sp=0x82, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7bfb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7bfb, .value=0x20, .type=IO_READ},
        {.addr=0x7bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0299) {
    const struct CPU_State initial_cpu = {.pc=0x55d8, .a=0x41, .x=0x70, .y=0xdd, .sp=0xa6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x55d8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x55d9, .a=0x41, .x=0x70, .y=0xdd, .sp=0xa6, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x55d8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x55d8, .value=0x20, .type=IO_READ},
        {.addr=0x55d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029A) {
    const struct CPU_State initial_cpu = {.pc=0x84bb, .a=0x16, .x=0xa4, .y=0xe3, .sp=0xbd, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x84bb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x84bc, .a=0x16, .x=0xa4, .y=0xe3, .sp=0xbd, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x84bb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x84bb, .value=0x20, .type=IO_READ},
        {.addr=0x84bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029B) {
    const struct CPU_State initial_cpu = {.pc=0x88fd, .a=0xae, .x=0xd4, .y=0xbc, .sp=0x22, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x88fd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x88fe, .a=0xae, .x=0xd4, .y=0xbc, .sp=0x22, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x88fd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x88fd, .value=0x20, .type=IO_READ},
        {.addr=0x88fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029C) {
    const struct CPU_State initial_cpu = {.pc=0x6a0a, .a=0xfc, .x=0xc3, .y=0x52, .sp=0x28, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a0b, .a=0xfc, .x=0xc3, .y=0x52, .sp=0x28, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x6a0a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a0a, .value=0x20, .type=IO_READ},
        {.addr=0x6a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029D) {
    const struct CPU_State initial_cpu = {.pc=0x3b83, .a=0xc2, .x=0xc4, .y=0x2d, .sp=0x82, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x3b83, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3b84, .a=0xc2, .x=0xc4, .y=0x2d, .sp=0x82, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x3b83, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3b83, .value=0x20, .type=IO_READ},
        {.addr=0x3b84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029E) {
    const struct CPU_State initial_cpu = {.pc=0x5b49, .a=0x70, .x=0x40, .y=0x83, .sp=0x66, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5b49, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5b4a, .a=0x70, .x=0x40, .y=0x83, .sp=0x66, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x5b49, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5b49, .value=0x20, .type=IO_READ},
        {.addr=0x5b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7ade, .a=0x76, .x=0x0b, .y=0x69, .sp=0x9b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7ade, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7adf, .a=0x76, .x=0x0b, .y=0x69, .sp=0x9b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7ade, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7ade, .value=0x20, .type=IO_READ},
        {.addr=0x7adf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9977, .a=0xe3, .x=0xdb, .y=0x47, .sp=0xcb, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9977, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9978, .a=0xe3, .x=0xdb, .y=0x47, .sp=0xcb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9977, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9977, .value=0x20, .type=IO_READ},
        {.addr=0x9978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd332, .a=0x6d, .x=0x9e, .y=0xe4, .sp=0x49, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd332, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd333, .a=0x6d, .x=0x9e, .y=0xe4, .sp=0x49, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xd332, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd332, .value=0x20, .type=IO_READ},
        {.addr=0xd333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6ec9, .a=0xd9, .x=0xff, .y=0x3c, .sp=0x42, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6eca, .a=0xd9, .x=0xff, .y=0x3c, .sp=0x42, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x6ec9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6ec9, .value=0x20, .type=IO_READ},
        {.addr=0x6eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x955a, .a=0x17, .x=0x53, .y=0x51, .sp=0x38, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x955a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x955b, .a=0x17, .x=0x53, .y=0x51, .sp=0x38, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x955a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x955a, .value=0x20, .type=IO_READ},
        {.addr=0x955b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xcd1b, .a=0x17, .x=0xdd, .y=0xa5, .sp=0xe7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcd1c, .a=0x17, .x=0xdd, .y=0xa5, .sp=0xe7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xcd1b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcd1b, .value=0x20, .type=IO_READ},
        {.addr=0xcd1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x889f, .a=0x16, .x=0x99, .y=0x35, .sp=0x5b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x889f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x88a0, .a=0x16, .x=0x99, .y=0x35, .sp=0x5b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x889f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x889f, .value=0x20, .type=IO_READ},
        {.addr=0x88a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xb34f, .a=0xe5, .x=0x94, .y=0xbc, .sp=0xc3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xb34f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb350, .a=0xe5, .x=0x94, .y=0xbc, .sp=0xc3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xb34f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb34f, .value=0x20, .type=IO_READ},
        {.addr=0xb350, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xe7e5, .a=0x3f, .x=0x01, .y=0x62, .sp=0x86, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe7e6, .a=0x3f, .x=0x01, .y=0x62, .sp=0x86, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe7e5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe7e5, .value=0x20, .type=IO_READ},
        {.addr=0xe7e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xdb02, .a=0x7b, .x=0xd0, .y=0xe0, .sp=0x71, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb02, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdb03, .a=0x7b, .x=0xd0, .y=0xe0, .sp=0x71, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdb02, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdb02, .value=0x20, .type=IO_READ},
        {.addr=0xdb03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xec48, .a=0xa7, .x=0x44, .y=0xc0, .sp=0xf5, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xec48, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xec49, .a=0xa7, .x=0x44, .y=0xc0, .sp=0xf5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xec48, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xec48, .value=0x20, .type=IO_READ},
        {.addr=0xec49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xbb5a, .a=0xcd, .x=0xfb, .y=0x17, .sp=0x58, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb5a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbb5b, .a=0xcd, .x=0xfb, .y=0x17, .sp=0x58, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xbb5a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbb5a, .value=0x20, .type=IO_READ},
        {.addr=0xbb5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x3a37, .a=0xad, .x=0xf5, .y=0x8b, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x3a37, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3a38, .a=0xad, .x=0xf5, .y=0x8b, .sp=0x8a, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x3a37, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3a37, .value=0x20, .type=IO_READ},
        {.addr=0x3a38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xc799, .a=0xf1, .x=0x37, .y=0xf7, .sp=0xa9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc799, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc79a, .a=0xf1, .x=0x37, .y=0xf7, .sp=0xa9, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xc799, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc799, .value=0x20, .type=IO_READ},
        {.addr=0xc79a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x6e25, .a=0xc2, .x=0x7e, .y=0x15, .sp=0xc8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x6e25, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6e26, .a=0xc2, .x=0x7e, .y=0x15, .sp=0xc8, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x6e25, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6e25, .value=0x20, .type=IO_READ},
        {.addr=0x6e26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x24b8, .a=0xa2, .x=0x33, .y=0xa8, .sp=0xa9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x24b8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x24b9, .a=0xa2, .x=0x33, .y=0xa8, .sp=0xa9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x24b8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x24b8, .value=0x20, .type=IO_READ},
        {.addr=0x24b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x99e4, .a=0x78, .x=0x83, .y=0xce, .sp=0x3d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x99e4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x99e5, .a=0x78, .x=0x83, .y=0xce, .sp=0x3d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x99e4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x99e4, .value=0x20, .type=IO_READ},
        {.addr=0x99e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6b41, .a=0xec, .x=0xe0, .y=0xb7, .sp=0xc9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6b41, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6b42, .a=0xec, .x=0xe0, .y=0xb7, .sp=0xc9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6b41, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6b41, .value=0x20, .type=IO_READ},
        {.addr=0x6b42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x909a, .a=0x8e, .x=0xea, .y=0xc1, .sp=0xa7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x909a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x909b, .a=0x8e, .x=0xea, .y=0xc1, .sp=0xa7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x909a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x909a, .value=0x20, .type=IO_READ},
        {.addr=0x909b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xb397, .a=0x37, .x=0x46, .y=0x76, .sp=0x14, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb397, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb398, .a=0x37, .x=0x46, .y=0x76, .sp=0x14, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xb397, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb397, .value=0x20, .type=IO_READ},
        {.addr=0xb398, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x4c51, .a=0x0c, .x=0x1f, .y=0x68, .sp=0xad, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x4c51, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4c52, .a=0x0c, .x=0x1f, .y=0x68, .sp=0xad, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x4c51, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4c51, .value=0x20, .type=IO_READ},
        {.addr=0x4c52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7efc, .a=0xeb, .x=0xa4, .y=0x5a, .sp=0x7a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7efc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7efd, .a=0xeb, .x=0xa4, .y=0x5a, .sp=0x7a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7efc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7efc, .value=0x20, .type=IO_READ},
        {.addr=0x7efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xb95b, .a=0x40, .x=0x7a, .y=0x2f, .sp=0xcf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb95b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb95c, .a=0x40, .x=0x7a, .y=0x2f, .sp=0xcf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xb95b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb95b, .value=0x20, .type=IO_READ},
        {.addr=0xb95c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x5b33, .a=0x38, .x=0xc5, .y=0xcb, .sp=0xa3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5b33, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5b34, .a=0x38, .x=0xc5, .y=0xcb, .sp=0xa3, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x5b33, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5b33, .value=0x20, .type=IO_READ},
        {.addr=0x5b34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x8ccc, .a=0xe0, .x=0x46, .y=0x24, .sp=0x73, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ccc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8ccd, .a=0xe0, .x=0x46, .y=0x24, .sp=0x73, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x8ccc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8ccc, .value=0x20, .type=IO_READ},
        {.addr=0x8ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xb672, .a=0x62, .x=0x91, .y=0x55, .sp=0x8f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb672, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb673, .a=0x62, .x=0x91, .y=0x55, .sp=0x8f, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xb672, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb672, .value=0x20, .type=IO_READ},
        {.addr=0xb673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x00de, .a=0xad, .x=0x1e, .y=0x87, .sp=0x42, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x00df, .a=0xad, .x=0x1e, .y=0x87, .sp=0x42, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x00de, .value=0x20, .type=IO_READ},
        {.addr=0x00df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xe168, .a=0xb7, .x=0xbe, .y=0xa2, .sp=0xc6, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xe168, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe169, .a=0xb7, .x=0xbe, .y=0xa2, .sp=0xc6, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xe168, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe168, .value=0x20, .type=IO_READ},
        {.addr=0xe169, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xf1fc, .a=0xa0, .x=0xd8, .y=0x6e, .sp=0xcf, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf1fc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf1fd, .a=0xa0, .x=0xd8, .y=0x6e, .sp=0xcf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf1fc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf1fc, .value=0x20, .type=IO_READ},
        {.addr=0xf1fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x2ff9, .a=0xbf, .x=0x87, .y=0x87, .sp=0x64, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2ff9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2ffa, .a=0xbf, .x=0x87, .y=0x87, .sp=0x64, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2ff9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ff9, .value=0x20, .type=IO_READ},
        {.addr=0x2ffa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x02ef, .a=0x28, .x=0x69, .y=0xc3, .sp=0x7e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x02ef, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x02f0, .a=0x28, .x=0x69, .y=0xc3, .sp=0x7e, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x02ef, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x02ef, .value=0x20, .type=IO_READ},
        {.addr=0x02f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x12db, .a=0xdc, .x=0xeb, .y=0x81, .sp=0x6e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x12db, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x12dc, .a=0xdc, .x=0xeb, .y=0x81, .sp=0x6e, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x12db, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x12db, .value=0x20, .type=IO_READ},
        {.addr=0x12dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x2612, .a=0x99, .x=0x18, .y=0x5d, .sp=0x96, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x2612, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2613, .a=0x99, .x=0x18, .y=0x5d, .sp=0x96, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2612, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2612, .value=0x20, .type=IO_READ},
        {.addr=0x2613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2d1b, .a=0xb7, .x=0x98, .y=0x4c, .sp=0x0e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2d1c, .a=0xb7, .x=0x98, .y=0x4c, .sp=0x0e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x2d1b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2d1b, .value=0x20, .type=IO_READ},
        {.addr=0x2d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x8d83, .a=0xf1, .x=0x26, .y=0xfc, .sp=0x2f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8d83, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8d84, .a=0xf1, .x=0x26, .y=0xfc, .sp=0x2f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8d83, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8d83, .value=0x20, .type=IO_READ},
        {.addr=0x8d84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xb978, .a=0xa5, .x=0x87, .y=0x0e, .sp=0x19, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb978, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb979, .a=0xa5, .x=0x87, .y=0x0e, .sp=0x19, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb978, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb978, .value=0x20, .type=IO_READ},
        {.addr=0xb979, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xcc57, .a=0xf3, .x=0xad, .y=0x7f, .sp=0x3f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xcc57, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcc58, .a=0xf3, .x=0xad, .y=0x7f, .sp=0x3f, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xcc57, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcc57, .value=0x20, .type=IO_READ},
        {.addr=0xcc58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xd18f, .a=0xdc, .x=0x4d, .y=0x17, .sp=0x2b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd18f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd190, .a=0xdc, .x=0x4d, .y=0x17, .sp=0x2b, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xd18f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd18f, .value=0x20, .type=IO_READ},
        {.addr=0xd190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x6a95, .a=0xf9, .x=0xbb, .y=0x1c, .sp=0x99, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6a95, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6a96, .a=0xf9, .x=0xbb, .y=0x1c, .sp=0x99, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x6a95, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6a95, .value=0x20, .type=IO_READ},
        {.addr=0x6a96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x217f, .a=0x84, .x=0xee, .y=0x28, .sp=0xe5, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x217f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2180, .a=0x84, .x=0xee, .y=0x28, .sp=0xe5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x217f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x217f, .value=0x20, .type=IO_READ},
        {.addr=0x2180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xbfc1, .a=0xf4, .x=0xdf, .y=0xfe, .sp=0xa9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbfc2, .a=0xf4, .x=0xdf, .y=0xfe, .sp=0xa9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xbfc1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbfc1, .value=0x20, .type=IO_READ},
        {.addr=0xbfc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x6024, .a=0x31, .x=0x7f, .y=0x91, .sp=0x8c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6024, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6025, .a=0x31, .x=0x7f, .y=0x91, .sp=0x8c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6024, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6024, .value=0x20, .type=IO_READ},
        {.addr=0x6025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x5cae, .a=0xbc, .x=0x56, .y=0xa3, .sp=0x8e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5cae, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5caf, .a=0xbc, .x=0x56, .y=0xa3, .sp=0x8e, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x5cae, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5cae, .value=0x20, .type=IO_READ},
        {.addr=0x5caf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe417, .a=0xa8, .x=0xb0, .y=0xb4, .sp=0x81, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe417, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe418, .a=0xa8, .x=0xb0, .y=0xb4, .sp=0x81, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xe417, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe417, .value=0x20, .type=IO_READ},
        {.addr=0xe418, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x0b8d, .a=0xd9, .x=0x21, .y=0x09, .sp=0x23, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0b8e, .a=0xd9, .x=0x21, .y=0x09, .sp=0x23, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0b8d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0b8d, .value=0x20, .type=IO_READ},
        {.addr=0x0b8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x6165, .a=0xe3, .x=0x31, .y=0xdd, .sp=0x52, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6165, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6166, .a=0xe3, .x=0x31, .y=0xdd, .sp=0x52, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x6165, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6165, .value=0x20, .type=IO_READ},
        {.addr=0x6166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x18c4, .a=0xba, .x=0x77, .y=0xdc, .sp=0x3a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x18c4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x18c5, .a=0xba, .x=0x77, .y=0xdc, .sp=0x3a, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x18c4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x18c4, .value=0x20, .type=IO_READ},
        {.addr=0x18c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x9ba8, .a=0xb5, .x=0xab, .y=0x29, .sp=0x6e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9ba9, .a=0xb5, .x=0xab, .y=0x29, .sp=0x6e, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x9ba8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ba8, .value=0x20, .type=IO_READ},
        {.addr=0x9ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x3b4c, .a=0xaa, .x=0x4c, .y=0xf7, .sp=0xfe, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3b4c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3b4d, .a=0xaa, .x=0x4c, .y=0xf7, .sp=0xfe, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3b4c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3b4c, .value=0x20, .type=IO_READ},
        {.addr=0x3b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x872d, .a=0x72, .x=0x8e, .y=0x8f, .sp=0x97, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x872d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x872e, .a=0x72, .x=0x8e, .y=0x8f, .sp=0x97, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x872d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x872d, .value=0x20, .type=IO_READ},
        {.addr=0x872e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x4208, .a=0x21, .x=0x13, .y=0x5e, .sp=0xfd, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4208, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4209, .a=0x21, .x=0x13, .y=0x5e, .sp=0xfd, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x4208, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4208, .value=0x20, .type=IO_READ},
        {.addr=0x4209, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x83, .x=0xef, .y=0x2e, .sp=0xb2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x352b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x352c, .a=0x83, .x=0xef, .y=0x2e, .sp=0xb2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x352b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0x20, .type=IO_READ},
        {.addr=0x352c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xa5aa, .a=0x16, .x=0x93, .y=0xec, .sp=0x13, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5aa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa5ab, .a=0x16, .x=0x93, .y=0xec, .sp=0x13, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xa5aa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa5aa, .value=0x20, .type=IO_READ},
        {.addr=0xa5ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x2518, .a=0xd4, .x=0x00, .y=0xa4, .sp=0x26, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2518, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2519, .a=0xd4, .x=0x00, .y=0xa4, .sp=0x26, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x2518, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2518, .value=0x20, .type=IO_READ},
        {.addr=0x2519, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xc023, .a=0xf2, .x=0xe0, .y=0xb9, .sp=0x5b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xc023, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc024, .a=0xf2, .x=0xe0, .y=0xb9, .sp=0x5b, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xc023, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc023, .value=0x20, .type=IO_READ},
        {.addr=0xc024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x3e77, .a=0x11, .x=0x46, .y=0x02, .sp=0xa4, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3e77, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3e78, .a=0x11, .x=0x46, .y=0x02, .sp=0xa4, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x3e77, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3e77, .value=0x20, .type=IO_READ},
        {.addr=0x3e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xcb14, .a=0x5e, .x=0xae, .y=0xa4, .sp=0xb7, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xcb14, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcb15, .a=0x5e, .x=0xae, .y=0xa4, .sp=0xb7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcb14, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcb14, .value=0x20, .type=IO_READ},
        {.addr=0xcb15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5cdb, .a=0x52, .x=0x5f, .y=0x89, .sp=0xc5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x5cdb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5cdc, .a=0x52, .x=0x5f, .y=0x89, .sp=0xc5, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x5cdb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5cdb, .value=0x20, .type=IO_READ},
        {.addr=0x5cdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x3cc3, .a=0x0a, .x=0xf6, .y=0x45, .sp=0x27, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3cc4, .a=0x0a, .x=0xf6, .y=0x45, .sp=0x27, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x3cc3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3cc3, .value=0x20, .type=IO_READ},
        {.addr=0x3cc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x1e30, .a=0x25, .x=0x84, .y=0x07, .sp=0x73, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1e30, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1e31, .a=0x25, .x=0x84, .y=0x07, .sp=0x73, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1e30, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1e30, .value=0x20, .type=IO_READ},
        {.addr=0x1e31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xd3e0, .a=0x65, .x=0xdf, .y=0x17, .sp=0x1b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd3e0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd3e1, .a=0x65, .x=0xdf, .y=0x17, .sp=0x1b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xd3e0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd3e0, .value=0x20, .type=IO_READ},
        {.addr=0xd3e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xa45a, .a=0x35, .x=0x5d, .y=0x0e, .sp=0x89, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xa45a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa45b, .a=0x35, .x=0x5d, .y=0x0e, .sp=0x89, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa45a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa45a, .value=0x20, .type=IO_READ},
        {.addr=0xa45b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x6c85, .a=0x35, .x=0x06, .y=0x21, .sp=0xec, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6c85, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6c86, .a=0x35, .x=0x06, .y=0x21, .sp=0xec, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6c85, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6c85, .value=0x20, .type=IO_READ},
        {.addr=0x6c86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xca97, .a=0x86, .x=0x08, .y=0x97, .sp=0xb7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xca97, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xca98, .a=0x86, .x=0x08, .y=0x97, .sp=0xb7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xca97, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xca97, .value=0x20, .type=IO_READ},
        {.addr=0xca98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5c68, .a=0xe7, .x=0xdc, .y=0xc0, .sp=0x7b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5c68, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5c69, .a=0xe7, .x=0xdc, .y=0xc0, .sp=0x7b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5c68, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5c68, .value=0x20, .type=IO_READ},
        {.addr=0x5c69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x6ed6, .a=0xb2, .x=0x40, .y=0x2a, .sp=0x66, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6ed7, .a=0xb2, .x=0x40, .y=0x2a, .sp=0x66, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x6ed6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6ed6, .value=0x20, .type=IO_READ},
        {.addr=0x6ed7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x486f, .a=0xfd, .x=0xf3, .y=0x2c, .sp=0xdd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x486f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4870, .a=0xfd, .x=0xf3, .y=0x2c, .sp=0xdd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x486f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x486f, .value=0x20, .type=IO_READ},
        {.addr=0x4870, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1955, .a=0x2c, .x=0x98, .y=0x4b, .sp=0x54, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1955, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1956, .a=0x2c, .x=0x98, .y=0x4b, .sp=0x54, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1955, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1955, .value=0x20, .type=IO_READ},
        {.addr=0x1956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x0a4e, .a=0xec, .x=0x93, .y=0x5f, .sp=0x35, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0a4e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0a4f, .a=0xec, .x=0x93, .y=0x5f, .sp=0x35, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0a4e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0a4e, .value=0x20, .type=IO_READ},
        {.addr=0x0a4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x9b5e, .a=0xe3, .x=0x04, .y=0x58, .sp=0xa5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9b5e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9b5f, .a=0xe3, .x=0x04, .y=0x58, .sp=0xa5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9b5e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9b5e, .value=0x20, .type=IO_READ},
        {.addr=0x9b5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x9a3d, .a=0x0e, .x=0x6b, .y=0x19, .sp=0x61, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9a3d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9a3e, .a=0x0e, .x=0x6b, .y=0x19, .sp=0x61, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9a3d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9a3d, .value=0x20, .type=IO_READ},
        {.addr=0x9a3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x4caa, .a=0x9e, .x=0x63, .y=0x02, .sp=0x05, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4caa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4cab, .a=0x9e, .x=0x63, .y=0x02, .sp=0x05, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4caa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4caa, .value=0x20, .type=IO_READ},
        {.addr=0x4cab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8cb8, .a=0x06, .x=0x8f, .y=0x41, .sp=0x84, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8cb9, .a=0x06, .x=0x8f, .y=0x41, .sp=0x84, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x8cb8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8cb8, .value=0x20, .type=IO_READ},
        {.addr=0x8cb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x7b61, .a=0x49, .x=0x92, .y=0xf5, .sp=0xdd, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7b61, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7b62, .a=0x49, .x=0x92, .y=0xf5, .sp=0xdd, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7b61, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7b61, .value=0x20, .type=IO_READ},
        {.addr=0x7b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xf0a2, .a=0xf2, .x=0x5b, .y=0x82, .sp=0xfa, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf0a3, .a=0xf2, .x=0x5b, .y=0x82, .sp=0xfa, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xf0a2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf0a2, .value=0x20, .type=IO_READ},
        {.addr=0xf0a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x2b53, .a=0xc1, .x=0x2e, .y=0x8c, .sp=0x2e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2b53, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2b54, .a=0xc1, .x=0x2e, .y=0x8c, .sp=0x2e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2b53, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2b53, .value=0x20, .type=IO_READ},
        {.addr=0x2b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x73de, .a=0x04, .x=0x5e, .y=0x66, .sp=0xc9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x73de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x73df, .a=0x04, .x=0x5e, .y=0x66, .sp=0xc9, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x73de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x73de, .value=0x20, .type=IO_READ},
        {.addr=0x73df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x3a75, .a=0xed, .x=0x07, .y=0x2a, .sp=0x46, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3a75, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3a76, .a=0xed, .x=0x07, .y=0x2a, .sp=0x46, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3a75, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3a75, .value=0x20, .type=IO_READ},
        {.addr=0x3a76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x1f99, .a=0x80, .x=0xd8, .y=0xd4, .sp=0x49, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f99, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1f9a, .a=0x80, .x=0xd8, .y=0xd4, .sp=0x49, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x1f99, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1f99, .value=0x20, .type=IO_READ},
        {.addr=0x1f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x7c6d, .a=0x4e, .x=0xf2, .y=0x7f, .sp=0x57, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7c6e, .a=0x4e, .x=0xf2, .y=0x7f, .sp=0x57, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x7c6d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7c6d, .value=0x20, .type=IO_READ},
        {.addr=0x7c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x038d, .a=0x75, .x=0xd7, .y=0x02, .sp=0xf0, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x038d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x038e, .a=0x75, .x=0xd7, .y=0x02, .sp=0xf0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x038d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x038d, .value=0x20, .type=IO_READ},
        {.addr=0x038e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x0df5, .a=0x6a, .x=0x24, .y=0x8c, .sp=0x33, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0df5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0df6, .a=0x6a, .x=0x24, .y=0x8c, .sp=0x33, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0df5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0df5, .value=0x20, .type=IO_READ},
        {.addr=0x0df6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x60e4, .a=0x03, .x=0x5c, .y=0xc6, .sp=0x95, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x60e4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x60e5, .a=0x03, .x=0x5c, .y=0xc6, .sp=0x95, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x60e4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x60e4, .value=0x20, .type=IO_READ},
        {.addr=0x60e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xb4f5, .a=0xe7, .x=0x9a, .y=0xf4, .sp=0x1d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb4f6, .a=0xe7, .x=0x9a, .y=0xf4, .sp=0x1d, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xb4f5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb4f5, .value=0x20, .type=IO_READ},
        {.addr=0xb4f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x4836, .a=0x04, .x=0x37, .y=0xc6, .sp=0x4e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4836, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4837, .a=0x04, .x=0x37, .y=0xc6, .sp=0x4e, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x4836, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4836, .value=0x20, .type=IO_READ},
        {.addr=0x4837, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x7d0d, .a=0xa5, .x=0x30, .y=0xe7, .sp=0x6c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7d0e, .a=0xa5, .x=0x30, .y=0xe7, .sp=0x6c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x7d0d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7d0d, .value=0x20, .type=IO_READ},
        {.addr=0x7d0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xdf15, .a=0xb4, .x=0x12, .y=0x18, .sp=0xee, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xdf15, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdf16, .a=0xb4, .x=0x12, .y=0x18, .sp=0xee, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xdf15, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdf15, .value=0x20, .type=IO_READ},
        {.addr=0xdf16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x3289, .a=0x09, .x=0x8a, .y=0xbb, .sp=0x65, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3289, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0x09, .x=0x8a, .y=0xbb, .sp=0x65, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x3289, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3289, .value=0x20, .type=IO_READ},
        {.addr=0x328a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x8d76, .a=0x42, .x=0x6f, .y=0xeb, .sp=0x83, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8d76, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8d77, .a=0x42, .x=0x6f, .y=0xeb, .sp=0x83, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8d76, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8d76, .value=0x20, .type=IO_READ},
        {.addr=0x8d77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x7619, .a=0x3c, .x=0x2c, .y=0x09, .sp=0xad, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7619, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x761a, .a=0x3c, .x=0x2c, .y=0x09, .sp=0xad, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x7619, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7619, .value=0x20, .type=IO_READ},
        {.addr=0x761a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8267, .a=0x61, .x=0xc7, .y=0x21, .sp=0x51, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x8267, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8268, .a=0x61, .x=0xc7, .y=0x21, .sp=0x51, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x8267, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8267, .value=0x20, .type=IO_READ},
        {.addr=0x8268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xc70e, .a=0xc5, .x=0x6b, .y=0x73, .sp=0xe8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc70e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc70f, .a=0xc5, .x=0x6b, .y=0x73, .sp=0xe8, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc70e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc70e, .value=0x20, .type=IO_READ},
        {.addr=0xc70f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x40e9, .a=0xc0, .x=0xb1, .y=0xd6, .sp=0x9a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x40e9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x40ea, .a=0xc0, .x=0xb1, .y=0xd6, .sp=0x9a, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x40e9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x40e9, .value=0x20, .type=IO_READ},
        {.addr=0x40ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0a54, .a=0xa0, .x=0xa1, .y=0x0b, .sp=0x78, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0a54, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0a55, .a=0xa0, .x=0xa1, .y=0x0b, .sp=0x78, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0a54, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0a54, .value=0x20, .type=IO_READ},
        {.addr=0x0a55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xd84c, .a=0x5e, .x=0x87, .y=0x97, .sp=0xcf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd84c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd84d, .a=0x5e, .x=0x87, .y=0x97, .sp=0xcf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xd84c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd84c, .value=0x20, .type=IO_READ},
        {.addr=0xd84d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x1ae3, .a=0xb8, .x=0xb7, .y=0x58, .sp=0x2f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1ae4, .a=0xb8, .x=0xb7, .y=0x58, .sp=0x2f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1ae3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1ae3, .value=0x20, .type=IO_READ},
        {.addr=0x1ae4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xebc0, .a=0x07, .x=0x4d, .y=0xe8, .sp=0x54, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xebc0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xebc1, .a=0x07, .x=0x4d, .y=0xe8, .sp=0x54, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xebc0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xebc0, .value=0x20, .type=IO_READ},
        {.addr=0xebc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0300) {
    const struct CPU_State initial_cpu = {.pc=0x290d, .a=0xbc, .x=0x76, .y=0xc3, .sp=0xd4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x290d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x290e, .a=0xbc, .x=0x76, .y=0xc3, .sp=0xd4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x290d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x290d, .value=0x20, .type=IO_READ},
        {.addr=0x290e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0301) {
    const struct CPU_State initial_cpu = {.pc=0x556b, .a=0xa5, .x=0x4c, .y=0x3a, .sp=0xfd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x556b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x556c, .a=0xa5, .x=0x4c, .y=0x3a, .sp=0xfd, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x556b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x556b, .value=0x20, .type=IO_READ},
        {.addr=0x556c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0302) {
    const struct CPU_State initial_cpu = {.pc=0x93dc, .a=0x90, .x=0x6f, .y=0xdc, .sp=0x92, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x93dc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x93dd, .a=0x90, .x=0x6f, .y=0xdc, .sp=0x92, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x93dc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x93dc, .value=0x20, .type=IO_READ},
        {.addr=0x93dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0303) {
    const struct CPU_State initial_cpu = {.pc=0x74d8, .a=0xc6, .x=0xbe, .y=0x99, .sp=0x8f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x74d8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x74d9, .a=0xc6, .x=0xbe, .y=0x99, .sp=0x8f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x74d8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x74d8, .value=0x20, .type=IO_READ},
        {.addr=0x74d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0304) {
    const struct CPU_State initial_cpu = {.pc=0x3988, .a=0x52, .x=0xec, .y=0xd5, .sp=0x0f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3988, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3989, .a=0x52, .x=0xec, .y=0xd5, .sp=0x0f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3988, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3988, .value=0x20, .type=IO_READ},
        {.addr=0x3989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0305) {
    const struct CPU_State initial_cpu = {.pc=0x9ea0, .a=0xf4, .x=0xa1, .y=0x90, .sp=0xa3, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9ea1, .a=0xf4, .x=0xa1, .y=0x90, .sp=0xa3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9ea0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ea0, .value=0x20, .type=IO_READ},
        {.addr=0x9ea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1092, .a=0x15, .x=0x77, .y=0xbd, .sp=0xc3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x1092, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1093, .a=0x15, .x=0x77, .y=0xbd, .sp=0xc3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1092, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1092, .value=0x20, .type=IO_READ},
        {.addr=0x1093, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0307) {
    const struct CPU_State initial_cpu = {.pc=0xf723, .a=0x26, .x=0x96, .y=0x17, .sp=0xca, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf723, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf724, .a=0x26, .x=0x96, .y=0x17, .sp=0xca, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf723, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf723, .value=0x20, .type=IO_READ},
        {.addr=0xf724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0308) {
    const struct CPU_State initial_cpu = {.pc=0xa4ef, .a=0xf4, .x=0x67, .y=0x49, .sp=0x39, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ef, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4f0, .a=0xf4, .x=0x67, .y=0x49, .sp=0x39, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa4ef, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4ef, .value=0x20, .type=IO_READ},
        {.addr=0xa4f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0309) {
    const struct CPU_State initial_cpu = {.pc=0xf37c, .a=0x91, .x=0xad, .y=0x63, .sp=0x35, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf37c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf37d, .a=0x91, .x=0xad, .y=0x63, .sp=0x35, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf37c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf37c, .value=0x20, .type=IO_READ},
        {.addr=0xf37d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030A) {
    const struct CPU_State initial_cpu = {.pc=0x56f5, .a=0x58, .x=0x81, .y=0xbf, .sp=0x81, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x56f5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x56f6, .a=0x58, .x=0x81, .y=0xbf, .sp=0x81, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x56f5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x56f5, .value=0x20, .type=IO_READ},
        {.addr=0x56f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030B) {
    const struct CPU_State initial_cpu = {.pc=0xd99a, .a=0xa1, .x=0xae, .y=0x6d, .sp=0xa4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd99a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd99b, .a=0xa1, .x=0xae, .y=0x6d, .sp=0xa4, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd99a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd99a, .value=0x20, .type=IO_READ},
        {.addr=0xd99b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd498, .a=0x40, .x=0x71, .y=0x83, .sp=0x93, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd498, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd499, .a=0x40, .x=0x71, .y=0x83, .sp=0x93, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd498, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd498, .value=0x20, .type=IO_READ},
        {.addr=0xd499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030D) {
    const struct CPU_State initial_cpu = {.pc=0xd0e9, .a=0x8a, .x=0x05, .y=0xf6, .sp=0x73, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0x8a, .x=0x05, .y=0xf6, .sp=0x73, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xd0e9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd0e9, .value=0x20, .type=IO_READ},
        {.addr=0xd0ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030E) {
    const struct CPU_State initial_cpu = {.pc=0xe7e1, .a=0x05, .x=0xaa, .y=0xa4, .sp=0x0f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe7e2, .a=0x05, .x=0xaa, .y=0xa4, .sp=0x0f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xe7e1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe7e1, .value=0x20, .type=IO_READ},
        {.addr=0xe7e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_030F) {
    const struct CPU_State initial_cpu = {.pc=0x3934, .a=0x2b, .x=0x90, .y=0x0d, .sp=0x7a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3934, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3935, .a=0x2b, .x=0x90, .y=0x0d, .sp=0x7a, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x3934, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3934, .value=0x20, .type=IO_READ},
        {.addr=0x3935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0310) {
    const struct CPU_State initial_cpu = {.pc=0x7253, .a=0xe6, .x=0x47, .y=0x43, .sp=0x7f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7253, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7254, .a=0xe6, .x=0x47, .y=0x43, .sp=0x7f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x7253, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7253, .value=0x20, .type=IO_READ},
        {.addr=0x7254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0311) {
    const struct CPU_State initial_cpu = {.pc=0x1767, .a=0x7c, .x=0xec, .y=0x21, .sp=0x06, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1767, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1768, .a=0x7c, .x=0xec, .y=0x21, .sp=0x06, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x1767, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1767, .value=0x20, .type=IO_READ},
        {.addr=0x1768, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0312) {
    const struct CPU_State initial_cpu = {.pc=0x8e78, .a=0x0a, .x=0x61, .y=0xce, .sp=0xa1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8e78, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8e79, .a=0x0a, .x=0x61, .y=0xce, .sp=0xa1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x8e78, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8e78, .value=0x20, .type=IO_READ},
        {.addr=0x8e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0313) {
    const struct CPU_State initial_cpu = {.pc=0xe109, .a=0x48, .x=0x0d, .y=0x41, .sp=0x5f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe109, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe10a, .a=0x48, .x=0x0d, .y=0x41, .sp=0x5f, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xe109, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe109, .value=0x20, .type=IO_READ},
        {.addr=0xe10a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0314) {
    const struct CPU_State initial_cpu = {.pc=0xc356, .a=0xc0, .x=0x42, .y=0x41, .sp=0x09, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xc356, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc357, .a=0xc0, .x=0x42, .y=0x41, .sp=0x09, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc356, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc356, .value=0x20, .type=IO_READ},
        {.addr=0xc357, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0315) {
    const struct CPU_State initial_cpu = {.pc=0x0242, .a=0x6e, .x=0x6b, .y=0x97, .sp=0x1f, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0242, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0243, .a=0x6e, .x=0x6b, .y=0x97, .sp=0x1f, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0242, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0242, .value=0x20, .type=IO_READ},
        {.addr=0x0243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0316) {
    const struct CPU_State initial_cpu = {.pc=0x78dc, .a=0xd6, .x=0xcf, .y=0x10, .sp=0x2d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x78dc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x78dd, .a=0xd6, .x=0xcf, .y=0x10, .sp=0x2d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x78dc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x78dc, .value=0x20, .type=IO_READ},
        {.addr=0x78dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0317) {
    const struct CPU_State initial_cpu = {.pc=0x9bee, .a=0x63, .x=0xa4, .y=0xf2, .sp=0xac, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9bee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9bef, .a=0x63, .x=0xa4, .y=0xf2, .sp=0xac, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9bee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9bee, .value=0x20, .type=IO_READ},
        {.addr=0x9bef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0318) {
    const struct CPU_State initial_cpu = {.pc=0x282e, .a=0xe4, .x=0x93, .y=0xb7, .sp=0x64, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x282e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x282f, .a=0xe4, .x=0x93, .y=0xb7, .sp=0x64, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x282e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x282e, .value=0x20, .type=IO_READ},
        {.addr=0x282f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2554, .a=0xf7, .x=0x90, .y=0xf2, .sp=0xf6, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2554, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2555, .a=0xf7, .x=0x90, .y=0xf2, .sp=0xf6, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x2554, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2554, .value=0x20, .type=IO_READ},
        {.addr=0x2555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031A) {
    const struct CPU_State initial_cpu = {.pc=0x87be, .a=0xb5, .x=0xb2, .y=0x3e, .sp=0x11, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x87be, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x87bf, .a=0xb5, .x=0xb2, .y=0x3e, .sp=0x11, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x87be, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x87be, .value=0x20, .type=IO_READ},
        {.addr=0x87bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031B) {
    const struct CPU_State initial_cpu = {.pc=0x8a1f, .a=0xb2, .x=0x7a, .y=0xea, .sp=0x75, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8a20, .a=0xb2, .x=0x7a, .y=0xea, .sp=0x75, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8a1f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8a1f, .value=0x20, .type=IO_READ},
        {.addr=0x8a20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3d4d, .a=0x00, .x=0x92, .y=0x7e, .sp=0xd2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3d4d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3d4e, .a=0x00, .x=0x92, .y=0x7e, .sp=0xd2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3d4d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3d4d, .value=0x20, .type=IO_READ},
        {.addr=0x3d4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031D) {
    const struct CPU_State initial_cpu = {.pc=0xc50b, .a=0x72, .x=0xe1, .y=0x7c, .sp=0x7b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc50b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc50c, .a=0x72, .x=0xe1, .y=0x7c, .sp=0x7b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc50b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc50b, .value=0x20, .type=IO_READ},
        {.addr=0xc50c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031E) {
    const struct CPU_State initial_cpu = {.pc=0x55f8, .a=0x6f, .x=0x7c, .y=0x89, .sp=0x3a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x55f8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x55f9, .a=0x6f, .x=0x7c, .y=0x89, .sp=0x3a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x55f8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x55f8, .value=0x20, .type=IO_READ},
        {.addr=0x55f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_031F) {
    const struct CPU_State initial_cpu = {.pc=0x0e40, .a=0xe0, .x=0xe1, .y=0x2c, .sp=0xfe, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e40, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0e41, .a=0xe0, .x=0xe1, .y=0x2c, .sp=0xfe, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0e40, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0e40, .value=0x20, .type=IO_READ},
        {.addr=0x0e41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0320) {
    const struct CPU_State initial_cpu = {.pc=0x5e34, .a=0xe0, .x=0x8e, .y=0x0d, .sp=0xb4, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5e34, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5e35, .a=0xe0, .x=0x8e, .y=0x0d, .sp=0xb4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5e34, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5e34, .value=0x20, .type=IO_READ},
        {.addr=0x5e35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0321) {
    const struct CPU_State initial_cpu = {.pc=0x5f5a, .a=0x9c, .x=0xe2, .y=0x76, .sp=0x65, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5f5b, .a=0x9c, .x=0xe2, .y=0x76, .sp=0x65, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x5f5a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5f5a, .value=0x20, .type=IO_READ},
        {.addr=0x5f5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0322) {
    const struct CPU_State initial_cpu = {.pc=0x5f0f, .a=0xec, .x=0x60, .y=0xf8, .sp=0x24, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5f10, .a=0xec, .x=0x60, .y=0xf8, .sp=0x24, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x5f0f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5f0f, .value=0x20, .type=IO_READ},
        {.addr=0x5f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0323) {
    const struct CPU_State initial_cpu = {.pc=0xf20f, .a=0xb7, .x=0x0c, .y=0xbf, .sp=0x8f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf20f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf210, .a=0xb7, .x=0x0c, .y=0xbf, .sp=0x8f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf20f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf20f, .value=0x20, .type=IO_READ},
        {.addr=0xf210, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbf0a, .a=0x69, .x=0x07, .y=0x3c, .sp=0x3a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xbf0a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbf0b, .a=0x69, .x=0x07, .y=0x3c, .sp=0x3a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xbf0a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbf0a, .value=0x20, .type=IO_READ},
        {.addr=0xbf0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0325) {
    const struct CPU_State initial_cpu = {.pc=0x54c5, .a=0x12, .x=0x1a, .y=0x54, .sp=0x7f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x54c5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x54c6, .a=0x12, .x=0x1a, .y=0x54, .sp=0x7f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x54c5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x54c5, .value=0x20, .type=IO_READ},
        {.addr=0x54c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0326) {
    const struct CPU_State initial_cpu = {.pc=0x4330, .a=0x2f, .x=0xa4, .y=0x76, .sp=0x29, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4330, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4331, .a=0x2f, .x=0xa4, .y=0x76, .sp=0x29, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x4330, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4330, .value=0x20, .type=IO_READ},
        {.addr=0x4331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0327) {
    const struct CPU_State initial_cpu = {.pc=0x02f5, .a=0x2e, .x=0xee, .y=0x3b, .sp=0xc4, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x02f5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x02f6, .a=0x2e, .x=0xee, .y=0x3b, .sp=0xc4, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x02f5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x02f5, .value=0x20, .type=IO_READ},
        {.addr=0x02f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0328) {
    const struct CPU_State initial_cpu = {.pc=0x7f38, .a=0xdf, .x=0x4f, .y=0x35, .sp=0x6e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x7f38, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7f39, .a=0xdf, .x=0x4f, .y=0x35, .sp=0x6e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7f38, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7f38, .value=0x20, .type=IO_READ},
        {.addr=0x7f39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0329) {
    const struct CPU_State initial_cpu = {.pc=0x7e6b, .a=0x80, .x=0xbb, .y=0xab, .sp=0xc6, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7e6b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7e6c, .a=0x80, .x=0xbb, .y=0xab, .sp=0xc6, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x7e6b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7e6b, .value=0x20, .type=IO_READ},
        {.addr=0x7e6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5f21, .a=0xbd, .x=0x93, .y=0x03, .sp=0xe7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5f21, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5f22, .a=0xbd, .x=0x93, .y=0x03, .sp=0xe7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5f21, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5f21, .value=0x20, .type=IO_READ},
        {.addr=0x5f22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032B) {
    const struct CPU_State initial_cpu = {.pc=0x9528, .a=0xf0, .x=0xc3, .y=0xff, .sp=0x0e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9528, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9529, .a=0xf0, .x=0xc3, .y=0xff, .sp=0x0e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9528, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9528, .value=0x20, .type=IO_READ},
        {.addr=0x9529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032C) {
    const struct CPU_State initial_cpu = {.pc=0xa750, .a=0xa9, .x=0x58, .y=0x1e, .sp=0x10, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa750, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa751, .a=0xa9, .x=0x58, .y=0x1e, .sp=0x10, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa750, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa750, .value=0x20, .type=IO_READ},
        {.addr=0xa751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032D) {
    const struct CPU_State initial_cpu = {.pc=0x34de, .a=0x49, .x=0x63, .y=0x0d, .sp=0xda, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x34de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x34df, .a=0x49, .x=0x63, .y=0x0d, .sp=0xda, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x34de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x34de, .value=0x20, .type=IO_READ},
        {.addr=0x34df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032E) {
    const struct CPU_State initial_cpu = {.pc=0xf192, .a=0xff, .x=0x50, .y=0xdc, .sp=0x98, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf192, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf193, .a=0xff, .x=0x50, .y=0xdc, .sp=0x98, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xf192, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf192, .value=0x20, .type=IO_READ},
        {.addr=0xf193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_032F) {
    const struct CPU_State initial_cpu = {.pc=0x1223, .a=0xd3, .x=0x5e, .y=0xc4, .sp=0x98, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1223, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1224, .a=0xd3, .x=0x5e, .y=0xc4, .sp=0x98, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1223, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1223, .value=0x20, .type=IO_READ},
        {.addr=0x1224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0330) {
    const struct CPU_State initial_cpu = {.pc=0x79b6, .a=0x44, .x=0x80, .y=0x85, .sp=0xb5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x79b6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x79b7, .a=0x44, .x=0x80, .y=0x85, .sp=0xb5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x79b6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x79b6, .value=0x20, .type=IO_READ},
        {.addr=0x79b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0331) {
    const struct CPU_State initial_cpu = {.pc=0x9ce7, .a=0xdd, .x=0x9f, .y=0x0b, .sp=0xaf, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9ce8, .a=0xdd, .x=0x9f, .y=0x0b, .sp=0xaf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9ce7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ce7, .value=0x20, .type=IO_READ},
        {.addr=0x9ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0332) {
    const struct CPU_State initial_cpu = {.pc=0xa043, .a=0x21, .x=0x39, .y=0x03, .sp=0x2c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa043, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa044, .a=0x21, .x=0x39, .y=0x03, .sp=0x2c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa043, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa043, .value=0x20, .type=IO_READ},
        {.addr=0xa044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0333) {
    const struct CPU_State initial_cpu = {.pc=0x674e, .a=0x6f, .x=0xb4, .y=0x9a, .sp=0x42, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x674e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x674f, .a=0x6f, .x=0xb4, .y=0x9a, .sp=0x42, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x674e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x674e, .value=0x20, .type=IO_READ},
        {.addr=0x674f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0334) {
    const struct CPU_State initial_cpu = {.pc=0x3af2, .a=0x77, .x=0x3e, .y=0x2e, .sp=0x49, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x3af2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3af3, .a=0x77, .x=0x3e, .y=0x2e, .sp=0x49, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x3af2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3af2, .value=0x20, .type=IO_READ},
        {.addr=0x3af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0335) {
    const struct CPU_State initial_cpu = {.pc=0xd90b, .a=0x03, .x=0x1c, .y=0x26, .sp=0x22, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd90b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd90c, .a=0x03, .x=0x1c, .y=0x26, .sp=0x22, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd90b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd90b, .value=0x20, .type=IO_READ},
        {.addr=0xd90c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0336) {
    const struct CPU_State initial_cpu = {.pc=0x2ca5, .a=0xaa, .x=0x4e, .y=0xa4, .sp=0xe1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2ca6, .a=0xaa, .x=0x4e, .y=0xa4, .sp=0xe1, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x2ca5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2ca5, .value=0x20, .type=IO_READ},
        {.addr=0x2ca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0337) {
    const struct CPU_State initial_cpu = {.pc=0x75a3, .a=0x19, .x=0xd9, .y=0x95, .sp=0x9f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x75a3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x75a4, .a=0x19, .x=0xd9, .y=0x95, .sp=0x9f, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x75a3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x75a3, .value=0x20, .type=IO_READ},
        {.addr=0x75a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0338) {
    const struct CPU_State initial_cpu = {.pc=0x98e7, .a=0x34, .x=0xc7, .y=0xcf, .sp=0x42, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x98e7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x98e8, .a=0x34, .x=0xc7, .y=0xcf, .sp=0x42, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x98e7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x98e7, .value=0x20, .type=IO_READ},
        {.addr=0x98e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0339) {
    const struct CPU_State initial_cpu = {.pc=0xe4de, .a=0xf7, .x=0xd7, .y=0xc0, .sp=0x6c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe4de, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe4df, .a=0xf7, .x=0xd7, .y=0xc0, .sp=0x6c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe4de, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe4de, .value=0x20, .type=IO_READ},
        {.addr=0xe4df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033A) {
    const struct CPU_State initial_cpu = {.pc=0xa70b, .a=0x5d, .x=0x9a, .y=0xa2, .sp=0x33, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa70b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa70c, .a=0x5d, .x=0x9a, .y=0xa2, .sp=0x33, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa70b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa70b, .value=0x20, .type=IO_READ},
        {.addr=0xa70c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033B) {
    const struct CPU_State initial_cpu = {.pc=0x850e, .a=0x67, .x=0x34, .y=0xe8, .sp=0x3c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x850e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x850f, .a=0x67, .x=0x34, .y=0xe8, .sp=0x3c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x850e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x850e, .value=0x20, .type=IO_READ},
        {.addr=0x850f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa179, .a=0x7b, .x=0x36, .y=0x84, .sp=0xa7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa179, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa17a, .a=0x7b, .x=0x36, .y=0x84, .sp=0xa7, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xa179, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa179, .value=0x20, .type=IO_READ},
        {.addr=0xa17a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033D) {
    const struct CPU_State initial_cpu = {.pc=0xafd5, .a=0xd0, .x=0x11, .y=0xc2, .sp=0xb6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xafd5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xafd6, .a=0xd0, .x=0x11, .y=0xc2, .sp=0xb6, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xafd5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xafd5, .value=0x20, .type=IO_READ},
        {.addr=0xafd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033E) {
    const struct CPU_State initial_cpu = {.pc=0x9ada, .a=0x86, .x=0x4b, .y=0x6e, .sp=0xe3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9ada, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9adb, .a=0x86, .x=0x4b, .y=0x6e, .sp=0xe3, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9ada, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ada, .value=0x20, .type=IO_READ},
        {.addr=0x9adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_033F) {
    const struct CPU_State initial_cpu = {.pc=0x79a9, .a=0x50, .x=0x30, .y=0x2e, .sp=0x4d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x79a9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x79aa, .a=0x50, .x=0x30, .y=0x2e, .sp=0x4d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x79a9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x79a9, .value=0x20, .type=IO_READ},
        {.addr=0x79aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0340) {
    const struct CPU_State initial_cpu = {.pc=0x2f4a, .a=0x9b, .x=0x92, .y=0xd7, .sp=0x4c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2f4b, .a=0x9b, .x=0x92, .y=0xd7, .sp=0x4c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2f4a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2f4a, .value=0x20, .type=IO_READ},
        {.addr=0x2f4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0341) {
    const struct CPU_State initial_cpu = {.pc=0x087f, .a=0x88, .x=0x40, .y=0x06, .sp=0x75, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x087f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0880, .a=0x88, .x=0x40, .y=0x06, .sp=0x75, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x087f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x087f, .value=0x20, .type=IO_READ},
        {.addr=0x0880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0342) {
    const struct CPU_State initial_cpu = {.pc=0x95a0, .a=0xd5, .x=0x85, .y=0x85, .sp=0xfb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x95a0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x95a1, .a=0xd5, .x=0x85, .y=0x85, .sp=0xfb, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x95a0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x95a0, .value=0x20, .type=IO_READ},
        {.addr=0x95a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0343) {
    const struct CPU_State initial_cpu = {.pc=0x799d, .a=0x29, .x=0x52, .y=0xb8, .sp=0x33, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x799d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x799e, .a=0x29, .x=0x52, .y=0xb8, .sp=0x33, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x799d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x799d, .value=0x20, .type=IO_READ},
        {.addr=0x799e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0344) {
    const struct CPU_State initial_cpu = {.pc=0x094a, .a=0xe9, .x=0xd5, .y=0xee, .sp=0x53, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x094a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x094b, .a=0xe9, .x=0xd5, .y=0xee, .sp=0x53, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x094a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x094a, .value=0x20, .type=IO_READ},
        {.addr=0x094b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0345) {
    const struct CPU_State initial_cpu = {.pc=0xdff8, .a=0x1f, .x=0x03, .y=0x73, .sp=0xa4, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdff8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdff9, .a=0x1f, .x=0x03, .y=0x73, .sp=0xa4, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xdff8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdff8, .value=0x20, .type=IO_READ},
        {.addr=0xdff9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0346) {
    const struct CPU_State initial_cpu = {.pc=0xb7fe, .a=0xfd, .x=0x18, .y=0x3d, .sp=0x24, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fe, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb7ff, .a=0xfd, .x=0x18, .y=0x3d, .sp=0x24, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb7fe, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb7fe, .value=0x20, .type=IO_READ},
        {.addr=0xb7ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0347) {
    const struct CPU_State initial_cpu = {.pc=0xd9f7, .a=0x90, .x=0xe2, .y=0xe5, .sp=0xc8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd9f8, .a=0x90, .x=0xe2, .y=0xe5, .sp=0xc8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xd9f7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd9f7, .value=0x20, .type=IO_READ},
        {.addr=0xd9f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0348) {
    const struct CPU_State initial_cpu = {.pc=0x0d74, .a=0x36, .x=0x73, .y=0xca, .sp=0x25, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0d74, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0d75, .a=0x36, .x=0x73, .y=0xca, .sp=0x25, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0d74, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0d74, .value=0x20, .type=IO_READ},
        {.addr=0x0d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0349) {
    const struct CPU_State initial_cpu = {.pc=0xdf37, .a=0xf4, .x=0x63, .y=0x55, .sp=0x46, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xdf37, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdf38, .a=0xf4, .x=0x63, .y=0x55, .sp=0x46, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xdf37, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdf37, .value=0x20, .type=IO_READ},
        {.addr=0xdf38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034A) {
    const struct CPU_State initial_cpu = {.pc=0x7804, .a=0x55, .x=0xcc, .y=0xe1, .sp=0xc1, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7804, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7805, .a=0x55, .x=0xcc, .y=0xe1, .sp=0xc1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7804, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7804, .value=0x20, .type=IO_READ},
        {.addr=0x7805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034B) {
    const struct CPU_State initial_cpu = {.pc=0xec59, .a=0x75, .x=0x99, .y=0xc7, .sp=0xcd, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xec59, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xec5a, .a=0x75, .x=0x99, .y=0xc7, .sp=0xcd, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xec59, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xec59, .value=0x20, .type=IO_READ},
        {.addr=0xec5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034C) {
    const struct CPU_State initial_cpu = {.pc=0x2127, .a=0x94, .x=0x45, .y=0xfa, .sp=0x76, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2127, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2128, .a=0x94, .x=0x45, .y=0xfa, .sp=0x76, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x2127, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2127, .value=0x20, .type=IO_READ},
        {.addr=0x2128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034D) {
    const struct CPU_State initial_cpu = {.pc=0xc7ed, .a=0xbb, .x=0xe9, .y=0x9a, .sp=0x94, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ed, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc7ee, .a=0xbb, .x=0xe9, .y=0x9a, .sp=0x94, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc7ed, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc7ed, .value=0x20, .type=IO_READ},
        {.addr=0xc7ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034E) {
    const struct CPU_State initial_cpu = {.pc=0x62eb, .a=0x73, .x=0x22, .y=0x3a, .sp=0x2b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x62eb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x62ec, .a=0x73, .x=0x22, .y=0x3a, .sp=0x2b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x62eb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x62eb, .value=0x20, .type=IO_READ},
        {.addr=0x62ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_034F) {
    const struct CPU_State initial_cpu = {.pc=0x21cc, .a=0x64, .x=0xb2, .y=0xf4, .sp=0xfa, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x21cc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x21cd, .a=0x64, .x=0xb2, .y=0xf4, .sp=0xfa, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x21cc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x21cc, .value=0x20, .type=IO_READ},
        {.addr=0x21cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0350) {
    const struct CPU_State initial_cpu = {.pc=0x05c3, .a=0x0d, .x=0xc5, .y=0x74, .sp=0x7c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x05c3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x05c4, .a=0x0d, .x=0xc5, .y=0x74, .sp=0x7c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x05c3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x05c3, .value=0x20, .type=IO_READ},
        {.addr=0x05c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0351) {
    const struct CPU_State initial_cpu = {.pc=0x5aee, .a=0x91, .x=0x49, .y=0x60, .sp=0xc1, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5aee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5aef, .a=0x91, .x=0x49, .y=0x60, .sp=0xc1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5aee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5aee, .value=0x20, .type=IO_READ},
        {.addr=0x5aef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0352) {
    const struct CPU_State initial_cpu = {.pc=0x4fb1, .a=0x67, .x=0xdd, .y=0x95, .sp=0x78, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4fb2, .a=0x67, .x=0xdd, .y=0x95, .sp=0x78, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x4fb1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4fb1, .value=0x20, .type=IO_READ},
        {.addr=0x4fb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0353) {
    const struct CPU_State initial_cpu = {.pc=0x14a0, .a=0x0e, .x=0x5d, .y=0x1f, .sp=0x00, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x14a0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x14a1, .a=0x0e, .x=0x5d, .y=0x1f, .sp=0x00, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x14a0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x14a0, .value=0x20, .type=IO_READ},
        {.addr=0x14a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0354) {
    const struct CPU_State initial_cpu = {.pc=0x51f7, .a=0x70, .x=0x94, .y=0x05, .sp=0x0d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x51f7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x51f8, .a=0x70, .x=0x94, .y=0x05, .sp=0x0d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x51f7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x51f7, .value=0x20, .type=IO_READ},
        {.addr=0x51f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0355) {
    const struct CPU_State initial_cpu = {.pc=0x72ba, .a=0x6a, .x=0xe5, .y=0x32, .sp=0x31, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x72ba, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x72bb, .a=0x6a, .x=0xe5, .y=0x32, .sp=0x31, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x72ba, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x72ba, .value=0x20, .type=IO_READ},
        {.addr=0x72bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0356) {
    const struct CPU_State initial_cpu = {.pc=0x0aa4, .a=0x3e, .x=0x1b, .y=0x94, .sp=0x6a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0aa5, .a=0x3e, .x=0x1b, .y=0x94, .sp=0x6a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0aa4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0aa4, .value=0x20, .type=IO_READ},
        {.addr=0x0aa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0357) {
    const struct CPU_State initial_cpu = {.pc=0xf3ae, .a=0xec, .x=0x27, .y=0xcf, .sp=0x8a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ae, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf3af, .a=0xec, .x=0x27, .y=0xcf, .sp=0x8a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xf3ae, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf3ae, .value=0x20, .type=IO_READ},
        {.addr=0xf3af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0358) {
    const struct CPU_State initial_cpu = {.pc=0x8667, .a=0x10, .x=0xa8, .y=0x1d, .sp=0xb7, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x8667, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8668, .a=0x10, .x=0xa8, .y=0x1d, .sp=0xb7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8667, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8667, .value=0x20, .type=IO_READ},
        {.addr=0x8668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0359) {
    const struct CPU_State initial_cpu = {.pc=0xdad8, .a=0x52, .x=0x52, .y=0x86, .sp=0x01, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xdad8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdad9, .a=0x52, .x=0x52, .y=0x86, .sp=0x01, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xdad8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdad8, .value=0x20, .type=IO_READ},
        {.addr=0xdad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035A) {
    const struct CPU_State initial_cpu = {.pc=0x6908, .a=0xa4, .x=0x96, .y=0xd0, .sp=0xbf, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6908, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6909, .a=0xa4, .x=0x96, .y=0xd0, .sp=0xbf, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x6908, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6908, .value=0x20, .type=IO_READ},
        {.addr=0x6909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035B) {
    const struct CPU_State initial_cpu = {.pc=0xa60a, .a=0xb6, .x=0xa8, .y=0x09, .sp=0x7d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xa60a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa60b, .a=0xb6, .x=0xa8, .y=0x09, .sp=0x7d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa60a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa60a, .value=0x20, .type=IO_READ},
        {.addr=0xa60b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035C) {
    const struct CPU_State initial_cpu = {.pc=0x1325, .a=0x2c, .x=0x64, .y=0xbd, .sp=0x65, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1325, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1326, .a=0x2c, .x=0x64, .y=0xbd, .sp=0x65, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1325, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1325, .value=0x20, .type=IO_READ},
        {.addr=0x1326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6fd6, .a=0x79, .x=0x4e, .y=0xa9, .sp=0x04, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6fd6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6fd7, .a=0x79, .x=0x4e, .y=0xa9, .sp=0x04, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6fd6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6fd6, .value=0x20, .type=IO_READ},
        {.addr=0x6fd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035E) {
    const struct CPU_State initial_cpu = {.pc=0x86b3, .a=0x9e, .x=0x01, .y=0x87, .sp=0x40, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x86b3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x86b4, .a=0x9e, .x=0x01, .y=0x87, .sp=0x40, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x86b3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x86b3, .value=0x20, .type=IO_READ},
        {.addr=0x86b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_035F) {
    const struct CPU_State initial_cpu = {.pc=0x232f, .a=0x94, .x=0x43, .y=0x82, .sp=0x54, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x232f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2330, .a=0x94, .x=0x43, .y=0x82, .sp=0x54, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x232f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x232f, .value=0x20, .type=IO_READ},
        {.addr=0x2330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0360) {
    const struct CPU_State initial_cpu = {.pc=0x7d3c, .a=0x95, .x=0x05, .y=0xf0, .sp=0x7c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7d3d, .a=0x95, .x=0x05, .y=0xf0, .sp=0x7c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7d3c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7d3c, .value=0x20, .type=IO_READ},
        {.addr=0x7d3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4d79, .a=0x26, .x=0x1b, .y=0xa0, .sp=0xc6, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4d79, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4d7a, .a=0x26, .x=0x1b, .y=0xa0, .sp=0xc6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4d79, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4d79, .value=0x20, .type=IO_READ},
        {.addr=0x4d7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0362) {
    const struct CPU_State initial_cpu = {.pc=0xfaa5, .a=0x24, .x=0x36, .y=0x59, .sp=0x76, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfaa6, .a=0x24, .x=0x36, .y=0x59, .sp=0x76, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xfaa5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfaa5, .value=0x20, .type=IO_READ},
        {.addr=0xfaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0363) {
    const struct CPU_State initial_cpu = {.pc=0x570c, .a=0xff, .x=0xb7, .y=0x07, .sp=0xbc, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x570c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x570d, .a=0xff, .x=0xb7, .y=0x07, .sp=0xbc, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x570c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x570c, .value=0x20, .type=IO_READ},
        {.addr=0x570d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0364) {
    const struct CPU_State initial_cpu = {.pc=0x6c0f, .a=0x0f, .x=0x58, .y=0x30, .sp=0xca, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6c0f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6c10, .a=0x0f, .x=0x58, .y=0x30, .sp=0xca, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6c0f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6c0f, .value=0x20, .type=IO_READ},
        {.addr=0x6c10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0365) {
    const struct CPU_State initial_cpu = {.pc=0x22f4, .a=0xf5, .x=0x3d, .y=0x0a, .sp=0xf1, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x22f4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x22f5, .a=0xf5, .x=0x3d, .y=0x0a, .sp=0xf1, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x22f4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x22f4, .value=0x20, .type=IO_READ},
        {.addr=0x22f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0366) {
    const struct CPU_State initial_cpu = {.pc=0x7388, .a=0xa9, .x=0x84, .y=0x2c, .sp=0x40, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7388, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7389, .a=0xa9, .x=0x84, .y=0x2c, .sp=0x40, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7388, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7388, .value=0x20, .type=IO_READ},
        {.addr=0x7389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0367) {
    const struct CPU_State initial_cpu = {.pc=0x0736, .a=0x83, .x=0x80, .y=0xf0, .sp=0x7c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0736, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0737, .a=0x83, .x=0x80, .y=0xf0, .sp=0x7c, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0736, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0736, .value=0x20, .type=IO_READ},
        {.addr=0x0737, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0368) {
    const struct CPU_State initial_cpu = {.pc=0xba85, .a=0xfb, .x=0x39, .y=0x28, .sp=0xe4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xba85, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xba86, .a=0xfb, .x=0x39, .y=0x28, .sp=0xe4, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xba85, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xba85, .value=0x20, .type=IO_READ},
        {.addr=0xba86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0369) {
    const struct CPU_State initial_cpu = {.pc=0x5804, .a=0x05, .x=0xe2, .y=0xbd, .sp=0x97, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x5804, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5805, .a=0x05, .x=0xe2, .y=0xbd, .sp=0x97, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5804, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5804, .value=0x20, .type=IO_READ},
        {.addr=0x5805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036A) {
    const struct CPU_State initial_cpu = {.pc=0x0e16, .a=0xa3, .x=0x8b, .y=0x43, .sp=0x71, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0e16, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0e17, .a=0xa3, .x=0x8b, .y=0x43, .sp=0x71, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0e16, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0e16, .value=0x20, .type=IO_READ},
        {.addr=0x0e17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036B) {
    const struct CPU_State initial_cpu = {.pc=0xed13, .a=0x35, .x=0x09, .y=0x96, .sp=0x69, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xed13, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xed14, .a=0x35, .x=0x09, .y=0x96, .sp=0x69, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xed13, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xed13, .value=0x20, .type=IO_READ},
        {.addr=0xed14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036C) {
    const struct CPU_State initial_cpu = {.pc=0x4c02, .a=0xf6, .x=0x20, .y=0x4e, .sp=0x8f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4c02, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4c03, .a=0xf6, .x=0x20, .y=0x4e, .sp=0x8f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4c02, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4c02, .value=0x20, .type=IO_READ},
        {.addr=0x4c03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036D) {
    const struct CPU_State initial_cpu = {.pc=0x8719, .a=0x62, .x=0xfc, .y=0x4b, .sp=0x1a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8719, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x871a, .a=0x62, .x=0xfc, .y=0x4b, .sp=0x1a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8719, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8719, .value=0x20, .type=IO_READ},
        {.addr=0x871a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036E) {
    const struct CPU_State initial_cpu = {.pc=0xca5c, .a=0xe3, .x=0xc4, .y=0xc7, .sp=0x36, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xca5c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xca5d, .a=0xe3, .x=0xc4, .y=0xc7, .sp=0x36, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xca5c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xca5c, .value=0x20, .type=IO_READ},
        {.addr=0xca5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_036F) {
    const struct CPU_State initial_cpu = {.pc=0xde26, .a=0xec, .x=0x5e, .y=0xd3, .sp=0xbe, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xde26, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xde27, .a=0xec, .x=0x5e, .y=0xd3, .sp=0xbe, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xde26, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xde26, .value=0x20, .type=IO_READ},
        {.addr=0xde27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9929, .a=0xfb, .x=0x9b, .y=0xfa, .sp=0x54, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9929, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x992a, .a=0xfb, .x=0x9b, .y=0xfa, .sp=0x54, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9929, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9929, .value=0x20, .type=IO_READ},
        {.addr=0x992a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0371) {
    const struct CPU_State initial_cpu = {.pc=0x9ca5, .a=0xbb, .x=0x49, .y=0x29, .sp=0x8f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9ca5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9ca6, .a=0xbb, .x=0x49, .y=0x29, .sp=0x8f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9ca5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9ca5, .value=0x20, .type=IO_READ},
        {.addr=0x9ca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0372) {
    const struct CPU_State initial_cpu = {.pc=0x7d8a, .a=0x4f, .x=0xef, .y=0x7b, .sp=0x24, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7d8a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7d8b, .a=0x4f, .x=0xef, .y=0x7b, .sp=0x24, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x7d8a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7d8a, .value=0x20, .type=IO_READ},
        {.addr=0x7d8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0373) {
    const struct CPU_State initial_cpu = {.pc=0x344c, .a=0x0f, .x=0x2e, .y=0xad, .sp=0x2f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x344c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x344d, .a=0x0f, .x=0x2e, .y=0xad, .sp=0x2f, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x344c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x344c, .value=0x20, .type=IO_READ},
        {.addr=0x344d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0374) {
    const struct CPU_State initial_cpu = {.pc=0x4cad, .a=0x23, .x=0xc3, .y=0x0d, .sp=0x4a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cad, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4cae, .a=0x23, .x=0xc3, .y=0x0d, .sp=0x4a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4cad, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4cad, .value=0x20, .type=IO_READ},
        {.addr=0x4cae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0375) {
    const struct CPU_State initial_cpu = {.pc=0x7f32, .a=0xd3, .x=0xe8, .y=0xd4, .sp=0x8d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x7f32, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7f33, .a=0xd3, .x=0xe8, .y=0xd4, .sp=0x8d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7f32, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7f32, .value=0x20, .type=IO_READ},
        {.addr=0x7f33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0376) {
    const struct CPU_State initial_cpu = {.pc=0xe0f2, .a=0xf9, .x=0xaf, .y=0xd4, .sp=0x8b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe0f3, .a=0xf9, .x=0xaf, .y=0xd4, .sp=0x8b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xe0f2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe0f2, .value=0x20, .type=IO_READ},
        {.addr=0xe0f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0377) {
    const struct CPU_State initial_cpu = {.pc=0xd594, .a=0x79, .x=0x23, .y=0x6e, .sp=0xa4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd594, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd595, .a=0x79, .x=0x23, .y=0x6e, .sp=0xa4, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd594, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd594, .value=0x20, .type=IO_READ},
        {.addr=0xd595, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0378) {
    const struct CPU_State initial_cpu = {.pc=0x18fc, .a=0xc2, .x=0x51, .y=0x86, .sp=0x3a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x18fc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x18fd, .a=0xc2, .x=0x51, .y=0x86, .sp=0x3a, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x18fc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x18fc, .value=0x20, .type=IO_READ},
        {.addr=0x18fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0379) {
    const struct CPU_State initial_cpu = {.pc=0xd010, .a=0x45, .x=0xdb, .y=0x27, .sp=0x2d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd010, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd011, .a=0x45, .x=0xdb, .y=0x27, .sp=0x2d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd010, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd010, .value=0x20, .type=IO_READ},
        {.addr=0xd011, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037A) {
    const struct CPU_State initial_cpu = {.pc=0xea08, .a=0xd0, .x=0x7e, .y=0x20, .sp=0x78, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xea08, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xea09, .a=0xd0, .x=0x7e, .y=0x20, .sp=0x78, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xea08, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xea08, .value=0x20, .type=IO_READ},
        {.addr=0xea09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5bbd, .a=0x46, .x=0x13, .y=0x5e, .sp=0x0b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5bbd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5bbe, .a=0x46, .x=0x13, .y=0x5e, .sp=0x0b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5bbd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5bbd, .value=0x20, .type=IO_READ},
        {.addr=0x5bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037C) {
    const struct CPU_State initial_cpu = {.pc=0xc56f, .a=0x29, .x=0xff, .y=0xfb, .sp=0x43, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc56f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc570, .a=0x29, .x=0xff, .y=0xfb, .sp=0x43, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc56f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc56f, .value=0x20, .type=IO_READ},
        {.addr=0xc570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037D) {
    const struct CPU_State initial_cpu = {.pc=0x6066, .a=0x14, .x=0xd2, .y=0x12, .sp=0xf0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x6066, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6067, .a=0x14, .x=0xd2, .y=0x12, .sp=0xf0, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x6066, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6066, .value=0x20, .type=IO_READ},
        {.addr=0x6067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037E) {
    const struct CPU_State initial_cpu = {.pc=0xaff7, .a=0x1a, .x=0x86, .y=0x43, .sp=0xa1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xaff7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xaff8, .a=0x1a, .x=0x86, .y=0x43, .sp=0xa1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xaff7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xaff7, .value=0x20, .type=IO_READ},
        {.addr=0xaff8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_037F) {
    const struct CPU_State initial_cpu = {.pc=0x2820, .a=0x56, .x=0xc0, .y=0x2e, .sp=0x2d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2820, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2821, .a=0x56, .x=0xc0, .y=0x2e, .sp=0x2d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x2820, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2820, .value=0x20, .type=IO_READ},
        {.addr=0x2821, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0380) {
    const struct CPU_State initial_cpu = {.pc=0xf41d, .a=0x56, .x=0x7b, .y=0x46, .sp=0x1a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf41d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf41e, .a=0x56, .x=0x7b, .y=0x46, .sp=0x1a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf41d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf41d, .value=0x20, .type=IO_READ},
        {.addr=0xf41e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0381) {
    const struct CPU_State initial_cpu = {.pc=0x13af, .a=0x23, .x=0x8e, .y=0x86, .sp=0x3a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x13af, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x13b0, .a=0x23, .x=0x8e, .y=0x86, .sp=0x3a, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x13af, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x13af, .value=0x20, .type=IO_READ},
        {.addr=0x13b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0382) {
    const struct CPU_State initial_cpu = {.pc=0xab69, .a=0x2e, .x=0x83, .y=0x39, .sp=0x79, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xab69, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xab6a, .a=0x2e, .x=0x83, .y=0x39, .sp=0x79, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xab69, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xab69, .value=0x20, .type=IO_READ},
        {.addr=0xab6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0383) {
    const struct CPU_State initial_cpu = {.pc=0xed2b, .a=0x48, .x=0x6c, .y=0x81, .sp=0xc7, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xed2b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xed2c, .a=0x48, .x=0x6c, .y=0x81, .sp=0xc7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xed2b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xed2b, .value=0x20, .type=IO_READ},
        {.addr=0xed2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1af0, .a=0xaf, .x=0x09, .y=0xa7, .sp=0x65, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x1af0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1af1, .a=0xaf, .x=0x09, .y=0xa7, .sp=0x65, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1af0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1af0, .value=0x20, .type=IO_READ},
        {.addr=0x1af1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0385) {
    const struct CPU_State initial_cpu = {.pc=0x86e5, .a=0x90, .x=0x2f, .y=0x6e, .sp=0xc0, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x86e5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x86e6, .a=0x90, .x=0x2f, .y=0x6e, .sp=0xc0, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x86e5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x86e5, .value=0x20, .type=IO_READ},
        {.addr=0x86e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0386) {
    const struct CPU_State initial_cpu = {.pc=0x8eb0, .a=0xf9, .x=0xb0, .y=0xd2, .sp=0x28, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8eb1, .a=0xf9, .x=0xb0, .y=0xd2, .sp=0x28, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x8eb0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8eb0, .value=0x20, .type=IO_READ},
        {.addr=0x8eb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0387) {
    const struct CPU_State initial_cpu = {.pc=0xba10, .a=0xff, .x=0x67, .y=0xee, .sp=0xd9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xba10, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xba11, .a=0xff, .x=0x67, .y=0xee, .sp=0xd9, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xba10, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xba10, .value=0x20, .type=IO_READ},
        {.addr=0xba11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0388) {
    const struct CPU_State initial_cpu = {.pc=0x7005, .a=0x7b, .x=0x14, .y=0x18, .sp=0x1d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7005, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7006, .a=0x7b, .x=0x14, .y=0x18, .sp=0x1d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x7005, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7005, .value=0x20, .type=IO_READ},
        {.addr=0x7006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9876, .a=0x35, .x=0x25, .y=0xe2, .sp=0x5c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9876, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9877, .a=0x35, .x=0x25, .y=0xe2, .sp=0x5c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9876, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9876, .value=0x20, .type=IO_READ},
        {.addr=0x9877, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038A) {
    const struct CPU_State initial_cpu = {.pc=0x42d2, .a=0x65, .x=0x8c, .y=0x56, .sp=0xf5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x42d2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x42d3, .a=0x65, .x=0x8c, .y=0x56, .sp=0xf5, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x42d2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x42d2, .value=0x20, .type=IO_READ},
        {.addr=0x42d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038B) {
    const struct CPU_State initial_cpu = {.pc=0x2daf, .a=0x0e, .x=0x16, .y=0x45, .sp=0x78, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2daf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2db0, .a=0x0e, .x=0x16, .y=0x45, .sp=0x78, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x2daf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2daf, .value=0x20, .type=IO_READ},
        {.addr=0x2db0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038C) {
    const struct CPU_State initial_cpu = {.pc=0x3833, .a=0x27, .x=0x80, .y=0x01, .sp=0xf0, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3833, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3834, .a=0x27, .x=0x80, .y=0x01, .sp=0xf0, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x3833, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3833, .value=0x20, .type=IO_READ},
        {.addr=0x3834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038D) {
    const struct CPU_State initial_cpu = {.pc=0x989f, .a=0xa8, .x=0x41, .y=0x22, .sp=0x7d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x989f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x98a0, .a=0xa8, .x=0x41, .y=0x22, .sp=0x7d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x989f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x989f, .value=0x20, .type=IO_READ},
        {.addr=0x98a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038E) {
    const struct CPU_State initial_cpu = {.pc=0x4fc9, .a=0x02, .x=0xaf, .y=0x3a, .sp=0x58, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4fca, .a=0x02, .x=0xaf, .y=0x3a, .sp=0x58, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4fc9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4fc9, .value=0x20, .type=IO_READ},
        {.addr=0x4fca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_038F) {
    const struct CPU_State initial_cpu = {.pc=0x0ae8, .a=0xd5, .x=0xf0, .y=0x66, .sp=0x59, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae8, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0ae9, .a=0xd5, .x=0xf0, .y=0x66, .sp=0x59, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0ae8, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0ae8, .value=0x20, .type=IO_READ},
        {.addr=0x0ae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0390) {
    const struct CPU_State initial_cpu = {.pc=0xbb60, .a=0x02, .x=0x9c, .y=0x01, .sp=0xef, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xbb60, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbb61, .a=0x02, .x=0x9c, .y=0x01, .sp=0xef, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbb60, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbb60, .value=0x20, .type=IO_READ},
        {.addr=0xbb61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0391) {
    const struct CPU_State initial_cpu = {.pc=0x3875, .a=0x37, .x=0xde, .y=0x97, .sp=0xdc, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x3875, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3876, .a=0x37, .x=0xde, .y=0x97, .sp=0xdc, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x3875, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3875, .value=0x20, .type=IO_READ},
        {.addr=0x3876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0392) {
    const struct CPU_State initial_cpu = {.pc=0xfd74, .a=0xa5, .x=0x06, .y=0x15, .sp=0xf7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xfd74, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfd75, .a=0xa5, .x=0x06, .y=0x15, .sp=0xf7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xfd74, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfd74, .value=0x20, .type=IO_READ},
        {.addr=0xfd75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0393) {
    const struct CPU_State initial_cpu = {.pc=0x6cf0, .a=0x5f, .x=0x8a, .y=0x7d, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6cf1, .a=0x5f, .x=0x8a, .y=0x7d, .sp=0x23, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x6cf0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6cf0, .value=0x20, .type=IO_READ},
        {.addr=0x6cf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0394) {
    const struct CPU_State initial_cpu = {.pc=0xe29b, .a=0xc7, .x=0x70, .y=0x8c, .sp=0xaa, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe29b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe29c, .a=0xc7, .x=0x70, .y=0x8c, .sp=0xaa, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xe29b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe29b, .value=0x20, .type=IO_READ},
        {.addr=0xe29c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0395) {
    const struct CPU_State initial_cpu = {.pc=0x97be, .a=0x93, .x=0xe6, .y=0xfd, .sp=0x2c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x97be, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x97bf, .a=0x93, .x=0xe6, .y=0xfd, .sp=0x2c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x97be, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x97be, .value=0x20, .type=IO_READ},
        {.addr=0x97bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1af5, .a=0xf7, .x=0xed, .y=0x4c, .sp=0xce, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x1af5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1af6, .a=0xf7, .x=0xed, .y=0x4c, .sp=0xce, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x1af5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1af5, .value=0x20, .type=IO_READ},
        {.addr=0x1af6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4057, .a=0xce, .x=0x1f, .y=0xd3, .sp=0x4d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4057, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4058, .a=0xce, .x=0x1f, .y=0xd3, .sp=0x4d, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x4057, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4057, .value=0x20, .type=IO_READ},
        {.addr=0x4058, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0398) {
    const struct CPU_State initial_cpu = {.pc=0x5d91, .a=0x8c, .x=0x25, .y=0x27, .sp=0x4d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5d91, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5d92, .a=0x8c, .x=0x25, .y=0x27, .sp=0x4d, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5d91, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5d91, .value=0x20, .type=IO_READ},
        {.addr=0x5d92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_0399) {
    const struct CPU_State initial_cpu = {.pc=0x1d47, .a=0xf9, .x=0xac, .y=0x3b, .sp=0x5f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1d47, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1d48, .a=0xf9, .x=0xac, .y=0x3b, .sp=0x5f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1d47, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1d47, .value=0x20, .type=IO_READ},
        {.addr=0x1d48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039A) {
    const struct CPU_State initial_cpu = {.pc=0x581f, .a=0xbf, .x=0x8a, .y=0x73, .sp=0x39, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x581f, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5820, .a=0xbf, .x=0x8a, .y=0x73, .sp=0x39, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x581f, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x581f, .value=0x20, .type=IO_READ},
        {.addr=0x5820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039B) {
    const struct CPU_State initial_cpu = {.pc=0xdecb, .a=0xc1, .x=0x11, .y=0xf7, .sp=0x16, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xdecb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xdecc, .a=0xc1, .x=0x11, .y=0xf7, .sp=0x16, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xdecb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xdecb, .value=0x20, .type=IO_READ},
        {.addr=0xdecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039C) {
    const struct CPU_State initial_cpu = {.pc=0x81c2, .a=0xfe, .x=0xe5, .y=0x9f, .sp=0xb6, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x81c2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x81c3, .a=0xfe, .x=0xe5, .y=0x9f, .sp=0xb6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x81c2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x81c2, .value=0x20, .type=IO_READ},
        {.addr=0x81c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039D) {
    const struct CPU_State initial_cpu = {.pc=0xcbfa, .a=0x6e, .x=0xe4, .y=0x9c, .sp=0x9b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xcbfa, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcbfb, .a=0x6e, .x=0xe4, .y=0x9c, .sp=0x9b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xcbfa, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcbfa, .value=0x20, .type=IO_READ},
        {.addr=0xcbfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039E) {
    const struct CPU_State initial_cpu = {.pc=0xa7a1, .a=0xa3, .x=0x1b, .y=0x41, .sp=0x29, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa7a2, .a=0xa3, .x=0x1b, .y=0x41, .sp=0x29, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa7a1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa7a1, .value=0x20, .type=IO_READ},
        {.addr=0xa7a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_039F) {
    const struct CPU_State initial_cpu = {.pc=0xae00, .a=0x35, .x=0x06, .y=0xa9, .sp=0x0d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xae00, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae01, .a=0x35, .x=0x06, .y=0xa9, .sp=0x0d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xae00, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae00, .value=0x20, .type=IO_READ},
        {.addr=0xae01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xe6fb, .a=0x2e, .x=0xe8, .y=0x63, .sp=0x69, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe6fb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe6fc, .a=0x2e, .x=0xe8, .y=0x63, .sp=0x69, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe6fb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe6fb, .value=0x20, .type=IO_READ},
        {.addr=0xe6fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1fb1, .a=0x01, .x=0x2e, .y=0x08, .sp=0x60, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1fb1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1fb2, .a=0x01, .x=0x2e, .y=0x08, .sp=0x60, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x1fb1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1fb1, .value=0x20, .type=IO_READ},
        {.addr=0x1fb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xd62d, .a=0x9c, .x=0x6b, .y=0x0e, .sp=0xa7, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd62d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd62e, .a=0x9c, .x=0x6b, .y=0x0e, .sp=0xa7, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd62d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd62d, .value=0x20, .type=IO_READ},
        {.addr=0xd62e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe9c6, .a=0x27, .x=0xd1, .y=0x41, .sp=0xbd, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe9c7, .a=0x27, .x=0xd1, .y=0x41, .sp=0xbd, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xe9c6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe9c6, .value=0x20, .type=IO_READ},
        {.addr=0xe9c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xbd93, .a=0xd0, .x=0xef, .y=0x63, .sp=0xcb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xbd93, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbd94, .a=0xd0, .x=0xef, .y=0x63, .sp=0xcb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xbd93, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbd93, .value=0x20, .type=IO_READ},
        {.addr=0xbd94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x38c9, .a=0xd3, .x=0xb8, .y=0x96, .sp=0xb0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x38c9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x38ca, .a=0xd3, .x=0xb8, .y=0x96, .sp=0xb0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x38c9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x38c9, .value=0x20, .type=IO_READ},
        {.addr=0x38ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x36bf, .a=0xed, .x=0xea, .y=0xfa, .sp=0x3b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x36bf, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x36c0, .a=0xed, .x=0xea, .y=0xfa, .sp=0x3b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x36bf, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x36bf, .value=0x20, .type=IO_READ},
        {.addr=0x36c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xee5e, .a=0xee, .x=0x23, .y=0xa0, .sp=0x64, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xee5e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xee5f, .a=0xee, .x=0x23, .y=0xa0, .sp=0x64, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xee5e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xee5e, .value=0x20, .type=IO_READ},
        {.addr=0xee5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x73cd, .a=0x95, .x=0x42, .y=0x7c, .sp=0xff, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x73cd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x73ce, .a=0x95, .x=0x42, .y=0x7c, .sp=0xff, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x73cd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x73cd, .value=0x20, .type=IO_READ},
        {.addr=0x73ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8688, .a=0x4f, .x=0xc6, .y=0xb9, .sp=0x0d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8688, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8689, .a=0x4f, .x=0xc6, .y=0xb9, .sp=0x0d, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x8688, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8688, .value=0x20, .type=IO_READ},
        {.addr=0x8689, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa4b7, .a=0x5d, .x=0xf1, .y=0x8a, .sp=0x73, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa4b8, .a=0x5d, .x=0xf1, .y=0x8a, .sp=0x73, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa4b7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa4b7, .value=0x20, .type=IO_READ},
        {.addr=0xa4b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x3dd7, .a=0x06, .x=0x69, .y=0x71, .sp=0xb0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3dd8, .a=0x06, .x=0x69, .y=0x71, .sp=0xb0, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3dd7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3dd7, .value=0x20, .type=IO_READ},
        {.addr=0x3dd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x8f49, .a=0x8a, .x=0x09, .y=0x21, .sp=0xb2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8f49, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8f4a, .a=0x8a, .x=0x09, .y=0x21, .sp=0xb2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8f49, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8f49, .value=0x20, .type=IO_READ},
        {.addr=0x8f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x243c, .a=0x02, .x=0x55, .y=0x15, .sp=0x97, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x243c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x243d, .a=0x02, .x=0x55, .y=0x15, .sp=0x97, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x243c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x243c, .value=0x20, .type=IO_READ},
        {.addr=0x243d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xfbac, .a=0xff, .x=0xcb, .y=0x9a, .sp=0xf7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfbac, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfbad, .a=0xff, .x=0xcb, .y=0x9a, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfbac, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfbac, .value=0x20, .type=IO_READ},
        {.addr=0xfbad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xb651, .a=0xc1, .x=0x2f, .y=0x80, .sp=0x0e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb651, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb652, .a=0xc1, .x=0x2f, .y=0x80, .sp=0x0e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb651, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb651, .value=0x20, .type=IO_READ},
        {.addr=0xb652, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xfa45, .a=0x92, .x=0x79, .y=0xce, .sp=0xd1, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xfa45, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfa46, .a=0x92, .x=0x79, .y=0xce, .sp=0xd1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfa45, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfa45, .value=0x20, .type=IO_READ},
        {.addr=0xfa46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xca22, .a=0x36, .x=0x27, .y=0x80, .sp=0x73, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xca22, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xca23, .a=0x36, .x=0x27, .y=0x80, .sp=0x73, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xca22, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xca22, .value=0x20, .type=IO_READ},
        {.addr=0xca23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x9b55, .a=0x78, .x=0x27, .y=0x33, .sp=0x2e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9b55, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9b56, .a=0x78, .x=0x27, .y=0x33, .sp=0x2e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9b55, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9b55, .value=0x20, .type=IO_READ},
        {.addr=0x9b56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xae50, .a=0x05, .x=0x0d, .y=0xc6, .sp=0xb5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xae50, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xae51, .a=0x05, .x=0x0d, .y=0xc6, .sp=0xb5, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xae50, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xae50, .value=0x20, .type=IO_READ},
        {.addr=0xae51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x47b6, .a=0xcd, .x=0xd7, .y=0xf7, .sp=0x13, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x47b6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x47b7, .a=0xcd, .x=0xd7, .y=0xf7, .sp=0x13, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x47b6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x47b6, .value=0x20, .type=IO_READ},
        {.addr=0x47b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x6002, .a=0x7b, .x=0x1a, .y=0xbd, .sp=0xe3, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6002, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6003, .a=0x7b, .x=0x1a, .y=0xbd, .sp=0xe3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6002, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6002, .value=0x20, .type=IO_READ},
        {.addr=0x6003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x5977, .a=0x08, .x=0x60, .y=0xe4, .sp=0xbe, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5977, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5978, .a=0x08, .x=0x60, .y=0xe4, .sp=0xbe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5977, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5977, .value=0x20, .type=IO_READ},
        {.addr=0x5978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xb193, .a=0x31, .x=0x59, .y=0xef, .sp=0xfb, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xb193, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb194, .a=0x31, .x=0x59, .y=0xef, .sp=0xfb, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xb193, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb193, .value=0x20, .type=IO_READ},
        {.addr=0xb194, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9dd6, .a=0x68, .x=0x61, .y=0xdf, .sp=0xe8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9dd7, .a=0x68, .x=0x61, .y=0xdf, .sp=0xe8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9dd6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9dd6, .value=0x20, .type=IO_READ},
        {.addr=0x9dd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xbd99, .a=0x75, .x=0xfa, .y=0xe9, .sp=0x2c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd99, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbd9a, .a=0x75, .x=0xfa, .y=0xe9, .sp=0x2c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbd99, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbd99, .value=0x20, .type=IO_READ},
        {.addr=0xbd9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x255d, .a=0xbd, .x=0xde, .y=0x87, .sp=0x4e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x255d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x255e, .a=0xbd, .x=0xde, .y=0x87, .sp=0x4e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x255d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x255d, .value=0x20, .type=IO_READ},
        {.addr=0x255e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xead5, .a=0x06, .x=0xa0, .y=0x57, .sp=0x2f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xead5, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xead6, .a=0x06, .x=0xa0, .y=0x57, .sp=0x2f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xead5, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xead5, .value=0x20, .type=IO_READ},
        {.addr=0xead6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe875, .a=0xe4, .x=0xdb, .y=0x68, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe875, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe876, .a=0xe4, .x=0xdb, .y=0x68, .sp=0xaa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe875, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe875, .value=0x20, .type=IO_READ},
        {.addr=0xe876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xe94a, .a=0x56, .x=0xbb, .y=0x05, .sp=0x74, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe94a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe94b, .a=0x56, .x=0xbb, .y=0x05, .sp=0x74, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe94a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe94a, .value=0x20, .type=IO_READ},
        {.addr=0xe94b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x8b28, .a=0xe5, .x=0xa6, .y=0x7c, .sp=0xad, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x8b28, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8b29, .a=0xe5, .x=0xa6, .y=0x7c, .sp=0xad, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x8b28, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8b28, .value=0x20, .type=IO_READ},
        {.addr=0x8b29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x816b, .a=0x83, .x=0xa4, .y=0xb3, .sp=0xd9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x816b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x816c, .a=0x83, .x=0xa4, .y=0xb3, .sp=0xd9, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x816b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x816b, .value=0x20, .type=IO_READ},
        {.addr=0x816c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xa060, .a=0x62, .x=0x09, .y=0xd8, .sp=0x6f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa060, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa061, .a=0x62, .x=0x09, .y=0xd8, .sp=0x6f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa060, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa060, .value=0x20, .type=IO_READ},
        {.addr=0xa061, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xbf8a, .a=0xae, .x=0xff, .y=0x3c, .sp=0xe5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbf8b, .a=0xae, .x=0xff, .y=0x3c, .sp=0xe5, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xbf8a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbf8a, .value=0x20, .type=IO_READ},
        {.addr=0xbf8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xbff2, .a=0xf1, .x=0x40, .y=0x2a, .sp=0x4f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xbff2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbff3, .a=0xf1, .x=0x40, .y=0x2a, .sp=0x4f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xbff2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbff2, .value=0x20, .type=IO_READ},
        {.addr=0xbff3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x8251, .a=0x5a, .x=0xec, .y=0xc3, .sp=0xc9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x8251, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8252, .a=0x5a, .x=0xec, .y=0xc3, .sp=0xc9, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x8251, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8251, .value=0x20, .type=IO_READ},
        {.addr=0x8252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x1292, .a=0xdd, .x=0xfd, .y=0x5e, .sp=0xc4, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1292, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1293, .a=0xdd, .x=0xfd, .y=0x5e, .sp=0xc4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1292, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1292, .value=0x20, .type=IO_READ},
        {.addr=0x1293, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xe4fc, .a=0x90, .x=0xb5, .y=0x87, .sp=0xae, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe4fd, .a=0x90, .x=0xb5, .y=0x87, .sp=0xae, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xe4fc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe4fc, .value=0x20, .type=IO_READ},
        {.addr=0xe4fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xfbe2, .a=0xac, .x=0x66, .y=0x44, .sp=0xe0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfbe3, .a=0xac, .x=0x66, .y=0x44, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfbe2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfbe2, .value=0x20, .type=IO_READ},
        {.addr=0xfbe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x7db4, .a=0x96, .x=0x1e, .y=0x26, .sp=0xac, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7db4, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7db5, .a=0x96, .x=0x1e, .y=0x26, .sp=0xac, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7db4, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7db4, .value=0x20, .type=IO_READ},
        {.addr=0x7db5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xfb6c, .a=0xc8, .x=0x8f, .y=0x43, .sp=0xca, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6c, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xfb6d, .a=0xc8, .x=0x8f, .y=0x43, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xfb6c, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xfb6c, .value=0x20, .type=IO_READ},
        {.addr=0xfb6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1377, .a=0x9b, .x=0xfe, .y=0x56, .sp=0xe0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1377, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1378, .a=0x9b, .x=0xfe, .y=0x56, .sp=0xe0, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x1377, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1377, .value=0x20, .type=IO_READ},
        {.addr=0x1378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xec68, .a=0x0c, .x=0xfb, .y=0xfc, .sp=0x12, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xec68, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xec69, .a=0x0c, .x=0xfb, .y=0xfc, .sp=0x12, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xec68, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xec68, .value=0x20, .type=IO_READ},
        {.addr=0xec69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x9500, .a=0xb1, .x=0x3f, .y=0xfa, .sp=0xc6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9500, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9501, .a=0xb1, .x=0x3f, .y=0xfa, .sp=0xc6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9500, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9500, .value=0x20, .type=IO_READ},
        {.addr=0x9501, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xbf3a, .a=0x60, .x=0x42, .y=0xdc, .sp=0xcf, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xbf3a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xbf3b, .a=0x60, .x=0x42, .y=0xdc, .sp=0xcf, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xbf3a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xbf3a, .value=0x20, .type=IO_READ},
        {.addr=0xbf3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xf26e, .a=0x85, .x=0xcb, .y=0x28, .sp=0x99, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf26e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf26f, .a=0x85, .x=0xcb, .y=0x28, .sp=0x99, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf26e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf26e, .value=0x20, .type=IO_READ},
        {.addr=0xf26f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xe38d, .a=0x57, .x=0xbf, .y=0x1a, .sp=0x4b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe38d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe38e, .a=0x57, .x=0xbf, .y=0x1a, .sp=0x4b, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xe38d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe38d, .value=0x20, .type=IO_READ},
        {.addr=0xe38e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x1a49, .a=0xde, .x=0x7f, .y=0x0d, .sp=0x3d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1a49, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1a4a, .a=0xde, .x=0x7f, .y=0x0d, .sp=0x3d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1a49, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1a49, .value=0x20, .type=IO_READ},
        {.addr=0x1a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xe373, .a=0x1c, .x=0xdf, .y=0x96, .sp=0xa2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe373, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe374, .a=0x1c, .x=0xdf, .y=0x96, .sp=0xa2, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xe373, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe373, .value=0x20, .type=IO_READ},
        {.addr=0xe374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa447, .a=0x79, .x=0x8b, .y=0x7c, .sp=0xe3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa447, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa448, .a=0x79, .x=0x8b, .y=0x7c, .sp=0xe3, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa447, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa447, .value=0x20, .type=IO_READ},
        {.addr=0xa448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xe991, .a=0xa7, .x=0x41, .y=0xa5, .sp=0x13, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xe991, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xe992, .a=0xa7, .x=0x41, .y=0xa5, .sp=0x13, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xe991, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xe991, .value=0x20, .type=IO_READ},
        {.addr=0xe992, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x81d0, .a=0x4b, .x=0xb1, .y=0x41, .sp=0xc1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x81d0, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x81d1, .a=0x4b, .x=0xb1, .y=0x41, .sp=0xc1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x81d0, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x81d0, .value=0x20, .type=IO_READ},
        {.addr=0x81d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x8677, .a=0x95, .x=0x5b, .y=0xc3, .sp=0x06, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8677, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8678, .a=0x95, .x=0x5b, .y=0xc3, .sp=0x06, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x8677, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8677, .value=0x20, .type=IO_READ},
        {.addr=0x8678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x9f09, .a=0xa3, .x=0xdd, .y=0x9a, .sp=0xbc, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9f09, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9f0a, .a=0xa3, .x=0xdd, .y=0x9a, .sp=0xbc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9f09, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9f09, .value=0x20, .type=IO_READ},
        {.addr=0x9f0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xcd4b, .a=0x60, .x=0xe5, .y=0x0d, .sp=0xe6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xcd4b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xcd4c, .a=0x60, .x=0xe5, .y=0x0d, .sp=0xe6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcd4b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xcd4b, .value=0x20, .type=IO_READ},
        {.addr=0xcd4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x4aee, .a=0x9e, .x=0xe8, .y=0x36, .sp=0x39, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4aee, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4aef, .a=0x9e, .x=0xe8, .y=0x36, .sp=0x39, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x4aee, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4aee, .value=0x20, .type=IO_READ},
        {.addr=0x4aef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x3355, .a=0x79, .x=0x00, .y=0xbe, .sp=0x12, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3355, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3356, .a=0x79, .x=0x00, .y=0xbe, .sp=0x12, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x3355, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3355, .value=0x20, .type=IO_READ},
        {.addr=0x3356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x9f39, .a=0xb5, .x=0x9c, .y=0xce, .sp=0xab, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f39, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9f3a, .a=0xb5, .x=0x9c, .y=0xce, .sp=0xab, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9f39, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x9f39, .value=0x20, .type=IO_READ},
        {.addr=0x9f3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x75fb, .a=0x77, .x=0xd6, .y=0xf0, .sp=0xb1, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x75fb, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x75fc, .a=0x77, .x=0xd6, .y=0xf0, .sp=0xb1, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x75fb, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x75fb, .value=0x20, .type=IO_READ},
        {.addr=0x75fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xc3ce, .a=0x1e, .x=0x72, .y=0xac, .sp=0x09, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc3ce, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc3cf, .a=0x1e, .x=0x72, .y=0xac, .sp=0x09, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc3ce, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc3ce, .value=0x20, .type=IO_READ},
        {.addr=0xc3cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x0cdd, .a=0xec, .x=0x7e, .y=0x6a, .sp=0x79, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0cdd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0cde, .a=0xec, .x=0x7e, .y=0x6a, .sp=0x79, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0cdd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0cdd, .value=0x20, .type=IO_READ},
        {.addr=0x0cde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xc229, .a=0xc2, .x=0xf7, .y=0x4f, .sp=0xe1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc229, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc22a, .a=0xc2, .x=0xf7, .y=0x4f, .sp=0xe1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc229, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc229, .value=0x20, .type=IO_READ},
        {.addr=0xc22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x6c01, .a=0x34, .x=0x69, .y=0xaa, .sp=0x51, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6c01, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x6c02, .a=0x34, .x=0x69, .y=0xaa, .sp=0x51, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x6c01, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x6c01, .value=0x20, .type=IO_READ},
        {.addr=0x6c02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x988d, .a=0x0a, .x=0xf4, .y=0xb1, .sp=0xc7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x988d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x988e, .a=0x0a, .x=0xf4, .y=0xb1, .sp=0xc7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x988d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x988d, .value=0x20, .type=IO_READ},
        {.addr=0x988e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xf63a, .a=0x83, .x=0x39, .y=0xa3, .sp=0xcf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xf63a, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xf63b, .a=0x83, .x=0x39, .y=0xa3, .sp=0xcf, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xf63a, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xf63a, .value=0x20, .type=IO_READ},
        {.addr=0xf63b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x3e4d, .a=0x19, .x=0x46, .y=0x02, .sp=0x17, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3e4d, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3e4e, .a=0x19, .x=0x46, .y=0x02, .sp=0x17, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3e4d, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3e4d, .value=0x20, .type=IO_READ},
        {.addr=0x3e4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xebe9, .a=0x8c, .x=0x61, .y=0x23, .sp=0x05, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xebe9, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xebea, .a=0x8c, .x=0x61, .y=0x23, .sp=0x05, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xebe9, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xebe9, .value=0x20, .type=IO_READ},
        {.addr=0xebea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb070, .a=0x82, .x=0x43, .y=0xc0, .sp=0x9b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb070, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb071, .a=0x82, .x=0x43, .y=0xc0, .sp=0x9b, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xb070, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb070, .value=0x20, .type=IO_READ},
        {.addr=0xb071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xa3e7, .a=0x6c, .x=0x6c, .y=0x24, .sp=0x4f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e7, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa3e8, .a=0x6c, .x=0x6c, .y=0x24, .sp=0x4f, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xa3e7, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa3e7, .value=0x20, .type=IO_READ},
        {.addr=0xa3e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xb5d6, .a=0x03, .x=0xe8, .y=0x6b, .sp=0x10, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d6, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xb5d7, .a=0x03, .x=0xe8, .y=0x6b, .sp=0x10, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xb5d6, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xb5d6, .value=0x20, .type=IO_READ},
        {.addr=0xb5d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x32b3, .a=0xd7, .x=0xee, .y=0xbc, .sp=0x0f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x32b3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x32b4, .a=0xd7, .x=0xee, .y=0xbc, .sp=0x0f, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x32b3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x32b3, .value=0x20, .type=IO_READ},
        {.addr=0x32b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_20, _20_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x5fda, .a=0x11, .x=0xae, .y=0x77, .sp=0xe3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5fda, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x5fdb, .a=0x11, .x=0xae, .y=0x77, .sp=0xe3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5fda, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x5fda, .value=0x20, .type=IO_READ},
        {.addr=0x5fdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
