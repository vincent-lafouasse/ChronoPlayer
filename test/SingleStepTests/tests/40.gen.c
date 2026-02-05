#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_40, _40_0000) {
    const struct CPU_State initial_cpu = {.pc=0xcd1b, .a=0xd8, .x=0xd8, .y=0xc2, .sp=0xfa, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcd1c, .a=0xd8, .x=0xd8, .y=0xc2, .sp=0xfa, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcd1b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcd1b, .value=0x40, .type=IO_READ},
        {.addr=0xcd1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0001) {
    const struct CPU_State initial_cpu = {.pc=0x5cc2, .a=0x5d, .x=0x64, .y=0x5f, .sp=0x41, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5cc3, .a=0x5d, .x=0x64, .y=0x5f, .sp=0x41, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5cc2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5cc2, .value=0x40, .type=IO_READ},
        {.addr=0x5cc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0002) {
    const struct CPU_State initial_cpu = {.pc=0x20c1, .a=0x36, .x=0x5e, .y=0xee, .sp=0xc3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x20c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x20c2, .a=0x36, .x=0x5e, .y=0xee, .sp=0xc3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x20c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x20c1, .value=0x40, .type=IO_READ},
        {.addr=0x20c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0003) {
    const struct CPU_State initial_cpu = {.pc=0xfa39, .a=0x64, .x=0x78, .y=0x26, .sp=0x94, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa39, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfa3a, .a=0x64, .x=0x78, .y=0x26, .sp=0x94, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xfa39, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfa39, .value=0x40, .type=IO_READ},
        {.addr=0xfa3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0004) {
    const struct CPU_State initial_cpu = {.pc=0x5d05, .a=0xef, .x=0x62, .y=0xdb, .sp=0xd5, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5d05, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5d06, .a=0xef, .x=0x62, .y=0xdb, .sp=0xd5, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x5d05, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5d05, .value=0x40, .type=IO_READ},
        {.addr=0x5d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0005) {
    const struct CPU_State initial_cpu = {.pc=0xd579, .a=0x9d, .x=0xe4, .y=0x16, .sp=0x02, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xd579, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd57a, .a=0x9d, .x=0xe4, .y=0x16, .sp=0x02, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xd579, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd579, .value=0x40, .type=IO_READ},
        {.addr=0xd57a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0006) {
    const struct CPU_State initial_cpu = {.pc=0x0ac9, .a=0x15, .x=0xe0, .y=0x87, .sp=0xa9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0aca, .a=0x15, .x=0xe0, .y=0x87, .sp=0xa9, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0ac9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0ac9, .value=0x40, .type=IO_READ},
        {.addr=0x0aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0007) {
    const struct CPU_State initial_cpu = {.pc=0xfb7d, .a=0xfd, .x=0x1c, .y=0x05, .sp=0xff, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb7e, .a=0xfd, .x=0x1c, .y=0x05, .sp=0xff, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xfb7d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb7d, .value=0x40, .type=IO_READ},
        {.addr=0xfb7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0008) {
    const struct CPU_State initial_cpu = {.pc=0xdc40, .a=0x37, .x=0x67, .y=0xc7, .sp=0x57, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc40, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdc41, .a=0x37, .x=0x67, .y=0xc7, .sp=0x57, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdc40, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdc40, .value=0x40, .type=IO_READ},
        {.addr=0xdc41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0009) {
    const struct CPU_State initial_cpu = {.pc=0x2f8d, .a=0x28, .x=0x1c, .y=0x74, .sp=0x0d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2f8e, .a=0x28, .x=0x1c, .y=0x74, .sp=0x0d, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x2f8d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2f8d, .value=0x40, .type=IO_READ},
        {.addr=0x2f8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000A) {
    const struct CPU_State initial_cpu = {.pc=0xb799, .a=0x69, .x=0x37, .y=0x7d, .sp=0x8d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb799, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb79a, .a=0x69, .x=0x37, .y=0x7d, .sp=0x8d, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xb799, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb799, .value=0x40, .type=IO_READ},
        {.addr=0xb79a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000B) {
    const struct CPU_State initial_cpu = {.pc=0xeae5, .a=0x65, .x=0x38, .y=0x33, .sp=0x7a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xeae5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeae6, .a=0x65, .x=0x38, .y=0x33, .sp=0x7a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xeae5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeae5, .value=0x40, .type=IO_READ},
        {.addr=0xeae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000C) {
    const struct CPU_State initial_cpu = {.pc=0x6a2f, .a=0x36, .x=0x86, .y=0xc1, .sp=0x69, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6a30, .a=0x36, .x=0x86, .y=0xc1, .sp=0x69, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6a2f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6a2f, .value=0x40, .type=IO_READ},
        {.addr=0x6a30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000D) {
    const struct CPU_State initial_cpu = {.pc=0x53f6, .a=0x95, .x=0x3e, .y=0x62, .sp=0x10, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x53f6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x53f7, .a=0x95, .x=0x3e, .y=0x62, .sp=0x10, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x53f6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x53f6, .value=0x40, .type=IO_READ},
        {.addr=0x53f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000E) {
    const struct CPU_State initial_cpu = {.pc=0x09c1, .a=0xb0, .x=0x8a, .y=0xd5, .sp=0xf1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x09c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x09c2, .a=0xb0, .x=0x8a, .y=0xd5, .sp=0xf1, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x09c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x09c1, .value=0x40, .type=IO_READ},
        {.addr=0x09c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_000F) {
    const struct CPU_State initial_cpu = {.pc=0x94a4, .a=0x5f, .x=0x7b, .y=0x23, .sp=0xb4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x94a4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x94a5, .a=0x5f, .x=0x7b, .y=0x23, .sp=0xb4, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x94a4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x94a4, .value=0x40, .type=IO_READ},
        {.addr=0x94a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0010) {
    const struct CPU_State initial_cpu = {.pc=0xf164, .a=0x79, .x=0x97, .y=0xbd, .sp=0xe1, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf164, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf165, .a=0x79, .x=0x97, .y=0xbd, .sp=0xe1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf164, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf164, .value=0x40, .type=IO_READ},
        {.addr=0xf165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0011) {
    const struct CPU_State initial_cpu = {.pc=0xfd75, .a=0xa9, .x=0xc6, .y=0xb2, .sp=0x24, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xfd75, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd76, .a=0xa9, .x=0xc6, .y=0xb2, .sp=0x24, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xfd75, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd75, .value=0x40, .type=IO_READ},
        {.addr=0xfd76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0012) {
    const struct CPU_State initial_cpu = {.pc=0xb734, .a=0x5a, .x=0x28, .y=0x10, .sp=0xc7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xb734, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb735, .a=0x5a, .x=0x28, .y=0x10, .sp=0xc7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb734, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb734, .value=0x40, .type=IO_READ},
        {.addr=0xb735, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0013) {
    const struct CPU_State initial_cpu = {.pc=0x29b0, .a=0x2b, .x=0x88, .y=0xdc, .sp=0xb4, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x29b0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x29b1, .a=0x2b, .x=0x88, .y=0xdc, .sp=0xb4, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x29b0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x29b0, .value=0x40, .type=IO_READ},
        {.addr=0x29b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0014) {
    const struct CPU_State initial_cpu = {.pc=0x65d4, .a=0xd3, .x=0x7b, .y=0x60, .sp=0x76, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x65d4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x65d5, .a=0xd3, .x=0x7b, .y=0x60, .sp=0x76, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x65d4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x65d4, .value=0x40, .type=IO_READ},
        {.addr=0x65d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5cfe, .a=0x46, .x=0xf9, .y=0xd9, .sp=0x50, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5cfe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5cff, .a=0x46, .x=0xf9, .y=0xd9, .sp=0x50, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5cfe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5cfe, .value=0x40, .type=IO_READ},
        {.addr=0x5cff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0016) {
    const struct CPU_State initial_cpu = {.pc=0xa59e, .a=0xff, .x=0x4d, .y=0x02, .sp=0x97, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa59e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa59f, .a=0xff, .x=0x4d, .y=0x02, .sp=0x97, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa59e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa59e, .value=0x40, .type=IO_READ},
        {.addr=0xa59f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0017) {
    const struct CPU_State initial_cpu = {.pc=0x8ade, .a=0xf1, .x=0x89, .y=0xf3, .sp=0xa4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ade, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8adf, .a=0xf1, .x=0x89, .y=0xf3, .sp=0xa4, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x8ade, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8ade, .value=0x40, .type=IO_READ},
        {.addr=0x8adf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0018) {
    const struct CPU_State initial_cpu = {.pc=0x9750, .a=0x68, .x=0x4b, .y=0x56, .sp=0x21, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9750, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9751, .a=0x68, .x=0x4b, .y=0x56, .sp=0x21, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9750, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9750, .value=0x40, .type=IO_READ},
        {.addr=0x9751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1377, .a=0x2e, .x=0xa0, .y=0xaf, .sp=0x18, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1377, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1378, .a=0x2e, .x=0xa0, .y=0xaf, .sp=0x18, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1377, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1377, .value=0x40, .type=IO_READ},
        {.addr=0x1378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001A) {
    const struct CPU_State initial_cpu = {.pc=0x5c18, .a=0xe4, .x=0x4b, .y=0xe0, .sp=0x69, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5c18, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c19, .a=0xe4, .x=0x4b, .y=0xe0, .sp=0x69, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5c18, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c18, .value=0x40, .type=IO_READ},
        {.addr=0x5c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001B) {
    const struct CPU_State initial_cpu = {.pc=0x5242, .a=0xa7, .x=0x46, .y=0x2d, .sp=0x7b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5242, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5243, .a=0xa7, .x=0x46, .y=0x2d, .sp=0x7b, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5242, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5242, .value=0x40, .type=IO_READ},
        {.addr=0x5243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001C) {
    const struct CPU_State initial_cpu = {.pc=0xd909, .a=0xa7, .x=0x80, .y=0x69, .sp=0x97, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd909, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd90a, .a=0xa7, .x=0x80, .y=0x69, .sp=0x97, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd909, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd909, .value=0x40, .type=IO_READ},
        {.addr=0xd90a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001D) {
    const struct CPU_State initial_cpu = {.pc=0x95ea, .a=0x07, .x=0x3d, .y=0x9a, .sp=0x2c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x95ea, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x95eb, .a=0x07, .x=0x3d, .y=0x9a, .sp=0x2c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x95ea, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x95ea, .value=0x40, .type=IO_READ},
        {.addr=0x95eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001E) {
    const struct CPU_State initial_cpu = {.pc=0xc904, .a=0xd5, .x=0xf3, .y=0x87, .sp=0xee, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc904, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc905, .a=0xd5, .x=0xf3, .y=0x87, .sp=0xee, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xc904, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc904, .value=0x40, .type=IO_READ},
        {.addr=0xc905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_001F) {
    const struct CPU_State initial_cpu = {.pc=0x06d8, .a=0x8f, .x=0x78, .y=0xea, .sp=0x60, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x06d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06d9, .a=0x8f, .x=0x78, .y=0xea, .sp=0x60, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x06d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06d8, .value=0x40, .type=IO_READ},
        {.addr=0x06d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0020) {
    const struct CPU_State initial_cpu = {.pc=0x8626, .a=0x8b, .x=0xc4, .y=0x93, .sp=0x93, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8626, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8627, .a=0x8b, .x=0xc4, .y=0x93, .sp=0x93, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x8626, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8626, .value=0x40, .type=IO_READ},
        {.addr=0x8627, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0021) {
    const struct CPU_State initial_cpu = {.pc=0x5394, .a=0x1d, .x=0x9d, .y=0x0d, .sp=0x41, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5394, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5395, .a=0x1d, .x=0x9d, .y=0x0d, .sp=0x41, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x5394, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5394, .value=0x40, .type=IO_READ},
        {.addr=0x5395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0022) {
    const struct CPU_State initial_cpu = {.pc=0x4063, .a=0xa3, .x=0x5e, .y=0x65, .sp=0x39, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4063, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4064, .a=0xa3, .x=0x5e, .y=0x65, .sp=0x39, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4063, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4063, .value=0x40, .type=IO_READ},
        {.addr=0x4064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0023) {
    const struct CPU_State initial_cpu = {.pc=0x27bc, .a=0x2c, .x=0x7f, .y=0xfb, .sp=0x92, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x27bc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x27bd, .a=0x2c, .x=0x7f, .y=0xfb, .sp=0x92, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x27bc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x27bc, .value=0x40, .type=IO_READ},
        {.addr=0x27bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0024) {
    const struct CPU_State initial_cpu = {.pc=0xcdf0, .a=0xdd, .x=0xfa, .y=0x00, .sp=0xe4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcdf1, .a=0xdd, .x=0xfa, .y=0x00, .sp=0xe4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xcdf0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcdf0, .value=0x40, .type=IO_READ},
        {.addr=0xcdf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0025) {
    const struct CPU_State initial_cpu = {.pc=0x6a87, .a=0xbd, .x=0x78, .y=0xc7, .sp=0xa6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6a87, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6a88, .a=0xbd, .x=0x78, .y=0xc7, .sp=0xa6, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x6a87, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6a87, .value=0x40, .type=IO_READ},
        {.addr=0x6a88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0026) {
    const struct CPU_State initial_cpu = {.pc=0x49d2, .a=0x90, .x=0xc3, .y=0xbb, .sp=0x77, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x49d2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x49d3, .a=0x90, .x=0xc3, .y=0xbb, .sp=0x77, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x49d2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x49d2, .value=0x40, .type=IO_READ},
        {.addr=0x49d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0027) {
    const struct CPU_State initial_cpu = {.pc=0xd835, .a=0x5b, .x=0x92, .y=0x26, .sp=0x69, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd835, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd836, .a=0x5b, .x=0x92, .y=0x26, .sp=0x69, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd835, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd835, .value=0x40, .type=IO_READ},
        {.addr=0xd836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0028) {
    const struct CPU_State initial_cpu = {.pc=0xde76, .a=0x92, .x=0x54, .y=0x12, .sp=0x05, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xde76, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xde77, .a=0x92, .x=0x54, .y=0x12, .sp=0x05, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xde76, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xde76, .value=0x40, .type=IO_READ},
        {.addr=0xde77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0029) {
    const struct CPU_State initial_cpu = {.pc=0xcf69, .a=0x0d, .x=0x2b, .y=0x5a, .sp=0xa7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xcf69, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcf6a, .a=0x0d, .x=0x2b, .y=0x5a, .sp=0xa7, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xcf69, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcf69, .value=0x40, .type=IO_READ},
        {.addr=0xcf6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002A) {
    const struct CPU_State initial_cpu = {.pc=0x8f0b, .a=0x15, .x=0x2e, .y=0x25, .sp=0xdb, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8f0b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8f0c, .a=0x15, .x=0x2e, .y=0x25, .sp=0xdb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8f0b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8f0b, .value=0x40, .type=IO_READ},
        {.addr=0x8f0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002B) {
    const struct CPU_State initial_cpu = {.pc=0x18fd, .a=0x81, .x=0x96, .y=0x8f, .sp=0x36, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x18fd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x18fe, .a=0x81, .x=0x96, .y=0x8f, .sp=0x36, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x18fd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x18fd, .value=0x40, .type=IO_READ},
        {.addr=0x18fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002C) {
    const struct CPU_State initial_cpu = {.pc=0x94a7, .a=0x73, .x=0x5f, .y=0xed, .sp=0x77, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x94a7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x94a8, .a=0x73, .x=0x5f, .y=0xed, .sp=0x77, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x94a7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x94a7, .value=0x40, .type=IO_READ},
        {.addr=0x94a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002D) {
    const struct CPU_State initial_cpu = {.pc=0xa0df, .a=0xe5, .x=0x4d, .y=0x1b, .sp=0x20, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa0df, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa0e0, .a=0xe5, .x=0x4d, .y=0x1b, .sp=0x20, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa0df, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa0df, .value=0x40, .type=IO_READ},
        {.addr=0xa0e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9cbc, .a=0x0d, .x=0x1c, .y=0x77, .sp=0x9c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9cbd, .a=0x0d, .x=0x1c, .y=0x77, .sp=0x9c, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x9cbc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9cbc, .value=0x40, .type=IO_READ},
        {.addr=0x9cbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_002F) {
    const struct CPU_State initial_cpu = {.pc=0x578e, .a=0xa0, .x=0x01, .y=0xb7, .sp=0x21, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x578e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x578f, .a=0xa0, .x=0x01, .y=0xb7, .sp=0x21, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x578e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x578e, .value=0x40, .type=IO_READ},
        {.addr=0x578f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8215, .a=0xd9, .x=0xbe, .y=0xf8, .sp=0xe8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x8215, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8216, .a=0xd9, .x=0xbe, .y=0xf8, .sp=0xe8, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x8215, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8215, .value=0x40, .type=IO_READ},
        {.addr=0x8216, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0031) {
    const struct CPU_State initial_cpu = {.pc=0x8b42, .a=0xa2, .x=0x86, .y=0xf8, .sp=0x5f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b42, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8b43, .a=0xa2, .x=0x86, .y=0xf8, .sp=0x5f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8b42, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8b42, .value=0x40, .type=IO_READ},
        {.addr=0x8b43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0032) {
    const struct CPU_State initial_cpu = {.pc=0x27a3, .a=0xf8, .x=0xd8, .y=0x1a, .sp=0xc1, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x27a3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x27a4, .a=0xf8, .x=0xd8, .y=0x1a, .sp=0xc1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x27a3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x27a3, .value=0x40, .type=IO_READ},
        {.addr=0x27a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0033) {
    const struct CPU_State initial_cpu = {.pc=0x337d, .a=0x59, .x=0xdb, .y=0xb4, .sp=0xf5, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x337d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x337e, .a=0x59, .x=0xdb, .y=0xb4, .sp=0xf5, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x337d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x337d, .value=0x40, .type=IO_READ},
        {.addr=0x337e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0034) {
    const struct CPU_State initial_cpu = {.pc=0xc351, .a=0x54, .x=0x9e, .y=0xf9, .sp=0x70, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xc351, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc352, .a=0x54, .x=0x9e, .y=0xf9, .sp=0x70, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc351, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc351, .value=0x40, .type=IO_READ},
        {.addr=0xc352, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0245, .a=0x2e, .x=0xe0, .y=0x0e, .sp=0xee, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0245, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0246, .a=0x2e, .x=0xe0, .y=0x0e, .sp=0xee, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0245, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0245, .value=0x40, .type=IO_READ},
        {.addr=0x0246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0036) {
    const struct CPU_State initial_cpu = {.pc=0x784e, .a=0x8e, .x=0x96, .y=0x12, .sp=0xe3, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x784e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x784f, .a=0x8e, .x=0x96, .y=0x12, .sp=0xe3, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x784e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x784e, .value=0x40, .type=IO_READ},
        {.addr=0x784f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0037) {
    const struct CPU_State initial_cpu = {.pc=0x47ce, .a=0xb1, .x=0x65, .y=0x1f, .sp=0x47, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x47ce, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x47cf, .a=0xb1, .x=0x65, .y=0x1f, .sp=0x47, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x47ce, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x47ce, .value=0x40, .type=IO_READ},
        {.addr=0x47cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0038) {
    const struct CPU_State initial_cpu = {.pc=0x32ad, .a=0x8c, .x=0x19, .y=0x2f, .sp=0x29, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x32ad, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x32ae, .a=0x8c, .x=0x19, .y=0x2f, .sp=0x29, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x32ad, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x32ad, .value=0x40, .type=IO_READ},
        {.addr=0x32ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0039) {
    const struct CPU_State initial_cpu = {.pc=0xb725, .a=0x4e, .x=0xd9, .y=0x80, .sp=0x94, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb725, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb726, .a=0x4e, .x=0xd9, .y=0x80, .sp=0x94, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb725, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb725, .value=0x40, .type=IO_READ},
        {.addr=0xb726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003A) {
    const struct CPU_State initial_cpu = {.pc=0xee5b, .a=0x2b, .x=0xee, .y=0x77, .sp=0x29, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xee5b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee5c, .a=0x2b, .x=0xee, .y=0x77, .sp=0x29, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xee5b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee5b, .value=0x40, .type=IO_READ},
        {.addr=0xee5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003B) {
    const struct CPU_State initial_cpu = {.pc=0xc71a, .a=0x41, .x=0x50, .y=0x21, .sp=0x4c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc71a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc71b, .a=0x41, .x=0x50, .y=0x21, .sp=0x4c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc71a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc71a, .value=0x40, .type=IO_READ},
        {.addr=0xc71b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003C) {
    const struct CPU_State initial_cpu = {.pc=0x77f3, .a=0x59, .x=0x2d, .y=0x86, .sp=0xb7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x77f3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x77f4, .a=0x59, .x=0x2d, .y=0x86, .sp=0xb7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x77f3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x77f3, .value=0x40, .type=IO_READ},
        {.addr=0x77f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003D) {
    const struct CPU_State initial_cpu = {.pc=0x5244, .a=0xb0, .x=0x12, .y=0x81, .sp=0xe8, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5244, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5245, .a=0xb0, .x=0x12, .y=0x81, .sp=0xe8, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5244, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5244, .value=0x40, .type=IO_READ},
        {.addr=0x5245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003E) {
    const struct CPU_State initial_cpu = {.pc=0x863b, .a=0x6a, .x=0x88, .y=0x20, .sp=0xff, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x863b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x863c, .a=0x6a, .x=0x88, .y=0x20, .sp=0xff, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x863b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x863b, .value=0x40, .type=IO_READ},
        {.addr=0x863c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_003F) {
    const struct CPU_State initial_cpu = {.pc=0xdaa1, .a=0x9f, .x=0xe7, .y=0x9c, .sp=0x60, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdaa2, .a=0x9f, .x=0xe7, .y=0x9c, .sp=0x60, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xdaa1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdaa1, .value=0x40, .type=IO_READ},
        {.addr=0xdaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0040) {
    const struct CPU_State initial_cpu = {.pc=0x739c, .a=0xf6, .x=0xa4, .y=0x2a, .sp=0x8f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x739c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x739d, .a=0xf6, .x=0xa4, .y=0x2a, .sp=0x8f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x739c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x739c, .value=0x40, .type=IO_READ},
        {.addr=0x739d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0041) {
    const struct CPU_State initial_cpu = {.pc=0xb8a5, .a=0x11, .x=0xb8, .y=0x82, .sp=0xbd, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb8a6, .a=0x11, .x=0xb8, .y=0x82, .sp=0xbd, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb8a5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb8a5, .value=0x40, .type=IO_READ},
        {.addr=0xb8a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0042) {
    const struct CPU_State initial_cpu = {.pc=0xf1ad, .a=0xe0, .x=0x4c, .y=0x62, .sp=0xfc, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ad, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf1ae, .a=0xe0, .x=0x4c, .y=0x62, .sp=0xfc, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xf1ad, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf1ad, .value=0x40, .type=IO_READ},
        {.addr=0xf1ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0043) {
    const struct CPU_State initial_cpu = {.pc=0xaf1a, .a=0xde, .x=0xa4, .y=0x13, .sp=0xde, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xaf1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf1b, .a=0xde, .x=0xa4, .y=0x13, .sp=0xde, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xaf1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf1a, .value=0x40, .type=IO_READ},
        {.addr=0xaf1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0044) {
    const struct CPU_State initial_cpu = {.pc=0x48bf, .a=0x88, .x=0xc3, .y=0x00, .sp=0x1f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x48bf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x48c0, .a=0x88, .x=0xc3, .y=0x00, .sp=0x1f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x48bf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x48bf, .value=0x40, .type=IO_READ},
        {.addr=0x48c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0045) {
    const struct CPU_State initial_cpu = {.pc=0xbd12, .a=0xb6, .x=0xd0, .y=0x1b, .sp=0xae, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbd12, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbd13, .a=0xb6, .x=0xd0, .y=0x1b, .sp=0xae, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xbd12, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbd12, .value=0x40, .type=IO_READ},
        {.addr=0xbd13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0046) {
    const struct CPU_State initial_cpu = {.pc=0xd9f0, .a=0x96, .x=0x65, .y=0x66, .sp=0xe5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd9f1, .a=0x96, .x=0x65, .y=0x66, .sp=0xe5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd9f0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd9f0, .value=0x40, .type=IO_READ},
        {.addr=0xd9f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0047) {
    const struct CPU_State initial_cpu = {.pc=0x40b7, .a=0x0d, .x=0xb0, .y=0x31, .sp=0xc9, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x40b7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x40b8, .a=0x0d, .x=0xb0, .y=0x31, .sp=0xc9, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x40b7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x40b7, .value=0x40, .type=IO_READ},
        {.addr=0x40b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0048) {
    const struct CPU_State initial_cpu = {.pc=0xaf8b, .a=0xc9, .x=0x54, .y=0xaa, .sp=0x73, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf8c, .a=0xc9, .x=0x54, .y=0xaa, .sp=0x73, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xaf8b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf8b, .value=0x40, .type=IO_READ},
        {.addr=0xaf8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0049) {
    const struct CPU_State initial_cpu = {.pc=0x3d65, .a=0x38, .x=0xd6, .y=0x1a, .sp=0xe0, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x3d65, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3d66, .a=0x38, .x=0xd6, .y=0x1a, .sp=0xe0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3d65, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3d65, .value=0x40, .type=IO_READ},
        {.addr=0x3d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004A) {
    const struct CPU_State initial_cpu = {.pc=0xa441, .a=0x02, .x=0x65, .y=0x29, .sp=0x73, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xa441, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa442, .a=0x02, .x=0x65, .y=0x29, .sp=0x73, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xa441, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa441, .value=0x40, .type=IO_READ},
        {.addr=0xa442, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004B) {
    const struct CPU_State initial_cpu = {.pc=0x767f, .a=0x49, .x=0x2a, .y=0x5b, .sp=0xc0, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x767f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7680, .a=0x49, .x=0x2a, .y=0x5b, .sp=0xc0, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x767f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x767f, .value=0x40, .type=IO_READ},
        {.addr=0x7680, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004C) {
    const struct CPU_State initial_cpu = {.pc=0x92f1, .a=0x5d, .x=0x72, .y=0xe4, .sp=0x9f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x92f1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x92f2, .a=0x5d, .x=0x72, .y=0xe4, .sp=0x9f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x92f1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x92f1, .value=0x40, .type=IO_READ},
        {.addr=0x92f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9521, .a=0x10, .x=0x8a, .y=0x22, .sp=0x1f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9521, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9522, .a=0x10, .x=0x8a, .y=0x22, .sp=0x1f, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x9521, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9521, .value=0x40, .type=IO_READ},
        {.addr=0x9522, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004E) {
    const struct CPU_State initial_cpu = {.pc=0x5c28, .a=0x61, .x=0xeb, .y=0xbb, .sp=0x6d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5c28, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c29, .a=0x61, .x=0xeb, .y=0xbb, .sp=0x6d, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x5c28, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c28, .value=0x40, .type=IO_READ},
        {.addr=0x5c29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2b80, .a=0x12, .x=0x82, .y=0x40, .sp=0x7d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b80, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2b81, .a=0x12, .x=0x82, .y=0x40, .sp=0x7d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2b80, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2b80, .value=0x40, .type=IO_READ},
        {.addr=0x2b81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0050) {
    const struct CPU_State initial_cpu = {.pc=0xade8, .a=0x1f, .x=0x23, .y=0x14, .sp=0x7a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xade8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xade9, .a=0x1f, .x=0x23, .y=0x14, .sp=0x7a, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xade8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xade8, .value=0x40, .type=IO_READ},
        {.addr=0xade9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8477, .a=0xdf, .x=0x87, .y=0x4b, .sp=0x91, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x8477, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8478, .a=0xdf, .x=0x87, .y=0x4b, .sp=0x91, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8477, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8477, .value=0x40, .type=IO_READ},
        {.addr=0x8478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0052) {
    const struct CPU_State initial_cpu = {.pc=0x561b, .a=0xdf, .x=0xec, .y=0x98, .sp=0xe4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x561b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x561c, .a=0xdf, .x=0xec, .y=0x98, .sp=0xe4, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x561b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x561b, .value=0x40, .type=IO_READ},
        {.addr=0x561c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0053) {
    const struct CPU_State initial_cpu = {.pc=0xf0b0, .a=0x1e, .x=0x72, .y=0x24, .sp=0xbf, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf0b1, .a=0x1e, .x=0x72, .y=0x24, .sp=0xbf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf0b0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf0b0, .value=0x40, .type=IO_READ},
        {.addr=0xf0b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0054) {
    const struct CPU_State initial_cpu = {.pc=0xc90c, .a=0x26, .x=0xb5, .y=0x2a, .sp=0xb7, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc90c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc90d, .a=0x26, .x=0xb5, .y=0x2a, .sp=0xb7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc90c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc90c, .value=0x40, .type=IO_READ},
        {.addr=0xc90d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0055) {
    const struct CPU_State initial_cpu = {.pc=0x6fcd, .a=0x0f, .x=0xff, .y=0x9c, .sp=0xfe, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6fcd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6fce, .a=0x0f, .x=0xff, .y=0x9c, .sp=0xfe, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6fcd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6fcd, .value=0x40, .type=IO_READ},
        {.addr=0x6fce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0056) {
    const struct CPU_State initial_cpu = {.pc=0xc50b, .a=0xa7, .x=0x32, .y=0xea, .sp=0x37, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc50b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc50c, .a=0xa7, .x=0x32, .y=0xea, .sp=0x37, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc50b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc50b, .value=0x40, .type=IO_READ},
        {.addr=0xc50c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0057) {
    const struct CPU_State initial_cpu = {.pc=0xc90f, .a=0xcc, .x=0xd9, .y=0x9d, .sp=0xf9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xc90f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc910, .a=0xcc, .x=0xd9, .y=0x9d, .sp=0xf9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc90f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc90f, .value=0x40, .type=IO_READ},
        {.addr=0xc910, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9708, .a=0x48, .x=0xab, .y=0x67, .sp=0x67, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9708, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9709, .a=0x48, .x=0xab, .y=0x67, .sp=0x67, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9708, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9708, .value=0x40, .type=IO_READ},
        {.addr=0x9709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0059) {
    const struct CPU_State initial_cpu = {.pc=0xf16d, .a=0xda, .x=0x27, .y=0xb3, .sp=0xd1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf16d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf16e, .a=0xda, .x=0x27, .y=0xb3, .sp=0xd1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf16d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf16d, .value=0x40, .type=IO_READ},
        {.addr=0xf16e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005A) {
    const struct CPU_State initial_cpu = {.pc=0x293c, .a=0x1b, .x=0x4d, .y=0x68, .sp=0x21, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x293c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x293d, .a=0x1b, .x=0x4d, .y=0x68, .sp=0x21, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x293c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x293c, .value=0x40, .type=IO_READ},
        {.addr=0x293d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005B) {
    const struct CPU_State initial_cpu = {.pc=0x121a, .a=0xb9, .x=0x9b, .y=0xa3, .sp=0x03, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x121a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x121b, .a=0xb9, .x=0x9b, .y=0xa3, .sp=0x03, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x121a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x121a, .value=0x40, .type=IO_READ},
        {.addr=0x121b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005C) {
    const struct CPU_State initial_cpu = {.pc=0xbbbb, .a=0x74, .x=0x17, .y=0xac, .sp=0xb8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbbbb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbbbc, .a=0x74, .x=0x17, .y=0xac, .sp=0xb8, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xbbbb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbbbb, .value=0x40, .type=IO_READ},
        {.addr=0xbbbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005D) {
    const struct CPU_State initial_cpu = {.pc=0xae2e, .a=0x0d, .x=0xe3, .y=0x8e, .sp=0xd9, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xae2e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xae2f, .a=0x0d, .x=0xe3, .y=0x8e, .sp=0xd9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xae2e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xae2e, .value=0x40, .type=IO_READ},
        {.addr=0xae2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb2c4, .a=0x84, .x=0xc0, .y=0xed, .sp=0x47, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb2c4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb2c5, .a=0x84, .x=0xc0, .y=0xed, .sp=0x47, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb2c4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb2c4, .value=0x40, .type=IO_READ},
        {.addr=0xb2c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_005F) {
    const struct CPU_State initial_cpu = {.pc=0xb697, .a=0xb9, .x=0x85, .y=0x11, .sp=0x5a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb697, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb698, .a=0xb9, .x=0x85, .y=0x11, .sp=0x5a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb697, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb697, .value=0x40, .type=IO_READ},
        {.addr=0xb698, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0060) {
    const struct CPU_State initial_cpu = {.pc=0x87c1, .a=0x4c, .x=0x49, .y=0x66, .sp=0xb8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x87c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x87c2, .a=0x4c, .x=0x49, .y=0x66, .sp=0xb8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x87c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x87c1, .value=0x40, .type=IO_READ},
        {.addr=0x87c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0061) {
    const struct CPU_State initial_cpu = {.pc=0xe78c, .a=0x1e, .x=0xe2, .y=0x7e, .sp=0x74, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe78c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe78d, .a=0x1e, .x=0xe2, .y=0x7e, .sp=0x74, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe78c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe78c, .value=0x40, .type=IO_READ},
        {.addr=0xe78d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9013, .a=0x34, .x=0xc7, .y=0xe2, .sp=0x44, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9013, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9014, .a=0x34, .x=0xc7, .y=0xe2, .sp=0x44, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9013, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9013, .value=0x40, .type=IO_READ},
        {.addr=0x9014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0063) {
    const struct CPU_State initial_cpu = {.pc=0x5b3d, .a=0x60, .x=0x62, .y=0x1a, .sp=0x79, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5b3e, .a=0x60, .x=0x62, .y=0x1a, .sp=0x79, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x5b3d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5b3d, .value=0x40, .type=IO_READ},
        {.addr=0x5b3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0064) {
    const struct CPU_State initial_cpu = {.pc=0x31f4, .a=0xa1, .x=0xe7, .y=0x07, .sp=0xdf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x31f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x31f5, .a=0xa1, .x=0xe7, .y=0x07, .sp=0xdf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x31f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x31f4, .value=0x40, .type=IO_READ},
        {.addr=0x31f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0065) {
    const struct CPU_State initial_cpu = {.pc=0xd12c, .a=0x25, .x=0xf3, .y=0x77, .sp=0x0c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd12c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd12d, .a=0x25, .x=0xf3, .y=0x77, .sp=0x0c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd12c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd12c, .value=0x40, .type=IO_READ},
        {.addr=0xd12d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0066) {
    const struct CPU_State initial_cpu = {.pc=0xb0c4, .a=0x42, .x=0x55, .y=0x61, .sp=0xa2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb0c5, .a=0x42, .x=0x55, .y=0x61, .sp=0xa2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb0c4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb0c4, .value=0x40, .type=IO_READ},
        {.addr=0xb0c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0067) {
    const struct CPU_State initial_cpu = {.pc=0xdfcf, .a=0x98, .x=0x37, .y=0xe4, .sp=0xd1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xdfcf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdfd0, .a=0x98, .x=0x37, .y=0xe4, .sp=0xd1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xdfcf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdfcf, .value=0x40, .type=IO_READ},
        {.addr=0xdfd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0068) {
    const struct CPU_State initial_cpu = {.pc=0x1c2b, .a=0xaa, .x=0x98, .y=0xb0, .sp=0x7b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1c2c, .a=0xaa, .x=0x98, .y=0xb0, .sp=0x7b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x1c2b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1c2b, .value=0x40, .type=IO_READ},
        {.addr=0x1c2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0069) {
    const struct CPU_State initial_cpu = {.pc=0xa975, .a=0xfa, .x=0x18, .y=0xa5, .sp=0x05, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa975, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa976, .a=0xfa, .x=0x18, .y=0xa5, .sp=0x05, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xa975, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa975, .value=0x40, .type=IO_READ},
        {.addr=0xa976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006A) {
    const struct CPU_State initial_cpu = {.pc=0x31a2, .a=0xfa, .x=0xea, .y=0x3c, .sp=0x2b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x31a2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x31a3, .a=0xfa, .x=0xea, .y=0x3c, .sp=0x2b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x31a2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x31a2, .value=0x40, .type=IO_READ},
        {.addr=0x31a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006B) {
    const struct CPU_State initial_cpu = {.pc=0x0d47, .a=0xb4, .x=0xf0, .y=0x4c, .sp=0xf1, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0d47, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0d48, .a=0xb4, .x=0xf0, .y=0x4c, .sp=0xf1, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0d47, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0d47, .value=0x40, .type=IO_READ},
        {.addr=0x0d48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006C) {
    const struct CPU_State initial_cpu = {.pc=0xe190, .a=0x26, .x=0xf2, .y=0x68, .sp=0x83, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe190, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe191, .a=0x26, .x=0xf2, .y=0x68, .sp=0x83, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe190, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe190, .value=0x40, .type=IO_READ},
        {.addr=0xe191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006D) {
    const struct CPU_State initial_cpu = {.pc=0xd246, .a=0x42, .x=0xfb, .y=0x11, .sp=0x17, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd246, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd247, .a=0x42, .x=0xfb, .y=0x11, .sp=0x17, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd246, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd246, .value=0x40, .type=IO_READ},
        {.addr=0xd247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006E) {
    const struct CPU_State initial_cpu = {.pc=0x879c, .a=0x1a, .x=0x9a, .y=0xbf, .sp=0xc6, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x879c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x879d, .a=0x1a, .x=0x9a, .y=0xbf, .sp=0xc6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x879c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x879c, .value=0x40, .type=IO_READ},
        {.addr=0x879d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_006F) {
    const struct CPU_State initial_cpu = {.pc=0x8298, .a=0xff, .x=0x93, .y=0x90, .sp=0xd6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x8298, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8299, .a=0xff, .x=0x93, .y=0x90, .sp=0xd6, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x8298, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8298, .value=0x40, .type=IO_READ},
        {.addr=0x8299, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7eaf, .a=0x64, .x=0x64, .y=0xb3, .sp=0x9b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7eaf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7eb0, .a=0x64, .x=0x64, .y=0xb3, .sp=0x9b, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x7eaf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7eaf, .value=0x40, .type=IO_READ},
        {.addr=0x7eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0071) {
    const struct CPU_State initial_cpu = {.pc=0x88d1, .a=0xbc, .x=0xf8, .y=0xb1, .sp=0xaf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x88d1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x88d2, .a=0xbc, .x=0xf8, .y=0xb1, .sp=0xaf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x88d1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x88d1, .value=0x40, .type=IO_READ},
        {.addr=0x88d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0072) {
    const struct CPU_State initial_cpu = {.pc=0x4b61, .a=0xa0, .x=0xb3, .y=0x48, .sp=0x3d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b61, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4b62, .a=0xa0, .x=0xb3, .y=0x48, .sp=0x3d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x4b61, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4b61, .value=0x40, .type=IO_READ},
        {.addr=0x4b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0073) {
    const struct CPU_State initial_cpu = {.pc=0x9f45, .a=0xa8, .x=0x65, .y=0x80, .sp=0x28, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f45, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9f46, .a=0xa8, .x=0x65, .y=0x80, .sp=0x28, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x9f45, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9f45, .value=0x40, .type=IO_READ},
        {.addr=0x9f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0074) {
    const struct CPU_State initial_cpu = {.pc=0x1387, .a=0xf8, .x=0xaf, .y=0x6e, .sp=0x4c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1387, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1388, .a=0xf8, .x=0xaf, .y=0x6e, .sp=0x4c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x1387, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1387, .value=0x40, .type=IO_READ},
        {.addr=0x1388, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0075) {
    const struct CPU_State initial_cpu = {.pc=0x73db, .a=0x48, .x=0xd5, .y=0xae, .sp=0xd5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x73db, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x73dc, .a=0x48, .x=0xd5, .y=0xae, .sp=0xd5, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x73db, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x73db, .value=0x40, .type=IO_READ},
        {.addr=0x73dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0076) {
    const struct CPU_State initial_cpu = {.pc=0xbd0b, .a=0xe9, .x=0xfa, .y=0x22, .sp=0x75, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbd0c, .a=0xe9, .x=0xfa, .y=0x22, .sp=0x75, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbd0b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbd0b, .value=0x40, .type=IO_READ},
        {.addr=0xbd0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0077) {
    const struct CPU_State initial_cpu = {.pc=0x65d2, .a=0x72, .x=0x69, .y=0x98, .sp=0xda, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x65d2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x65d3, .a=0x72, .x=0x69, .y=0x98, .sp=0xda, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x65d2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x65d2, .value=0x40, .type=IO_READ},
        {.addr=0x65d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0078) {
    const struct CPU_State initial_cpu = {.pc=0x3223, .a=0xf5, .x=0x31, .y=0x02, .sp=0x5e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3223, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3224, .a=0xf5, .x=0x31, .y=0x02, .sp=0x5e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3223, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3223, .value=0x40, .type=IO_READ},
        {.addr=0x3224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0079) {
    const struct CPU_State initial_cpu = {.pc=0xb327, .a=0x0b, .x=0x14, .y=0x1b, .sp=0xe4, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb327, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb328, .a=0x0b, .x=0x14, .y=0x1b, .sp=0xe4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb327, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb327, .value=0x40, .type=IO_READ},
        {.addr=0xb328, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007A) {
    const struct CPU_State initial_cpu = {.pc=0xe731, .a=0xaf, .x=0xb0, .y=0xd9, .sp=0x0e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe731, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe732, .a=0xaf, .x=0xb0, .y=0xd9, .sp=0x0e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe731, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe731, .value=0x40, .type=IO_READ},
        {.addr=0xe732, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007B) {
    const struct CPU_State initial_cpu = {.pc=0xdeef, .a=0x28, .x=0x9a, .y=0x3a, .sp=0x28, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xdeef, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdef0, .a=0x28, .x=0x9a, .y=0x3a, .sp=0x28, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xdeef, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdeef, .value=0x40, .type=IO_READ},
        {.addr=0xdef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007C) {
    const struct CPU_State initial_cpu = {.pc=0x119e, .a=0xbe, .x=0x5a, .y=0xc8, .sp=0xef, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x119e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x119f, .a=0xbe, .x=0x5a, .y=0xc8, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x119e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x119e, .value=0x40, .type=IO_READ},
        {.addr=0x119f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007D) {
    const struct CPU_State initial_cpu = {.pc=0xfd0f, .a=0x4a, .x=0x0b, .y=0xbc, .sp=0x11, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd10, .a=0x4a, .x=0x0b, .y=0xbc, .sp=0x11, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xfd0f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd0f, .value=0x40, .type=IO_READ},
        {.addr=0xfd10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007E) {
    const struct CPU_State initial_cpu = {.pc=0xd6b1, .a=0x4d, .x=0x74, .y=0x85, .sp=0x7e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd6b2, .a=0x4d, .x=0x74, .y=0x85, .sp=0x7e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xd6b1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd6b1, .value=0x40, .type=IO_READ},
        {.addr=0xd6b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4332, .a=0x85, .x=0xac, .y=0xbf, .sp=0xe2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4332, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4333, .a=0x85, .x=0xac, .y=0xbf, .sp=0xe2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4332, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4332, .value=0x40, .type=IO_READ},
        {.addr=0x4333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0080) {
    const struct CPU_State initial_cpu = {.pc=0xd17e, .a=0x24, .x=0x54, .y=0x18, .sp=0x09, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd17e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd17f, .a=0x24, .x=0x54, .y=0x18, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd17e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd17e, .value=0x40, .type=IO_READ},
        {.addr=0xd17f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0081) {
    const struct CPU_State initial_cpu = {.pc=0x6d9f, .a=0x24, .x=0x51, .y=0xb8, .sp=0x8c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x6d9f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6da0, .a=0x24, .x=0x51, .y=0xb8, .sp=0x8c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x6d9f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6d9f, .value=0x40, .type=IO_READ},
        {.addr=0x6da0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0082) {
    const struct CPU_State initial_cpu = {.pc=0x6847, .a=0x51, .x=0x56, .y=0xa6, .sp=0x2b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x6847, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6848, .a=0x51, .x=0x56, .y=0xa6, .sp=0x2b, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x6847, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6847, .value=0x40, .type=IO_READ},
        {.addr=0x6848, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4c9b, .a=0x4f, .x=0x3c, .y=0x92, .sp=0x21, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4c9c, .a=0x4f, .x=0x3c, .y=0x92, .sp=0x21, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x4c9b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4c9b, .value=0x40, .type=IO_READ},
        {.addr=0x4c9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0084) {
    const struct CPU_State initial_cpu = {.pc=0xc0c1, .a=0x49, .x=0xa3, .y=0x26, .sp=0x3e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc0c2, .a=0x49, .x=0xa3, .y=0x26, .sp=0x3e, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xc0c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc0c1, .value=0x40, .type=IO_READ},
        {.addr=0xc0c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0085) {
    const struct CPU_State initial_cpu = {.pc=0x8e77, .a=0x79, .x=0x25, .y=0xf0, .sp=0xb5, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8e77, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8e78, .a=0x79, .x=0x25, .y=0xf0, .sp=0xb5, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8e77, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8e77, .value=0x40, .type=IO_READ},
        {.addr=0x8e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0086) {
    const struct CPU_State initial_cpu = {.pc=0x8352, .a=0x1a, .x=0xeb, .y=0x31, .sp=0xe7, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8352, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8353, .a=0x1a, .x=0xeb, .y=0x31, .sp=0xe7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8352, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8352, .value=0x40, .type=IO_READ},
        {.addr=0x8353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0087) {
    const struct CPU_State initial_cpu = {.pc=0x56e8, .a=0x1e, .x=0x67, .y=0x67, .sp=0xe3, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x56e8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x56e9, .a=0x1e, .x=0x67, .y=0x67, .sp=0xe3, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x56e8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x56e8, .value=0x40, .type=IO_READ},
        {.addr=0x56e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0088) {
    const struct CPU_State initial_cpu = {.pc=0x18a7, .a=0xb2, .x=0x79, .y=0xe5, .sp=0xd9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x18a7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x18a8, .a=0xb2, .x=0x79, .y=0xe5, .sp=0xd9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x18a7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x18a7, .value=0x40, .type=IO_READ},
        {.addr=0x18a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0089) {
    const struct CPU_State initial_cpu = {.pc=0x771c, .a=0x96, .x=0x03, .y=0xf0, .sp=0x16, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x771c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x771d, .a=0x96, .x=0x03, .y=0xf0, .sp=0x16, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x771c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x771c, .value=0x40, .type=IO_READ},
        {.addr=0x771d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008A) {
    const struct CPU_State initial_cpu = {.pc=0x361d, .a=0x8b, .x=0xd3, .y=0xbe, .sp=0x3e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x361d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x361e, .a=0x8b, .x=0xd3, .y=0xbe, .sp=0x3e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x361d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x361d, .value=0x40, .type=IO_READ},
        {.addr=0x361e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008B) {
    const struct CPU_State initial_cpu = {.pc=0x4c52, .a=0xc9, .x=0x50, .y=0xb5, .sp=0x9f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c52, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4c53, .a=0xc9, .x=0x50, .y=0xb5, .sp=0x9f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4c52, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4c52, .value=0x40, .type=IO_READ},
        {.addr=0x4c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008C) {
    const struct CPU_State initial_cpu = {.pc=0x71d7, .a=0x10, .x=0xc5, .y=0xdd, .sp=0x6d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x71d7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x71d8, .a=0x10, .x=0xc5, .y=0xdd, .sp=0x6d, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x71d7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x71d7, .value=0x40, .type=IO_READ},
        {.addr=0x71d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008D) {
    const struct CPU_State initial_cpu = {.pc=0xfbdb, .a=0xfa, .x=0x02, .y=0x0f, .sp=0x75, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xfbdb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfbdc, .a=0xfa, .x=0x02, .y=0x0f, .sp=0x75, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xfbdb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfbdb, .value=0x40, .type=IO_READ},
        {.addr=0xfbdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008E) {
    const struct CPU_State initial_cpu = {.pc=0x3649, .a=0x33, .x=0x96, .y=0x85, .sp=0x34, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3649, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x364a, .a=0x33, .x=0x96, .y=0x85, .sp=0x34, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3649, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3649, .value=0x40, .type=IO_READ},
        {.addr=0x364a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_008F) {
    const struct CPU_State initial_cpu = {.pc=0xea1a, .a=0xd2, .x=0x33, .y=0xac, .sp=0x00, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xea1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xea1b, .a=0xd2, .x=0x33, .y=0xac, .sp=0x00, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xea1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xea1a, .value=0x40, .type=IO_READ},
        {.addr=0xea1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0090) {
    const struct CPU_State initial_cpu = {.pc=0xff69, .a=0x45, .x=0x42, .y=0x3a, .sp=0x6c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xff69, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xff6a, .a=0x45, .x=0x42, .y=0x3a, .sp=0x6c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xff69, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xff69, .value=0x40, .type=IO_READ},
        {.addr=0xff6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0091) {
    const struct CPU_State initial_cpu = {.pc=0x67a4, .a=0x10, .x=0x40, .y=0x98, .sp=0xef, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x67a4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x67a5, .a=0x10, .x=0x40, .y=0x98, .sp=0xef, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x67a4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x67a4, .value=0x40, .type=IO_READ},
        {.addr=0x67a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0092) {
    const struct CPU_State initial_cpu = {.pc=0x82a4, .a=0x90, .x=0x81, .y=0xb4, .sp=0xae, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x82a4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x82a5, .a=0x90, .x=0x81, .y=0xb4, .sp=0xae, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x82a4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x82a4, .value=0x40, .type=IO_READ},
        {.addr=0x82a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0093) {
    const struct CPU_State initial_cpu = {.pc=0x514b, .a=0x15, .x=0x50, .y=0x47, .sp=0x39, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x514b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x514c, .a=0x15, .x=0x50, .y=0x47, .sp=0x39, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x514b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x514b, .value=0x40, .type=IO_READ},
        {.addr=0x514c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8cfd, .a=0x1a, .x=0x27, .y=0xd0, .sp=0xd0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8cfd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8cfe, .a=0x1a, .x=0x27, .y=0xd0, .sp=0xd0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8cfd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8cfd, .value=0x40, .type=IO_READ},
        {.addr=0x8cfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0095) {
    const struct CPU_State initial_cpu = {.pc=0xa99f, .a=0x7c, .x=0xd1, .y=0x77, .sp=0x4c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa99f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa9a0, .a=0x7c, .x=0xd1, .y=0x77, .sp=0x4c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xa99f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa99f, .value=0x40, .type=IO_READ},
        {.addr=0xa9a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0096) {
    const struct CPU_State initial_cpu = {.pc=0xfe6f, .a=0x7d, .x=0x3c, .y=0x01, .sp=0x93, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xfe6f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfe70, .a=0x7d, .x=0x3c, .y=0x01, .sp=0x93, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xfe6f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfe6f, .value=0x40, .type=IO_READ},
        {.addr=0xfe70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0097) {
    const struct CPU_State initial_cpu = {.pc=0x8009, .a=0x30, .x=0x5a, .y=0x03, .sp=0x2c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8009, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x800a, .a=0x30, .x=0x5a, .y=0x03, .sp=0x2c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8009, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8009, .value=0x40, .type=IO_READ},
        {.addr=0x800a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8177, .a=0x2b, .x=0x9b, .y=0xc3, .sp=0x76, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x8177, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8178, .a=0x2b, .x=0x9b, .y=0xc3, .sp=0x76, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x8177, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8177, .value=0x40, .type=IO_READ},
        {.addr=0x8178, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0099) {
    const struct CPU_State initial_cpu = {.pc=0x06e2, .a=0x41, .x=0x0c, .y=0x93, .sp=0x02, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x06e2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06e3, .a=0x41, .x=0x0c, .y=0x93, .sp=0x02, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x06e2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06e2, .value=0x40, .type=IO_READ},
        {.addr=0x06e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009A) {
    const struct CPU_State initial_cpu = {.pc=0xbc7e, .a=0x59, .x=0xeb, .y=0x08, .sp=0x01, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbc7e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbc7f, .a=0x59, .x=0xeb, .y=0x08, .sp=0x01, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xbc7e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbc7e, .value=0x40, .type=IO_READ},
        {.addr=0xbc7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009B) {
    const struct CPU_State initial_cpu = {.pc=0xa88e, .a=0xe7, .x=0x14, .y=0xe1, .sp=0x62, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa88e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa88f, .a=0xe7, .x=0x14, .y=0xe1, .sp=0x62, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa88e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa88e, .value=0x40, .type=IO_READ},
        {.addr=0xa88f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009C) {
    const struct CPU_State initial_cpu = {.pc=0x81a7, .a=0xbb, .x=0x1d, .y=0x94, .sp=0x9e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x81a7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x81a8, .a=0xbb, .x=0x1d, .y=0x94, .sp=0x9e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x81a7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x81a7, .value=0x40, .type=IO_READ},
        {.addr=0x81a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009D) {
    const struct CPU_State initial_cpu = {.pc=0xc692, .a=0xe8, .x=0x03, .y=0xc1, .sp=0x8c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc692, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc693, .a=0xe8, .x=0x03, .y=0xc1, .sp=0x8c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xc692, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc692, .value=0x40, .type=IO_READ},
        {.addr=0xc693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009E) {
    const struct CPU_State initial_cpu = {.pc=0xa13c, .a=0x15, .x=0xc0, .y=0xc0, .sp=0xf2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa13c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa13d, .a=0x15, .x=0xc0, .y=0xc0, .sp=0xf2, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xa13c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa13c, .value=0x40, .type=IO_READ},
        {.addr=0xa13d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_009F) {
    const struct CPU_State initial_cpu = {.pc=0xda1c, .a=0xd4, .x=0xe3, .y=0x37, .sp=0x45, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xda1c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda1d, .a=0xd4, .x=0xe3, .y=0x37, .sp=0x45, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xda1c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda1c, .value=0x40, .type=IO_READ},
        {.addr=0xda1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xac0d, .a=0x42, .x=0x57, .y=0x95, .sp=0x72, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xac0d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xac0e, .a=0x42, .x=0x57, .y=0x95, .sp=0x72, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xac0d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xac0d, .value=0x40, .type=IO_READ},
        {.addr=0xac0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x61a4, .a=0xc1, .x=0xe7, .y=0x49, .sp=0x6c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x61a4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x61a5, .a=0xc1, .x=0xe7, .y=0x49, .sp=0x6c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x61a4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x61a4, .value=0x40, .type=IO_READ},
        {.addr=0x61a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xf692, .a=0xb1, .x=0x1a, .y=0x52, .sp=0xd5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xf692, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf693, .a=0xb1, .x=0x1a, .y=0x52, .sp=0xd5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf692, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf692, .value=0x40, .type=IO_READ},
        {.addr=0xf693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x0a26, .a=0x85, .x=0x5d, .y=0xe4, .sp=0x15, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0a26, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0a27, .a=0x85, .x=0x5d, .y=0xe4, .sp=0x15, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0a26, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0a26, .value=0x40, .type=IO_READ},
        {.addr=0x0a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x5740, .a=0x38, .x=0x31, .y=0x6a, .sp=0x3c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x5740, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5741, .a=0x38, .x=0x31, .y=0x6a, .sp=0x3c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5740, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5740, .value=0x40, .type=IO_READ},
        {.addr=0x5741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x5386, .a=0x58, .x=0xc3, .y=0xb0, .sp=0x63, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5386, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5387, .a=0x58, .x=0xc3, .y=0xb0, .sp=0x63, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5386, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5386, .value=0x40, .type=IO_READ},
        {.addr=0x5387, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x0097, .a=0x56, .x=0x6d, .y=0xec, .sp=0xec, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0098, .a=0x56, .x=0x6d, .y=0xec, .sp=0xec, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0097, .value=0x40, .type=IO_READ},
        {.addr=0x0098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x1ca8, .a=0x18, .x=0xef, .y=0xbb, .sp=0x0c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1ca9, .a=0x18, .x=0xef, .y=0xbb, .sp=0x0c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1ca8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1ca8, .value=0x40, .type=IO_READ},
        {.addr=0x1ca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x78fa, .a=0xb9, .x=0x4b, .y=0x81, .sp=0xbc, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x78fa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x78fb, .a=0xb9, .x=0x4b, .y=0x81, .sp=0xbc, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x78fa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x78fa, .value=0x40, .type=IO_READ},
        {.addr=0x78fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xef8d, .a=0xa6, .x=0x6d, .y=0x46, .sp=0x44, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xef8d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef8e, .a=0xa6, .x=0x6d, .y=0x46, .sp=0x44, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xef8d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef8d, .value=0x40, .type=IO_READ},
        {.addr=0xef8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xebf6, .a=0x47, .x=0xb1, .y=0xd8, .sp=0x37, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xebf6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xebf7, .a=0x47, .x=0xb1, .y=0xd8, .sp=0x37, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xebf6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xebf6, .value=0x40, .type=IO_READ},
        {.addr=0xebf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3857, .a=0x94, .x=0xeb, .y=0x0c, .sp=0xa4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3857, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3858, .a=0x94, .x=0xeb, .y=0x0c, .sp=0xa4, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x3857, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3857, .value=0x40, .type=IO_READ},
        {.addr=0x3858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x0287, .a=0xa5, .x=0xb3, .y=0xa1, .sp=0xdb, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0287, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0288, .a=0xa5, .x=0xb3, .y=0xa1, .sp=0xdb, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0287, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0287, .value=0x40, .type=IO_READ},
        {.addr=0x0288, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xb7b5, .a=0x7f, .x=0x2c, .y=0x1c, .sp=0x41, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb7b6, .a=0x7f, .x=0x2c, .y=0x1c, .sp=0x41, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb7b5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb7b5, .value=0x40, .type=IO_READ},
        {.addr=0xb7b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x619d, .a=0xac, .x=0x74, .y=0xc8, .sp=0x16, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x619d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x619e, .a=0xac, .x=0x74, .y=0xc8, .sp=0x16, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x619d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x619d, .value=0x40, .type=IO_READ},
        {.addr=0x619e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xef95, .a=0x86, .x=0x2c, .y=0xd6, .sp=0xfd, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xef95, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef96, .a=0x86, .x=0x2c, .y=0xd6, .sp=0xfd, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xef95, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef95, .value=0x40, .type=IO_READ},
        {.addr=0xef96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb322, .a=0x06, .x=0xa0, .y=0x46, .sp=0xca, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb322, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb323, .a=0x06, .x=0xa0, .y=0x46, .sp=0xca, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xb322, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb322, .value=0x40, .type=IO_READ},
        {.addr=0xb323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xfa02, .a=0xfd, .x=0x88, .y=0x14, .sp=0x22, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfa02, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfa03, .a=0xfd, .x=0x88, .y=0x14, .sp=0x22, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfa02, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfa02, .value=0x40, .type=IO_READ},
        {.addr=0xfa03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x274f, .a=0x41, .x=0x1a, .y=0x50, .sp=0xc3, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x274f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2750, .a=0x41, .x=0x1a, .y=0x50, .sp=0xc3, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x274f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x274f, .value=0x40, .type=IO_READ},
        {.addr=0x2750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x18cc, .a=0x7c, .x=0xbd, .y=0xb9, .sp=0x46, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x18cc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x18cd, .a=0x7c, .x=0xbd, .y=0xb9, .sp=0x46, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x18cc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x18cc, .value=0x40, .type=IO_READ},
        {.addr=0x18cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x60a9, .a=0xb8, .x=0x10, .y=0x6e, .sp=0x10, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x60a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x60aa, .a=0xb8, .x=0x10, .y=0x6e, .sp=0x10, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x60a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x60a9, .value=0x40, .type=IO_READ},
        {.addr=0x60aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xaf8e, .a=0xc3, .x=0xd0, .y=0x84, .sp=0xd8, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0xc3, .x=0xd0, .y=0x84, .sp=0xd8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xaf8e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf8e, .value=0x40, .type=IO_READ},
        {.addr=0xaf8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xda55, .a=0xea, .x=0xc2, .y=0x62, .sp=0x98, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xda55, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda56, .a=0xea, .x=0xc2, .y=0x62, .sp=0x98, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xda55, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda55, .value=0x40, .type=IO_READ},
        {.addr=0xda56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9a50, .a=0x33, .x=0x78, .y=0x26, .sp=0xa9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9a50, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9a51, .a=0x33, .x=0x78, .y=0x26, .sp=0xa9, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x9a50, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9a50, .value=0x40, .type=IO_READ},
        {.addr=0x9a51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x2b80, .a=0x34, .x=0xe0, .y=0xbe, .sp=0x32, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b80, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2b81, .a=0x34, .x=0xe0, .y=0xbe, .sp=0x32, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2b80, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2b80, .value=0x40, .type=IO_READ},
        {.addr=0x2b81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x0dc3, .a=0x29, .x=0x70, .y=0x1b, .sp=0x14, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0dc4, .a=0x29, .x=0x70, .y=0x1b, .sp=0x14, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0dc3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0dc3, .value=0x40, .type=IO_READ},
        {.addr=0x0dc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xefcc, .a=0x78, .x=0xc8, .y=0xec, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xefcc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xefcd, .a=0x78, .x=0xc8, .y=0xec, .sp=0x7d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xefcc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xefcc, .value=0x40, .type=IO_READ},
        {.addr=0xefcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x53d2, .a=0x82, .x=0xd4, .y=0x91, .sp=0x7f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x53d2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x53d3, .a=0x82, .x=0xd4, .y=0x91, .sp=0x7f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x53d2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x53d2, .value=0x40, .type=IO_READ},
        {.addr=0x53d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x24db, .a=0x92, .x=0x89, .y=0x35, .sp=0x09, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x24db, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x24dc, .a=0x92, .x=0x89, .y=0x35, .sp=0x09, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x24db, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x24db, .value=0x40, .type=IO_READ},
        {.addr=0x24dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xf4ec, .a=0xbe, .x=0x42, .y=0x28, .sp=0x34, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ec, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf4ed, .a=0xbe, .x=0x42, .y=0x28, .sp=0x34, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf4ec, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf4ec, .value=0x40, .type=IO_READ},
        {.addr=0xf4ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xec8a, .a=0x15, .x=0xcd, .y=0x93, .sp=0xc0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xec8a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xec8b, .a=0x15, .x=0xcd, .y=0x93, .sp=0xc0, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xec8a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xec8a, .value=0x40, .type=IO_READ},
        {.addr=0xec8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x6827, .a=0x7d, .x=0x5f, .y=0x66, .sp=0x9d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6827, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6828, .a=0x7d, .x=0x5f, .y=0x66, .sp=0x9d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6827, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6827, .value=0x40, .type=IO_READ},
        {.addr=0x6828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xbb9c, .a=0x10, .x=0xef, .y=0xf0, .sp=0xa1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbb9d, .a=0x10, .x=0xef, .y=0xf0, .sp=0xa1, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xbb9c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbb9c, .value=0x40, .type=IO_READ},
        {.addr=0xbb9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xd80b, .a=0xb0, .x=0x02, .y=0x65, .sp=0xaa, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd80b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd80c, .a=0xb0, .x=0x02, .y=0x65, .sp=0xaa, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xd80b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd80b, .value=0x40, .type=IO_READ},
        {.addr=0xd80c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xee42, .a=0xfa, .x=0x74, .y=0xd2, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xee42, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee43, .a=0xfa, .x=0x74, .y=0xd2, .sp=0x3f, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xee42, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee42, .value=0x40, .type=IO_READ},
        {.addr=0xee43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x8c4b, .a=0xcb, .x=0xcf, .y=0x95, .sp=0x57, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8c4c, .a=0xcb, .x=0xcf, .y=0x95, .sp=0x57, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8c4b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8c4b, .value=0x40, .type=IO_READ},
        {.addr=0x8c4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x1bc3, .a=0x34, .x=0xe9, .y=0x51, .sp=0xb1, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1bc4, .a=0x34, .x=0xe9, .y=0x51, .sp=0xb1, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x1bc3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1bc3, .value=0x40, .type=IO_READ},
        {.addr=0x1bc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xbacb, .a=0x47, .x=0xaf, .y=0x4b, .sp=0xa4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xbacb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbacc, .a=0x47, .x=0xaf, .y=0x4b, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbacb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbacb, .value=0x40, .type=IO_READ},
        {.addr=0xbacc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x9aae, .a=0xa9, .x=0xab, .y=0x52, .sp=0x3b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9aae, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9aaf, .a=0xa9, .x=0xab, .y=0x52, .sp=0x3b, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9aae, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9aae, .value=0x40, .type=IO_READ},
        {.addr=0x9aaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x7499, .a=0x99, .x=0x44, .y=0xb8, .sp=0x17, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7499, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x749a, .a=0x99, .x=0x44, .y=0xb8, .sp=0x17, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7499, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7499, .value=0x40, .type=IO_READ},
        {.addr=0x749a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x11db, .a=0x7a, .x=0x4c, .y=0x41, .sp=0xc4, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x11db, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x11dc, .a=0x7a, .x=0x4c, .y=0x41, .sp=0xc4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x11db, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x11db, .value=0x40, .type=IO_READ},
        {.addr=0x11dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1dd5, .a=0x2c, .x=0x03, .y=0xb2, .sp=0x8d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1dd6, .a=0x2c, .x=0x03, .y=0xb2, .sp=0x8d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1dd5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1dd5, .value=0x40, .type=IO_READ},
        {.addr=0x1dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7fa6, .a=0xfd, .x=0xdf, .y=0x05, .sp=0xae, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7fa6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7fa7, .a=0xfd, .x=0xdf, .y=0x05, .sp=0xae, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7fa6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7fa6, .value=0x40, .type=IO_READ},
        {.addr=0x7fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x4556, .a=0xf4, .x=0x9f, .y=0x44, .sp=0x17, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4556, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4557, .a=0xf4, .x=0x9f, .y=0x44, .sp=0x17, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x4556, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4556, .value=0x40, .type=IO_READ},
        {.addr=0x4557, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6e2f, .a=0x80, .x=0x6d, .y=0x10, .sp=0xb7, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6e30, .a=0x80, .x=0x6d, .y=0x10, .sp=0xb7, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x6e2f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6e2f, .value=0x40, .type=IO_READ},
        {.addr=0x6e30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x3bc7, .a=0xfd, .x=0x17, .y=0x53, .sp=0xc7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3bc8, .a=0xfd, .x=0x17, .y=0x53, .sp=0xc7, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x3bc7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3bc7, .value=0x40, .type=IO_READ},
        {.addr=0x3bc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0117, .a=0x25, .x=0xf1, .y=0x0f, .sp=0x5f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0118, .a=0x25, .x=0xf1, .y=0x0f, .sp=0x5f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0117, .value=0x40, .type=IO_READ},
        {.addr=0x0118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x2960, .a=0x77, .x=0x63, .y=0x53, .sp=0x7f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2960, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2961, .a=0x77, .x=0x63, .y=0x53, .sp=0x7f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2960, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2960, .value=0x40, .type=IO_READ},
        {.addr=0x2961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe9c2, .a=0x71, .x=0x72, .y=0x34, .sp=0x70, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe9c3, .a=0x71, .x=0x72, .y=0x34, .sp=0x70, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe9c2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe9c2, .value=0x40, .type=IO_READ},
        {.addr=0xe9c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x9e6e, .a=0x2a, .x=0x4b, .y=0xbd, .sp=0x1a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9e6f, .a=0x2a, .x=0x4b, .y=0xbd, .sp=0x1a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9e6e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9e6e, .value=0x40, .type=IO_READ},
        {.addr=0x9e6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x916f, .a=0xac, .x=0x1d, .y=0x8a, .sp=0x29, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x916f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9170, .a=0xac, .x=0x1d, .y=0x8a, .sp=0x29, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x916f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x916f, .value=0x40, .type=IO_READ},
        {.addr=0x9170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x67de, .a=0x9c, .x=0x42, .y=0x4c, .sp=0x0c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x67de, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x67df, .a=0x9c, .x=0x42, .y=0x4c, .sp=0x0c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x67de, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x67de, .value=0x40, .type=IO_READ},
        {.addr=0x67df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xf372, .a=0x25, .x=0x78, .y=0x98, .sp=0xae, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xf372, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf373, .a=0x25, .x=0x78, .y=0x98, .sp=0xae, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xf372, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf372, .value=0x40, .type=IO_READ},
        {.addr=0xf373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xff59, .a=0x67, .x=0x45, .y=0x33, .sp=0x6e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xff59, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xff5a, .a=0x67, .x=0x45, .y=0x33, .sp=0x6e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xff59, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xff59, .value=0x40, .type=IO_READ},
        {.addr=0xff5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x38a4, .a=0xe5, .x=0x73, .y=0x78, .sp=0x2e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x38a4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x38a5, .a=0xe5, .x=0x73, .y=0x78, .sp=0x2e, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x38a4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x38a4, .value=0x40, .type=IO_READ},
        {.addr=0x38a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x4894, .a=0x65, .x=0x96, .y=0x2b, .sp=0xd0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4894, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4895, .a=0x65, .x=0x96, .y=0x2b, .sp=0xd0, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4894, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4894, .value=0x40, .type=IO_READ},
        {.addr=0x4895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x184f, .a=0x72, .x=0xf6, .y=0x81, .sp=0xbf, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x184f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1850, .a=0x72, .x=0xf6, .y=0x81, .sp=0xbf, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x184f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x184f, .value=0x40, .type=IO_READ},
        {.addr=0x1850, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xe3c6, .a=0x12, .x=0xd2, .y=0x87, .sp=0xd6, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3c6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe3c7, .a=0x12, .x=0xd2, .y=0x87, .sp=0xd6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe3c6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe3c6, .value=0x40, .type=IO_READ},
        {.addr=0xe3c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x8f79, .a=0xff, .x=0x17, .y=0xfa, .sp=0x75, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8f79, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8f7a, .a=0xff, .x=0x17, .y=0xfa, .sp=0x75, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x8f79, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8f79, .value=0x40, .type=IO_READ},
        {.addr=0x8f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2ae0, .a=0xd8, .x=0xa9, .y=0x4f, .sp=0xaf, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2ae0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2ae1, .a=0xd8, .x=0xa9, .y=0x4f, .sp=0xaf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2ae0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2ae0, .value=0x40, .type=IO_READ},
        {.addr=0x2ae1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x178e, .a=0x66, .x=0x0e, .y=0x53, .sp=0xb9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x178e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x178f, .a=0x66, .x=0x0e, .y=0x53, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x178e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x178e, .value=0x40, .type=IO_READ},
        {.addr=0x178f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xdd0f, .a=0xec, .x=0xf9, .y=0xc4, .sp=0xc5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdd10, .a=0xec, .x=0xf9, .y=0xc4, .sp=0xc5, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xdd0f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdd0f, .value=0x40, .type=IO_READ},
        {.addr=0xdd10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xcc6f, .a=0x15, .x=0xc9, .y=0x03, .sp=0x4b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcc70, .a=0x15, .x=0xc9, .y=0x03, .sp=0x4b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xcc6f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcc6f, .value=0x40, .type=IO_READ},
        {.addr=0xcc70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x5a4c, .a=0x6a, .x=0x11, .y=0xb0, .sp=0xbd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5a4c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5a4d, .a=0x6a, .x=0x11, .y=0xb0, .sp=0xbd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5a4c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5a4c, .value=0x40, .type=IO_READ},
        {.addr=0x5a4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x6cbd, .a=0xdd, .x=0x5e, .y=0xbb, .sp=0x9c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6cbe, .a=0xdd, .x=0x5e, .y=0xbb, .sp=0x9c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6cbd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6cbd, .value=0x40, .type=IO_READ},
        {.addr=0x6cbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x0f7a, .a=0x8b, .x=0x2b, .y=0x49, .sp=0x72, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f7a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f7b, .a=0x8b, .x=0x2b, .y=0x49, .sp=0x72, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0f7a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f7a, .value=0x40, .type=IO_READ},
        {.addr=0x0f7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x766b, .a=0x22, .x=0x3c, .y=0x6b, .sp=0x5c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x766b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x766c, .a=0x22, .x=0x3c, .y=0x6b, .sp=0x5c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x766b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x766b, .value=0x40, .type=IO_READ},
        {.addr=0x766c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x58ae, .a=0x5b, .x=0x70, .y=0x71, .sp=0x05, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x58ae, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x58af, .a=0x5b, .x=0x70, .y=0x71, .sp=0x05, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x58ae, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x58ae, .value=0x40, .type=IO_READ},
        {.addr=0x58af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6ffa, .a=0x44, .x=0x23, .y=0x24, .sp=0xff, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6ffb, .a=0x44, .x=0x23, .y=0x24, .sp=0xff, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6ffa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6ffa, .value=0x40, .type=IO_READ},
        {.addr=0x6ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x95bc, .a=0x93, .x=0xff, .y=0x8b, .sp=0xa0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x95bc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x95bd, .a=0x93, .x=0xff, .y=0x8b, .sp=0xa0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x95bc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x95bc, .value=0x40, .type=IO_READ},
        {.addr=0x95bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xe194, .a=0x9c, .x=0x1e, .y=0x15, .sp=0x9f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe194, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe195, .a=0x9c, .x=0x1e, .y=0x15, .sp=0x9f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe194, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe194, .value=0x40, .type=IO_READ},
        {.addr=0xe195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa016, .a=0x5a, .x=0x78, .y=0x73, .sp=0xc5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa016, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa017, .a=0x5a, .x=0x78, .y=0x73, .sp=0xc5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa016, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa016, .value=0x40, .type=IO_READ},
        {.addr=0xa017, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xfc2a, .a=0xbf, .x=0xfd, .y=0x68, .sp=0xb0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xfc2a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfc2b, .a=0xbf, .x=0xfd, .y=0x68, .sp=0xb0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfc2a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfc2a, .value=0x40, .type=IO_READ},
        {.addr=0xfc2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xe920, .a=0x99, .x=0x55, .y=0x46, .sp=0x8c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe920, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe921, .a=0x99, .x=0x55, .y=0x46, .sp=0x8c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe920, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe920, .value=0x40, .type=IO_READ},
        {.addr=0xe921, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x06e1, .a=0x05, .x=0x2c, .y=0xd4, .sp=0x44, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x06e1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06e2, .a=0x05, .x=0x2c, .y=0xd4, .sp=0x44, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x06e1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06e1, .value=0x40, .type=IO_READ},
        {.addr=0x06e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xad04, .a=0x0d, .x=0x23, .y=0xbf, .sp=0xfe, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xad04, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xad05, .a=0x0d, .x=0x23, .y=0xbf, .sp=0xfe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xad04, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xad04, .value=0x40, .type=IO_READ},
        {.addr=0xad05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xccf6, .a=0xbe, .x=0x91, .y=0x20, .sp=0xe1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xccf6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xccf7, .a=0xbe, .x=0x91, .y=0x20, .sp=0xe1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xccf6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xccf6, .value=0x40, .type=IO_READ},
        {.addr=0xccf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x49b1, .a=0xa3, .x=0xf2, .y=0xa6, .sp=0x87, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x49b1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x49b2, .a=0xa3, .x=0xf2, .y=0xa6, .sp=0x87, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x49b1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x49b1, .value=0x40, .type=IO_READ},
        {.addr=0x49b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x40a9, .a=0xc4, .x=0xc4, .y=0x2d, .sp=0x43, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x40a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x40aa, .a=0xc4, .x=0xc4, .y=0x2d, .sp=0x43, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x40a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x40a9, .value=0x40, .type=IO_READ},
        {.addr=0x40aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x03f6, .a=0x33, .x=0x74, .y=0x9f, .sp=0xe6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x03f6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x03f7, .a=0x33, .x=0x74, .y=0x9f, .sp=0xe6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x03f6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x03f6, .value=0x40, .type=IO_READ},
        {.addr=0x03f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xe042, .a=0xf4, .x=0xa1, .y=0x5a, .sp=0x1e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe042, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe043, .a=0xf4, .x=0xa1, .y=0x5a, .sp=0x1e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xe042, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe042, .value=0x40, .type=IO_READ},
        {.addr=0xe043, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xfe89, .a=0x23, .x=0x78, .y=0xd2, .sp=0x50, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xfe89, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfe8a, .a=0x23, .x=0x78, .y=0xd2, .sp=0x50, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfe89, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfe89, .value=0x40, .type=IO_READ},
        {.addr=0xfe8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x95cc, .a=0x1c, .x=0xa0, .y=0x39, .sp=0x64, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x95cc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x95cd, .a=0x1c, .x=0xa0, .y=0x39, .sp=0x64, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x95cc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x95cc, .value=0x40, .type=IO_READ},
        {.addr=0x95cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x774a, .a=0xe9, .x=0xdb, .y=0x94, .sp=0x6c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x774a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x774b, .a=0xe9, .x=0xdb, .y=0x94, .sp=0x6c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x774a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x774a, .value=0x40, .type=IO_READ},
        {.addr=0x774b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x49f3, .a=0x57, .x=0x6f, .y=0x61, .sp=0x5f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x49f3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x49f4, .a=0x57, .x=0x6f, .y=0x61, .sp=0x5f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x49f3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x49f3, .value=0x40, .type=IO_READ},
        {.addr=0x49f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xe349, .a=0xef, .x=0x4b, .y=0x2b, .sp=0x84, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xe349, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe34a, .a=0xef, .x=0x4b, .y=0x2b, .sp=0x84, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xe349, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe349, .value=0x40, .type=IO_READ},
        {.addr=0xe34a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x79cc, .a=0x16, .x=0x23, .y=0x25, .sp=0x86, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x79cc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x79cd, .a=0x16, .x=0x23, .y=0x25, .sp=0x86, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x79cc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x79cc, .value=0x40, .type=IO_READ},
        {.addr=0x79cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xcf55, .a=0x37, .x=0xb5, .y=0xe8, .sp=0x27, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xcf55, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcf56, .a=0x37, .x=0xb5, .y=0xe8, .sp=0x27, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcf55, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcf55, .value=0x40, .type=IO_READ},
        {.addr=0xcf56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xa311, .a=0x21, .x=0x0b, .y=0x4d, .sp=0x73, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa311, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa312, .a=0x21, .x=0x0b, .y=0x4d, .sp=0x73, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xa311, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa311, .value=0x40, .type=IO_READ},
        {.addr=0xa312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xabaa, .a=0xc9, .x=0x4b, .y=0x70, .sp=0xd5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xabaa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xabab, .a=0xc9, .x=0x4b, .y=0x70, .sp=0xd5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xabaa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xabaa, .value=0x40, .type=IO_READ},
        {.addr=0xabab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x04c7, .a=0xe2, .x=0x3a, .y=0xd4, .sp=0x04, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x04c7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x04c8, .a=0xe2, .x=0x3a, .y=0xd4, .sp=0x04, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x04c7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x04c7, .value=0x40, .type=IO_READ},
        {.addr=0x04c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x3d60, .a=0x92, .x=0xc8, .y=0x5f, .sp=0x29, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x3d60, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3d61, .a=0x92, .x=0xc8, .y=0x5f, .sp=0x29, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3d60, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3d60, .value=0x40, .type=IO_READ},
        {.addr=0x3d61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x7c38, .a=0x7f, .x=0xa3, .y=0x04, .sp=0x5a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7c38, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7c39, .a=0x7f, .x=0xa3, .y=0x04, .sp=0x5a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7c38, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7c38, .value=0x40, .type=IO_READ},
        {.addr=0x7c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x61d6, .a=0xf0, .x=0x5c, .y=0xfd, .sp=0x80, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x61d6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x61d7, .a=0xf0, .x=0x5c, .y=0xfd, .sp=0x80, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x61d6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x61d6, .value=0x40, .type=IO_READ},
        {.addr=0x61d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x217c, .a=0x4d, .x=0x2c, .y=0xb2, .sp=0x96, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x217c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x217d, .a=0x4d, .x=0x2c, .y=0xb2, .sp=0x96, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x217c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x217c, .value=0x40, .type=IO_READ},
        {.addr=0x217d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xca76, .a=0x42, .x=0x1a, .y=0x77, .sp=0xff, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xca76, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xca77, .a=0x42, .x=0x1a, .y=0x77, .sp=0xff, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xca76, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xca76, .value=0x40, .type=IO_READ},
        {.addr=0xca77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0100) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0x01, .x=0x5d, .y=0xf1, .sp=0xaf, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd79f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd7a0, .a=0x01, .x=0x5d, .y=0xf1, .sp=0xaf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd79f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0x40, .type=IO_READ},
        {.addr=0xd7a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0101) {
    const struct CPU_State initial_cpu = {.pc=0xfecd, .a=0xd5, .x=0x68, .y=0x60, .sp=0xf6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xfecd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfece, .a=0xd5, .x=0x68, .y=0x60, .sp=0xf6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xfecd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfecd, .value=0x40, .type=IO_READ},
        {.addr=0xfece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0102) {
    const struct CPU_State initial_cpu = {.pc=0x27d8, .a=0x02, .x=0xb9, .y=0x14, .sp=0xdb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x27d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x27d9, .a=0x02, .x=0xb9, .y=0x14, .sp=0xdb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x27d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x27d8, .value=0x40, .type=IO_READ},
        {.addr=0x27d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0103) {
    const struct CPU_State initial_cpu = {.pc=0xa2f0, .a=0x7b, .x=0x75, .y=0x01, .sp=0xb8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa2f1, .a=0x7b, .x=0x75, .y=0x01, .sp=0xb8, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xa2f0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa2f0, .value=0x40, .type=IO_READ},
        {.addr=0xa2f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0104) {
    const struct CPU_State initial_cpu = {.pc=0x2593, .a=0xb0, .x=0xa0, .y=0xf2, .sp=0x62, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2593, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2594, .a=0xb0, .x=0xa0, .y=0xf2, .sp=0x62, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2593, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2593, .value=0x40, .type=IO_READ},
        {.addr=0x2594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0105) {
    const struct CPU_State initial_cpu = {.pc=0x31d7, .a=0xe3, .x=0x56, .y=0xb9, .sp=0xef, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x31d7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x31d8, .a=0xe3, .x=0x56, .y=0xb9, .sp=0xef, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x31d7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x31d7, .value=0x40, .type=IO_READ},
        {.addr=0x31d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0106) {
    const struct CPU_State initial_cpu = {.pc=0x2d30, .a=0x3e, .x=0xa0, .y=0xf3, .sp=0xbb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2d30, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2d31, .a=0x3e, .x=0xa0, .y=0xf3, .sp=0xbb, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x2d30, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2d30, .value=0x40, .type=IO_READ},
        {.addr=0x2d31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0107) {
    const struct CPU_State initial_cpu = {.pc=0xbda9, .a=0x11, .x=0x98, .y=0xfe, .sp=0x80, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xbda9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbdaa, .a=0x11, .x=0x98, .y=0xfe, .sp=0x80, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbda9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbda9, .value=0x40, .type=IO_READ},
        {.addr=0xbdaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0108) {
    const struct CPU_State initial_cpu = {.pc=0x1350, .a=0x2e, .x=0xf2, .y=0xb1, .sp=0x80, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1350, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1351, .a=0x2e, .x=0xf2, .y=0xb1, .sp=0x80, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x1350, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1350, .value=0x40, .type=IO_READ},
        {.addr=0x1351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0109) {
    const struct CPU_State initial_cpu = {.pc=0x2987, .a=0x20, .x=0x1c, .y=0x83, .sp=0xc3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2987, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2988, .a=0x20, .x=0x1c, .y=0x83, .sp=0xc3, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x2987, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2987, .value=0x40, .type=IO_READ},
        {.addr=0x2988, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010A) {
    const struct CPU_State initial_cpu = {.pc=0x145f, .a=0xdd, .x=0x1c, .y=0x53, .sp=0x7d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x145f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1460, .a=0xdd, .x=0x1c, .y=0x53, .sp=0x7d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x145f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x145f, .value=0x40, .type=IO_READ},
        {.addr=0x1460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010B) {
    const struct CPU_State initial_cpu = {.pc=0x6e06, .a=0x84, .x=0xa5, .y=0xe2, .sp=0xfa, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6e06, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6e07, .a=0x84, .x=0xa5, .y=0xe2, .sp=0xfa, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x6e06, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6e06, .value=0x40, .type=IO_READ},
        {.addr=0x6e07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010C) {
    const struct CPU_State initial_cpu = {.pc=0xc946, .a=0x79, .x=0xb0, .y=0x94, .sp=0x85, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc946, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc947, .a=0x79, .x=0xb0, .y=0x94, .sp=0x85, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xc946, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc946, .value=0x40, .type=IO_READ},
        {.addr=0xc947, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010D) {
    const struct CPU_State initial_cpu = {.pc=0x4023, .a=0xa7, .x=0x36, .y=0x06, .sp=0x07, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x4023, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4024, .a=0xa7, .x=0x36, .y=0x06, .sp=0x07, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4023, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4023, .value=0x40, .type=IO_READ},
        {.addr=0x4024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010E) {
    const struct CPU_State initial_cpu = {.pc=0x42a1, .a=0x00, .x=0xa5, .y=0x59, .sp=0xe5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x42a1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x42a2, .a=0x00, .x=0xa5, .y=0x59, .sp=0xe5, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x42a1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x42a1, .value=0x40, .type=IO_READ},
        {.addr=0x42a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_010F) {
    const struct CPU_State initial_cpu = {.pc=0xc016, .a=0xbd, .x=0xe6, .y=0x9c, .sp=0xe4, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc016, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc017, .a=0xbd, .x=0xe6, .y=0x9c, .sp=0xe4, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xc016, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc016, .value=0x40, .type=IO_READ},
        {.addr=0xc017, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0110) {
    const struct CPU_State initial_cpu = {.pc=0xd441, .a=0x17, .x=0x87, .y=0xf8, .sp=0x96, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd441, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd442, .a=0x17, .x=0x87, .y=0xf8, .sp=0x96, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd441, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd441, .value=0x40, .type=IO_READ},
        {.addr=0xd442, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0111) {
    const struct CPU_State initial_cpu = {.pc=0x14b5, .a=0x6a, .x=0xd2, .y=0xe3, .sp=0xe5, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x14b5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x14b6, .a=0x6a, .x=0xd2, .y=0xe3, .sp=0xe5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x14b5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x14b5, .value=0x40, .type=IO_READ},
        {.addr=0x14b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb45f, .a=0x29, .x=0xe6, .y=0xb8, .sp=0xe5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb45f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb460, .a=0x29, .x=0xe6, .y=0xb8, .sp=0xe5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb45f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb45f, .value=0x40, .type=IO_READ},
        {.addr=0xb460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0113) {
    const struct CPU_State initial_cpu = {.pc=0x1e65, .a=0x29, .x=0x5c, .y=0x35, .sp=0xbd, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1e65, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1e66, .a=0x29, .x=0x5c, .y=0x35, .sp=0xbd, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x1e65, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1e65, .value=0x40, .type=IO_READ},
        {.addr=0x1e66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0114) {
    const struct CPU_State initial_cpu = {.pc=0xafa5, .a=0xc2, .x=0xae, .y=0xa0, .sp=0xe5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xafa5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xafa6, .a=0xc2, .x=0xae, .y=0xa0, .sp=0xe5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xafa5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xafa5, .value=0x40, .type=IO_READ},
        {.addr=0xafa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0115) {
    const struct CPU_State initial_cpu = {.pc=0xee10, .a=0x50, .x=0x91, .y=0x00, .sp=0xf8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xee10, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee11, .a=0x50, .x=0x91, .y=0x00, .sp=0xf8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xee10, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee10, .value=0x40, .type=IO_READ},
        {.addr=0xee11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0116) {
    const struct CPU_State initial_cpu = {.pc=0x1ccc, .a=0x00, .x=0x88, .y=0x3a, .sp=0xb1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1ccd, .a=0x00, .x=0x88, .y=0x3a, .sp=0xb1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1ccc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1ccc, .value=0x40, .type=IO_READ},
        {.addr=0x1ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0117) {
    const struct CPU_State initial_cpu = {.pc=0x4332, .a=0x6d, .x=0x17, .y=0x5a, .sp=0x0e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4332, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4333, .a=0x6d, .x=0x17, .y=0x5a, .sp=0x0e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x4332, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4332, .value=0x40, .type=IO_READ},
        {.addr=0x4333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0118) {
    const struct CPU_State initial_cpu = {.pc=0x647c, .a=0x3b, .x=0x85, .y=0xc5, .sp=0xd3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x647c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x647d, .a=0x3b, .x=0x85, .y=0xc5, .sp=0xd3, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x647c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x647c, .value=0x40, .type=IO_READ},
        {.addr=0x647d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0119) {
    const struct CPU_State initial_cpu = {.pc=0xdca6, .a=0x2a, .x=0x90, .y=0xc6, .sp=0xa2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xdca6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdca7, .a=0x2a, .x=0x90, .y=0xc6, .sp=0xa2, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xdca6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdca6, .value=0x40, .type=IO_READ},
        {.addr=0xdca7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011A) {
    const struct CPU_State initial_cpu = {.pc=0x1a64, .a=0x82, .x=0x15, .y=0xc7, .sp=0x98, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1a64, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1a65, .a=0x82, .x=0x15, .y=0xc7, .sp=0x98, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1a64, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1a64, .value=0x40, .type=IO_READ},
        {.addr=0x1a65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011B) {
    const struct CPU_State initial_cpu = {.pc=0x5bfb, .a=0xeb, .x=0xa9, .y=0xd9, .sp=0xad, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5bfb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5bfc, .a=0xeb, .x=0xa9, .y=0xd9, .sp=0xad, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x5bfb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5bfb, .value=0x40, .type=IO_READ},
        {.addr=0x5bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011C) {
    const struct CPU_State initial_cpu = {.pc=0xcbba, .a=0x2d, .x=0xcb, .y=0x4f, .sp=0x2c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xcbba, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcbbb, .a=0x2d, .x=0xcb, .y=0x4f, .sp=0x2c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xcbba, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcbba, .value=0x40, .type=IO_READ},
        {.addr=0xcbbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011D) {
    const struct CPU_State initial_cpu = {.pc=0x01af, .a=0xfd, .x=0xd9, .y=0xcc, .sp=0x24, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x01b0, .a=0xfd, .x=0xd9, .y=0xcc, .sp=0x24, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x01af, .value=0x40, .type=IO_READ},
        {.addr=0x01b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011E) {
    const struct CPU_State initial_cpu = {.pc=0x84c8, .a=0xf6, .x=0x69, .y=0x2c, .sp=0x26, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x84c8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x84c9, .a=0xf6, .x=0x69, .y=0x2c, .sp=0x26, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x84c8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x84c8, .value=0x40, .type=IO_READ},
        {.addr=0x84c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_011F) {
    const struct CPU_State initial_cpu = {.pc=0xb900, .a=0x24, .x=0xb4, .y=0x11, .sp=0x7c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb900, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb901, .a=0x24, .x=0xb4, .y=0x11, .sp=0x7c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xb900, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb900, .value=0x40, .type=IO_READ},
        {.addr=0xb901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf94d, .a=0x23, .x=0x3b, .y=0x81, .sp=0x40, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf94d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf94e, .a=0x23, .x=0x3b, .y=0x81, .sp=0x40, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xf94d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf94d, .value=0x40, .type=IO_READ},
        {.addr=0xf94e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0121) {
    const struct CPU_State initial_cpu = {.pc=0x4cd2, .a=0x7a, .x=0x2b, .y=0xdb, .sp=0x69, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4cd3, .a=0x7a, .x=0x2b, .y=0xdb, .sp=0x69, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4cd2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4cd2, .value=0x40, .type=IO_READ},
        {.addr=0x4cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0122) {
    const struct CPU_State initial_cpu = {.pc=0xcab3, .a=0x81, .x=0xdf, .y=0x8f, .sp=0xae, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcab3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcab4, .a=0x81, .x=0xdf, .y=0x8f, .sp=0xae, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcab3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcab3, .value=0x40, .type=IO_READ},
        {.addr=0xcab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8393, .a=0xd0, .x=0xa5, .y=0x58, .sp=0x5a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x8393, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8394, .a=0xd0, .x=0xa5, .y=0x58, .sp=0x5a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8393, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8393, .value=0x40, .type=IO_READ},
        {.addr=0x8394, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0124) {
    const struct CPU_State initial_cpu = {.pc=0x34f5, .a=0xb4, .x=0x32, .y=0x52, .sp=0xcd, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x34f5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x34f6, .a=0xb4, .x=0x32, .y=0x52, .sp=0xcd, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x34f5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x34f5, .value=0x40, .type=IO_READ},
        {.addr=0x34f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0125) {
    const struct CPU_State initial_cpu = {.pc=0xf8a8, .a=0x76, .x=0xe7, .y=0xc1, .sp=0x0d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf8a8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf8a9, .a=0x76, .x=0xe7, .y=0xc1, .sp=0x0d, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf8a8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf8a8, .value=0x40, .type=IO_READ},
        {.addr=0xf8a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0126) {
    const struct CPU_State initial_cpu = {.pc=0xe7de, .a=0xcf, .x=0x72, .y=0xe1, .sp=0x93, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe7de, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe7df, .a=0xcf, .x=0x72, .y=0xe1, .sp=0x93, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe7de, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe7de, .value=0x40, .type=IO_READ},
        {.addr=0xe7df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0127) {
    const struct CPU_State initial_cpu = {.pc=0x06f1, .a=0xed, .x=0x8a, .y=0x14, .sp=0xbb, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x06f1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06f2, .a=0xed, .x=0x8a, .y=0x14, .sp=0xbb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x06f1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06f1, .value=0x40, .type=IO_READ},
        {.addr=0x06f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3e3f, .a=0x55, .x=0x73, .y=0x15, .sp=0xee, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e40, .a=0x55, .x=0x73, .y=0x15, .sp=0xee, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3e3f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e3f, .value=0x40, .type=IO_READ},
        {.addr=0x3e40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0129) {
    const struct CPU_State initial_cpu = {.pc=0x41eb, .a=0x8a, .x=0x54, .y=0x8b, .sp=0x15, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x41eb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x41ec, .a=0x8a, .x=0x54, .y=0x8b, .sp=0x15, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x41eb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x41eb, .value=0x40, .type=IO_READ},
        {.addr=0x41ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012A) {
    const struct CPU_State initial_cpu = {.pc=0xda64, .a=0xd0, .x=0x90, .y=0x76, .sp=0xdc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xda64, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda65, .a=0xd0, .x=0x90, .y=0x76, .sp=0xdc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xda64, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda64, .value=0x40, .type=IO_READ},
        {.addr=0xda65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012B) {
    const struct CPU_State initial_cpu = {.pc=0xd442, .a=0xc8, .x=0x76, .y=0x1b, .sp=0xdc, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd442, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd443, .a=0xc8, .x=0x76, .y=0x1b, .sp=0xdc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd442, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd442, .value=0x40, .type=IO_READ},
        {.addr=0xd443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012C) {
    const struct CPU_State initial_cpu = {.pc=0x7f6d, .a=0xc1, .x=0x27, .y=0x0b, .sp=0xb7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7f6e, .a=0xc1, .x=0x27, .y=0x0b, .sp=0xb7, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x7f6d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7f6d, .value=0x40, .type=IO_READ},
        {.addr=0x7f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012D) {
    const struct CPU_State initial_cpu = {.pc=0x4ba9, .a=0xb2, .x=0xe4, .y=0x5c, .sp=0x11, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4baa, .a=0xb2, .x=0xe4, .y=0x5c, .sp=0x11, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4ba9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4ba9, .value=0x40, .type=IO_READ},
        {.addr=0x4baa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2544, .a=0xd2, .x=0x0a, .y=0x54, .sp=0x72, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2544, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2545, .a=0xd2, .x=0x0a, .y=0x54, .sp=0x72, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x2544, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2544, .value=0x40, .type=IO_READ},
        {.addr=0x2545, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_012F) {
    const struct CPU_State initial_cpu = {.pc=0xb14c, .a=0x1b, .x=0xec, .y=0x54, .sp=0x87, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb14c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb14d, .a=0x1b, .x=0xec, .y=0x54, .sp=0x87, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xb14c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb14c, .value=0x40, .type=IO_READ},
        {.addr=0xb14d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0130) {
    const struct CPU_State initial_cpu = {.pc=0x721a, .a=0x9a, .x=0x9c, .y=0x12, .sp=0x7c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x721a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x721b, .a=0x9a, .x=0x9c, .y=0x12, .sp=0x7c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x721a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x721a, .value=0x40, .type=IO_READ},
        {.addr=0x721b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0131) {
    const struct CPU_State initial_cpu = {.pc=0xd9f6, .a=0xbb, .x=0xe2, .y=0xc2, .sp=0x87, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd9f7, .a=0xbb, .x=0xe2, .y=0xc2, .sp=0x87, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd9f6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd9f6, .value=0x40, .type=IO_READ},
        {.addr=0xd9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0132) {
    const struct CPU_State initial_cpu = {.pc=0x7661, .a=0xb3, .x=0x95, .y=0xe7, .sp=0x49, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7661, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7662, .a=0xb3, .x=0x95, .y=0xe7, .sp=0x49, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x7661, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7661, .value=0x40, .type=IO_READ},
        {.addr=0x7662, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0133) {
    const struct CPU_State initial_cpu = {.pc=0x48db, .a=0xab, .x=0xdf, .y=0xb4, .sp=0xa5, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x48db, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x48dc, .a=0xab, .x=0xdf, .y=0xb4, .sp=0xa5, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x48db, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x48db, .value=0x40, .type=IO_READ},
        {.addr=0x48dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0134) {
    const struct CPU_State initial_cpu = {.pc=0x8033, .a=0xac, .x=0xcd, .y=0xd1, .sp=0x74, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8033, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8034, .a=0xac, .x=0xcd, .y=0xd1, .sp=0x74, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x8033, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8033, .value=0x40, .type=IO_READ},
        {.addr=0x8034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0135) {
    const struct CPU_State initial_cpu = {.pc=0xf3f3, .a=0xef, .x=0x08, .y=0x64, .sp=0xcd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf3f3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf3f4, .a=0xef, .x=0x08, .y=0x64, .sp=0xcd, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xf3f3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf3f3, .value=0x40, .type=IO_READ},
        {.addr=0xf3f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0136) {
    const struct CPU_State initial_cpu = {.pc=0x2727, .a=0xd8, .x=0xe0, .y=0x7a, .sp=0xdf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2727, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2728, .a=0xd8, .x=0xe0, .y=0x7a, .sp=0xdf, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x2727, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2727, .value=0x40, .type=IO_READ},
        {.addr=0x2728, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0137) {
    const struct CPU_State initial_cpu = {.pc=0x951b, .a=0x0d, .x=0xc1, .y=0xf2, .sp=0x1d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x951b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x951c, .a=0x0d, .x=0xc1, .y=0xf2, .sp=0x1d, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x951b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x951b, .value=0x40, .type=IO_READ},
        {.addr=0x951c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0138) {
    const struct CPU_State initial_cpu = {.pc=0x6103, .a=0x6d, .x=0x9b, .y=0x0d, .sp=0x88, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6103, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6104, .a=0x6d, .x=0x9b, .y=0x0d, .sp=0x88, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6103, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6103, .value=0x40, .type=IO_READ},
        {.addr=0x6104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0139) {
    const struct CPU_State initial_cpu = {.pc=0x7e5e, .a=0xf3, .x=0x20, .y=0x3e, .sp=0x24, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7e5e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7e5f, .a=0xf3, .x=0x20, .y=0x3e, .sp=0x24, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x7e5e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7e5e, .value=0x40, .type=IO_READ},
        {.addr=0x7e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013A) {
    const struct CPU_State initial_cpu = {.pc=0x828a, .a=0xf4, .x=0x9a, .y=0xfa, .sp=0x7e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x828a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x828b, .a=0xf4, .x=0x9a, .y=0xfa, .sp=0x7e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x828a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x828a, .value=0x40, .type=IO_READ},
        {.addr=0x828b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013B) {
    const struct CPU_State initial_cpu = {.pc=0xab74, .a=0x17, .x=0x18, .y=0x2e, .sp=0x25, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xab74, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xab75, .a=0x17, .x=0x18, .y=0x2e, .sp=0x25, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xab74, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xab74, .value=0x40, .type=IO_READ},
        {.addr=0xab75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9d14, .a=0x9f, .x=0x91, .y=0x32, .sp=0xd5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9d14, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9d15, .a=0x9f, .x=0x91, .y=0x32, .sp=0xd5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9d14, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9d14, .value=0x40, .type=IO_READ},
        {.addr=0x9d15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013D) {
    const struct CPU_State initial_cpu = {.pc=0xf490, .a=0x72, .x=0x02, .y=0x7e, .sp=0x7c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf490, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf491, .a=0x72, .x=0x02, .y=0x7e, .sp=0x7c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf490, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf490, .value=0x40, .type=IO_READ},
        {.addr=0xf491, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013E) {
    const struct CPU_State initial_cpu = {.pc=0xfc01, .a=0xfc, .x=0xe2, .y=0x28, .sp=0xcd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfc01, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfc02, .a=0xfc, .x=0xe2, .y=0x28, .sp=0xcd, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xfc01, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfc01, .value=0x40, .type=IO_READ},
        {.addr=0xfc02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6e6e, .a=0x06, .x=0xad, .y=0x82, .sp=0xa3, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6e6e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6e6f, .a=0x06, .x=0xad, .y=0x82, .sp=0xa3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6e6e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6e6e, .value=0x40, .type=IO_READ},
        {.addr=0x6e6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0140) {
    const struct CPU_State initial_cpu = {.pc=0xb268, .a=0xb2, .x=0x56, .y=0x1d, .sp=0x58, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb268, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb269, .a=0xb2, .x=0x56, .y=0x1d, .sp=0x58, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb268, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb268, .value=0x40, .type=IO_READ},
        {.addr=0xb269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe96b, .a=0x36, .x=0x0b, .y=0xe1, .sp=0x99, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xe96b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe96c, .a=0x36, .x=0x0b, .y=0xe1, .sp=0x99, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe96b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe96b, .value=0x40, .type=IO_READ},
        {.addr=0xe96c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0142) {
    const struct CPU_State initial_cpu = {.pc=0xa259, .a=0x17, .x=0x00, .y=0xd8, .sp=0x4c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa259, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa25a, .a=0x17, .x=0x00, .y=0xd8, .sp=0x4c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa259, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa259, .value=0x40, .type=IO_READ},
        {.addr=0xa25a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0143) {
    const struct CPU_State initial_cpu = {.pc=0xa0f6, .a=0xa5, .x=0xb4, .y=0x64, .sp=0x1b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa0f7, .a=0xa5, .x=0xb4, .y=0x64, .sp=0x1b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa0f6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa0f6, .value=0x40, .type=IO_READ},
        {.addr=0xa0f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0144) {
    const struct CPU_State initial_cpu = {.pc=0x3611, .a=0x87, .x=0xe6, .y=0xb2, .sp=0x77, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3611, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3612, .a=0x87, .x=0xe6, .y=0xb2, .sp=0x77, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3611, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3611, .value=0x40, .type=IO_READ},
        {.addr=0x3612, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0145) {
    const struct CPU_State initial_cpu = {.pc=0x1ac9, .a=0x5e, .x=0xce, .y=0xd0, .sp=0xdb, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1ac9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1aca, .a=0x5e, .x=0xce, .y=0xd0, .sp=0xdb, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x1ac9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1ac9, .value=0x40, .type=IO_READ},
        {.addr=0x1aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0146) {
    const struct CPU_State initial_cpu = {.pc=0x62e7, .a=0x70, .x=0x7b, .y=0xcd, .sp=0x9f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x62e7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x62e8, .a=0x70, .x=0x7b, .y=0xcd, .sp=0x9f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x62e7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x62e7, .value=0x40, .type=IO_READ},
        {.addr=0x62e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0147) {
    const struct CPU_State initial_cpu = {.pc=0x4127, .a=0x7b, .x=0xa5, .y=0x95, .sp=0x8e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4127, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4128, .a=0x7b, .x=0xa5, .y=0x95, .sp=0x8e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4127, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4127, .value=0x40, .type=IO_READ},
        {.addr=0x4128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0148) {
    const struct CPU_State initial_cpu = {.pc=0xe748, .a=0xf0, .x=0x4b, .y=0xeb, .sp=0x60, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe748, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe749, .a=0xf0, .x=0x4b, .y=0xeb, .sp=0x60, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xe748, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe748, .value=0x40, .type=IO_READ},
        {.addr=0xe749, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1088, .a=0xf1, .x=0x91, .y=0x45, .sp=0x5d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1088, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1089, .a=0xf1, .x=0x91, .y=0x45, .sp=0x5d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1088, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1088, .value=0x40, .type=IO_READ},
        {.addr=0x1089, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014A) {
    const struct CPU_State initial_cpu = {.pc=0x91e2, .a=0xba, .x=0x02, .y=0xf7, .sp=0x8d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x91e2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x91e3, .a=0xba, .x=0x02, .y=0xf7, .sp=0x8d, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x91e2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x91e2, .value=0x40, .type=IO_READ},
        {.addr=0x91e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014B) {
    const struct CPU_State initial_cpu = {.pc=0x3efd, .a=0x6c, .x=0x55, .y=0xff, .sp=0x19, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x3efd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3efe, .a=0x6c, .x=0x55, .y=0xff, .sp=0x19, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3efd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3efd, .value=0x40, .type=IO_READ},
        {.addr=0x3efe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014C) {
    const struct CPU_State initial_cpu = {.pc=0x4f8a, .a=0x30, .x=0x6f, .y=0xcc, .sp=0x8e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4f8a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4f8b, .a=0x30, .x=0x6f, .y=0xcc, .sp=0x8e, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4f8a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4f8a, .value=0x40, .type=IO_READ},
        {.addr=0x4f8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb27f, .a=0xff, .x=0x97, .y=0xc3, .sp=0xaf, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb27f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb280, .a=0xff, .x=0x97, .y=0xc3, .sp=0xaf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb27f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb27f, .value=0x40, .type=IO_READ},
        {.addr=0xb280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014E) {
    const struct CPU_State initial_cpu = {.pc=0xdbd3, .a=0x73, .x=0x5e, .y=0x26, .sp=0x08, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdbd4, .a=0x73, .x=0x5e, .y=0x26, .sp=0x08, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdbd3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdbd3, .value=0x40, .type=IO_READ},
        {.addr=0xdbd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_014F) {
    const struct CPU_State initial_cpu = {.pc=0xe4f5, .a=0x40, .x=0x67, .y=0x14, .sp=0x8f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe4f6, .a=0x40, .x=0x67, .y=0x14, .sp=0x8f, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xe4f5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe4f5, .value=0x40, .type=IO_READ},
        {.addr=0xe4f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0150) {
    const struct CPU_State initial_cpu = {.pc=0x7728, .a=0xc8, .x=0x0e, .y=0x15, .sp=0xa2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7728, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7729, .a=0xc8, .x=0x0e, .y=0x15, .sp=0xa2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7728, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7728, .value=0x40, .type=IO_READ},
        {.addr=0x7729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0151) {
    const struct CPU_State initial_cpu = {.pc=0x2dbb, .a=0xf9, .x=0x9c, .y=0x7f, .sp=0x23, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2dbc, .a=0xf9, .x=0x9c, .y=0x7f, .sp=0x23, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2dbb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2dbb, .value=0x40, .type=IO_READ},
        {.addr=0x2dbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb5ce, .a=0xf8, .x=0xc4, .y=0xb4, .sp=0xde, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ce, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb5cf, .a=0xf8, .x=0xc4, .y=0xb4, .sp=0xde, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb5ce, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb5ce, .value=0x40, .type=IO_READ},
        {.addr=0xb5cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0153) {
    const struct CPU_State initial_cpu = {.pc=0x3a31, .a=0x22, .x=0x9f, .y=0x4a, .sp=0x6e, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3a31, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3a32, .a=0x22, .x=0x9f, .y=0x4a, .sp=0x6e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x3a31, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3a31, .value=0x40, .type=IO_READ},
        {.addr=0x3a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0087, .a=0x10, .x=0xd1, .y=0xa2, .sp=0xa2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0088, .a=0x10, .x=0xd1, .y=0xa2, .sp=0xa2, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0087, .value=0x40, .type=IO_READ},
        {.addr=0x0088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0155) {
    const struct CPU_State initial_cpu = {.pc=0x884c, .a=0x20, .x=0xc4, .y=0x62, .sp=0x28, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x884c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x884d, .a=0x20, .x=0xc4, .y=0x62, .sp=0x28, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x884c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x884c, .value=0x40, .type=IO_READ},
        {.addr=0x884d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0156) {
    const struct CPU_State initial_cpu = {.pc=0xc12e, .a=0x3b, .x=0xda, .y=0xa4, .sp=0x9f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc12e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc12f, .a=0x3b, .x=0xda, .y=0xa4, .sp=0x9f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xc12e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc12e, .value=0x40, .type=IO_READ},
        {.addr=0xc12f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0157) {
    const struct CPU_State initial_cpu = {.pc=0xfb2c, .a=0xfc, .x=0xc5, .y=0xc1, .sp=0xa6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfb2c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb2d, .a=0xfc, .x=0xc5, .y=0xc1, .sp=0xa6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfb2c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb2c, .value=0x40, .type=IO_READ},
        {.addr=0xfb2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0158) {
    const struct CPU_State initial_cpu = {.pc=0x402d, .a=0x9b, .x=0x84, .y=0x9a, .sp=0xb3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x402d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x402e, .a=0x9b, .x=0x84, .y=0x9a, .sp=0xb3, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x402d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x402d, .value=0x40, .type=IO_READ},
        {.addr=0x402e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0159) {
    const struct CPU_State initial_cpu = {.pc=0xfbd6, .a=0xdf, .x=0xb2, .y=0x1a, .sp=0x65, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfbd7, .a=0xdf, .x=0xb2, .y=0x1a, .sp=0x65, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfbd6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfbd6, .value=0x40, .type=IO_READ},
        {.addr=0xfbd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015A) {
    const struct CPU_State initial_cpu = {.pc=0x45eb, .a=0xd3, .x=0x5e, .y=0xb2, .sp=0x36, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x45eb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x45ec, .a=0xd3, .x=0x5e, .y=0xb2, .sp=0x36, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x45eb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x45eb, .value=0x40, .type=IO_READ},
        {.addr=0x45ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015B) {
    const struct CPU_State initial_cpu = {.pc=0x2144, .a=0x78, .x=0x78, .y=0xc3, .sp=0x3f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2144, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2145, .a=0x78, .x=0x78, .y=0xc3, .sp=0x3f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2144, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2144, .value=0x40, .type=IO_READ},
        {.addr=0x2145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015C) {
    const struct CPU_State initial_cpu = {.pc=0xad34, .a=0x14, .x=0x7e, .y=0x7e, .sp=0x7e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xad34, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xad35, .a=0x14, .x=0x7e, .y=0x7e, .sp=0x7e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xad34, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xad34, .value=0x40, .type=IO_READ},
        {.addr=0xad35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015D) {
    const struct CPU_State initial_cpu = {.pc=0x69c8, .a=0x71, .x=0x49, .y=0xbf, .sp=0xbb, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x69c8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x69c9, .a=0x71, .x=0x49, .y=0xbf, .sp=0xbb, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x69c8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x69c8, .value=0x40, .type=IO_READ},
        {.addr=0x69c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015E) {
    const struct CPU_State initial_cpu = {.pc=0xdd71, .a=0x7d, .x=0x2b, .y=0xc8, .sp=0x25, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdd71, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdd72, .a=0x7d, .x=0x2b, .y=0xc8, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdd71, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdd71, .value=0x40, .type=IO_READ},
        {.addr=0xdd72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_015F) {
    const struct CPU_State initial_cpu = {.pc=0x4db1, .a=0xc3, .x=0x7b, .y=0x79, .sp=0xbd, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4db1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4db2, .a=0xc3, .x=0x7b, .y=0x79, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4db1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4db1, .value=0x40, .type=IO_READ},
        {.addr=0x4db2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0160) {
    const struct CPU_State initial_cpu = {.pc=0x8ab9, .a=0x0f, .x=0x3d, .y=0xcb, .sp=0x84, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8aba, .a=0x0f, .x=0x3d, .y=0xcb, .sp=0x84, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x8ab9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8ab9, .value=0x40, .type=IO_READ},
        {.addr=0x8aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0161) {
    const struct CPU_State initial_cpu = {.pc=0x622f, .a=0xf4, .x=0xa8, .y=0x49, .sp=0xa9, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x622f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6230, .a=0xf4, .x=0xa8, .y=0x49, .sp=0xa9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x622f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x622f, .value=0x40, .type=IO_READ},
        {.addr=0x6230, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0162) {
    const struct CPU_State initial_cpu = {.pc=0xfb53, .a=0x00, .x=0x29, .y=0x46, .sp=0x37, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfb53, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb54, .a=0x00, .x=0x29, .y=0x46, .sp=0x37, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xfb53, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb53, .value=0x40, .type=IO_READ},
        {.addr=0xfb54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0163) {
    const struct CPU_State initial_cpu = {.pc=0x8f63, .a=0x85, .x=0x38, .y=0x25, .sp=0xd9, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f63, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8f64, .a=0x85, .x=0x38, .y=0x25, .sp=0xd9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8f63, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8f63, .value=0x40, .type=IO_READ},
        {.addr=0x8f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0164) {
    const struct CPU_State initial_cpu = {.pc=0xb587, .a=0x95, .x=0x7e, .y=0x0d, .sp=0xb6, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb587, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb588, .a=0x95, .x=0x7e, .y=0x0d, .sp=0xb6, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xb587, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb587, .value=0x40, .type=IO_READ},
        {.addr=0xb588, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0165) {
    const struct CPU_State initial_cpu = {.pc=0x2c2c, .a=0x46, .x=0xdd, .y=0xb2, .sp=0xe9, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2c2c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2c2d, .a=0x46, .x=0xdd, .y=0xb2, .sp=0xe9, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x2c2c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2c2c, .value=0x40, .type=IO_READ},
        {.addr=0x2c2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0166) {
    const struct CPU_State initial_cpu = {.pc=0x8103, .a=0x6e, .x=0x29, .y=0x0a, .sp=0x44, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8103, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8104, .a=0x6e, .x=0x29, .y=0x0a, .sp=0x44, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x8103, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8103, .value=0x40, .type=IO_READ},
        {.addr=0x8104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa9c6, .a=0xa8, .x=0x0d, .y=0x15, .sp=0x5d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa9c7, .a=0xa8, .x=0x0d, .y=0x15, .sp=0x5d, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xa9c6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa9c6, .value=0x40, .type=IO_READ},
        {.addr=0xa9c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0168) {
    const struct CPU_State initial_cpu = {.pc=0x031f, .a=0xfa, .x=0xe5, .y=0xf1, .sp=0x04, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x031f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0320, .a=0xfa, .x=0xe5, .y=0xf1, .sp=0x04, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x031f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x031f, .value=0x40, .type=IO_READ},
        {.addr=0x0320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0169) {
    const struct CPU_State initial_cpu = {.pc=0x1d4e, .a=0xe9, .x=0xe8, .y=0x16, .sp=0x06, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x1d4e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1d4f, .a=0xe9, .x=0xe8, .y=0x16, .sp=0x06, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x1d4e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1d4e, .value=0x40, .type=IO_READ},
        {.addr=0x1d4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016A) {
    const struct CPU_State initial_cpu = {.pc=0x3cf3, .a=0xf1, .x=0x4a, .y=0x6a, .sp=0xd7, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3cf4, .a=0xf1, .x=0x4a, .y=0x6a, .sp=0xd7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3cf3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3cf3, .value=0x40, .type=IO_READ},
        {.addr=0x3cf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016B) {
    const struct CPU_State initial_cpu = {.pc=0x555c, .a=0x9f, .x=0xe4, .y=0x16, .sp=0x81, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x555c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x555d, .a=0x9f, .x=0xe4, .y=0x16, .sp=0x81, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x555c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x555c, .value=0x40, .type=IO_READ},
        {.addr=0x555d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016C) {
    const struct CPU_State initial_cpu = {.pc=0x27c1, .a=0x98, .x=0x19, .y=0xa0, .sp=0x9d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x27c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x27c2, .a=0x98, .x=0x19, .y=0xa0, .sp=0x9d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x27c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x27c1, .value=0x40, .type=IO_READ},
        {.addr=0x27c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016D) {
    const struct CPU_State initial_cpu = {.pc=0x8b1d, .a=0x3f, .x=0x63, .y=0x81, .sp=0xf6, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8b1d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8b1e, .a=0x3f, .x=0x63, .y=0x81, .sp=0xf6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8b1d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8b1d, .value=0x40, .type=IO_READ},
        {.addr=0x8b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9e1a, .a=0x2e, .x=0x95, .y=0x79, .sp=0x65, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9e1b, .a=0x2e, .x=0x95, .y=0x79, .sp=0x65, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9e1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9e1a, .value=0x40, .type=IO_READ},
        {.addr=0x9e1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0884, .a=0xe5, .x=0x03, .y=0x57, .sp=0xfb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0884, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0885, .a=0xe5, .x=0x03, .y=0x57, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0884, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0884, .value=0x40, .type=IO_READ},
        {.addr=0x0885, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0170) {
    const struct CPU_State initial_cpu = {.pc=0x53f3, .a=0xe3, .x=0xfd, .y=0xe1, .sp=0x98, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x53f3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x53f4, .a=0xe3, .x=0xfd, .y=0xe1, .sp=0x98, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x53f3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x53f3, .value=0x40, .type=IO_READ},
        {.addr=0x53f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0171) {
    const struct CPU_State initial_cpu = {.pc=0xb878, .a=0x82, .x=0xbb, .y=0x5b, .sp=0x93, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xb878, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb879, .a=0x82, .x=0xbb, .y=0x5b, .sp=0x93, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xb878, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb878, .value=0x40, .type=IO_READ},
        {.addr=0xb879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0172) {
    const struct CPU_State initial_cpu = {.pc=0xf694, .a=0x31, .x=0x4a, .y=0xf1, .sp=0x19, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf694, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf695, .a=0x31, .x=0x4a, .y=0xf1, .sp=0x19, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf694, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf694, .value=0x40, .type=IO_READ},
        {.addr=0xf695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0173) {
    const struct CPU_State initial_cpu = {.pc=0x0a15, .a=0xf2, .x=0x1b, .y=0x57, .sp=0x12, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0a15, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0a16, .a=0xf2, .x=0x1b, .y=0x57, .sp=0x12, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0a15, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0a15, .value=0x40, .type=IO_READ},
        {.addr=0x0a16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc7f4, .a=0x17, .x=0x4b, .y=0x2f, .sp=0xa1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc7f5, .a=0x17, .x=0x4b, .y=0x2f, .sp=0xa1, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xc7f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc7f4, .value=0x40, .type=IO_READ},
        {.addr=0xc7f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0175) {
    const struct CPU_State initial_cpu = {.pc=0xbe48, .a=0x07, .x=0xd7, .y=0xab, .sp=0x12, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe48, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbe49, .a=0x07, .x=0xd7, .y=0xab, .sp=0x12, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xbe48, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbe48, .value=0x40, .type=IO_READ},
        {.addr=0xbe49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0176) {
    const struct CPU_State initial_cpu = {.pc=0xf768, .a=0x6a, .x=0x95, .y=0x3b, .sp=0x4f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xf768, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf769, .a=0x6a, .x=0x95, .y=0x3b, .sp=0x4f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf768, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf768, .value=0x40, .type=IO_READ},
        {.addr=0xf769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0177) {
    const struct CPU_State initial_cpu = {.pc=0xedbf, .a=0x12, .x=0x42, .y=0x15, .sp=0x5b, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xedbf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xedc0, .a=0x12, .x=0x42, .y=0x15, .sp=0x5b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xedbf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xedbf, .value=0x40, .type=IO_READ},
        {.addr=0xedc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0178) {
    const struct CPU_State initial_cpu = {.pc=0x7ae1, .a=0x49, .x=0x33, .y=0x26, .sp=0xee, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7ae2, .a=0x49, .x=0x33, .y=0x26, .sp=0xee, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7ae1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7ae1, .value=0x40, .type=IO_READ},
        {.addr=0x7ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0179) {
    const struct CPU_State initial_cpu = {.pc=0x559a, .a=0xd6, .x=0x6b, .y=0x7d, .sp=0xad, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x559a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x559b, .a=0xd6, .x=0x6b, .y=0x7d, .sp=0xad, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x559a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x559a, .value=0x40, .type=IO_READ},
        {.addr=0x559b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017A) {
    const struct CPU_State initial_cpu = {.pc=0xb514, .a=0x23, .x=0x59, .y=0x17, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xb514, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb515, .a=0x23, .x=0x59, .y=0x17, .sp=0xf0, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xb514, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb514, .value=0x40, .type=IO_READ},
        {.addr=0xb515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017B) {
    const struct CPU_State initial_cpu = {.pc=0x3158, .a=0xf6, .x=0x42, .y=0x40, .sp=0x9b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3158, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3159, .a=0xf6, .x=0x42, .y=0x40, .sp=0x9b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3158, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3158, .value=0x40, .type=IO_READ},
        {.addr=0x3159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe89a, .a=0x5a, .x=0xa2, .y=0x5c, .sp=0xd8, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe89a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe89b, .a=0x5a, .x=0xa2, .y=0x5c, .sp=0xd8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe89a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe89a, .value=0x40, .type=IO_READ},
        {.addr=0xe89b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017D) {
    const struct CPU_State initial_cpu = {.pc=0x440e, .a=0x03, .x=0xa6, .y=0x6b, .sp=0xfd, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x440e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x440f, .a=0x03, .x=0xa6, .y=0x6b, .sp=0xfd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x440e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x440e, .value=0x40, .type=IO_READ},
        {.addr=0x440f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017E) {
    const struct CPU_State initial_cpu = {.pc=0x78a9, .a=0x7a, .x=0x99, .y=0x5b, .sp=0xf6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x78a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x78aa, .a=0x7a, .x=0x99, .y=0x5b, .sp=0xf6, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x78a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x78a9, .value=0x40, .type=IO_READ},
        {.addr=0x78aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_017F) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0xb3, .x=0x83, .y=0xad, .sp=0x40, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc2dd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0xb3, .x=0x83, .y=0xad, .sp=0x40, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xc2dd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0x40, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6240, .a=0x21, .x=0xbf, .y=0xee, .sp=0x0e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x6240, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6241, .a=0x21, .x=0xbf, .y=0xee, .sp=0x0e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6240, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6240, .value=0x40, .type=IO_READ},
        {.addr=0x6241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0181) {
    const struct CPU_State initial_cpu = {.pc=0x4e79, .a=0x55, .x=0xc0, .y=0xdd, .sp=0x9f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e79, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4e7a, .a=0x55, .x=0xc0, .y=0xdd, .sp=0x9f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4e79, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4e79, .value=0x40, .type=IO_READ},
        {.addr=0x4e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0182) {
    const struct CPU_State initial_cpu = {.pc=0x0868, .a=0xcc, .x=0x8e, .y=0x54, .sp=0xf5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0868, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0869, .a=0xcc, .x=0x8e, .y=0x54, .sp=0xf5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0868, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0868, .value=0x40, .type=IO_READ},
        {.addr=0x0869, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0183) {
    const struct CPU_State initial_cpu = {.pc=0x176a, .a=0xd6, .x=0x05, .y=0xbd, .sp=0x4b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x176a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x176b, .a=0xd6, .x=0x05, .y=0xbd, .sp=0x4b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x176a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x176a, .value=0x40, .type=IO_READ},
        {.addr=0x176b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0184) {
    const struct CPU_State initial_cpu = {.pc=0xf005, .a=0x36, .x=0xd8, .y=0x30, .sp=0x49, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf005, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf006, .a=0x36, .x=0xd8, .y=0x30, .sp=0x49, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xf005, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf005, .value=0x40, .type=IO_READ},
        {.addr=0xf006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0185) {
    const struct CPU_State initial_cpu = {.pc=0x011f, .a=0xe4, .x=0x98, .y=0x68, .sp=0x31, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0120, .a=0xe4, .x=0x98, .y=0x68, .sp=0x31, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x011f, .value=0x40, .type=IO_READ},
        {.addr=0x0120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0186) {
    const struct CPU_State initial_cpu = {.pc=0x97b4, .a=0x6f, .x=0x48, .y=0x3f, .sp=0x56, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x97b4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x97b5, .a=0x6f, .x=0x48, .y=0x3f, .sp=0x56, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x97b4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x97b4, .value=0x40, .type=IO_READ},
        {.addr=0x97b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0187) {
    const struct CPU_State initial_cpu = {.pc=0x6855, .a=0x42, .x=0xb3, .y=0x24, .sp=0x6a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6855, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6856, .a=0x42, .x=0xb3, .y=0x24, .sp=0x6a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x6855, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6855, .value=0x40, .type=IO_READ},
        {.addr=0x6856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0188) {
    const struct CPU_State initial_cpu = {.pc=0x0a23, .a=0x6b, .x=0xea, .y=0x6f, .sp=0x50, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0a23, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0a24, .a=0x6b, .x=0xea, .y=0x6f, .sp=0x50, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0a23, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0a23, .value=0x40, .type=IO_READ},
        {.addr=0x0a24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb8f4, .a=0x0a, .x=0x3b, .y=0xb9, .sp=0xcb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb8f5, .a=0x0a, .x=0x3b, .y=0xb9, .sp=0xcb, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xb8f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb8f4, .value=0x40, .type=IO_READ},
        {.addr=0xb8f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018A) {
    const struct CPU_State initial_cpu = {.pc=0xb277, .a=0xba, .x=0x04, .y=0x27, .sp=0x80, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb277, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0xba, .x=0x04, .y=0x27, .sp=0x80, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xb277, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb277, .value=0x40, .type=IO_READ},
        {.addr=0xb278, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018B) {
    const struct CPU_State initial_cpu = {.pc=0x05dc, .a=0x64, .x=0x50, .y=0x2b, .sp=0x04, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x05dc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x05dd, .a=0x64, .x=0x50, .y=0x2b, .sp=0x04, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x05dc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x05dc, .value=0x40, .type=IO_READ},
        {.addr=0x05dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018C) {
    const struct CPU_State initial_cpu = {.pc=0x67e1, .a=0x78, .x=0x18, .y=0x13, .sp=0x53, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x67e1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x67e2, .a=0x78, .x=0x18, .y=0x13, .sp=0x53, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x67e1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x67e1, .value=0x40, .type=IO_READ},
        {.addr=0x67e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018D) {
    const struct CPU_State initial_cpu = {.pc=0xf628, .a=0x66, .x=0x15, .y=0x8f, .sp=0xb9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xf628, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf629, .a=0x66, .x=0x15, .y=0x8f, .sp=0xb9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf628, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf628, .value=0x40, .type=IO_READ},
        {.addr=0xf629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018E) {
    const struct CPU_State initial_cpu = {.pc=0x104c, .a=0x5c, .x=0x4f, .y=0xb9, .sp=0x2a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x104c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x104d, .a=0x5c, .x=0x4f, .y=0xb9, .sp=0x2a, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x104c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x104c, .value=0x40, .type=IO_READ},
        {.addr=0x104d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_018F) {
    const struct CPU_State initial_cpu = {.pc=0x9d2e, .a=0x1d, .x=0x39, .y=0x94, .sp=0xc4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9d2f, .a=0x1d, .x=0x39, .y=0x94, .sp=0xc4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9d2e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9d2e, .value=0x40, .type=IO_READ},
        {.addr=0x9d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0190) {
    const struct CPU_State initial_cpu = {.pc=0x84a7, .a=0x9a, .x=0xeb, .y=0xc4, .sp=0x12, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x84a7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x84a8, .a=0x9a, .x=0xeb, .y=0xc4, .sp=0x12, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x84a7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x84a7, .value=0x40, .type=IO_READ},
        {.addr=0x84a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0191) {
    const struct CPU_State initial_cpu = {.pc=0xdd8b, .a=0xb7, .x=0x8c, .y=0x97, .sp=0x0e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdd8c, .a=0xb7, .x=0x8c, .y=0x97, .sp=0x0e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xdd8b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdd8b, .value=0x40, .type=IO_READ},
        {.addr=0xdd8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0192) {
    const struct CPU_State initial_cpu = {.pc=0x25c6, .a=0x95, .x=0xf8, .y=0xa5, .sp=0x21, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x25c6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x25c7, .a=0x95, .x=0xf8, .y=0xa5, .sp=0x21, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x25c6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x25c6, .value=0x40, .type=IO_READ},
        {.addr=0x25c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0193) {
    const struct CPU_State initial_cpu = {.pc=0xfe27, .a=0xe2, .x=0x5e, .y=0xb9, .sp=0x58, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfe27, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfe28, .a=0xe2, .x=0x5e, .y=0xb9, .sp=0x58, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfe27, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfe27, .value=0x40, .type=IO_READ},
        {.addr=0xfe28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0194) {
    const struct CPU_State initial_cpu = {.pc=0xe1d1, .a=0x9e, .x=0x8b, .y=0x66, .sp=0xa5, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe1d2, .a=0x9e, .x=0x8b, .y=0x66, .sp=0xa5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe1d1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe1d1, .value=0x40, .type=IO_READ},
        {.addr=0xe1d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0195) {
    const struct CPU_State initial_cpu = {.pc=0xfd7a, .a=0x58, .x=0x1d, .y=0xf7, .sp=0x0f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xfd7a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd7b, .a=0x58, .x=0x1d, .y=0xf7, .sp=0x0f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfd7a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd7a, .value=0x40, .type=IO_READ},
        {.addr=0xfd7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0196) {
    const struct CPU_State initial_cpu = {.pc=0x2c5f, .a=0x8f, .x=0x6d, .y=0x60, .sp=0xa8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2c60, .a=0x8f, .x=0x6d, .y=0x60, .sp=0xa8, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x2c5f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2c5f, .value=0x40, .type=IO_READ},
        {.addr=0x2c60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0197) {
    const struct CPU_State initial_cpu = {.pc=0x2e86, .a=0x40, .x=0x8b, .y=0x8c, .sp=0x41, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e86, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2e87, .a=0x40, .x=0x8b, .y=0x8c, .sp=0x41, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x2e86, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2e86, .value=0x40, .type=IO_READ},
        {.addr=0x2e87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0198) {
    const struct CPU_State initial_cpu = {.pc=0x2e3e, .a=0xae, .x=0xed, .y=0xd6, .sp=0xc9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2e3e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2e3f, .a=0xae, .x=0xed, .y=0xd6, .sp=0xc9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2e3e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2e3e, .value=0x40, .type=IO_READ},
        {.addr=0x2e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0199) {
    const struct CPU_State initial_cpu = {.pc=0x685b, .a=0xe3, .x=0x10, .y=0x8d, .sp=0x5b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x685b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x685c, .a=0xe3, .x=0x10, .y=0x8d, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x685b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x685b, .value=0x40, .type=IO_READ},
        {.addr=0x685c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa082, .a=0x06, .x=0xd3, .y=0x8c, .sp=0x57, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa082, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa083, .a=0x06, .x=0xd3, .y=0x8c, .sp=0x57, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xa082, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa082, .value=0x40, .type=IO_READ},
        {.addr=0xa083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019B) {
    const struct CPU_State initial_cpu = {.pc=0xa631, .a=0x9c, .x=0xf4, .y=0xc9, .sp=0xde, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa631, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa632, .a=0x9c, .x=0xf4, .y=0xc9, .sp=0xde, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa631, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa631, .value=0x40, .type=IO_READ},
        {.addr=0xa632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019C) {
    const struct CPU_State initial_cpu = {.pc=0xccfe, .a=0xff, .x=0x31, .y=0x20, .sp=0x60, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xccfe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xccff, .a=0xff, .x=0x31, .y=0x20, .sp=0x60, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xccfe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xccfe, .value=0x40, .type=IO_READ},
        {.addr=0xccff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019D) {
    const struct CPU_State initial_cpu = {.pc=0xcc6c, .a=0x03, .x=0xd8, .y=0x5b, .sp=0x39, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcc6d, .a=0x03, .x=0xd8, .y=0x5b, .sp=0x39, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xcc6c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcc6c, .value=0x40, .type=IO_READ},
        {.addr=0xcc6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019E) {
    const struct CPU_State initial_cpu = {.pc=0xdbed, .a=0x91, .x=0xac, .y=0xdf, .sp=0x67, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xdbed, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdbee, .a=0x91, .x=0xac, .y=0xdf, .sp=0x67, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdbed, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdbed, .value=0x40, .type=IO_READ},
        {.addr=0xdbee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_019F) {
    const struct CPU_State initial_cpu = {.pc=0xee4e, .a=0x40, .x=0x80, .y=0x4a, .sp=0x95, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xee4e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee4f, .a=0x40, .x=0x80, .y=0x4a, .sp=0x95, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xee4e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee4e, .value=0x40, .type=IO_READ},
        {.addr=0xee4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x2e57, .a=0x2f, .x=0xcc, .y=0x78, .sp=0x4d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2e57, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2e58, .a=0x2f, .x=0xcc, .y=0x78, .sp=0x4d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x2e57, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2e57, .value=0x40, .type=IO_READ},
        {.addr=0x2e58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3dfb, .a=0xd6, .x=0x52, .y=0xff, .sp=0xa3, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3dfb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3dfc, .a=0xd6, .x=0x52, .y=0xff, .sp=0xa3, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x3dfb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3dfb, .value=0x40, .type=IO_READ},
        {.addr=0x3dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x45c5, .a=0x20, .x=0xdd, .y=0x14, .sp=0x63, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x45c5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x45c6, .a=0x20, .x=0xdd, .y=0x14, .sp=0x63, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x45c5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x45c5, .value=0x40, .type=IO_READ},
        {.addr=0x45c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xb3ea, .a=0xf3, .x=0x86, .y=0xc9, .sp=0x58, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ea, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb3eb, .a=0xf3, .x=0x86, .y=0xc9, .sp=0x58, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xb3ea, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb3ea, .value=0x40, .type=IO_READ},
        {.addr=0xb3eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xb040, .a=0x39, .x=0x02, .y=0xa4, .sp=0x6a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb040, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb041, .a=0x39, .x=0x02, .y=0xa4, .sp=0x6a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xb040, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb040, .value=0x40, .type=IO_READ},
        {.addr=0xb041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1f54, .a=0x4c, .x=0x32, .y=0xbf, .sp=0x70, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1f54, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1f55, .a=0x4c, .x=0x32, .y=0xbf, .sp=0x70, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1f54, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1f54, .value=0x40, .type=IO_READ},
        {.addr=0x1f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x0f57, .a=0xb7, .x=0xf3, .y=0x78, .sp=0xb3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0f57, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f58, .a=0xb7, .x=0xf3, .y=0x78, .sp=0xb3, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0f57, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f57, .value=0x40, .type=IO_READ},
        {.addr=0x0f58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x0fe6, .a=0x0f, .x=0x0e, .y=0x0a, .sp=0xa2, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0fe7, .a=0x0f, .x=0x0e, .y=0x0a, .sp=0xa2, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0fe6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0fe6, .value=0x40, .type=IO_READ},
        {.addr=0x0fe7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x750f, .a=0x3a, .x=0x12, .y=0xfe, .sp=0x03, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x750f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7510, .a=0x3a, .x=0x12, .y=0xfe, .sp=0x03, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x750f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x750f, .value=0x40, .type=IO_READ},
        {.addr=0x7510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x97fd, .a=0x5c, .x=0xb0, .y=0x3a, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x97fd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x97fe, .a=0x5c, .x=0xb0, .y=0x3a, .sp=0x97, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x97fd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x97fd, .value=0x40, .type=IO_READ},
        {.addr=0x97fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xf300, .a=0x23, .x=0x0d, .y=0x88, .sp=0xff, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xf300, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf301, .a=0x23, .x=0x0d, .y=0x88, .sp=0xff, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xf300, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf300, .value=0x40, .type=IO_READ},
        {.addr=0xf301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x36f4, .a=0x9d, .x=0x33, .y=0x5e, .sp=0xc9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x36f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x36f5, .a=0x9d, .x=0x33, .y=0x5e, .sp=0xc9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x36f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x36f4, .value=0x40, .type=IO_READ},
        {.addr=0x36f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x624c, .a=0x6f, .x=0xde, .y=0x75, .sp=0x80, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x624c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x624d, .a=0x6f, .x=0xde, .y=0x75, .sp=0x80, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x624c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x624c, .value=0x40, .type=IO_READ},
        {.addr=0x624d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x57d5, .a=0xe3, .x=0x25, .y=0xfe, .sp=0xc4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x57d5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x57d6, .a=0xe3, .x=0x25, .y=0xfe, .sp=0xc4, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x57d5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x57d5, .value=0x40, .type=IO_READ},
        {.addr=0x57d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x044e, .a=0xc0, .x=0x3b, .y=0x0b, .sp=0x87, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x044e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x044f, .a=0xc0, .x=0x3b, .y=0x0b, .sp=0x87, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x044e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x044e, .value=0x40, .type=IO_READ},
        {.addr=0x044f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xc657, .a=0x07, .x=0x11, .y=0x30, .sp=0x8c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc657, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc658, .a=0x07, .x=0x11, .y=0x30, .sp=0x8c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc657, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc657, .value=0x40, .type=IO_READ},
        {.addr=0xc658, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x7fed, .a=0x0d, .x=0x45, .y=0x90, .sp=0xc6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7fed, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7fee, .a=0x0d, .x=0x45, .y=0x90, .sp=0xc6, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x7fed, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7fed, .value=0x40, .type=IO_READ},
        {.addr=0x7fee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xb854, .a=0x9d, .x=0x8e, .y=0x7f, .sp=0xf7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb854, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb855, .a=0x9d, .x=0x8e, .y=0x7f, .sp=0xf7, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb854, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb854, .value=0x40, .type=IO_READ},
        {.addr=0xb855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x1bc3, .a=0x02, .x=0xb0, .y=0x27, .sp=0xc8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1bc4, .a=0x02, .x=0xb0, .y=0x27, .sp=0xc8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1bc3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1bc3, .value=0x40, .type=IO_READ},
        {.addr=0x1bc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x810f, .a=0x87, .x=0x62, .y=0xcb, .sp=0x76, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x810f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8110, .a=0x87, .x=0x62, .y=0xcb, .sp=0x76, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x810f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x810f, .value=0x40, .type=IO_READ},
        {.addr=0x8110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0047, .a=0xcc, .x=0x3c, .y=0xd1, .sp=0x15, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0048, .a=0xcc, .x=0x3c, .y=0xd1, .sp=0x15, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0047, .value=0x40, .type=IO_READ},
        {.addr=0x0048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x5a78, .a=0x9b, .x=0x01, .y=0x63, .sp=0xdb, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x5a78, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5a79, .a=0x9b, .x=0x01, .y=0x63, .sp=0xdb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5a78, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5a78, .value=0x40, .type=IO_READ},
        {.addr=0x5a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd228, .a=0x4d, .x=0xa8, .y=0x1f, .sp=0x79, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd228, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd229, .a=0x4d, .x=0xa8, .y=0x1f, .sp=0x79, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xd228, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd228, .value=0x40, .type=IO_READ},
        {.addr=0xd229, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xb66b, .a=0x6f, .x=0xb7, .y=0x3d, .sp=0x38, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb66b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb66c, .a=0x6f, .x=0xb7, .y=0x3d, .sp=0x38, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb66b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb66b, .value=0x40, .type=IO_READ},
        {.addr=0xb66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x7ce2, .a=0x6d, .x=0x40, .y=0x1b, .sp=0x2b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7ce3, .a=0x6d, .x=0x40, .y=0x1b, .sp=0x2b, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x7ce2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7ce2, .value=0x40, .type=IO_READ},
        {.addr=0x7ce3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x080f, .a=0x4d, .x=0xa8, .y=0x4b, .sp=0x6a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x080f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0810, .a=0x4d, .x=0xa8, .y=0x4b, .sp=0x6a, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x080f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x080f, .value=0x40, .type=IO_READ},
        {.addr=0x0810, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xf1c4, .a=0x25, .x=0x06, .y=0xf0, .sp=0xb1, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf1c5, .a=0x25, .x=0x06, .y=0xf0, .sp=0xb1, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xf1c4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf1c4, .value=0x40, .type=IO_READ},
        {.addr=0xf1c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x8466, .a=0xab, .x=0xca, .y=0x83, .sp=0x15, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x8466, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8467, .a=0xab, .x=0xca, .y=0x83, .sp=0x15, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x8466, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8466, .value=0x40, .type=IO_READ},
        {.addr=0x8467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x3dbf, .a=0x64, .x=0x9a, .y=0x41, .sp=0xde, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3dbf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3dc0, .a=0x64, .x=0x9a, .y=0x41, .sp=0xde, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x3dbf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3dbf, .value=0x40, .type=IO_READ},
        {.addr=0x3dc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x30e2, .a=0xab, .x=0xfc, .y=0xa9, .sp=0x15, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x30e2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x30e3, .a=0xab, .x=0xfc, .y=0xa9, .sp=0x15, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x30e2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x30e2, .value=0x40, .type=IO_READ},
        {.addr=0x30e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3cff, .a=0x02, .x=0x0e, .y=0x87, .sp=0x97, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3cff, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3d00, .a=0x02, .x=0x0e, .y=0x87, .sp=0x97, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3cff, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3cff, .value=0x40, .type=IO_READ},
        {.addr=0x3d00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb2d3, .a=0x2d, .x=0xc3, .y=0xbe, .sp=0x68, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb2d4, .a=0x2d, .x=0xc3, .y=0xbe, .sp=0x68, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb2d3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb2d3, .value=0x40, .type=IO_READ},
        {.addr=0xb2d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x7538, .a=0x79, .x=0x84, .y=0x5c, .sp=0x92, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7538, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7539, .a=0x79, .x=0x84, .y=0x5c, .sp=0x92, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7538, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7538, .value=0x40, .type=IO_READ},
        {.addr=0x7539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x7274, .a=0x3d, .x=0xf5, .y=0x5b, .sp=0xa9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7274, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7275, .a=0x3d, .x=0xf5, .y=0x5b, .sp=0xa9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7274, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7274, .value=0x40, .type=IO_READ},
        {.addr=0x7275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x252a, .a=0xc4, .x=0x9a, .y=0x94, .sp=0x1c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x252a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x252b, .a=0xc4, .x=0x9a, .y=0x94, .sp=0x1c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x252a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x252a, .value=0x40, .type=IO_READ},
        {.addr=0x252b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x52e3, .a=0xbb, .x=0xf4, .y=0x13, .sp=0x4a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x52e3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x52e4, .a=0xbb, .x=0xf4, .y=0x13, .sp=0x4a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x52e3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x52e3, .value=0x40, .type=IO_READ},
        {.addr=0x52e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3450, .a=0x9e, .x=0xd1, .y=0xf8, .sp=0x35, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3450, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3451, .a=0x9e, .x=0xd1, .y=0xf8, .sp=0x35, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3450, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3450, .value=0x40, .type=IO_READ},
        {.addr=0x3451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x0034, .a=0x1d, .x=0x0c, .y=0xb6, .sp=0x55, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0035, .a=0x1d, .x=0x0c, .y=0xb6, .sp=0x55, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0034, .value=0x40, .type=IO_READ},
        {.addr=0x0035, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x9c9c, .a=0x84, .x=0x8c, .y=0x87, .sp=0x1d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9c9d, .a=0x84, .x=0x8c, .y=0x87, .sp=0x1d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9c9c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9c9c, .value=0x40, .type=IO_READ},
        {.addr=0x9c9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7a89, .a=0x96, .x=0xc1, .y=0xce, .sp=0xad, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7a89, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7a8a, .a=0x96, .x=0xc1, .y=0xce, .sp=0xad, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7a89, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7a89, .value=0x40, .type=IO_READ},
        {.addr=0x7a8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x4ff7, .a=0x40, .x=0x6c, .y=0x44, .sp=0x27, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4ff7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4ff8, .a=0x40, .x=0x6c, .y=0x44, .sp=0x27, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4ff7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4ff7, .value=0x40, .type=IO_READ},
        {.addr=0x4ff8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x7fc0, .a=0x1e, .x=0xe6, .y=0x44, .sp=0xf3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x7fc0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7fc1, .a=0x1e, .x=0xe6, .y=0x44, .sp=0xf3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7fc0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7fc0, .value=0x40, .type=IO_READ},
        {.addr=0x7fc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x7cbd, .a=0xbc, .x=0x49, .y=0x73, .sp=0xc7, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7cbd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7cbe, .a=0xbc, .x=0x49, .y=0x73, .sp=0xc7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7cbd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7cbd, .value=0x40, .type=IO_READ},
        {.addr=0x7cbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x4f46, .a=0xbe, .x=0xb1, .y=0x3b, .sp=0xa1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4f46, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4f47, .a=0xbe, .x=0xb1, .y=0x3b, .sp=0xa1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4f46, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4f46, .value=0x40, .type=IO_READ},
        {.addr=0x4f47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xf708, .a=0xb9, .x=0x85, .y=0x23, .sp=0x8f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf708, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf709, .a=0xb9, .x=0x85, .y=0x23, .sp=0x8f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf708, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf708, .value=0x40, .type=IO_READ},
        {.addr=0xf709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x113e, .a=0xb8, .x=0xe5, .y=0x06, .sp=0x66, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x113e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x113f, .a=0xb8, .x=0xe5, .y=0x06, .sp=0x66, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x113e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x113e, .value=0x40, .type=IO_READ},
        {.addr=0x113f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x1790, .a=0xb8, .x=0x9d, .y=0xbc, .sp=0x02, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1790, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1791, .a=0xb8, .x=0x9d, .y=0xbc, .sp=0x02, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1790, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1790, .value=0x40, .type=IO_READ},
        {.addr=0x1791, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xf51e, .a=0x90, .x=0x79, .y=0xca, .sp=0xea, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf51e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf51f, .a=0x90, .x=0x79, .y=0xca, .sp=0xea, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf51e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf51e, .value=0x40, .type=IO_READ},
        {.addr=0xf51f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x485d, .a=0xe5, .x=0x3c, .y=0xf0, .sp=0xff, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x485d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x485e, .a=0xe5, .x=0x3c, .y=0xf0, .sp=0xff, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x485d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x485d, .value=0x40, .type=IO_READ},
        {.addr=0x485e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x85fd, .a=0xde, .x=0x31, .y=0x7d, .sp=0x94, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x85fd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x85fe, .a=0xde, .x=0x31, .y=0x7d, .sp=0x94, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x85fd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x85fd, .value=0x40, .type=IO_READ},
        {.addr=0x85fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x5099, .a=0xe0, .x=0x7b, .y=0x80, .sp=0xbb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5099, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x509a, .a=0xe0, .x=0x7b, .y=0x80, .sp=0xbb, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x5099, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5099, .value=0x40, .type=IO_READ},
        {.addr=0x509a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x6e83, .a=0xfe, .x=0x97, .y=0xad, .sp=0xff, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6e83, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6e84, .a=0xfe, .x=0x97, .y=0xad, .sp=0xff, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x6e83, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6e83, .value=0x40, .type=IO_READ},
        {.addr=0x6e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x0a0f, .a=0x26, .x=0x07, .y=0xcf, .sp=0xc2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0a10, .a=0x26, .x=0x07, .y=0xcf, .sp=0xc2, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0a0f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0a0f, .value=0x40, .type=IO_READ},
        {.addr=0x0a10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x42a0, .a=0x5c, .x=0x78, .y=0x57, .sp=0xe3, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x42a0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x42a1, .a=0x5c, .x=0x78, .y=0x57, .sp=0xe3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x42a0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x42a0, .value=0x40, .type=IO_READ},
        {.addr=0x42a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xe592, .a=0x1c, .x=0x9b, .y=0x46, .sp=0x4a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe592, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe593, .a=0x1c, .x=0x9b, .y=0x46, .sp=0x4a, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xe592, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe592, .value=0x40, .type=IO_READ},
        {.addr=0xe593, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xe9fc, .a=0x17, .x=0xa6, .y=0x5b, .sp=0x74, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe9fc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe9fd, .a=0x17, .x=0xa6, .y=0x5b, .sp=0x74, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe9fc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe9fc, .value=0x40, .type=IO_READ},
        {.addr=0xe9fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xe299, .a=0x7d, .x=0x0a, .y=0xea, .sp=0xa8, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe299, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe29a, .a=0x7d, .x=0x0a, .y=0xea, .sp=0xa8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe299, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe299, .value=0x40, .type=IO_READ},
        {.addr=0xe29a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x56a1, .a=0x12, .x=0x79, .y=0x5d, .sp=0xe3, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x56a1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x56a2, .a=0x12, .x=0x79, .y=0x5d, .sp=0xe3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x56a1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x56a1, .value=0x40, .type=IO_READ},
        {.addr=0x56a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x882f, .a=0x26, .x=0x54, .y=0xe6, .sp=0x03, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x882f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8830, .a=0x26, .x=0x54, .y=0xe6, .sp=0x03, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x882f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x882f, .value=0x40, .type=IO_READ},
        {.addr=0x8830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xf7f7, .a=0xab, .x=0x12, .y=0x60, .sp=0x32, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf7f7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf7f8, .a=0xab, .x=0x12, .y=0x60, .sp=0x32, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf7f7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf7f7, .value=0x40, .type=IO_READ},
        {.addr=0xf7f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x3715, .a=0xbb, .x=0x65, .y=0x0e, .sp=0x6a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3715, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3716, .a=0xbb, .x=0x65, .y=0x0e, .sp=0x6a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3715, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3715, .value=0x40, .type=IO_READ},
        {.addr=0x3716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x14d6, .a=0x29, .x=0x7a, .y=0xbd, .sp=0x1d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x14d6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x14d7, .a=0x29, .x=0x7a, .y=0xbd, .sp=0x1d, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x14d6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x14d6, .value=0x40, .type=IO_READ},
        {.addr=0x14d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x0db7, .a=0x0a, .x=0xb1, .y=0xe4, .sp=0x0a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0db7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0db8, .a=0x0a, .x=0xb1, .y=0xe4, .sp=0x0a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0db7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0db7, .value=0x40, .type=IO_READ},
        {.addr=0x0db8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x8eb7, .a=0x19, .x=0x5a, .y=0x15, .sp=0xd0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8eb8, .a=0x19, .x=0x5a, .y=0x15, .sp=0xd0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8eb7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8eb7, .value=0x40, .type=IO_READ},
        {.addr=0x8eb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xef85, .a=0x08, .x=0x32, .y=0x5f, .sp=0x0c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xef85, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef86, .a=0x08, .x=0x32, .y=0x5f, .sp=0x0c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xef85, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef85, .value=0x40, .type=IO_READ},
        {.addr=0xef86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x486b, .a=0x68, .x=0x59, .y=0x4b, .sp=0xbd, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x486b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x486c, .a=0x68, .x=0x59, .y=0x4b, .sp=0xbd, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x486b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x486b, .value=0x40, .type=IO_READ},
        {.addr=0x486c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xcc1a, .a=0x1c, .x=0xd6, .y=0x61, .sp=0xd0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcc1b, .a=0x1c, .x=0xd6, .y=0x61, .sp=0xd0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xcc1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcc1a, .value=0x40, .type=IO_READ},
        {.addr=0xcc1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xa7b2, .a=0xe0, .x=0xe7, .y=0xf3, .sp=0x12, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa7b2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa7b3, .a=0xe0, .x=0xe7, .y=0xf3, .sp=0x12, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa7b2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa7b2, .value=0x40, .type=IO_READ},
        {.addr=0xa7b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x5c57, .a=0x7f, .x=0x84, .y=0xc1, .sp=0xd2, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5c57, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c58, .a=0x7f, .x=0x84, .y=0xc1, .sp=0xd2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5c57, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c57, .value=0x40, .type=IO_READ},
        {.addr=0x5c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xd782, .a=0x68, .x=0x71, .y=0x6f, .sp=0x64, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd782, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd783, .a=0x68, .x=0x71, .y=0x6f, .sp=0x64, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd782, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd782, .value=0x40, .type=IO_READ},
        {.addr=0xd783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x659b, .a=0x54, .x=0x8e, .y=0x68, .sp=0xcc, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x659b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x659c, .a=0x54, .x=0x8e, .y=0x68, .sp=0xcc, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x659b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x659b, .value=0x40, .type=IO_READ},
        {.addr=0x659c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x850f, .a=0x91, .x=0xee, .y=0x2d, .sp=0x97, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x850f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8510, .a=0x91, .x=0xee, .y=0x2d, .sp=0x97, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x850f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x850f, .value=0x40, .type=IO_READ},
        {.addr=0x8510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xa5f1, .a=0x94, .x=0x52, .y=0x39, .sp=0x84, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa5f2, .a=0x94, .x=0x52, .y=0x39, .sp=0x84, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xa5f1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa5f1, .value=0x40, .type=IO_READ},
        {.addr=0xa5f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x1bd5, .a=0xa3, .x=0x87, .y=0xea, .sp=0xd5, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1bd6, .a=0xa3, .x=0x87, .y=0xea, .sp=0xd5, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x1bd5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1bd5, .value=0x40, .type=IO_READ},
        {.addr=0x1bd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x9821, .a=0xd3, .x=0x67, .y=0x15, .sp=0xa1, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9821, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9822, .a=0xd3, .x=0x67, .y=0x15, .sp=0xa1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9821, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9821, .value=0x40, .type=IO_READ},
        {.addr=0x9822, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc598, .a=0x05, .x=0x1e, .y=0xce, .sp=0xb6, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc598, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc599, .a=0x05, .x=0x1e, .y=0xce, .sp=0xb6, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xc598, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc598, .value=0x40, .type=IO_READ},
        {.addr=0xc599, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x081d, .a=0xf9, .x=0x06, .y=0x38, .sp=0xa8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x081d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x081e, .a=0xf9, .x=0x06, .y=0x38, .sp=0xa8, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x081d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x081d, .value=0x40, .type=IO_READ},
        {.addr=0x081e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x9379, .a=0xd9, .x=0x2b, .y=0x68, .sp=0xd5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9379, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x937a, .a=0xd9, .x=0x2b, .y=0x68, .sp=0xd5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9379, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9379, .value=0x40, .type=IO_READ},
        {.addr=0x937a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd2c0, .a=0x57, .x=0x2e, .y=0x41, .sp=0x80, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd2c1, .a=0x57, .x=0x2e, .y=0x41, .sp=0x80, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xd2c0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd2c0, .value=0x40, .type=IO_READ},
        {.addr=0xd2c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x496d, .a=0xbe, .x=0xa4, .y=0xc9, .sp=0x0f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x496d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x496e, .a=0xbe, .x=0xa4, .y=0xc9, .sp=0x0f, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x496d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x496d, .value=0x40, .type=IO_READ},
        {.addr=0x496e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x990e, .a=0x44, .x=0x68, .y=0x1f, .sp=0x46, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x990e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x990f, .a=0x44, .x=0x68, .y=0x1f, .sp=0x46, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x990e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x990e, .value=0x40, .type=IO_READ},
        {.addr=0x990f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe139, .a=0x36, .x=0x83, .y=0xa4, .sp=0x46, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xe139, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe13a, .a=0x36, .x=0x83, .y=0xa4, .sp=0x46, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe139, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe139, .value=0x40, .type=IO_READ},
        {.addr=0xe13a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x7c80, .a=0x17, .x=0xc9, .y=0x6e, .sp=0xe2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c80, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7c81, .a=0x17, .x=0xc9, .y=0x6e, .sp=0xe2, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7c80, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7c80, .value=0x40, .type=IO_READ},
        {.addr=0x7c81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2a2e, .a=0x06, .x=0xe2, .y=0x30, .sp=0xa5, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2a2e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2a2f, .a=0x06, .x=0xe2, .y=0x30, .sp=0xa5, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x2a2e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2a2e, .value=0x40, .type=IO_READ},
        {.addr=0x2a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xf859, .a=0x70, .x=0x14, .y=0x31, .sp=0x7c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf859, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf85a, .a=0x70, .x=0x14, .y=0x31, .sp=0x7c, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xf859, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf859, .value=0x40, .type=IO_READ},
        {.addr=0xf85a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x9f6c, .a=0x41, .x=0x11, .y=0x10, .sp=0xed, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9f6c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9f6d, .a=0x41, .x=0x11, .y=0x10, .sp=0xed, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x9f6c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9f6c, .value=0x40, .type=IO_READ},
        {.addr=0x9f6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xc97a, .a=0x47, .x=0x14, .y=0x88, .sp=0xe3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xc97a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc97b, .a=0x47, .x=0x14, .y=0x88, .sp=0xe3, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xc97a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc97a, .value=0x40, .type=IO_READ},
        {.addr=0xc97b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x6d5d, .a=0x50, .x=0xc9, .y=0xa6, .sp=0x9b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6d5e, .a=0x50, .x=0xc9, .y=0xa6, .sp=0x9b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x6d5d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6d5d, .value=0x40, .type=IO_READ},
        {.addr=0x6d5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x74e9, .a=0x76, .x=0xed, .y=0x6e, .sp=0xfe, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x74e9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x74ea, .a=0x76, .x=0xed, .y=0x6e, .sp=0xfe, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x74e9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x74e9, .value=0x40, .type=IO_READ},
        {.addr=0x74ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xfb6d, .a=0x28, .x=0xc1, .y=0x9e, .sp=0x55, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb6e, .a=0x28, .x=0xc1, .y=0x9e, .sp=0x55, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xfb6d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb6d, .value=0x40, .type=IO_READ},
        {.addr=0xfb6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xa4a3, .a=0x8a, .x=0x19, .y=0x9d, .sp=0x12, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa4a3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa4a4, .a=0x8a, .x=0x19, .y=0x9d, .sp=0x12, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xa4a3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa4a3, .value=0x40, .type=IO_READ},
        {.addr=0xa4a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x8bc0, .a=0x5c, .x=0x0c, .y=0x9d, .sp=0xee, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8bc1, .a=0x5c, .x=0x0c, .y=0x9d, .sp=0xee, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8bc0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8bc0, .value=0x40, .type=IO_READ},
        {.addr=0x8bc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x32b2, .a=0x1a, .x=0xcc, .y=0x8b, .sp=0x9c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x32b2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x32b3, .a=0x1a, .x=0xcc, .y=0x8b, .sp=0x9c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x32b2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x32b2, .value=0x40, .type=IO_READ},
        {.addr=0x32b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x4ed6, .a=0xa2, .x=0xaf, .y=0x4c, .sp=0x62, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4ed7, .a=0xa2, .x=0xaf, .y=0x4c, .sp=0x62, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4ed6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4ed6, .value=0x40, .type=IO_READ},
        {.addr=0x4ed7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb0aa, .a=0x70, .x=0x3d, .y=0xd5, .sp=0x5e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb0aa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb0ab, .a=0x70, .x=0x3d, .y=0xd5, .sp=0x5e, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb0aa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb0aa, .value=0x40, .type=IO_READ},
        {.addr=0xb0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x6522, .a=0x50, .x=0xd9, .y=0x7a, .sp=0xcd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6522, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6523, .a=0x50, .x=0xd9, .y=0x7a, .sp=0xcd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6522, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6522, .value=0x40, .type=IO_READ},
        {.addr=0x6523, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0200) {
    const struct CPU_State initial_cpu = {.pc=0x804b, .a=0x99, .x=0xe5, .y=0x3f, .sp=0x8e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x804b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x804c, .a=0x99, .x=0xe5, .y=0x3f, .sp=0x8e, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x804b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x804b, .value=0x40, .type=IO_READ},
        {.addr=0x804c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0201) {
    const struct CPU_State initial_cpu = {.pc=0xb0e9, .a=0x33, .x=0x98, .y=0x6a, .sp=0x43, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb0ea, .a=0x33, .x=0x98, .y=0x6a, .sp=0x43, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xb0e9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb0e9, .value=0x40, .type=IO_READ},
        {.addr=0xb0ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa436, .a=0xbf, .x=0xd6, .y=0xe6, .sp=0xa1, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa436, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa437, .a=0xbf, .x=0xd6, .y=0xe6, .sp=0xa1, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xa436, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa436, .value=0x40, .type=IO_READ},
        {.addr=0xa437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0203) {
    const struct CPU_State initial_cpu = {.pc=0x17fd, .a=0xfe, .x=0x31, .y=0x84, .sp=0x94, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x17fd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x17fe, .a=0xfe, .x=0x31, .y=0x84, .sp=0x94, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x17fd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x17fd, .value=0x40, .type=IO_READ},
        {.addr=0x17fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0204) {
    const struct CPU_State initial_cpu = {.pc=0xf854, .a=0xc3, .x=0x07, .y=0x10, .sp=0x76, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf854, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf855, .a=0xc3, .x=0x07, .y=0x10, .sp=0x76, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xf854, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf854, .value=0x40, .type=IO_READ},
        {.addr=0xf855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0205) {
    const struct CPU_State initial_cpu = {.pc=0x4b6d, .a=0x84, .x=0xdc, .y=0x83, .sp=0x8c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b6d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4b6e, .a=0x84, .x=0xdc, .y=0x83, .sp=0x8c, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x4b6d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4b6d, .value=0x40, .type=IO_READ},
        {.addr=0x4b6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0206) {
    const struct CPU_State initial_cpu = {.pc=0x4e96, .a=0x95, .x=0x59, .y=0xdf, .sp=0x3e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e96, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4e97, .a=0x95, .x=0x59, .y=0xdf, .sp=0x3e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4e96, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4e96, .value=0x40, .type=IO_READ},
        {.addr=0x4e97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb16d, .a=0xad, .x=0x7b, .y=0x37, .sp=0xf2, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb16d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb16e, .a=0xad, .x=0x7b, .y=0x37, .sp=0xf2, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xb16d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb16d, .value=0x40, .type=IO_READ},
        {.addr=0xb16e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0208) {
    const struct CPU_State initial_cpu = {.pc=0x065e, .a=0xfe, .x=0xbd, .y=0x09, .sp=0x6d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x065e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x065f, .a=0xfe, .x=0xbd, .y=0x09, .sp=0x6d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x065e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x065e, .value=0x40, .type=IO_READ},
        {.addr=0x065f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0209) {
    const struct CPU_State initial_cpu = {.pc=0x182e, .a=0xcd, .x=0xdc, .y=0x2c, .sp=0x02, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x182e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x182f, .a=0xcd, .x=0xdc, .y=0x2c, .sp=0x02, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x182e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x182e, .value=0x40, .type=IO_READ},
        {.addr=0x182f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020A) {
    const struct CPU_State initial_cpu = {.pc=0xbc41, .a=0x03, .x=0x71, .y=0xbc, .sp=0xe9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc41, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbc42, .a=0x03, .x=0x71, .y=0xbc, .sp=0xe9, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xbc41, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbc41, .value=0x40, .type=IO_READ},
        {.addr=0xbc42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020B) {
    const struct CPU_State initial_cpu = {.pc=0x06d0, .a=0xe6, .x=0xca, .y=0xb5, .sp=0xf1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x06d0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06d1, .a=0xe6, .x=0xca, .y=0xb5, .sp=0xf1, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x06d0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06d0, .value=0x40, .type=IO_READ},
        {.addr=0x06d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020C) {
    const struct CPU_State initial_cpu = {.pc=0xfb93, .a=0x29, .x=0xd0, .y=0x90, .sp=0x20, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xfb93, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb94, .a=0x29, .x=0xd0, .y=0x90, .sp=0x20, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xfb93, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb93, .value=0x40, .type=IO_READ},
        {.addr=0xfb94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020D) {
    const struct CPU_State initial_cpu = {.pc=0x9137, .a=0x23, .x=0x81, .y=0x0e, .sp=0xcd, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9137, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9138, .a=0x23, .x=0x81, .y=0x0e, .sp=0xcd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x9137, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9137, .value=0x40, .type=IO_READ},
        {.addr=0x9138, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8f7e, .a=0x9a, .x=0xff, .y=0x8f, .sp=0x57, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8f7f, .a=0x9a, .x=0xff, .y=0x8f, .sp=0x57, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x8f7e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8f7e, .value=0x40, .type=IO_READ},
        {.addr=0x8f7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_020F) {
    const struct CPU_State initial_cpu = {.pc=0xe489, .a=0x0d, .x=0xae, .y=0x0c, .sp=0x00, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe489, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe48a, .a=0x0d, .x=0xae, .y=0x0c, .sp=0x00, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xe489, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe489, .value=0x40, .type=IO_READ},
        {.addr=0xe48a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4783, .a=0x4f, .x=0x98, .y=0xe5, .sp=0x89, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4783, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4784, .a=0x4f, .x=0x98, .y=0xe5, .sp=0x89, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4783, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4783, .value=0x40, .type=IO_READ},
        {.addr=0x4784, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0211) {
    const struct CPU_State initial_cpu = {.pc=0xac53, .a=0xbb, .x=0xc2, .y=0xf1, .sp=0xd0, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xac53, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xac54, .a=0xbb, .x=0xc2, .y=0xf1, .sp=0xd0, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xac53, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xac53, .value=0x40, .type=IO_READ},
        {.addr=0xac54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0212) {
    const struct CPU_State initial_cpu = {.pc=0x9034, .a=0x47, .x=0xaa, .y=0x6c, .sp=0x06, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x9034, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9035, .a=0x47, .x=0xaa, .y=0x6c, .sp=0x06, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x9034, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9034, .value=0x40, .type=IO_READ},
        {.addr=0x9035, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0213) {
    const struct CPU_State initial_cpu = {.pc=0x99ba, .a=0x17, .x=0x94, .y=0x35, .sp=0xc0, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x99ba, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x99bb, .a=0x17, .x=0x94, .y=0x35, .sp=0xc0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x99ba, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x99ba, .value=0x40, .type=IO_READ},
        {.addr=0x99bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0214) {
    const struct CPU_State initial_cpu = {.pc=0xfe4e, .a=0x52, .x=0x18, .y=0x2a, .sp=0x5c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfe4f, .a=0x52, .x=0x18, .y=0x2a, .sp=0x5c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xfe4e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfe4e, .value=0x40, .type=IO_READ},
        {.addr=0xfe4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0215) {
    const struct CPU_State initial_cpu = {.pc=0x982d, .a=0x9d, .x=0xbf, .y=0x6b, .sp=0x49, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x982d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x982e, .a=0x9d, .x=0xbf, .y=0x6b, .sp=0x49, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x982d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x982d, .value=0x40, .type=IO_READ},
        {.addr=0x982e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0216) {
    const struct CPU_State initial_cpu = {.pc=0x2f38, .a=0xf8, .x=0x3d, .y=0x6b, .sp=0xa2, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f38, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2f39, .a=0xf8, .x=0x3d, .y=0x6b, .sp=0xa2, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2f38, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2f38, .value=0x40, .type=IO_READ},
        {.addr=0x2f39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0217) {
    const struct CPU_State initial_cpu = {.pc=0xd689, .a=0x06, .x=0x02, .y=0x13, .sp=0x73, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd689, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd68a, .a=0x06, .x=0x02, .y=0x13, .sp=0x73, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xd689, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd689, .value=0x40, .type=IO_READ},
        {.addr=0xd68a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0218) {
    const struct CPU_State initial_cpu = {.pc=0x4fe3, .a=0x29, .x=0x88, .y=0xeb, .sp=0xaa, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4fe4, .a=0x29, .x=0x88, .y=0xeb, .sp=0xaa, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4fe3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4fe3, .value=0x40, .type=IO_READ},
        {.addr=0x4fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7b1a, .a=0x80, .x=0x27, .y=0xf1, .sp=0xcc, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7b1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7b1b, .a=0x80, .x=0x27, .y=0xf1, .sp=0xcc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7b1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7b1a, .value=0x40, .type=IO_READ},
        {.addr=0x7b1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021A) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0xad, .x=0xac, .y=0x78, .sp=0xc8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x652b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x652c, .a=0xad, .x=0xac, .y=0x78, .sp=0xc8, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x652b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0x40, .type=IO_READ},
        {.addr=0x652c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021B) {
    const struct CPU_State initial_cpu = {.pc=0x5b4b, .a=0xc2, .x=0xa9, .y=0x17, .sp=0x29, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x5b4b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5b4c, .a=0xc2, .x=0xa9, .y=0x17, .sp=0x29, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5b4b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5b4b, .value=0x40, .type=IO_READ},
        {.addr=0x5b4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021C) {
    const struct CPU_State initial_cpu = {.pc=0xdcf1, .a=0x49, .x=0xfa, .y=0x28, .sp=0x7d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdcf2, .a=0x49, .x=0xfa, .y=0x28, .sp=0x7d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdcf1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdcf1, .value=0x40, .type=IO_READ},
        {.addr=0xdcf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021D) {
    const struct CPU_State initial_cpu = {.pc=0x3e9d, .a=0xcf, .x=0x5f, .y=0x03, .sp=0xff, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3e9d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e9e, .a=0xcf, .x=0x5f, .y=0x03, .sp=0xff, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x3e9d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e9d, .value=0x40, .type=IO_READ},
        {.addr=0x3e9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021E) {
    const struct CPU_State initial_cpu = {.pc=0x8aaf, .a=0xda, .x=0x53, .y=0x35, .sp=0x7e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8aaf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8ab0, .a=0xda, .x=0x53, .y=0x35, .sp=0x7e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x8aaf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8aaf, .value=0x40, .type=IO_READ},
        {.addr=0x8ab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf006, .a=0xb0, .x=0xf6, .y=0x59, .sp=0x92, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf006, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf007, .a=0xb0, .x=0xf6, .y=0x59, .sp=0x92, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xf006, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf006, .value=0x40, .type=IO_READ},
        {.addr=0xf007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0220) {
    const struct CPU_State initial_cpu = {.pc=0x8f4c, .a=0x2b, .x=0x0b, .y=0x12, .sp=0xce, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8f4c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8f4d, .a=0x2b, .x=0x0b, .y=0x12, .sp=0xce, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8f4c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8f4c, .value=0x40, .type=IO_READ},
        {.addr=0x8f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0221) {
    const struct CPU_State initial_cpu = {.pc=0x9225, .a=0xfb, .x=0xe7, .y=0x81, .sp=0xad, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9225, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9226, .a=0xfb, .x=0xe7, .y=0x81, .sp=0xad, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x9225, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9225, .value=0x40, .type=IO_READ},
        {.addr=0x9226, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0222) {
    const struct CPU_State initial_cpu = {.pc=0x0554, .a=0xec, .x=0x3c, .y=0x64, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0554, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0555, .a=0xec, .x=0x3c, .y=0x64, .sp=0x26, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0554, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0554, .value=0x40, .type=IO_READ},
        {.addr=0x0555, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0223) {
    const struct CPU_State initial_cpu = {.pc=0xd06c, .a=0x04, .x=0xfe, .y=0xcf, .sp=0x1f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xd06c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd06d, .a=0x04, .x=0xfe, .y=0xcf, .sp=0x1f, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xd06c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd06c, .value=0x40, .type=IO_READ},
        {.addr=0xd06d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa70b, .a=0xdd, .x=0x08, .y=0x9c, .sp=0x55, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa70b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa70c, .a=0xdd, .x=0x08, .y=0x9c, .sp=0x55, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xa70b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa70b, .value=0x40, .type=IO_READ},
        {.addr=0xa70c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0225) {
    const struct CPU_State initial_cpu = {.pc=0xb74a, .a=0xc0, .x=0xd2, .y=0xfa, .sp=0xc8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb74a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb74b, .a=0xc0, .x=0xd2, .y=0xfa, .sp=0xc8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb74a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb74a, .value=0x40, .type=IO_READ},
        {.addr=0xb74b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0226) {
    const struct CPU_State initial_cpu = {.pc=0xd8de, .a=0xad, .x=0xb6, .y=0x63, .sp=0x23, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd8de, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd8df, .a=0xad, .x=0xb6, .y=0x63, .sp=0x23, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd8de, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd8de, .value=0x40, .type=IO_READ},
        {.addr=0xd8df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0227) {
    const struct CPU_State initial_cpu = {.pc=0x9be3, .a=0x9e, .x=0xc8, .y=0x90, .sp=0x26, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x9be3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9be4, .a=0x9e, .x=0xc8, .y=0x90, .sp=0x26, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x9be3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9be3, .value=0x40, .type=IO_READ},
        {.addr=0x9be4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0228) {
    const struct CPU_State initial_cpu = {.pc=0x79b4, .a=0x84, .x=0x9e, .y=0xf7, .sp=0xb2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x79b4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x79b5, .a=0x84, .x=0x9e, .y=0xf7, .sp=0xb2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x79b4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x79b4, .value=0x40, .type=IO_READ},
        {.addr=0x79b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0229) {
    const struct CPU_State initial_cpu = {.pc=0x37ac, .a=0xab, .x=0x36, .y=0x24, .sp=0x14, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x37ac, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x37ad, .a=0xab, .x=0x36, .y=0x24, .sp=0x14, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x37ac, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x37ac, .value=0x40, .type=IO_READ},
        {.addr=0x37ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022A) {
    const struct CPU_State initial_cpu = {.pc=0xed6a, .a=0xb6, .x=0x34, .y=0x97, .sp=0xaf, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xed6a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xed6b, .a=0xb6, .x=0x34, .y=0x97, .sp=0xaf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xed6a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xed6a, .value=0x40, .type=IO_READ},
        {.addr=0xed6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022B) {
    const struct CPU_State initial_cpu = {.pc=0x3792, .a=0xa1, .x=0x0d, .y=0x01, .sp=0x1d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3792, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3793, .a=0xa1, .x=0x0d, .y=0x01, .sp=0x1d, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x3792, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3792, .value=0x40, .type=IO_READ},
        {.addr=0x3793, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022C) {
    const struct CPU_State initial_cpu = {.pc=0xc1b8, .a=0x11, .x=0xd8, .y=0x46, .sp=0x71, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc1b9, .a=0x11, .x=0xd8, .y=0x46, .sp=0x71, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xc1b8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc1b8, .value=0x40, .type=IO_READ},
        {.addr=0xc1b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022D) {
    const struct CPU_State initial_cpu = {.pc=0x35c3, .a=0xc2, .x=0x7c, .y=0x55, .sp=0x22, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x35c3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x35c4, .a=0xc2, .x=0x7c, .y=0x55, .sp=0x22, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x35c3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x35c3, .value=0x40, .type=IO_READ},
        {.addr=0x35c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022E) {
    const struct CPU_State initial_cpu = {.pc=0xe63f, .a=0x78, .x=0x7e, .y=0xc8, .sp=0xcf, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe63f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe640, .a=0x78, .x=0x7e, .y=0xc8, .sp=0xcf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe63f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe63f, .value=0x40, .type=IO_READ},
        {.addr=0xe640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_022F) {
    const struct CPU_State initial_cpu = {.pc=0x4481, .a=0x75, .x=0x0d, .y=0xde, .sp=0xff, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4481, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4482, .a=0x75, .x=0x0d, .y=0xde, .sp=0xff, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x4481, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4481, .value=0x40, .type=IO_READ},
        {.addr=0x4482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0230) {
    const struct CPU_State initial_cpu = {.pc=0x8bb0, .a=0x4e, .x=0x54, .y=0x29, .sp=0x99, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8bb0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8bb1, .a=0x4e, .x=0x54, .y=0x29, .sp=0x99, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8bb0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8bb0, .value=0x40, .type=IO_READ},
        {.addr=0x8bb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0231) {
    const struct CPU_State initial_cpu = {.pc=0x5871, .a=0x0d, .x=0xe3, .y=0x72, .sp=0xe0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x5871, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5872, .a=0x0d, .x=0xe3, .y=0x72, .sp=0xe0, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x5871, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5871, .value=0x40, .type=IO_READ},
        {.addr=0x5872, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0232) {
    const struct CPU_State initial_cpu = {.pc=0x9c44, .a=0xb8, .x=0x5c, .y=0x0c, .sp=0x3c, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9c44, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9c45, .a=0xb8, .x=0x5c, .y=0x0c, .sp=0x3c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9c44, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9c44, .value=0x40, .type=IO_READ},
        {.addr=0x9c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0233) {
    const struct CPU_State initial_cpu = {.pc=0x69b4, .a=0xfa, .x=0xd8, .y=0xdd, .sp=0x99, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x69b4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x69b5, .a=0xfa, .x=0xd8, .y=0xdd, .sp=0x99, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x69b4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x69b4, .value=0x40, .type=IO_READ},
        {.addr=0x69b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0234) {
    const struct CPU_State initial_cpu = {.pc=0x2de3, .a=0x33, .x=0x17, .y=0x02, .sp=0xc4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2de3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2de4, .a=0x33, .x=0x17, .y=0x02, .sp=0xc4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2de3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2de3, .value=0x40, .type=IO_READ},
        {.addr=0x2de4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0235) {
    const struct CPU_State initial_cpu = {.pc=0x9692, .a=0x26, .x=0x9d, .y=0x26, .sp=0xc5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9692, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9693, .a=0x26, .x=0x9d, .y=0x26, .sp=0xc5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9692, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9692, .value=0x40, .type=IO_READ},
        {.addr=0x9693, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc111, .a=0xb7, .x=0x17, .y=0x04, .sp=0xfa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc111, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc112, .a=0xb7, .x=0x17, .y=0x04, .sp=0xfa, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xc111, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc111, .value=0x40, .type=IO_READ},
        {.addr=0xc112, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6a57, .a=0xff, .x=0x8f, .y=0x02, .sp=0xbe, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a57, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6a58, .a=0xff, .x=0x8f, .y=0x02, .sp=0xbe, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6a57, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6a57, .value=0x40, .type=IO_READ},
        {.addr=0x6a58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0238) {
    const struct CPU_State initial_cpu = {.pc=0x4328, .a=0x7f, .x=0xfb, .y=0x7c, .sp=0x05, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4328, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4329, .a=0x7f, .x=0xfb, .y=0x7c, .sp=0x05, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4328, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4328, .value=0x40, .type=IO_READ},
        {.addr=0x4329, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0239) {
    const struct CPU_State initial_cpu = {.pc=0x0772, .a=0x03, .x=0x8a, .y=0x42, .sp=0xd9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0772, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0773, .a=0x03, .x=0x8a, .y=0x42, .sp=0xd9, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0772, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0772, .value=0x40, .type=IO_READ},
        {.addr=0x0773, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5f68, .a=0x0e, .x=0x3a, .y=0xe5, .sp=0xcd, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5f68, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5f69, .a=0x0e, .x=0x3a, .y=0xe5, .sp=0xcd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5f68, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5f68, .value=0x40, .type=IO_READ},
        {.addr=0x5f69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023B) {
    const struct CPU_State initial_cpu = {.pc=0x7816, .a=0x4e, .x=0x7a, .y=0xec, .sp=0xf2, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7816, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7817, .a=0x4e, .x=0x7a, .y=0xec, .sp=0xf2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7816, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7816, .value=0x40, .type=IO_READ},
        {.addr=0x7817, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023C) {
    const struct CPU_State initial_cpu = {.pc=0x58a1, .a=0x9f, .x=0x67, .y=0x19, .sp=0xa2, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x58a1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x58a2, .a=0x9f, .x=0x67, .y=0x19, .sp=0xa2, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x58a1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x58a1, .value=0x40, .type=IO_READ},
        {.addr=0x58a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023D) {
    const struct CPU_State initial_cpu = {.pc=0x5417, .a=0xc6, .x=0xd4, .y=0xbd, .sp=0x81, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5417, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5418, .a=0xc6, .x=0xd4, .y=0xbd, .sp=0x81, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x5417, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5417, .value=0x40, .type=IO_READ},
        {.addr=0x5418, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023E) {
    const struct CPU_State initial_cpu = {.pc=0xffc9, .a=0xd1, .x=0x42, .y=0xd7, .sp=0x2a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xffc9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xffca, .a=0xd1, .x=0x42, .y=0xd7, .sp=0x2a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xffc9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xffc9, .value=0x40, .type=IO_READ},
        {.addr=0xffca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_023F) {
    const struct CPU_State initial_cpu = {.pc=0xab6b, .a=0xe9, .x=0x87, .y=0x5d, .sp=0xca, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xab6b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xab6c, .a=0xe9, .x=0x87, .y=0x5d, .sp=0xca, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xab6b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xab6b, .value=0x40, .type=IO_READ},
        {.addr=0xab6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0240) {
    const struct CPU_State initial_cpu = {.pc=0x1e06, .a=0x18, .x=0x64, .y=0xe4, .sp=0x73, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1e06, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1e07, .a=0x18, .x=0x64, .y=0xe4, .sp=0x73, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1e06, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1e06, .value=0x40, .type=IO_READ},
        {.addr=0x1e07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9178, .a=0xf6, .x=0x9a, .y=0x9f, .sp=0x96, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x9178, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9179, .a=0xf6, .x=0x9a, .y=0x9f, .sp=0x96, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9178, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9178, .value=0x40, .type=IO_READ},
        {.addr=0x9179, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2712, .a=0x8a, .x=0xc6, .y=0xd3, .sp=0x95, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2712, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2713, .a=0x8a, .x=0xc6, .y=0xd3, .sp=0x95, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x2712, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2712, .value=0x40, .type=IO_READ},
        {.addr=0x2713, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3d45, .a=0xab, .x=0x19, .y=0xb1, .sp=0x87, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3d45, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3d46, .a=0xab, .x=0x19, .y=0xb1, .sp=0x87, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x3d45, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3d45, .value=0x40, .type=IO_READ},
        {.addr=0x3d46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0244) {
    const struct CPU_State initial_cpu = {.pc=0xdbb2, .a=0x12, .x=0x3f, .y=0x40, .sp=0xec, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdbb3, .a=0x12, .x=0x3f, .y=0x40, .sp=0xec, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdbb2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdbb2, .value=0x40, .type=IO_READ},
        {.addr=0xdbb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0245) {
    const struct CPU_State initial_cpu = {.pc=0x3d70, .a=0x1c, .x=0x8c, .y=0x02, .sp=0x5f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d70, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3d71, .a=0x1c, .x=0x8c, .y=0x02, .sp=0x5f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x3d70, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3d70, .value=0x40, .type=IO_READ},
        {.addr=0x3d71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0246) {
    const struct CPU_State initial_cpu = {.pc=0x53d1, .a=0xf4, .x=0x6c, .y=0xc4, .sp=0xd8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x53d1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x53d2, .a=0xf4, .x=0x6c, .y=0xc4, .sp=0xd8, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x53d1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x53d1, .value=0x40, .type=IO_READ},
        {.addr=0x53d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0247) {
    const struct CPU_State initial_cpu = {.pc=0x0abe, .a=0x04, .x=0x47, .y=0x1f, .sp=0x52, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0abe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0abf, .a=0x04, .x=0x47, .y=0x1f, .sp=0x52, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0abe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0abe, .value=0x40, .type=IO_READ},
        {.addr=0x0abf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0248) {
    const struct CPU_State initial_cpu = {.pc=0x1357, .a=0x56, .x=0x50, .y=0xd4, .sp=0x11, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1357, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1358, .a=0x56, .x=0x50, .y=0xd4, .sp=0x11, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1357, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1357, .value=0x40, .type=IO_READ},
        {.addr=0x1358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0249) {
    const struct CPU_State initial_cpu = {.pc=0xf50f, .a=0xdf, .x=0x2b, .y=0x89, .sp=0x80, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf50f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf510, .a=0xdf, .x=0x2b, .y=0x89, .sp=0x80, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf50f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf50f, .value=0x40, .type=IO_READ},
        {.addr=0xf510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024A) {
    const struct CPU_State initial_cpu = {.pc=0xc99d, .a=0x39, .x=0x37, .y=0xa2, .sp=0xe3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc99d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc99e, .a=0x39, .x=0x37, .y=0xa2, .sp=0xe3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xc99d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc99d, .value=0x40, .type=IO_READ},
        {.addr=0xc99e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa360, .a=0x7a, .x=0x5b, .y=0x40, .sp=0xc7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa360, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa361, .a=0x7a, .x=0x5b, .y=0x40, .sp=0xc7, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xa360, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa360, .value=0x40, .type=IO_READ},
        {.addr=0xa361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024C) {
    const struct CPU_State initial_cpu = {.pc=0xc9f5, .a=0xca, .x=0xe1, .y=0x91, .sp=0x27, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc9f6, .a=0xca, .x=0xe1, .y=0x91, .sp=0x27, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xc9f5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc9f5, .value=0x40, .type=IO_READ},
        {.addr=0xc9f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024D) {
    const struct CPU_State initial_cpu = {.pc=0xa8a0, .a=0x93, .x=0x3b, .y=0x9a, .sp=0x7a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa8a1, .a=0x93, .x=0x3b, .y=0x9a, .sp=0x7a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa8a0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa8a0, .value=0x40, .type=IO_READ},
        {.addr=0xa8a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024E) {
    const struct CPU_State initial_cpu = {.pc=0x63f3, .a=0xef, .x=0x98, .y=0x90, .sp=0xec, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x63f3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x63f4, .a=0xef, .x=0x98, .y=0x90, .sp=0xec, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x63f3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x63f3, .value=0x40, .type=IO_READ},
        {.addr=0x63f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_024F) {
    const struct CPU_State initial_cpu = {.pc=0x074b, .a=0xb0, .x=0xb2, .y=0xdb, .sp=0x62, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x074b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x074c, .a=0xb0, .x=0xb2, .y=0xdb, .sp=0x62, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x074b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x074b, .value=0x40, .type=IO_READ},
        {.addr=0x074c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0250) {
    const struct CPU_State initial_cpu = {.pc=0x360b, .a=0x18, .x=0x72, .y=0x95, .sp=0x64, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x360b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x360c, .a=0x18, .x=0x72, .y=0x95, .sp=0x64, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x360b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x360b, .value=0x40, .type=IO_READ},
        {.addr=0x360c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0251) {
    const struct CPU_State initial_cpu = {.pc=0x7aca, .a=0xcc, .x=0x45, .y=0x2b, .sp=0x96, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7aca, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7acb, .a=0xcc, .x=0x45, .y=0x2b, .sp=0x96, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x7aca, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7aca, .value=0x40, .type=IO_READ},
        {.addr=0x7acb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0252) {
    const struct CPU_State initial_cpu = {.pc=0x3e16, .a=0x85, .x=0xdc, .y=0x01, .sp=0xd5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3e16, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e17, .a=0x85, .x=0xdc, .y=0x01, .sp=0xd5, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x3e16, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e16, .value=0x40, .type=IO_READ},
        {.addr=0x3e17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0253) {
    const struct CPU_State initial_cpu = {.pc=0x76b7, .a=0x67, .x=0x77, .y=0x78, .sp=0xdb, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x76b7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x76b8, .a=0x67, .x=0x77, .y=0x78, .sp=0xdb, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x76b7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x76b7, .value=0x40, .type=IO_READ},
        {.addr=0x76b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0254) {
    const struct CPU_State initial_cpu = {.pc=0xfefa, .a=0x7a, .x=0xc7, .y=0x47, .sp=0x55, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xfefa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfefb, .a=0x7a, .x=0xc7, .y=0x47, .sp=0x55, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfefa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfefa, .value=0x40, .type=IO_READ},
        {.addr=0xfefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0255) {
    const struct CPU_State initial_cpu = {.pc=0xa634, .a=0x61, .x=0x42, .y=0x38, .sp=0x6e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa634, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa635, .a=0x61, .x=0x42, .y=0x38, .sp=0x6e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xa634, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa634, .value=0x40, .type=IO_READ},
        {.addr=0xa635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0256) {
    const struct CPU_State initial_cpu = {.pc=0x578e, .a=0xa0, .x=0x74, .y=0x0b, .sp=0x88, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x578e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x578f, .a=0xa0, .x=0x74, .y=0x0b, .sp=0x88, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x578e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x578e, .value=0x40, .type=IO_READ},
        {.addr=0x578f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0257) {
    const struct CPU_State initial_cpu = {.pc=0x0f8f, .a=0xee, .x=0xa7, .y=0xc3, .sp=0xad, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0f8f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f90, .a=0xee, .x=0xa7, .y=0xc3, .sp=0xad, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0f8f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f8f, .value=0x40, .type=IO_READ},
        {.addr=0x0f90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0258) {
    const struct CPU_State initial_cpu = {.pc=0x3368, .a=0xb8, .x=0xc1, .y=0x67, .sp=0xa3, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3368, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3369, .a=0xb8, .x=0xc1, .y=0x67, .sp=0xa3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3368, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3368, .value=0x40, .type=IO_READ},
        {.addr=0x3369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0259) {
    const struct CPU_State initial_cpu = {.pc=0x7853, .a=0x26, .x=0x40, .y=0x63, .sp=0xc3, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7853, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7854, .a=0x26, .x=0x40, .y=0x63, .sp=0xc3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7853, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7853, .value=0x40, .type=IO_READ},
        {.addr=0x7854, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7502, .a=0x43, .x=0x85, .y=0x63, .sp=0xfb, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7502, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7503, .a=0x43, .x=0x85, .y=0x63, .sp=0xfb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7502, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7502, .value=0x40, .type=IO_READ},
        {.addr=0x7503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025B) {
    const struct CPU_State initial_cpu = {.pc=0x6aab, .a=0xab, .x=0x14, .y=0xba, .sp=0x13, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6aab, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6aac, .a=0xab, .x=0x14, .y=0xba, .sp=0x13, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x6aab, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6aab, .value=0x40, .type=IO_READ},
        {.addr=0x6aac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025C) {
    const struct CPU_State initial_cpu = {.pc=0x400a, .a=0x38, .x=0xd0, .y=0x16, .sp=0x8e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x400a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x400b, .a=0x38, .x=0xd0, .y=0x16, .sp=0x8e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x400a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x400a, .value=0x40, .type=IO_READ},
        {.addr=0x400b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025D) {
    const struct CPU_State initial_cpu = {.pc=0xe2b2, .a=0x68, .x=0xa4, .y=0x70, .sp=0x2c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe2b2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe2b3, .a=0x68, .x=0xa4, .y=0x70, .sp=0x2c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe2b2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe2b2, .value=0x40, .type=IO_READ},
        {.addr=0xe2b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025E) {
    const struct CPU_State initial_cpu = {.pc=0x9d98, .a=0x5b, .x=0x21, .y=0xb8, .sp=0xba, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9d98, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9d99, .a=0x5b, .x=0x21, .y=0xb8, .sp=0xba, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x9d98, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9d98, .value=0x40, .type=IO_READ},
        {.addr=0x9d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_025F) {
    const struct CPU_State initial_cpu = {.pc=0x5cc7, .a=0x19, .x=0x76, .y=0x15, .sp=0x9e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5cc8, .a=0x19, .x=0x76, .y=0x15, .sp=0x9e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5cc7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5cc7, .value=0x40, .type=IO_READ},
        {.addr=0x5cc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0260) {
    const struct CPU_State initial_cpu = {.pc=0x7857, .a=0x49, .x=0xab, .y=0xdd, .sp=0xfb, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7857, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7858, .a=0x49, .x=0xab, .y=0xdd, .sp=0xfb, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7857, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7857, .value=0x40, .type=IO_READ},
        {.addr=0x7858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0261) {
    const struct CPU_State initial_cpu = {.pc=0x82bd, .a=0x10, .x=0x1e, .y=0x6a, .sp=0xd7, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x82bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x82be, .a=0x10, .x=0x1e, .y=0x6a, .sp=0xd7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x82bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x82bd, .value=0x40, .type=IO_READ},
        {.addr=0x82be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0262) {
    const struct CPU_State initial_cpu = {.pc=0x5723, .a=0xbf, .x=0x90, .y=0xa6, .sp=0xcb, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5723, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5724, .a=0xbf, .x=0x90, .y=0xa6, .sp=0xcb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5723, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5723, .value=0x40, .type=IO_READ},
        {.addr=0x5724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0263) {
    const struct CPU_State initial_cpu = {.pc=0xbb4f, .a=0xc9, .x=0x31, .y=0xad, .sp=0x64, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xbb4f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbb50, .a=0xc9, .x=0x31, .y=0xad, .sp=0x64, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbb4f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbb4f, .value=0x40, .type=IO_READ},
        {.addr=0xbb50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0264) {
    const struct CPU_State initial_cpu = {.pc=0xf1ae, .a=0xac, .x=0x6a, .y=0x52, .sp=0xec, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf1ae, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf1af, .a=0xac, .x=0x6a, .y=0x52, .sp=0xec, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf1ae, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf1ae, .value=0x40, .type=IO_READ},
        {.addr=0xf1af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0265) {
    const struct CPU_State initial_cpu = {.pc=0xfefa, .a=0xcb, .x=0xee, .y=0xc5, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xfefa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfefb, .a=0xcb, .x=0xee, .y=0xc5, .sp=0x24, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfefa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfefa, .value=0x40, .type=IO_READ},
        {.addr=0xfefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0266) {
    const struct CPU_State initial_cpu = {.pc=0x0158, .a=0xc1, .x=0x29, .y=0x2c, .sp=0x19, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0159, .a=0xc1, .x=0x29, .y=0x2c, .sp=0x19, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0158, .value=0x40, .type=IO_READ},
        {.addr=0x0159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0267) {
    const struct CPU_State initial_cpu = {.pc=0xad5e, .a=0xeb, .x=0xa1, .y=0x4c, .sp=0x8b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xad5e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xad5f, .a=0xeb, .x=0xa1, .y=0x4c, .sp=0x8b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xad5e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xad5e, .value=0x40, .type=IO_READ},
        {.addr=0xad5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0268) {
    const struct CPU_State initial_cpu = {.pc=0x93e9, .a=0x18, .x=0x9e, .y=0x30, .sp=0x47, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x93e9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x93ea, .a=0x18, .x=0x9e, .y=0x30, .sp=0x47, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x93e9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x93e9, .value=0x40, .type=IO_READ},
        {.addr=0x93ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0269) {
    const struct CPU_State initial_cpu = {.pc=0x95cc, .a=0x43, .x=0xb0, .y=0xe5, .sp=0x66, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x95cc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x95cd, .a=0x43, .x=0xb0, .y=0xe5, .sp=0x66, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x95cc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x95cc, .value=0x40, .type=IO_READ},
        {.addr=0x95cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026A) {
    const struct CPU_State initial_cpu = {.pc=0x757e, .a=0xd8, .x=0x4c, .y=0x05, .sp=0x20, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x757e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x757f, .a=0xd8, .x=0x4c, .y=0x05, .sp=0x20, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x757e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x757e, .value=0x40, .type=IO_READ},
        {.addr=0x757f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb4bc, .a=0xf3, .x=0x62, .y=0x9d, .sp=0x1e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb4bc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb4bd, .a=0xf3, .x=0x62, .y=0x9d, .sp=0x1e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xb4bc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb4bc, .value=0x40, .type=IO_READ},
        {.addr=0xb4bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026C) {
    const struct CPU_State initial_cpu = {.pc=0x8b10, .a=0x09, .x=0x4e, .y=0xa0, .sp=0xb7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8b10, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8b11, .a=0x09, .x=0x4e, .y=0xa0, .sp=0xb7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x8b10, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8b10, .value=0x40, .type=IO_READ},
        {.addr=0x8b11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026D) {
    const struct CPU_State initial_cpu = {.pc=0xea20, .a=0x33, .x=0x9a, .y=0x27, .sp=0x4a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xea20, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xea21, .a=0x33, .x=0x9a, .y=0x27, .sp=0x4a, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xea20, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xea20, .value=0x40, .type=IO_READ},
        {.addr=0xea21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026E) {
    const struct CPU_State initial_cpu = {.pc=0x972b, .a=0xff, .x=0xb2, .y=0x20, .sp=0x62, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x972b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x972c, .a=0xff, .x=0xb2, .y=0x20, .sp=0x62, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x972b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x972b, .value=0x40, .type=IO_READ},
        {.addr=0x972c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_026F) {
    const struct CPU_State initial_cpu = {.pc=0x482f, .a=0x6c, .x=0xc9, .y=0x9b, .sp=0x50, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x482f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4830, .a=0x6c, .x=0xc9, .y=0x9b, .sp=0x50, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x482f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x482f, .value=0x40, .type=IO_READ},
        {.addr=0x4830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0270) {
    const struct CPU_State initial_cpu = {.pc=0xb6e2, .a=0xdc, .x=0xfc, .y=0xe6, .sp=0xa4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb6e3, .a=0xdc, .x=0xfc, .y=0xe6, .sp=0xa4, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xb6e2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb6e2, .value=0x40, .type=IO_READ},
        {.addr=0xb6e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0271) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0x09, .x=0xb5, .y=0x81, .sp=0xc2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1274, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1275, .a=0x09, .x=0xb5, .y=0x81, .sp=0xc2, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x1274, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0x40, .type=IO_READ},
        {.addr=0x1275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0272) {
    const struct CPU_State initial_cpu = {.pc=0xe58c, .a=0x26, .x=0xc0, .y=0x62, .sp=0x1b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe58c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe58d, .a=0x26, .x=0xc0, .y=0x62, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xe58c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe58c, .value=0x40, .type=IO_READ},
        {.addr=0xe58d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3273, .a=0xec, .x=0x6b, .y=0xa8, .sp=0x61, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3273, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3274, .a=0xec, .x=0x6b, .y=0xa8, .sp=0x61, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x3273, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3273, .value=0x40, .type=IO_READ},
        {.addr=0x3274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0274) {
    const struct CPU_State initial_cpu = {.pc=0xeb6b, .a=0x2f, .x=0xbc, .y=0x11, .sp=0x6c, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xeb6b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeb6c, .a=0x2f, .x=0xbc, .y=0x11, .sp=0x6c, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xeb6b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeb6b, .value=0x40, .type=IO_READ},
        {.addr=0xeb6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0275) {
    const struct CPU_State initial_cpu = {.pc=0xbfbe, .a=0x63, .x=0x7f, .y=0x65, .sp=0x3f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbfbf, .a=0x63, .x=0x7f, .y=0x65, .sp=0x3f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xbfbe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbfbe, .value=0x40, .type=IO_READ},
        {.addr=0xbfbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0276) {
    const struct CPU_State initial_cpu = {.pc=0xd60a, .a=0xc1, .x=0xa4, .y=0x9a, .sp=0xd1, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd60a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd60b, .a=0xc1, .x=0xa4, .y=0x9a, .sp=0xd1, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd60a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd60a, .value=0x40, .type=IO_READ},
        {.addr=0xd60b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0277) {
    const struct CPU_State initial_cpu = {.pc=0xdd85, .a=0x1e, .x=0x0e, .y=0x29, .sp=0xb6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdd85, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdd86, .a=0x1e, .x=0x0e, .y=0x29, .sp=0xb6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdd85, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdd85, .value=0x40, .type=IO_READ},
        {.addr=0xdd86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0278) {
    const struct CPU_State initial_cpu = {.pc=0x8a8c, .a=0x26, .x=0xed, .y=0x8b, .sp=0x85, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x8a8c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8a8d, .a=0x26, .x=0xed, .y=0x8b, .sp=0x85, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8a8c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8a8c, .value=0x40, .type=IO_READ},
        {.addr=0x8a8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0279) {
    const struct CPU_State initial_cpu = {.pc=0x43f1, .a=0x8a, .x=0x1c, .y=0x3a, .sp=0xa6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x43f1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x43f2, .a=0x8a, .x=0x1c, .y=0x3a, .sp=0xa6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x43f1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x43f1, .value=0x40, .type=IO_READ},
        {.addr=0x43f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027A) {
    const struct CPU_State initial_cpu = {.pc=0xe353, .a=0x7e, .x=0xfe, .y=0xc7, .sp=0x2a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe353, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe354, .a=0x7e, .x=0xfe, .y=0xc7, .sp=0x2a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe353, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe353, .value=0x40, .type=IO_READ},
        {.addr=0xe354, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027B) {
    const struct CPU_State initial_cpu = {.pc=0x5b4a, .a=0xdf, .x=0x04, .y=0xfe, .sp=0x0d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x5b4a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5b4b, .a=0xdf, .x=0x04, .y=0xfe, .sp=0x0d, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x5b4a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5b4a, .value=0x40, .type=IO_READ},
        {.addr=0x5b4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027C) {
    const struct CPU_State initial_cpu = {.pc=0xba6b, .a=0x1c, .x=0xc1, .y=0x01, .sp=0x6b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xba6b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xba6c, .a=0x1c, .x=0xc1, .y=0x01, .sp=0x6b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xba6b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xba6b, .value=0x40, .type=IO_READ},
        {.addr=0xba6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027D) {
    const struct CPU_State initial_cpu = {.pc=0x0313, .a=0x07, .x=0x2e, .y=0xe2, .sp=0x45, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0313, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0314, .a=0x07, .x=0x2e, .y=0xe2, .sp=0x45, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0313, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0313, .value=0x40, .type=IO_READ},
        {.addr=0x0314, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027E) {
    const struct CPU_State initial_cpu = {.pc=0xdc04, .a=0x3b, .x=0xf8, .y=0x08, .sp=0xc9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdc04, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdc05, .a=0x3b, .x=0xf8, .y=0x08, .sp=0xc9, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xdc04, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdc04, .value=0x40, .type=IO_READ},
        {.addr=0xdc05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_027F) {
    const struct CPU_State initial_cpu = {.pc=0xef50, .a=0x91, .x=0x6d, .y=0x2d, .sp=0xae, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xef50, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef51, .a=0x91, .x=0x6d, .y=0x2d, .sp=0xae, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xef50, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef50, .value=0x40, .type=IO_READ},
        {.addr=0xef51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0280) {
    const struct CPU_State initial_cpu = {.pc=0x7297, .a=0xd0, .x=0x4a, .y=0x17, .sp=0xbe, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x7297, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7298, .a=0xd0, .x=0x4a, .y=0x17, .sp=0xbe, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7297, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7297, .value=0x40, .type=IO_READ},
        {.addr=0x7298, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0281) {
    const struct CPU_State initial_cpu = {.pc=0xcc82, .a=0x22, .x=0x5e, .y=0x7c, .sp=0x0d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xcc82, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcc83, .a=0x22, .x=0x5e, .y=0x7c, .sp=0x0d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xcc82, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcc82, .value=0x40, .type=IO_READ},
        {.addr=0xcc83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0282) {
    const struct CPU_State initial_cpu = {.pc=0x194a, .a=0x6d, .x=0x99, .y=0x0b, .sp=0xc6, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x194a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x194b, .a=0x6d, .x=0x99, .y=0x0b, .sp=0xc6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x194a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x194a, .value=0x40, .type=IO_READ},
        {.addr=0x194b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0283) {
    const struct CPU_State initial_cpu = {.pc=0xef2a, .a=0x31, .x=0xd4, .y=0x27, .sp=0xd5, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xef2a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef2b, .a=0x31, .x=0xd4, .y=0x27, .sp=0xd5, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xef2a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef2a, .value=0x40, .type=IO_READ},
        {.addr=0xef2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0284) {
    const struct CPU_State initial_cpu = {.pc=0x223a, .a=0xbf, .x=0x00, .y=0x95, .sp=0x15, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x223a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x223b, .a=0xbf, .x=0x00, .y=0x95, .sp=0x15, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x223a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x223a, .value=0x40, .type=IO_READ},
        {.addr=0x223b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb2fd, .a=0x5f, .x=0x25, .y=0x0f, .sp=0x85, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb2fd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb2fe, .a=0x5f, .x=0x25, .y=0x0f, .sp=0x85, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xb2fd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb2fd, .value=0x40, .type=IO_READ},
        {.addr=0xb2fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0286) {
    const struct CPU_State initial_cpu = {.pc=0xde32, .a=0x0f, .x=0x09, .y=0xb6, .sp=0x3a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xde32, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xde33, .a=0x0f, .x=0x09, .y=0xb6, .sp=0x3a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xde32, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xde32, .value=0x40, .type=IO_READ},
        {.addr=0xde33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9283, .a=0x43, .x=0x3c, .y=0xc2, .sp=0x20, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9283, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9284, .a=0x43, .x=0x3c, .y=0xc2, .sp=0x20, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x9283, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9283, .value=0x40, .type=IO_READ},
        {.addr=0x9284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0288) {
    const struct CPU_State initial_cpu = {.pc=0x9a07, .a=0xe0, .x=0xdc, .y=0xf0, .sp=0xf4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9a07, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9a08, .a=0xe0, .x=0xdc, .y=0xf0, .sp=0xf4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9a07, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9a07, .value=0x40, .type=IO_READ},
        {.addr=0x9a08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0289) {
    const struct CPU_State initial_cpu = {.pc=0x0361, .a=0xcf, .x=0x7c, .y=0xeb, .sp=0x34, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0361, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0362, .a=0xcf, .x=0x7c, .y=0xeb, .sp=0x34, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0361, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0361, .value=0x40, .type=IO_READ},
        {.addr=0x0362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028A) {
    const struct CPU_State initial_cpu = {.pc=0x4b14, .a=0x61, .x=0xa2, .y=0x73, .sp=0xf6, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x4b14, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4b15, .a=0x61, .x=0xa2, .y=0x73, .sp=0xf6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4b14, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4b14, .value=0x40, .type=IO_READ},
        {.addr=0x4b15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028B) {
    const struct CPU_State initial_cpu = {.pc=0xae6e, .a=0x0c, .x=0x64, .y=0x63, .sp=0xc5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xae6e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xae6f, .a=0x0c, .x=0x64, .y=0x63, .sp=0xc5, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xae6e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xae6e, .value=0x40, .type=IO_READ},
        {.addr=0xae6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028C) {
    const struct CPU_State initial_cpu = {.pc=0xc2b6, .a=0xfc, .x=0x66, .y=0x2c, .sp=0x96, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc2b7, .a=0xfc, .x=0x66, .y=0x2c, .sp=0x96, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc2b6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc2b6, .value=0x40, .type=IO_READ},
        {.addr=0xc2b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028D) {
    const struct CPU_State initial_cpu = {.pc=0x4013, .a=0xae, .x=0x3c, .y=0x3e, .sp=0xc9, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4013, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4014, .a=0xae, .x=0x3c, .y=0x3e, .sp=0xc9, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x4013, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4013, .value=0x40, .type=IO_READ},
        {.addr=0x4014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028E) {
    const struct CPU_State initial_cpu = {.pc=0x195e, .a=0x60, .x=0x8e, .y=0x18, .sp=0xa3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x195e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x195f, .a=0x60, .x=0x8e, .y=0x18, .sp=0xa3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x195e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x195e, .value=0x40, .type=IO_READ},
        {.addr=0x195f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4262, .a=0x95, .x=0xb4, .y=0x2b, .sp=0x8d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4262, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4263, .a=0x95, .x=0xb4, .y=0x2b, .sp=0x8d, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x4262, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4262, .value=0x40, .type=IO_READ},
        {.addr=0x4263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0290) {
    const struct CPU_State initial_cpu = {.pc=0xbf6f, .a=0xb0, .x=0x5c, .y=0x04, .sp=0x34, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbf70, .a=0xb0, .x=0x5c, .y=0x04, .sp=0x34, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xbf6f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbf6f, .value=0x40, .type=IO_READ},
        {.addr=0xbf70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0291) {
    const struct CPU_State initial_cpu = {.pc=0xb136, .a=0xaf, .x=0xad, .y=0x5e, .sp=0xae, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb136, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb137, .a=0xaf, .x=0xad, .y=0x5e, .sp=0xae, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb136, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb136, .value=0x40, .type=IO_READ},
        {.addr=0xb137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0292) {
    const struct CPU_State initial_cpu = {.pc=0x821c, .a=0x7e, .x=0x71, .y=0xce, .sp=0x1e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x821c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0x7e, .x=0x71, .y=0xce, .sp=0x1e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x821c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x821c, .value=0x40, .type=IO_READ},
        {.addr=0x821d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0293) {
    const struct CPU_State initial_cpu = {.pc=0x5fdd, .a=0xc0, .x=0x95, .y=0x14, .sp=0x28, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5fdd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5fde, .a=0xc0, .x=0x95, .y=0x14, .sp=0x28, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x5fdd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5fdd, .value=0x40, .type=IO_READ},
        {.addr=0x5fde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0294) {
    const struct CPU_State initial_cpu = {.pc=0x0945, .a=0x7d, .x=0x49, .y=0x00, .sp=0x42, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0945, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0946, .a=0x7d, .x=0x49, .y=0x00, .sp=0x42, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0945, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0945, .value=0x40, .type=IO_READ},
        {.addr=0x0946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0295) {
    const struct CPU_State initial_cpu = {.pc=0x55fb, .a=0xe4, .x=0x56, .y=0x4f, .sp=0xc9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x55fb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x55fc, .a=0xe4, .x=0x56, .y=0x4f, .sp=0xc9, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x55fb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x55fb, .value=0x40, .type=IO_READ},
        {.addr=0x55fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0296) {
    const struct CPU_State initial_cpu = {.pc=0x4d21, .a=0xae, .x=0x58, .y=0x25, .sp=0x02, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x4d21, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4d22, .a=0xae, .x=0x58, .y=0x25, .sp=0x02, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4d21, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4d21, .value=0x40, .type=IO_READ},
        {.addr=0x4d22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0297) {
    const struct CPU_State initial_cpu = {.pc=0xbf92, .a=0xf2, .x=0x9b, .y=0x07, .sp=0x6a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xbf92, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbf93, .a=0xf2, .x=0x9b, .y=0x07, .sp=0x6a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbf92, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbf92, .value=0x40, .type=IO_READ},
        {.addr=0xbf93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0298) {
    const struct CPU_State initial_cpu = {.pc=0x9d6a, .a=0x1a, .x=0xf9, .y=0xc9, .sp=0x57, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9d6b, .a=0x1a, .x=0xf9, .y=0xc9, .sp=0x57, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9d6a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9d6a, .value=0x40, .type=IO_READ},
        {.addr=0x9d6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0299) {
    const struct CPU_State initial_cpu = {.pc=0x2e84, .a=0x15, .x=0xaf, .y=0xa7, .sp=0x5a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e84, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2e85, .a=0x15, .x=0xaf, .y=0xa7, .sp=0x5a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2e84, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2e84, .value=0x40, .type=IO_READ},
        {.addr=0x2e85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029A) {
    const struct CPU_State initial_cpu = {.pc=0x3286, .a=0xc8, .x=0x80, .y=0x7f, .sp=0x55, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3286, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3287, .a=0xc8, .x=0x80, .y=0x7f, .sp=0x55, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3286, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3286, .value=0x40, .type=IO_READ},
        {.addr=0x3287, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029B) {
    const struct CPU_State initial_cpu = {.pc=0x3f33, .a=0x27, .x=0xec, .y=0x56, .sp=0x06, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x3f33, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3f34, .a=0x27, .x=0xec, .y=0x56, .sp=0x06, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3f33, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3f33, .value=0x40, .type=IO_READ},
        {.addr=0x3f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029C) {
    const struct CPU_State initial_cpu = {.pc=0x20b1, .a=0xd8, .x=0x54, .y=0x96, .sp=0xa9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x20b1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x20b2, .a=0xd8, .x=0x54, .y=0x96, .sp=0xa9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x20b1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x20b1, .value=0x40, .type=IO_READ},
        {.addr=0x20b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029D) {
    const struct CPU_State initial_cpu = {.pc=0xc447, .a=0x50, .x=0x3c, .y=0xee, .sp=0x0a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc447, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc448, .a=0x50, .x=0x3c, .y=0xee, .sp=0x0a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc447, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc447, .value=0x40, .type=IO_READ},
        {.addr=0xc448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029E) {
    const struct CPU_State initial_cpu = {.pc=0x8528, .a=0xba, .x=0x4d, .y=0x16, .sp=0x4d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8528, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8529, .a=0xba, .x=0x4d, .y=0x16, .sp=0x4d, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x8528, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8528, .value=0x40, .type=IO_READ},
        {.addr=0x8529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_029F) {
    const struct CPU_State initial_cpu = {.pc=0x417f, .a=0x11, .x=0x32, .y=0x9a, .sp=0x6c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x417f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4180, .a=0x11, .x=0x32, .y=0x9a, .sp=0x6c, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x417f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x417f, .value=0x40, .type=IO_READ},
        {.addr=0x4180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x1f5d, .a=0x91, .x=0x2b, .y=0x0d, .sp=0x2f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f5d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1f5e, .a=0x91, .x=0x2b, .y=0x0d, .sp=0x2f, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x1f5d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1f5d, .value=0x40, .type=IO_READ},
        {.addr=0x1f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x8e3a, .a=0xff, .x=0x5e, .y=0x0b, .sp=0x6f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8e3a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8e3b, .a=0xff, .x=0x5e, .y=0x0b, .sp=0x6f, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x8e3a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8e3a, .value=0x40, .type=IO_READ},
        {.addr=0x8e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x851c, .a=0x58, .x=0xbc, .y=0x41, .sp=0x9a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x851c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x851d, .a=0x58, .x=0xbc, .y=0x41, .sp=0x9a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x851c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x851c, .value=0x40, .type=IO_READ},
        {.addr=0x851d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x4746, .a=0xf4, .x=0x94, .y=0xc5, .sp=0x2e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x4746, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4747, .a=0xf4, .x=0x94, .y=0xc5, .sp=0x2e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x4746, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4746, .value=0x40, .type=IO_READ},
        {.addr=0x4747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x64c0, .a=0xe9, .x=0xbe, .y=0x84, .sp=0xb6, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x64c0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x64c1, .a=0xe9, .x=0xbe, .y=0x84, .sp=0xb6, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x64c0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x64c0, .value=0x40, .type=IO_READ},
        {.addr=0x64c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x0f1c, .a=0xa9, .x=0xdc, .y=0xb8, .sp=0x93, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0f1c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f1d, .a=0xa9, .x=0xdc, .y=0xb8, .sp=0x93, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0f1c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f1c, .value=0x40, .type=IO_READ},
        {.addr=0x0f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x9de9, .a=0x1a, .x=0x19, .y=0x46, .sp=0x32, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9de9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9dea, .a=0x1a, .x=0x19, .y=0x46, .sp=0x32, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9de9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9de9, .value=0x40, .type=IO_READ},
        {.addr=0x9dea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x6622, .a=0x4d, .x=0x47, .y=0x65, .sp=0x55, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6622, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6623, .a=0x4d, .x=0x47, .y=0x65, .sp=0x55, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6622, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6622, .value=0x40, .type=IO_READ},
        {.addr=0x6623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xb350, .a=0x76, .x=0x08, .y=0x84, .sp=0x8f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb350, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb351, .a=0x76, .x=0x08, .y=0x84, .sp=0x8f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xb350, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb350, .value=0x40, .type=IO_READ},
        {.addr=0xb351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x3172, .a=0x76, .x=0xdb, .y=0x07, .sp=0x38, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x3172, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3173, .a=0x76, .x=0xdb, .y=0x07, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3172, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3172, .value=0x40, .type=IO_READ},
        {.addr=0x3173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x8367, .a=0x43, .x=0xf8, .y=0xe0, .sp=0x8b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8367, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8368, .a=0x43, .x=0xf8, .y=0xe0, .sp=0x8b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8367, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8367, .value=0x40, .type=IO_READ},
        {.addr=0x8368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xdc7b, .a=0x66, .x=0x1a, .y=0x52, .sp=0x39, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc7b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdc7c, .a=0x66, .x=0x1a, .y=0x52, .sp=0x39, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdc7b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdc7b, .value=0x40, .type=IO_READ},
        {.addr=0xdc7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1ec4, .a=0xaa, .x=0x78, .y=0x93, .sp=0x9b, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1ec5, .a=0xaa, .x=0x78, .y=0x93, .sp=0x9b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1ec4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1ec4, .value=0x40, .type=IO_READ},
        {.addr=0x1ec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xec48, .a=0xb0, .x=0xc2, .y=0x21, .sp=0xa7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xec48, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xec49, .a=0xb0, .x=0xc2, .y=0x21, .sp=0xa7, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xec48, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xec48, .value=0x40, .type=IO_READ},
        {.addr=0xec49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xe63d, .a=0x24, .x=0xec, .y=0xfc, .sp=0x87, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe63d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe63e, .a=0x24, .x=0xec, .y=0xfc, .sp=0x87, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe63d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe63d, .value=0x40, .type=IO_READ},
        {.addr=0xe63e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x6808, .a=0x2c, .x=0x5a, .y=0xf5, .sp=0x84, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6808, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6809, .a=0x2c, .x=0x5a, .y=0xf5, .sp=0x84, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6808, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6808, .value=0x40, .type=IO_READ},
        {.addr=0x6809, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6c31, .a=0x23, .x=0x01, .y=0x33, .sp=0xb7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x6c31, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6c32, .a=0x23, .x=0x01, .y=0x33, .sp=0xb7, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x6c31, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6c31, .value=0x40, .type=IO_READ},
        {.addr=0x6c32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xb75f, .a=0xec, .x=0xcf, .y=0x47, .sp=0x3c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xb75f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb760, .a=0xec, .x=0xcf, .y=0x47, .sp=0x3c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb75f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb75f, .value=0x40, .type=IO_READ},
        {.addr=0xb760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xeda5, .a=0x7e, .x=0xd2, .y=0x5e, .sp=0x4a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xeda5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeda6, .a=0x7e, .x=0xd2, .y=0x5e, .sp=0x4a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xeda5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeda5, .value=0x40, .type=IO_READ},
        {.addr=0xeda6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x97a9, .a=0x52, .x=0xcc, .y=0xa7, .sp=0xb5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x97a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x97aa, .a=0x52, .x=0xcc, .y=0xa7, .sp=0xb5, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x97a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x97a9, .value=0x40, .type=IO_READ},
        {.addr=0x97aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xe5bf, .a=0x6c, .x=0xc3, .y=0xd0, .sp=0x71, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe5bf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe5c0, .a=0x6c, .x=0xc3, .y=0xd0, .sp=0x71, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xe5bf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe5bf, .value=0x40, .type=IO_READ},
        {.addr=0xe5c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x2765, .a=0xea, .x=0x50, .y=0x75, .sp=0x00, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2765, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2766, .a=0xea, .x=0x50, .y=0x75, .sp=0x00, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2765, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2765, .value=0x40, .type=IO_READ},
        {.addr=0x2766, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9c8f, .a=0x9e, .x=0x64, .y=0xa8, .sp=0xc3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9c90, .a=0x9e, .x=0x64, .y=0xa8, .sp=0xc3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9c8f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9c8f, .value=0x40, .type=IO_READ},
        {.addr=0x9c90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x361e, .a=0xc9, .x=0x65, .y=0x7e, .sp=0xdc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x361e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x361f, .a=0xc9, .x=0x65, .y=0x7e, .sp=0xdc, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x361e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x361e, .value=0x40, .type=IO_READ},
        {.addr=0x361f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xf37a, .a=0xc8, .x=0x54, .y=0x55, .sp=0x16, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf37a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf37b, .a=0xc8, .x=0x54, .y=0x55, .sp=0x16, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf37a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf37a, .value=0x40, .type=IO_READ},
        {.addr=0xf37b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x71cb, .a=0x4c, .x=0xa6, .y=0xea, .sp=0x4a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x71cb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x71cc, .a=0x4c, .x=0xa6, .y=0xea, .sp=0x4a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x71cb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x71cb, .value=0x40, .type=IO_READ},
        {.addr=0x71cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xfb4c, .a=0xb9, .x=0x00, .y=0x80, .sp=0x0b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xfb4c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfb4d, .a=0xb9, .x=0x00, .y=0x80, .sp=0x0b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xfb4c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfb4c, .value=0x40, .type=IO_READ},
        {.addr=0xfb4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x309d, .a=0xf5, .x=0x13, .y=0xad, .sp=0xa5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x309d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x309e, .a=0xf5, .x=0x13, .y=0xad, .sp=0xa5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x309d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x309d, .value=0x40, .type=IO_READ},
        {.addr=0x309e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x48da, .a=0x67, .x=0xe1, .y=0xe4, .sp=0xd2, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x48da, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x48db, .a=0x67, .x=0xe1, .y=0xe4, .sp=0xd2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x48da, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x48da, .value=0x40, .type=IO_READ},
        {.addr=0x48db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xa5f4, .a=0x79, .x=0x39, .y=0x40, .sp=0xf9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa5f5, .a=0x79, .x=0x39, .y=0x40, .sp=0xf9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xa5f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa5f4, .value=0x40, .type=IO_READ},
        {.addr=0xa5f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x6ee7, .a=0x34, .x=0x37, .y=0xc5, .sp=0x60, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6ee8, .a=0x34, .x=0x37, .y=0xc5, .sp=0x60, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x6ee7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6ee7, .value=0x40, .type=IO_READ},
        {.addr=0x6ee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x4466, .a=0xa3, .x=0x8e, .y=0xeb, .sp=0x1b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4466, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4467, .a=0xa3, .x=0x8e, .y=0xeb, .sp=0x1b, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x4466, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4466, .value=0x40, .type=IO_READ},
        {.addr=0x4467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xa471, .a=0x6e, .x=0x29, .y=0xb9, .sp=0x9c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa471, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa472, .a=0x6e, .x=0x29, .y=0xb9, .sp=0x9c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa471, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa471, .value=0x40, .type=IO_READ},
        {.addr=0xa472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xb955, .a=0xa3, .x=0x56, .y=0xa4, .sp=0x3c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb955, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb956, .a=0xa3, .x=0x56, .y=0xa4, .sp=0x3c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb955, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb955, .value=0x40, .type=IO_READ},
        {.addr=0xb956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x1fab, .a=0x81, .x=0x3c, .y=0xad, .sp=0x70, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1fab, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1fac, .a=0x81, .x=0x3c, .y=0xad, .sp=0x70, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x1fab, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1fab, .value=0x40, .type=IO_READ},
        {.addr=0x1fac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xe41b, .a=0x6e, .x=0x3a, .y=0x69, .sp=0xf8, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe41b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe41c, .a=0x6e, .x=0x3a, .y=0x69, .sp=0xf8, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xe41b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe41b, .value=0x40, .type=IO_READ},
        {.addr=0xe41c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xc7d7, .a=0x8a, .x=0x39, .y=0x96, .sp=0x75, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc7d8, .a=0x8a, .x=0x39, .y=0x96, .sp=0x75, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xc7d7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc7d7, .value=0x40, .type=IO_READ},
        {.addr=0xc7d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x42ef, .a=0x4c, .x=0x12, .y=0x1b, .sp=0xf4, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x42ef, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x42f0, .a=0x4c, .x=0x12, .y=0x1b, .sp=0xf4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x42ef, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x42ef, .value=0x40, .type=IO_READ},
        {.addr=0x42f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xce68, .a=0x6c, .x=0xeb, .y=0xdb, .sp=0x33, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xce68, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xce69, .a=0x6c, .x=0xeb, .y=0xdb, .sp=0x33, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xce68, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xce68, .value=0x40, .type=IO_READ},
        {.addr=0xce69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xcd37, .a=0xde, .x=0x6b, .y=0xd0, .sp=0xbc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xcd37, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcd38, .a=0xde, .x=0x6b, .y=0xd0, .sp=0xbc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcd37, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcd37, .value=0x40, .type=IO_READ},
        {.addr=0xcd38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x43c7, .a=0x3f, .x=0xd7, .y=0xba, .sp=0xb3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x43c7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x43c8, .a=0x3f, .x=0xd7, .y=0xba, .sp=0xb3, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x43c7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x43c7, .value=0x40, .type=IO_READ},
        {.addr=0x43c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xfec8, .a=0xfe, .x=0x41, .y=0xd0, .sp=0x08, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfec8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfec9, .a=0xfe, .x=0x41, .y=0xd0, .sp=0x08, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfec8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfec8, .value=0x40, .type=IO_READ},
        {.addr=0xfec9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe1a9, .a=0x30, .x=0xa9, .y=0xce, .sp=0x82, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe1aa, .a=0x30, .x=0xa9, .y=0xce, .sp=0x82, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xe1a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe1a9, .value=0x40, .type=IO_READ},
        {.addr=0xe1aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x5c06, .a=0xbe, .x=0xe5, .y=0xdf, .sp=0xed, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5c06, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c07, .a=0xbe, .x=0xe5, .y=0xdf, .sp=0xed, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x5c06, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c06, .value=0x40, .type=IO_READ},
        {.addr=0x5c07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x400e, .a=0x03, .x=0x37, .y=0x96, .sp=0x1e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x400e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x400f, .a=0x03, .x=0x37, .y=0x96, .sp=0x1e, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x400e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x400e, .value=0x40, .type=IO_READ},
        {.addr=0x400f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x9380, .a=0xc1, .x=0x25, .y=0x13, .sp=0x3f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9380, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9381, .a=0xc1, .x=0x25, .y=0x13, .sp=0x3f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9380, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9380, .value=0x40, .type=IO_READ},
        {.addr=0x9381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x8840, .a=0x9b, .x=0xda, .y=0xdf, .sp=0x7d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8840, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8841, .a=0x9b, .x=0xda, .y=0xdf, .sp=0x7d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8840, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8840, .value=0x40, .type=IO_READ},
        {.addr=0x8841, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xaff9, .a=0x41, .x=0x1b, .y=0x0d, .sp=0x22, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xaff9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaffa, .a=0x41, .x=0x1b, .y=0x0d, .sp=0x22, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xaff9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaff9, .value=0x40, .type=IO_READ},
        {.addr=0xaffa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x3608, .a=0xa6, .x=0x4d, .y=0xf1, .sp=0x9d, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3608, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3609, .a=0xa6, .x=0x4d, .y=0xf1, .sp=0x9d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3608, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3608, .value=0x40, .type=IO_READ},
        {.addr=0x3609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x0f0f, .a=0xf4, .x=0x15, .y=0x0f, .sp=0xb6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f10, .a=0xf4, .x=0x15, .y=0x0f, .sp=0xb6, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0f0f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f0f, .value=0x40, .type=IO_READ},
        {.addr=0x0f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x809a, .a=0xf5, .x=0xc6, .y=0x29, .sp=0x47, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x809a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x809b, .a=0xf5, .x=0xc6, .y=0x29, .sp=0x47, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x809a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x809a, .value=0x40, .type=IO_READ},
        {.addr=0x809b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x8e42, .a=0x03, .x=0x92, .y=0xa4, .sp=0x7e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8e42, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8e43, .a=0x03, .x=0x92, .y=0xa4, .sp=0x7e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8e42, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8e42, .value=0x40, .type=IO_READ},
        {.addr=0x8e43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xaf0e, .a=0x06, .x=0x6d, .y=0xf4, .sp=0x07, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xaf0e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf0f, .a=0x06, .x=0x6d, .y=0xf4, .sp=0x07, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xaf0e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf0e, .value=0x40, .type=IO_READ},
        {.addr=0xaf0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x2cf4, .a=0x1a, .x=0xba, .y=0x8d, .sp=0xc5, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2cf5, .a=0x1a, .x=0xba, .y=0x8d, .sp=0xc5, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2cf4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2cf4, .value=0x40, .type=IO_READ},
        {.addr=0x2cf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xac18, .a=0x28, .x=0x48, .y=0xa3, .sp=0x78, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xac18, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xac19, .a=0x28, .x=0x48, .y=0xa3, .sp=0x78, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xac18, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xac18, .value=0x40, .type=IO_READ},
        {.addr=0xac19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x06c4, .a=0xd9, .x=0x89, .y=0x7a, .sp=0x01, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x06c4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06c5, .a=0xd9, .x=0x89, .y=0x7a, .sp=0x01, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x06c4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06c4, .value=0x40, .type=IO_READ},
        {.addr=0x06c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5bdb, .a=0x7d, .x=0xdd, .y=0xf7, .sp=0x6c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x5bdb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5bdc, .a=0x7d, .x=0xdd, .y=0xf7, .sp=0x6c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5bdb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5bdb, .value=0x40, .type=IO_READ},
        {.addr=0x5bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x8869, .a=0xd6, .x=0x0a, .y=0xbb, .sp=0xba, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8869, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x886a, .a=0xd6, .x=0x0a, .y=0xbb, .sp=0xba, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8869, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8869, .value=0x40, .type=IO_READ},
        {.addr=0x886a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7588, .a=0xe8, .x=0xf8, .y=0xa5, .sp=0x86, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7588, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7589, .a=0xe8, .x=0xf8, .y=0xa5, .sp=0x86, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7588, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7588, .value=0x40, .type=IO_READ},
        {.addr=0x7589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x0f7b, .a=0xf7, .x=0x66, .y=0xb4, .sp=0xac, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0f7b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0f7c, .a=0xf7, .x=0x66, .y=0xb4, .sp=0xac, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0f7b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0f7b, .value=0x40, .type=IO_READ},
        {.addr=0x0f7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x099c, .a=0x25, .x=0x07, .y=0x62, .sp=0xf3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x099c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x099d, .a=0x25, .x=0x07, .y=0x62, .sp=0xf3, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x099c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x099c, .value=0x40, .type=IO_READ},
        {.addr=0x099d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x99b8, .a=0x81, .x=0x96, .y=0x4e, .sp=0x02, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x99b8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x99b9, .a=0x81, .x=0x96, .y=0x4e, .sp=0x02, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x99b8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x99b8, .value=0x40, .type=IO_READ},
        {.addr=0x99b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x68fa, .a=0xc0, .x=0x10, .y=0x05, .sp=0x96, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x68fa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x68fb, .a=0xc0, .x=0x10, .y=0x05, .sp=0x96, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x68fa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x68fa, .value=0x40, .type=IO_READ},
        {.addr=0x68fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xcbe0, .a=0xf2, .x=0x04, .y=0x6e, .sp=0xfe, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcbe1, .a=0xf2, .x=0x04, .y=0x6e, .sp=0xfe, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcbe0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcbe0, .value=0x40, .type=IO_READ},
        {.addr=0xcbe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xef22, .a=0x9e, .x=0x47, .y=0xa8, .sp=0xab, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xef22, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xef23, .a=0x9e, .x=0x47, .y=0xa8, .sp=0xab, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xef22, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xef22, .value=0x40, .type=IO_READ},
        {.addr=0xef23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x610c, .a=0x4d, .x=0x06, .y=0x6a, .sp=0x3b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x610c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x610d, .a=0x4d, .x=0x06, .y=0x6a, .sp=0x3b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x610c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x610c, .value=0x40, .type=IO_READ},
        {.addr=0x610d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x9c34, .a=0x84, .x=0xc4, .y=0x94, .sp=0x81, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9c34, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x84, .x=0xc4, .y=0x94, .sp=0x81, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9c34, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9c34, .value=0x40, .type=IO_READ},
        {.addr=0x9c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x699f, .a=0xb9, .x=0x45, .y=0x40, .sp=0xaf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x699f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x69a0, .a=0xb9, .x=0x45, .y=0x40, .sp=0xaf, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x699f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x699f, .value=0x40, .type=IO_READ},
        {.addr=0x69a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x39c2, .a=0x5a, .x=0x78, .y=0x5b, .sp=0xb9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x39c2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x39c3, .a=0x5a, .x=0x78, .y=0x5b, .sp=0xb9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x39c2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x39c2, .value=0x40, .type=IO_READ},
        {.addr=0x39c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x663f, .a=0x52, .x=0xd0, .y=0xab, .sp=0xe0, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x663f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6640, .a=0x52, .x=0xd0, .y=0xab, .sp=0xe0, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x663f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x663f, .value=0x40, .type=IO_READ},
        {.addr=0x6640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xd5b9, .a=0x1c, .x=0x14, .y=0x25, .sp=0x43, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd5ba, .a=0x1c, .x=0x14, .y=0x25, .sp=0x43, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd5b9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd5b9, .value=0x40, .type=IO_READ},
        {.addr=0xd5ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xd4d8, .a=0x54, .x=0x19, .y=0x97, .sp=0xb1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd4d9, .a=0x54, .x=0x19, .y=0x97, .sp=0xb1, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd4d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd4d8, .value=0x40, .type=IO_READ},
        {.addr=0xd4d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x12ca, .a=0x2d, .x=0xe5, .y=0x34, .sp=0x84, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x12ca, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x12cb, .a=0x2d, .x=0xe5, .y=0x34, .sp=0x84, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x12ca, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x12ca, .value=0x40, .type=IO_READ},
        {.addr=0x12cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xc54f, .a=0x04, .x=0x06, .y=0xdb, .sp=0x0b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc54f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc550, .a=0x04, .x=0x06, .y=0xdb, .sp=0x0b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc54f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc54f, .value=0x40, .type=IO_READ},
        {.addr=0xc550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xcaf0, .a=0x3b, .x=0xce, .y=0xe7, .sp=0x7f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcaf1, .a=0x3b, .x=0xce, .y=0xe7, .sp=0x7f, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xcaf0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcaf0, .value=0x40, .type=IO_READ},
        {.addr=0xcaf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xda71, .a=0x6a, .x=0x78, .y=0x8b, .sp=0x07, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xda71, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda72, .a=0x6a, .x=0x78, .y=0x8b, .sp=0x07, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xda71, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda71, .value=0x40, .type=IO_READ},
        {.addr=0xda72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x0288, .a=0x92, .x=0x48, .y=0x52, .sp=0x6a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0288, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0289, .a=0x92, .x=0x48, .y=0x52, .sp=0x6a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0288, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0288, .value=0x40, .type=IO_READ},
        {.addr=0x0289, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x6ea7, .a=0x1c, .x=0xe2, .y=0x03, .sp=0x48, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6ea8, .a=0x1c, .x=0xe2, .y=0x03, .sp=0x48, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6ea7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6ea7, .value=0x40, .type=IO_READ},
        {.addr=0x6ea8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf813, .a=0xc8, .x=0xd4, .y=0x76, .sp=0x5a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf813, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf814, .a=0xc8, .x=0xd4, .y=0x76, .sp=0x5a, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xf813, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf813, .value=0x40, .type=IO_READ},
        {.addr=0xf814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xaf89, .a=0x98, .x=0x72, .y=0x3e, .sp=0x7c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xaf89, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xaf8a, .a=0x98, .x=0x72, .y=0x3e, .sp=0x7c, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xaf89, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xaf89, .value=0x40, .type=IO_READ},
        {.addr=0xaf8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x7ef0, .a=0x29, .x=0x63, .y=0xd0, .sp=0x92, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7ef1, .a=0x29, .x=0x63, .y=0xd0, .sp=0x92, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x7ef0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7ef0, .value=0x40, .type=IO_READ},
        {.addr=0x7ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4cf6, .a=0x22, .x=0xd9, .y=0xbe, .sp=0xca, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4cf7, .a=0x22, .x=0xd9, .y=0xbe, .sp=0xca, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4cf6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4cf6, .value=0x40, .type=IO_READ},
        {.addr=0x4cf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x5a41, .a=0x25, .x=0x0e, .y=0xf5, .sp=0x44, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5a41, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5a42, .a=0x25, .x=0x0e, .y=0xf5, .sp=0x44, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x5a41, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5a41, .value=0x40, .type=IO_READ},
        {.addr=0x5a42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x52b4, .a=0x99, .x=0xc8, .y=0xc8, .sp=0x87, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x52b4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x52b5, .a=0x99, .x=0xc8, .y=0xc8, .sp=0x87, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x52b4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x52b4, .value=0x40, .type=IO_READ},
        {.addr=0x52b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xfd24, .a=0x93, .x=0xe0, .y=0x56, .sp=0x3f, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd24, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd25, .a=0x93, .x=0xe0, .y=0x56, .sp=0x3f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfd24, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd24, .value=0x40, .type=IO_READ},
        {.addr=0xfd25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xcd0a, .a=0x58, .x=0x49, .y=0x02, .sp=0xf8, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xcd0a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcd0b, .a=0x58, .x=0x49, .y=0x02, .sp=0xf8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcd0a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcd0a, .value=0x40, .type=IO_READ},
        {.addr=0xcd0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc7d6, .a=0x10, .x=0x63, .y=0xfb, .sp=0x0b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0x10, .x=0x63, .y=0xfb, .sp=0x0b, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xc7d6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc7d6, .value=0x40, .type=IO_READ},
        {.addr=0xc7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x24d2, .a=0xdf, .x=0x91, .y=0x30, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x24d2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x24d3, .a=0xdf, .x=0x91, .y=0x30, .sp=0x3f, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x24d2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x24d2, .value=0x40, .type=IO_READ},
        {.addr=0x24d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xee39, .a=0xa4, .x=0x46, .y=0x64, .sp=0x8c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xee39, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee3a, .a=0xa4, .x=0x46, .y=0x64, .sp=0x8c, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xee39, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee39, .value=0x40, .type=IO_READ},
        {.addr=0xee3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x46ac, .a=0xfa, .x=0xab, .y=0x9d, .sp=0x89, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x46ac, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x46ad, .a=0xfa, .x=0xab, .y=0x9d, .sp=0x89, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x46ac, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x46ac, .value=0x40, .type=IO_READ},
        {.addr=0x46ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xf6a9, .a=0x1f, .x=0xc9, .y=0x18, .sp=0x76, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf6aa, .a=0x1f, .x=0xc9, .y=0x18, .sp=0x76, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf6a9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf6a9, .value=0x40, .type=IO_READ},
        {.addr=0xf6aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x2b2e, .a=0xba, .x=0x89, .y=0x19, .sp=0x4a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2b2e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2b2f, .a=0xba, .x=0x89, .y=0x19, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2b2e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2b2e, .value=0x40, .type=IO_READ},
        {.addr=0x2b2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x1d94, .a=0xac, .x=0xe7, .y=0xf3, .sp=0x9c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1d94, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1d95, .a=0xac, .x=0xe7, .y=0xf3, .sp=0x9c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1d94, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1d94, .value=0x40, .type=IO_READ},
        {.addr=0x1d95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x260a, .a=0x1c, .x=0xb8, .y=0xd9, .sp=0x59, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x260a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x260b, .a=0x1c, .x=0xb8, .y=0xd9, .sp=0x59, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x260a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x260a, .value=0x40, .type=IO_READ},
        {.addr=0x260b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xda56, .a=0xfb, .x=0xa7, .y=0xae, .sp=0x87, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xda56, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda57, .a=0xfb, .x=0xa7, .y=0xae, .sp=0x87, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xda56, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda56, .value=0x40, .type=IO_READ},
        {.addr=0xda57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x38a7, .a=0x37, .x=0x00, .y=0x6a, .sp=0x08, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x38a7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x38a8, .a=0x37, .x=0x00, .y=0x6a, .sp=0x08, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x38a7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x38a7, .value=0x40, .type=IO_READ},
        {.addr=0x38a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0300) {
    const struct CPU_State initial_cpu = {.pc=0xdbf5, .a=0x63, .x=0x30, .y=0x74, .sp=0x4b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdbf6, .a=0x63, .x=0x30, .y=0x74, .sp=0x4b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xdbf5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdbf5, .value=0x40, .type=IO_READ},
        {.addr=0xdbf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0301) {
    const struct CPU_State initial_cpu = {.pc=0xc86d, .a=0x46, .x=0xe6, .y=0x72, .sp=0xf7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xc86d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc86e, .a=0x46, .x=0xe6, .y=0x72, .sp=0xf7, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xc86d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc86d, .value=0x40, .type=IO_READ},
        {.addr=0xc86e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0302) {
    const struct CPU_State initial_cpu = {.pc=0x47f7, .a=0x6f, .x=0x43, .y=0xa9, .sp=0xc7, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x47f7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x47f8, .a=0x6f, .x=0x43, .y=0xa9, .sp=0xc7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x47f7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x47f7, .value=0x40, .type=IO_READ},
        {.addr=0x47f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0303) {
    const struct CPU_State initial_cpu = {.pc=0xce1e, .a=0x5e, .x=0x23, .y=0xac, .sp=0x0a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xce1e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xce1f, .a=0x5e, .x=0x23, .y=0xac, .sp=0x0a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xce1e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xce1e, .value=0x40, .type=IO_READ},
        {.addr=0xce1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0304) {
    const struct CPU_State initial_cpu = {.pc=0xb8fe, .a=0xe1, .x=0x3d, .y=0xdc, .sp=0xd0, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xb8fe, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb8ff, .a=0xe1, .x=0x3d, .y=0xdc, .sp=0xd0, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xb8fe, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb8fe, .value=0x40, .type=IO_READ},
        {.addr=0xb8ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0305) {
    const struct CPU_State initial_cpu = {.pc=0x4c5a, .a=0x02, .x=0x8a, .y=0xcc, .sp=0xf2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c5a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4c5b, .a=0x02, .x=0x8a, .y=0xcc, .sp=0xf2, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4c5a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4c5a, .value=0x40, .type=IO_READ},
        {.addr=0x4c5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdd59, .a=0xf6, .x=0x1e, .y=0x0a, .sp=0x80, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xdd59, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdd5a, .a=0xf6, .x=0x1e, .y=0x0a, .sp=0x80, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xdd59, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdd59, .value=0x40, .type=IO_READ},
        {.addr=0xdd5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0307) {
    const struct CPU_State initial_cpu = {.pc=0xc985, .a=0x69, .x=0xea, .y=0x9c, .sp=0x28, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xc985, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc986, .a=0x69, .x=0xea, .y=0x9c, .sp=0x28, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xc985, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc985, .value=0x40, .type=IO_READ},
        {.addr=0xc986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0308) {
    const struct CPU_State initial_cpu = {.pc=0x774f, .a=0x5a, .x=0x5f, .y=0xac, .sp=0x87, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x774f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7750, .a=0x5a, .x=0x5f, .y=0xac, .sp=0x87, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x774f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x774f, .value=0x40, .type=IO_READ},
        {.addr=0x7750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe530, .a=0x7e, .x=0xa5, .y=0x4d, .sp=0xad, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe530, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe531, .a=0x7e, .x=0xa5, .y=0x4d, .sp=0xad, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xe530, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe530, .value=0x40, .type=IO_READ},
        {.addr=0xe531, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030A) {
    const struct CPU_State initial_cpu = {.pc=0x57bb, .a=0x48, .x=0x71, .y=0xac, .sp=0x82, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x57bb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x57bc, .a=0x48, .x=0x71, .y=0xac, .sp=0x82, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x57bb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x57bb, .value=0x40, .type=IO_READ},
        {.addr=0x57bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030B) {
    const struct CPU_State initial_cpu = {.pc=0x9021, .a=0xf3, .x=0x02, .y=0x46, .sp=0x3f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9021, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9022, .a=0xf3, .x=0x02, .y=0x46, .sp=0x3f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x9021, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9021, .value=0x40, .type=IO_READ},
        {.addr=0x9022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030C) {
    const struct CPU_State initial_cpu = {.pc=0xc125, .a=0xf5, .x=0x1c, .y=0xf4, .sp=0x4c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc125, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc126, .a=0xf5, .x=0x1c, .y=0xf4, .sp=0x4c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xc125, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc125, .value=0x40, .type=IO_READ},
        {.addr=0xc126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030D) {
    const struct CPU_State initial_cpu = {.pc=0xec67, .a=0x52, .x=0xe6, .y=0x02, .sp=0x7d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xec67, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xec68, .a=0x52, .x=0xe6, .y=0x02, .sp=0x7d, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xec67, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xec67, .value=0x40, .type=IO_READ},
        {.addr=0xec68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030E) {
    const struct CPU_State initial_cpu = {.pc=0x2d61, .a=0xa4, .x=0x69, .y=0xd3, .sp=0x71, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d61, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2d62, .a=0xa4, .x=0x69, .y=0xd3, .sp=0x71, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2d61, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2d61, .value=0x40, .type=IO_READ},
        {.addr=0x2d62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_030F) {
    const struct CPU_State initial_cpu = {.pc=0x32aa, .a=0x4e, .x=0xe9, .y=0x17, .sp=0x1c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x32aa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x32ab, .a=0x4e, .x=0xe9, .y=0x17, .sp=0x1c, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x32aa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x32aa, .value=0x40, .type=IO_READ},
        {.addr=0x32ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0310) {
    const struct CPU_State initial_cpu = {.pc=0x587f, .a=0x7d, .x=0x25, .y=0x7a, .sp=0xe2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x587f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5880, .a=0x7d, .x=0x25, .y=0x7a, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x587f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x587f, .value=0x40, .type=IO_READ},
        {.addr=0x5880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4346, .a=0xb1, .x=0x67, .y=0xd3, .sp=0x0d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4346, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4347, .a=0xb1, .x=0x67, .y=0xd3, .sp=0x0d, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4346, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4346, .value=0x40, .type=IO_READ},
        {.addr=0x4347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0312) {
    const struct CPU_State initial_cpu = {.pc=0xfca2, .a=0xfe, .x=0x47, .y=0xfa, .sp=0xa6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xfca2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfca3, .a=0xfe, .x=0x47, .y=0xfa, .sp=0xa6, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xfca2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfca2, .value=0x40, .type=IO_READ},
        {.addr=0xfca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0313) {
    const struct CPU_State initial_cpu = {.pc=0x46a1, .a=0x90, .x=0x9f, .y=0xbe, .sp=0x28, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x46a1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x46a2, .a=0x90, .x=0x9f, .y=0xbe, .sp=0x28, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x46a1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x46a1, .value=0x40, .type=IO_READ},
        {.addr=0x46a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0314) {
    const struct CPU_State initial_cpu = {.pc=0x2bca, .a=0x11, .x=0xf3, .y=0xf0, .sp=0xd1, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x2bca, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2bcb, .a=0x11, .x=0xf3, .y=0xf0, .sp=0xd1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x2bca, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2bca, .value=0x40, .type=IO_READ},
        {.addr=0x2bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0315) {
    const struct CPU_State initial_cpu = {.pc=0x15ab, .a=0x81, .x=0x74, .y=0x2d, .sp=0xfc, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x15ab, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x15ac, .a=0x81, .x=0x74, .y=0x2d, .sp=0xfc, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x15ab, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x15ab, .value=0x40, .type=IO_READ},
        {.addr=0x15ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0316) {
    const struct CPU_State initial_cpu = {.pc=0x48d8, .a=0xb4, .x=0x13, .y=0x37, .sp=0xc8, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x48d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x48d9, .a=0xb4, .x=0x13, .y=0x37, .sp=0xc8, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x48d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x48d8, .value=0x40, .type=IO_READ},
        {.addr=0x48d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0317) {
    const struct CPU_State initial_cpu = {.pc=0x350f, .a=0xbf, .x=0x36, .y=0xa0, .sp=0x65, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x350f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3510, .a=0xbf, .x=0x36, .y=0xa0, .sp=0x65, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x350f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x350f, .value=0x40, .type=IO_READ},
        {.addr=0x3510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0318) {
    const struct CPU_State initial_cpu = {.pc=0x34d4, .a=0x33, .x=0xbb, .y=0x95, .sp=0xc2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x34d4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x34d5, .a=0x33, .x=0xbb, .y=0x95, .sp=0xc2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x34d4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x34d4, .value=0x40, .type=IO_READ},
        {.addr=0x34d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0319) {
    const struct CPU_State initial_cpu = {.pc=0xf3e9, .a=0x9d, .x=0xa0, .y=0x84, .sp=0x15, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf3ea, .a=0x9d, .x=0xa0, .y=0x84, .sp=0x15, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf3e9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf3e9, .value=0x40, .type=IO_READ},
        {.addr=0xf3ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031A) {
    const struct CPU_State initial_cpu = {.pc=0x85b9, .a=0x4c, .x=0xdb, .y=0x8d, .sp=0x26, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x85b9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x85ba, .a=0x4c, .x=0xdb, .y=0x8d, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x85b9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x85b9, .value=0x40, .type=IO_READ},
        {.addr=0x85ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf4bd, .a=0xc9, .x=0xd4, .y=0x32, .sp=0xf8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf4bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf4be, .a=0xc9, .x=0xd4, .y=0x32, .sp=0xf8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf4bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf4bd, .value=0x40, .type=IO_READ},
        {.addr=0xf4be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031C) {
    const struct CPU_State initial_cpu = {.pc=0xda55, .a=0x1b, .x=0xe1, .y=0xfd, .sp=0xbe, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xda55, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda56, .a=0x1b, .x=0xe1, .y=0xfd, .sp=0xbe, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xda55, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda55, .value=0x40, .type=IO_READ},
        {.addr=0xda56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031D) {
    const struct CPU_State initial_cpu = {.pc=0x4ad8, .a=0xb7, .x=0xc7, .y=0x75, .sp=0x54, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4ad8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4ad9, .a=0xb7, .x=0xc7, .y=0x75, .sp=0x54, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x4ad8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4ad8, .value=0x40, .type=IO_READ},
        {.addr=0x4ad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031E) {
    const struct CPU_State initial_cpu = {.pc=0xffa9, .a=0x1b, .x=0xba, .y=0x03, .sp=0x23, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xffa9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xffaa, .a=0x1b, .x=0xba, .y=0x03, .sp=0x23, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xffa9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xffa9, .value=0x40, .type=IO_READ},
        {.addr=0xffaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_031F) {
    const struct CPU_State initial_cpu = {.pc=0x644a, .a=0x38, .x=0x36, .y=0x30, .sp=0xeb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x644a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x644b, .a=0x38, .x=0x36, .y=0x30, .sp=0xeb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x644a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x644a, .value=0x40, .type=IO_READ},
        {.addr=0x644b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0320) {
    const struct CPU_State initial_cpu = {.pc=0xf31f, .a=0xbd, .x=0x1c, .y=0x99, .sp=0xc7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf31f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf320, .a=0xbd, .x=0x1c, .y=0x99, .sp=0xc7, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf31f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf31f, .value=0x40, .type=IO_READ},
        {.addr=0xf320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7153, .a=0xc0, .x=0xa0, .y=0x3c, .sp=0xce, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7153, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7154, .a=0xc0, .x=0xa0, .y=0x3c, .sp=0xce, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x7153, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7153, .value=0x40, .type=IO_READ},
        {.addr=0x7154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0322) {
    const struct CPU_State initial_cpu = {.pc=0x0df1, .a=0xf7, .x=0x6e, .y=0xe8, .sp=0xf8, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0df1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0df2, .a=0xf7, .x=0x6e, .y=0xe8, .sp=0xf8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0df1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0df1, .value=0x40, .type=IO_READ},
        {.addr=0x0df2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9b73, .a=0x87, .x=0x67, .y=0x5a, .sp=0xd4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b73, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9b74, .a=0x87, .x=0x67, .y=0x5a, .sp=0xd4, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x9b73, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9b73, .value=0x40, .type=IO_READ},
        {.addr=0x9b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0324) {
    const struct CPU_State initial_cpu = {.pc=0x6480, .a=0x41, .x=0xbd, .y=0xe2, .sp=0x9a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6480, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6481, .a=0x41, .x=0xbd, .y=0xe2, .sp=0x9a, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6480, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6480, .value=0x40, .type=IO_READ},
        {.addr=0x6481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0325) {
    const struct CPU_State initial_cpu = {.pc=0x58b8, .a=0xa1, .x=0xa9, .y=0xb7, .sp=0x2b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x58b8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x58b9, .a=0xa1, .x=0xa9, .y=0xb7, .sp=0x2b, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x58b8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x58b8, .value=0x40, .type=IO_READ},
        {.addr=0x58b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0326) {
    const struct CPU_State initial_cpu = {.pc=0xe48e, .a=0x44, .x=0x94, .y=0xd3, .sp=0x91, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xe48e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe48f, .a=0x44, .x=0x94, .y=0xd3, .sp=0x91, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xe48e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe48e, .value=0x40, .type=IO_READ},
        {.addr=0xe48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0327) {
    const struct CPU_State initial_cpu = {.pc=0xf136, .a=0x75, .x=0x3a, .y=0xbe, .sp=0xff, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf136, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf137, .a=0x75, .x=0x3a, .y=0xbe, .sp=0xff, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf136, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf136, .value=0x40, .type=IO_READ},
        {.addr=0xf137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0328) {
    const struct CPU_State initial_cpu = {.pc=0xfd82, .a=0xa2, .x=0x70, .y=0x6e, .sp=0xb8, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd82, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd83, .a=0xa2, .x=0x70, .y=0x6e, .sp=0xb8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfd82, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd82, .value=0x40, .type=IO_READ},
        {.addr=0xfd83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0329) {
    const struct CPU_State initial_cpu = {.pc=0x236f, .a=0xb3, .x=0xb9, .y=0xd4, .sp=0xf2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x236f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2370, .a=0xb3, .x=0xb9, .y=0xd4, .sp=0xf2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x236f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x236f, .value=0x40, .type=IO_READ},
        {.addr=0x2370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032A) {
    const struct CPU_State initial_cpu = {.pc=0xd6c1, .a=0xb6, .x=0xaf, .y=0x4e, .sp=0x1e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd6c1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd6c2, .a=0xb6, .x=0xaf, .y=0x4e, .sp=0x1e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd6c1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd6c1, .value=0x40, .type=IO_READ},
        {.addr=0xd6c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032B) {
    const struct CPU_State initial_cpu = {.pc=0xb8f4, .a=0xc4, .x=0x0e, .y=0x23, .sp=0x31, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb8f5, .a=0xc4, .x=0x0e, .y=0x23, .sp=0x31, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb8f4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb8f4, .value=0x40, .type=IO_READ},
        {.addr=0xb8f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032C) {
    const struct CPU_State initial_cpu = {.pc=0xea85, .a=0x78, .x=0xa3, .y=0xb9, .sp=0xc8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xea85, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xea86, .a=0x78, .x=0xa3, .y=0xb9, .sp=0xc8, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xea85, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xea85, .value=0x40, .type=IO_READ},
        {.addr=0xea86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032D) {
    const struct CPU_State initial_cpu = {.pc=0x0825, .a=0x19, .x=0x53, .y=0x06, .sp=0xe7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0825, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0826, .a=0x19, .x=0x53, .y=0x06, .sp=0xe7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0825, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0825, .value=0x40, .type=IO_READ},
        {.addr=0x0826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032E) {
    const struct CPU_State initial_cpu = {.pc=0xf4c3, .a=0xa3, .x=0x57, .y=0xaa, .sp=0x97, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf4c4, .a=0xa3, .x=0x57, .y=0xaa, .sp=0x97, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf4c3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf4c3, .value=0x40, .type=IO_READ},
        {.addr=0xf4c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2944, .a=0x15, .x=0xe4, .y=0xdd, .sp=0x39, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x2944, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2945, .a=0x15, .x=0xe4, .y=0xdd, .sp=0x39, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2944, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2944, .value=0x40, .type=IO_READ},
        {.addr=0x2945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0330) {
    const struct CPU_State initial_cpu = {.pc=0xcf33, .a=0xd5, .x=0x66, .y=0x25, .sp=0x20, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xcf33, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xcf34, .a=0xd5, .x=0x66, .y=0x25, .sp=0x20, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcf33, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xcf33, .value=0x40, .type=IO_READ},
        {.addr=0xcf34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0331) {
    const struct CPU_State initial_cpu = {.pc=0x6276, .a=0xec, .x=0x3c, .y=0xa9, .sp=0x2f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x6276, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6277, .a=0xec, .x=0x3c, .y=0xa9, .sp=0x2f, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x6276, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6276, .value=0x40, .type=IO_READ},
        {.addr=0x6277, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0332) {
    const struct CPU_State initial_cpu = {.pc=0x8c0c, .a=0xfd, .x=0x07, .y=0x84, .sp=0x7d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8c0c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8c0d, .a=0xfd, .x=0x07, .y=0x84, .sp=0x7d, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x8c0c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8c0c, .value=0x40, .type=IO_READ},
        {.addr=0x8c0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4bda, .a=0x8a, .x=0xc1, .y=0xc3, .sp=0x29, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4bda, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4bdb, .a=0x8a, .x=0xc1, .y=0xc3, .sp=0x29, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4bda, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4bda, .value=0x40, .type=IO_READ},
        {.addr=0x4bdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0334) {
    const struct CPU_State initial_cpu = {.pc=0x8827, .a=0xd5, .x=0x1c, .y=0xef, .sp=0xad, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x8827, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8828, .a=0xd5, .x=0x1c, .y=0xef, .sp=0xad, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x8827, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8827, .value=0x40, .type=IO_READ},
        {.addr=0x8828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0335) {
    const struct CPU_State initial_cpu = {.pc=0x79a6, .a=0x34, .x=0x28, .y=0x38, .sp=0x84, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x79a6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x79a7, .a=0x34, .x=0x28, .y=0x38, .sp=0x84, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x79a6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x79a6, .value=0x40, .type=IO_READ},
        {.addr=0x79a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0336) {
    const struct CPU_State initial_cpu = {.pc=0x1adc, .a=0x50, .x=0xb0, .y=0xf8, .sp=0xb7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x1adc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1add, .a=0x50, .x=0xb0, .y=0xf8, .sp=0xb7, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x1adc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1adc, .value=0x40, .type=IO_READ},
        {.addr=0x1add, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0337) {
    const struct CPU_State initial_cpu = {.pc=0x8fff, .a=0x69, .x=0x7f, .y=0xe4, .sp=0xa5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8fff, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9000, .a=0x69, .x=0x7f, .y=0xe4, .sp=0xa5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8fff, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8fff, .value=0x40, .type=IO_READ},
        {.addr=0x9000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0338) {
    const struct CPU_State initial_cpu = {.pc=0x14a5, .a=0x1d, .x=0x26, .y=0x58, .sp=0x3a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x14a5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x14a6, .a=0x1d, .x=0x26, .y=0x58, .sp=0x3a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x14a5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x14a5, .value=0x40, .type=IO_READ},
        {.addr=0x14a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0339) {
    const struct CPU_State initial_cpu = {.pc=0x6f1c, .a=0x34, .x=0x1c, .y=0xac, .sp=0xa9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6f1c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6f1d, .a=0x34, .x=0x1c, .y=0xac, .sp=0xa9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6f1c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6f1c, .value=0x40, .type=IO_READ},
        {.addr=0x6f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033A) {
    const struct CPU_State initial_cpu = {.pc=0x58c6, .a=0xaa, .x=0x01, .y=0x91, .sp=0xf7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x58c6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x58c7, .a=0xaa, .x=0x01, .y=0x91, .sp=0xf7, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x58c6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x58c6, .value=0x40, .type=IO_READ},
        {.addr=0x58c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033B) {
    const struct CPU_State initial_cpu = {.pc=0x1422, .a=0x0a, .x=0x2f, .y=0xe2, .sp=0xa0, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x1422, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1423, .a=0x0a, .x=0x2f, .y=0xe2, .sp=0xa0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1422, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1422, .value=0x40, .type=IO_READ},
        {.addr=0x1423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033C) {
    const struct CPU_State initial_cpu = {.pc=0x5e6f, .a=0xca, .x=0x3a, .y=0xb7, .sp=0x96, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5e6f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5e70, .a=0xca, .x=0x3a, .y=0xb7, .sp=0x96, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5e6f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5e6f, .value=0x40, .type=IO_READ},
        {.addr=0x5e70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033D) {
    const struct CPU_State initial_cpu = {.pc=0xe8d8, .a=0xc3, .x=0x2b, .y=0x26, .sp=0x9e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe8d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe8d9, .a=0xc3, .x=0x2b, .y=0x26, .sp=0x9e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe8d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe8d8, .value=0x40, .type=IO_READ},
        {.addr=0xe8d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc8a2, .a=0x71, .x=0xdb, .y=0xde, .sp=0xa8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc8a3, .a=0x71, .x=0xdb, .y=0xde, .sp=0xa8, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xc8a2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc8a2, .value=0x40, .type=IO_READ},
        {.addr=0xc8a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_033F) {
    const struct CPU_State initial_cpu = {.pc=0x29ac, .a=0x15, .x=0x1b, .y=0x1e, .sp=0x98, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x29ac, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x29ad, .a=0x15, .x=0x1b, .y=0x1e, .sp=0x98, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x29ac, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x29ac, .value=0x40, .type=IO_READ},
        {.addr=0x29ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0340) {
    const struct CPU_State initial_cpu = {.pc=0x4e50, .a=0x93, .x=0xcc, .y=0x3f, .sp=0x2c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4e50, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4e51, .a=0x93, .x=0xcc, .y=0x3f, .sp=0x2c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4e50, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4e50, .value=0x40, .type=IO_READ},
        {.addr=0x4e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0341) {
    const struct CPU_State initial_cpu = {.pc=0x91f0, .a=0x2f, .x=0x66, .y=0x99, .sp=0x64, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x91f0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x91f1, .a=0x2f, .x=0x66, .y=0x99, .sp=0x64, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x91f0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x91f0, .value=0x40, .type=IO_READ},
        {.addr=0x91f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0342) {
    const struct CPU_State initial_cpu = {.pc=0x5b2d, .a=0xb8, .x=0x2a, .y=0x83, .sp=0xb2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5b2e, .a=0xb8, .x=0x2a, .y=0x83, .sp=0xb2, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x5b2d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5b2d, .value=0x40, .type=IO_READ},
        {.addr=0x5b2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0343) {
    const struct CPU_State initial_cpu = {.pc=0x6c0b, .a=0x7b, .x=0xe3, .y=0x7d, .sp=0x46, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6c0b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6c0c, .a=0x7b, .x=0xe3, .y=0x7d, .sp=0x46, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x6c0b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6c0b, .value=0x40, .type=IO_READ},
        {.addr=0x6c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0344) {
    const struct CPU_State initial_cpu = {.pc=0xb5b6, .a=0x0e, .x=0x41, .y=0x28, .sp=0xad, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb5b7, .a=0x0e, .x=0x41, .y=0x28, .sp=0xad, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xb5b6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb5b6, .value=0x40, .type=IO_READ},
        {.addr=0xb5b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0345) {
    const struct CPU_State initial_cpu = {.pc=0xca5e, .a=0xdc, .x=0x2b, .y=0x4c, .sp=0x1d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xca5e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xca5f, .a=0xdc, .x=0x2b, .y=0x4c, .sp=0x1d, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xca5e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xca5e, .value=0x40, .type=IO_READ},
        {.addr=0xca5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6396, .a=0x6c, .x=0xa3, .y=0x3c, .sp=0x60, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6396, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6397, .a=0x6c, .x=0xa3, .y=0x3c, .sp=0x60, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6396, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6396, .value=0x40, .type=IO_READ},
        {.addr=0x6397, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0347) {
    const struct CPU_State initial_cpu = {.pc=0xa1d8, .a=0x7c, .x=0xd4, .y=0x1f, .sp=0xb4, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa1d8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa1d9, .a=0x7c, .x=0xd4, .y=0x1f, .sp=0xb4, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xa1d8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa1d8, .value=0x40, .type=IO_READ},
        {.addr=0xa1d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0348) {
    const struct CPU_State initial_cpu = {.pc=0x768c, .a=0xb8, .x=0xfa, .y=0x37, .sp=0x4a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x768c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x768d, .a=0xb8, .x=0xfa, .y=0x37, .sp=0x4a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x768c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x768c, .value=0x40, .type=IO_READ},
        {.addr=0x768d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa6f5, .a=0x9e, .x=0xe1, .y=0xbb, .sp=0x2b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa6f6, .a=0x9e, .x=0xe1, .y=0xbb, .sp=0x2b, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xa6f5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa6f5, .value=0x40, .type=IO_READ},
        {.addr=0xa6f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034A) {
    const struct CPU_State initial_cpu = {.pc=0x2834, .a=0x53, .x=0x80, .y=0x21, .sp=0x81, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x2834, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2835, .a=0x53, .x=0x80, .y=0x21, .sp=0x81, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2834, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2834, .value=0x40, .type=IO_READ},
        {.addr=0x2835, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034B) {
    const struct CPU_State initial_cpu = {.pc=0x7340, .a=0xe7, .x=0x03, .y=0xda, .sp=0x71, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7340, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7341, .a=0xe7, .x=0x03, .y=0xda, .sp=0x71, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7340, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7340, .value=0x40, .type=IO_READ},
        {.addr=0x7341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034C) {
    const struct CPU_State initial_cpu = {.pc=0x6d73, .a=0x1b, .x=0xf8, .y=0xc0, .sp=0x7a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6d73, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6d74, .a=0x1b, .x=0xf8, .y=0xc0, .sp=0x7a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6d73, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6d73, .value=0x40, .type=IO_READ},
        {.addr=0x6d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034D) {
    const struct CPU_State initial_cpu = {.pc=0x763f, .a=0x82, .x=0xbe, .y=0xf3, .sp=0x1c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x763f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7640, .a=0x82, .x=0xbe, .y=0xf3, .sp=0x1c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x763f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x763f, .value=0x40, .type=IO_READ},
        {.addr=0x7640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034E) {
    const struct CPU_State initial_cpu = {.pc=0xbead, .a=0x1e, .x=0xeb, .y=0x3f, .sp=0x83, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xbead, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbeae, .a=0x1e, .x=0xeb, .y=0x3f, .sp=0x83, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xbead, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbead, .value=0x40, .type=IO_READ},
        {.addr=0xbeae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_034F) {
    const struct CPU_State initial_cpu = {.pc=0xf411, .a=0x72, .x=0x25, .y=0x18, .sp=0x02, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf411, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf412, .a=0x72, .x=0x25, .y=0x18, .sp=0x02, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf411, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf411, .value=0x40, .type=IO_READ},
        {.addr=0xf412, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0350) {
    const struct CPU_State initial_cpu = {.pc=0x4e7f, .a=0x88, .x=0xe9, .y=0xb1, .sp=0x8f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4e7f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4e80, .a=0x88, .x=0xe9, .y=0xb1, .sp=0x8f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4e7f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4e7f, .value=0x40, .type=IO_READ},
        {.addr=0x4e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0351) {
    const struct CPU_State initial_cpu = {.pc=0x2b59, .a=0x48, .x=0x77, .y=0xdb, .sp=0x5a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2b59, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2b5a, .a=0x48, .x=0x77, .y=0xdb, .sp=0x5a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2b59, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2b59, .value=0x40, .type=IO_READ},
        {.addr=0x2b5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0352) {
    const struct CPU_State initial_cpu = {.pc=0xeb31, .a=0xb7, .x=0xf4, .y=0x0b, .sp=0xf5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xeb31, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeb32, .a=0xb7, .x=0xf4, .y=0x0b, .sp=0xf5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xeb31, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeb31, .value=0x40, .type=IO_READ},
        {.addr=0xeb32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0353) {
    const struct CPU_State initial_cpu = {.pc=0xc00d, .a=0x12, .x=0xd4, .y=0xaf, .sp=0x30, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xc00d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc00e, .a=0x12, .x=0xd4, .y=0xaf, .sp=0x30, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc00d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc00d, .value=0x40, .type=IO_READ},
        {.addr=0xc00e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0354) {
    const struct CPU_State initial_cpu = {.pc=0xd9ee, .a=0xf5, .x=0x79, .y=0x96, .sp=0xab, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ee, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd9ef, .a=0xf5, .x=0x79, .y=0x96, .sp=0xab, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xd9ee, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd9ee, .value=0x40, .type=IO_READ},
        {.addr=0xd9ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0355) {
    const struct CPU_State initial_cpu = {.pc=0x77b5, .a=0xba, .x=0x1e, .y=0x7c, .sp=0x5f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x77b5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x77b6, .a=0xba, .x=0x1e, .y=0x7c, .sp=0x5f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x77b5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x77b5, .value=0x40, .type=IO_READ},
        {.addr=0x77b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0356) {
    const struct CPU_State initial_cpu = {.pc=0x77c4, .a=0x78, .x=0xf7, .y=0x60, .sp=0x52, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x77c4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x77c5, .a=0x78, .x=0xf7, .y=0x60, .sp=0x52, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x77c4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x77c4, .value=0x40, .type=IO_READ},
        {.addr=0x77c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0357) {
    const struct CPU_State initial_cpu = {.pc=0x9f6b, .a=0x0d, .x=0x1a, .y=0x04, .sp=0xb7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x9f6b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9f6c, .a=0x0d, .x=0x1a, .y=0x04, .sp=0xb7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x9f6b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9f6b, .value=0x40, .type=IO_READ},
        {.addr=0x9f6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0358) {
    const struct CPU_State initial_cpu = {.pc=0x2501, .a=0x67, .x=0x80, .y=0xe9, .sp=0xb7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x2501, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2502, .a=0x67, .x=0x80, .y=0xe9, .sp=0xb7, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x2501, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2501, .value=0x40, .type=IO_READ},
        {.addr=0x2502, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0359) {
    const struct CPU_State initial_cpu = {.pc=0xfba5, .a=0xda, .x=0x1f, .y=0xb8, .sp=0x20, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfba5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfba6, .a=0xda, .x=0x1f, .y=0xb8, .sp=0x20, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xfba5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfba5, .value=0x40, .type=IO_READ},
        {.addr=0xfba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035A) {
    const struct CPU_State initial_cpu = {.pc=0xa450, .a=0x20, .x=0x4c, .y=0xd7, .sp=0x46, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa450, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa451, .a=0x20, .x=0x4c, .y=0xd7, .sp=0x46, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xa450, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa450, .value=0x40, .type=IO_READ},
        {.addr=0xa451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035B) {
    const struct CPU_State initial_cpu = {.pc=0xb946, .a=0x30, .x=0xea, .y=0x97, .sp=0x97, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb946, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb947, .a=0x30, .x=0xea, .y=0x97, .sp=0x97, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb946, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb946, .value=0x40, .type=IO_READ},
        {.addr=0xb947, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035C) {
    const struct CPU_State initial_cpu = {.pc=0xe93b, .a=0x11, .x=0x38, .y=0xbd, .sp=0x22, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe93b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe93c, .a=0x11, .x=0x38, .y=0xbd, .sp=0x22, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xe93b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe93b, .value=0x40, .type=IO_READ},
        {.addr=0xe93c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035D) {
    const struct CPU_State initial_cpu = {.pc=0x1493, .a=0x64, .x=0xf6, .y=0x49, .sp=0x60, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1493, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1494, .a=0x64, .x=0xf6, .y=0x49, .sp=0x60, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x1493, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1493, .value=0x40, .type=IO_READ},
        {.addr=0x1494, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035E) {
    const struct CPU_State initial_cpu = {.pc=0xee72, .a=0x26, .x=0x8e, .y=0x6b, .sp=0x5e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xee72, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xee73, .a=0x26, .x=0x8e, .y=0x6b, .sp=0x5e, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xee72, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xee72, .value=0x40, .type=IO_READ},
        {.addr=0xee73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_035F) {
    const struct CPU_State initial_cpu = {.pc=0x55ed, .a=0x2b, .x=0x50, .y=0x23, .sp=0x4d, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x55ed, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x55ee, .a=0x2b, .x=0x50, .y=0x23, .sp=0x4d, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x55ed, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x55ed, .value=0x40, .type=IO_READ},
        {.addr=0x55ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1484, .a=0x5d, .x=0xc4, .y=0x7a, .sp=0xbc, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1484, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1485, .a=0x5d, .x=0xc4, .y=0x7a, .sp=0xbc, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x1484, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1484, .value=0x40, .type=IO_READ},
        {.addr=0x1485, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0361) {
    const struct CPU_State initial_cpu = {.pc=0x9698, .a=0xd7, .x=0x58, .y=0x40, .sp=0x43, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9698, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9699, .a=0xd7, .x=0x58, .y=0x40, .sp=0x43, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9698, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9698, .value=0x40, .type=IO_READ},
        {.addr=0x9699, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0362) {
    const struct CPU_State initial_cpu = {.pc=0xf24e, .a=0x5d, .x=0xc8, .y=0xb1, .sp=0xed, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf24e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf24f, .a=0x5d, .x=0xc8, .y=0xb1, .sp=0xed, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xf24e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf24e, .value=0x40, .type=IO_READ},
        {.addr=0xf24f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0363) {
    const struct CPU_State initial_cpu = {.pc=0xb784, .a=0xec, .x=0x60, .y=0xed, .sp=0x27, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb784, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb785, .a=0xec, .x=0x60, .y=0xed, .sp=0x27, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xb784, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb784, .value=0x40, .type=IO_READ},
        {.addr=0xb785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0364) {
    const struct CPU_State initial_cpu = {.pc=0x7d43, .a=0xf0, .x=0x25, .y=0x1e, .sp=0x26, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7d43, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7d44, .a=0xf0, .x=0x25, .y=0x1e, .sp=0x26, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x7d43, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7d43, .value=0x40, .type=IO_READ},
        {.addr=0x7d44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0365) {
    const struct CPU_State initial_cpu = {.pc=0x2253, .a=0x9b, .x=0x69, .y=0xd3, .sp=0x56, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2253, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2254, .a=0x9b, .x=0x69, .y=0xd3, .sp=0x56, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2253, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2253, .value=0x40, .type=IO_READ},
        {.addr=0x2254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0366) {
    const struct CPU_State initial_cpu = {.pc=0x9a37, .a=0xb9, .x=0xaa, .y=0x41, .sp=0xb0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9a37, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9a38, .a=0xb9, .x=0xaa, .y=0x41, .sp=0xb0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x9a37, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9a37, .value=0x40, .type=IO_READ},
        {.addr=0x9a38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0367) {
    const struct CPU_State initial_cpu = {.pc=0x7ba5, .a=0x7c, .x=0xce, .y=0x76, .sp=0x14, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7ba5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7ba6, .a=0x7c, .x=0xce, .y=0x76, .sp=0x14, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x7ba5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7ba5, .value=0x40, .type=IO_READ},
        {.addr=0x7ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0368) {
    const struct CPU_State initial_cpu = {.pc=0xf6fb, .a=0xb5, .x=0x44, .y=0x8d, .sp=0x4b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf6fb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf6fc, .a=0xb5, .x=0x44, .y=0x8d, .sp=0x4b, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xf6fb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf6fb, .value=0x40, .type=IO_READ},
        {.addr=0xf6fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0369) {
    const struct CPU_State initial_cpu = {.pc=0x5685, .a=0x35, .x=0x3b, .y=0x47, .sp=0x4b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5685, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5686, .a=0x35, .x=0x3b, .y=0x47, .sp=0x4b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5685, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5685, .value=0x40, .type=IO_READ},
        {.addr=0x5686, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036A) {
    const struct CPU_State initial_cpu = {.pc=0xa73a, .a=0x78, .x=0x77, .y=0x66, .sp=0x21, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa73a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa73b, .a=0x78, .x=0x77, .y=0x66, .sp=0x21, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xa73a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa73a, .value=0x40, .type=IO_READ},
        {.addr=0xa73b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036B) {
    const struct CPU_State initial_cpu = {.pc=0x32bc, .a=0xa8, .x=0x64, .y=0xc1, .sp=0x98, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x32bc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x32bd, .a=0xa8, .x=0x64, .y=0xc1, .sp=0x98, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x32bc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x32bc, .value=0x40, .type=IO_READ},
        {.addr=0x32bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036C) {
    const struct CPU_State initial_cpu = {.pc=0x93a6, .a=0xe6, .x=0x4d, .y=0x3c, .sp=0x44, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x93a6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x93a7, .a=0xe6, .x=0x4d, .y=0x3c, .sp=0x44, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x93a6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x93a6, .value=0x40, .type=IO_READ},
        {.addr=0x93a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036D) {
    const struct CPU_State initial_cpu = {.pc=0x9345, .a=0x73, .x=0xc5, .y=0x3f, .sp=0xdb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9345, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9346, .a=0x73, .x=0xc5, .y=0x3f, .sp=0xdb, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x9345, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9345, .value=0x40, .type=IO_READ},
        {.addr=0x9346, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036E) {
    const struct CPU_State initial_cpu = {.pc=0x62b1, .a=0xd7, .x=0x2d, .y=0x40, .sp=0x8a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x62b1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x62b2, .a=0xd7, .x=0x2d, .y=0x40, .sp=0x8a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x62b1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x62b1, .value=0x40, .type=IO_READ},
        {.addr=0x62b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_036F) {
    const struct CPU_State initial_cpu = {.pc=0x3eb9, .a=0x7e, .x=0x68, .y=0x6a, .sp=0xe6, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3eba, .a=0x7e, .x=0x68, .y=0x6a, .sp=0xe6, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x3eb9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3eb9, .value=0x40, .type=IO_READ},
        {.addr=0x3eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0370) {
    const struct CPU_State initial_cpu = {.pc=0x3817, .a=0xce, .x=0xb0, .y=0x5c, .sp=0x89, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3817, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3818, .a=0xce, .x=0xb0, .y=0x5c, .sp=0x89, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x3817, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3817, .value=0x40, .type=IO_READ},
        {.addr=0x3818, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0371) {
    const struct CPU_State initial_cpu = {.pc=0x9bff, .a=0x73, .x=0xa4, .y=0xd5, .sp=0xde, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9bff, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9c00, .a=0x73, .x=0xa4, .y=0xd5, .sp=0xde, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x9bff, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9bff, .value=0x40, .type=IO_READ},
        {.addr=0x9c00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0372) {
    const struct CPU_State initial_cpu = {.pc=0xd6aa, .a=0x48, .x=0xe9, .y=0x91, .sp=0x6e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xd6aa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd6ab, .a=0x48, .x=0xe9, .y=0x91, .sp=0x6e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd6aa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd6aa, .value=0x40, .type=IO_READ},
        {.addr=0xd6ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0373) {
    const struct CPU_State initial_cpu = {.pc=0xe520, .a=0x78, .x=0xb6, .y=0x4d, .sp=0x55, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe520, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe521, .a=0x78, .x=0xb6, .y=0x4d, .sp=0x55, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe520, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe520, .value=0x40, .type=IO_READ},
        {.addr=0xe521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0374) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0x07, .x=0xfe, .y=0x63, .sp=0x87, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5fe2, .a=0x07, .x=0xfe, .y=0x63, .sp=0x87, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x5fe1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0x40, .type=IO_READ},
        {.addr=0x5fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc73c, .a=0xcc, .x=0xa4, .y=0x87, .sp=0x02, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc73c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc73d, .a=0xcc, .x=0xa4, .y=0x87, .sp=0x02, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xc73c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc73c, .value=0x40, .type=IO_READ},
        {.addr=0xc73d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0376) {
    const struct CPU_State initial_cpu = {.pc=0x583e, .a=0x73, .x=0x34, .y=0x8d, .sp=0x0d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x583e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x583f, .a=0x73, .x=0x34, .y=0x8d, .sp=0x0d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x583e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x583e, .value=0x40, .type=IO_READ},
        {.addr=0x583f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0377) {
    const struct CPU_State initial_cpu = {.pc=0x47e4, .a=0x36, .x=0x8c, .y=0x3d, .sp=0x6a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x47e4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x47e5, .a=0x36, .x=0x8c, .y=0x3d, .sp=0x6a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x47e4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x47e4, .value=0x40, .type=IO_READ},
        {.addr=0x47e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0378) {
    const struct CPU_State initial_cpu = {.pc=0x0ab1, .a=0x58, .x=0x13, .y=0xa8, .sp=0xe8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0ab2, .a=0x58, .x=0x13, .y=0xa8, .sp=0xe8, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0ab1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0ab1, .value=0x40, .type=IO_READ},
        {.addr=0x0ab2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0379) {
    const struct CPU_State initial_cpu = {.pc=0x0c63, .a=0xf9, .x=0x5e, .y=0x61, .sp=0x05, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0c63, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0c64, .a=0xf9, .x=0x5e, .y=0x61, .sp=0x05, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0c63, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0c63, .value=0x40, .type=IO_READ},
        {.addr=0x0c64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037A) {
    const struct CPU_State initial_cpu = {.pc=0xf4bd, .a=0x71, .x=0x72, .y=0x11, .sp=0x30, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf4bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf4be, .a=0x71, .x=0x72, .y=0x11, .sp=0x30, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf4bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf4bd, .value=0x40, .type=IO_READ},
        {.addr=0xf4be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037B) {
    const struct CPU_State initial_cpu = {.pc=0x29b9, .a=0x18, .x=0x73, .y=0xa2, .sp=0xdb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x29b9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x29ba, .a=0x18, .x=0x73, .y=0xa2, .sp=0xdb, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x29b9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x29b9, .value=0x40, .type=IO_READ},
        {.addr=0x29ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037C) {
    const struct CPU_State initial_cpu = {.pc=0x69da, .a=0x73, .x=0x54, .y=0x00, .sp=0xc3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x69da, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x69db, .a=0x73, .x=0x54, .y=0x00, .sp=0xc3, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x69da, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x69da, .value=0x40, .type=IO_READ},
        {.addr=0x69db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037D) {
    const struct CPU_State initial_cpu = {.pc=0x2fd9, .a=0x00, .x=0x83, .y=0x99, .sp=0x63, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2fda, .a=0x00, .x=0x83, .y=0x99, .sp=0x63, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x2fd9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2fd9, .value=0x40, .type=IO_READ},
        {.addr=0x2fda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037E) {
    const struct CPU_State initial_cpu = {.pc=0xa9ba, .a=0x89, .x=0x7e, .y=0x08, .sp=0x12, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ba, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa9bb, .a=0x89, .x=0x7e, .y=0x08, .sp=0x12, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xa9ba, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa9ba, .value=0x40, .type=IO_READ},
        {.addr=0xa9bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_037F) {
    const struct CPU_State initial_cpu = {.pc=0xa493, .a=0x8c, .x=0x9f, .y=0x6e, .sp=0x05, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa493, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa494, .a=0x8c, .x=0x9f, .y=0x6e, .sp=0x05, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xa493, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa493, .value=0x40, .type=IO_READ},
        {.addr=0xa494, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3fc8, .a=0xf6, .x=0xbd, .y=0x5d, .sp=0xc7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3fc9, .a=0xf6, .x=0xbd, .y=0x5d, .sp=0xc7, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x3fc8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3fc8, .value=0x40, .type=IO_READ},
        {.addr=0x3fc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0381) {
    const struct CPU_State initial_cpu = {.pc=0x2e6c, .a=0x8d, .x=0x7c, .y=0x42, .sp=0x0d, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2e6c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2e6d, .a=0x8d, .x=0x7c, .y=0x42, .sp=0x0d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2e6c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2e6c, .value=0x40, .type=IO_READ},
        {.addr=0x2e6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0382) {
    const struct CPU_State initial_cpu = {.pc=0x878d, .a=0x7d, .x=0x61, .y=0x5a, .sp=0xe4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x878d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x878e, .a=0x7d, .x=0x61, .y=0x5a, .sp=0xe4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x878d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x878d, .value=0x40, .type=IO_READ},
        {.addr=0x878e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0383) {
    const struct CPU_State initial_cpu = {.pc=0x9cd2, .a=0x82, .x=0x53, .y=0x11, .sp=0xa9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9cd3, .a=0x82, .x=0x53, .y=0x11, .sp=0xa9, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x9cd2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9cd2, .value=0x40, .type=IO_READ},
        {.addr=0x9cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8bf9, .a=0xf8, .x=0x34, .y=0x15, .sp=0x94, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8bfa, .a=0xf8, .x=0x34, .y=0x15, .sp=0x94, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x8bf9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8bf9, .value=0x40, .type=IO_READ},
        {.addr=0x8bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0385) {
    const struct CPU_State initial_cpu = {.pc=0x5e1e, .a=0x81, .x=0x20, .y=0xcb, .sp=0xce, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5e1e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5e1f, .a=0x81, .x=0x20, .y=0xcb, .sp=0xce, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x5e1e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5e1e, .value=0x40, .type=IO_READ},
        {.addr=0x5e1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0386) {
    const struct CPU_State initial_cpu = {.pc=0x4cf2, .a=0x5e, .x=0xcb, .y=0x08, .sp=0x3b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4cf3, .a=0x5e, .x=0xcb, .y=0x08, .sp=0x3b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x4cf2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4cf2, .value=0x40, .type=IO_READ},
        {.addr=0x4cf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0387) {
    const struct CPU_State initial_cpu = {.pc=0xbb1a, .a=0x00, .x=0xfd, .y=0x0e, .sp=0x91, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbb1b, .a=0x00, .x=0xfd, .y=0x0e, .sp=0x91, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xbb1a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbb1a, .value=0x40, .type=IO_READ},
        {.addr=0xbb1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0388) {
    const struct CPU_State initial_cpu = {.pc=0xbda4, .a=0x3f, .x=0x87, .y=0xf3, .sp=0x86, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbda4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbda5, .a=0x3f, .x=0x87, .y=0xf3, .sp=0x86, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xbda4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbda4, .value=0x40, .type=IO_READ},
        {.addr=0xbda5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb8d6, .a=0x75, .x=0x00, .y=0x62, .sp=0x9d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb8d6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb8d7, .a=0x75, .x=0x00, .y=0x62, .sp=0x9d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb8d6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb8d6, .value=0x40, .type=IO_READ},
        {.addr=0xb8d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038A) {
    const struct CPU_State initial_cpu = {.pc=0x85e6, .a=0x91, .x=0xce, .y=0xe2, .sp=0xf3, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x85e6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x85e7, .a=0x91, .x=0xce, .y=0xe2, .sp=0xf3, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x85e6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x85e6, .value=0x40, .type=IO_READ},
        {.addr=0x85e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038B) {
    const struct CPU_State initial_cpu = {.pc=0xda37, .a=0x67, .x=0xbe, .y=0x43, .sp=0xbc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xda37, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda38, .a=0x67, .x=0xbe, .y=0x43, .sp=0xbc, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xda37, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda37, .value=0x40, .type=IO_READ},
        {.addr=0xda38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038C) {
    const struct CPU_State initial_cpu = {.pc=0x7a4c, .a=0x9c, .x=0xc8, .y=0x06, .sp=0xb9, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7a4c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7a4d, .a=0x9c, .x=0xc8, .y=0x06, .sp=0xb9, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7a4c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7a4c, .value=0x40, .type=IO_READ},
        {.addr=0x7a4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038D) {
    const struct CPU_State initial_cpu = {.pc=0x565b, .a=0x85, .x=0xa8, .y=0xac, .sp=0x2f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x565b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x565c, .a=0x85, .x=0xa8, .y=0xac, .sp=0x2f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x565b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x565b, .value=0x40, .type=IO_READ},
        {.addr=0x565c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038E) {
    const struct CPU_State initial_cpu = {.pc=0xe1f6, .a=0x06, .x=0x61, .y=0x40, .sp=0x48, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe1f6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe1f7, .a=0x06, .x=0x61, .y=0x40, .sp=0x48, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xe1f6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe1f6, .value=0x40, .type=IO_READ},
        {.addr=0xe1f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_038F) {
    const struct CPU_State initial_cpu = {.pc=0xb21a, .a=0x5b, .x=0x12, .y=0xc2, .sp=0x06, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xb21a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb21b, .a=0x5b, .x=0x12, .y=0xc2, .sp=0x06, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb21a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb21a, .value=0x40, .type=IO_READ},
        {.addr=0xb21b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0390) {
    const struct CPU_State initial_cpu = {.pc=0xa776, .a=0x65, .x=0xd2, .y=0x1e, .sp=0x2c, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa776, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa777, .a=0x65, .x=0xd2, .y=0x1e, .sp=0x2c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa776, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa776, .value=0x40, .type=IO_READ},
        {.addr=0xa777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0391) {
    const struct CPU_State initial_cpu = {.pc=0xa187, .a=0x4a, .x=0x32, .y=0xb0, .sp=0x08, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa187, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa188, .a=0x4a, .x=0x32, .y=0xb0, .sp=0x08, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xa187, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa187, .value=0x40, .type=IO_READ},
        {.addr=0xa188, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0392) {
    const struct CPU_State initial_cpu = {.pc=0x0480, .a=0xdd, .x=0x0b, .y=0x19, .sp=0xc3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0480, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0481, .a=0xdd, .x=0x0b, .y=0x19, .sp=0xc3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0480, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0480, .value=0x40, .type=IO_READ},
        {.addr=0x0481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0393) {
    const struct CPU_State initial_cpu = {.pc=0x895d, .a=0x7b, .x=0xe6, .y=0x12, .sp=0x54, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x895d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x895e, .a=0x7b, .x=0xe6, .y=0x12, .sp=0x54, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x895d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x895d, .value=0x40, .type=IO_READ},
        {.addr=0x895e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0394) {
    const struct CPU_State initial_cpu = {.pc=0x7ceb, .a=0xbd, .x=0x2f, .y=0xb4, .sp=0x7a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ceb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7cec, .a=0xbd, .x=0x2f, .y=0xb4, .sp=0x7a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7ceb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7ceb, .value=0x40, .type=IO_READ},
        {.addr=0x7cec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0395) {
    const struct CPU_State initial_cpu = {.pc=0x8279, .a=0x39, .x=0x7c, .y=0x9f, .sp=0xa8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x8279, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x827a, .a=0x39, .x=0x7c, .y=0x9f, .sp=0xa8, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x8279, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8279, .value=0x40, .type=IO_READ},
        {.addr=0x827a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0396) {
    const struct CPU_State initial_cpu = {.pc=0x9d3f, .a=0x90, .x=0xae, .y=0x33, .sp=0x2a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9d3f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9d40, .a=0x90, .x=0xae, .y=0x33, .sp=0x2a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x9d3f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9d3f, .value=0x40, .type=IO_READ},
        {.addr=0x9d40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0397) {
    const struct CPU_State initial_cpu = {.pc=0x410e, .a=0x9e, .x=0xbb, .y=0x3d, .sp=0x49, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x410e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x410f, .a=0x9e, .x=0xbb, .y=0x3d, .sp=0x49, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x410e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x410e, .value=0x40, .type=IO_READ},
        {.addr=0x410f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0398) {
    const struct CPU_State initial_cpu = {.pc=0x6901, .a=0x63, .x=0x17, .y=0x10, .sp=0x78, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6901, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6902, .a=0x63, .x=0x17, .y=0x10, .sp=0x78, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x6901, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6901, .value=0x40, .type=IO_READ},
        {.addr=0x6902, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_0399) {
    const struct CPU_State initial_cpu = {.pc=0x0715, .a=0x77, .x=0x61, .y=0xff, .sp=0xc2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0715, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0716, .a=0x77, .x=0x61, .y=0xff, .sp=0xc2, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0715, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0715, .value=0x40, .type=IO_READ},
        {.addr=0x0716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd7bf, .a=0x38, .x=0xd9, .y=0x0d, .sp=0x4f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xd7bf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd7c0, .a=0x38, .x=0xd9, .y=0x0d, .sp=0x4f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xd7bf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd7bf, .value=0x40, .type=IO_READ},
        {.addr=0xd7c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039B) {
    const struct CPU_State initial_cpu = {.pc=0xbffc, .a=0xe3, .x=0x65, .y=0x3a, .sp=0x0a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbffc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xbffd, .a=0xe3, .x=0x65, .y=0x3a, .sp=0x0a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xbffc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xbffc, .value=0x40, .type=IO_READ},
        {.addr=0xbffd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039C) {
    const struct CPU_State initial_cpu = {.pc=0xad58, .a=0x65, .x=0x1a, .y=0x96, .sp=0xd5, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xad58, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xad59, .a=0x65, .x=0x1a, .y=0x96, .sp=0xd5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xad58, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xad58, .value=0x40, .type=IO_READ},
        {.addr=0xad59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039D) {
    const struct CPU_State initial_cpu = {.pc=0x5c37, .a=0xd1, .x=0xb8, .y=0x18, .sp=0xc8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5c37, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c38, .a=0xd1, .x=0xb8, .y=0x18, .sp=0xc8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5c37, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c37, .value=0x40, .type=IO_READ},
        {.addr=0x5c38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039E) {
    const struct CPU_State initial_cpu = {.pc=0xc859, .a=0x92, .x=0xd1, .y=0xbe, .sp=0x81, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc859, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc85a, .a=0x92, .x=0xd1, .y=0xbe, .sp=0x81, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc859, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc859, .value=0x40, .type=IO_READ},
        {.addr=0xc85a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_039F) {
    const struct CPU_State initial_cpu = {.pc=0x2511, .a=0x21, .x=0xbb, .y=0x69, .sp=0xad, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2511, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2512, .a=0x21, .x=0xbb, .y=0x69, .sp=0xad, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2511, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2511, .value=0x40, .type=IO_READ},
        {.addr=0x2512, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x8d80, .a=0x96, .x=0x30, .y=0xb4, .sp=0xa5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8d80, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8d81, .a=0x96, .x=0x30, .y=0xb4, .sp=0xa5, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x8d80, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8d80, .value=0x40, .type=IO_READ},
        {.addr=0x8d81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x26e9, .a=0xb5, .x=0x79, .y=0x2e, .sp=0x9b, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x26e9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x26ea, .a=0xb5, .x=0x79, .y=0x2e, .sp=0x9b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x26e9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x26e9, .value=0x40, .type=IO_READ},
        {.addr=0x26ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x288f, .a=0xd0, .x=0x72, .y=0x8f, .sp=0x92, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x288f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2890, .a=0xd0, .x=0x72, .y=0x8f, .sp=0x92, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x288f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x288f, .value=0x40, .type=IO_READ},
        {.addr=0x2890, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x7841, .a=0xc2, .x=0x6b, .y=0x87, .sp=0x46, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x7841, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7842, .a=0xc2, .x=0x6b, .y=0x87, .sp=0x46, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7841, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7841, .value=0x40, .type=IO_READ},
        {.addr=0x7842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xda6c, .a=0x57, .x=0xc0, .y=0x41, .sp=0xd0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xda6c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xda6d, .a=0x57, .x=0xc0, .y=0x41, .sp=0xd0, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xda6c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xda6c, .value=0x40, .type=IO_READ},
        {.addr=0xda6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x35ea, .a=0x50, .x=0xa7, .y=0x1f, .sp=0x90, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x35ea, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x35eb, .a=0x50, .x=0xa7, .y=0x1f, .sp=0x90, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x35ea, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x35ea, .value=0x40, .type=IO_READ},
        {.addr=0x35eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x2a73, .a=0xe1, .x=0x2b, .y=0x9a, .sp=0x9f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2a73, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2a74, .a=0xe1, .x=0x2b, .y=0x9a, .sp=0x9f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x2a73, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2a73, .value=0x40, .type=IO_READ},
        {.addr=0x2a74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x3bde, .a=0x34, .x=0x0b, .y=0x5e, .sp=0x1f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3bde, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3bdf, .a=0x34, .x=0x0b, .y=0x5e, .sp=0x1f, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x3bde, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3bde, .value=0x40, .type=IO_READ},
        {.addr=0x3bdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3e99, .a=0x46, .x=0x0e, .y=0xc4, .sp=0x1b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3e99, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e9a, .a=0x46, .x=0x0e, .y=0xc4, .sp=0x1b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3e99, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e99, .value=0x40, .type=IO_READ},
        {.addr=0x3e9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xa04e, .a=0xb8, .x=0x67, .y=0x4d, .sp=0xa8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa04e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa04f, .a=0xb8, .x=0x67, .y=0x4d, .sp=0xa8, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xa04e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa04e, .value=0x40, .type=IO_READ},
        {.addr=0xa04f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x6d74, .a=0x6c, .x=0xe4, .y=0x4a, .sp=0x03, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6d74, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6d75, .a=0x6c, .x=0xe4, .y=0x4a, .sp=0x03, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6d74, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6d74, .value=0x40, .type=IO_READ},
        {.addr=0x6d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x6b59, .a=0x98, .x=0x89, .y=0x8c, .sp=0x10, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6b59, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6b5a, .a=0x98, .x=0x89, .y=0x8c, .sp=0x10, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6b59, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6b59, .value=0x40, .type=IO_READ},
        {.addr=0x6b5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xdfdc, .a=0xd3, .x=0x96, .y=0xb8, .sp=0x01, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfdc, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdfdd, .a=0xd3, .x=0x96, .y=0xb8, .sp=0x01, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xdfdc, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdfdc, .value=0x40, .type=IO_READ},
        {.addr=0xdfdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xe2ce, .a=0xac, .x=0x0c, .y=0x27, .sp=0x0a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ce, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe2cf, .a=0xac, .x=0x0c, .y=0x27, .sp=0x0a, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xe2ce, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe2ce, .value=0x40, .type=IO_READ},
        {.addr=0xe2cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x1f0c, .a=0xba, .x=0x5c, .y=0x38, .sp=0xd5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x1f0c, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1f0d, .a=0xba, .x=0x5c, .y=0x38, .sp=0xd5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1f0c, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1f0c, .value=0x40, .type=IO_READ},
        {.addr=0x1f0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x85bd, .a=0x70, .x=0xfe, .y=0xa6, .sp=0x64, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x85bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x85be, .a=0x70, .x=0xfe, .y=0xa6, .sp=0x64, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x85bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x85bd, .value=0x40, .type=IO_READ},
        {.addr=0x85be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x5eef, .a=0x32, .x=0x55, .y=0x19, .sp=0x1c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5eef, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5ef0, .a=0x32, .x=0x55, .y=0x19, .sp=0x1c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5eef, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5eef, .value=0x40, .type=IO_READ},
        {.addr=0x5ef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5ad2, .a=0x72, .x=0xad, .y=0x36, .sp=0x64, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5ad2, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5ad3, .a=0x72, .x=0xad, .y=0x36, .sp=0x64, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5ad2, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5ad2, .value=0x40, .type=IO_READ},
        {.addr=0x5ad3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5211, .a=0x2e, .x=0xfc, .y=0x25, .sp=0xc8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5211, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5212, .a=0x2e, .x=0xfc, .y=0x25, .sp=0xc8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5211, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5211, .value=0x40, .type=IO_READ},
        {.addr=0x5212, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x4dfb, .a=0x91, .x=0x62, .y=0xf6, .sp=0x5f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4dfb, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4dfc, .a=0x91, .x=0x62, .y=0xf6, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4dfb, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4dfb, .value=0x40, .type=IO_READ},
        {.addr=0x4dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x6823, .a=0xe3, .x=0x08, .y=0x11, .sp=0x2e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6823, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6824, .a=0xe3, .x=0x08, .y=0x11, .sp=0x2e, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x6823, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6823, .value=0x40, .type=IO_READ},
        {.addr=0x6824, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xa892, .a=0xfc, .x=0x1d, .y=0xc8, .sp=0xc8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa892, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa893, .a=0xfc, .x=0x1d, .y=0xc8, .sp=0xc8, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xa892, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa892, .value=0x40, .type=IO_READ},
        {.addr=0xa893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xf438, .a=0x51, .x=0xfc, .y=0x57, .sp=0x02, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf438, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf439, .a=0x51, .x=0xfc, .y=0x57, .sp=0x02, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf438, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf438, .value=0x40, .type=IO_READ},
        {.addr=0xf439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x2430, .a=0xc3, .x=0xad, .y=0x21, .sp=0xf1, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x2430, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2431, .a=0xc3, .x=0xad, .y=0x21, .sp=0xf1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2430, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2430, .value=0x40, .type=IO_READ},
        {.addr=0x2431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xa432, .a=0x30, .x=0x3e, .y=0xad, .sp=0xc0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xa432, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa433, .a=0x30, .x=0x3e, .y=0xad, .sp=0xc0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa432, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa432, .value=0x40, .type=IO_READ},
        {.addr=0xa433, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x5ee3, .a=0x56, .x=0x3a, .y=0xf6, .sp=0x42, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5ee4, .a=0x56, .x=0x3a, .y=0xf6, .sp=0x42, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5ee3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5ee3, .value=0x40, .type=IO_READ},
        {.addr=0x5ee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x9bc1, .a=0xa0, .x=0xaf, .y=0x58, .sp=0xbb, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9bc2, .a=0xa0, .x=0xaf, .y=0x58, .sp=0xbb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9bc1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9bc1, .value=0x40, .type=IO_READ},
        {.addr=0x9bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x7533, .a=0x5e, .x=0x9d, .y=0x91, .sp=0x9c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7533, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x7534, .a=0x5e, .x=0x9d, .y=0x91, .sp=0x9c, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x7533, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x7533, .value=0x40, .type=IO_READ},
        {.addr=0x7534, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x5c7e, .a=0x26, .x=0xbc, .y=0x44, .sp=0xf2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5c7e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5c7f, .a=0x26, .x=0xbc, .y=0x44, .sp=0xf2, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x5c7e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5c7e, .value=0x40, .type=IO_READ},
        {.addr=0x5c7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x3e0a, .a=0x49, .x=0xa7, .y=0xba, .sp=0x52, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3e0a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3e0b, .a=0x49, .x=0xa7, .y=0xba, .sp=0x52, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3e0a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3e0a, .value=0x40, .type=IO_READ},
        {.addr=0x3e0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x4fca, .a=0x54, .x=0x08, .y=0x5e, .sp=0xb5, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x4fca, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4fcb, .a=0x54, .x=0x08, .y=0x5e, .sp=0xb5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4fca, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4fca, .value=0x40, .type=IO_READ},
        {.addr=0x4fcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xd035, .a=0x5d, .x=0x86, .y=0xee, .sp=0x00, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd035, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xd036, .a=0x5d, .x=0x86, .y=0xee, .sp=0x00, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd035, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xd035, .value=0x40, .type=IO_READ},
        {.addr=0xd036, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0xe5, .x=0x8f, .y=0x5d, .sp=0x8b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1882, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1883, .a=0xe5, .x=0x8f, .y=0x5d, .sp=0x8b, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x1882, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0x40, .type=IO_READ},
        {.addr=0x1883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x5dc8, .a=0x01, .x=0x21, .y=0x2d, .sp=0x42, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5dc9, .a=0x01, .x=0x21, .y=0x2d, .sp=0x42, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5dc8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5dc8, .value=0x40, .type=IO_READ},
        {.addr=0x5dc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xdce7, .a=0x04, .x=0xae, .y=0xa0, .sp=0xa2, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xdce7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdce8, .a=0x04, .x=0xae, .y=0xa0, .sp=0xa2, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xdce7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdce7, .value=0x40, .type=IO_READ},
        {.addr=0xdce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x0ec7, .a=0x14, .x=0xa5, .y=0x13, .sp=0x6b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0ec8, .a=0x14, .x=0xa5, .y=0x13, .sp=0x6b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0ec7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0ec7, .value=0x40, .type=IO_READ},
        {.addr=0x0ec8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x04ae, .a=0x5a, .x=0xbd, .y=0xc6, .sp=0x62, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x04ae, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x04af, .a=0x5a, .x=0xbd, .y=0xc6, .sp=0x62, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x04ae, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x04ae, .value=0x40, .type=IO_READ},
        {.addr=0x04af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xf435, .a=0xa9, .x=0x27, .y=0x04, .sp=0x28, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf435, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf436, .a=0xa9, .x=0x27, .y=0x04, .sp=0x28, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xf435, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf435, .value=0x40, .type=IO_READ},
        {.addr=0xf436, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xc683, .a=0x48, .x=0x13, .y=0x64, .sp=0xf8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc683, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc684, .a=0x48, .x=0x13, .y=0x64, .sp=0xf8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc683, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc683, .value=0x40, .type=IO_READ},
        {.addr=0xc684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xf1bd, .a=0xd8, .x=0x7d, .y=0x8a, .sp=0xac, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf1bd, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf1be, .a=0xd8, .x=0x7d, .y=0x8a, .sp=0xac, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf1bd, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf1bd, .value=0x40, .type=IO_READ},
        {.addr=0xf1be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x619d, .a=0x11, .x=0x00, .y=0xfd, .sp=0xed, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x619d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x619e, .a=0x11, .x=0x00, .y=0xfd, .sp=0xed, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x619d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x619d, .value=0x40, .type=IO_READ},
        {.addr=0x619e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xeb3b, .a=0x7c, .x=0x52, .y=0x18, .sp=0xd3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xeb3c, .a=0x7c, .x=0x52, .y=0x18, .sp=0xd3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xeb3b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xeb3b, .value=0x40, .type=IO_READ},
        {.addr=0xeb3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xe7fa, .a=0x06, .x=0xad, .y=0x59, .sp=0xba, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fa, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe7fb, .a=0x06, .x=0xad, .y=0x59, .sp=0xba, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xe7fa, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe7fa, .value=0x40, .type=IO_READ},
        {.addr=0xe7fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x8666, .a=0x63, .x=0x88, .y=0xdf, .sp=0xd9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8666, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8667, .a=0x63, .x=0x88, .y=0xdf, .sp=0xd9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x8666, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8666, .value=0x40, .type=IO_READ},
        {.addr=0x8667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x56a3, .a=0x87, .x=0xcd, .y=0x67, .sp=0xf8, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x56a3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x56a4, .a=0x87, .x=0xcd, .y=0x67, .sp=0xf8, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x56a3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x56a3, .value=0x40, .type=IO_READ},
        {.addr=0x56a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xc936, .a=0xd3, .x=0x41, .y=0x60, .sp=0x42, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc936, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc937, .a=0xd3, .x=0x41, .y=0x60, .sp=0x42, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc936, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc936, .value=0x40, .type=IO_READ},
        {.addr=0xc937, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x110b, .a=0x9f, .x=0x4c, .y=0xa7, .sp=0xcf, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x110b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x110c, .a=0x9f, .x=0x4c, .y=0xa7, .sp=0xcf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x110b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x110b, .value=0x40, .type=IO_READ},
        {.addr=0x110c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x4774, .a=0xb4, .x=0x3c, .y=0xb6, .sp=0x42, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4774, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4775, .a=0xb4, .x=0x3c, .y=0xb6, .sp=0x42, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x4774, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4774, .value=0x40, .type=IO_READ},
        {.addr=0x4775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xe657, .a=0xff, .x=0x66, .y=0x3f, .sp=0x41, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe657, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xe658, .a=0xff, .x=0x66, .y=0x3f, .sp=0x41, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe657, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xe657, .value=0x40, .type=IO_READ},
        {.addr=0xe658, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xfd56, .a=0x4e, .x=0x4a, .y=0x6c, .sp=0xd5, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xfd56, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfd57, .a=0x4e, .x=0x4a, .y=0x6c, .sp=0xd5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xfd56, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfd56, .value=0x40, .type=IO_READ},
        {.addr=0xfd57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x5ba5, .a=0xb6, .x=0xeb, .y=0xdf, .sp=0xb1, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba5, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5ba6, .a=0xb6, .x=0xeb, .y=0xdf, .sp=0xb1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x5ba5, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5ba5, .value=0x40, .type=IO_READ},
        {.addr=0x5ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x19b7, .a=0x1d, .x=0x11, .y=0xfb, .sp=0xd6, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x19b7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x19b8, .a=0x1d, .x=0x11, .y=0xfb, .sp=0xd6, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x19b7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x19b7, .value=0x40, .type=IO_READ},
        {.addr=0x19b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xfdd0, .a=0x61, .x=0xb6, .y=0x67, .sp=0xc5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd0, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfdd1, .a=0x61, .x=0xb6, .y=0x67, .sp=0xc5, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xfdd0, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfdd0, .value=0x40, .type=IO_READ},
        {.addr=0xfdd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xa8d4, .a=0xcc, .x=0xcf, .y=0x2b, .sp=0x95, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa8d5, .a=0xcc, .x=0xcf, .y=0x2b, .sp=0x95, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xa8d4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa8d4, .value=0x40, .type=IO_READ},
        {.addr=0xa8d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf7ed, .a=0x6c, .x=0xaf, .y=0x1b, .sp=0x54, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ed, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf7ee, .a=0x6c, .x=0xaf, .y=0x1b, .sp=0x54, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf7ed, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf7ed, .value=0x40, .type=IO_READ},
        {.addr=0xf7ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x61f1, .a=0xa7, .x=0x14, .y=0x4a, .sp=0x75, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x61f1, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x61f2, .a=0xa7, .x=0x14, .y=0x4a, .sp=0x75, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x61f1, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x61f1, .value=0x40, .type=IO_READ},
        {.addr=0x61f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x3819, .a=0x23, .x=0xa7, .y=0xc7, .sp=0x39, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3819, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x381a, .a=0x23, .x=0xa7, .y=0xc7, .sp=0x39, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3819, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3819, .value=0x40, .type=IO_READ},
        {.addr=0x381a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xc794, .a=0xf3, .x=0x62, .y=0xff, .sp=0x38, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc794, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xc795, .a=0xf3, .x=0x62, .y=0xff, .sp=0x38, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xc794, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xc794, .value=0x40, .type=IO_READ},
        {.addr=0xc795, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x4d8b, .a=0x5c, .x=0x11, .y=0x9f, .sp=0x9e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8b, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x4d8c, .a=0x5c, .x=0x11, .y=0x9f, .sp=0x9e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x4d8b, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x4d8b, .value=0x40, .type=IO_READ},
        {.addr=0x4d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xb6ed, .a=0x19, .x=0xd0, .y=0x3a, .sp=0xbb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ed, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xb6ee, .a=0x19, .x=0xd0, .y=0x3a, .sp=0xbb, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb6ed, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xb6ed, .value=0x40, .type=IO_READ},
        {.addr=0xb6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x5428, .a=0xf7, .x=0xc5, .y=0x21, .sp=0xcd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5428, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5429, .a=0xf7, .x=0xc5, .y=0x21, .sp=0xcd, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x5428, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x5428, .value=0x40, .type=IO_READ},
        {.addr=0x5429, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x0cf9, .a=0xf5, .x=0xe7, .y=0x99, .sp=0xee, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0cfa, .a=0xf5, .x=0xe7, .y=0x99, .sp=0xee, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0cf9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0cf9, .value=0x40, .type=IO_READ},
        {.addr=0x0cfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x3ff4, .a=0xa3, .x=0x9b, .y=0xb0, .sp=0x29, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff4, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3ff5, .a=0xa3, .x=0x9b, .y=0xb0, .sp=0x29, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x3ff4, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3ff4, .value=0x40, .type=IO_READ},
        {.addr=0x3ff5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x3a88, .a=0x24, .x=0x66, .y=0x4e, .sp=0x80, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3a88, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3a89, .a=0x24, .x=0x66, .y=0x4e, .sp=0x80, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x3a88, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3a88, .value=0x40, .type=IO_READ},
        {.addr=0x3a89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xabf3, .a=0x65, .x=0x6a, .y=0xb2, .sp=0xec, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xabf3, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xabf4, .a=0x65, .x=0x6a, .y=0xb2, .sp=0xec, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xabf3, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xabf3, .value=0x40, .type=IO_READ},
        {.addr=0xabf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xde5e, .a=0x76, .x=0x1a, .y=0x8a, .sp=0x51, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xde5e, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xde5f, .a=0x76, .x=0x1a, .y=0x8a, .sp=0x51, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xde5e, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xde5e, .value=0x40, .type=IO_READ},
        {.addr=0xde5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x2c13, .a=0xc6, .x=0xd6, .y=0x8d, .sp=0x37, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x2c13, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x2c14, .a=0xc6, .x=0xd6, .y=0x8d, .sp=0x37, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x2c13, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x2c13, .value=0x40, .type=IO_READ},
        {.addr=0x2c14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xde12, .a=0xb7, .x=0x79, .y=0x6a, .sp=0x98, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xde12, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xde13, .a=0xb7, .x=0x79, .y=0x6a, .sp=0x98, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xde12, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xde12, .value=0x40, .type=IO_READ},
        {.addr=0xde13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xf197, .a=0x82, .x=0x72, .y=0x9f, .sp=0x5f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf197, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xf198, .a=0x82, .x=0x72, .y=0x9f, .sp=0x5f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xf197, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xf197, .value=0x40, .type=IO_READ},
        {.addr=0xf198, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xa9a8, .a=0x55, .x=0x13, .y=0xff, .sp=0x59, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a8, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa9a9, .a=0x55, .x=0x13, .y=0xff, .sp=0x59, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa9a8, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa9a8, .value=0x40, .type=IO_READ},
        {.addr=0xa9a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x20b7, .a=0x60, .x=0x2a, .y=0x50, .sp=0xc1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x20b7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x20b8, .a=0x60, .x=0x2a, .y=0x50, .sp=0xc1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x20b7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x20b7, .value=0x40, .type=IO_READ},
        {.addr=0x20b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_40, _40_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xdb33, .a=0xe9, .x=0x9d, .y=0x4b, .sp=0x9f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xdb33, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xdb34, .a=0xe9, .x=0x9d, .y=0x4b, .sp=0x9f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xdb33, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xdb33, .value=0x40, .type=IO_READ},
        {.addr=0xdb34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("40 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
