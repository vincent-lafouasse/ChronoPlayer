#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_80, _80_0000) {
    const struct CPU_State initial_cpu = {.pc=0xd84a, .a=0xf5, .x=0xa5, .y=0x57, .sp=0x63, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xd84a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd84b, .a=0xf5, .x=0xa5, .y=0x57, .sp=0x63, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd84a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd84a, .value=0x80, .type=IO_READ},
        {.addr=0xd84b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0001) {
    const struct CPU_State initial_cpu = {.pc=0x1fe2, .a=0x42, .x=0x2b, .y=0xa8, .sp=0x5a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1fe3, .a=0x42, .x=0x2b, .y=0xa8, .sp=0x5a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1fe2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1fe2, .value=0x80, .type=IO_READ},
        {.addr=0x1fe3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0002) {
    const struct CPU_State initial_cpu = {.pc=0x7155, .a=0x97, .x=0x20, .y=0x6b, .sp=0x2b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7155, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7156, .a=0x97, .x=0x20, .y=0x6b, .sp=0x2b, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7155, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7155, .value=0x80, .type=IO_READ},
        {.addr=0x7156, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0003) {
    const struct CPU_State initial_cpu = {.pc=0xe08e, .a=0x9c, .x=0x90, .y=0x0b, .sp=0x5d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe08e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe08f, .a=0x9c, .x=0x90, .y=0x0b, .sp=0x5d, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe08e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe08e, .value=0x80, .type=IO_READ},
        {.addr=0xe08f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0004) {
    const struct CPU_State initial_cpu = {.pc=0xe116, .a=0x17, .x=0x62, .y=0x71, .sp=0x15, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe116, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe117, .a=0x17, .x=0x62, .y=0x71, .sp=0x15, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe116, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe116, .value=0x80, .type=IO_READ},
        {.addr=0xe117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0005) {
    const struct CPU_State initial_cpu = {.pc=0x1b5c, .a=0x81, .x=0x41, .y=0xf2, .sp=0x8f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x1b5c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1b5d, .a=0x81, .x=0x41, .y=0xf2, .sp=0x8f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x1b5c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1b5c, .value=0x80, .type=IO_READ},
        {.addr=0x1b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0006) {
    const struct CPU_State initial_cpu = {.pc=0x705a, .a=0x8a, .x=0xbd, .y=0x64, .sp=0x5a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x705a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x705b, .a=0x8a, .x=0xbd, .y=0x64, .sp=0x5a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x705a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x705a, .value=0x80, .type=IO_READ},
        {.addr=0x705b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0007) {
    const struct CPU_State initial_cpu = {.pc=0x2424, .a=0xdd, .x=0x3e, .y=0xcb, .sp=0x2c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2424, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2425, .a=0xdd, .x=0x3e, .y=0xcb, .sp=0x2c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2424, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2424, .value=0x80, .type=IO_READ},
        {.addr=0x2425, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0008) {
    const struct CPU_State initial_cpu = {.pc=0xcd4e, .a=0xa9, .x=0x89, .y=0x53, .sp=0x5a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd4e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcd4f, .a=0xa9, .x=0x89, .y=0x53, .sp=0x5a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xcd4e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcd4e, .value=0x80, .type=IO_READ},
        {.addr=0xcd4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0009) {
    const struct CPU_State initial_cpu = {.pc=0x4b4f, .a=0xb2, .x=0x38, .y=0x7d, .sp=0x0d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4b50, .a=0xb2, .x=0x38, .y=0x7d, .sp=0x0d, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x4b4f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4b4f, .value=0x80, .type=IO_READ},
        {.addr=0x4b50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000A) {
    const struct CPU_State initial_cpu = {.pc=0x35eb, .a=0x65, .x=0xa2, .y=0xd0, .sp=0xae, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x35eb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x35ec, .a=0x65, .x=0xa2, .y=0xd0, .sp=0xae, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x35eb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x35eb, .value=0x80, .type=IO_READ},
        {.addr=0x35ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000B) {
    const struct CPU_State initial_cpu = {.pc=0x4b61, .a=0x35, .x=0x25, .y=0x79, .sp=0x0c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4b61, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4b62, .a=0x35, .x=0x25, .y=0x79, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4b61, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4b61, .value=0x80, .type=IO_READ},
        {.addr=0x4b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000C) {
    const struct CPU_State initial_cpu = {.pc=0x4bd7, .a=0xa1, .x=0x13, .y=0x76, .sp=0xf0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4bd8, .a=0xa1, .x=0x13, .y=0x76, .sp=0xf0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4bd7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4bd7, .value=0x80, .type=IO_READ},
        {.addr=0x4bd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa39f, .a=0x95, .x=0x43, .y=0x7d, .sp=0xc4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa39f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa3a0, .a=0x95, .x=0x43, .y=0x7d, .sp=0xc4, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xa39f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa39f, .value=0x80, .type=IO_READ},
        {.addr=0xa3a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000E) {
    const struct CPU_State initial_cpu = {.pc=0xf55d, .a=0xfc, .x=0x24, .y=0xb6, .sp=0x67, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf55d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf55e, .a=0xfc, .x=0x24, .y=0xb6, .sp=0x67, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xf55d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf55d, .value=0x80, .type=IO_READ},
        {.addr=0xf55e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_000F) {
    const struct CPU_State initial_cpu = {.pc=0xb86c, .a=0x6c, .x=0xaf, .y=0xbf, .sp=0xf7, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xb86c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb86d, .a=0x6c, .x=0xaf, .y=0xbf, .sp=0xf7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb86c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb86c, .value=0x80, .type=IO_READ},
        {.addr=0xb86d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0010) {
    const struct CPU_State initial_cpu = {.pc=0x8505, .a=0x78, .x=0x75, .y=0x63, .sp=0x38, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8505, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8506, .a=0x78, .x=0x75, .y=0x63, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8505, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8505, .value=0x80, .type=IO_READ},
        {.addr=0x8506, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6e07, .a=0xc7, .x=0x91, .y=0x2a, .sp=0x92, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x6e07, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6e08, .a=0xc7, .x=0x91, .y=0x2a, .sp=0x92, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x6e07, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6e07, .value=0x80, .type=IO_READ},
        {.addr=0x6e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0012) {
    const struct CPU_State initial_cpu = {.pc=0xf1e4, .a=0xe4, .x=0x11, .y=0x2f, .sp=0xbb, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xf1e4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf1e5, .a=0xe4, .x=0x11, .y=0x2f, .sp=0xbb, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xf1e4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf1e4, .value=0x80, .type=IO_READ},
        {.addr=0xf1e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0013) {
    const struct CPU_State initial_cpu = {.pc=0xa18f, .a=0x26, .x=0x28, .y=0x85, .sp=0x8a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa18f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa190, .a=0x26, .x=0x28, .y=0x85, .sp=0x8a, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xa18f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa18f, .value=0x80, .type=IO_READ},
        {.addr=0xa190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0014) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0x45, .x=0xb8, .y=0xda, .sp=0x40, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x821c, .a=0x45, .x=0xb8, .y=0xda, .sp=0x40, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0x80, .type=IO_READ},
        {.addr=0x821c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0015) {
    const struct CPU_State initial_cpu = {.pc=0xd59b, .a=0xba, .x=0x60, .y=0xcd, .sp=0x8d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xd59b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd59c, .a=0xba, .x=0x60, .y=0xcd, .sp=0x8d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xd59b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd59b, .value=0x80, .type=IO_READ},
        {.addr=0xd59c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0016) {
    const struct CPU_State initial_cpu = {.pc=0x07a6, .a=0xb7, .x=0xdd, .y=0x54, .sp=0x1c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x07a6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x07a7, .a=0xb7, .x=0xdd, .y=0x54, .sp=0x1c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x07a6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x07a6, .value=0x80, .type=IO_READ},
        {.addr=0x07a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0017) {
    const struct CPU_State initial_cpu = {.pc=0x8044, .a=0x4c, .x=0xfd, .y=0xcf, .sp=0x48, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x8044, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8045, .a=0x4c, .x=0xfd, .y=0xcf, .sp=0x48, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8044, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8044, .value=0x80, .type=IO_READ},
        {.addr=0x8045, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0018) {
    const struct CPU_State initial_cpu = {.pc=0x9797, .a=0xbb, .x=0x16, .y=0xe8, .sp=0x5e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9797, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9798, .a=0xbb, .x=0x16, .y=0xe8, .sp=0x5e, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x9797, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9797, .value=0x80, .type=IO_READ},
        {.addr=0x9798, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0019) {
    const struct CPU_State initial_cpu = {.pc=0xbeaa, .a=0xc0, .x=0xda, .y=0xe8, .sp=0x0a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xbeaa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbeab, .a=0xc0, .x=0xda, .y=0xe8, .sp=0x0a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xbeaa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbeaa, .value=0x80, .type=IO_READ},
        {.addr=0xbeab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001A) {
    const struct CPU_State initial_cpu = {.pc=0xb026, .a=0x7e, .x=0x10, .y=0x40, .sp=0xc4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb026, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb027, .a=0x7e, .x=0x10, .y=0x40, .sp=0xc4, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xb026, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb026, .value=0x80, .type=IO_READ},
        {.addr=0xb027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001B) {
    const struct CPU_State initial_cpu = {.pc=0xb60b, .a=0x55, .x=0x33, .y=0x8d, .sp=0x62, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb60b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb60c, .a=0x55, .x=0x33, .y=0x8d, .sp=0x62, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb60b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb60b, .value=0x80, .type=IO_READ},
        {.addr=0xb60c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001C) {
    const struct CPU_State initial_cpu = {.pc=0x007b, .a=0x48, .x=0x16, .y=0x69, .sp=0xf8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x007c, .a=0x48, .x=0x16, .y=0x69, .sp=0xf8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x007b, .value=0x80, .type=IO_READ},
        {.addr=0x007c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001D) {
    const struct CPU_State initial_cpu = {.pc=0xcc99, .a=0x70, .x=0x38, .y=0x92, .sp=0x4b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xcc99, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcc9a, .a=0x70, .x=0x38, .y=0x92, .sp=0x4b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xcc99, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcc99, .value=0x80, .type=IO_READ},
        {.addr=0xcc9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001E) {
    const struct CPU_State initial_cpu = {.pc=0xf84e, .a=0x7b, .x=0x68, .y=0x54, .sp=0xdf, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf84e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf84f, .a=0x7b, .x=0x68, .y=0x54, .sp=0xdf, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf84e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf84e, .value=0x80, .type=IO_READ},
        {.addr=0xf84f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa524, .a=0xed, .x=0x1f, .y=0x1e, .sp=0xd8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa524, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa525, .a=0xed, .x=0x1f, .y=0x1e, .sp=0xd8, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xa524, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa524, .value=0x80, .type=IO_READ},
        {.addr=0xa525, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0020) {
    const struct CPU_State initial_cpu = {.pc=0xce01, .a=0x28, .x=0xb7, .y=0x40, .sp=0xb7, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xce01, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xce02, .a=0x28, .x=0xb7, .y=0x40, .sp=0xb7, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xce01, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xce01, .value=0x80, .type=IO_READ},
        {.addr=0xce02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0021) {
    const struct CPU_State initial_cpu = {.pc=0xc3e2, .a=0x93, .x=0x73, .y=0x72, .sp=0x17, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc3e3, .a=0x93, .x=0x73, .y=0x72, .sp=0x17, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc3e2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc3e2, .value=0x80, .type=IO_READ},
        {.addr=0xc3e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0022) {
    const struct CPU_State initial_cpu = {.pc=0x54d5, .a=0x64, .x=0x98, .y=0xf7, .sp=0x24, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x54d5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x54d6, .a=0x64, .x=0x98, .y=0xf7, .sp=0x24, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x54d5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x54d5, .value=0x80, .type=IO_READ},
        {.addr=0x54d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0023) {
    const struct CPU_State initial_cpu = {.pc=0xba7f, .a=0x38, .x=0x20, .y=0xba, .sp=0x94, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xba7f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xba80, .a=0x38, .x=0x20, .y=0xba, .sp=0x94, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xba7f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xba7f, .value=0x80, .type=IO_READ},
        {.addr=0xba80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0024) {
    const struct CPU_State initial_cpu = {.pc=0xb5d4, .a=0xe7, .x=0xba, .y=0xf9, .sp=0xa0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb5d5, .a=0xe7, .x=0xba, .y=0xf9, .sp=0xa0, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xb5d4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb5d4, .value=0x80, .type=IO_READ},
        {.addr=0xb5d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0025) {
    const struct CPU_State initial_cpu = {.pc=0xbccd, .a=0xeb, .x=0xdd, .y=0xa2, .sp=0x37, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbccd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbcce, .a=0xeb, .x=0xdd, .y=0xa2, .sp=0x37, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xbccd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbccd, .value=0x80, .type=IO_READ},
        {.addr=0xbcce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6631, .a=0x62, .x=0xe7, .y=0xaa, .sp=0x36, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6631, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6632, .a=0x62, .x=0xe7, .y=0xaa, .sp=0x36, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x6631, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6631, .value=0x80, .type=IO_READ},
        {.addr=0x6632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcb3d, .a=0xaf, .x=0xa1, .y=0x22, .sp=0xae, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcb3e, .a=0xaf, .x=0xa1, .y=0x22, .sp=0xae, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcb3d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcb3d, .value=0x80, .type=IO_READ},
        {.addr=0xcb3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0028) {
    const struct CPU_State initial_cpu = {.pc=0x206c, .a=0xae, .x=0xb9, .y=0x88, .sp=0x76, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x206c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x206d, .a=0xae, .x=0xb9, .y=0x88, .sp=0x76, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x206c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x206c, .value=0x80, .type=IO_READ},
        {.addr=0x206d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0029) {
    const struct CPU_State initial_cpu = {.pc=0xebd7, .a=0x5e, .x=0xb1, .y=0x07, .sp=0xbe, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xebd7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xebd8, .a=0x5e, .x=0xb1, .y=0x07, .sp=0xbe, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xebd7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xebd7, .value=0x80, .type=IO_READ},
        {.addr=0xebd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002A) {
    const struct CPU_State initial_cpu = {.pc=0x0ffa, .a=0x5e, .x=0x04, .y=0xee, .sp=0xf3, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0ffa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0ffb, .a=0x5e, .x=0x04, .y=0xee, .sp=0xf3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0ffa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0ffa, .value=0x80, .type=IO_READ},
        {.addr=0x0ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002B) {
    const struct CPU_State initial_cpu = {.pc=0x3b13, .a=0x28, .x=0x43, .y=0x81, .sp=0x83, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b13, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3b14, .a=0x28, .x=0x43, .y=0x81, .sp=0x83, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x3b13, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3b13, .value=0x80, .type=IO_READ},
        {.addr=0x3b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002C) {
    const struct CPU_State initial_cpu = {.pc=0xdb05, .a=0x83, .x=0xc7, .y=0xa0, .sp=0x05, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb05, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdb06, .a=0x83, .x=0xc7, .y=0xa0, .sp=0x05, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdb05, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdb05, .value=0x80, .type=IO_READ},
        {.addr=0xdb06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9af2, .a=0x86, .x=0x00, .y=0x55, .sp=0x1a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x9af2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9af3, .a=0x86, .x=0x00, .y=0x55, .sp=0x1a, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x9af2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9af2, .value=0x80, .type=IO_READ},
        {.addr=0x9af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002E) {
    const struct CPU_State initial_cpu = {.pc=0xd6fc, .a=0x0f, .x=0x23, .y=0xd1, .sp=0x70, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd6fd, .a=0x0f, .x=0x23, .y=0xd1, .sp=0x70, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd6fc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd6fc, .value=0x80, .type=IO_READ},
        {.addr=0xd6fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_002F) {
    const struct CPU_State initial_cpu = {.pc=0x2aed, .a=0xa5, .x=0xbb, .y=0x4b, .sp=0xf4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2aed, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2aee, .a=0xa5, .x=0xbb, .y=0x4b, .sp=0xf4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2aed, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2aed, .value=0x80, .type=IO_READ},
        {.addr=0x2aee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0030) {
    const struct CPU_State initial_cpu = {.pc=0xdf76, .a=0xb9, .x=0x31, .y=0x16, .sp=0xfc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdf76, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdf77, .a=0xb9, .x=0x31, .y=0x16, .sp=0xfc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xdf76, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdf76, .value=0x80, .type=IO_READ},
        {.addr=0xdf77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0031) {
    const struct CPU_State initial_cpu = {.pc=0xc9da, .a=0xb3, .x=0x99, .y=0xd2, .sp=0xff, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc9da, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc9db, .a=0xb3, .x=0x99, .y=0xd2, .sp=0xff, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xc9da, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc9da, .value=0x80, .type=IO_READ},
        {.addr=0xc9db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0032) {
    const struct CPU_State initial_cpu = {.pc=0x01e9, .a=0xdf, .x=0x1e, .y=0x8e, .sp=0x89, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x01ea, .a=0xdf, .x=0x1e, .y=0x8e, .sp=0x89, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x01e9, .value=0x80, .type=IO_READ},
        {.addr=0x01ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0033) {
    const struct CPU_State initial_cpu = {.pc=0xedce, .a=0x9f, .x=0xc5, .y=0xb3, .sp=0x17, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xedce, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xedcf, .a=0x9f, .x=0xc5, .y=0xb3, .sp=0x17, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xedce, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xedce, .value=0x80, .type=IO_READ},
        {.addr=0xedcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa008, .a=0x78, .x=0xe3, .y=0xf6, .sp=0x91, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa008, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa009, .a=0x78, .x=0xe3, .y=0xf6, .sp=0x91, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa008, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa008, .value=0x80, .type=IO_READ},
        {.addr=0xa009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0035) {
    const struct CPU_State initial_cpu = {.pc=0x0db3, .a=0x70, .x=0xf2, .y=0x50, .sp=0x86, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0db3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0db4, .a=0x70, .x=0xf2, .y=0x50, .sp=0x86, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0db3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0db3, .value=0x80, .type=IO_READ},
        {.addr=0x0db4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0036) {
    const struct CPU_State initial_cpu = {.pc=0x1ed5, .a=0x4b, .x=0x74, .y=0x6f, .sp=0x01, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1ed6, .a=0x4b, .x=0x74, .y=0x6f, .sp=0x01, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1ed5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1ed5, .value=0x80, .type=IO_READ},
        {.addr=0x1ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0037) {
    const struct CPU_State initial_cpu = {.pc=0xeca2, .a=0x44, .x=0xbe, .y=0x5b, .sp=0xe0, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xeca2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xeca3, .a=0x44, .x=0xbe, .y=0x5b, .sp=0xe0, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xeca2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xeca2, .value=0x80, .type=IO_READ},
        {.addr=0xeca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0038) {
    const struct CPU_State initial_cpu = {.pc=0xa540, .a=0x8b, .x=0x67, .y=0x02, .sp=0xee, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa540, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa541, .a=0x8b, .x=0x67, .y=0x02, .sp=0xee, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xa540, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa540, .value=0x80, .type=IO_READ},
        {.addr=0xa541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0039) {
    const struct CPU_State initial_cpu = {.pc=0xa827, .a=0x66, .x=0xa5, .y=0x73, .sp=0xe6, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa827, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa828, .a=0x66, .x=0xa5, .y=0x73, .sp=0xe6, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xa827, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa827, .value=0x80, .type=IO_READ},
        {.addr=0xa828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003A) {
    const struct CPU_State initial_cpu = {.pc=0x6d4d, .a=0x56, .x=0x2c, .y=0xc5, .sp=0xc1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6d4d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6d4e, .a=0x56, .x=0x2c, .y=0xc5, .sp=0xc1, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x6d4d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6d4d, .value=0x80, .type=IO_READ},
        {.addr=0x6d4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003B) {
    const struct CPU_State initial_cpu = {.pc=0x740c, .a=0x2f, .x=0xb6, .y=0x10, .sp=0xa8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x740c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x740d, .a=0x2f, .x=0xb6, .y=0x10, .sp=0xa8, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x740c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x740c, .value=0x80, .type=IO_READ},
        {.addr=0x740d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003C) {
    const struct CPU_State initial_cpu = {.pc=0xbe3d, .a=0xa2, .x=0x0b, .y=0xc8, .sp=0xe5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbe3e, .a=0xa2, .x=0x0b, .y=0xc8, .sp=0xe5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbe3d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbe3d, .value=0x80, .type=IO_READ},
        {.addr=0xbe3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003D) {
    const struct CPU_State initial_cpu = {.pc=0xc08a, .a=0x54, .x=0x1f, .y=0x12, .sp=0x68, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xc08a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc08b, .a=0x54, .x=0x1f, .y=0x12, .sp=0x68, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xc08a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc08a, .value=0x80, .type=IO_READ},
        {.addr=0xc08b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003E) {
    const struct CPU_State initial_cpu = {.pc=0x696a, .a=0x11, .x=0x1e, .y=0x0e, .sp=0x73, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x696a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x696b, .a=0x11, .x=0x1e, .y=0x0e, .sp=0x73, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x696a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x696a, .value=0x80, .type=IO_READ},
        {.addr=0x696b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_003F) {
    const struct CPU_State initial_cpu = {.pc=0xecd2, .a=0xf7, .x=0x92, .y=0x27, .sp=0x66, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xecd2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xecd3, .a=0xf7, .x=0x92, .y=0x27, .sp=0x66, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xecd2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xecd2, .value=0x80, .type=IO_READ},
        {.addr=0xecd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0040) {
    const struct CPU_State initial_cpu = {.pc=0x3ec7, .a=0x65, .x=0x68, .y=0x98, .sp=0x8c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3ec8, .a=0x65, .x=0x68, .y=0x98, .sp=0x8c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3ec7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3ec7, .value=0x80, .type=IO_READ},
        {.addr=0x3ec8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0041) {
    const struct CPU_State initial_cpu = {.pc=0xba6f, .a=0x02, .x=0x9c, .y=0x70, .sp=0xca, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xba6f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xba70, .a=0x02, .x=0x9c, .y=0x70, .sp=0xca, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xba6f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xba6f, .value=0x80, .type=IO_READ},
        {.addr=0xba70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0042) {
    const struct CPU_State initial_cpu = {.pc=0xe2a7, .a=0x11, .x=0xe3, .y=0x27, .sp=0xee, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe2a8, .a=0x11, .x=0xe3, .y=0x27, .sp=0xee, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe2a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe2a7, .value=0x80, .type=IO_READ},
        {.addr=0xe2a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0043) {
    const struct CPU_State initial_cpu = {.pc=0xfbe0, .a=0xc4, .x=0x84, .y=0xfb, .sp=0x49, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfbe1, .a=0xc4, .x=0x84, .y=0xfb, .sp=0x49, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xfbe0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfbe0, .value=0x80, .type=IO_READ},
        {.addr=0xfbe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0044) {
    const struct CPU_State initial_cpu = {.pc=0x04cb, .a=0xfe, .x=0x8b, .y=0xc7, .sp=0xfc, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x04cb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x04cc, .a=0xfe, .x=0x8b, .y=0xc7, .sp=0xfc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x04cb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x04cb, .value=0x80, .type=IO_READ},
        {.addr=0x04cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0045) {
    const struct CPU_State initial_cpu = {.pc=0xa9bc, .a=0x2d, .x=0x58, .y=0x55, .sp=0x04, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa9bc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa9bd, .a=0x2d, .x=0x58, .y=0x55, .sp=0x04, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa9bc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa9bc, .value=0x80, .type=IO_READ},
        {.addr=0xa9bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe108, .a=0x6c, .x=0xf3, .y=0xfd, .sp=0x62, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe108, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe109, .a=0x6c, .x=0xf3, .y=0xfd, .sp=0x62, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xe108, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe108, .value=0x80, .type=IO_READ},
        {.addr=0xe109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2725, .a=0x55, .x=0xc5, .y=0xe8, .sp=0xff, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2725, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2726, .a=0x55, .x=0xc5, .y=0xe8, .sp=0xff, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2725, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2725, .value=0x80, .type=IO_READ},
        {.addr=0x2726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0048) {
    const struct CPU_State initial_cpu = {.pc=0x326c, .a=0xd0, .x=0xae, .y=0xcd, .sp=0xf1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x326c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x326d, .a=0xd0, .x=0xae, .y=0xcd, .sp=0xf1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x326c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x326c, .value=0x80, .type=IO_READ},
        {.addr=0x326d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0049) {
    const struct CPU_State initial_cpu = {.pc=0x6ace, .a=0xc5, .x=0xdd, .y=0x07, .sp=0x88, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x6ace, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6acf, .a=0xc5, .x=0xdd, .y=0x07, .sp=0x88, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6ace, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6ace, .value=0x80, .type=IO_READ},
        {.addr=0x6acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004A) {
    const struct CPU_State initial_cpu = {.pc=0x9b54, .a=0xd6, .x=0x4b, .y=0xe0, .sp=0xa9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x9b54, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9b55, .a=0xd6, .x=0x4b, .y=0xe0, .sp=0xa9, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x9b54, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9b54, .value=0x80, .type=IO_READ},
        {.addr=0x9b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004B) {
    const struct CPU_State initial_cpu = {.pc=0x4430, .a=0xe2, .x=0x4a, .y=0xd4, .sp=0x27, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4430, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4431, .a=0xe2, .x=0x4a, .y=0xd4, .sp=0x27, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4430, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4430, .value=0x80, .type=IO_READ},
        {.addr=0x4431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004C) {
    const struct CPU_State initial_cpu = {.pc=0xb381, .a=0x2b, .x=0xd6, .y=0x45, .sp=0x66, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb381, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb382, .a=0x2b, .x=0xd6, .y=0x45, .sp=0x66, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb381, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb381, .value=0x80, .type=IO_READ},
        {.addr=0xb382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004D) {
    const struct CPU_State initial_cpu = {.pc=0xb740, .a=0xf7, .x=0x5d, .y=0xb4, .sp=0xd4, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb740, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb741, .a=0xf7, .x=0x5d, .y=0xb4, .sp=0xd4, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xb740, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb740, .value=0x80, .type=IO_READ},
        {.addr=0xb741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3494, .a=0x5f, .x=0x9a, .y=0x17, .sp=0x52, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3494, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3495, .a=0x5f, .x=0x9a, .y=0x17, .sp=0x52, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x3494, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3494, .value=0x80, .type=IO_READ},
        {.addr=0x3495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_004F) {
    const struct CPU_State initial_cpu = {.pc=0x024f, .a=0x09, .x=0xb4, .y=0x3b, .sp=0x72, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x024f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0250, .a=0x09, .x=0xb4, .y=0x3b, .sp=0x72, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x024f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x024f, .value=0x80, .type=IO_READ},
        {.addr=0x0250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0050) {
    const struct CPU_State initial_cpu = {.pc=0x227d, .a=0x1a, .x=0x69, .y=0x5e, .sp=0xb8, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x227d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x227e, .a=0x1a, .x=0x69, .y=0x5e, .sp=0xb8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x227d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x227d, .value=0x80, .type=IO_READ},
        {.addr=0x227e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0051) {
    const struct CPU_State initial_cpu = {.pc=0x7aeb, .a=0x41, .x=0xc2, .y=0xe3, .sp=0x18, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7aeb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7aec, .a=0x41, .x=0xc2, .y=0xe3, .sp=0x18, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7aeb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7aeb, .value=0x80, .type=IO_READ},
        {.addr=0x7aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0052) {
    const struct CPU_State initial_cpu = {.pc=0x5904, .a=0x07, .x=0xca, .y=0xd1, .sp=0xd3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5904, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5905, .a=0x07, .x=0xca, .y=0xd1, .sp=0xd3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5904, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5904, .value=0x80, .type=IO_READ},
        {.addr=0x5905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0053) {
    const struct CPU_State initial_cpu = {.pc=0xe699, .a=0x7d, .x=0x18, .y=0x44, .sp=0x6a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe699, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe69a, .a=0x7d, .x=0x18, .y=0x44, .sp=0x6a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe699, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe699, .value=0x80, .type=IO_READ},
        {.addr=0xe69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0054) {
    const struct CPU_State initial_cpu = {.pc=0xdd8a, .a=0x4f, .x=0xd7, .y=0x00, .sp=0x9f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdd8b, .a=0x4f, .x=0xd7, .y=0x00, .sp=0x9f, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xdd8a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdd8a, .value=0x80, .type=IO_READ},
        {.addr=0xdd8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0055) {
    const struct CPU_State initial_cpu = {.pc=0x7c6e, .a=0x82, .x=0xa5, .y=0x9c, .sp=0xb3, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7c6f, .a=0x82, .x=0xa5, .y=0x9c, .sp=0xb3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7c6e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7c6e, .value=0x80, .type=IO_READ},
        {.addr=0x7c6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0056) {
    const struct CPU_State initial_cpu = {.pc=0xc5aa, .a=0x1e, .x=0x4f, .y=0xd1, .sp=0x64, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xc5aa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc5ab, .a=0x1e, .x=0x4f, .y=0xd1, .sp=0x64, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc5aa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc5aa, .value=0x80, .type=IO_READ},
        {.addr=0xc5ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0057) {
    const struct CPU_State initial_cpu = {.pc=0xaa1e, .a=0x85, .x=0x97, .y=0x80, .sp=0x11, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaa1f, .a=0x85, .x=0x97, .y=0x80, .sp=0x11, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xaa1e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaa1e, .value=0x80, .type=IO_READ},
        {.addr=0xaa1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0058) {
    const struct CPU_State initial_cpu = {.pc=0xdd3d, .a=0xc3, .x=0x0f, .y=0xc0, .sp=0x59, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdd3d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdd3e, .a=0xc3, .x=0x0f, .y=0xc0, .sp=0x59, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xdd3d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdd3d, .value=0x80, .type=IO_READ},
        {.addr=0xdd3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0059) {
    const struct CPU_State initial_cpu = {.pc=0xdd1f, .a=0xd2, .x=0x39, .y=0x3d, .sp=0x95, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdd1f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdd20, .a=0xd2, .x=0x39, .y=0x3d, .sp=0x95, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xdd1f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdd1f, .value=0x80, .type=IO_READ},
        {.addr=0xdd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005A) {
    const struct CPU_State initial_cpu = {.pc=0xec60, .a=0xb4, .x=0x8a, .y=0xb8, .sp=0x69, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xec60, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xec61, .a=0xb4, .x=0x8a, .y=0xb8, .sp=0x69, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xec60, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xec60, .value=0x80, .type=IO_READ},
        {.addr=0xec61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005B) {
    const struct CPU_State initial_cpu = {.pc=0x5d2f, .a=0x3e, .x=0xd7, .y=0xf8, .sp=0x87, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5d30, .a=0x3e, .x=0xd7, .y=0xf8, .sp=0x87, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5d2f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5d2f, .value=0x80, .type=IO_READ},
        {.addr=0x5d30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005C) {
    const struct CPU_State initial_cpu = {.pc=0x3cd1, .a=0x5b, .x=0x73, .y=0x3f, .sp=0xb7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3cd2, .a=0x5b, .x=0x73, .y=0x3f, .sp=0xb7, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x3cd1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3cd1, .value=0x80, .type=IO_READ},
        {.addr=0x3cd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd42d, .a=0xc9, .x=0x72, .y=0xdb, .sp=0x5d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd42d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd42e, .a=0xc9, .x=0x72, .y=0xdb, .sp=0x5d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xd42d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd42d, .value=0x80, .type=IO_READ},
        {.addr=0xd42e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005E) {
    const struct CPU_State initial_cpu = {.pc=0xd4ef, .a=0x91, .x=0x85, .y=0x2f, .sp=0x45, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ef, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd4f0, .a=0x91, .x=0x85, .y=0x2f, .sp=0x45, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xd4ef, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd4ef, .value=0x80, .type=IO_READ},
        {.addr=0xd4f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_005F) {
    const struct CPU_State initial_cpu = {.pc=0x76da, .a=0x83, .x=0xf0, .y=0x70, .sp=0xfb, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x76da, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x76db, .a=0x83, .x=0xf0, .y=0x70, .sp=0xfb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x76da, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x76da, .value=0x80, .type=IO_READ},
        {.addr=0x76db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0060) {
    const struct CPU_State initial_cpu = {.pc=0x3714, .a=0xbe, .x=0xc4, .y=0x65, .sp=0x2f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x3714, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3715, .a=0xbe, .x=0xc4, .y=0x65, .sp=0x2f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3714, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3714, .value=0x80, .type=IO_READ},
        {.addr=0x3715, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0061) {
    const struct CPU_State initial_cpu = {.pc=0xdb6a, .a=0xa4, .x=0x25, .y=0xd0, .sp=0x72, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xdb6a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdb6b, .a=0xa4, .x=0x25, .y=0xd0, .sp=0x72, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xdb6a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdb6a, .value=0x80, .type=IO_READ},
        {.addr=0xdb6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0062) {
    const struct CPU_State initial_cpu = {.pc=0x75ca, .a=0x5e, .x=0x79, .y=0xbb, .sp=0x23, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x75ca, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x75cb, .a=0x5e, .x=0x79, .y=0xbb, .sp=0x23, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x75ca, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x75ca, .value=0x80, .type=IO_READ},
        {.addr=0x75cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0063) {
    const struct CPU_State initial_cpu = {.pc=0x63ae, .a=0x9e, .x=0x4f, .y=0x1b, .sp=0x71, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x63ae, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x63af, .a=0x9e, .x=0x4f, .y=0x1b, .sp=0x71, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x63ae, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x63ae, .value=0x80, .type=IO_READ},
        {.addr=0x63af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0064) {
    const struct CPU_State initial_cpu = {.pc=0xcc3f, .a=0xc6, .x=0x2f, .y=0x0f, .sp=0xca, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcc3f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcc40, .a=0xc6, .x=0x2f, .y=0x0f, .sp=0xca, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xcc3f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcc3f, .value=0x80, .type=IO_READ},
        {.addr=0xcc40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0065) {
    const struct CPU_State initial_cpu = {.pc=0x9b40, .a=0x3b, .x=0xe4, .y=0x82, .sp=0x61, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x9b40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9b41, .a=0x3b, .x=0xe4, .y=0x82, .sp=0x61, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x9b40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9b40, .value=0x80, .type=IO_READ},
        {.addr=0x9b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0066) {
    const struct CPU_State initial_cpu = {.pc=0x87ee, .a=0x5f, .x=0xb4, .y=0xe7, .sp=0xdc, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x87ee, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x87ef, .a=0x5f, .x=0xb4, .y=0xe7, .sp=0xdc, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x87ee, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x87ee, .value=0x80, .type=IO_READ},
        {.addr=0x87ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0067) {
    const struct CPU_State initial_cpu = {.pc=0xc600, .a=0xf2, .x=0x81, .y=0xaf, .sp=0xbb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xc600, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc601, .a=0xf2, .x=0x81, .y=0xaf, .sp=0xbb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc600, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc600, .value=0x80, .type=IO_READ},
        {.addr=0xc601, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0068) {
    const struct CPU_State initial_cpu = {.pc=0x9c91, .a=0xe7, .x=0x53, .y=0xf6, .sp=0xb7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x9c91, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9c92, .a=0xe7, .x=0x53, .y=0xf6, .sp=0xb7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x9c91, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9c91, .value=0x80, .type=IO_READ},
        {.addr=0x9c92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0069) {
    const struct CPU_State initial_cpu = {.pc=0x525e, .a=0x97, .x=0x3b, .y=0xd4, .sp=0xff, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x525e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x525f, .a=0x97, .x=0x3b, .y=0xd4, .sp=0xff, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x525e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x525e, .value=0x80, .type=IO_READ},
        {.addr=0x525f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006A) {
    const struct CPU_State initial_cpu = {.pc=0x136b, .a=0x9d, .x=0x8f, .y=0xc0, .sp=0xbc, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x136b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x136c, .a=0x9d, .x=0x8f, .y=0xc0, .sp=0xbc, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x136b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x136b, .value=0x80, .type=IO_READ},
        {.addr=0x136c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006B) {
    const struct CPU_State initial_cpu = {.pc=0xd25c, .a=0x3c, .x=0x37, .y=0x1e, .sp=0xe9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd25c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd25d, .a=0x3c, .x=0x37, .y=0x1e, .sp=0xe9, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd25c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd25c, .value=0x80, .type=IO_READ},
        {.addr=0xd25d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006C) {
    const struct CPU_State initial_cpu = {.pc=0xdaa5, .a=0xb0, .x=0xb7, .y=0x05, .sp=0x84, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdaa6, .a=0xb0, .x=0xb7, .y=0x05, .sp=0x84, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xdaa5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdaa5, .value=0x80, .type=IO_READ},
        {.addr=0xdaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006D) {
    const struct CPU_State initial_cpu = {.pc=0xc863, .a=0xa5, .x=0xa8, .y=0x7c, .sp=0x03, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc863, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc864, .a=0xa5, .x=0xa8, .y=0x7c, .sp=0x03, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc863, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc863, .value=0x80, .type=IO_READ},
        {.addr=0xc864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006E) {
    const struct CPU_State initial_cpu = {.pc=0x885e, .a=0x9e, .x=0x60, .y=0xa5, .sp=0xdc, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x885e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x885f, .a=0x9e, .x=0x60, .y=0xa5, .sp=0xdc, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x885e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x885e, .value=0x80, .type=IO_READ},
        {.addr=0x885f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_006F) {
    const struct CPU_State initial_cpu = {.pc=0x81a6, .a=0x0e, .x=0x01, .y=0x5c, .sp=0x9a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x81a6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x81a7, .a=0x0e, .x=0x01, .y=0x5c, .sp=0x9a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x81a6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x81a6, .value=0x80, .type=IO_READ},
        {.addr=0x81a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbb6e, .a=0xe0, .x=0x74, .y=0x55, .sp=0x97, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xbb6e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbb6f, .a=0xe0, .x=0x74, .y=0x55, .sp=0x97, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xbb6e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbb6e, .value=0x80, .type=IO_READ},
        {.addr=0xbb6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0071) {
    const struct CPU_State initial_cpu = {.pc=0x041c, .a=0xed, .x=0x46, .y=0x10, .sp=0x34, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x041c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x041d, .a=0xed, .x=0x46, .y=0x10, .sp=0x34, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x041c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x041c, .value=0x80, .type=IO_READ},
        {.addr=0x041d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0072) {
    const struct CPU_State initial_cpu = {.pc=0x3255, .a=0x19, .x=0x8b, .y=0x82, .sp=0x50, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3255, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3256, .a=0x19, .x=0x8b, .y=0x82, .sp=0x50, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3255, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3255, .value=0x80, .type=IO_READ},
        {.addr=0x3256, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0073) {
    const struct CPU_State initial_cpu = {.pc=0x295b, .a=0xb5, .x=0x57, .y=0xf2, .sp=0x3e, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x295b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x295c, .a=0xb5, .x=0x57, .y=0xf2, .sp=0x3e, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x295b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x295b, .value=0x80, .type=IO_READ},
        {.addr=0x295c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0074) {
    const struct CPU_State initial_cpu = {.pc=0xd69b, .a=0xb6, .x=0xd6, .y=0x42, .sp=0xb3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd69b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd69c, .a=0xb6, .x=0xd6, .y=0x42, .sp=0xb3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd69b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd69b, .value=0x80, .type=IO_READ},
        {.addr=0xd69c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0075) {
    const struct CPU_State initial_cpu = {.pc=0x1ebc, .a=0x5e, .x=0x6c, .y=0x59, .sp=0x1f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1ebc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1ebd, .a=0x5e, .x=0x6c, .y=0x59, .sp=0x1f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1ebc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1ebc, .value=0x80, .type=IO_READ},
        {.addr=0x1ebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0076) {
    const struct CPU_State initial_cpu = {.pc=0x658d, .a=0x82, .x=0xc9, .y=0x72, .sp=0x81, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x658d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x658e, .a=0x82, .x=0xc9, .y=0x72, .sp=0x81, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x658d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x658d, .value=0x80, .type=IO_READ},
        {.addr=0x658e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0077) {
    const struct CPU_State initial_cpu = {.pc=0x5172, .a=0x01, .x=0xac, .y=0xe5, .sp=0x21, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x5172, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5173, .a=0x01, .x=0xac, .y=0xe5, .sp=0x21, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x5172, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5172, .value=0x80, .type=IO_READ},
        {.addr=0x5173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0078) {
    const struct CPU_State initial_cpu = {.pc=0x15db, .a=0x97, .x=0x3b, .y=0x71, .sp=0x4a, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x15db, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x15dc, .a=0x97, .x=0x3b, .y=0x71, .sp=0x4a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x15db, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x15db, .value=0x80, .type=IO_READ},
        {.addr=0x15dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0079) {
    const struct CPU_State initial_cpu = {.pc=0x385f, .a=0x81, .x=0xe9, .y=0x3e, .sp=0x96, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x385f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3860, .a=0x81, .x=0xe9, .y=0x3e, .sp=0x96, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x385f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x385f, .value=0x80, .type=IO_READ},
        {.addr=0x3860, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007A) {
    const struct CPU_State initial_cpu = {.pc=0xb5ef, .a=0x92, .x=0x20, .y=0x7d, .sp=0x2f, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ef, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb5f0, .a=0x92, .x=0x20, .y=0x7d, .sp=0x2f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb5ef, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb5ef, .value=0x80, .type=IO_READ},
        {.addr=0xb5f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc94f, .a=0x8b, .x=0x82, .y=0x9c, .sp=0xd1, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xc94f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc950, .a=0x8b, .x=0x82, .y=0x9c, .sp=0xd1, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc94f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc94f, .value=0x80, .type=IO_READ},
        {.addr=0xc950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007C) {
    const struct CPU_State initial_cpu = {.pc=0x1b12, .a=0xb3, .x=0xf2, .y=0xec, .sp=0x20, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1b12, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1b13, .a=0xb3, .x=0xf2, .y=0xec, .sp=0x20, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1b12, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1b12, .value=0x80, .type=IO_READ},
        {.addr=0x1b13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007D) {
    const struct CPU_State initial_cpu = {.pc=0x52cd, .a=0xe2, .x=0x99, .y=0x11, .sp=0x37, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x52cd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x52ce, .a=0xe2, .x=0x99, .y=0x11, .sp=0x37, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x52cd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x52cd, .value=0x80, .type=IO_READ},
        {.addr=0x52ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8c2a, .a=0x5f, .x=0x9f, .y=0x73, .sp=0x33, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8c2b, .a=0x5f, .x=0x9f, .y=0x73, .sp=0x33, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8c2a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8c2a, .value=0x80, .type=IO_READ},
        {.addr=0x8c2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_007F) {
    const struct CPU_State initial_cpu = {.pc=0x2841, .a=0x47, .x=0xe8, .y=0xb3, .sp=0x5c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2841, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2842, .a=0x47, .x=0xe8, .y=0xb3, .sp=0x5c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2841, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2841, .value=0x80, .type=IO_READ},
        {.addr=0x2842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0080) {
    const struct CPU_State initial_cpu = {.pc=0xc032, .a=0x03, .x=0x7f, .y=0xe6, .sp=0x72, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc032, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc033, .a=0x03, .x=0x7f, .y=0xe6, .sp=0x72, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xc032, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc032, .value=0x80, .type=IO_READ},
        {.addr=0xc033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0081) {
    const struct CPU_State initial_cpu = {.pc=0x3c8d, .a=0x5a, .x=0xce, .y=0x16, .sp=0xe9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3c8d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3c8e, .a=0x5a, .x=0xce, .y=0x16, .sp=0xe9, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x3c8d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3c8d, .value=0x80, .type=IO_READ},
        {.addr=0x3c8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0082) {
    const struct CPU_State initial_cpu = {.pc=0x8969, .a=0x55, .x=0xae, .y=0x2b, .sp=0xa4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8969, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x896a, .a=0x55, .x=0xae, .y=0x2b, .sp=0xa4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8969, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8969, .value=0x80, .type=IO_READ},
        {.addr=0x896a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0083) {
    const struct CPU_State initial_cpu = {.pc=0x520b, .a=0xbb, .x=0x46, .y=0x75, .sp=0x75, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x520b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x520c, .a=0xbb, .x=0x46, .y=0x75, .sp=0x75, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x520b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x520b, .value=0x80, .type=IO_READ},
        {.addr=0x520c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0084) {
    const struct CPU_State initial_cpu = {.pc=0x216c, .a=0xea, .x=0xeb, .y=0x34, .sp=0xff, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x216c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x216d, .a=0xea, .x=0xeb, .y=0x34, .sp=0xff, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x216c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x216c, .value=0x80, .type=IO_READ},
        {.addr=0x216d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0085) {
    const struct CPU_State initial_cpu = {.pc=0x47db, .a=0xee, .x=0x32, .y=0xd1, .sp=0xd1, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x47db, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x47dc, .a=0xee, .x=0x32, .y=0xd1, .sp=0xd1, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x47db, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x47db, .value=0x80, .type=IO_READ},
        {.addr=0x47dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0086) {
    const struct CPU_State initial_cpu = {.pc=0xcdd0, .a=0xbc, .x=0xdf, .y=0x93, .sp=0x78, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcdd1, .a=0xbc, .x=0xdf, .y=0x93, .sp=0x78, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcdd0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcdd0, .value=0x80, .type=IO_READ},
        {.addr=0xcdd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0087) {
    const struct CPU_State initial_cpu = {.pc=0x19b4, .a=0x68, .x=0xce, .y=0x46, .sp=0xb0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x19b4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x19b5, .a=0x68, .x=0xce, .y=0x46, .sp=0xb0, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x19b4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x19b4, .value=0x80, .type=IO_READ},
        {.addr=0x19b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0088) {
    const struct CPU_State initial_cpu = {.pc=0x2f90, .a=0x6e, .x=0x2e, .y=0x76, .sp=0x78, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2f90, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2f91, .a=0x6e, .x=0x2e, .y=0x76, .sp=0x78, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2f90, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2f90, .value=0x80, .type=IO_READ},
        {.addr=0x2f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0089) {
    const struct CPU_State initial_cpu = {.pc=0x4024, .a=0x72, .x=0x47, .y=0x5e, .sp=0xda, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4024, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4025, .a=0x72, .x=0x47, .y=0x5e, .sp=0xda, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4024, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4024, .value=0x80, .type=IO_READ},
        {.addr=0x4025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008A) {
    const struct CPU_State initial_cpu = {.pc=0xdbd2, .a=0x2a, .x=0x6c, .y=0x7c, .sp=0x0d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdbd3, .a=0x2a, .x=0x6c, .y=0x7c, .sp=0x0d, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xdbd2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdbd2, .value=0x80, .type=IO_READ},
        {.addr=0xdbd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008B) {
    const struct CPU_State initial_cpu = {.pc=0x0419, .a=0x17, .x=0xd8, .y=0x6b, .sp=0x7d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0419, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x041a, .a=0x17, .x=0xd8, .y=0x6b, .sp=0x7d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0419, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0419, .value=0x80, .type=IO_READ},
        {.addr=0x041a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008C) {
    const struct CPU_State initial_cpu = {.pc=0xd27f, .a=0x08, .x=0x5f, .y=0xd4, .sp=0x92, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd27f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd280, .a=0x08, .x=0x5f, .y=0xd4, .sp=0x92, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xd27f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd27f, .value=0x80, .type=IO_READ},
        {.addr=0xd280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008D) {
    const struct CPU_State initial_cpu = {.pc=0x27c0, .a=0x87, .x=0x7c, .y=0x6f, .sp=0x4a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x27c0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x27c1, .a=0x87, .x=0x7c, .y=0x6f, .sp=0x4a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x27c0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x27c0, .value=0x80, .type=IO_READ},
        {.addr=0x27c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008E) {
    const struct CPU_State initial_cpu = {.pc=0x5c44, .a=0x45, .x=0xcf, .y=0x30, .sp=0x45, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5c44, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5c45, .a=0x45, .x=0xcf, .y=0x30, .sp=0x45, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x5c44, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5c44, .value=0x80, .type=IO_READ},
        {.addr=0x5c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_008F) {
    const struct CPU_State initial_cpu = {.pc=0xbee0, .a=0x1a, .x=0x29, .y=0x06, .sp=0x66, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xbee0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbee1, .a=0x1a, .x=0x29, .y=0x06, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbee0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbee0, .value=0x80, .type=IO_READ},
        {.addr=0xbee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0090) {
    const struct CPU_State initial_cpu = {.pc=0x8b13, .a=0x8b, .x=0x3d, .y=0x5c, .sp=0x33, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b13, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8b14, .a=0x8b, .x=0x3d, .y=0x5c, .sp=0x33, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8b13, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8b13, .value=0x80, .type=IO_READ},
        {.addr=0x8b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0091) {
    const struct CPU_State initial_cpu = {.pc=0x3727, .a=0xda, .x=0xd6, .y=0x7f, .sp=0xc6, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3727, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3728, .a=0xda, .x=0xd6, .y=0x7f, .sp=0xc6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3727, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3727, .value=0x80, .type=IO_READ},
        {.addr=0x3728, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0092) {
    const struct CPU_State initial_cpu = {.pc=0x8ce9, .a=0xca, .x=0x56, .y=0xbe, .sp=0x0a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8cea, .a=0xca, .x=0x56, .y=0xbe, .sp=0x0a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8ce9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8ce9, .value=0x80, .type=IO_READ},
        {.addr=0x8cea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0093) {
    const struct CPU_State initial_cpu = {.pc=0xe588, .a=0x5c, .x=0x3e, .y=0x06, .sp=0x60, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe588, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe589, .a=0x5c, .x=0x3e, .y=0x06, .sp=0x60, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xe588, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe588, .value=0x80, .type=IO_READ},
        {.addr=0xe589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0094) {
    const struct CPU_State initial_cpu = {.pc=0xe009, .a=0xce, .x=0x2a, .y=0x0a, .sp=0xd8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xe009, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe00a, .a=0xce, .x=0x2a, .y=0x0a, .sp=0xd8, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xe009, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe009, .value=0x80, .type=IO_READ},
        {.addr=0xe00a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0095) {
    const struct CPU_State initial_cpu = {.pc=0xffc3, .a=0x4f, .x=0xcb, .y=0x83, .sp=0xf1, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xffc3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xffc4, .a=0x4f, .x=0xcb, .y=0x83, .sp=0xf1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xffc3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xffc3, .value=0x80, .type=IO_READ},
        {.addr=0xffc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2ea6, .a=0xb0, .x=0x28, .y=0xc5, .sp=0x11, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2ea7, .a=0xb0, .x=0x28, .y=0xc5, .sp=0x11, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2ea6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2ea6, .value=0x80, .type=IO_READ},
        {.addr=0x2ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0097) {
    const struct CPU_State initial_cpu = {.pc=0x015d, .a=0x24, .x=0x0b, .y=0x46, .sp=0x6f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x015e, .a=0x24, .x=0x0b, .y=0x46, .sp=0x6f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x015d, .value=0x80, .type=IO_READ},
        {.addr=0x015e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0098) {
    const struct CPU_State initial_cpu = {.pc=0x5fbe, .a=0x77, .x=0x9b, .y=0x5b, .sp=0x7f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5fbe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5fbf, .a=0x77, .x=0x9b, .y=0x5b, .sp=0x7f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5fbe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5fbe, .value=0x80, .type=IO_READ},
        {.addr=0x5fbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0099) {
    const struct CPU_State initial_cpu = {.pc=0x7b09, .a=0x3b, .x=0xcd, .y=0x77, .sp=0x00, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7b09, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7b0a, .a=0x3b, .x=0xcd, .y=0x77, .sp=0x00, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x7b09, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7b09, .value=0x80, .type=IO_READ},
        {.addr=0x7b0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009A) {
    const struct CPU_State initial_cpu = {.pc=0x0494, .a=0x23, .x=0x3f, .y=0x0c, .sp=0x9c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0494, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0495, .a=0x23, .x=0x3f, .y=0x0c, .sp=0x9c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0494, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0494, .value=0x80, .type=IO_READ},
        {.addr=0x0495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009B) {
    const struct CPU_State initial_cpu = {.pc=0x8adc, .a=0x3a, .x=0x02, .y=0x04, .sp=0x98, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8adc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8add, .a=0x3a, .x=0x02, .y=0x04, .sp=0x98, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8adc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8adc, .value=0x80, .type=IO_READ},
        {.addr=0x8add, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009C) {
    const struct CPU_State initial_cpu = {.pc=0x9ecd, .a=0x52, .x=0x0d, .y=0x06, .sp=0xbd, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9ecd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9ece, .a=0x52, .x=0x0d, .y=0x06, .sp=0xbd, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9ecd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9ecd, .value=0x80, .type=IO_READ},
        {.addr=0x9ece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009D) {
    const struct CPU_State initial_cpu = {.pc=0x91a7, .a=0x52, .x=0x69, .y=0x87, .sp=0x55, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x91a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x91a8, .a=0x52, .x=0x69, .y=0x87, .sp=0x55, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x91a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x91a7, .value=0x80, .type=IO_READ},
        {.addr=0x91a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009E) {
    const struct CPU_State initial_cpu = {.pc=0x88d4, .a=0x52, .x=0x57, .y=0x29, .sp=0xa2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x88d4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x88d5, .a=0x52, .x=0x57, .y=0x29, .sp=0xa2, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x88d4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x88d4, .value=0x80, .type=IO_READ},
        {.addr=0x88d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_009F) {
    const struct CPU_State initial_cpu = {.pc=0x49c1, .a=0x90, .x=0xf0, .y=0x12, .sp=0x44, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x49c1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x49c2, .a=0x90, .x=0xf0, .y=0x12, .sp=0x44, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x49c1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x49c1, .value=0x80, .type=IO_READ},
        {.addr=0x49c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xcd74, .a=0x8a, .x=0x8c, .y=0xda, .sp=0xbc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd74, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcd75, .a=0x8a, .x=0x8c, .y=0xda, .sp=0xbc, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xcd74, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcd74, .value=0x80, .type=IO_READ},
        {.addr=0xcd75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x0ecc, .a=0x37, .x=0xf1, .y=0x94, .sp=0x5a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0ecd, .a=0x37, .x=0xf1, .y=0x94, .sp=0x5a, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0ecc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0ecc, .value=0x80, .type=IO_READ},
        {.addr=0x0ecd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x07e6, .a=0xd5, .x=0xb8, .y=0x30, .sp=0x7a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x07e6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x07e7, .a=0xd5, .x=0xb8, .y=0x30, .sp=0x7a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x07e6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x07e6, .value=0x80, .type=IO_READ},
        {.addr=0x07e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x604a, .a=0x27, .x=0x8a, .y=0x50, .sp=0xde, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x604a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x604b, .a=0x27, .x=0x8a, .y=0x50, .sp=0xde, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x604a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x604a, .value=0x80, .type=IO_READ},
        {.addr=0x604b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x065c, .a=0x62, .x=0x40, .y=0x17, .sp=0x61, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x065c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x065d, .a=0x62, .x=0x40, .y=0x17, .sp=0x61, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x065c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x065c, .value=0x80, .type=IO_READ},
        {.addr=0x065d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xe5d5, .a=0x13, .x=0x98, .y=0x36, .sp=0xc1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe5d6, .a=0x13, .x=0x98, .y=0x36, .sp=0xc1, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe5d5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe5d5, .value=0x80, .type=IO_READ},
        {.addr=0xe5d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xbb7a, .a=0x05, .x=0x59, .y=0x47, .sp=0x31, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xbb7a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbb7b, .a=0x05, .x=0x59, .y=0x47, .sp=0x31, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbb7a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbb7a, .value=0x80, .type=IO_READ},
        {.addr=0xbb7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x33f9, .a=0x7b, .x=0x73, .y=0xdf, .sp=0x02, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x33f9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x33fa, .a=0x7b, .x=0x73, .y=0xdf, .sp=0x02, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x33f9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x33f9, .value=0x80, .type=IO_READ},
        {.addr=0x33fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xee2c, .a=0x9e, .x=0x6b, .y=0xd0, .sp=0x2f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xee2c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xee2d, .a=0x9e, .x=0x6b, .y=0xd0, .sp=0x2f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xee2c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xee2c, .value=0x80, .type=IO_READ},
        {.addr=0xee2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x7695, .a=0x51, .x=0xfd, .y=0xe7, .sp=0x41, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7695, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7696, .a=0x51, .x=0xfd, .y=0xe7, .sp=0x41, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7695, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7695, .value=0x80, .type=IO_READ},
        {.addr=0x7696, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xb9f6, .a=0x61, .x=0x43, .y=0xe1, .sp=0x6f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb9f7, .a=0x61, .x=0x43, .y=0xe1, .sp=0x6f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb9f6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb9f6, .value=0x80, .type=IO_READ},
        {.addr=0xb9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x05f1, .a=0xb0, .x=0xf3, .y=0x8a, .sp=0x67, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x05f1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x05f2, .a=0xb0, .x=0xf3, .y=0x8a, .sp=0x67, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x05f1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x05f1, .value=0x80, .type=IO_READ},
        {.addr=0x05f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x9251, .a=0xe5, .x=0x85, .y=0x18, .sp=0x5f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9251, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9252, .a=0xe5, .x=0x85, .y=0x18, .sp=0x5f, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9251, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9251, .value=0x80, .type=IO_READ},
        {.addr=0x9252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x15d6, .a=0x5f, .x=0xff, .y=0x14, .sp=0xd4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x15d6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x15d7, .a=0x5f, .x=0xff, .y=0x14, .sp=0xd4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x15d6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x15d6, .value=0x80, .type=IO_READ},
        {.addr=0x15d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x1014, .a=0xdd, .x=0x70, .y=0x9a, .sp=0x7b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1014, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1015, .a=0xdd, .x=0x70, .y=0x9a, .sp=0x7b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1014, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1014, .value=0x80, .type=IO_READ},
        {.addr=0x1015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xf3fd, .a=0x54, .x=0x8b, .y=0x39, .sp=0x79, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf3fd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf3fe, .a=0x54, .x=0x8b, .y=0x39, .sp=0x79, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xf3fd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf3fd, .value=0x80, .type=IO_READ},
        {.addr=0xf3fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x608c, .a=0xfa, .x=0x71, .y=0x2d, .sp=0xf5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x608c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x608d, .a=0xfa, .x=0x71, .y=0x2d, .sp=0xf5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x608c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x608c, .value=0x80, .type=IO_READ},
        {.addr=0x608d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x1f6e, .a=0xbc, .x=0x98, .y=0x79, .sp=0xee, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1f6e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1f6f, .a=0xbc, .x=0x98, .y=0x79, .sp=0xee, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x1f6e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1f6e, .value=0x80, .type=IO_READ},
        {.addr=0x1f6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x1592, .a=0xa5, .x=0x75, .y=0x85, .sp=0x6a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1592, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1593, .a=0xa5, .x=0x75, .y=0x85, .sp=0x6a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x1592, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1592, .value=0x80, .type=IO_READ},
        {.addr=0x1593, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7856, .a=0x34, .x=0x49, .y=0xa0, .sp=0x56, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7856, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7857, .a=0x34, .x=0x49, .y=0xa0, .sp=0x56, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7856, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7856, .value=0x80, .type=IO_READ},
        {.addr=0x7857, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xe58a, .a=0xc2, .x=0x18, .y=0xb9, .sp=0xa1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xe58a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe58b, .a=0xc2, .x=0x18, .y=0xb9, .sp=0xa1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe58a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe58a, .value=0x80, .type=IO_READ},
        {.addr=0xe58b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xbe3b, .a=0xa6, .x=0x10, .y=0x0e, .sp=0x51, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbe3c, .a=0xa6, .x=0x10, .y=0x0e, .sp=0x51, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbe3b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbe3b, .value=0x80, .type=IO_READ},
        {.addr=0xbe3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x6d8e, .a=0xcc, .x=0x4d, .y=0x74, .sp=0x13, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x6d8e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6d8f, .a=0xcc, .x=0x4d, .y=0x74, .sp=0x13, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6d8e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6d8e, .value=0x80, .type=IO_READ},
        {.addr=0x6d8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x6c5e, .a=0xad, .x=0x2f, .y=0x0c, .sp=0x5d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6c5e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6c5f, .a=0xad, .x=0x2f, .y=0x0c, .sp=0x5d, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x6c5e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6c5e, .value=0x80, .type=IO_READ},
        {.addr=0x6c5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xeb7e, .a=0xd8, .x=0x57, .y=0x2e, .sp=0xf7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xeb7e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xeb7f, .a=0xd8, .x=0x57, .y=0x2e, .sp=0xf7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeb7e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xeb7e, .value=0x80, .type=IO_READ},
        {.addr=0xeb7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x4071, .a=0x48, .x=0xb2, .y=0xbf, .sp=0xa6, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4071, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4072, .a=0x48, .x=0xb2, .y=0xbf, .sp=0xa6, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4071, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4071, .value=0x80, .type=IO_READ},
        {.addr=0x4072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x6e50, .a=0xc6, .x=0x86, .y=0xd2, .sp=0xb5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6e50, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6e51, .a=0xc6, .x=0x86, .y=0xd2, .sp=0xb5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6e50, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6e50, .value=0x80, .type=IO_READ},
        {.addr=0x6e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xe152, .a=0x3f, .x=0xd0, .y=0x57, .sp=0x21, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe152, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe153, .a=0x3f, .x=0xd0, .y=0x57, .sp=0x21, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe152, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe152, .value=0x80, .type=IO_READ},
        {.addr=0xe153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x9b63, .a=0x87, .x=0xc9, .y=0x21, .sp=0xed, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9b63, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9b64, .a=0x87, .x=0xc9, .y=0x21, .sp=0xed, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x9b63, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9b63, .value=0x80, .type=IO_READ},
        {.addr=0x9b64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x41df, .a=0x10, .x=0x6e, .y=0x81, .sp=0x63, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x41df, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x41e0, .a=0x10, .x=0x6e, .y=0x81, .sp=0x63, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x41df, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x41df, .value=0x80, .type=IO_READ},
        {.addr=0x41e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x8a78, .a=0x6e, .x=0xcd, .y=0xc3, .sp=0x56, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8a78, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8a79, .a=0x6e, .x=0xcd, .y=0xc3, .sp=0x56, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8a78, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8a78, .value=0x80, .type=IO_READ},
        {.addr=0x8a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x24dd, .a=0x35, .x=0x1c, .y=0xe4, .sp=0xf4, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x24dd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x24de, .a=0x35, .x=0x1c, .y=0xe4, .sp=0xf4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x24dd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x24dd, .value=0x80, .type=IO_READ},
        {.addr=0x24de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x0962, .a=0xec, .x=0x8f, .y=0xc8, .sp=0x33, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0962, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0963, .a=0xec, .x=0x8f, .y=0xc8, .sp=0x33, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0962, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0962, .value=0x80, .type=IO_READ},
        {.addr=0x0963, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xce64, .a=0x10, .x=0x3a, .y=0xf3, .sp=0xac, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xce64, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xce65, .a=0x10, .x=0x3a, .y=0xf3, .sp=0xac, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xce64, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xce64, .value=0x80, .type=IO_READ},
        {.addr=0xce65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xf73a, .a=0xf1, .x=0x14, .y=0x62, .sp=0x92, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf73a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf73b, .a=0xf1, .x=0x14, .y=0x62, .sp=0x92, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf73a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf73a, .value=0x80, .type=IO_READ},
        {.addr=0xf73b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6594, .a=0x44, .x=0xf1, .y=0x93, .sp=0x2e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6594, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6595, .a=0x44, .x=0xf1, .y=0x93, .sp=0x2e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6594, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6594, .value=0x80, .type=IO_READ},
        {.addr=0x6595, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xf3a9, .a=0xde, .x=0xe8, .y=0x04, .sp=0x8b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf3aa, .a=0xde, .x=0xe8, .y=0x04, .sp=0x8b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf3a9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf3a9, .value=0x80, .type=IO_READ},
        {.addr=0xf3aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x99a9, .a=0x8a, .x=0x53, .y=0x5f, .sp=0x93, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x99a9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x99aa, .a=0x8a, .x=0x53, .y=0x5f, .sp=0x93, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x99a9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x99a9, .value=0x80, .type=IO_READ},
        {.addr=0x99aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xad23, .a=0xcf, .x=0x21, .y=0x6d, .sp=0xd8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xad23, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xad24, .a=0xcf, .x=0x21, .y=0x6d, .sp=0xd8, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xad23, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xad23, .value=0x80, .type=IO_READ},
        {.addr=0xad24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb738, .a=0x20, .x=0xd2, .y=0x27, .sp=0xbc, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb738, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb739, .a=0x20, .x=0xd2, .y=0x27, .sp=0xbc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb738, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb738, .value=0x80, .type=IO_READ},
        {.addr=0xb739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xe997, .a=0x2d, .x=0x68, .y=0xd3, .sp=0x3b, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe997, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe998, .a=0x2d, .x=0x68, .y=0xd3, .sp=0x3b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xe997, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe997, .value=0x80, .type=IO_READ},
        {.addr=0xe998, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xb5cc, .a=0xa5, .x=0x6d, .y=0x84, .sp=0x16, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb5cc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb5cd, .a=0xa5, .x=0x6d, .y=0x84, .sp=0x16, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xb5cc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb5cc, .value=0x80, .type=IO_READ},
        {.addr=0xb5cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x5f9c, .a=0x6b, .x=0x01, .y=0xaa, .sp=0xbf, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f9c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5f9d, .a=0x6b, .x=0x01, .y=0xaa, .sp=0xbf, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x5f9c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5f9c, .value=0x80, .type=IO_READ},
        {.addr=0x5f9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x11ab, .a=0xa6, .x=0x5f, .y=0xbc, .sp=0xd7, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x11ab, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x11ac, .a=0xa6, .x=0x5f, .y=0xbc, .sp=0xd7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x11ab, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x11ab, .value=0x80, .type=IO_READ},
        {.addr=0x11ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x5cd3, .a=0xaf, .x=0xe9, .y=0x99, .sp=0x0f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5cd4, .a=0xaf, .x=0xe9, .y=0x99, .sp=0x0f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5cd3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5cd3, .value=0x80, .type=IO_READ},
        {.addr=0x5cd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x8e25, .a=0xc6, .x=0xba, .y=0x15, .sp=0xa9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8e25, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8e26, .a=0xc6, .x=0xba, .y=0x15, .sp=0xa9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x8e25, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8e25, .value=0x80, .type=IO_READ},
        {.addr=0x8e26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd96a, .a=0xa8, .x=0x12, .y=0x57, .sp=0x4b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd96a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd96b, .a=0xa8, .x=0x12, .y=0x57, .sp=0x4b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xd96a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd96a, .value=0x80, .type=IO_READ},
        {.addr=0xd96b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xbc41, .a=0x4c, .x=0x90, .y=0x06, .sp=0x6c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xbc41, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbc42, .a=0x4c, .x=0x90, .y=0x06, .sp=0x6c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xbc41, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbc41, .value=0x80, .type=IO_READ},
        {.addr=0xbc42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb833, .a=0x3d, .x=0x4c, .y=0xc6, .sp=0x3f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xb833, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb834, .a=0x3d, .x=0x4c, .y=0xc6, .sp=0x3f, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xb833, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb833, .value=0x80, .type=IO_READ},
        {.addr=0xb834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x633d, .a=0x83, .x=0x24, .y=0xb7, .sp=0x91, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x633d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x633e, .a=0x83, .x=0x24, .y=0xb7, .sp=0x91, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x633d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x633d, .value=0x80, .type=IO_READ},
        {.addr=0x633e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x2709, .a=0xa5, .x=0x47, .y=0x43, .sp=0x04, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2709, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x270a, .a=0xa5, .x=0x47, .y=0x43, .sp=0x04, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x2709, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2709, .value=0x80, .type=IO_READ},
        {.addr=0x270a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xf41d, .a=0xed, .x=0x80, .y=0x04, .sp=0xd8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf41d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf41e, .a=0xed, .x=0x80, .y=0x04, .sp=0xd8, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf41d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf41d, .value=0x80, .type=IO_READ},
        {.addr=0xf41e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xe8af, .a=0xcf, .x=0x2a, .y=0xa4, .sp=0x7a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe8af, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe8b0, .a=0xcf, .x=0x2a, .y=0xa4, .sp=0x7a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xe8af, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe8af, .value=0x80, .type=IO_READ},
        {.addr=0xe8b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x14d9, .a=0x76, .x=0x24, .y=0xb4, .sp=0xcc, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x14d9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x14da, .a=0x76, .x=0x24, .y=0xb4, .sp=0xcc, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x14d9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x14d9, .value=0x80, .type=IO_READ},
        {.addr=0x14da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xe838, .a=0xa3, .x=0x77, .y=0xdd, .sp=0x7b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe838, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe839, .a=0xa3, .x=0x77, .y=0xdd, .sp=0x7b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xe838, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe838, .value=0x80, .type=IO_READ},
        {.addr=0xe839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xb04a, .a=0x98, .x=0x08, .y=0xb4, .sp=0xfc, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb04a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb04b, .a=0x98, .x=0x08, .y=0xb4, .sp=0xfc, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xb04a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb04a, .value=0x80, .type=IO_READ},
        {.addr=0xb04b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x5fa7, .a=0xde, .x=0xc5, .y=0x18, .sp=0xe2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5fa8, .a=0xde, .x=0xc5, .y=0x18, .sp=0xe2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5fa7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5fa7, .value=0x80, .type=IO_READ},
        {.addr=0x5fa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x8f5d, .a=0x83, .x=0x03, .y=0x6b, .sp=0x74, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f5d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8f5e, .a=0x83, .x=0x03, .y=0x6b, .sp=0x74, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x8f5d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8f5d, .value=0x80, .type=IO_READ},
        {.addr=0x8f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xe79f, .a=0x14, .x=0x95, .y=0x78, .sp=0x68, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe79f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe7a0, .a=0x14, .x=0x95, .y=0x78, .sp=0x68, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe79f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe79f, .value=0x80, .type=IO_READ},
        {.addr=0xe7a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x7108, .a=0xfb, .x=0x21, .y=0x20, .sp=0x76, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7108, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7109, .a=0xfb, .x=0x21, .y=0x20, .sp=0x76, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x7108, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7108, .value=0x80, .type=IO_READ},
        {.addr=0x7109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x2e82, .a=0x59, .x=0x81, .y=0x64, .sp=0x9a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2e82, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2e83, .a=0x59, .x=0x81, .y=0x64, .sp=0x9a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2e82, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2e82, .value=0x80, .type=IO_READ},
        {.addr=0x2e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x3258, .a=0xe5, .x=0x3b, .y=0xc6, .sp=0x37, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3258, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3259, .a=0xe5, .x=0x3b, .y=0xc6, .sp=0x37, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3258, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3258, .value=0x80, .type=IO_READ},
        {.addr=0x3259, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x49d3, .a=0x90, .x=0x65, .y=0x43, .sp=0x3c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x49d3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x49d4, .a=0x90, .x=0x65, .y=0x43, .sp=0x3c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x49d3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x49d3, .value=0x80, .type=IO_READ},
        {.addr=0x49d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xe0ca, .a=0x97, .x=0xee, .y=0x77, .sp=0xa1, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ca, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe0cb, .a=0x97, .x=0xee, .y=0x77, .sp=0xa1, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xe0ca, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe0ca, .value=0x80, .type=IO_READ},
        {.addr=0xe0cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x494b, .a=0x5d, .x=0xca, .y=0xa2, .sp=0xdb, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x494b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x494c, .a=0x5d, .x=0xca, .y=0xa2, .sp=0xdb, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x494b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x494b, .value=0x80, .type=IO_READ},
        {.addr=0x494c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x4d56, .a=0x28, .x=0x34, .y=0x7b, .sp=0x37, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d56, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d57, .a=0x28, .x=0x34, .y=0x7b, .sp=0x37, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4d56, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d56, .value=0x80, .type=IO_READ},
        {.addr=0x4d57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x3082, .a=0xce, .x=0x6d, .y=0xe6, .sp=0x89, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3082, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3083, .a=0xce, .x=0x6d, .y=0xe6, .sp=0x89, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3082, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3082, .value=0x80, .type=IO_READ},
        {.addr=0x3083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x51f3, .a=0xeb, .x=0x84, .y=0x27, .sp=0x72, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x51f3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x51f4, .a=0xeb, .x=0x84, .y=0x27, .sp=0x72, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x51f3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x51f3, .value=0x80, .type=IO_READ},
        {.addr=0x51f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xf87e, .a=0xb2, .x=0xb2, .y=0x1f, .sp=0xb4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xf87e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf87f, .a=0xb2, .x=0xb2, .y=0x1f, .sp=0xb4, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xf87e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf87e, .value=0x80, .type=IO_READ},
        {.addr=0xf87f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x19a7, .a=0x7f, .x=0xd4, .y=0x18, .sp=0x3b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x19a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x19a8, .a=0x7f, .x=0xd4, .y=0x18, .sp=0x3b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x19a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x19a7, .value=0x80, .type=IO_READ},
        {.addr=0x19a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x84d7, .a=0x1b, .x=0x2a, .y=0xf2, .sp=0xd2, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x84d7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x84d8, .a=0x1b, .x=0x2a, .y=0xf2, .sp=0xd2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x84d7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x84d7, .value=0x80, .type=IO_READ},
        {.addr=0x84d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x4b97, .a=0x0e, .x=0x86, .y=0x85, .sp=0x21, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4b97, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4b98, .a=0x0e, .x=0x86, .y=0x85, .sp=0x21, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4b97, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4b97, .value=0x80, .type=IO_READ},
        {.addr=0x4b98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x1f56, .a=0xca, .x=0x74, .y=0xc5, .sp=0xd1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1f56, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1f57, .a=0xca, .x=0x74, .y=0xc5, .sp=0xd1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1f56, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1f56, .value=0x80, .type=IO_READ},
        {.addr=0x1f57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x2961, .a=0xd1, .x=0xd5, .y=0xdc, .sp=0x52, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2961, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2962, .a=0xd1, .x=0xd5, .y=0xdc, .sp=0x52, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x2961, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2961, .value=0x80, .type=IO_READ},
        {.addr=0x2962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x2444, .a=0x42, .x=0xaa, .y=0x6c, .sp=0xb5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2444, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2445, .a=0x42, .x=0xaa, .y=0x6c, .sp=0xb5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2444, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2444, .value=0x80, .type=IO_READ},
        {.addr=0x2445, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x769e, .a=0xc8, .x=0x7b, .y=0xbf, .sp=0xf0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x769e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x769f, .a=0xc8, .x=0x7b, .y=0xbf, .sp=0xf0, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x769e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x769e, .value=0x80, .type=IO_READ},
        {.addr=0x769f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x5a47, .a=0xb3, .x=0x0b, .y=0xed, .sp=0x56, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5a47, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5a48, .a=0xb3, .x=0x0b, .y=0xed, .sp=0x56, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x5a47, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5a47, .value=0x80, .type=IO_READ},
        {.addr=0x5a48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x41a8, .a=0x6d, .x=0x2c, .y=0x28, .sp=0x17, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x41a8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x41a9, .a=0x6d, .x=0x2c, .y=0x28, .sp=0x17, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x41a8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x41a8, .value=0x80, .type=IO_READ},
        {.addr=0x41a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x1e6a, .a=0xd4, .x=0x7e, .y=0x9d, .sp=0x1c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e6a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1e6b, .a=0xd4, .x=0x7e, .y=0x9d, .sp=0x1c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1e6a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e6a, .value=0x80, .type=IO_READ},
        {.addr=0x1e6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x911d, .a=0x2c, .x=0x87, .y=0x5e, .sp=0x23, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x911d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x911e, .a=0x2c, .x=0x87, .y=0x5e, .sp=0x23, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x911d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x911d, .value=0x80, .type=IO_READ},
        {.addr=0x911e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xa220, .a=0xbd, .x=0xf5, .y=0x08, .sp=0xaa, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xa220, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa221, .a=0xbd, .x=0xf5, .y=0x08, .sp=0xaa, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xa220, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa220, .value=0x80, .type=IO_READ},
        {.addr=0xa221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0x9b, .x=0x6f, .y=0x5b, .sp=0x8a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x85ef, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x85f0, .a=0x9b, .x=0x6f, .y=0x5b, .sp=0x8a, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x85ef, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0x80, .type=IO_READ},
        {.addr=0x85f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x4d8a, .a=0x9d, .x=0x3b, .y=0x75, .sp=0x21, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d8b, .a=0x9d, .x=0x3b, .y=0x75, .sp=0x21, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4d8a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d8a, .value=0x80, .type=IO_READ},
        {.addr=0x4d8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xb023, .a=0x51, .x=0x2e, .y=0xaf, .sp=0x9c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb023, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb024, .a=0x51, .x=0x2e, .y=0xaf, .sp=0x9c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb023, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb023, .value=0x80, .type=IO_READ},
        {.addr=0xb024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x25b4, .a=0x03, .x=0x04, .y=0x91, .sp=0x38, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x25b4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x25b5, .a=0x03, .x=0x04, .y=0x91, .sp=0x38, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x25b4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x25b4, .value=0x80, .type=IO_READ},
        {.addr=0x25b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xc8bb, .a=0xcd, .x=0x76, .y=0xd9, .sp=0xd5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc8bb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc8bc, .a=0xcd, .x=0x76, .y=0xd9, .sp=0xd5, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xc8bb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc8bb, .value=0x80, .type=IO_READ},
        {.addr=0xc8bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x9eed, .a=0xef, .x=0x1d, .y=0x14, .sp=0x56, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9eed, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9eee, .a=0xef, .x=0x1d, .y=0x14, .sp=0x56, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9eed, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9eed, .value=0x80, .type=IO_READ},
        {.addr=0x9eee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xc6b3, .a=0x0e, .x=0x0c, .y=0xf7, .sp=0xa7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc6b3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc6b4, .a=0x0e, .x=0x0c, .y=0xf7, .sp=0xa7, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xc6b3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc6b3, .value=0x80, .type=IO_READ},
        {.addr=0xc6b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8834, .a=0xb9, .x=0xc3, .y=0xc7, .sp=0x5c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8834, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8835, .a=0xb9, .x=0xc3, .y=0xc7, .sp=0x5c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8834, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8834, .value=0x80, .type=IO_READ},
        {.addr=0x8835, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x5795, .a=0x2f, .x=0x43, .y=0xb3, .sp=0x55, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5795, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5796, .a=0x2f, .x=0x43, .y=0xb3, .sp=0x55, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x5795, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5795, .value=0x80, .type=IO_READ},
        {.addr=0x5796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x67bd, .a=0xbf, .x=0xaf, .y=0x64, .sp=0x3d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x67bd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x67be, .a=0xbf, .x=0xaf, .y=0x64, .sp=0x3d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x67bd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x67bd, .value=0x80, .type=IO_READ},
        {.addr=0x67be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x4be1, .a=0x56, .x=0xe4, .y=0x21, .sp=0x23, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4be1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4be2, .a=0x56, .x=0xe4, .y=0x21, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4be1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4be1, .value=0x80, .type=IO_READ},
        {.addr=0x4be2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xea04, .a=0x98, .x=0xe7, .y=0x45, .sp=0xf1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xea04, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xea05, .a=0x98, .x=0xe7, .y=0x45, .sp=0xf1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xea04, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xea04, .value=0x80, .type=IO_READ},
        {.addr=0xea05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x911f, .a=0xd1, .x=0xa4, .y=0x5d, .sp=0xb4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x911f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9120, .a=0xd1, .x=0xa4, .y=0x5d, .sp=0xb4, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x911f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x911f, .value=0x80, .type=IO_READ},
        {.addr=0x9120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xa91d, .a=0xad, .x=0x1a, .y=0xf0, .sp=0x34, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa91d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa91e, .a=0xad, .x=0x1a, .y=0xf0, .sp=0x34, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa91d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa91d, .value=0x80, .type=IO_READ},
        {.addr=0xa91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x74dc, .a=0xe8, .x=0x7d, .y=0xe6, .sp=0x46, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x74dc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x74dd, .a=0xe8, .x=0x7d, .y=0xe6, .sp=0x46, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x74dc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x74dc, .value=0x80, .type=IO_READ},
        {.addr=0x74dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0100) {
    const struct CPU_State initial_cpu = {.pc=0x9915, .a=0x5f, .x=0x3f, .y=0xf7, .sp=0x5c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9915, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9916, .a=0x5f, .x=0x3f, .y=0xf7, .sp=0x5c, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x9915, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9915, .value=0x80, .type=IO_READ},
        {.addr=0x9916, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0101) {
    const struct CPU_State initial_cpu = {.pc=0x293c, .a=0x9d, .x=0xc4, .y=0x76, .sp=0x67, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x293c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x293d, .a=0x9d, .x=0xc4, .y=0x76, .sp=0x67, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x293c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x293c, .value=0x80, .type=IO_READ},
        {.addr=0x293d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0102) {
    const struct CPU_State initial_cpu = {.pc=0x69bb, .a=0x75, .x=0x50, .y=0xa8, .sp=0x26, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x69bb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x69bc, .a=0x75, .x=0x50, .y=0xa8, .sp=0x26, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x69bb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x69bb, .value=0x80, .type=IO_READ},
        {.addr=0x69bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0103) {
    const struct CPU_State initial_cpu = {.pc=0x4cbc, .a=0x94, .x=0xbe, .y=0x9d, .sp=0xb6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x4cbc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4cbd, .a=0x94, .x=0xbe, .y=0x9d, .sp=0xb6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4cbc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4cbc, .value=0x80, .type=IO_READ},
        {.addr=0x4cbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0104) {
    const struct CPU_State initial_cpu = {.pc=0xfeb4, .a=0xc1, .x=0xed, .y=0xf6, .sp=0x07, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xfeb4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfeb5, .a=0xc1, .x=0xed, .y=0xf6, .sp=0x07, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xfeb4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfeb4, .value=0x80, .type=IO_READ},
        {.addr=0xfeb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0b61, .a=0xab, .x=0xfd, .y=0x3a, .sp=0x70, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0b61, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0b62, .a=0xab, .x=0xfd, .y=0x3a, .sp=0x70, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0b61, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0b61, .value=0x80, .type=IO_READ},
        {.addr=0x0b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0106) {
    const struct CPU_State initial_cpu = {.pc=0x3b5f, .a=0xcb, .x=0x37, .y=0x7c, .sp=0xf9, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3b5f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3b60, .a=0xcb, .x=0x37, .y=0x7c, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3b5f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3b5f, .value=0x80, .type=IO_READ},
        {.addr=0x3b60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0107) {
    const struct CPU_State initial_cpu = {.pc=0xb8c0, .a=0x91, .x=0xdf, .y=0xb7, .sp=0x40, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb8c1, .a=0x91, .x=0xdf, .y=0xb7, .sp=0x40, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb8c0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb8c0, .value=0x80, .type=IO_READ},
        {.addr=0xb8c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0108) {
    const struct CPU_State initial_cpu = {.pc=0xca6a, .a=0xe5, .x=0xeb, .y=0x64, .sp=0xfa, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xca6a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xca6b, .a=0xe5, .x=0xeb, .y=0x64, .sp=0xfa, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xca6a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xca6a, .value=0x80, .type=IO_READ},
        {.addr=0xca6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0109) {
    const struct CPU_State initial_cpu = {.pc=0x9257, .a=0x22, .x=0x33, .y=0xa7, .sp=0x7d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9257, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9258, .a=0x22, .x=0x33, .y=0xa7, .sp=0x7d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9257, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9257, .value=0x80, .type=IO_READ},
        {.addr=0x9258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010A) {
    const struct CPU_State initial_cpu = {.pc=0x1f1c, .a=0x01, .x=0x5d, .y=0x1c, .sp=0x31, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1f1c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1f1d, .a=0x01, .x=0x5d, .y=0x1c, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1f1c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1f1c, .value=0x80, .type=IO_READ},
        {.addr=0x1f1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010B) {
    const struct CPU_State initial_cpu = {.pc=0xd9aa, .a=0x87, .x=0xa4, .y=0x1e, .sp=0x81, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd9aa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd9ab, .a=0x87, .x=0xa4, .y=0x1e, .sp=0x81, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xd9aa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd9aa, .value=0x80, .type=IO_READ},
        {.addr=0xd9ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010C) {
    const struct CPU_State initial_cpu = {.pc=0x76b8, .a=0x8c, .x=0x55, .y=0x17, .sp=0xf7, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x76b8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x76b9, .a=0x8c, .x=0x55, .y=0x17, .sp=0xf7, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x76b8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x76b8, .value=0x80, .type=IO_READ},
        {.addr=0x76b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010D) {
    const struct CPU_State initial_cpu = {.pc=0xb3bd, .a=0xeb, .x=0x1e, .y=0xd3, .sp=0xc7, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb3bd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb3be, .a=0xeb, .x=0x1e, .y=0xd3, .sp=0xc7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb3bd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb3bd, .value=0x80, .type=IO_READ},
        {.addr=0xb3be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010E) {
    const struct CPU_State initial_cpu = {.pc=0x0fcc, .a=0x34, .x=0x9f, .y=0xee, .sp=0xf2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0fcc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0fcd, .a=0x34, .x=0x9f, .y=0xee, .sp=0xf2, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0fcc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0fcc, .value=0x80, .type=IO_READ},
        {.addr=0x0fcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_010F) {
    const struct CPU_State initial_cpu = {.pc=0xb523, .a=0x52, .x=0x12, .y=0x78, .sp=0xb5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb523, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb524, .a=0x52, .x=0x12, .y=0x78, .sp=0xb5, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xb523, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb523, .value=0x80, .type=IO_READ},
        {.addr=0xb524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0110) {
    const struct CPU_State initial_cpu = {.pc=0x17c7, .a=0xa5, .x=0x93, .y=0xac, .sp=0x71, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x17c7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x17c8, .a=0xa5, .x=0x93, .y=0xac, .sp=0x71, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x17c7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x17c7, .value=0x80, .type=IO_READ},
        {.addr=0x17c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0111) {
    const struct CPU_State initial_cpu = {.pc=0xc54a, .a=0x70, .x=0x3b, .y=0xe5, .sp=0x87, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xc54a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc54b, .a=0x70, .x=0x3b, .y=0xe5, .sp=0x87, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xc54a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc54a, .value=0x80, .type=IO_READ},
        {.addr=0xc54b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0112) {
    const struct CPU_State initial_cpu = {.pc=0x34b3, .a=0xc1, .x=0x3f, .y=0x99, .sp=0x7e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x34b3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x34b4, .a=0xc1, .x=0x3f, .y=0x99, .sp=0x7e, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x34b3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x34b3, .value=0x80, .type=IO_READ},
        {.addr=0x34b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0113) {
    const struct CPU_State initial_cpu = {.pc=0x71ad, .a=0xc3, .x=0x31, .y=0xfe, .sp=0xae, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x71ad, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x71ae, .a=0xc3, .x=0x31, .y=0xfe, .sp=0xae, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x71ad, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x71ad, .value=0x80, .type=IO_READ},
        {.addr=0x71ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0114) {
    const struct CPU_State initial_cpu = {.pc=0x9edf, .a=0x16, .x=0x04, .y=0x95, .sp=0x32, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9edf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9ee0, .a=0x16, .x=0x04, .y=0x95, .sp=0x32, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x9edf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9edf, .value=0x80, .type=IO_READ},
        {.addr=0x9ee0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0115) {
    const struct CPU_State initial_cpu = {.pc=0x110f, .a=0x63, .x=0xf4, .y=0x9c, .sp=0x94, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x110f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1110, .a=0x63, .x=0xf4, .y=0x9c, .sp=0x94, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x110f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x110f, .value=0x80, .type=IO_READ},
        {.addr=0x1110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0116) {
    const struct CPU_State initial_cpu = {.pc=0x2fdb, .a=0xc4, .x=0x4a, .y=0x2f, .sp=0x15, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2fdb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2fdc, .a=0xc4, .x=0x4a, .y=0x2f, .sp=0x15, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2fdb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2fdb, .value=0x80, .type=IO_READ},
        {.addr=0x2fdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0117) {
    const struct CPU_State initial_cpu = {.pc=0x586d, .a=0xdf, .x=0x49, .y=0xc4, .sp=0x39, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x586d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x586e, .a=0xdf, .x=0x49, .y=0xc4, .sp=0x39, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x586d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x586d, .value=0x80, .type=IO_READ},
        {.addr=0x586e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0118) {
    const struct CPU_State initial_cpu = {.pc=0xd00b, .a=0xc6, .x=0x21, .y=0x09, .sp=0x6b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xd00b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd00c, .a=0xc6, .x=0x21, .y=0x09, .sp=0x6b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xd00b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd00b, .value=0x80, .type=IO_READ},
        {.addr=0xd00c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0119) {
    const struct CPU_State initial_cpu = {.pc=0x5a55, .a=0x12, .x=0x87, .y=0x68, .sp=0xe8, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5a55, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5a56, .a=0x12, .x=0x87, .y=0x68, .sp=0xe8, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x5a55, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5a55, .value=0x80, .type=IO_READ},
        {.addr=0x5a56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011A) {
    const struct CPU_State initial_cpu = {.pc=0x9c9c, .a=0xb0, .x=0x7a, .y=0x2a, .sp=0x0d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9c9d, .a=0xb0, .x=0x7a, .y=0x2a, .sp=0x0d, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x9c9c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9c9c, .value=0x80, .type=IO_READ},
        {.addr=0x9c9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011B) {
    const struct CPU_State initial_cpu = {.pc=0xefe7, .a=0xac, .x=0xff, .y=0xed, .sp=0x67, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xefe7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xefe8, .a=0xac, .x=0xff, .y=0xed, .sp=0x67, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xefe7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xefe7, .value=0x80, .type=IO_READ},
        {.addr=0xefe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011C) {
    const struct CPU_State initial_cpu = {.pc=0xd503, .a=0xe0, .x=0x09, .y=0xe3, .sp=0xe7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd503, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd504, .a=0xe0, .x=0x09, .y=0xe3, .sp=0xe7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd503, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd503, .value=0x80, .type=IO_READ},
        {.addr=0xd504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011D) {
    const struct CPU_State initial_cpu = {.pc=0x5e5f, .a=0x59, .x=0x59, .y=0xec, .sp=0x4e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5e60, .a=0x59, .x=0x59, .y=0xec, .sp=0x4e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5e5f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5e5f, .value=0x80, .type=IO_READ},
        {.addr=0x5e60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011E) {
    const struct CPU_State initial_cpu = {.pc=0xf7e6, .a=0x0b, .x=0xb5, .y=0xac, .sp=0x82, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf7e7, .a=0x0b, .x=0xb5, .y=0xac, .sp=0x82, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xf7e6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf7e6, .value=0x80, .type=IO_READ},
        {.addr=0xf7e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_011F) {
    const struct CPU_State initial_cpu = {.pc=0xdf73, .a=0x7c, .x=0xe7, .y=0x3b, .sp=0xb4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xdf73, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdf74, .a=0x7c, .x=0xe7, .y=0x3b, .sp=0xb4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdf73, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdf73, .value=0x80, .type=IO_READ},
        {.addr=0xdf74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0120) {
    const struct CPU_State initial_cpu = {.pc=0x71f3, .a=0x08, .x=0x5d, .y=0xa4, .sp=0xd2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x71f3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x71f4, .a=0x08, .x=0x5d, .y=0xa4, .sp=0xd2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x71f3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x71f3, .value=0x80, .type=IO_READ},
        {.addr=0x71f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0121) {
    const struct CPU_State initial_cpu = {.pc=0xd24f, .a=0x08, .x=0xf5, .y=0x9b, .sp=0x47, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd24f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd250, .a=0x08, .x=0xf5, .y=0x9b, .sp=0x47, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd24f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd24f, .value=0x80, .type=IO_READ},
        {.addr=0xd250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0122) {
    const struct CPU_State initial_cpu = {.pc=0x57ea, .a=0xd7, .x=0xd3, .y=0x64, .sp=0xa9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x57ea, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x57eb, .a=0xd7, .x=0xd3, .y=0x64, .sp=0xa9, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x57ea, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x57ea, .value=0x80, .type=IO_READ},
        {.addr=0x57eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0123) {
    const struct CPU_State initial_cpu = {.pc=0xa2b2, .a=0xe2, .x=0x05, .y=0x39, .sp=0x58, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa2b2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa2b3, .a=0xe2, .x=0x05, .y=0x39, .sp=0x58, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa2b2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa2b2, .value=0x80, .type=IO_READ},
        {.addr=0xa2b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0124) {
    const struct CPU_State initial_cpu = {.pc=0xbba5, .a=0x3c, .x=0x7f, .y=0xb6, .sp=0x90, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xbba5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbba6, .a=0x3c, .x=0x7f, .y=0xb6, .sp=0x90, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xbba5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbba5, .value=0x80, .type=IO_READ},
        {.addr=0xbba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4d35, .a=0x51, .x=0xe6, .y=0x1d, .sp=0x09, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4d35, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d36, .a=0x51, .x=0xe6, .y=0x1d, .sp=0x09, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x4d35, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d35, .value=0x80, .type=IO_READ},
        {.addr=0x4d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0126) {
    const struct CPU_State initial_cpu = {.pc=0x317f, .a=0x10, .x=0x63, .y=0xa1, .sp=0xcd, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x317f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3180, .a=0x10, .x=0x63, .y=0xa1, .sp=0xcd, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x317f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x317f, .value=0x80, .type=IO_READ},
        {.addr=0x3180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0127) {
    const struct CPU_State initial_cpu = {.pc=0x3beb, .a=0x9c, .x=0xdf, .y=0x44, .sp=0xbc, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3beb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3bec, .a=0x9c, .x=0xdf, .y=0x44, .sp=0xbc, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x3beb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3beb, .value=0x80, .type=IO_READ},
        {.addr=0x3bec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0128) {
    const struct CPU_State initial_cpu = {.pc=0xd7b5, .a=0x10, .x=0xcb, .y=0x82, .sp=0x8e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd7b6, .a=0x10, .x=0xcb, .y=0x82, .sp=0x8e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd7b5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd7b5, .value=0x80, .type=IO_READ},
        {.addr=0xd7b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0129) {
    const struct CPU_State initial_cpu = {.pc=0x1a2c, .a=0x82, .x=0x26, .y=0x65, .sp=0xcb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1a2c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1a2d, .a=0x82, .x=0x26, .y=0x65, .sp=0xcb, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x1a2c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1a2c, .value=0x80, .type=IO_READ},
        {.addr=0x1a2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012A) {
    const struct CPU_State initial_cpu = {.pc=0x4d8c, .a=0x91, .x=0x2d, .y=0x51, .sp=0x98, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d8d, .a=0x91, .x=0x2d, .y=0x51, .sp=0x98, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4d8c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d8c, .value=0x80, .type=IO_READ},
        {.addr=0x4d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012B) {
    const struct CPU_State initial_cpu = {.pc=0x5797, .a=0xb5, .x=0x83, .y=0x00, .sp=0xa4, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5797, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5798, .a=0xb5, .x=0x83, .y=0x00, .sp=0xa4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5797, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5797, .value=0x80, .type=IO_READ},
        {.addr=0x5798, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1b3a, .a=0xe4, .x=0x6f, .y=0x2e, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b3a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1b3b, .a=0xe4, .x=0x6f, .y=0x2e, .sp=0x36, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1b3a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1b3a, .value=0x80, .type=IO_READ},
        {.addr=0x1b3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012D) {
    const struct CPU_State initial_cpu = {.pc=0xf166, .a=0x08, .x=0xb6, .y=0xe2, .sp=0x94, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf166, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf167, .a=0x08, .x=0xb6, .y=0xe2, .sp=0x94, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf166, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf166, .value=0x80, .type=IO_READ},
        {.addr=0xf167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012E) {
    const struct CPU_State initial_cpu = {.pc=0x7bd0, .a=0xcd, .x=0x52, .y=0xbc, .sp=0x02, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7bd1, .a=0xcd, .x=0x52, .y=0xbc, .sp=0x02, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7bd0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7bd0, .value=0x80, .type=IO_READ},
        {.addr=0x7bd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_012F) {
    const struct CPU_State initial_cpu = {.pc=0x6380, .a=0xfd, .x=0x7d, .y=0x5b, .sp=0x5d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6380, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6381, .a=0xfd, .x=0x7d, .y=0x5b, .sp=0x5d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6380, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6380, .value=0x80, .type=IO_READ},
        {.addr=0x6381, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0130) {
    const struct CPU_State initial_cpu = {.pc=0x711a, .a=0x0d, .x=0x35, .y=0x25, .sp=0x48, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x711a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x711b, .a=0x0d, .x=0x35, .y=0x25, .sp=0x48, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x711a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x711a, .value=0x80, .type=IO_READ},
        {.addr=0x711b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0131) {
    const struct CPU_State initial_cpu = {.pc=0xf205, .a=0x56, .x=0x64, .y=0x66, .sp=0x75, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf205, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf206, .a=0x56, .x=0x64, .y=0x66, .sp=0x75, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xf205, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf205, .value=0x80, .type=IO_READ},
        {.addr=0xf206, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0132) {
    const struct CPU_State initial_cpu = {.pc=0x35ca, .a=0xd6, .x=0x9d, .y=0x7a, .sp=0x07, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x35ca, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x35cb, .a=0xd6, .x=0x9d, .y=0x7a, .sp=0x07, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x35ca, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x35ca, .value=0x80, .type=IO_READ},
        {.addr=0x35cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0133) {
    const struct CPU_State initial_cpu = {.pc=0xd032, .a=0x3f, .x=0xd2, .y=0xef, .sp=0xa1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd032, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd033, .a=0x3f, .x=0xd2, .y=0xef, .sp=0xa1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd032, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd032, .value=0x80, .type=IO_READ},
        {.addr=0xd033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0134) {
    const struct CPU_State initial_cpu = {.pc=0x75da, .a=0x2b, .x=0x2b, .y=0xd7, .sp=0x69, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x75da, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x75db, .a=0x2b, .x=0x2b, .y=0xd7, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x75da, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x75da, .value=0x80, .type=IO_READ},
        {.addr=0x75db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0135) {
    const struct CPU_State initial_cpu = {.pc=0x3edf, .a=0x3b, .x=0x56, .y=0xe7, .sp=0xf2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3edf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3ee0, .a=0x3b, .x=0x56, .y=0xe7, .sp=0xf2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3edf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3edf, .value=0x80, .type=IO_READ},
        {.addr=0x3ee0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0136) {
    const struct CPU_State initial_cpu = {.pc=0xd151, .a=0x73, .x=0xff, .y=0x37, .sp=0xf4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd151, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd152, .a=0x73, .x=0xff, .y=0x37, .sp=0xf4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd151, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd151, .value=0x80, .type=IO_READ},
        {.addr=0xd152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0137) {
    const struct CPU_State initial_cpu = {.pc=0xf7c3, .a=0x1c, .x=0x1d, .y=0xf2, .sp=0x48, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf7c4, .a=0x1c, .x=0x1d, .y=0xf2, .sp=0x48, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf7c3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf7c3, .value=0x80, .type=IO_READ},
        {.addr=0xf7c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0138) {
    const struct CPU_State initial_cpu = {.pc=0x12cd, .a=0xa9, .x=0x83, .y=0x40, .sp=0x80, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x12cd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x12ce, .a=0xa9, .x=0x83, .y=0x40, .sp=0x80, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x12cd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x12cd, .value=0x80, .type=IO_READ},
        {.addr=0x12ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe704, .a=0x78, .x=0xbd, .y=0x66, .sp=0x5d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xe704, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe705, .a=0x78, .x=0xbd, .y=0x66, .sp=0x5d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe704, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe704, .value=0x80, .type=IO_READ},
        {.addr=0xe705, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013A) {
    const struct CPU_State initial_cpu = {.pc=0x5353, .a=0xec, .x=0xde, .y=0xdf, .sp=0xa6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x5353, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5354, .a=0xec, .x=0xde, .y=0xdf, .sp=0xa6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5353, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5353, .value=0x80, .type=IO_READ},
        {.addr=0x5354, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013B) {
    const struct CPU_State initial_cpu = {.pc=0xb1d8, .a=0xac, .x=0xeb, .y=0xce, .sp=0x68, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb1d9, .a=0xac, .x=0xeb, .y=0xce, .sp=0x68, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xb1d8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb1d8, .value=0x80, .type=IO_READ},
        {.addr=0xb1d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013C) {
    const struct CPU_State initial_cpu = {.pc=0x077a, .a=0x58, .x=0xac, .y=0x26, .sp=0xad, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x077a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x077b, .a=0x58, .x=0xac, .y=0x26, .sp=0xad, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x077a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x077a, .value=0x80, .type=IO_READ},
        {.addr=0x077b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013D) {
    const struct CPU_State initial_cpu = {.pc=0xb325, .a=0x71, .x=0x7b, .y=0x00, .sp=0xe6, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb325, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb326, .a=0x71, .x=0x7b, .y=0x00, .sp=0xe6, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xb325, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb325, .value=0x80, .type=IO_READ},
        {.addr=0xb326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013E) {
    const struct CPU_State initial_cpu = {.pc=0x59fb, .a=0xc3, .x=0x68, .y=0x40, .sp=0x75, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x59fb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x59fc, .a=0xc3, .x=0x68, .y=0x40, .sp=0x75, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x59fb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x59fb, .value=0x80, .type=IO_READ},
        {.addr=0x59fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_013F) {
    const struct CPU_State initial_cpu = {.pc=0xe156, .a=0xa3, .x=0x43, .y=0x05, .sp=0xc7, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe156, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe157, .a=0xa3, .x=0x43, .y=0x05, .sp=0xc7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xe156, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe156, .value=0x80, .type=IO_READ},
        {.addr=0xe157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5dfe, .a=0x17, .x=0x50, .y=0x57, .sp=0x79, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5dfe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5dff, .a=0x17, .x=0x50, .y=0x57, .sp=0x79, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5dfe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5dfe, .value=0x80, .type=IO_READ},
        {.addr=0x5dff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0141) {
    const struct CPU_State initial_cpu = {.pc=0x86a0, .a=0x4d, .x=0x86, .y=0xb6, .sp=0x7b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x86a0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x86a1, .a=0x4d, .x=0x86, .y=0xb6, .sp=0x7b, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x86a0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x86a0, .value=0x80, .type=IO_READ},
        {.addr=0x86a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0142) {
    const struct CPU_State initial_cpu = {.pc=0x78e2, .a=0xbe, .x=0xa5, .y=0x67, .sp=0xb7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x78e2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x78e3, .a=0xbe, .x=0xa5, .y=0x67, .sp=0xb7, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x78e2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x78e2, .value=0x80, .type=IO_READ},
        {.addr=0x78e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0143) {
    const struct CPU_State initial_cpu = {.pc=0x740a, .a=0xd1, .x=0xc7, .y=0x2b, .sp=0xa5, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x740a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x740b, .a=0xd1, .x=0xc7, .y=0x2b, .sp=0xa5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x740a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x740a, .value=0x80, .type=IO_READ},
        {.addr=0x740b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0144) {
    const struct CPU_State initial_cpu = {.pc=0x2d4d, .a=0x2d, .x=0x0f, .y=0x50, .sp=0xbe, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2d4e, .a=0x2d, .x=0x0f, .y=0x50, .sp=0xbe, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2d4d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2d4d, .value=0x80, .type=IO_READ},
        {.addr=0x2d4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0145) {
    const struct CPU_State initial_cpu = {.pc=0xc91e, .a=0xbf, .x=0xb0, .y=0x03, .sp=0x6d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc91e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc91f, .a=0xbf, .x=0xb0, .y=0x03, .sp=0x6d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc91e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc91e, .value=0x80, .type=IO_READ},
        {.addr=0xc91f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0146) {
    const struct CPU_State initial_cpu = {.pc=0x9414, .a=0x6c, .x=0x9a, .y=0x7f, .sp=0xbe, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9414, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9415, .a=0x6c, .x=0x9a, .y=0x7f, .sp=0xbe, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9414, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9414, .value=0x80, .type=IO_READ},
        {.addr=0x9415, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0147) {
    const struct CPU_State initial_cpu = {.pc=0x6dd1, .a=0xfa, .x=0xc5, .y=0x4c, .sp=0x03, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6dd2, .a=0xfa, .x=0xc5, .y=0x4c, .sp=0x03, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x6dd1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6dd1, .value=0x80, .type=IO_READ},
        {.addr=0x6dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0148) {
    const struct CPU_State initial_cpu = {.pc=0x0f57, .a=0xc4, .x=0x51, .y=0xc7, .sp=0xd0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0f57, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0f58, .a=0xc4, .x=0x51, .y=0xc7, .sp=0xd0, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0f57, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0f57, .value=0x80, .type=IO_READ},
        {.addr=0x0f58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0149) {
    const struct CPU_State initial_cpu = {.pc=0x16f3, .a=0x0a, .x=0x83, .y=0x5b, .sp=0xd5, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x16f3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x16f4, .a=0x0a, .x=0x83, .y=0x5b, .sp=0xd5, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x16f3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x16f3, .value=0x80, .type=IO_READ},
        {.addr=0x16f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014A) {
    const struct CPU_State initial_cpu = {.pc=0x6908, .a=0x77, .x=0xa2, .y=0x75, .sp=0x53, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6908, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6909, .a=0x77, .x=0xa2, .y=0x75, .sp=0x53, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x6908, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6908, .value=0x80, .type=IO_READ},
        {.addr=0x6909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014B) {
    const struct CPU_State initial_cpu = {.pc=0x3b61, .a=0x3e, .x=0x1a, .y=0xcb, .sp=0xd0, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3b61, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3b62, .a=0x3e, .x=0x1a, .y=0xcb, .sp=0xd0, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x3b61, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3b61, .value=0x80, .type=IO_READ},
        {.addr=0x3b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2dc5, .a=0xa7, .x=0x33, .y=0x48, .sp=0x65, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2dc6, .a=0xa7, .x=0x33, .y=0x48, .sp=0x65, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2dc5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2dc5, .value=0x80, .type=IO_READ},
        {.addr=0x2dc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014D) {
    const struct CPU_State initial_cpu = {.pc=0x785a, .a=0xa8, .x=0x79, .y=0xcc, .sp=0x35, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x785a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x785b, .a=0xa8, .x=0x79, .y=0xcc, .sp=0x35, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x785a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x785a, .value=0x80, .type=IO_READ},
        {.addr=0x785b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014E) {
    const struct CPU_State initial_cpu = {.pc=0xfae7, .a=0x6f, .x=0x5e, .y=0x7f, .sp=0x62, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xfae7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfae8, .a=0x6f, .x=0x5e, .y=0x7f, .sp=0x62, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xfae7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfae7, .value=0x80, .type=IO_READ},
        {.addr=0xfae8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_014F) {
    const struct CPU_State initial_cpu = {.pc=0x1d2e, .a=0x0a, .x=0x84, .y=0xbd, .sp=0x01, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1d2e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1d2f, .a=0x0a, .x=0x84, .y=0xbd, .sp=0x01, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1d2e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1d2e, .value=0x80, .type=IO_READ},
        {.addr=0x1d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0150) {
    const struct CPU_State initial_cpu = {.pc=0xf55a, .a=0xcd, .x=0xc2, .y=0xe2, .sp=0xae, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf55a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf55b, .a=0xcd, .x=0xc2, .y=0xe2, .sp=0xae, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xf55a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf55a, .value=0x80, .type=IO_READ},
        {.addr=0xf55b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0151) {
    const struct CPU_State initial_cpu = {.pc=0x4c52, .a=0x29, .x=0x5b, .y=0x92, .sp=0xd0, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4c52, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4c53, .a=0x29, .x=0x5b, .y=0x92, .sp=0xd0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4c52, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c52, .value=0x80, .type=IO_READ},
        {.addr=0x4c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0152) {
    const struct CPU_State initial_cpu = {.pc=0x8cfc, .a=0x56, .x=0x93, .y=0x05, .sp=0x2c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x8cfc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8cfd, .a=0x56, .x=0x93, .y=0x05, .sp=0x2c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8cfc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8cfc, .value=0x80, .type=IO_READ},
        {.addr=0x8cfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0153) {
    const struct CPU_State initial_cpu = {.pc=0xd88c, .a=0x7e, .x=0x90, .y=0x59, .sp=0x65, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd88c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd88d, .a=0x7e, .x=0x90, .y=0x59, .sp=0x65, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd88c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd88c, .value=0x80, .type=IO_READ},
        {.addr=0xd88d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0154) {
    const struct CPU_State initial_cpu = {.pc=0x621e, .a=0x98, .x=0xbf, .y=0xaf, .sp=0xc7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x621e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x621f, .a=0x98, .x=0xbf, .y=0xaf, .sp=0xc7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x621e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x621e, .value=0x80, .type=IO_READ},
        {.addr=0x621f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0155) {
    const struct CPU_State initial_cpu = {.pc=0x773e, .a=0xdf, .x=0xa5, .y=0x30, .sp=0xd4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x773e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x773f, .a=0xdf, .x=0xa5, .y=0x30, .sp=0xd4, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x773e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x773e, .value=0x80, .type=IO_READ},
        {.addr=0x773f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3074, .a=0x88, .x=0x4c, .y=0xd5, .sp=0xed, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3074, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3075, .a=0x88, .x=0x4c, .y=0xd5, .sp=0xed, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3074, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3074, .value=0x80, .type=IO_READ},
        {.addr=0x3075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0157) {
    const struct CPU_State initial_cpu = {.pc=0x325d, .a=0x22, .x=0x57, .y=0xcc, .sp=0x90, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x325d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x325e, .a=0x22, .x=0x57, .y=0xcc, .sp=0x90, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x325d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x325d, .value=0x80, .type=IO_READ},
        {.addr=0x325e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0158) {
    const struct CPU_State initial_cpu = {.pc=0x900a, .a=0x4c, .x=0x82, .y=0xf8, .sp=0xa8, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x900a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x900b, .a=0x4c, .x=0x82, .y=0xf8, .sp=0xa8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x900a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x900a, .value=0x80, .type=IO_READ},
        {.addr=0x900b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0159) {
    const struct CPU_State initial_cpu = {.pc=0xecbe, .a=0x0a, .x=0x4a, .y=0x09, .sp=0x43, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xecbe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xecbf, .a=0x0a, .x=0x4a, .y=0x09, .sp=0x43, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xecbe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xecbe, .value=0x80, .type=IO_READ},
        {.addr=0xecbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015A) {
    const struct CPU_State initial_cpu = {.pc=0x8375, .a=0xe5, .x=0x4d, .y=0xd4, .sp=0x47, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8375, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8376, .a=0xe5, .x=0x4d, .y=0xd4, .sp=0x47, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8375, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8375, .value=0x80, .type=IO_READ},
        {.addr=0x8376, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015B) {
    const struct CPU_State initial_cpu = {.pc=0x774b, .a=0xcb, .x=0x35, .y=0xdb, .sp=0x8b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x774b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x774c, .a=0xcb, .x=0x35, .y=0xdb, .sp=0x8b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x774b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x774b, .value=0x80, .type=IO_READ},
        {.addr=0x774c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015C) {
    const struct CPU_State initial_cpu = {.pc=0x9fb0, .a=0x30, .x=0x9a, .y=0x1f, .sp=0xbc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9fb1, .a=0x30, .x=0x9a, .y=0x1f, .sp=0xbc, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9fb0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9fb0, .value=0x80, .type=IO_READ},
        {.addr=0x9fb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015D) {
    const struct CPU_State initial_cpu = {.pc=0xc285, .a=0x79, .x=0xbc, .y=0xa4, .sp=0xab, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc285, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc286, .a=0x79, .x=0xbc, .y=0xa4, .sp=0xab, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc285, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc285, .value=0x80, .type=IO_READ},
        {.addr=0xc286, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015E) {
    const struct CPU_State initial_cpu = {.pc=0x6f79, .a=0xa9, .x=0x53, .y=0x7e, .sp=0xbb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f79, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6f7a, .a=0xa9, .x=0x53, .y=0x7e, .sp=0xbb, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6f79, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6f79, .value=0x80, .type=IO_READ},
        {.addr=0x6f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_015F) {
    const struct CPU_State initial_cpu = {.pc=0x07f2, .a=0x91, .x=0x90, .y=0x8e, .sp=0x3b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x07f2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x07f3, .a=0x91, .x=0x90, .y=0x8e, .sp=0x3b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x07f2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x07f2, .value=0x80, .type=IO_READ},
        {.addr=0x07f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0160) {
    const struct CPU_State initial_cpu = {.pc=0x2c06, .a=0x23, .x=0x95, .y=0x97, .sp=0x3f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2c06, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2c07, .a=0x23, .x=0x95, .y=0x97, .sp=0x3f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2c06, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2c06, .value=0x80, .type=IO_READ},
        {.addr=0x2c07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0161) {
    const struct CPU_State initial_cpu = {.pc=0xbe35, .a=0x33, .x=0x66, .y=0xf8, .sp=0x78, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xbe35, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbe36, .a=0x33, .x=0x66, .y=0xf8, .sp=0x78, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xbe35, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbe35, .value=0x80, .type=IO_READ},
        {.addr=0xbe36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0162) {
    const struct CPU_State initial_cpu = {.pc=0x92e0, .a=0xe2, .x=0xee, .y=0xb6, .sp=0xfd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x92e0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x92e1, .a=0xe2, .x=0xee, .y=0xb6, .sp=0xfd, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x92e0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x92e0, .value=0x80, .type=IO_READ},
        {.addr=0x92e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0163) {
    const struct CPU_State initial_cpu = {.pc=0x4d17, .a=0x83, .x=0xe5, .y=0x5d, .sp=0x68, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d17, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d18, .a=0x83, .x=0xe5, .y=0x5d, .sp=0x68, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x4d17, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d17, .value=0x80, .type=IO_READ},
        {.addr=0x4d18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0164) {
    const struct CPU_State initial_cpu = {.pc=0xc48f, .a=0x21, .x=0xc5, .y=0xb6, .sp=0x6b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xc48f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc490, .a=0x21, .x=0xc5, .y=0xb6, .sp=0x6b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xc48f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc48f, .value=0x80, .type=IO_READ},
        {.addr=0xc490, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0165) {
    const struct CPU_State initial_cpu = {.pc=0xcd2f, .a=0x54, .x=0x39, .y=0xcc, .sp=0x24, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcd30, .a=0x54, .x=0x39, .y=0xcc, .sp=0x24, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xcd2f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcd2f, .value=0x80, .type=IO_READ},
        {.addr=0xcd30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0166) {
    const struct CPU_State initial_cpu = {.pc=0x65dd, .a=0x42, .x=0xf2, .y=0x88, .sp=0xfd, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x65dd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x65de, .a=0x42, .x=0xf2, .y=0x88, .sp=0xfd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x65dd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x65dd, .value=0x80, .type=IO_READ},
        {.addr=0x65de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0167) {
    const struct CPU_State initial_cpu = {.pc=0x35ae, .a=0x77, .x=0xa5, .y=0x7c, .sp=0x5e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x35ae, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x35af, .a=0x77, .x=0xa5, .y=0x7c, .sp=0x5e, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x35ae, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x35ae, .value=0x80, .type=IO_READ},
        {.addr=0x35af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0168) {
    const struct CPU_State initial_cpu = {.pc=0x3163, .a=0x38, .x=0x4d, .y=0xe0, .sp=0xbe, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3163, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3164, .a=0x38, .x=0x4d, .y=0xe0, .sp=0xbe, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3163, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3163, .value=0x80, .type=IO_READ},
        {.addr=0x3164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0169) {
    const struct CPU_State initial_cpu = {.pc=0x76f4, .a=0x19, .x=0xbb, .y=0x3d, .sp=0xbe, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x76f4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x76f5, .a=0x19, .x=0xbb, .y=0x3d, .sp=0xbe, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x76f4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x76f4, .value=0x80, .type=IO_READ},
        {.addr=0x76f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016A) {
    const struct CPU_State initial_cpu = {.pc=0xbf04, .a=0xab, .x=0x7e, .y=0x89, .sp=0xa7, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xbf04, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbf05, .a=0xab, .x=0x7e, .y=0x89, .sp=0xa7, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xbf04, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbf04, .value=0x80, .type=IO_READ},
        {.addr=0xbf05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016B) {
    const struct CPU_State initial_cpu = {.pc=0xdfad, .a=0x6a, .x=0xa5, .y=0x28, .sp=0x1a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xdfad, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdfae, .a=0x6a, .x=0xa5, .y=0x28, .sp=0x1a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xdfad, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdfad, .value=0x80, .type=IO_READ},
        {.addr=0xdfae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd41d, .a=0x76, .x=0x49, .y=0x51, .sp=0xe3, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd41d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd41e, .a=0x76, .x=0x49, .y=0x51, .sp=0xe3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd41d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd41d, .value=0x80, .type=IO_READ},
        {.addr=0xd41e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016D) {
    const struct CPU_State initial_cpu = {.pc=0xfd45, .a=0x8e, .x=0x29, .y=0xa9, .sp=0x1b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xfd45, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfd46, .a=0x8e, .x=0x29, .y=0xa9, .sp=0x1b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xfd45, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfd45, .value=0x80, .type=IO_READ},
        {.addr=0xfd46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016E) {
    const struct CPU_State initial_cpu = {.pc=0x3cb2, .a=0xf4, .x=0x52, .y=0x9b, .sp=0x3f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3cb3, .a=0xf4, .x=0x52, .y=0x9b, .sp=0x3f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3cb2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3cb2, .value=0x80, .type=IO_READ},
        {.addr=0x3cb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_016F) {
    const struct CPU_State initial_cpu = {.pc=0x509c, .a=0x14, .x=0xa7, .y=0x19, .sp=0x9a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x509c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x509d, .a=0x14, .x=0xa7, .y=0x19, .sp=0x9a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x509c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x509c, .value=0x80, .type=IO_READ},
        {.addr=0x509d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7aa2, .a=0x73, .x=0x21, .y=0x2c, .sp=0x3d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7aa3, .a=0x73, .x=0x21, .y=0x2c, .sp=0x3d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x7aa2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7aa2, .value=0x80, .type=IO_READ},
        {.addr=0x7aa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0171) {
    const struct CPU_State initial_cpu = {.pc=0x37bb, .a=0x55, .x=0xda, .y=0x8a, .sp=0x9a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x37bb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x37bc, .a=0x55, .x=0xda, .y=0x8a, .sp=0x9a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x37bb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x37bb, .value=0x80, .type=IO_READ},
        {.addr=0x37bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0172) {
    const struct CPU_State initial_cpu = {.pc=0xab65, .a=0x18, .x=0x8c, .y=0xbe, .sp=0xc4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xab65, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xab66, .a=0x18, .x=0x8c, .y=0xbe, .sp=0xc4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xab65, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xab65, .value=0x80, .type=IO_READ},
        {.addr=0xab66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0173) {
    const struct CPU_State initial_cpu = {.pc=0xfb37, .a=0x7c, .x=0x2d, .y=0x32, .sp=0x21, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xfb37, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfb38, .a=0x7c, .x=0x2d, .y=0x32, .sp=0x21, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xfb37, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfb37, .value=0x80, .type=IO_READ},
        {.addr=0xfb38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc2ff, .a=0xb2, .x=0xdf, .y=0x04, .sp=0xa4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ff, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc300, .a=0xb2, .x=0xdf, .y=0x04, .sp=0xa4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc2ff, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc2ff, .value=0x80, .type=IO_READ},
        {.addr=0xc300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0175) {
    const struct CPU_State initial_cpu = {.pc=0x703b, .a=0xf5, .x=0x5c, .y=0xe4, .sp=0x51, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x703b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x703c, .a=0xf5, .x=0x5c, .y=0xe4, .sp=0x51, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x703b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x703b, .value=0x80, .type=IO_READ},
        {.addr=0x703c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0176) {
    const struct CPU_State initial_cpu = {.pc=0x75a4, .a=0x0f, .x=0xda, .y=0x1e, .sp=0x72, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x75a4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x75a5, .a=0x0f, .x=0xda, .y=0x1e, .sp=0x72, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x75a4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x75a4, .value=0x80, .type=IO_READ},
        {.addr=0x75a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0177) {
    const struct CPU_State initial_cpu = {.pc=0xaf77, .a=0xc4, .x=0xcd, .y=0x48, .sp=0xd0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xaf77, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaf78, .a=0xc4, .x=0xcd, .y=0x48, .sp=0xd0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xaf77, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaf77, .value=0x80, .type=IO_READ},
        {.addr=0xaf78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0178) {
    const struct CPU_State initial_cpu = {.pc=0x137e, .a=0xa6, .x=0xa9, .y=0x0f, .sp=0x99, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x137e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x137f, .a=0xa6, .x=0xa9, .y=0x0f, .sp=0x99, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x137e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x137e, .value=0x80, .type=IO_READ},
        {.addr=0x137f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0179) {
    const struct CPU_State initial_cpu = {.pc=0x74d7, .a=0x61, .x=0x33, .y=0x2c, .sp=0xcb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x74d7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x74d8, .a=0x61, .x=0x33, .y=0x2c, .sp=0xcb, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x74d7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x74d7, .value=0x80, .type=IO_READ},
        {.addr=0x74d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017A) {
    const struct CPU_State initial_cpu = {.pc=0xbdf0, .a=0x79, .x=0x1f, .y=0x18, .sp=0x2a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbdf1, .a=0x79, .x=0x1f, .y=0x18, .sp=0x2a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xbdf0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbdf0, .value=0x80, .type=IO_READ},
        {.addr=0xbdf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017B) {
    const struct CPU_State initial_cpu = {.pc=0xbbd5, .a=0xff, .x=0x08, .y=0x89, .sp=0xdf, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbbd6, .a=0xff, .x=0x08, .y=0x89, .sp=0xdf, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xbbd5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbbd5, .value=0x80, .type=IO_READ},
        {.addr=0xbbd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017C) {
    const struct CPU_State initial_cpu = {.pc=0x3cc2, .a=0xca, .x=0x0d, .y=0xf2, .sp=0x70, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3cc3, .a=0xca, .x=0x0d, .y=0xf2, .sp=0x70, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x3cc2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3cc2, .value=0x80, .type=IO_READ},
        {.addr=0x3cc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017D) {
    const struct CPU_State initial_cpu = {.pc=0xe9cf, .a=0x8a, .x=0xa0, .y=0x1b, .sp=0xbc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe9cf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe9d0, .a=0x8a, .x=0xa0, .y=0x1b, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe9cf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe9cf, .value=0x80, .type=IO_READ},
        {.addr=0xe9d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017E) {
    const struct CPU_State initial_cpu = {.pc=0x4012, .a=0x75, .x=0x8d, .y=0xa6, .sp=0x7b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4012, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4013, .a=0x75, .x=0x8d, .y=0xa6, .sp=0x7b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4012, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4012, .value=0x80, .type=IO_READ},
        {.addr=0x4013, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_017F) {
    const struct CPU_State initial_cpu = {.pc=0x57ae, .a=0x44, .x=0xe5, .y=0x0a, .sp=0x1d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x57ae, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x57af, .a=0x44, .x=0xe5, .y=0x0a, .sp=0x1d, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x57ae, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x57ae, .value=0x80, .type=IO_READ},
        {.addr=0x57af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb23f, .a=0x24, .x=0x68, .y=0x50, .sp=0x1b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb23f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb240, .a=0x24, .x=0x68, .y=0x50, .sp=0x1b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb23f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb23f, .value=0x80, .type=IO_READ},
        {.addr=0xb240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0181) {
    const struct CPU_State initial_cpu = {.pc=0x2926, .a=0xae, .x=0x98, .y=0xbd, .sp=0x62, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2926, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2927, .a=0xae, .x=0x98, .y=0xbd, .sp=0x62, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2926, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2926, .value=0x80, .type=IO_READ},
        {.addr=0x2927, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0182) {
    const struct CPU_State initial_cpu = {.pc=0x47a9, .a=0xb9, .x=0x4d, .y=0x20, .sp=0xf9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x47a9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x47aa, .a=0xb9, .x=0x4d, .y=0x20, .sp=0xf9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x47a9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x47a9, .value=0x80, .type=IO_READ},
        {.addr=0x47aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0183) {
    const struct CPU_State initial_cpu = {.pc=0x1ccb, .a=0xed, .x=0xfe, .y=0x64, .sp=0xfe, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1ccc, .a=0xed, .x=0xfe, .y=0x64, .sp=0xfe, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x1ccb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1ccb, .value=0x80, .type=IO_READ},
        {.addr=0x1ccc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0184) {
    const struct CPU_State initial_cpu = {.pc=0xdae4, .a=0x39, .x=0x53, .y=0x7a, .sp=0x87, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdae4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdae5, .a=0x39, .x=0x53, .y=0x7a, .sp=0x87, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xdae4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdae4, .value=0x80, .type=IO_READ},
        {.addr=0xdae5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0185) {
    const struct CPU_State initial_cpu = {.pc=0xff46, .a=0x38, .x=0x4e, .y=0x74, .sp=0x0e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xff46, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xff47, .a=0x38, .x=0x4e, .y=0x74, .sp=0x0e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xff46, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xff46, .value=0x80, .type=IO_READ},
        {.addr=0xff47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb7c4, .a=0xa1, .x=0x88, .y=0x6d, .sp=0x41, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb7c5, .a=0xa1, .x=0x88, .y=0x6d, .sp=0x41, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb7c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb7c4, .value=0x80, .type=IO_READ},
        {.addr=0xb7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0187) {
    const struct CPU_State initial_cpu = {.pc=0xf6dd, .a=0xf1, .x=0x3e, .y=0xe8, .sp=0xf8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf6dd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf6de, .a=0xf1, .x=0x3e, .y=0xe8, .sp=0xf8, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xf6dd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf6dd, .value=0x80, .type=IO_READ},
        {.addr=0xf6de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0188) {
    const struct CPU_State initial_cpu = {.pc=0xd715, .a=0xb9, .x=0xd8, .y=0x3b, .sp=0xbb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd715, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd716, .a=0xb9, .x=0xd8, .y=0x3b, .sp=0xbb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd715, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd715, .value=0x80, .type=IO_READ},
        {.addr=0xd716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0189) {
    const struct CPU_State initial_cpu = {.pc=0x0287, .a=0x6b, .x=0xca, .y=0xd5, .sp=0x70, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0287, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0288, .a=0x6b, .x=0xca, .y=0xd5, .sp=0x70, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0287, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0287, .value=0x80, .type=IO_READ},
        {.addr=0x0288, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018A) {
    const struct CPU_State initial_cpu = {.pc=0x312a, .a=0xc5, .x=0x63, .y=0x14, .sp=0xfa, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x312a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x312b, .a=0xc5, .x=0x63, .y=0x14, .sp=0xfa, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x312a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x312a, .value=0x80, .type=IO_READ},
        {.addr=0x312b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018B) {
    const struct CPU_State initial_cpu = {.pc=0xed82, .a=0x6e, .x=0x35, .y=0xb4, .sp=0xf2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xed82, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xed83, .a=0x6e, .x=0x35, .y=0xb4, .sp=0xf2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xed82, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xed82, .value=0x80, .type=IO_READ},
        {.addr=0xed83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018C) {
    const struct CPU_State initial_cpu = {.pc=0x45d4, .a=0xfe, .x=0x49, .y=0x0d, .sp=0x81, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x45d4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x45d5, .a=0xfe, .x=0x49, .y=0x0d, .sp=0x81, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x45d4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x45d4, .value=0x80, .type=IO_READ},
        {.addr=0x45d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3004, .a=0xe6, .x=0x8a, .y=0x46, .sp=0x0c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x3004, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3005, .a=0xe6, .x=0x8a, .y=0x46, .sp=0x0c, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x3004, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3004, .value=0x80, .type=IO_READ},
        {.addr=0x3005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018E) {
    const struct CPU_State initial_cpu = {.pc=0x26c4, .a=0x0b, .x=0x1e, .y=0x24, .sp=0x88, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x26c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x26c5, .a=0x0b, .x=0x1e, .y=0x24, .sp=0x88, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x26c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x26c4, .value=0x80, .type=IO_READ},
        {.addr=0x26c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_018F) {
    const struct CPU_State initial_cpu = {.pc=0xaccf, .a=0xc9, .x=0x4e, .y=0xb1, .sp=0x3e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xaccf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xacd0, .a=0xc9, .x=0x4e, .y=0xb1, .sp=0x3e, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xaccf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaccf, .value=0x80, .type=IO_READ},
        {.addr=0xacd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0190) {
    const struct CPU_State initial_cpu = {.pc=0x425c, .a=0x6e, .x=0xd5, .y=0xfe, .sp=0x9f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x425c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x425d, .a=0x6e, .x=0xd5, .y=0xfe, .sp=0x9f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x425c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x425c, .value=0x80, .type=IO_READ},
        {.addr=0x425d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0191) {
    const struct CPU_State initial_cpu = {.pc=0x77a8, .a=0x09, .x=0x1c, .y=0xf4, .sp=0x7d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x77a8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x77a9, .a=0x09, .x=0x1c, .y=0xf4, .sp=0x7d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x77a8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x77a8, .value=0x80, .type=IO_READ},
        {.addr=0x77a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0192) {
    const struct CPU_State initial_cpu = {.pc=0x8cf6, .a=0xae, .x=0x90, .y=0x9b, .sp=0x77, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8cf7, .a=0xae, .x=0x90, .y=0x9b, .sp=0x77, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x8cf6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8cf6, .value=0x80, .type=IO_READ},
        {.addr=0x8cf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0193) {
    const struct CPU_State initial_cpu = {.pc=0xf32f, .a=0x37, .x=0xe4, .y=0xf9, .sp=0xc0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf32f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf330, .a=0x37, .x=0xe4, .y=0xf9, .sp=0xc0, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf32f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf32f, .value=0x80, .type=IO_READ},
        {.addr=0xf330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0194) {
    const struct CPU_State initial_cpu = {.pc=0xb2cf, .a=0xc7, .x=0x37, .y=0xb5, .sp=0xcc, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb2cf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb2d0, .a=0xc7, .x=0x37, .y=0xb5, .sp=0xcc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb2cf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb2cf, .value=0x80, .type=IO_READ},
        {.addr=0xb2d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0195) {
    const struct CPU_State initial_cpu = {.pc=0x249b, .a=0xba, .x=0xf2, .y=0xb7, .sp=0x06, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x249b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x249c, .a=0xba, .x=0xf2, .y=0xb7, .sp=0x06, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x249b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x249b, .value=0x80, .type=IO_READ},
        {.addr=0x249c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0196) {
    const struct CPU_State initial_cpu = {.pc=0x8286, .a=0x3e, .x=0x4e, .y=0x38, .sp=0x76, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x8286, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8287, .a=0x3e, .x=0x4e, .y=0x38, .sp=0x76, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x8286, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8286, .value=0x80, .type=IO_READ},
        {.addr=0x8287, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0197) {
    const struct CPU_State initial_cpu = {.pc=0xe4bc, .a=0xe1, .x=0x9d, .y=0xb6, .sp=0x5d, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe4bc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe4bd, .a=0xe1, .x=0x9d, .y=0xb6, .sp=0x5d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe4bc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe4bc, .value=0x80, .type=IO_READ},
        {.addr=0xe4bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0198) {
    const struct CPU_State initial_cpu = {.pc=0x8f88, .a=0x66, .x=0x77, .y=0xda, .sp=0x68, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8f88, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8f89, .a=0x66, .x=0x77, .y=0xda, .sp=0x68, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8f88, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8f88, .value=0x80, .type=IO_READ},
        {.addr=0x8f89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7f0b, .a=0x30, .x=0xeb, .y=0xdb, .sp=0xe1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x7f0b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f0c, .a=0x30, .x=0xeb, .y=0xdb, .sp=0xe1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7f0b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f0b, .value=0x80, .type=IO_READ},
        {.addr=0x7f0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019A) {
    const struct CPU_State initial_cpu = {.pc=0x8855, .a=0xdc, .x=0xa2, .y=0x0f, .sp=0xa5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8855, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8856, .a=0xdc, .x=0xa2, .y=0x0f, .sp=0xa5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x8855, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8855, .value=0x80, .type=IO_READ},
        {.addr=0x8856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019B) {
    const struct CPU_State initial_cpu = {.pc=0x948a, .a=0x9c, .x=0xf5, .y=0x49, .sp=0x04, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x948a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x948b, .a=0x9c, .x=0xf5, .y=0x49, .sp=0x04, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x948a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x948a, .value=0x80, .type=IO_READ},
        {.addr=0x948b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019C) {
    const struct CPU_State initial_cpu = {.pc=0x293d, .a=0xbf, .x=0x02, .y=0x10, .sp=0x4e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x293d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x293e, .a=0xbf, .x=0x02, .y=0x10, .sp=0x4e, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x293d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x293d, .value=0x80, .type=IO_READ},
        {.addr=0x293e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019D) {
    const struct CPU_State initial_cpu = {.pc=0x0ef0, .a=0xe3, .x=0x38, .y=0xdf, .sp=0x99, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0ef1, .a=0xe3, .x=0x38, .y=0xdf, .sp=0x99, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0ef0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0ef0, .value=0x80, .type=IO_READ},
        {.addr=0x0ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7c96, .a=0xa9, .x=0x67, .y=0xda, .sp=0xe4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7c96, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7c97, .a=0xa9, .x=0x67, .y=0xda, .sp=0xe4, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x7c96, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7c96, .value=0x80, .type=IO_READ},
        {.addr=0x7c97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb486, .a=0x88, .x=0x72, .y=0x42, .sp=0x92, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb486, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb487, .a=0x88, .x=0x72, .y=0x42, .sp=0x92, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xb486, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb486, .value=0x80, .type=IO_READ},
        {.addr=0xb487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x387d, .a=0xb6, .x=0x30, .y=0x1e, .sp=0x26, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x387d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x387e, .a=0xb6, .x=0x30, .y=0x1e, .sp=0x26, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x387d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x387d, .value=0x80, .type=IO_READ},
        {.addr=0x387e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x7c04, .a=0xba, .x=0xc7, .y=0xfd, .sp=0x29, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7c04, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7c05, .a=0xba, .x=0xc7, .y=0xfd, .sp=0x29, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x7c04, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7c04, .value=0x80, .type=IO_READ},
        {.addr=0x7c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x7aa0, .a=0xc8, .x=0x08, .y=0x78, .sp=0x5b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7aa1, .a=0xc8, .x=0x08, .y=0x78, .sp=0x5b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x7aa0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7aa0, .value=0x80, .type=IO_READ},
        {.addr=0x7aa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x18e1, .a=0x82, .x=0xf5, .y=0x89, .sp=0x28, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x18e1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x18e2, .a=0x82, .x=0xf5, .y=0x89, .sp=0x28, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x18e1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x18e1, .value=0x80, .type=IO_READ},
        {.addr=0x18e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x6324, .a=0xb0, .x=0xc6, .y=0xe5, .sp=0x87, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6324, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6325, .a=0xb0, .x=0xc6, .y=0xe5, .sp=0x87, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6324, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6324, .value=0x80, .type=IO_READ},
        {.addr=0x6325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x00a4, .a=0xa6, .x=0x85, .y=0x41, .sp=0xe2, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x00a5, .a=0xa6, .x=0x85, .y=0x41, .sp=0xe2, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x00a4, .value=0x80, .type=IO_READ},
        {.addr=0x00a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xd8b2, .a=0xe9, .x=0x8e, .y=0x56, .sp=0x00, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd8b3, .a=0xe9, .x=0x8e, .y=0x56, .sp=0x00, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xd8b2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd8b2, .value=0x80, .type=IO_READ},
        {.addr=0xd8b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xb6a6, .a=0x89, .x=0x29, .y=0x53, .sp=0xae, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb6a7, .a=0x89, .x=0x29, .y=0x53, .sp=0xae, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xb6a6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb6a6, .value=0x80, .type=IO_READ},
        {.addr=0xb6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x012b, .a=0x50, .x=0x01, .y=0xb1, .sp=0xc2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x012c, .a=0x50, .x=0x01, .y=0xb1, .sp=0xc2, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x012b, .value=0x80, .type=IO_READ},
        {.addr=0x012c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0e0d, .a=0x7a, .x=0x9d, .y=0x56, .sp=0x2b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0e0e, .a=0x7a, .x=0x9d, .y=0x56, .sp=0x2b, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0e0d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0e0d, .value=0x80, .type=IO_READ},
        {.addr=0x0e0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x46f7, .a=0x4a, .x=0xa7, .y=0xaa, .sp=0x39, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x46f7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x46f8, .a=0x4a, .x=0xa7, .y=0xaa, .sp=0x39, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x46f7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x46f7, .value=0x80, .type=IO_READ},
        {.addr=0x46f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x97e7, .a=0x9a, .x=0xd2, .y=0x23, .sp=0x5f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x97e7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x97e8, .a=0x9a, .x=0xd2, .y=0x23, .sp=0x5f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x97e7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x97e7, .value=0x80, .type=IO_READ},
        {.addr=0x97e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xbe11, .a=0x6e, .x=0x3a, .y=0x17, .sp=0xed, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xbe11, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbe12, .a=0x6e, .x=0x3a, .y=0x17, .sp=0xed, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbe11, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbe11, .value=0x80, .type=IO_READ},
        {.addr=0xbe12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x440e, .a=0x1a, .x=0xc6, .y=0xfb, .sp=0xe8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x440e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x440f, .a=0x1a, .x=0xc6, .y=0xfb, .sp=0xe8, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x440e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x440e, .value=0x80, .type=IO_READ},
        {.addr=0x440f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xabda, .a=0x71, .x=0xde, .y=0x98, .sp=0x6e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xabda, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xabdb, .a=0x71, .x=0xde, .y=0x98, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xabda, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xabda, .value=0x80, .type=IO_READ},
        {.addr=0xabdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xfccc, .a=0x65, .x=0x66, .y=0x70, .sp=0xe2, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xfccc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfccd, .a=0x65, .x=0x66, .y=0x70, .sp=0xe2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfccc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfccc, .value=0x80, .type=IO_READ},
        {.addr=0xfccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x75b7, .a=0x1b, .x=0xdc, .y=0x41, .sp=0x15, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x75b7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x75b8, .a=0x1b, .x=0xdc, .y=0x41, .sp=0x15, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x75b7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x75b7, .value=0x80, .type=IO_READ},
        {.addr=0x75b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x682c, .a=0x70, .x=0x52, .y=0x38, .sp=0x64, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x682c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x682d, .a=0x70, .x=0x52, .y=0x38, .sp=0x64, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x682c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x682c, .value=0x80, .type=IO_READ},
        {.addr=0x682d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x94cf, .a=0x0e, .x=0x31, .y=0xf6, .sp=0x9a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x94cf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x94d0, .a=0x0e, .x=0x31, .y=0xf6, .sp=0x9a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x94cf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x94cf, .value=0x80, .type=IO_READ},
        {.addr=0x94d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x02fa, .a=0x8b, .x=0xb3, .y=0xac, .sp=0x3c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x02fa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x02fb, .a=0x8b, .x=0xb3, .y=0xac, .sp=0x3c, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x02fa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x02fa, .value=0x80, .type=IO_READ},
        {.addr=0x02fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x7695, .a=0x91, .x=0xfb, .y=0xa7, .sp=0xee, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7695, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7696, .a=0x91, .x=0xfb, .y=0xa7, .sp=0xee, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7695, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7695, .value=0x80, .type=IO_READ},
        {.addr=0x7696, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x70ff, .a=0xe5, .x=0xc8, .y=0xe1, .sp=0xd8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x70ff, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7100, .a=0xe5, .x=0xc8, .y=0xe1, .sp=0xd8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x70ff, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x70ff, .value=0x80, .type=IO_READ},
        {.addr=0x7100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xf005, .a=0xf6, .x=0xa3, .y=0xb7, .sp=0x3b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf005, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf006, .a=0xf6, .x=0xa3, .y=0xb7, .sp=0x3b, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xf005, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf005, .value=0x80, .type=IO_READ},
        {.addr=0xf006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x1a11, .a=0x26, .x=0x8b, .y=0x11, .sp=0xd1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1a11, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1a12, .a=0x26, .x=0x8b, .y=0x11, .sp=0xd1, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x1a11, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1a11, .value=0x80, .type=IO_READ},
        {.addr=0x1a12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x643b, .a=0x7e, .x=0xd2, .y=0x90, .sp=0x2f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x643b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x643c, .a=0x7e, .x=0xd2, .y=0x90, .sp=0x2f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x643b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x643b, .value=0x80, .type=IO_READ},
        {.addr=0x643c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xfefa, .a=0x70, .x=0x94, .y=0x28, .sp=0x70, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xfefa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfefb, .a=0x70, .x=0x94, .y=0x28, .sp=0x70, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfefa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfefa, .value=0x80, .type=IO_READ},
        {.addr=0xfefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x26aa, .a=0xa2, .x=0x55, .y=0x29, .sp=0x68, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x26aa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x26ab, .a=0xa2, .x=0x55, .y=0x29, .sp=0x68, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x26aa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x26aa, .value=0x80, .type=IO_READ},
        {.addr=0x26ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xd14f, .a=0x60, .x=0x30, .y=0x8f, .sp=0xa4, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xd14f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd150, .a=0x60, .x=0x30, .y=0x8f, .sp=0xa4, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xd14f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd14f, .value=0x80, .type=IO_READ},
        {.addr=0xd150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x7b78, .a=0xe6, .x=0xe4, .y=0xbc, .sp=0xca, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7b78, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7b79, .a=0xe6, .x=0xe4, .y=0xbc, .sp=0xca, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7b78, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7b78, .value=0x80, .type=IO_READ},
        {.addr=0x7b79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xf9ac, .a=0x8c, .x=0xf3, .y=0xa2, .sp=0x76, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ac, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf9ad, .a=0x8c, .x=0xf3, .y=0xa2, .sp=0x76, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf9ac, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf9ac, .value=0x80, .type=IO_READ},
        {.addr=0xf9ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x9fa3, .a=0x19, .x=0x81, .y=0x5b, .sp=0x8e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9fa4, .a=0x19, .x=0x81, .y=0x5b, .sp=0x8e, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9fa3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9fa3, .value=0x80, .type=IO_READ},
        {.addr=0x9fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xc457, .a=0x88, .x=0x27, .y=0xd5, .sp=0x7d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc457, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc458, .a=0x88, .x=0x27, .y=0xd5, .sp=0x7d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc457, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc457, .value=0x80, .type=IO_READ},
        {.addr=0xc458, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x67c2, .a=0xb5, .x=0xc8, .y=0xb2, .sp=0x79, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x67c2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x67c3, .a=0xb5, .x=0xc8, .y=0xb2, .sp=0x79, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x67c2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x67c2, .value=0x80, .type=IO_READ},
        {.addr=0x67c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xe3e5, .a=0x30, .x=0xed, .y=0x79, .sp=0xd1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe3e6, .a=0x30, .x=0xed, .y=0x79, .sp=0xd1, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xe3e5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe3e5, .value=0x80, .type=IO_READ},
        {.addr=0xe3e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x9c33, .a=0x9c, .x=0x6c, .y=0x37, .sp=0x23, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9c33, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9c34, .a=0x9c, .x=0x6c, .y=0x37, .sp=0x23, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9c33, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9c33, .value=0x80, .type=IO_READ},
        {.addr=0x9c34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x08b7, .a=0xc0, .x=0x9f, .y=0xb0, .sp=0x61, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x08b7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x08b8, .a=0xc0, .x=0x9f, .y=0xb0, .sp=0x61, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x08b7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x08b7, .value=0x80, .type=IO_READ},
        {.addr=0x08b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x0594, .a=0xc3, .x=0xd4, .y=0x21, .sp=0x6a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0594, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0595, .a=0xc3, .x=0xd4, .y=0x21, .sp=0x6a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0594, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0594, .value=0x80, .type=IO_READ},
        {.addr=0x0595, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xa571, .a=0x52, .x=0xef, .y=0xcf, .sp=0x73, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa571, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa572, .a=0x52, .x=0xef, .y=0xcf, .sp=0x73, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xa571, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa571, .value=0x80, .type=IO_READ},
        {.addr=0xa572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x74df, .a=0x49, .x=0xf1, .y=0x95, .sp=0x96, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x74df, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x74e0, .a=0x49, .x=0xf1, .y=0x95, .sp=0x96, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x74df, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x74df, .value=0x80, .type=IO_READ},
        {.addr=0x74e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xc8f9, .a=0xd4, .x=0xc1, .y=0x1f, .sp=0x8e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xc8f9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc8fa, .a=0xd4, .x=0xc1, .y=0x1f, .sp=0x8e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc8f9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc8f9, .value=0x80, .type=IO_READ},
        {.addr=0xc8fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xa2b3, .a=0x7e, .x=0xf0, .y=0x2d, .sp=0x00, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xa2b3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa2b4, .a=0x7e, .x=0xf0, .y=0x2d, .sp=0x00, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xa2b3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa2b3, .value=0x80, .type=IO_READ},
        {.addr=0xa2b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x81e4, .a=0x22, .x=0x8d, .y=0x51, .sp=0x8e, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x81e4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x81e5, .a=0x22, .x=0x8d, .y=0x51, .sp=0x8e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x81e4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x81e4, .value=0x80, .type=IO_READ},
        {.addr=0x81e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x706c, .a=0x3d, .x=0x65, .y=0xf1, .sp=0x40, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x706c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x706d, .a=0x3d, .x=0x65, .y=0xf1, .sp=0x40, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x706c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x706c, .value=0x80, .type=IO_READ},
        {.addr=0x706d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x26a4, .a=0x8d, .x=0x9a, .y=0xfa, .sp=0x33, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x26a4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x26a5, .a=0x8d, .x=0x9a, .y=0xfa, .sp=0x33, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x26a4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x26a4, .value=0x80, .type=IO_READ},
        {.addr=0x26a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xbc54, .a=0xcd, .x=0x6f, .y=0x4c, .sp=0x35, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc54, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbc55, .a=0xcd, .x=0x6f, .y=0x4c, .sp=0x35, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xbc54, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbc54, .value=0x80, .type=IO_READ},
        {.addr=0xbc55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x8912, .a=0x13, .x=0xc3, .y=0x90, .sp=0xf8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x8912, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8913, .a=0x13, .x=0xc3, .y=0x90, .sp=0xf8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8912, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8912, .value=0x80, .type=IO_READ},
        {.addr=0x8913, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x4510, .a=0x6b, .x=0xb0, .y=0x25, .sp=0xb6, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4510, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4511, .a=0x6b, .x=0xb0, .y=0x25, .sp=0xb6, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x4510, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4510, .value=0x80, .type=IO_READ},
        {.addr=0x4511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x5eb5, .a=0xd1, .x=0x9c, .y=0xd0, .sp=0x18, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5eb6, .a=0xd1, .x=0x9c, .y=0xd0, .sp=0x18, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5eb5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5eb5, .value=0x80, .type=IO_READ},
        {.addr=0x5eb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x89cd, .a=0x6a, .x=0x77, .y=0x83, .sp=0xb1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x89cd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x89ce, .a=0x6a, .x=0x77, .y=0x83, .sp=0xb1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x89cd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x89cd, .value=0x80, .type=IO_READ},
        {.addr=0x89ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x2458, .a=0x54, .x=0xef, .y=0x59, .sp=0x32, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x2458, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2459, .a=0x54, .x=0xef, .y=0x59, .sp=0x32, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x2458, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2458, .value=0x80, .type=IO_READ},
        {.addr=0x2459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x9758, .a=0xc2, .x=0x6d, .y=0x87, .sp=0x0c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9758, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9759, .a=0xc2, .x=0x6d, .y=0x87, .sp=0x0c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x9758, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9758, .value=0x80, .type=IO_READ},
        {.addr=0x9759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x0f5f, .a=0x09, .x=0x24, .y=0xde, .sp=0x5e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0f5f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0f60, .a=0x09, .x=0x24, .y=0xde, .sp=0x5e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0f5f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0f5f, .value=0x80, .type=IO_READ},
        {.addr=0x0f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xe03d, .a=0x56, .x=0xb9, .y=0x64, .sp=0x52, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe03d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe03e, .a=0x56, .x=0xb9, .y=0x64, .sp=0x52, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xe03d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe03d, .value=0x80, .type=IO_READ},
        {.addr=0xe03e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xd46d, .a=0x3f, .x=0x23, .y=0xed, .sp=0x68, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd46d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd46e, .a=0x3f, .x=0x23, .y=0xed, .sp=0x68, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xd46d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd46d, .value=0x80, .type=IO_READ},
        {.addr=0xd46e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd127, .a=0x4a, .x=0x57, .y=0x44, .sp=0x52, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd127, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd128, .a=0x4a, .x=0x57, .y=0x44, .sp=0x52, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd127, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd127, .value=0x80, .type=IO_READ},
        {.addr=0xd128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x1d64, .a=0xe6, .x=0x84, .y=0xc3, .sp=0xc4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1d64, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1d65, .a=0xe6, .x=0x84, .y=0xc3, .sp=0xc4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1d64, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1d64, .value=0x80, .type=IO_READ},
        {.addr=0x1d65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x82f1, .a=0xc2, .x=0xb8, .y=0x09, .sp=0xa6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x82f1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x82f2, .a=0xc2, .x=0xb8, .y=0x09, .sp=0xa6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x82f1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x82f1, .value=0x80, .type=IO_READ},
        {.addr=0x82f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc761, .a=0x88, .x=0x21, .y=0xba, .sp=0x0b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xc761, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc762, .a=0x88, .x=0x21, .y=0xba, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc761, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc761, .value=0x80, .type=IO_READ},
        {.addr=0xc762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2ab4, .a=0xeb, .x=0x82, .y=0xd6, .sp=0x4b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2ab5, .a=0xeb, .x=0x82, .y=0xd6, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2ab4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2ab4, .value=0x80, .type=IO_READ},
        {.addr=0x2ab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xe0ef, .a=0x5a, .x=0xc8, .y=0xef, .sp=0x3f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ef, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe0f0, .a=0x5a, .x=0xc8, .y=0xef, .sp=0x3f, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xe0ef, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe0ef, .value=0x80, .type=IO_READ},
        {.addr=0xe0f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xcdb1, .a=0x30, .x=0xce, .y=0xc2, .sp=0x04, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcdb2, .a=0x30, .x=0xce, .y=0xc2, .sp=0x04, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcdb1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcdb1, .value=0x80, .type=IO_READ},
        {.addr=0xcdb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x63f7, .a=0x53, .x=0x08, .y=0x82, .sp=0xed, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x63f7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x63f8, .a=0x53, .x=0x08, .y=0x82, .sp=0xed, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x63f7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x63f7, .value=0x80, .type=IO_READ},
        {.addr=0x63f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x5275, .a=0xe2, .x=0x36, .y=0x5b, .sp=0xcb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5275, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5276, .a=0xe2, .x=0x36, .y=0x5b, .sp=0xcb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5275, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5275, .value=0x80, .type=IO_READ},
        {.addr=0x5276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0c74, .a=0xfd, .x=0x69, .y=0x31, .sp=0x07, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0c74, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0c75, .a=0xfd, .x=0x69, .y=0x31, .sp=0x07, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0c74, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0c74, .value=0x80, .type=IO_READ},
        {.addr=0x0c75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x309b, .a=0xa6, .x=0xe7, .y=0x8d, .sp=0x90, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x309b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x309c, .a=0xa6, .x=0xe7, .y=0x8d, .sp=0x90, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x309b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x309b, .value=0x80, .type=IO_READ},
        {.addr=0x309c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x9161, .a=0xef, .x=0x9c, .y=0xe9, .sp=0x34, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x9161, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9162, .a=0xef, .x=0x9c, .y=0xe9, .sp=0x34, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x9161, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9161, .value=0x80, .type=IO_READ},
        {.addr=0x9162, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x2d35, .a=0xac, .x=0x22, .y=0x98, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2d35, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2d36, .a=0xac, .x=0x22, .y=0x98, .sp=0x30, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x2d35, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2d35, .value=0x80, .type=IO_READ},
        {.addr=0x2d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x4e77, .a=0x19, .x=0x47, .y=0x62, .sp=0x73, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4e77, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4e78, .a=0x19, .x=0x47, .y=0x62, .sp=0x73, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x4e77, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4e77, .value=0x80, .type=IO_READ},
        {.addr=0x4e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x2e0f, .a=0x9c, .x=0xde, .y=0xb1, .sp=0xb3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2e0f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2e10, .a=0x9c, .x=0xde, .y=0xb1, .sp=0xb3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2e0f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2e0f, .value=0x80, .type=IO_READ},
        {.addr=0x2e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x93e3, .a=0x48, .x=0x16, .y=0x54, .sp=0x49, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x93e3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x93e4, .a=0x48, .x=0x16, .y=0x54, .sp=0x49, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x93e3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x93e3, .value=0x80, .type=IO_READ},
        {.addr=0x93e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x3c36, .a=0xb4, .x=0xc9, .y=0xec, .sp=0xe5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3c36, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3c37, .a=0xb4, .x=0xc9, .y=0xec, .sp=0xe5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3c36, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3c36, .value=0x80, .type=IO_READ},
        {.addr=0x3c37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xc37d, .a=0x98, .x=0xdd, .y=0x68, .sp=0xbb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc37d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc37e, .a=0x98, .x=0xdd, .y=0x68, .sp=0xbb, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xc37d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc37d, .value=0x80, .type=IO_READ},
        {.addr=0xc37e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xb7c4, .a=0xde, .x=0x43, .y=0x93, .sp=0x64, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb7c5, .a=0xde, .x=0x43, .y=0x93, .sp=0x64, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb7c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb7c4, .value=0x80, .type=IO_READ},
        {.addr=0xb7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xa7fd, .a=0x6d, .x=0xd8, .y=0x7f, .sp=0x1a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa7fe, .a=0x6d, .x=0xd8, .y=0x7f, .sp=0x1a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa7fd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa7fd, .value=0x80, .type=IO_READ},
        {.addr=0xa7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x1da4, .a=0xbc, .x=0xb6, .y=0x12, .sp=0x25, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1da4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1da5, .a=0xbc, .x=0xb6, .y=0x12, .sp=0x25, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x1da4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1da4, .value=0x80, .type=IO_READ},
        {.addr=0x1da5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9135, .a=0x9c, .x=0x13, .y=0x7c, .sp=0xbb, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9135, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9136, .a=0x9c, .x=0x13, .y=0x7c, .sp=0xbb, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9135, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9135, .value=0x80, .type=IO_READ},
        {.addr=0x9136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x3e1b, .a=0xe3, .x=0x14, .y=0x7a, .sp=0xfd, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3e1c, .a=0xe3, .x=0x14, .y=0x7a, .sp=0xfd, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3e1b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3e1b, .value=0x80, .type=IO_READ},
        {.addr=0x3e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xf17a, .a=0xa0, .x=0xdf, .y=0x64, .sp=0x8b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf17a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf17b, .a=0xa0, .x=0xdf, .y=0x64, .sp=0x8b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xf17a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf17a, .value=0x80, .type=IO_READ},
        {.addr=0xf17b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xcda8, .a=0x93, .x=0x30, .y=0x38, .sp=0x51, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xcda8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcda9, .a=0x93, .x=0x30, .y=0x38, .sp=0x51, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xcda8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcda8, .value=0x80, .type=IO_READ},
        {.addr=0xcda9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2dfd, .a=0xc0, .x=0x75, .y=0x5b, .sp=0x15, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2dfd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2dfe, .a=0xc0, .x=0x75, .y=0x5b, .sp=0x15, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x2dfd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2dfd, .value=0x80, .type=IO_READ},
        {.addr=0x2dfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xd95c, .a=0x3b, .x=0x74, .y=0x17, .sp=0x96, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xd95c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd95d, .a=0x3b, .x=0x74, .y=0x17, .sp=0x96, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd95c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd95c, .value=0x80, .type=IO_READ},
        {.addr=0xd95d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x1d55, .a=0x12, .x=0x36, .y=0xec, .sp=0x2c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x1d55, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1d56, .a=0x12, .x=0x36, .y=0xec, .sp=0x2c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x1d55, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1d55, .value=0x80, .type=IO_READ},
        {.addr=0x1d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xedb0, .a=0xa8, .x=0x80, .y=0xe4, .sp=0xd5, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xedb0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xedb1, .a=0xa8, .x=0x80, .y=0xe4, .sp=0xd5, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xedb0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xedb0, .value=0x80, .type=IO_READ},
        {.addr=0xedb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xf6ed, .a=0x09, .x=0x40, .y=0x1b, .sp=0x58, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ed, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf6ee, .a=0x09, .x=0x40, .y=0x1b, .sp=0x58, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xf6ed, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf6ed, .value=0x80, .type=IO_READ},
        {.addr=0xf6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x08eb, .a=0xc7, .x=0x94, .y=0xa3, .sp=0xdb, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x08eb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x08ec, .a=0xc7, .x=0x94, .y=0xa3, .sp=0xdb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x08eb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x08eb, .value=0x80, .type=IO_READ},
        {.addr=0x08ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0b8c, .a=0x9e, .x=0x68, .y=0x73, .sp=0xe7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0b8d, .a=0x9e, .x=0x68, .y=0x73, .sp=0xe7, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0b8c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0b8c, .value=0x80, .type=IO_READ},
        {.addr=0x0b8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x6baa, .a=0xc6, .x=0xc7, .y=0x72, .sp=0x0d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6baa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6bab, .a=0xc6, .x=0xc7, .y=0x72, .sp=0x0d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6baa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6baa, .value=0x80, .type=IO_READ},
        {.addr=0x6bab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x28fd, .a=0xaf, .x=0x76, .y=0xc2, .sp=0xe7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x28fd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x28fe, .a=0xaf, .x=0x76, .y=0xc2, .sp=0xe7, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x28fd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x28fd, .value=0x80, .type=IO_READ},
        {.addr=0x28fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x301d, .a=0x79, .x=0x66, .y=0xe4, .sp=0x71, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x301d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x301e, .a=0x79, .x=0x66, .y=0xe4, .sp=0x71, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x301d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x301d, .value=0x80, .type=IO_READ},
        {.addr=0x301e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2106, .a=0xed, .x=0xc2, .y=0x80, .sp=0x2b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x2106, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2107, .a=0xed, .x=0xc2, .y=0x80, .sp=0x2b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x2106, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2106, .value=0x80, .type=IO_READ},
        {.addr=0x2107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x16c4, .a=0x5b, .x=0x4b, .y=0x64, .sp=0x49, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x16c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x16c5, .a=0x5b, .x=0x4b, .y=0x64, .sp=0x49, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x16c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x16c4, .value=0x80, .type=IO_READ},
        {.addr=0x16c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xf91a, .a=0x38, .x=0x19, .y=0xa2, .sp=0xed, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf91a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf91b, .a=0x38, .x=0x19, .y=0xa2, .sp=0xed, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xf91a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf91a, .value=0x80, .type=IO_READ},
        {.addr=0xf91b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xd260, .a=0xf9, .x=0x0c, .y=0x83, .sp=0xb5, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd260, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd261, .a=0xf9, .x=0x0c, .y=0x83, .sp=0xb5, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xd260, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd260, .value=0x80, .type=IO_READ},
        {.addr=0xd261, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xd3af, .a=0x65, .x=0xb9, .y=0x23, .sp=0x12, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xd3af, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd3b0, .a=0x65, .x=0xb9, .y=0x23, .sp=0x12, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd3af, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd3af, .value=0x80, .type=IO_READ},
        {.addr=0xd3b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x1c30, .a=0xa9, .x=0xc9, .y=0x5d, .sp=0xef, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1c30, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1c31, .a=0xa9, .x=0xc9, .y=0x5d, .sp=0xef, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1c30, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1c30, .value=0x80, .type=IO_READ},
        {.addr=0x1c31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x254d, .a=0x3b, .x=0x58, .y=0x2a, .sp=0x48, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x254d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x254e, .a=0x3b, .x=0x58, .y=0x2a, .sp=0x48, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x254d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x254d, .value=0x80, .type=IO_READ},
        {.addr=0x254e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0200) {
    const struct CPU_State initial_cpu = {.pc=0xee79, .a=0xd9, .x=0xa1, .y=0xb7, .sp=0x3e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xee79, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xee7a, .a=0xd9, .x=0xa1, .y=0xb7, .sp=0x3e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xee79, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xee79, .value=0x80, .type=IO_READ},
        {.addr=0xee7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0201) {
    const struct CPU_State initial_cpu = {.pc=0x3d1d, .a=0xda, .x=0x4f, .y=0xa7, .sp=0x3b, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3d1e, .a=0xda, .x=0x4f, .y=0xa7, .sp=0x3b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3d1d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3d1d, .value=0x80, .type=IO_READ},
        {.addr=0x3d1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0202) {
    const struct CPU_State initial_cpu = {.pc=0x91c3, .a=0xf2, .x=0x54, .y=0xf3, .sp=0x07, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x91c3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x91c4, .a=0xf2, .x=0x54, .y=0xf3, .sp=0x07, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x91c3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x91c3, .value=0x80, .type=IO_READ},
        {.addr=0x91c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0203) {
    const struct CPU_State initial_cpu = {.pc=0xb3ad, .a=0x6d, .x=0xb2, .y=0x56, .sp=0x00, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ad, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb3ae, .a=0x6d, .x=0xb2, .y=0x56, .sp=0x00, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xb3ad, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb3ad, .value=0x80, .type=IO_READ},
        {.addr=0xb3ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0204) {
    const struct CPU_State initial_cpu = {.pc=0x1024, .a=0xb1, .x=0x35, .y=0xda, .sp=0xb2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1024, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1025, .a=0xb1, .x=0x35, .y=0xda, .sp=0xb2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x1024, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1024, .value=0x80, .type=IO_READ},
        {.addr=0x1025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc0d0, .a=0x5b, .x=0xd6, .y=0x29, .sp=0x81, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc0d1, .a=0x5b, .x=0xd6, .y=0x29, .sp=0x81, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc0d0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc0d0, .value=0x80, .type=IO_READ},
        {.addr=0xc0d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0206) {
    const struct CPU_State initial_cpu = {.pc=0xf05a, .a=0x5c, .x=0x92, .y=0xa0, .sp=0x23, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf05a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0x5c, .x=0x92, .y=0xa0, .sp=0x23, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xf05a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf05a, .value=0x80, .type=IO_READ},
        {.addr=0xf05b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0207) {
    const struct CPU_State initial_cpu = {.pc=0x6646, .a=0x4d, .x=0xb5, .y=0xd3, .sp=0x1a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6646, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6647, .a=0x4d, .x=0xb5, .y=0xd3, .sp=0x1a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6646, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6646, .value=0x80, .type=IO_READ},
        {.addr=0x6647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0208) {
    const struct CPU_State initial_cpu = {.pc=0xac52, .a=0x10, .x=0x66, .y=0x31, .sp=0x85, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xac52, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xac53, .a=0x10, .x=0x66, .y=0x31, .sp=0x85, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xac52, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xac52, .value=0x80, .type=IO_READ},
        {.addr=0xac53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0209) {
    const struct CPU_State initial_cpu = {.pc=0xa49e, .a=0x1c, .x=0x8d, .y=0x40, .sp=0x53, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xa49e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa49f, .a=0x1c, .x=0x8d, .y=0x40, .sp=0x53, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xa49e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa49e, .value=0x80, .type=IO_READ},
        {.addr=0xa49f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb650, .a=0xd8, .x=0xfc, .y=0x70, .sp=0x70, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb650, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb651, .a=0xd8, .x=0xfc, .y=0x70, .sp=0x70, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xb650, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb650, .value=0x80, .type=IO_READ},
        {.addr=0xb651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020B) {
    const struct CPU_State initial_cpu = {.pc=0xae0e, .a=0x26, .x=0x1b, .y=0x7b, .sp=0xfd, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xae0e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xae0f, .a=0x26, .x=0x1b, .y=0x7b, .sp=0xfd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xae0e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xae0e, .value=0x80, .type=IO_READ},
        {.addr=0xae0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020C) {
    const struct CPU_State initial_cpu = {.pc=0xdc0b, .a=0x30, .x=0xfb, .y=0x42, .sp=0x4b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdc0c, .a=0x30, .x=0xfb, .y=0x42, .sp=0x4b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xdc0b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdc0b, .value=0x80, .type=IO_READ},
        {.addr=0xdc0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4190, .a=0x67, .x=0xf3, .y=0x38, .sp=0xdf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4190, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4191, .a=0x67, .x=0xf3, .y=0x38, .sp=0xdf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4190, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4190, .value=0x80, .type=IO_READ},
        {.addr=0x4191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020E) {
    const struct CPU_State initial_cpu = {.pc=0x0a26, .a=0x0c, .x=0x11, .y=0xe4, .sp=0x0c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0a26, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0a27, .a=0x0c, .x=0x11, .y=0xe4, .sp=0x0c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0a26, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0a26, .value=0x80, .type=IO_READ},
        {.addr=0x0a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_020F) {
    const struct CPU_State initial_cpu = {.pc=0xea02, .a=0x64, .x=0x4f, .y=0x87, .sp=0xe7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xea02, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xea03, .a=0x64, .x=0x4f, .y=0x87, .sp=0xe7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xea02, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xea02, .value=0x80, .type=IO_READ},
        {.addr=0xea03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4f2f, .a=0x10, .x=0x7a, .y=0x0f, .sp=0xfd, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4f2f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4f30, .a=0x10, .x=0x7a, .y=0x0f, .sp=0xfd, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x4f2f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4f2f, .value=0x80, .type=IO_READ},
        {.addr=0x4f30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0213, .a=0x90, .x=0x04, .y=0xf7, .sp=0x5a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0213, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0214, .a=0x90, .x=0x04, .y=0xf7, .sp=0x5a, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0213, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0213, .value=0x80, .type=IO_READ},
        {.addr=0x0214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0212) {
    const struct CPU_State initial_cpu = {.pc=0x9d93, .a=0x81, .x=0x00, .y=0x32, .sp=0x04, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9d93, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9d94, .a=0x81, .x=0x00, .y=0x32, .sp=0x04, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9d93, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9d93, .value=0x80, .type=IO_READ},
        {.addr=0x9d94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0213) {
    const struct CPU_State initial_cpu = {.pc=0xafe8, .a=0x19, .x=0xb3, .y=0x9f, .sp=0xa1, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xafe8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xafe9, .a=0x19, .x=0xb3, .y=0x9f, .sp=0xa1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xafe8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xafe8, .value=0x80, .type=IO_READ},
        {.addr=0xafe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0214) {
    const struct CPU_State initial_cpu = {.pc=0xbac8, .a=0x84, .x=0x04, .y=0xb6, .sp=0x0e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xbac8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbac9, .a=0x84, .x=0x04, .y=0xb6, .sp=0x0e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xbac8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbac8, .value=0x80, .type=IO_READ},
        {.addr=0xbac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4b88, .a=0xc9, .x=0xbe, .y=0xe4, .sp=0x19, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4b88, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4b89, .a=0xc9, .x=0xbe, .y=0xe4, .sp=0x19, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4b88, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4b88, .value=0x80, .type=IO_READ},
        {.addr=0x4b89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0216) {
    const struct CPU_State initial_cpu = {.pc=0xcfbf, .a=0x2f, .x=0x79, .y=0xb1, .sp=0x5d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcfbf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcfc0, .a=0x2f, .x=0x79, .y=0xb1, .sp=0x5d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcfbf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcfbf, .value=0x80, .type=IO_READ},
        {.addr=0xcfc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0217) {
    const struct CPU_State initial_cpu = {.pc=0x6c10, .a=0x3c, .x=0xc4, .y=0xc9, .sp=0xfb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6c10, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6c11, .a=0x3c, .x=0xc4, .y=0xc9, .sp=0xfb, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x6c10, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6c10, .value=0x80, .type=IO_READ},
        {.addr=0x6c11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0218) {
    const struct CPU_State initial_cpu = {.pc=0xb124, .a=0x4b, .x=0xe8, .y=0xdf, .sp=0x8b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb124, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb125, .a=0x4b, .x=0xe8, .y=0xdf, .sp=0x8b, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xb124, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb124, .value=0x80, .type=IO_READ},
        {.addr=0xb125, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0219) {
    const struct CPU_State initial_cpu = {.pc=0xab22, .a=0xde, .x=0x46, .y=0x4e, .sp=0x24, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xab22, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xab23, .a=0xde, .x=0x46, .y=0x4e, .sp=0x24, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xab22, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xab22, .value=0x80, .type=IO_READ},
        {.addr=0xab23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021A) {
    const struct CPU_State initial_cpu = {.pc=0xc631, .a=0x16, .x=0x32, .y=0xc4, .sp=0xd6, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc631, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc632, .a=0x16, .x=0x32, .y=0xc4, .sp=0xd6, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc631, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc631, .value=0x80, .type=IO_READ},
        {.addr=0xc632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021B) {
    const struct CPU_State initial_cpu = {.pc=0x6474, .a=0xd5, .x=0x48, .y=0x72, .sp=0xe1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6474, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6475, .a=0xd5, .x=0x48, .y=0x72, .sp=0xe1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6474, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6474, .value=0x80, .type=IO_READ},
        {.addr=0x6475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4129, .a=0xf5, .x=0x4e, .y=0xd9, .sp=0xbb, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4129, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x412a, .a=0xf5, .x=0x4e, .y=0xd9, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4129, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4129, .value=0x80, .type=IO_READ},
        {.addr=0x412a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021D) {
    const struct CPU_State initial_cpu = {.pc=0xb408, .a=0x99, .x=0x09, .y=0xc1, .sp=0x52, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xb408, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb409, .a=0x99, .x=0x09, .y=0xc1, .sp=0x52, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xb408, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb408, .value=0x80, .type=IO_READ},
        {.addr=0xb409, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021E) {
    const struct CPU_State initial_cpu = {.pc=0x2584, .a=0xf2, .x=0xc3, .y=0x63, .sp=0xfc, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x2584, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2585, .a=0xf2, .x=0xc3, .y=0x63, .sp=0xfc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2584, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2584, .value=0x80, .type=IO_READ},
        {.addr=0x2585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd0a9, .a=0x9b, .x=0x7c, .y=0x81, .sp=0x9c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd0aa, .a=0x9b, .x=0x7c, .y=0x81, .sp=0x9c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd0a9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd0a9, .value=0x80, .type=IO_READ},
        {.addr=0xd0aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0220) {
    const struct CPU_State initial_cpu = {.pc=0xd25a, .a=0x08, .x=0x45, .y=0xbe, .sp=0x36, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xd25a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd25b, .a=0x08, .x=0x45, .y=0xbe, .sp=0x36, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xd25a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd25a, .value=0x80, .type=IO_READ},
        {.addr=0xd25b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa42e, .a=0x93, .x=0xef, .y=0x0f, .sp=0x0d, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa42e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa42f, .a=0x93, .x=0xef, .y=0x0f, .sp=0x0d, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xa42e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa42e, .value=0x80, .type=IO_READ},
        {.addr=0xa42f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0222) {
    const struct CPU_State initial_cpu = {.pc=0xa366, .a=0x48, .x=0x8b, .y=0x10, .sp=0x58, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa366, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa367, .a=0x48, .x=0x8b, .y=0x10, .sp=0x58, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa366, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa366, .value=0x80, .type=IO_READ},
        {.addr=0xa367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0223) {
    const struct CPU_State initial_cpu = {.pc=0x5591, .a=0x36, .x=0xa3, .y=0x29, .sp=0xa8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x5591, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5592, .a=0x36, .x=0xa3, .y=0x29, .sp=0xa8, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x5591, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5591, .value=0x80, .type=IO_READ},
        {.addr=0x5592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0224) {
    const struct CPU_State initial_cpu = {.pc=0x09c8, .a=0x52, .x=0xf9, .y=0x2f, .sp=0xd3, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x09c8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x09c9, .a=0x52, .x=0xf9, .y=0x2f, .sp=0xd3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x09c8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x09c8, .value=0x80, .type=IO_READ},
        {.addr=0x09c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0225) {
    const struct CPU_State initial_cpu = {.pc=0xc28f, .a=0x4e, .x=0x30, .y=0x6b, .sp=0xfa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc28f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc290, .a=0x4e, .x=0x30, .y=0x6b, .sp=0xfa, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc28f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc28f, .value=0x80, .type=IO_READ},
        {.addr=0xc290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0226) {
    const struct CPU_State initial_cpu = {.pc=0x542d, .a=0xcd, .x=0xf2, .y=0x03, .sp=0x88, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x542d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x542e, .a=0xcd, .x=0xf2, .y=0x03, .sp=0x88, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x542d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x542d, .value=0x80, .type=IO_READ},
        {.addr=0x542e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0227) {
    const struct CPU_State initial_cpu = {.pc=0x8b84, .a=0xed, .x=0x33, .y=0xa2, .sp=0x44, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8b84, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8b85, .a=0xed, .x=0x33, .y=0xa2, .sp=0x44, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x8b84, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8b84, .value=0x80, .type=IO_READ},
        {.addr=0x8b85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0228) {
    const struct CPU_State initial_cpu = {.pc=0x66d6, .a=0x8e, .x=0x62, .y=0xac, .sp=0xaa, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x66d6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x66d7, .a=0x8e, .x=0x62, .y=0xac, .sp=0xaa, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x66d6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x66d6, .value=0x80, .type=IO_READ},
        {.addr=0x66d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0229) {
    const struct CPU_State initial_cpu = {.pc=0x1879, .a=0x03, .x=0x96, .y=0x5e, .sp=0xc6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1879, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x187a, .a=0x03, .x=0x96, .y=0x5e, .sp=0xc6, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x1879, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1879, .value=0x80, .type=IO_READ},
        {.addr=0x187a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022A) {
    const struct CPU_State initial_cpu = {.pc=0xccf9, .a=0x9c, .x=0x3b, .y=0x9f, .sp=0xae, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xccf9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xccfa, .a=0x9c, .x=0x3b, .y=0x9f, .sp=0xae, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xccf9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xccf9, .value=0x80, .type=IO_READ},
        {.addr=0xccfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022B) {
    const struct CPU_State initial_cpu = {.pc=0xd7da, .a=0x2f, .x=0x7c, .y=0xaa, .sp=0x37, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd7da, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd7db, .a=0x2f, .x=0x7c, .y=0xaa, .sp=0x37, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd7da, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd7da, .value=0x80, .type=IO_READ},
        {.addr=0xd7db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022C) {
    const struct CPU_State initial_cpu = {.pc=0xdb22, .a=0xf9, .x=0x5a, .y=0x05, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xdb22, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdb23, .a=0xf9, .x=0x5a, .y=0x05, .sp=0xa2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdb22, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdb22, .value=0x80, .type=IO_READ},
        {.addr=0xdb23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022D) {
    const struct CPU_State initial_cpu = {.pc=0x55ec, .a=0xa0, .x=0xa8, .y=0x74, .sp=0x5e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x55ec, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x55ed, .a=0xa0, .x=0xa8, .y=0x74, .sp=0x5e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x55ec, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x55ec, .value=0x80, .type=IO_READ},
        {.addr=0x55ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022E) {
    const struct CPU_State initial_cpu = {.pc=0x2973, .a=0x56, .x=0x64, .y=0x0e, .sp=0x54, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2973, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2974, .a=0x56, .x=0x64, .y=0x0e, .sp=0x54, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x2973, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2973, .value=0x80, .type=IO_READ},
        {.addr=0x2974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_022F) {
    const struct CPU_State initial_cpu = {.pc=0x9751, .a=0x6f, .x=0x2b, .y=0x7a, .sp=0x48, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9751, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9752, .a=0x6f, .x=0x2b, .y=0x7a, .sp=0x48, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x9751, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9751, .value=0x80, .type=IO_READ},
        {.addr=0x9752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0230) {
    const struct CPU_State initial_cpu = {.pc=0x6e7a, .a=0xfa, .x=0xbb, .y=0xa4, .sp=0x3d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x6e7a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6e7b, .a=0xfa, .x=0xbb, .y=0xa4, .sp=0x3d, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x6e7a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6e7a, .value=0x80, .type=IO_READ},
        {.addr=0x6e7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0231) {
    const struct CPU_State initial_cpu = {.pc=0xc3b0, .a=0xf6, .x=0xb6, .y=0x2d, .sp=0x3b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc3b1, .a=0xf6, .x=0xb6, .y=0x2d, .sp=0x3b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc3b0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc3b0, .value=0x80, .type=IO_READ},
        {.addr=0xc3b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0232) {
    const struct CPU_State initial_cpu = {.pc=0xd296, .a=0x0a, .x=0xb2, .y=0x9e, .sp=0x19, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd296, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd297, .a=0x0a, .x=0xb2, .y=0x9e, .sp=0x19, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xd296, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd296, .value=0x80, .type=IO_READ},
        {.addr=0xd297, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0233) {
    const struct CPU_State initial_cpu = {.pc=0xa74c, .a=0x29, .x=0x72, .y=0xbd, .sp=0x3a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa74c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa74d, .a=0x29, .x=0x72, .y=0xbd, .sp=0x3a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa74c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa74c, .value=0x80, .type=IO_READ},
        {.addr=0xa74d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0234) {
    const struct CPU_State initial_cpu = {.pc=0x63d1, .a=0xd9, .x=0xef, .y=0xcc, .sp=0xef, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x63d1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x63d2, .a=0xd9, .x=0xef, .y=0xcc, .sp=0xef, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x63d1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x63d1, .value=0x80, .type=IO_READ},
        {.addr=0x63d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0235) {
    const struct CPU_State initial_cpu = {.pc=0x0e40, .a=0xbe, .x=0x80, .y=0xa2, .sp=0xf1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0e40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0e41, .a=0xbe, .x=0x80, .y=0xa2, .sp=0xf1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0e40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0e40, .value=0x80, .type=IO_READ},
        {.addr=0x0e41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0236) {
    const struct CPU_State initial_cpu = {.pc=0x5939, .a=0x00, .x=0xd4, .y=0x3c, .sp=0xe3, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5939, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x593a, .a=0x00, .x=0xd4, .y=0x3c, .sp=0xe3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5939, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5939, .value=0x80, .type=IO_READ},
        {.addr=0x593a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6c84, .a=0xee, .x=0x51, .y=0xcf, .sp=0xcd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c84, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6c85, .a=0xee, .x=0x51, .y=0xcf, .sp=0xcd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6c84, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6c84, .value=0x80, .type=IO_READ},
        {.addr=0x6c85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0238) {
    const struct CPU_State initial_cpu = {.pc=0x62f7, .a=0x2c, .x=0x64, .y=0x5e, .sp=0xa2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x62f7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x62f8, .a=0x2c, .x=0x64, .y=0x5e, .sp=0xa2, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x62f7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x62f7, .value=0x80, .type=IO_READ},
        {.addr=0x62f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0239) {
    const struct CPU_State initial_cpu = {.pc=0x90a2, .a=0xd9, .x=0xe3, .y=0x41, .sp=0xf9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x90a2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x90a3, .a=0xd9, .x=0xe3, .y=0x41, .sp=0xf9, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x90a2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x90a2, .value=0x80, .type=IO_READ},
        {.addr=0x90a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023A) {
    const struct CPU_State initial_cpu = {.pc=0x274a, .a=0xc6, .x=0x6d, .y=0xcb, .sp=0x4e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x274a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x274b, .a=0xc6, .x=0x6d, .y=0xcb, .sp=0x4e, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x274a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x274a, .value=0x80, .type=IO_READ},
        {.addr=0x274b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023B) {
    const struct CPU_State initial_cpu = {.pc=0x545e, .a=0x6c, .x=0xc4, .y=0xee, .sp=0x14, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x545e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x545f, .a=0x6c, .x=0xc4, .y=0xee, .sp=0x14, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x545e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x545e, .value=0x80, .type=IO_READ},
        {.addr=0x545f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023C) {
    const struct CPU_State initial_cpu = {.pc=0x0adb, .a=0x4b, .x=0x44, .y=0xe0, .sp=0x2e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0adb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0adc, .a=0x4b, .x=0x44, .y=0xe0, .sp=0x2e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0adb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0adb, .value=0x80, .type=IO_READ},
        {.addr=0x0adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023D) {
    const struct CPU_State initial_cpu = {.pc=0xfc6c, .a=0xbd, .x=0xfc, .y=0xb1, .sp=0xf2, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfc6c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfc6d, .a=0xbd, .x=0xfc, .y=0xb1, .sp=0xf2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xfc6c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfc6c, .value=0x80, .type=IO_READ},
        {.addr=0xfc6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023E) {
    const struct CPU_State initial_cpu = {.pc=0x3357, .a=0xd9, .x=0xb0, .y=0x33, .sp=0x69, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3357, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3358, .a=0xd9, .x=0xb0, .y=0x33, .sp=0x69, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3357, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3357, .value=0x80, .type=IO_READ},
        {.addr=0x3358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa130, .a=0x48, .x=0xfc, .y=0x6a, .sp=0xae, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa130, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa131, .a=0x48, .x=0xfc, .y=0x6a, .sp=0xae, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa130, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa130, .value=0x80, .type=IO_READ},
        {.addr=0xa131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0240) {
    const struct CPU_State initial_cpu = {.pc=0x473d, .a=0xdb, .x=0x27, .y=0x33, .sp=0x28, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x473d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x473e, .a=0xdb, .x=0x27, .y=0x33, .sp=0x28, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x473d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x473d, .value=0x80, .type=IO_READ},
        {.addr=0x473e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0241) {
    const struct CPU_State initial_cpu = {.pc=0xcef8, .a=0x35, .x=0x1f, .y=0x68, .sp=0x70, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xcef8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcef9, .a=0x35, .x=0x1f, .y=0x68, .sp=0x70, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcef8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcef8, .value=0x80, .type=IO_READ},
        {.addr=0xcef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0242) {
    const struct CPU_State initial_cpu = {.pc=0x1098, .a=0x56, .x=0xd2, .y=0x9a, .sp=0xc3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1098, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1099, .a=0x56, .x=0xd2, .y=0x9a, .sp=0xc3, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x1098, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1098, .value=0x80, .type=IO_READ},
        {.addr=0x1099, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0243) {
    const struct CPU_State initial_cpu = {.pc=0xbf25, .a=0xcb, .x=0xc5, .y=0x3f, .sp=0xef, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xbf25, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbf26, .a=0xcb, .x=0xc5, .y=0x3f, .sp=0xef, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xbf25, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbf25, .value=0x80, .type=IO_READ},
        {.addr=0xbf26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9b23, .a=0xb3, .x=0x87, .y=0xd2, .sp=0x39, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x9b23, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9b24, .a=0xb3, .x=0x87, .y=0xd2, .sp=0x39, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9b23, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9b23, .value=0x80, .type=IO_READ},
        {.addr=0x9b24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0245) {
    const struct CPU_State initial_cpu = {.pc=0x68a5, .a=0x7c, .x=0x1e, .y=0x6a, .sp=0x8f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x68a5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x68a6, .a=0x7c, .x=0x1e, .y=0x6a, .sp=0x8f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x68a5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x68a5, .value=0x80, .type=IO_READ},
        {.addr=0x68a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0246) {
    const struct CPU_State initial_cpu = {.pc=0x2320, .a=0xb0, .x=0xc4, .y=0x28, .sp=0xef, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x2320, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2321, .a=0xb0, .x=0xc4, .y=0x28, .sp=0xef, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x2320, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2320, .value=0x80, .type=IO_READ},
        {.addr=0x2321, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0247) {
    const struct CPU_State initial_cpu = {.pc=0xe074, .a=0xb5, .x=0x2b, .y=0x23, .sp=0x65, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe074, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe075, .a=0xb5, .x=0x2b, .y=0x23, .sp=0x65, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xe074, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe074, .value=0x80, .type=IO_READ},
        {.addr=0xe075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0248) {
    const struct CPU_State initial_cpu = {.pc=0x84be, .a=0x8d, .x=0x5c, .y=0x5f, .sp=0x88, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x84be, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x84bf, .a=0x8d, .x=0x5c, .y=0x5f, .sp=0x88, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x84be, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x84be, .value=0x80, .type=IO_READ},
        {.addr=0x84bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0249) {
    const struct CPU_State initial_cpu = {.pc=0x42e8, .a=0x4d, .x=0x22, .y=0x74, .sp=0x37, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x42e8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x42e9, .a=0x4d, .x=0x22, .y=0x74, .sp=0x37, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x42e8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x42e8, .value=0x80, .type=IO_READ},
        {.addr=0x42e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024A) {
    const struct CPU_State initial_cpu = {.pc=0x6de6, .a=0xd2, .x=0xcd, .y=0xc3, .sp=0xef, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6de6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6de7, .a=0xd2, .x=0xcd, .y=0xc3, .sp=0xef, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x6de6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6de6, .value=0x80, .type=IO_READ},
        {.addr=0x6de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024B) {
    const struct CPU_State initial_cpu = {.pc=0x1839, .a=0x80, .x=0x68, .y=0x3f, .sp=0x4c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1839, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x183a, .a=0x80, .x=0x68, .y=0x3f, .sp=0x4c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1839, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1839, .value=0x80, .type=IO_READ},
        {.addr=0x183a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024C) {
    const struct CPU_State initial_cpu = {.pc=0x36ec, .a=0xb8, .x=0x69, .y=0xf9, .sp=0x3b, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x36ec, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x36ed, .a=0xb8, .x=0x69, .y=0xf9, .sp=0x3b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x36ec, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x36ec, .value=0x80, .type=IO_READ},
        {.addr=0x36ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024D) {
    const struct CPU_State initial_cpu = {.pc=0x4c11, .a=0x30, .x=0x94, .y=0xf5, .sp=0xd9, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c11, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4c12, .a=0x30, .x=0x94, .y=0xf5, .sp=0xd9, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4c11, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c11, .value=0x80, .type=IO_READ},
        {.addr=0x4c12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024E) {
    const struct CPU_State initial_cpu = {.pc=0xfd73, .a=0xc7, .x=0xe4, .y=0x5e, .sp=0x5f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd73, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfd74, .a=0xc7, .x=0xe4, .y=0x5e, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xfd73, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfd73, .value=0x80, .type=IO_READ},
        {.addr=0xfd74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_024F) {
    const struct CPU_State initial_cpu = {.pc=0x13d8, .a=0x68, .x=0x76, .y=0x8a, .sp=0xb1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x13d8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x13d9, .a=0x68, .x=0x76, .y=0x8a, .sp=0xb1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x13d8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x13d8, .value=0x80, .type=IO_READ},
        {.addr=0x13d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0250) {
    const struct CPU_State initial_cpu = {.pc=0xee05, .a=0x43, .x=0x26, .y=0xcb, .sp=0x92, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xee05, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xee06, .a=0x43, .x=0x26, .y=0xcb, .sp=0x92, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xee05, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xee05, .value=0x80, .type=IO_READ},
        {.addr=0xee06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0251) {
    const struct CPU_State initial_cpu = {.pc=0x9d8c, .a=0x1b, .x=0x03, .y=0xea, .sp=0xbe, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9d8c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9d8d, .a=0x1b, .x=0x03, .y=0xea, .sp=0xbe, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9d8c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9d8c, .value=0x80, .type=IO_READ},
        {.addr=0x9d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0252) {
    const struct CPU_State initial_cpu = {.pc=0x1e56, .a=0x87, .x=0xa9, .y=0xb0, .sp=0xa8, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1e56, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1e57, .a=0x87, .x=0xa9, .y=0xb0, .sp=0xa8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1e56, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e56, .value=0x80, .type=IO_READ},
        {.addr=0x1e57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0253) {
    const struct CPU_State initial_cpu = {.pc=0x6c37, .a=0x8e, .x=0xed, .y=0x96, .sp=0xaf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6c37, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6c38, .a=0x8e, .x=0xed, .y=0x96, .sp=0xaf, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x6c37, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6c37, .value=0x80, .type=IO_READ},
        {.addr=0x6c38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0254) {
    const struct CPU_State initial_cpu = {.pc=0xc564, .a=0xf7, .x=0x3d, .y=0x66, .sp=0xc2, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc564, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc565, .a=0xf7, .x=0x3d, .y=0x66, .sp=0xc2, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc564, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc564, .value=0x80, .type=IO_READ},
        {.addr=0xc565, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0255) {
    const struct CPU_State initial_cpu = {.pc=0x1a8e, .a=0x98, .x=0x17, .y=0xfc, .sp=0x14, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1a8e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1a8f, .a=0x98, .x=0x17, .y=0xfc, .sp=0x14, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1a8e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1a8e, .value=0x80, .type=IO_READ},
        {.addr=0x1a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0256) {
    const struct CPU_State initial_cpu = {.pc=0x2056, .a=0x01, .x=0x75, .y=0x7f, .sp=0x96, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2056, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2057, .a=0x01, .x=0x75, .y=0x7f, .sp=0x96, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2056, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2056, .value=0x80, .type=IO_READ},
        {.addr=0x2057, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0257) {
    const struct CPU_State initial_cpu = {.pc=0x04bf, .a=0x99, .x=0x7a, .y=0xe0, .sp=0x64, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x04bf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x04c0, .a=0x99, .x=0x7a, .y=0xe0, .sp=0x64, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x04bf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x04bf, .value=0x80, .type=IO_READ},
        {.addr=0x04c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0258) {
    const struct CPU_State initial_cpu = {.pc=0x5d0b, .a=0x7d, .x=0xa0, .y=0x7f, .sp=0xa3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5d0c, .a=0x7d, .x=0xa0, .y=0x7f, .sp=0xa3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5d0b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5d0b, .value=0x80, .type=IO_READ},
        {.addr=0x5d0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0259) {
    const struct CPU_State initial_cpu = {.pc=0xa49e, .a=0xcc, .x=0x83, .y=0x1e, .sp=0xd8, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xa49e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa49f, .a=0xcc, .x=0x83, .y=0x1e, .sp=0xd8, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xa49e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa49e, .value=0x80, .type=IO_READ},
        {.addr=0xa49f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025A) {
    const struct CPU_State initial_cpu = {.pc=0xba60, .a=0xd7, .x=0xd0, .y=0x9f, .sp=0xd4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xba60, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xba61, .a=0xd7, .x=0xd0, .y=0x9f, .sp=0xd4, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xba60, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xba60, .value=0x80, .type=IO_READ},
        {.addr=0xba61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025B) {
    const struct CPU_State initial_cpu = {.pc=0x097c, .a=0xb7, .x=0x11, .y=0xcf, .sp=0x17, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x097c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x097d, .a=0xb7, .x=0x11, .y=0xcf, .sp=0x17, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x097c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x097c, .value=0x80, .type=IO_READ},
        {.addr=0x097d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025C) {
    const struct CPU_State initial_cpu = {.pc=0x9a7d, .a=0xd1, .x=0xb7, .y=0xfd, .sp=0xbe, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9a7e, .a=0xd1, .x=0xb7, .y=0xfd, .sp=0xbe, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9a7d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9a7d, .value=0x80, .type=IO_READ},
        {.addr=0x9a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025D) {
    const struct CPU_State initial_cpu = {.pc=0x2f1b, .a=0x06, .x=0xb1, .y=0xbb, .sp=0x89, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f1b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2f1c, .a=0x06, .x=0xb1, .y=0xbb, .sp=0x89, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x2f1b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2f1b, .value=0x80, .type=IO_READ},
        {.addr=0x2f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025E) {
    const struct CPU_State initial_cpu = {.pc=0x817d, .a=0x8d, .x=0xa8, .y=0x87, .sp=0x43, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x817d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x817e, .a=0x8d, .x=0xa8, .y=0x87, .sp=0x43, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x817d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x817d, .value=0x80, .type=IO_READ},
        {.addr=0x817e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_025F) {
    const struct CPU_State initial_cpu = {.pc=0x34cb, .a=0x03, .x=0x57, .y=0xd1, .sp=0xb7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x34cb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x34cc, .a=0x03, .x=0x57, .y=0xd1, .sp=0xb7, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x34cb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x34cb, .value=0x80, .type=IO_READ},
        {.addr=0x34cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0260) {
    const struct CPU_State initial_cpu = {.pc=0xc768, .a=0x0d, .x=0x5c, .y=0xa0, .sp=0x7e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc768, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc769, .a=0x0d, .x=0x5c, .y=0xa0, .sp=0x7e, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xc768, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc768, .value=0x80, .type=IO_READ},
        {.addr=0xc769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0261) {
    const struct CPU_State initial_cpu = {.pc=0xc310, .a=0x4f, .x=0xf5, .y=0x9c, .sp=0xf1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc310, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc311, .a=0x4f, .x=0xf5, .y=0x9c, .sp=0xf1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc310, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc310, .value=0x80, .type=IO_READ},
        {.addr=0xc311, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0262) {
    const struct CPU_State initial_cpu = {.pc=0xdb9d, .a=0x7a, .x=0xee, .y=0x6d, .sp=0xd9, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xdb9d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdb9e, .a=0x7a, .x=0xee, .y=0x6d, .sp=0xd9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xdb9d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdb9d, .value=0x80, .type=IO_READ},
        {.addr=0xdb9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0263) {
    const struct CPU_State initial_cpu = {.pc=0xbd6e, .a=0xd8, .x=0x31, .y=0x87, .sp=0xef, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xbd6e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbd6f, .a=0xd8, .x=0x31, .y=0x87, .sp=0xef, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xbd6e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbd6e, .value=0x80, .type=IO_READ},
        {.addr=0xbd6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0264) {
    const struct CPU_State initial_cpu = {.pc=0x4909, .a=0x56, .x=0x6c, .y=0x73, .sp=0xfb, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x4909, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x490a, .a=0x56, .x=0x6c, .y=0x73, .sp=0xfb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4909, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4909, .value=0x80, .type=IO_READ},
        {.addr=0x490a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0265) {
    const struct CPU_State initial_cpu = {.pc=0x0ac3, .a=0x1e, .x=0x3f, .y=0xc3, .sp=0xb5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0ac4, .a=0x1e, .x=0x3f, .y=0xc3, .sp=0xb5, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0ac3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0ac3, .value=0x80, .type=IO_READ},
        {.addr=0x0ac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0266) {
    const struct CPU_State initial_cpu = {.pc=0x3b09, .a=0x2a, .x=0xff, .y=0xad, .sp=0x87, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b09, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3b0a, .a=0x2a, .x=0xff, .y=0xad, .sp=0x87, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x3b09, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3b09, .value=0x80, .type=IO_READ},
        {.addr=0x3b0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0267) {
    const struct CPU_State initial_cpu = {.pc=0xa24f, .a=0x9a, .x=0x6d, .y=0xfa, .sp=0x07, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa24f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa250, .a=0x9a, .x=0x6d, .y=0xfa, .sp=0x07, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa24f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa24f, .value=0x80, .type=IO_READ},
        {.addr=0xa250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0268) {
    const struct CPU_State initial_cpu = {.pc=0xa48e, .a=0x98, .x=0x22, .y=0x64, .sp=0x19, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa48e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa48f, .a=0x98, .x=0x22, .y=0x64, .sp=0x19, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xa48e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa48e, .value=0x80, .type=IO_READ},
        {.addr=0xa48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0269) {
    const struct CPU_State initial_cpu = {.pc=0x6ffb, .a=0x86, .x=0xa1, .y=0x19, .sp=0xdb, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6ffc, .a=0x86, .x=0xa1, .y=0x19, .sp=0xdb, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6ffb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6ffb, .value=0x80, .type=IO_READ},
        {.addr=0x6ffc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026A) {
    const struct CPU_State initial_cpu = {.pc=0xefec, .a=0x89, .x=0x69, .y=0x0b, .sp=0xf9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xefec, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xefed, .a=0x89, .x=0x69, .y=0x0b, .sp=0xf9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xefec, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xefec, .value=0x80, .type=IO_READ},
        {.addr=0xefed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026B) {
    const struct CPU_State initial_cpu = {.pc=0x7cbb, .a=0x25, .x=0x4a, .y=0xb0, .sp=0x1f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x7cbb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7cbc, .a=0x25, .x=0x4a, .y=0xb0, .sp=0x1f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x7cbb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7cbb, .value=0x80, .type=IO_READ},
        {.addr=0x7cbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026C) {
    const struct CPU_State initial_cpu = {.pc=0xdaa4, .a=0xd9, .x=0x25, .y=0x94, .sp=0x98, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdaa5, .a=0xd9, .x=0x25, .y=0x94, .sp=0x98, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xdaa4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdaa4, .value=0x80, .type=IO_READ},
        {.addr=0xdaa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026D) {
    const struct CPU_State initial_cpu = {.pc=0x5a35, .a=0x9c, .x=0x6b, .y=0x75, .sp=0xcd, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5a35, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5a36, .a=0x9c, .x=0x6b, .y=0x75, .sp=0xcd, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5a35, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5a35, .value=0x80, .type=IO_READ},
        {.addr=0x5a36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026E) {
    const struct CPU_State initial_cpu = {.pc=0xf314, .a=0x21, .x=0x0b, .y=0x49, .sp=0xca, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xf314, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf315, .a=0x21, .x=0x0b, .y=0x49, .sp=0xca, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf314, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf314, .value=0x80, .type=IO_READ},
        {.addr=0xf315, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_026F) {
    const struct CPU_State initial_cpu = {.pc=0x64b6, .a=0xf9, .x=0xc4, .y=0xe2, .sp=0x8a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x64b6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x64b7, .a=0xf9, .x=0xc4, .y=0xe2, .sp=0x8a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x64b6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x64b6, .value=0x80, .type=IO_READ},
        {.addr=0x64b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0270) {
    const struct CPU_State initial_cpu = {.pc=0x283b, .a=0x64, .x=0xeb, .y=0x82, .sp=0x01, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x283b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x283c, .a=0x64, .x=0xeb, .y=0x82, .sp=0x01, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x283b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x283b, .value=0x80, .type=IO_READ},
        {.addr=0x283c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0271) {
    const struct CPU_State initial_cpu = {.pc=0x3040, .a=0x5e, .x=0x6c, .y=0x6a, .sp=0xa0, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3040, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3041, .a=0x5e, .x=0x6c, .y=0x6a, .sp=0xa0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3040, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3040, .value=0x80, .type=IO_READ},
        {.addr=0x3041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0272) {
    const struct CPU_State initial_cpu = {.pc=0xd60e, .a=0xc5, .x=0x79, .y=0xe3, .sp=0x0a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd60e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd60f, .a=0xc5, .x=0x79, .y=0xe3, .sp=0x0a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd60e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd60e, .value=0x80, .type=IO_READ},
        {.addr=0xd60f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3da2, .a=0x63, .x=0xe1, .y=0xa8, .sp=0x35, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x3da2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3da3, .a=0x63, .x=0xe1, .y=0xa8, .sp=0x35, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3da2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3da2, .value=0x80, .type=IO_READ},
        {.addr=0x3da3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4709, .a=0x04, .x=0x21, .y=0x76, .sp=0xa2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4709, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x470a, .a=0x04, .x=0x21, .y=0x76, .sp=0xa2, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4709, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4709, .value=0x80, .type=IO_READ},
        {.addr=0x470a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0275) {
    const struct CPU_State initial_cpu = {.pc=0xc1d8, .a=0x65, .x=0x38, .y=0xc6, .sp=0x32, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc1d9, .a=0x65, .x=0x38, .y=0xc6, .sp=0x32, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc1d8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc1d8, .value=0x80, .type=IO_READ},
        {.addr=0xc1d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0276) {
    const struct CPU_State initial_cpu = {.pc=0xe898, .a=0x89, .x=0x63, .y=0x39, .sp=0xc2, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe898, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe899, .a=0x89, .x=0x63, .y=0x39, .sp=0xc2, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xe898, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe898, .value=0x80, .type=IO_READ},
        {.addr=0xe899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0277) {
    const struct CPU_State initial_cpu = {.pc=0x0cff, .a=0x25, .x=0x68, .y=0xb5, .sp=0xe2, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0cff, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0d00, .a=0x25, .x=0x68, .y=0xb5, .sp=0xe2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0cff, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0cff, .value=0x80, .type=IO_READ},
        {.addr=0x0d00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0278) {
    const struct CPU_State initial_cpu = {.pc=0x5cbe, .a=0x5d, .x=0x1e, .y=0xd6, .sp=0xf7, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5cbf, .a=0x5d, .x=0x1e, .y=0xd6, .sp=0xf7, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x5cbe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5cbe, .value=0x80, .type=IO_READ},
        {.addr=0x5cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0279) {
    const struct CPU_State initial_cpu = {.pc=0x6dd3, .a=0x4d, .x=0x2b, .y=0x43, .sp=0x59, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6dd4, .a=0x4d, .x=0x2b, .y=0x43, .sp=0x59, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x6dd3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6dd3, .value=0x80, .type=IO_READ},
        {.addr=0x6dd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027A) {
    const struct CPU_State initial_cpu = {.pc=0x460e, .a=0xf2, .x=0xd8, .y=0x26, .sp=0xde, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x460e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x460f, .a=0xf2, .x=0xd8, .y=0x26, .sp=0xde, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x460e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x460e, .value=0x80, .type=IO_READ},
        {.addr=0x460f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027B) {
    const struct CPU_State initial_cpu = {.pc=0xd171, .a=0x9d, .x=0xd1, .y=0x54, .sp=0xc6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd171, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd172, .a=0x9d, .x=0xd1, .y=0x54, .sp=0xc6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd171, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd171, .value=0x80, .type=IO_READ},
        {.addr=0xd172, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027C) {
    const struct CPU_State initial_cpu = {.pc=0x689d, .a=0x12, .x=0x4b, .y=0x03, .sp=0x38, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x689d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x689e, .a=0x12, .x=0x4b, .y=0x03, .sp=0x38, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x689d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x689d, .value=0x80, .type=IO_READ},
        {.addr=0x689e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027D) {
    const struct CPU_State initial_cpu = {.pc=0xea33, .a=0x50, .x=0x1d, .y=0xdb, .sp=0xa9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xea33, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xea34, .a=0x50, .x=0x1d, .y=0xdb, .sp=0xa9, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xea33, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xea33, .value=0x80, .type=IO_READ},
        {.addr=0xea34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027E) {
    const struct CPU_State initial_cpu = {.pc=0x44bb, .a=0xc0, .x=0xc8, .y=0xdf, .sp=0x6a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x44bb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x44bc, .a=0xc0, .x=0xc8, .y=0xdf, .sp=0x6a, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x44bb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x44bb, .value=0x80, .type=IO_READ},
        {.addr=0x44bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_027F) {
    const struct CPU_State initial_cpu = {.pc=0xb1f4, .a=0x90, .x=0x0a, .y=0xf4, .sp=0x7b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb1f5, .a=0x90, .x=0x0a, .y=0xf4, .sp=0x7b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xb1f4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb1f4, .value=0x80, .type=IO_READ},
        {.addr=0xb1f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0280) {
    const struct CPU_State initial_cpu = {.pc=0xaf10, .a=0x4a, .x=0x04, .y=0x52, .sp=0xb2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xaf10, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaf11, .a=0x4a, .x=0x04, .y=0x52, .sp=0xb2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xaf10, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaf10, .value=0x80, .type=IO_READ},
        {.addr=0xaf11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0281) {
    const struct CPU_State initial_cpu = {.pc=0xfee6, .a=0x2c, .x=0x6b, .y=0x22, .sp=0xd5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfee6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfee7, .a=0x2c, .x=0x6b, .y=0x22, .sp=0xd5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xfee6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfee6, .value=0x80, .type=IO_READ},
        {.addr=0xfee7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0282) {
    const struct CPU_State initial_cpu = {.pc=0xfefd, .a=0x9b, .x=0xac, .y=0x20, .sp=0x18, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xfefd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfefe, .a=0x9b, .x=0xac, .y=0x20, .sp=0x18, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfefd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfefd, .value=0x80, .type=IO_READ},
        {.addr=0xfefe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0283) {
    const struct CPU_State initial_cpu = {.pc=0x2683, .a=0x2c, .x=0xaf, .y=0xa7, .sp=0xcd, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2683, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2684, .a=0x2c, .x=0xaf, .y=0xa7, .sp=0xcd, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x2683, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2683, .value=0x80, .type=IO_READ},
        {.addr=0x2684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0284) {
    const struct CPU_State initial_cpu = {.pc=0x6837, .a=0xd3, .x=0xf6, .y=0x3e, .sp=0x38, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x6837, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6838, .a=0xd3, .x=0xf6, .y=0x3e, .sp=0x38, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x6837, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6837, .value=0x80, .type=IO_READ},
        {.addr=0x6838, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0285) {
    const struct CPU_State initial_cpu = {.pc=0x69f1, .a=0x82, .x=0x33, .y=0x06, .sp=0xfc, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x69f1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x69f2, .a=0x82, .x=0x33, .y=0x06, .sp=0xfc, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x69f1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x69f1, .value=0x80, .type=IO_READ},
        {.addr=0x69f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0286) {
    const struct CPU_State initial_cpu = {.pc=0x0e63, .a=0xc8, .x=0xba, .y=0xb1, .sp=0x38, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0e63, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0e64, .a=0xc8, .x=0xba, .y=0xb1, .sp=0x38, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0e63, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0e63, .value=0x80, .type=IO_READ},
        {.addr=0x0e64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0287) {
    const struct CPU_State initial_cpu = {.pc=0x4ede, .a=0x93, .x=0x43, .y=0xc3, .sp=0xdb, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4ede, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4edf, .a=0x93, .x=0x43, .y=0xc3, .sp=0xdb, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x4ede, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4ede, .value=0x80, .type=IO_READ},
        {.addr=0x4edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0288) {
    const struct CPU_State initial_cpu = {.pc=0xc929, .a=0xba, .x=0x64, .y=0xde, .sp=0xdc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc929, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc92a, .a=0xba, .x=0x64, .y=0xde, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc929, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc929, .value=0x80, .type=IO_READ},
        {.addr=0xc92a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0289) {
    const struct CPU_State initial_cpu = {.pc=0x561a, .a=0xc8, .x=0x5c, .y=0xa9, .sp=0x7d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x561a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x561b, .a=0xc8, .x=0x5c, .y=0xa9, .sp=0x7d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x561a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x561a, .value=0x80, .type=IO_READ},
        {.addr=0x561b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028A) {
    const struct CPU_State initial_cpu = {.pc=0x7709, .a=0x76, .x=0xb2, .y=0xd7, .sp=0xc4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7709, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x770a, .a=0x76, .x=0xb2, .y=0xd7, .sp=0xc4, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7709, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7709, .value=0x80, .type=IO_READ},
        {.addr=0x770a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028B) {
    const struct CPU_State initial_cpu = {.pc=0x4968, .a=0xac, .x=0x86, .y=0xac, .sp=0x9c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x4968, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4969, .a=0xac, .x=0x86, .y=0xac, .sp=0x9c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4968, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4968, .value=0x80, .type=IO_READ},
        {.addr=0x4969, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028C) {
    const struct CPU_State initial_cpu = {.pc=0x4ce9, .a=0x0f, .x=0x44, .y=0x95, .sp=0xa9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4ce9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4cea, .a=0x0f, .x=0x44, .y=0x95, .sp=0xa9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4ce9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4ce9, .value=0x80, .type=IO_READ},
        {.addr=0x4cea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028D) {
    const struct CPU_State initial_cpu = {.pc=0x15a3, .a=0xc6, .x=0xf8, .y=0xc2, .sp=0x64, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x15a3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x15a4, .a=0xc6, .x=0xf8, .y=0xc2, .sp=0x64, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x15a3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x15a3, .value=0x80, .type=IO_READ},
        {.addr=0x15a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028E) {
    const struct CPU_State initial_cpu = {.pc=0xfb08, .a=0x02, .x=0x94, .y=0x1d, .sp=0x56, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xfb08, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfb09, .a=0x02, .x=0x94, .y=0x1d, .sp=0x56, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xfb08, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfb08, .value=0x80, .type=IO_READ},
        {.addr=0xfb09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_028F) {
    const struct CPU_State initial_cpu = {.pc=0x0d8a, .a=0x15, .x=0x37, .y=0x05, .sp=0x0e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0d8b, .a=0x15, .x=0x37, .y=0x05, .sp=0x0e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0d8a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0d8a, .value=0x80, .type=IO_READ},
        {.addr=0x0d8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0290) {
    const struct CPU_State initial_cpu = {.pc=0x593e, .a=0x36, .x=0x0c, .y=0x68, .sp=0x4c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x593e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x593f, .a=0x36, .x=0x0c, .y=0x68, .sp=0x4c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x593e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x593e, .value=0x80, .type=IO_READ},
        {.addr=0x593f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0291) {
    const struct CPU_State initial_cpu = {.pc=0x72ad, .a=0x4c, .x=0x6e, .y=0x8d, .sp=0xbf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x72ad, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x72ae, .a=0x4c, .x=0x6e, .y=0x8d, .sp=0xbf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x72ad, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x72ad, .value=0x80, .type=IO_READ},
        {.addr=0x72ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfa3e, .a=0x34, .x=0x58, .y=0xe3, .sp=0x7d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfa3f, .a=0x34, .x=0x58, .y=0xe3, .sp=0x7d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfa3e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfa3e, .value=0x80, .type=IO_READ},
        {.addr=0xfa3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0293) {
    const struct CPU_State initial_cpu = {.pc=0x7ed5, .a=0x2b, .x=0x4e, .y=0x31, .sp=0x5f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7ed5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7ed6, .a=0x2b, .x=0x4e, .y=0x31, .sp=0x5f, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7ed5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7ed5, .value=0x80, .type=IO_READ},
        {.addr=0x7ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0294) {
    const struct CPU_State initial_cpu = {.pc=0x5753, .a=0x17, .x=0x34, .y=0xe4, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5753, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5754, .a=0x17, .x=0x34, .y=0xe4, .sp=0x72, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x5753, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5753, .value=0x80, .type=IO_READ},
        {.addr=0x5754, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0295) {
    const struct CPU_State initial_cpu = {.pc=0xcd9f, .a=0x85, .x=0x51, .y=0xc1, .sp=0x9f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xcd9f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcda0, .a=0x85, .x=0x51, .y=0xc1, .sp=0x9f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xcd9f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcd9f, .value=0x80, .type=IO_READ},
        {.addr=0xcda0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0296) {
    const struct CPU_State initial_cpu = {.pc=0x97e9, .a=0x44, .x=0x41, .y=0xf3, .sp=0x61, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x97e9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x97ea, .a=0x44, .x=0x41, .y=0xf3, .sp=0x61, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x97e9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x97e9, .value=0x80, .type=IO_READ},
        {.addr=0x97ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0297) {
    const struct CPU_State initial_cpu = {.pc=0x33d8, .a=0x74, .x=0x64, .y=0xed, .sp=0xcd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x33d8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x33d9, .a=0x74, .x=0x64, .y=0xed, .sp=0xcd, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x33d8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x33d8, .value=0x80, .type=IO_READ},
        {.addr=0x33d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0298) {
    const struct CPU_State initial_cpu = {.pc=0xc9fe, .a=0x13, .x=0x1c, .y=0x26, .sp=0x48, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc9fe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc9ff, .a=0x13, .x=0x1c, .y=0x26, .sp=0x48, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xc9fe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc9fe, .value=0x80, .type=IO_READ},
        {.addr=0xc9ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0299) {
    const struct CPU_State initial_cpu = {.pc=0x398e, .a=0x66, .x=0xb2, .y=0xba, .sp=0x40, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x398e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x398f, .a=0x66, .x=0xb2, .y=0xba, .sp=0x40, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x398e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x398e, .value=0x80, .type=IO_READ},
        {.addr=0x398f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029A) {
    const struct CPU_State initial_cpu = {.pc=0xac89, .a=0x50, .x=0x81, .y=0xfa, .sp=0x7a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xac89, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xac8a, .a=0x50, .x=0x81, .y=0xfa, .sp=0x7a, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xac89, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xac89, .value=0x80, .type=IO_READ},
        {.addr=0xac8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029B) {
    const struct CPU_State initial_cpu = {.pc=0x36a7, .a=0x41, .x=0x9d, .y=0x9a, .sp=0x4f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x36a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x36a8, .a=0x41, .x=0x9d, .y=0x9a, .sp=0x4f, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x36a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x36a7, .value=0x80, .type=IO_READ},
        {.addr=0x36a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029C) {
    const struct CPU_State initial_cpu = {.pc=0xb49b, .a=0x4f, .x=0x74, .y=0x12, .sp=0xe8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb49b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb49c, .a=0x4f, .x=0x74, .y=0x12, .sp=0xe8, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xb49b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb49b, .value=0x80, .type=IO_READ},
        {.addr=0xb49c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029D) {
    const struct CPU_State initial_cpu = {.pc=0x4e08, .a=0x5e, .x=0x16, .y=0x36, .sp=0xe5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4e08, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4e09, .a=0x5e, .x=0x16, .y=0x36, .sp=0xe5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4e08, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4e08, .value=0x80, .type=IO_READ},
        {.addr=0x4e09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029E) {
    const struct CPU_State initial_cpu = {.pc=0x1388, .a=0xab, .x=0x36, .y=0xd8, .sp=0xd3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1388, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1389, .a=0xab, .x=0x36, .y=0xd8, .sp=0xd3, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x1388, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1388, .value=0x80, .type=IO_READ},
        {.addr=0x1389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_029F) {
    const struct CPU_State initial_cpu = {.pc=0x9e9d, .a=0xf2, .x=0xff, .y=0x08, .sp=0xf9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9e9e, .a=0xf2, .x=0xff, .y=0x08, .sp=0xf9, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x9e9d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9e9d, .value=0x80, .type=IO_READ},
        {.addr=0x9e9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5170, .a=0xd9, .x=0xc6, .y=0x8e, .sp=0x48, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5170, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5171, .a=0xd9, .x=0xc6, .y=0x8e, .sp=0x48, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x5170, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5170, .value=0x80, .type=IO_READ},
        {.addr=0x5171, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x53bb, .a=0xa4, .x=0xfc, .y=0x00, .sp=0xa6, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x53bb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x53bc, .a=0xa4, .x=0xfc, .y=0x00, .sp=0xa6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x53bb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x53bb, .value=0x80, .type=IO_READ},
        {.addr=0x53bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xfd25, .a=0x61, .x=0x5b, .y=0xc4, .sp=0xcc, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd25, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfd26, .a=0x61, .x=0x5b, .y=0xc4, .sp=0xcc, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xfd25, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfd25, .value=0x80, .type=IO_READ},
        {.addr=0xfd26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x968b, .a=0xb9, .x=0x20, .y=0x6f, .sp=0xc2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x968b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x968c, .a=0xb9, .x=0x20, .y=0x6f, .sp=0xc2, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x968b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x968b, .value=0x80, .type=IO_READ},
        {.addr=0x968c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9086, .a=0xc9, .x=0x9e, .y=0x64, .sp=0x9f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9086, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9087, .a=0xc9, .x=0x9e, .y=0x64, .sp=0x9f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x9086, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9086, .value=0x80, .type=IO_READ},
        {.addr=0x9087, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xfef2, .a=0xad, .x=0x6f, .y=0x13, .sp=0xa2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xfef2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfef3, .a=0xad, .x=0x6f, .y=0x13, .sp=0xa2, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xfef2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfef2, .value=0x80, .type=IO_READ},
        {.addr=0xfef3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x3135, .a=0x33, .x=0x96, .y=0x5a, .sp=0x5f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3135, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3136, .a=0x33, .x=0x96, .y=0x5a, .sp=0x5f, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3135, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3135, .value=0x80, .type=IO_READ},
        {.addr=0x3136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xbeab, .a=0x97, .x=0xed, .y=0x1f, .sp=0x60, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xbeab, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbeac, .a=0x97, .x=0xed, .y=0x1f, .sp=0x60, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbeab, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbeab, .value=0x80, .type=IO_READ},
        {.addr=0xbeac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x555b, .a=0x6a, .x=0xfe, .y=0x1d, .sp=0xf0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x555b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x555c, .a=0x6a, .x=0xfe, .y=0x1d, .sp=0xf0, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x555b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x555b, .value=0x80, .type=IO_READ},
        {.addr=0x555c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc05e, .a=0x9f, .x=0xfd, .y=0x36, .sp=0xff, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc05e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc05f, .a=0x9f, .x=0xfd, .y=0x36, .sp=0xff, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc05e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc05e, .value=0x80, .type=IO_READ},
        {.addr=0xc05f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x799a, .a=0xef, .x=0xc6, .y=0x28, .sp=0xe3, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x799a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x799b, .a=0xef, .x=0xc6, .y=0x28, .sp=0xe3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x799a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x799a, .value=0x80, .type=IO_READ},
        {.addr=0x799b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xbb55, .a=0xc5, .x=0x34, .y=0x1d, .sp=0xdf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xbb55, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbb56, .a=0xc5, .x=0x34, .y=0x1d, .sp=0xdf, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xbb55, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbb55, .value=0x80, .type=IO_READ},
        {.addr=0xbb56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x8066, .a=0xf9, .x=0x24, .y=0xc5, .sp=0x1c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x8066, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8067, .a=0xf9, .x=0x24, .y=0xc5, .sp=0x1c, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x8066, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8066, .value=0x80, .type=IO_READ},
        {.addr=0x8067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x5c36, .a=0x84, .x=0xe2, .y=0xfa, .sp=0x5a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5c36, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5c37, .a=0x84, .x=0xe2, .y=0xfa, .sp=0x5a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5c36, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5c36, .value=0x80, .type=IO_READ},
        {.addr=0x5c37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x6a71, .a=0xbd, .x=0xa6, .y=0x43, .sp=0xb7, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6a71, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6a72, .a=0xbd, .x=0xa6, .y=0x43, .sp=0xb7, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x6a71, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6a71, .value=0x80, .type=IO_READ},
        {.addr=0x6a72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xd006, .a=0x16, .x=0x82, .y=0xdc, .sp=0x4a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd006, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd007, .a=0x16, .x=0x82, .y=0xdc, .sp=0x4a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd006, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd006, .value=0x80, .type=IO_READ},
        {.addr=0xd007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x75fe, .a=0x60, .x=0x53, .y=0x35, .sp=0x9f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x75fe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x75ff, .a=0x60, .x=0x53, .y=0x35, .sp=0x9f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x75fe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x75fe, .value=0x80, .type=IO_READ},
        {.addr=0x75ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xbf40, .a=0x59, .x=0xb1, .y=0xab, .sp=0x0c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xbf40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbf41, .a=0x59, .x=0xb1, .y=0xab, .sp=0x0c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xbf40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbf40, .value=0x80, .type=IO_READ},
        {.addr=0xbf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xce03, .a=0x9b, .x=0xca, .y=0x5e, .sp=0x15, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xce03, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xce04, .a=0x9b, .x=0xca, .y=0x5e, .sp=0x15, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xce03, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xce03, .value=0x80, .type=IO_READ},
        {.addr=0xce04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x4d92, .a=0x68, .x=0xfa, .y=0xc6, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4d92, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4d93, .a=0x68, .x=0xfa, .y=0xc6, .sp=0x0d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4d92, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4d92, .value=0x80, .type=IO_READ},
        {.addr=0x4d93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x5a3f, .a=0xe7, .x=0x15, .y=0x03, .sp=0x8f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a3f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5a40, .a=0xe7, .x=0x15, .y=0x03, .sp=0x8f, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x5a3f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5a3f, .value=0x80, .type=IO_READ},
        {.addr=0x5a40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xaffc, .a=0x88, .x=0xea, .y=0x66, .sp=0x9c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xaffc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaffd, .a=0x88, .x=0xea, .y=0x66, .sp=0x9c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xaffc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaffc, .value=0x80, .type=IO_READ},
        {.addr=0xaffd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x2f99, .a=0xde, .x=0x5c, .y=0x54, .sp=0x80, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f99, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2f9a, .a=0xde, .x=0x5c, .y=0x54, .sp=0x80, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x2f99, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2f99, .value=0x80, .type=IO_READ},
        {.addr=0x2f9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x21a1, .a=0x9f, .x=0xe2, .y=0x06, .sp=0x3b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x21a1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x21a2, .a=0x9f, .x=0xe2, .y=0x06, .sp=0x3b, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x21a1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x21a1, .value=0x80, .type=IO_READ},
        {.addr=0x21a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x9068, .a=0xfb, .x=0xcd, .y=0x32, .sp=0x49, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9068, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9069, .a=0xfb, .x=0xcd, .y=0x32, .sp=0x49, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9068, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9068, .value=0x80, .type=IO_READ},
        {.addr=0x9069, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2ba6, .a=0xfc, .x=0xc8, .y=0xf8, .sp=0x07, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2ba7, .a=0xfc, .x=0xc8, .y=0xf8, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2ba6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2ba6, .value=0x80, .type=IO_READ},
        {.addr=0x2ba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x1c3a, .a=0x91, .x=0xed, .y=0x5a, .sp=0x66, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1c3b, .a=0x91, .x=0xed, .y=0x5a, .sp=0x66, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x1c3a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1c3a, .value=0x80, .type=IO_READ},
        {.addr=0x1c3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x34eb, .a=0x51, .x=0xf3, .y=0x16, .sp=0x56, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x34eb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x34ec, .a=0x51, .x=0xf3, .y=0x16, .sp=0x56, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x34eb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x34eb, .value=0x80, .type=IO_READ},
        {.addr=0x34ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x23c4, .a=0x9f, .x=0x6d, .y=0x93, .sp=0x98, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x23c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x23c5, .a=0x9f, .x=0x6d, .y=0x93, .sp=0x98, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x23c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x23c4, .value=0x80, .type=IO_READ},
        {.addr=0x23c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x8ee3, .a=0x93, .x=0x98, .y=0x78, .sp=0x1b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8ee3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8ee4, .a=0x93, .x=0x98, .y=0x78, .sp=0x1b, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x8ee3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8ee3, .value=0x80, .type=IO_READ},
        {.addr=0x8ee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x4636, .a=0x91, .x=0x54, .y=0x1e, .sp=0x59, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4636, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4637, .a=0x91, .x=0x54, .y=0x1e, .sp=0x59, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4636, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4636, .value=0x80, .type=IO_READ},
        {.addr=0x4637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xab9d, .a=0xe9, .x=0x4f, .y=0x59, .sp=0x0c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xab9d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xab9e, .a=0xe9, .x=0x4f, .y=0x59, .sp=0x0c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xab9d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xab9d, .value=0x80, .type=IO_READ},
        {.addr=0xab9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2c40, .a=0xae, .x=0xed, .y=0x87, .sp=0x10, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2c40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2c41, .a=0xae, .x=0xed, .y=0x87, .sp=0x10, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2c40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2c40, .value=0x80, .type=IO_READ},
        {.addr=0x2c41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x3fe9, .a=0x02, .x=0x0d, .y=0x34, .sp=0xa7, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3fea, .a=0x02, .x=0x0d, .y=0x34, .sp=0xa7, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x3fe9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3fe9, .value=0x80, .type=IO_READ},
        {.addr=0x3fea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x9305, .a=0xbc, .x=0x19, .y=0x90, .sp=0x50, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x9305, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9306, .a=0xbc, .x=0x19, .y=0x90, .sp=0x50, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x9305, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9305, .value=0x80, .type=IO_READ},
        {.addr=0x9306, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xd9f4, .a=0x5d, .x=0xd0, .y=0x2b, .sp=0x03, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd9f5, .a=0x5d, .x=0xd0, .y=0x2b, .sp=0x03, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xd9f4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd9f4, .value=0x80, .type=IO_READ},
        {.addr=0xd9f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xd394, .a=0xd0, .x=0xc8, .y=0x62, .sp=0xb3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd394, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd395, .a=0xd0, .x=0xc8, .y=0x62, .sp=0xb3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd394, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd394, .value=0x80, .type=IO_READ},
        {.addr=0xd395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x7ca5, .a=0xb2, .x=0xdf, .y=0x37, .sp=0xb3, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7ca6, .a=0xb2, .x=0xdf, .y=0x37, .sp=0xb3, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x7ca5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7ca5, .value=0x80, .type=IO_READ},
        {.addr=0x7ca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x5b13, .a=0xba, .x=0x27, .y=0x54, .sp=0x1e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5b13, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5b14, .a=0xba, .x=0x27, .y=0x54, .sp=0x1e, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x5b13, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5b13, .value=0x80, .type=IO_READ},
        {.addr=0x5b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xed76, .a=0x0e, .x=0x74, .y=0x6c, .sp=0x1a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xed76, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xed77, .a=0x0e, .x=0x74, .y=0x6c, .sp=0x1a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xed76, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xed76, .value=0x80, .type=IO_READ},
        {.addr=0xed77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7b57, .a=0x74, .x=0xee, .y=0xb0, .sp=0xa5, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b57, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7b58, .a=0x74, .x=0xee, .y=0xb0, .sp=0xa5, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x7b57, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7b57, .value=0x80, .type=IO_READ},
        {.addr=0x7b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xecf4, .a=0xb0, .x=0xc3, .y=0x89, .sp=0x11, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xecf4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xecf5, .a=0xb0, .x=0xc3, .y=0x89, .sp=0x11, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xecf4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xecf4, .value=0x80, .type=IO_READ},
        {.addr=0xecf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x618b, .a=0x20, .x=0x2f, .y=0x68, .sp=0xfe, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x618b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x618c, .a=0x20, .x=0x2f, .y=0x68, .sp=0xfe, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x618b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x618b, .value=0x80, .type=IO_READ},
        {.addr=0x618c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x34c8, .a=0xcf, .x=0x55, .y=0x71, .sp=0x62, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x34c8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x34c9, .a=0xcf, .x=0x55, .y=0x71, .sp=0x62, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x34c8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x34c8, .value=0x80, .type=IO_READ},
        {.addr=0x34c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x927d, .a=0x9e, .x=0x50, .y=0x30, .sp=0x4a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x927d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x927e, .a=0x9e, .x=0x50, .y=0x30, .sp=0x4a, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x927d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x927d, .value=0x80, .type=IO_READ},
        {.addr=0x927e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6aa0, .a=0x18, .x=0x10, .y=0xb3, .sp=0xba, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6aa1, .a=0x18, .x=0x10, .y=0xb3, .sp=0xba, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6aa0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6aa0, .value=0x80, .type=IO_READ},
        {.addr=0x6aa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x6237, .a=0x7a, .x=0x57, .y=0x3b, .sp=0xc8, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6237, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6238, .a=0x7a, .x=0x57, .y=0x3b, .sp=0xc8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6237, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6237, .value=0x80, .type=IO_READ},
        {.addr=0x6238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x3248, .a=0xdb, .x=0xc4, .y=0xe0, .sp=0xb3, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3248, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3249, .a=0xdb, .x=0xc4, .y=0xe0, .sp=0xb3, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x3248, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3248, .value=0x80, .type=IO_READ},
        {.addr=0x3249, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x3bd3, .a=0xe6, .x=0x61, .y=0x3b, .sp=0x18, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3bd4, .a=0xe6, .x=0x61, .y=0x3b, .sp=0x18, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3bd3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3bd3, .value=0x80, .type=IO_READ},
        {.addr=0x3bd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x812c, .a=0x30, .x=0x41, .y=0x30, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x812c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x812d, .a=0x30, .x=0x41, .y=0x30, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x812c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x812c, .value=0x80, .type=IO_READ},
        {.addr=0x812d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xd166, .a=0x78, .x=0x8a, .y=0xcf, .sp=0xae, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd166, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd167, .a=0x78, .x=0x8a, .y=0xcf, .sp=0xae, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xd166, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd166, .value=0x80, .type=IO_READ},
        {.addr=0xd167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xb14a, .a=0xc2, .x=0x71, .y=0xeb, .sp=0x0f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb14a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb14b, .a=0xc2, .x=0x71, .y=0xeb, .sp=0x0f, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xb14a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb14a, .value=0x80, .type=IO_READ},
        {.addr=0xb14b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x1eb3, .a=0x13, .x=0x44, .y=0x8b, .sp=0xa3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1eb4, .a=0x13, .x=0x44, .y=0x8b, .sp=0xa3, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x1eb3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1eb3, .value=0x80, .type=IO_READ},
        {.addr=0x1eb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xaa3e, .a=0x25, .x=0xdf, .y=0xa7, .sp=0x0a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xaa3e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaa3f, .a=0x25, .x=0xdf, .y=0xa7, .sp=0x0a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xaa3e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaa3e, .value=0x80, .type=IO_READ},
        {.addr=0xaa3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xcceb, .a=0x97, .x=0x41, .y=0xe2, .sp=0x97, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xcceb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xccec, .a=0x97, .x=0x41, .y=0xe2, .sp=0x97, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xcceb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcceb, .value=0x80, .type=IO_READ},
        {.addr=0xccec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x3b0c, .a=0xdb, .x=0x67, .y=0x9e, .sp=0xcf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x3b0c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3b0d, .a=0xdb, .x=0x67, .y=0x9e, .sp=0xcf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3b0c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3b0c, .value=0x80, .type=IO_READ},
        {.addr=0x3b0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xbab3, .a=0x08, .x=0x2e, .y=0x28, .sp=0xc7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xbab3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbab4, .a=0x08, .x=0x2e, .y=0x28, .sp=0xc7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbab3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbab3, .value=0x80, .type=IO_READ},
        {.addr=0xbab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x3726, .a=0xe0, .x=0x44, .y=0x5d, .sp=0xfc, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3726, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3727, .a=0xe0, .x=0x44, .y=0x5d, .sp=0xfc, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x3726, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3726, .value=0x80, .type=IO_READ},
        {.addr=0x3727, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x46ea, .a=0x81, .x=0xd0, .y=0xe9, .sp=0x20, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x46ea, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x46eb, .a=0x81, .x=0xd0, .y=0xe9, .sp=0x20, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x46ea, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x46ea, .value=0x80, .type=IO_READ},
        {.addr=0x46eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x54d1, .a=0x65, .x=0x09, .y=0xb3, .sp=0xe2, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x54d1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x54d2, .a=0x65, .x=0x09, .y=0xb3, .sp=0xe2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x54d1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x54d1, .value=0x80, .type=IO_READ},
        {.addr=0x54d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xc11a, .a=0xd3, .x=0x47, .y=0x51, .sp=0xdb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc11a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc11b, .a=0xd3, .x=0x47, .y=0x51, .sp=0xdb, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xc11a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc11a, .value=0x80, .type=IO_READ},
        {.addr=0xc11b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xede7, .a=0x8c, .x=0xa7, .y=0x91, .sp=0xa8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xede7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xede8, .a=0x8c, .x=0xa7, .y=0x91, .sp=0xa8, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xede7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xede7, .value=0x80, .type=IO_READ},
        {.addr=0xede8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x30de, .a=0xea, .x=0xa8, .y=0xbe, .sp=0x45, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x30de, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x30df, .a=0xea, .x=0xa8, .y=0xbe, .sp=0x45, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x30de, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x30de, .value=0x80, .type=IO_READ},
        {.addr=0x30df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x589f, .a=0xb6, .x=0x0f, .y=0x03, .sp=0xbc, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x589f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x58a0, .a=0xb6, .x=0x0f, .y=0x03, .sp=0xbc, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x589f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x589f, .value=0x80, .type=IO_READ},
        {.addr=0x58a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x34d2, .a=0xed, .x=0x67, .y=0x95, .sp=0x96, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x34d2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x34d3, .a=0xed, .x=0x67, .y=0x95, .sp=0x96, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x34d2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x34d2, .value=0x80, .type=IO_READ},
        {.addr=0x34d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x866a, .a=0x85, .x=0x9e, .y=0xc5, .sp=0x2d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x866a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x866b, .a=0x85, .x=0x9e, .y=0xc5, .sp=0x2d, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x866a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x866a, .value=0x80, .type=IO_READ},
        {.addr=0x866b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x7f5e, .a=0x46, .x=0x22, .y=0x26, .sp=0xf2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f5f, .a=0x46, .x=0x22, .y=0x26, .sp=0xf2, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7f5e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f5e, .value=0x80, .type=IO_READ},
        {.addr=0x7f5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xc943, .a=0x3a, .x=0xb9, .y=0x9e, .sp=0x94, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc943, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc944, .a=0x3a, .x=0xb9, .y=0x9e, .sp=0x94, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc943, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc943, .value=0x80, .type=IO_READ},
        {.addr=0xc944, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xd6d6, .a=0x39, .x=0xad, .y=0x31, .sp=0x95, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd6d7, .a=0x39, .x=0xad, .y=0x31, .sp=0x95, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd6d6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd6d6, .value=0x80, .type=IO_READ},
        {.addr=0xd6d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x8253, .a=0xcc, .x=0x37, .y=0xba, .sp=0x8a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8253, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8254, .a=0xcc, .x=0x37, .y=0xba, .sp=0x8a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x8253, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8253, .value=0x80, .type=IO_READ},
        {.addr=0x8254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xf370, .a=0xd6, .x=0x86, .y=0x7c, .sp=0xb5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf370, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf371, .a=0xd6, .x=0x86, .y=0x7c, .sp=0xb5, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xf370, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf370, .value=0x80, .type=IO_READ},
        {.addr=0xf371, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x868a, .a=0x3e, .x=0xb6, .y=0x8c, .sp=0xf4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x868a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x868b, .a=0x3e, .x=0xb6, .y=0x8c, .sp=0xf4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x868a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x868a, .value=0x80, .type=IO_READ},
        {.addr=0x868b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x600b, .a=0x36, .x=0xfb, .y=0x3a, .sp=0x0d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x600b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x600c, .a=0x36, .x=0xfb, .y=0x3a, .sp=0x0d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x600b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x600b, .value=0x80, .type=IO_READ},
        {.addr=0x600c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xa371, .a=0x13, .x=0x6b, .y=0x3d, .sp=0x98, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa371, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa372, .a=0x13, .x=0x6b, .y=0x3d, .sp=0x98, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa371, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa371, .value=0x80, .type=IO_READ},
        {.addr=0xa372, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8f6d, .a=0x40, .x=0xb3, .y=0xf5, .sp=0x47, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x8f6d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8f6e, .a=0x40, .x=0xb3, .y=0xf5, .sp=0x47, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x8f6d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8f6d, .value=0x80, .type=IO_READ},
        {.addr=0x8f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xd2c2, .a=0xf6, .x=0x0e, .y=0x09, .sp=0x5f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd2c3, .a=0xf6, .x=0x0e, .y=0x09, .sp=0x5f, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xd2c2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd2c2, .value=0x80, .type=IO_READ},
        {.addr=0xd2c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x499e, .a=0x22, .x=0xdc, .y=0x82, .sp=0x2b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x499e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x499f, .a=0x22, .x=0xdc, .y=0x82, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x499e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x499e, .value=0x80, .type=IO_READ},
        {.addr=0x499f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x54b1, .a=0x7d, .x=0x3b, .y=0x75, .sp=0x6b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x54b1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x54b2, .a=0x7d, .x=0x3b, .y=0x75, .sp=0x6b, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x54b1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x54b1, .value=0x80, .type=IO_READ},
        {.addr=0x54b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf98e, .a=0x7e, .x=0x0e, .y=0x31, .sp=0xdc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf98e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf98f, .a=0x7e, .x=0x0e, .y=0x31, .sp=0xdc, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xf98e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf98e, .value=0x80, .type=IO_READ},
        {.addr=0xf98f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x3761, .a=0x81, .x=0xb7, .y=0xbd, .sp=0xb2, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x3761, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3762, .a=0x81, .x=0xb7, .y=0xbd, .sp=0xb2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3761, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3761, .value=0x80, .type=IO_READ},
        {.addr=0x3762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x93c8, .a=0x1a, .x=0x21, .y=0xc4, .sp=0xbc, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x93c8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x93c9, .a=0x1a, .x=0x21, .y=0xc4, .sp=0xbc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x93c8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x93c8, .value=0x80, .type=IO_READ},
        {.addr=0x93c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x1013, .a=0x33, .x=0x61, .y=0xa9, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1013, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1014, .a=0x33, .x=0x61, .y=0xa9, .sp=0x2a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x1013, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1013, .value=0x80, .type=IO_READ},
        {.addr=0x1014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x4eec, .a=0x13, .x=0x05, .y=0x73, .sp=0x29, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4eec, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4eed, .a=0x13, .x=0x05, .y=0x73, .sp=0x29, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4eec, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4eec, .value=0x80, .type=IO_READ},
        {.addr=0x4eed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xf040, .a=0x5a, .x=0xd0, .y=0x3d, .sp=0x3f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf040, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf041, .a=0x5a, .x=0xd0, .y=0x3d, .sp=0x3f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf040, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf040, .value=0x80, .type=IO_READ},
        {.addr=0xf041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x7a29, .a=0xf0, .x=0x35, .y=0x09, .sp=0x18, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7a29, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7a2a, .a=0xf0, .x=0x35, .y=0x09, .sp=0x18, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7a29, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7a29, .value=0x80, .type=IO_READ},
        {.addr=0x7a2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x7a4f, .a=0x29, .x=0xbd, .y=0x91, .sp=0x8f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x7a4f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7a50, .a=0x29, .x=0xbd, .y=0x91, .sp=0x8f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x7a4f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7a4f, .value=0x80, .type=IO_READ},
        {.addr=0x7a50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x9450, .a=0x88, .x=0xf1, .y=0x96, .sp=0x2e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9450, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9451, .a=0x88, .x=0xf1, .y=0x96, .sp=0x2e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9450, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9450, .value=0x80, .type=IO_READ},
        {.addr=0x9451, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x583e, .a=0xea, .x=0x6f, .y=0xd4, .sp=0x10, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x583e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x583f, .a=0xea, .x=0x6f, .y=0xd4, .sp=0x10, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x583e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x583e, .value=0x80, .type=IO_READ},
        {.addr=0x583f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x3ebe, .a=0xba, .x=0x44, .y=0x6b, .sp=0x11, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3ebf, .a=0xba, .x=0x44, .y=0x6b, .sp=0x11, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3ebe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3ebe, .value=0x80, .type=IO_READ},
        {.addr=0x3ebf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa44b, .a=0x32, .x=0x22, .y=0x55, .sp=0x71, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xa44b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa44c, .a=0x32, .x=0x22, .y=0x55, .sp=0x71, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa44b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa44b, .value=0x80, .type=IO_READ},
        {.addr=0xa44c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xf5ce, .a=0x17, .x=0x37, .y=0x64, .sp=0x9a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ce, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf5cf, .a=0x17, .x=0x37, .y=0x64, .sp=0x9a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf5ce, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf5ce, .value=0x80, .type=IO_READ},
        {.addr=0xf5cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x1607, .a=0x6a, .x=0xd5, .y=0x43, .sp=0x2c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1607, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1608, .a=0x6a, .x=0xd5, .y=0x43, .sp=0x2c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1607, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1607, .value=0x80, .type=IO_READ},
        {.addr=0x1608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x4f83, .a=0x4b, .x=0xf6, .y=0x9a, .sp=0x3e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4f83, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4f84, .a=0x4b, .x=0xf6, .y=0x9a, .sp=0x3e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x4f83, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4f83, .value=0x80, .type=IO_READ},
        {.addr=0x4f84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x80b3, .a=0x20, .x=0x39, .y=0xa0, .sp=0x03, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x80b3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x80b4, .a=0x20, .x=0x39, .y=0xa0, .sp=0x03, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x80b3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x80b3, .value=0x80, .type=IO_READ},
        {.addr=0x80b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x26ff, .a=0xc9, .x=0x3a, .y=0xd2, .sp=0xf0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x26ff, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2700, .a=0xc9, .x=0x3a, .y=0xd2, .sp=0xf0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x26ff, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x26ff, .value=0x80, .type=IO_READ},
        {.addr=0x2700, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xcba6, .a=0x65, .x=0x19, .y=0xd4, .sp=0x10, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xcba6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcba7, .a=0x65, .x=0x19, .y=0xd4, .sp=0x10, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcba6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcba6, .value=0x80, .type=IO_READ},
        {.addr=0xcba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0300) {
    const struct CPU_State initial_cpu = {.pc=0x180f, .a=0x77, .x=0x4f, .y=0xb2, .sp=0x96, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x180f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1810, .a=0x77, .x=0x4f, .y=0xb2, .sp=0x96, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x180f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x180f, .value=0x80, .type=IO_READ},
        {.addr=0x1810, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0301) {
    const struct CPU_State initial_cpu = {.pc=0x18ff, .a=0xfc, .x=0x61, .y=0x66, .sp=0x6e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x18ff, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1900, .a=0xfc, .x=0x61, .y=0x66, .sp=0x6e, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x18ff, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x18ff, .value=0x80, .type=IO_READ},
        {.addr=0x1900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0302) {
    const struct CPU_State initial_cpu = {.pc=0xcabe, .a=0x92, .x=0xe0, .y=0xa5, .sp=0x0c, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xcabe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcabf, .a=0x92, .x=0xe0, .y=0xa5, .sp=0x0c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcabe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcabe, .value=0x80, .type=IO_READ},
        {.addr=0xcabf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0303) {
    const struct CPU_State initial_cpu = {.pc=0x53d6, .a=0xfa, .x=0x27, .y=0x84, .sp=0x61, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x53d6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x53d7, .a=0xfa, .x=0x27, .y=0x84, .sp=0x61, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x53d6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x53d6, .value=0x80, .type=IO_READ},
        {.addr=0x53d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0304) {
    const struct CPU_State initial_cpu = {.pc=0x0002, .a=0x25, .x=0x79, .y=0xf2, .sp=0x0f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0003, .a=0x25, .x=0x79, .y=0xf2, .sp=0x0f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0002, .value=0x80, .type=IO_READ},
        {.addr=0x0003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0305) {
    const struct CPU_State initial_cpu = {.pc=0xd08b, .a=0xa8, .x=0xde, .y=0x2a, .sp=0xf8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd08b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd08c, .a=0xa8, .x=0xde, .y=0x2a, .sp=0xf8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xd08b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd08b, .value=0x80, .type=IO_READ},
        {.addr=0xd08c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0306) {
    const struct CPU_State initial_cpu = {.pc=0x2b70, .a=0xe7, .x=0xfe, .y=0xd2, .sp=0x36, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2b70, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2b71, .a=0xe7, .x=0xfe, .y=0xd2, .sp=0x36, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2b70, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2b70, .value=0x80, .type=IO_READ},
        {.addr=0x2b71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4918, .a=0xee, .x=0x7e, .y=0x7c, .sp=0x4d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4918, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4919, .a=0xee, .x=0x7e, .y=0x7c, .sp=0x4d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x4918, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4918, .value=0x80, .type=IO_READ},
        {.addr=0x4919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0308) {
    const struct CPU_State initial_cpu = {.pc=0x8500, .a=0xc0, .x=0x9e, .y=0x23, .sp=0x73, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x8500, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8501, .a=0xc0, .x=0x9e, .y=0x23, .sp=0x73, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x8500, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8500, .value=0x80, .type=IO_READ},
        {.addr=0x8501, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0309) {
    const struct CPU_State initial_cpu = {.pc=0x39b3, .a=0x9f, .x=0xcd, .y=0x8d, .sp=0x37, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x39b3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x39b4, .a=0x9f, .x=0xcd, .y=0x8d, .sp=0x37, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x39b3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x39b3, .value=0x80, .type=IO_READ},
        {.addr=0x39b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030A) {
    const struct CPU_State initial_cpu = {.pc=0x0835, .a=0x84, .x=0xd9, .y=0x33, .sp=0x09, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0835, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0836, .a=0x84, .x=0xd9, .y=0x33, .sp=0x09, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0835, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0835, .value=0x80, .type=IO_READ},
        {.addr=0x0836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030B) {
    const struct CPU_State initial_cpu = {.pc=0x87ae, .a=0x11, .x=0x46, .y=0xa4, .sp=0x66, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x87ae, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x87af, .a=0x11, .x=0x46, .y=0xa4, .sp=0x66, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x87ae, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x87ae, .value=0x80, .type=IO_READ},
        {.addr=0x87af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030C) {
    const struct CPU_State initial_cpu = {.pc=0xe17e, .a=0xe3, .x=0x9c, .y=0x80, .sp=0x02, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xe17e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe17f, .a=0xe3, .x=0x9c, .y=0x80, .sp=0x02, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xe17e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe17e, .value=0x80, .type=IO_READ},
        {.addr=0xe17f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030D) {
    const struct CPU_State initial_cpu = {.pc=0xa2fb, .a=0x1c, .x=0x2c, .y=0xac, .sp=0xff, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa2fb, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa2fc, .a=0x1c, .x=0x2c, .y=0xac, .sp=0xff, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa2fb, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa2fb, .value=0x80, .type=IO_READ},
        {.addr=0xa2fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030E) {
    const struct CPU_State initial_cpu = {.pc=0xa865, .a=0xfd, .x=0xf8, .y=0x7d, .sp=0x6e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa865, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa866, .a=0xfd, .x=0xf8, .y=0x7d, .sp=0x6e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa865, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa865, .value=0x80, .type=IO_READ},
        {.addr=0xa866, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_030F) {
    const struct CPU_State initial_cpu = {.pc=0x6fe1, .a=0xbd, .x=0x9d, .y=0x24, .sp=0xaf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6fe1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6fe2, .a=0xbd, .x=0x9d, .y=0x24, .sp=0xaf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6fe1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6fe1, .value=0x80, .type=IO_READ},
        {.addr=0x6fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0310) {
    const struct CPU_State initial_cpu = {.pc=0x9a55, .a=0xc1, .x=0x6b, .y=0x22, .sp=0xa8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x9a55, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9a56, .a=0xc1, .x=0x6b, .y=0x22, .sp=0xa8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9a55, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9a55, .value=0x80, .type=IO_READ},
        {.addr=0x9a56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0311) {
    const struct CPU_State initial_cpu = {.pc=0x9af2, .a=0x51, .x=0x24, .y=0x5e, .sp=0x2e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9af2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9af3, .a=0x51, .x=0x24, .y=0x5e, .sp=0x2e, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x9af2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9af2, .value=0x80, .type=IO_READ},
        {.addr=0x9af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0312) {
    const struct CPU_State initial_cpu = {.pc=0x1fc8, .a=0xd6, .x=0x64, .y=0x7a, .sp=0xf6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1fc9, .a=0xd6, .x=0x64, .y=0x7a, .sp=0xf6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1fc8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1fc8, .value=0x80, .type=IO_READ},
        {.addr=0x1fc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0313) {
    const struct CPU_State initial_cpu = {.pc=0xa11f, .a=0xb4, .x=0x10, .y=0xa1, .sp=0xb4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa11f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa120, .a=0xb4, .x=0x10, .y=0xa1, .sp=0xb4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa11f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa11f, .value=0x80, .type=IO_READ},
        {.addr=0xa120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0314) {
    const struct CPU_State initial_cpu = {.pc=0x876d, .a=0x12, .x=0x46, .y=0xc5, .sp=0x23, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x876d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x876e, .a=0x12, .x=0x46, .y=0xc5, .sp=0x23, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x876d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x876d, .value=0x80, .type=IO_READ},
        {.addr=0x876e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0315) {
    const struct CPU_State initial_cpu = {.pc=0x5890, .a=0x72, .x=0xc7, .y=0x68, .sp=0x32, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5890, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5891, .a=0x72, .x=0xc7, .y=0x68, .sp=0x32, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x5890, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5890, .value=0x80, .type=IO_READ},
        {.addr=0x5891, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0316) {
    const struct CPU_State initial_cpu = {.pc=0xdd0e, .a=0x04, .x=0x59, .y=0x36, .sp=0x0c, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdd0f, .a=0x04, .x=0x59, .y=0x36, .sp=0x0c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdd0e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdd0e, .value=0x80, .type=IO_READ},
        {.addr=0xdd0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0317) {
    const struct CPU_State initial_cpu = {.pc=0xefcf, .a=0xf4, .x=0x10, .y=0x2b, .sp=0x82, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xefcf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xefd0, .a=0xf4, .x=0x10, .y=0x2b, .sp=0x82, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xefcf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xefcf, .value=0x80, .type=IO_READ},
        {.addr=0xefd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0318) {
    const struct CPU_State initial_cpu = {.pc=0xb2b6, .a=0xa3, .x=0xdd, .y=0xf4, .sp=0xdb, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb2b7, .a=0xa3, .x=0xdd, .y=0xf4, .sp=0xdb, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xb2b6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb2b6, .value=0x80, .type=IO_READ},
        {.addr=0xb2b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0319) {
    const struct CPU_State initial_cpu = {.pc=0x70cc, .a=0x5c, .x=0x8a, .y=0x9d, .sp=0xa1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x70cc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x70cd, .a=0x5c, .x=0x8a, .y=0x9d, .sp=0xa1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x70cc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x70cc, .value=0x80, .type=IO_READ},
        {.addr=0x70cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031A) {
    const struct CPU_State initial_cpu = {.pc=0x5c40, .a=0x32, .x=0x47, .y=0xf0, .sp=0xd1, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x5c40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5c41, .a=0x32, .x=0x47, .y=0xf0, .sp=0xd1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5c40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5c40, .value=0x80, .type=IO_READ},
        {.addr=0x5c41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf455, .a=0xb9, .x=0x7a, .y=0x3c, .sp=0xe7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf455, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf456, .a=0xb9, .x=0x7a, .y=0x3c, .sp=0xe7, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf455, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf455, .value=0x80, .type=IO_READ},
        {.addr=0xf456, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031C) {
    const struct CPU_State initial_cpu = {.pc=0x067b, .a=0x0c, .x=0xba, .y=0x16, .sp=0x57, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x067b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x067c, .a=0x0c, .x=0xba, .y=0x16, .sp=0x57, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x067b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x067b, .value=0x80, .type=IO_READ},
        {.addr=0x067c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031D) {
    const struct CPU_State initial_cpu = {.pc=0x01be, .a=0x75, .x=0x20, .y=0x5a, .sp=0xe0, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x01bf, .a=0x75, .x=0x20, .y=0x5a, .sp=0xe0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x01be, .value=0x80, .type=IO_READ},
        {.addr=0x01bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031E) {
    const struct CPU_State initial_cpu = {.pc=0x9026, .a=0xc4, .x=0x67, .y=0x1c, .sp=0x3e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9026, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9027, .a=0xc4, .x=0x67, .y=0x1c, .sp=0x3e, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x9026, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9026, .value=0x80, .type=IO_READ},
        {.addr=0x9027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_031F) {
    const struct CPU_State initial_cpu = {.pc=0x37d8, .a=0x1a, .x=0x57, .y=0x88, .sp=0x4a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x37d8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x37d9, .a=0x1a, .x=0x57, .y=0x88, .sp=0x4a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x37d8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x37d8, .value=0x80, .type=IO_READ},
        {.addr=0x37d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0320) {
    const struct CPU_State initial_cpu = {.pc=0x1f62, .a=0xf4, .x=0x5a, .y=0x2e, .sp=0xaf, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1f62, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1f63, .a=0xf4, .x=0x5a, .y=0x2e, .sp=0xaf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1f62, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1f62, .value=0x80, .type=IO_READ},
        {.addr=0x1f63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0321) {
    const struct CPU_State initial_cpu = {.pc=0x73f3, .a=0x3e, .x=0x5c, .y=0xb2, .sp=0x59, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x73f3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x73f4, .a=0x3e, .x=0x5c, .y=0xb2, .sp=0x59, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x73f3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x73f3, .value=0x80, .type=IO_READ},
        {.addr=0x73f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0322) {
    const struct CPU_State initial_cpu = {.pc=0xa89b, .a=0xc3, .x=0x63, .y=0xf9, .sp=0x31, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa89b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa89c, .a=0xc3, .x=0x63, .y=0xf9, .sp=0x31, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa89b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa89b, .value=0x80, .type=IO_READ},
        {.addr=0xa89c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa635, .a=0x3e, .x=0xd7, .y=0x59, .sp=0xaf, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa635, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa636, .a=0x3e, .x=0xd7, .y=0x59, .sp=0xaf, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xa635, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa635, .value=0x80, .type=IO_READ},
        {.addr=0xa636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0324) {
    const struct CPU_State initial_cpu = {.pc=0x0b8d, .a=0xf2, .x=0x5e, .y=0x83, .sp=0x84, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0b8e, .a=0xf2, .x=0x5e, .y=0x83, .sp=0x84, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0b8d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0b8d, .value=0x80, .type=IO_READ},
        {.addr=0x0b8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0325) {
    const struct CPU_State initial_cpu = {.pc=0xb917, .a=0xf2, .x=0x5d, .y=0xa7, .sp=0x68, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb917, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb918, .a=0xf2, .x=0x5d, .y=0xa7, .sp=0x68, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xb917, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb917, .value=0x80, .type=IO_READ},
        {.addr=0xb918, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0326) {
    const struct CPU_State initial_cpu = {.pc=0x4f54, .a=0x28, .x=0x8d, .y=0xa2, .sp=0x45, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4f54, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4f55, .a=0x28, .x=0x8d, .y=0xa2, .sp=0x45, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x4f54, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4f54, .value=0x80, .type=IO_READ},
        {.addr=0x4f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0327) {
    const struct CPU_State initial_cpu = {.pc=0x58f8, .a=0x38, .x=0x2f, .y=0xa2, .sp=0x8e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x58f8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x58f9, .a=0x38, .x=0x2f, .y=0xa2, .sp=0x8e, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x58f8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x58f8, .value=0x80, .type=IO_READ},
        {.addr=0x58f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa220, .a=0xf5, .x=0xb7, .y=0x98, .sp=0x8a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa220, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa221, .a=0xf5, .x=0xb7, .y=0x98, .sp=0x8a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa220, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa220, .value=0x80, .type=IO_READ},
        {.addr=0xa221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0329) {
    const struct CPU_State initial_cpu = {.pc=0x4c8f, .a=0xe9, .x=0x65, .y=0x6a, .sp=0x25, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4c8f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4c90, .a=0xe9, .x=0x65, .y=0x6a, .sp=0x25, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4c8f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c8f, .value=0x80, .type=IO_READ},
        {.addr=0x4c90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032A) {
    const struct CPU_State initial_cpu = {.pc=0xb642, .a=0x5d, .x=0x09, .y=0x0f, .sp=0xde, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xb642, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb643, .a=0x5d, .x=0x09, .y=0x0f, .sp=0xde, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb642, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb642, .value=0x80, .type=IO_READ},
        {.addr=0xb643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032B) {
    const struct CPU_State initial_cpu = {.pc=0xb886, .a=0x57, .x=0x2a, .y=0x6b, .sp=0x87, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb886, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb887, .a=0x57, .x=0x2a, .y=0x6b, .sp=0x87, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb886, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb886, .value=0x80, .type=IO_READ},
        {.addr=0xb887, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032C) {
    const struct CPU_State initial_cpu = {.pc=0x264f, .a=0x65, .x=0x39, .y=0xc5, .sp=0xe7, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x264f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2650, .a=0x65, .x=0x39, .y=0xc5, .sp=0xe7, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x264f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x264f, .value=0x80, .type=IO_READ},
        {.addr=0x2650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032D) {
    const struct CPU_State initial_cpu = {.pc=0x2d86, .a=0xf0, .x=0x42, .y=0xd1, .sp=0x50, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2d86, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2d87, .a=0xf0, .x=0x42, .y=0xd1, .sp=0x50, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x2d86, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2d86, .value=0x80, .type=IO_READ},
        {.addr=0x2d87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032E) {
    const struct CPU_State initial_cpu = {.pc=0x53c4, .a=0x19, .x=0xe5, .y=0xb0, .sp=0x18, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x53c4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x53c5, .a=0x19, .x=0xe5, .y=0xb0, .sp=0x18, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x53c4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x53c4, .value=0x80, .type=IO_READ},
        {.addr=0x53c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_032F) {
    const struct CPU_State initial_cpu = {.pc=0x492f, .a=0x89, .x=0xeb, .y=0x8f, .sp=0x9b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x492f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4930, .a=0x89, .x=0xeb, .y=0x8f, .sp=0x9b, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x492f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x492f, .value=0x80, .type=IO_READ},
        {.addr=0x4930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0330) {
    const struct CPU_State initial_cpu = {.pc=0xac81, .a=0xe4, .x=0x5c, .y=0x10, .sp=0x7b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xac81, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xac82, .a=0xe4, .x=0x5c, .y=0x10, .sp=0x7b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xac81, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xac81, .value=0x80, .type=IO_READ},
        {.addr=0xac82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0331) {
    const struct CPU_State initial_cpu = {.pc=0x953f, .a=0x9d, .x=0x3c, .y=0x13, .sp=0xce, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x953f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9540, .a=0x9d, .x=0x3c, .y=0x13, .sp=0xce, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x953f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x953f, .value=0x80, .type=IO_READ},
        {.addr=0x9540, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0332) {
    const struct CPU_State initial_cpu = {.pc=0xfaa3, .a=0x82, .x=0x44, .y=0x45, .sp=0x08, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfaa4, .a=0x82, .x=0x44, .y=0x45, .sp=0x08, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfaa3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfaa3, .value=0x80, .type=IO_READ},
        {.addr=0xfaa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0333) {
    const struct CPU_State initial_cpu = {.pc=0x5066, .a=0x45, .x=0xe0, .y=0xb2, .sp=0x4d, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5066, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5067, .a=0x45, .x=0xe0, .y=0xb2, .sp=0x4d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x5066, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5066, .value=0x80, .type=IO_READ},
        {.addr=0x5067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0334) {
    const struct CPU_State initial_cpu = {.pc=0xc143, .a=0x15, .x=0xfb, .y=0x05, .sp=0x7f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc143, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc144, .a=0x15, .x=0xfb, .y=0x05, .sp=0x7f, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc143, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc143, .value=0x80, .type=IO_READ},
        {.addr=0xc144, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0335) {
    const struct CPU_State initial_cpu = {.pc=0x5811, .a=0xeb, .x=0xeb, .y=0x53, .sp=0x43, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5811, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5812, .a=0xeb, .x=0xeb, .y=0x53, .sp=0x43, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5811, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5811, .value=0x80, .type=IO_READ},
        {.addr=0x5812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0336) {
    const struct CPU_State initial_cpu = {.pc=0x1d35, .a=0x10, .x=0x00, .y=0x5b, .sp=0x3d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1d35, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1d36, .a=0x10, .x=0x00, .y=0x5b, .sp=0x3d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x1d35, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1d35, .value=0x80, .type=IO_READ},
        {.addr=0x1d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0337) {
    const struct CPU_State initial_cpu = {.pc=0x5cb0, .a=0x01, .x=0xed, .y=0x19, .sp=0x26, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5cb1, .a=0x01, .x=0xed, .y=0x19, .sp=0x26, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x5cb0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5cb0, .value=0x80, .type=IO_READ},
        {.addr=0x5cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0338) {
    const struct CPU_State initial_cpu = {.pc=0xaa5d, .a=0x12, .x=0x96, .y=0x4b, .sp=0x44, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0x12, .x=0x96, .y=0x4b, .sp=0x44, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xaa5d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaa5d, .value=0x80, .type=IO_READ},
        {.addr=0xaa5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0339) {
    const struct CPU_State initial_cpu = {.pc=0xe085, .a=0xdb, .x=0x0b, .y=0x16, .sp=0xe9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe085, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe086, .a=0xdb, .x=0x0b, .y=0x16, .sp=0xe9, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe085, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe085, .value=0x80, .type=IO_READ},
        {.addr=0xe086, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf8e3, .a=0x22, .x=0x15, .y=0x93, .sp=0x94, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf8e4, .a=0x22, .x=0x15, .y=0x93, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf8e3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf8e3, .value=0x80, .type=IO_READ},
        {.addr=0xf8e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033B) {
    const struct CPU_State initial_cpu = {.pc=0x9167, .a=0x42, .x=0xa2, .y=0x50, .sp=0x71, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9167, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9168, .a=0x42, .x=0xa2, .y=0x50, .sp=0x71, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9167, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9167, .value=0x80, .type=IO_READ},
        {.addr=0x9168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033C) {
    const struct CPU_State initial_cpu = {.pc=0x4c9f, .a=0x4a, .x=0xb8, .y=0x33, .sp=0x3b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4ca0, .a=0x4a, .x=0xb8, .y=0x33, .sp=0x3b, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x4c9f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c9f, .value=0x80, .type=IO_READ},
        {.addr=0x4ca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033D) {
    const struct CPU_State initial_cpu = {.pc=0xeb15, .a=0xf0, .x=0xd1, .y=0xaf, .sp=0x20, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb15, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xeb16, .a=0xf0, .x=0xd1, .y=0xaf, .sp=0x20, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xeb15, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xeb15, .value=0x80, .type=IO_READ},
        {.addr=0xeb16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033E) {
    const struct CPU_State initial_cpu = {.pc=0x61c3, .a=0xf9, .x=0xd6, .y=0x88, .sp=0x1e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x61c3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x61c4, .a=0xf9, .x=0xd6, .y=0x88, .sp=0x1e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x61c3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x61c3, .value=0x80, .type=IO_READ},
        {.addr=0x61c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_033F) {
    const struct CPU_State initial_cpu = {.pc=0x8637, .a=0xb4, .x=0x69, .y=0xd7, .sp=0x2a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x8637, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8638, .a=0xb4, .x=0x69, .y=0xd7, .sp=0x2a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8637, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8637, .value=0x80, .type=IO_READ},
        {.addr=0x8638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0340) {
    const struct CPU_State initial_cpu = {.pc=0x5cd1, .a=0x09, .x=0xd2, .y=0x8f, .sp=0x91, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5cd2, .a=0x09, .x=0xd2, .y=0x8f, .sp=0x91, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5cd1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5cd1, .value=0x80, .type=IO_READ},
        {.addr=0x5cd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0341) {
    const struct CPU_State initial_cpu = {.pc=0x2a94, .a=0x92, .x=0x50, .y=0x2e, .sp=0xc7, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a94, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2a95, .a=0x92, .x=0x50, .y=0x2e, .sp=0xc7, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x2a94, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2a94, .value=0x80, .type=IO_READ},
        {.addr=0x2a95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0342) {
    const struct CPU_State initial_cpu = {.pc=0x6341, .a=0x7e, .x=0x4a, .y=0x59, .sp=0x4c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6341, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6342, .a=0x7e, .x=0x4a, .y=0x59, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6341, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6341, .value=0x80, .type=IO_READ},
        {.addr=0x6342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0343) {
    const struct CPU_State initial_cpu = {.pc=0x53c3, .a=0x23, .x=0x62, .y=0x11, .sp=0x29, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x53c3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x53c4, .a=0x23, .x=0x62, .y=0x11, .sp=0x29, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x53c3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x53c3, .value=0x80, .type=IO_READ},
        {.addr=0x53c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0344) {
    const struct CPU_State initial_cpu = {.pc=0x5150, .a=0xf2, .x=0xff, .y=0xa9, .sp=0x02, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5150, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0xf2, .x=0xff, .y=0xa9, .sp=0x02, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5150, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5150, .value=0x80, .type=IO_READ},
        {.addr=0x5151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0345) {
    const struct CPU_State initial_cpu = {.pc=0x9c79, .a=0xad, .x=0xfe, .y=0xe1, .sp=0x84, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c79, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9c7a, .a=0xad, .x=0xfe, .y=0xe1, .sp=0x84, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9c79, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9c79, .value=0x80, .type=IO_READ},
        {.addr=0x9c7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0346) {
    const struct CPU_State initial_cpu = {.pc=0x7f66, .a=0x0f, .x=0xf2, .y=0x3f, .sp=0xd4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7f66, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f67, .a=0x0f, .x=0xf2, .y=0x3f, .sp=0xd4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7f66, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f66, .value=0x80, .type=IO_READ},
        {.addr=0x7f67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0347) {
    const struct CPU_State initial_cpu = {.pc=0x4c2f, .a=0x69, .x=0xce, .y=0x28, .sp=0xdf, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4c30, .a=0x69, .x=0xce, .y=0x28, .sp=0xdf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4c2f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c2f, .value=0x80, .type=IO_READ},
        {.addr=0x4c30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0348) {
    const struct CPU_State initial_cpu = {.pc=0xa866, .a=0xd4, .x=0xf3, .y=0x67, .sp=0xb0, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa866, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa867, .a=0xd4, .x=0xf3, .y=0x67, .sp=0xb0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa866, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa866, .value=0x80, .type=IO_READ},
        {.addr=0xa867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0349) {
    const struct CPU_State initial_cpu = {.pc=0x559b, .a=0x6d, .x=0x69, .y=0x04, .sp=0xa6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x559b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x559c, .a=0x6d, .x=0x69, .y=0x04, .sp=0xa6, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x559b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x559b, .value=0x80, .type=IO_READ},
        {.addr=0x559c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034A) {
    const struct CPU_State initial_cpu = {.pc=0x0fa4, .a=0xe6, .x=0xe9, .y=0x9b, .sp=0x04, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0fa4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0fa5, .a=0xe6, .x=0xe9, .y=0x9b, .sp=0x04, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0fa4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0fa4, .value=0x80, .type=IO_READ},
        {.addr=0x0fa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034B) {
    const struct CPU_State initial_cpu = {.pc=0x7508, .a=0x0b, .x=0xd3, .y=0x4d, .sp=0x58, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7508, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7509, .a=0x0b, .x=0xd3, .y=0x4d, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7508, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7508, .value=0x80, .type=IO_READ},
        {.addr=0x7509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034C) {
    const struct CPU_State initial_cpu = {.pc=0x872e, .a=0xd9, .x=0x48, .y=0xfa, .sp=0xe0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x872e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x872f, .a=0xd9, .x=0x48, .y=0xfa, .sp=0xe0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x872e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x872e, .value=0x80, .type=IO_READ},
        {.addr=0x872f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034D) {
    const struct CPU_State initial_cpu = {.pc=0x1aac, .a=0xb8, .x=0xbb, .y=0x51, .sp=0xbb, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1aac, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1aad, .a=0xb8, .x=0xbb, .y=0x51, .sp=0xbb, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x1aac, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1aac, .value=0x80, .type=IO_READ},
        {.addr=0x1aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034E) {
    const struct CPU_State initial_cpu = {.pc=0x974d, .a=0x28, .x=0x68, .y=0xeb, .sp=0x3e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x974d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x974e, .a=0x28, .x=0x68, .y=0xeb, .sp=0x3e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x974d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x974d, .value=0x80, .type=IO_READ},
        {.addr=0x974e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_034F) {
    const struct CPU_State initial_cpu = {.pc=0x8500, .a=0x20, .x=0x00, .y=0xaa, .sp=0x23, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8500, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8501, .a=0x20, .x=0x00, .y=0xaa, .sp=0x23, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8500, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8500, .value=0x80, .type=IO_READ},
        {.addr=0x8501, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0350) {
    const struct CPU_State initial_cpu = {.pc=0x6341, .a=0xfe, .x=0x69, .y=0xea, .sp=0xb2, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x6341, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6342, .a=0xfe, .x=0x69, .y=0xea, .sp=0xb2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6341, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6341, .value=0x80, .type=IO_READ},
        {.addr=0x6342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0351) {
    const struct CPU_State initial_cpu = {.pc=0xc935, .a=0x94, .x=0xfe, .y=0x51, .sp=0x0a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc935, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc936, .a=0x94, .x=0xfe, .y=0x51, .sp=0x0a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xc935, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc935, .value=0x80, .type=IO_READ},
        {.addr=0xc936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0352) {
    const struct CPU_State initial_cpu = {.pc=0x48f0, .a=0x68, .x=0xa7, .y=0x2a, .sp=0x18, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x48f0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x48f1, .a=0x68, .x=0xa7, .y=0x2a, .sp=0x18, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x48f0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x48f0, .value=0x80, .type=IO_READ},
        {.addr=0x48f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0353) {
    const struct CPU_State initial_cpu = {.pc=0x5140, .a=0x87, .x=0x50, .y=0x23, .sp=0xab, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5140, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5141, .a=0x87, .x=0x50, .y=0x23, .sp=0xab, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5140, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5140, .value=0x80, .type=IO_READ},
        {.addr=0x5141, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0354) {
    const struct CPU_State initial_cpu = {.pc=0xdac0, .a=0xb8, .x=0xcf, .y=0x2f, .sp=0x6e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xdac0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdac1, .a=0xb8, .x=0xcf, .y=0x2f, .sp=0x6e, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xdac0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdac0, .value=0x80, .type=IO_READ},
        {.addr=0xdac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0355) {
    const struct CPU_State initial_cpu = {.pc=0x888e, .a=0x44, .x=0x08, .y=0x65, .sp=0xb5, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x888e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x888f, .a=0x44, .x=0x08, .y=0x65, .sp=0xb5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x888e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x888e, .value=0x80, .type=IO_READ},
        {.addr=0x888f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0356) {
    const struct CPU_State initial_cpu = {.pc=0x5ac8, .a=0x28, .x=0xc8, .y=0xba, .sp=0x67, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5ac9, .a=0x28, .x=0xc8, .y=0xba, .sp=0x67, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x5ac8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5ac8, .value=0x80, .type=IO_READ},
        {.addr=0x5ac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0357) {
    const struct CPU_State initial_cpu = {.pc=0xb14e, .a=0x82, .x=0x50, .y=0xb9, .sp=0x53, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xb14e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb14f, .a=0x82, .x=0x50, .y=0xb9, .sp=0x53, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xb14e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb14e, .value=0x80, .type=IO_READ},
        {.addr=0xb14f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5565, .a=0x6f, .x=0x01, .y=0x56, .sp=0xff, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5565, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5566, .a=0x6f, .x=0x01, .y=0x56, .sp=0xff, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x5565, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5565, .value=0x80, .type=IO_READ},
        {.addr=0x5566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0359) {
    const struct CPU_State initial_cpu = {.pc=0xcffc, .a=0x50, .x=0xfb, .y=0x82, .sp=0xe9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xcffc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcffd, .a=0x50, .x=0xfb, .y=0x82, .sp=0xe9, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xcffc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcffc, .value=0x80, .type=IO_READ},
        {.addr=0xcffd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035A) {
    const struct CPU_State initial_cpu = {.pc=0x0644, .a=0x8c, .x=0x5b, .y=0x24, .sp=0xde, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0644, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0645, .a=0x8c, .x=0x5b, .y=0x24, .sp=0xde, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0644, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0644, .value=0x80, .type=IO_READ},
        {.addr=0x0645, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0ef4, .a=0x0a, .x=0x65, .y=0x6d, .sp=0x07, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0ef5, .a=0x0a, .x=0x65, .y=0x6d, .sp=0x07, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0ef4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0ef4, .value=0x80, .type=IO_READ},
        {.addr=0x0ef5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035C) {
    const struct CPU_State initial_cpu = {.pc=0xa7a9, .a=0xdd, .x=0xce, .y=0x76, .sp=0xb3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa7a9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa7aa, .a=0xdd, .x=0xce, .y=0x76, .sp=0xb3, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xa7a9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa7a9, .value=0x80, .type=IO_READ},
        {.addr=0xa7aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035D) {
    const struct CPU_State initial_cpu = {.pc=0x6be6, .a=0x4f, .x=0x3a, .y=0xc1, .sp=0xb9, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6be6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6be7, .a=0x4f, .x=0x3a, .y=0xc1, .sp=0xb9, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6be6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6be6, .value=0x80, .type=IO_READ},
        {.addr=0x6be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd701, .a=0x95, .x=0x47, .y=0xcf, .sp=0x49, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd701, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd702, .a=0x95, .x=0x47, .y=0xcf, .sp=0x49, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xd701, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd701, .value=0x80, .type=IO_READ},
        {.addr=0xd702, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_035F) {
    const struct CPU_State initial_cpu = {.pc=0xed26, .a=0xd7, .x=0xa3, .y=0x6b, .sp=0x40, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xed26, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xed27, .a=0xd7, .x=0xa3, .y=0x6b, .sp=0x40, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xed26, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xed26, .value=0x80, .type=IO_READ},
        {.addr=0xed27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0360) {
    const struct CPU_State initial_cpu = {.pc=0x012b, .a=0x3e, .x=0x31, .y=0x20, .sp=0xef, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x012c, .a=0x3e, .x=0x31, .y=0x20, .sp=0xef, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x012b, .value=0x80, .type=IO_READ},
        {.addr=0x012c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4f7f, .a=0x33, .x=0xa4, .y=0x36, .sp=0xde, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4f80, .a=0x33, .x=0xa4, .y=0x36, .sp=0xde, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x4f7f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4f7f, .value=0x80, .type=IO_READ},
        {.addr=0x4f80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0362) {
    const struct CPU_State initial_cpu = {.pc=0x971b, .a=0x37, .x=0x73, .y=0xd2, .sp=0x3b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x971b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0x37, .x=0x73, .y=0xd2, .sp=0x3b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x971b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x971b, .value=0x80, .type=IO_READ},
        {.addr=0x971c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0363) {
    const struct CPU_State initial_cpu = {.pc=0x68d2, .a=0x7b, .x=0x6d, .y=0x3b, .sp=0x13, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x68d2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x68d3, .a=0x7b, .x=0x6d, .y=0x3b, .sp=0x13, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x68d2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x68d2, .value=0x80, .type=IO_READ},
        {.addr=0x68d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0364) {
    const struct CPU_State initial_cpu = {.pc=0xf3ee, .a=0x96, .x=0xe9, .y=0xab, .sp=0xfa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf3ee, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf3ef, .a=0x96, .x=0xe9, .y=0xab, .sp=0xfa, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xf3ee, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf3ee, .value=0x80, .type=IO_READ},
        {.addr=0xf3ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0365) {
    const struct CPU_State initial_cpu = {.pc=0xde96, .a=0xba, .x=0xc3, .y=0xbe, .sp=0x4f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xde96, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xde97, .a=0xba, .x=0xc3, .y=0xbe, .sp=0x4f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xde96, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xde96, .value=0x80, .type=IO_READ},
        {.addr=0xde97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0366) {
    const struct CPU_State initial_cpu = {.pc=0x9c4c, .a=0x58, .x=0xb7, .y=0xb9, .sp=0xf1, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9c4c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9c4d, .a=0x58, .x=0xb7, .y=0xb9, .sp=0xf1, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x9c4c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9c4c, .value=0x80, .type=IO_READ},
        {.addr=0x9c4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0367) {
    const struct CPU_State initial_cpu = {.pc=0x56d4, .a=0x7f, .x=0x2b, .y=0x3e, .sp=0x34, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x56d4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x56d5, .a=0x7f, .x=0x2b, .y=0x3e, .sp=0x34, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x56d4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x56d4, .value=0x80, .type=IO_READ},
        {.addr=0x56d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0368) {
    const struct CPU_State initial_cpu = {.pc=0x3f80, .a=0x7e, .x=0xad, .y=0xa7, .sp=0xab, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x3f80, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3f81, .a=0x7e, .x=0xad, .y=0xa7, .sp=0xab, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3f80, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3f80, .value=0x80, .type=IO_READ},
        {.addr=0x3f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0369) {
    const struct CPU_State initial_cpu = {.pc=0xbef4, .a=0x65, .x=0x99, .y=0x71, .sp=0x8a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbef4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbef5, .a=0x65, .x=0x99, .y=0x71, .sp=0x8a, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xbef4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbef4, .value=0x80, .type=IO_READ},
        {.addr=0xbef5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036A) {
    const struct CPU_State initial_cpu = {.pc=0x5cbf, .a=0xfb, .x=0xbb, .y=0xb7, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbf, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5cc0, .a=0xfb, .x=0xbb, .y=0xb7, .sp=0x5b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5cbf, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5cbf, .value=0x80, .type=IO_READ},
        {.addr=0x5cc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036B) {
    const struct CPU_State initial_cpu = {.pc=0x45db, .a=0x82, .x=0x59, .y=0x83, .sp=0xb1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x45db, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x45dc, .a=0x82, .x=0x59, .y=0x83, .sp=0xb1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x45db, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x45db, .value=0x80, .type=IO_READ},
        {.addr=0x45dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036C) {
    const struct CPU_State initial_cpu = {.pc=0x57c7, .a=0x0b, .x=0xe0, .y=0x1a, .sp=0x51, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x57c7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x57c8, .a=0x0b, .x=0xe0, .y=0x1a, .sp=0x51, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x57c7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x57c7, .value=0x80, .type=IO_READ},
        {.addr=0x57c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036D) {
    const struct CPU_State initial_cpu = {.pc=0xd62f, .a=0x1b, .x=0x39, .y=0xd5, .sp=0x6a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd62f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd630, .a=0x1b, .x=0x39, .y=0xd5, .sp=0x6a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd62f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd62f, .value=0x80, .type=IO_READ},
        {.addr=0xd630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036E) {
    const struct CPU_State initial_cpu = {.pc=0xfdb8, .a=0x3a, .x=0x60, .y=0xb0, .sp=0x48, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfdb9, .a=0x3a, .x=0x60, .y=0xb0, .sp=0x48, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xfdb8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfdb8, .value=0x80, .type=IO_READ},
        {.addr=0xfdb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_036F) {
    const struct CPU_State initial_cpu = {.pc=0x3295, .a=0x9a, .x=0x3d, .y=0x7e, .sp=0xfa, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x3295, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3296, .a=0x9a, .x=0x3d, .y=0x7e, .sp=0xfa, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x3295, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3295, .value=0x80, .type=IO_READ},
        {.addr=0x3296, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0370) {
    const struct CPU_State initial_cpu = {.pc=0x350d, .a=0x54, .x=0x6e, .y=0xed, .sp=0x1d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x350d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x350e, .a=0x54, .x=0x6e, .y=0xed, .sp=0x1d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x350d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x350d, .value=0x80, .type=IO_READ},
        {.addr=0x350e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0371) {
    const struct CPU_State initial_cpu = {.pc=0x548a, .a=0x14, .x=0xf6, .y=0xc6, .sp=0xe0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x548a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x548b, .a=0x14, .x=0xf6, .y=0xc6, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x548a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x548a, .value=0x80, .type=IO_READ},
        {.addr=0x548b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4cf7, .a=0x57, .x=0x2d, .y=0xaa, .sp=0x37, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4cf8, .a=0x57, .x=0x2d, .y=0xaa, .sp=0x37, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4cf7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4cf7, .value=0x80, .type=IO_READ},
        {.addr=0x4cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0373) {
    const struct CPU_State initial_cpu = {.pc=0x761e, .a=0x0a, .x=0x02, .y=0xeb, .sp=0x2b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x761e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x761f, .a=0x0a, .x=0x02, .y=0xeb, .sp=0x2b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x761e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x761e, .value=0x80, .type=IO_READ},
        {.addr=0x761f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0374) {
    const struct CPU_State initial_cpu = {.pc=0xe42a, .a=0x88, .x=0x3b, .y=0x67, .sp=0x83, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe42a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe42b, .a=0x88, .x=0x3b, .y=0x67, .sp=0x83, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe42a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe42a, .value=0x80, .type=IO_READ},
        {.addr=0xe42b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0375) {
    const struct CPU_State initial_cpu = {.pc=0x11e4, .a=0x69, .x=0x60, .y=0xa5, .sp=0x0b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x11e4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0x69, .x=0x60, .y=0xa5, .sp=0x0b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x11e4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x11e4, .value=0x80, .type=IO_READ},
        {.addr=0x11e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0376) {
    const struct CPU_State initial_cpu = {.pc=0x31f1, .a=0x19, .x=0x83, .y=0xfc, .sp=0xa3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x31f1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x31f2, .a=0x19, .x=0x83, .y=0xfc, .sp=0xa3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x31f1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x31f1, .value=0x80, .type=IO_READ},
        {.addr=0x31f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0377) {
    const struct CPU_State initial_cpu = {.pc=0x1e62, .a=0x02, .x=0x48, .y=0xae, .sp=0x22, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e62, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1e63, .a=0x02, .x=0x48, .y=0xae, .sp=0x22, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1e62, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e62, .value=0x80, .type=IO_READ},
        {.addr=0x1e63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0378) {
    const struct CPU_State initial_cpu = {.pc=0x0c0a, .a=0xfd, .x=0x2a, .y=0xd4, .sp=0x1d, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c0a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0c0b, .a=0xfd, .x=0x2a, .y=0xd4, .sp=0x1d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0c0a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0c0a, .value=0x80, .type=IO_READ},
        {.addr=0x0c0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0379) {
    const struct CPU_State initial_cpu = {.pc=0x9a4e, .a=0x0d, .x=0x81, .y=0xbd, .sp=0xd5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9a4f, .a=0x0d, .x=0x81, .y=0xbd, .sp=0xd5, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9a4e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9a4e, .value=0x80, .type=IO_READ},
        {.addr=0x9a4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037A) {
    const struct CPU_State initial_cpu = {.pc=0xdfc1, .a=0x19, .x=0x29, .y=0xc4, .sp=0xef, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xdfc1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xdfc2, .a=0x19, .x=0x29, .y=0xc4, .sp=0xef, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xdfc1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xdfc1, .value=0x80, .type=IO_READ},
        {.addr=0xdfc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037B) {
    const struct CPU_State initial_cpu = {.pc=0xcf24, .a=0x88, .x=0x50, .y=0xe2, .sp=0x5c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xcf24, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcf25, .a=0x88, .x=0x50, .y=0xe2, .sp=0x5c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xcf24, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcf24, .value=0x80, .type=IO_READ},
        {.addr=0xcf25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8782, .a=0xf7, .x=0x06, .y=0x91, .sp=0x5b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x8782, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8783, .a=0xf7, .x=0x06, .y=0x91, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8782, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8782, .value=0x80, .type=IO_READ},
        {.addr=0x8783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037D) {
    const struct CPU_State initial_cpu = {.pc=0xe05f, .a=0x3b, .x=0x05, .y=0xe8, .sp=0x4c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe05f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe060, .a=0x3b, .x=0x05, .y=0xe8, .sp=0x4c, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xe05f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe05f, .value=0x80, .type=IO_READ},
        {.addr=0xe060, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037E) {
    const struct CPU_State initial_cpu = {.pc=0xcec4, .a=0xbd, .x=0x5d, .y=0x50, .sp=0x65, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xcec4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcec5, .a=0xbd, .x=0x5d, .y=0x50, .sp=0x65, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xcec4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcec4, .value=0x80, .type=IO_READ},
        {.addr=0xcec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_037F) {
    const struct CPU_State initial_cpu = {.pc=0x8d9b, .a=0x32, .x=0xd4, .y=0x0c, .sp=0x56, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8d9b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8d9c, .a=0x32, .x=0xd4, .y=0x0c, .sp=0x56, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8d9b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8d9b, .value=0x80, .type=IO_READ},
        {.addr=0x8d9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0380) {
    const struct CPU_State initial_cpu = {.pc=0x1523, .a=0xf8, .x=0x6d, .y=0x18, .sp=0x96, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1523, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1524, .a=0xf8, .x=0x6d, .y=0x18, .sp=0x96, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1523, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1523, .value=0x80, .type=IO_READ},
        {.addr=0x1524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0381) {
    const struct CPU_State initial_cpu = {.pc=0xbf7d, .a=0xbc, .x=0x10, .y=0xe2, .sp=0xc9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xbf7d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbf7e, .a=0xbc, .x=0x10, .y=0xe2, .sp=0xc9, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xbf7d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbf7d, .value=0x80, .type=IO_READ},
        {.addr=0xbf7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf5fe, .a=0xff, .x=0xc2, .y=0x76, .sp=0x4a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fe, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf5ff, .a=0xff, .x=0xc2, .y=0x76, .sp=0x4a, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0xf5fe, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf5fe, .value=0x80, .type=IO_READ},
        {.addr=0xf5ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0383) {
    const struct CPU_State initial_cpu = {.pc=0xce12, .a=0x20, .x=0x2c, .y=0x63, .sp=0xc5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xce12, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xce13, .a=0x20, .x=0x2c, .y=0x63, .sp=0xc5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xce12, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xce12, .value=0x80, .type=IO_READ},
        {.addr=0xce13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0384) {
    const struct CPU_State initial_cpu = {.pc=0x30dd, .a=0x96, .x=0xcb, .y=0x65, .sp=0x04, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x30dd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x30de, .a=0x96, .x=0xcb, .y=0x65, .sp=0x04, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x30dd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x30dd, .value=0x80, .type=IO_READ},
        {.addr=0x30de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0385) {
    const struct CPU_State initial_cpu = {.pc=0x8e92, .a=0xd7, .x=0xbd, .y=0x8c, .sp=0x5c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8e92, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x8e93, .a=0xd7, .x=0xbd, .y=0x8c, .sp=0x5c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8e92, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x8e92, .value=0x80, .type=IO_READ},
        {.addr=0x8e93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0386) {
    const struct CPU_State initial_cpu = {.pc=0x1e05, .a=0x51, .x=0x54, .y=0x92, .sp=0x3a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1e05, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1e06, .a=0x51, .x=0x54, .y=0x92, .sp=0x3a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1e05, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e05, .value=0x80, .type=IO_READ},
        {.addr=0x1e06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0387) {
    const struct CPU_State initial_cpu = {.pc=0x920b, .a=0x9f, .x=0xc2, .y=0x09, .sp=0x66, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x920b, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x920c, .a=0x9f, .x=0xc2, .y=0x09, .sp=0x66, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x920b, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x920b, .value=0x80, .type=IO_READ},
        {.addr=0x920c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0388) {
    const struct CPU_State initial_cpu = {.pc=0xe243, .a=0xbf, .x=0x5c, .y=0xb3, .sp=0xf6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe243, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe244, .a=0xbf, .x=0x5c, .y=0xb3, .sp=0xf6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe243, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe243, .value=0x80, .type=IO_READ},
        {.addr=0xe244, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0389) {
    const struct CPU_State initial_cpu = {.pc=0x7020, .a=0xfd, .x=0x22, .y=0x6b, .sp=0xfd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7020, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7021, .a=0xfd, .x=0x22, .y=0x6b, .sp=0xfd, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7020, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7020, .value=0x80, .type=IO_READ},
        {.addr=0x7021, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038A) {
    const struct CPU_State initial_cpu = {.pc=0x4a7d, .a=0x8f, .x=0x9a, .y=0x9e, .sp=0x41, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4a7e, .a=0x8f, .x=0x9a, .y=0x9e, .sp=0x41, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x4a7d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4a7d, .value=0x80, .type=IO_READ},
        {.addr=0x4a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038B) {
    const struct CPU_State initial_cpu = {.pc=0xb451, .a=0x00, .x=0x4e, .y=0x3d, .sp=0xba, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb451, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb452, .a=0x00, .x=0x4e, .y=0x3d, .sp=0xba, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb451, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb451, .value=0x80, .type=IO_READ},
        {.addr=0xb452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038C) {
    const struct CPU_State initial_cpu = {.pc=0x0244, .a=0xed, .x=0x89, .y=0xbf, .sp=0x82, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0244, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0245, .a=0xed, .x=0x89, .y=0xbf, .sp=0x82, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0244, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0244, .value=0x80, .type=IO_READ},
        {.addr=0x0245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038D) {
    const struct CPU_State initial_cpu = {.pc=0x9ed5, .a=0xba, .x=0x08, .y=0x0f, .sp=0xba, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x9ed5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9ed6, .a=0xba, .x=0x08, .y=0x0f, .sp=0xba, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x9ed5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9ed5, .value=0x80, .type=IO_READ},
        {.addr=0x9ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038E) {
    const struct CPU_State initial_cpu = {.pc=0xece4, .a=0x5b, .x=0xc9, .y=0xc2, .sp=0x1a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xece4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xece5, .a=0x5b, .x=0xc9, .y=0xc2, .sp=0x1a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xece4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xece4, .value=0x80, .type=IO_READ},
        {.addr=0xece5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_038F) {
    const struct CPU_State initial_cpu = {.pc=0x894a, .a=0xb2, .x=0xc1, .y=0x28, .sp=0x7e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x894a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x894b, .a=0xb2, .x=0xc1, .y=0x28, .sp=0x7e, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x894a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x894a, .value=0x80, .type=IO_READ},
        {.addr=0x894b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0390) {
    const struct CPU_State initial_cpu = {.pc=0xc8e5, .a=0xf0, .x=0x57, .y=0x2f, .sp=0x60, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc8e6, .a=0xf0, .x=0x57, .y=0x2f, .sp=0x60, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc8e5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc8e5, .value=0x80, .type=IO_READ},
        {.addr=0xc8e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0391) {
    const struct CPU_State initial_cpu = {.pc=0x4e64, .a=0xc4, .x=0x82, .y=0xd3, .sp=0x66, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e64, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4e65, .a=0xc4, .x=0x82, .y=0xd3, .sp=0x66, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4e64, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4e64, .value=0x80, .type=IO_READ},
        {.addr=0x4e65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0392) {
    const struct CPU_State initial_cpu = {.pc=0x78a7, .a=0xba, .x=0xee, .y=0xbc, .sp=0xe7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x78a7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x78a8, .a=0xba, .x=0xee, .y=0xbc, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x78a7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x78a7, .value=0x80, .type=IO_READ},
        {.addr=0x78a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0393) {
    const struct CPU_State initial_cpu = {.pc=0x0e2e, .a=0x03, .x=0x50, .y=0x6d, .sp=0x2f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0e2e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0e2f, .a=0x03, .x=0x50, .y=0x6d, .sp=0x2f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0e2e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0e2e, .value=0x80, .type=IO_READ},
        {.addr=0x0e2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0394) {
    const struct CPU_State initial_cpu = {.pc=0xc51d, .a=0x8c, .x=0x15, .y=0x8d, .sp=0x70, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc51d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc51e, .a=0x8c, .x=0x15, .y=0x8d, .sp=0x70, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc51d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc51d, .value=0x80, .type=IO_READ},
        {.addr=0xc51e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0395) {
    const struct CPU_State initial_cpu = {.pc=0xa699, .a=0xdf, .x=0x29, .y=0x86, .sp=0x60, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa699, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa69a, .a=0xdf, .x=0x29, .y=0x86, .sp=0x60, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa699, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa699, .value=0x80, .type=IO_READ},
        {.addr=0xa69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0396) {
    const struct CPU_State initial_cpu = {.pc=0x2be6, .a=0xc3, .x=0x81, .y=0xb8, .sp=0x67, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2be6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2be7, .a=0xc3, .x=0x81, .y=0xb8, .sp=0x67, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2be6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2be6, .value=0x80, .type=IO_READ},
        {.addr=0x2be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4597, .a=0x8c, .x=0x69, .y=0x0c, .sp=0x56, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4597, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4598, .a=0x8c, .x=0x69, .y=0x0c, .sp=0x56, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x4597, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4597, .value=0x80, .type=IO_READ},
        {.addr=0x4598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0398) {
    const struct CPU_State initial_cpu = {.pc=0xd9ea, .a=0xd9, .x=0x48, .y=0x6c, .sp=0xf1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ea, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xd9eb, .a=0xd9, .x=0x48, .y=0x6c, .sp=0xf1, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xd9ea, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xd9ea, .value=0x80, .type=IO_READ},
        {.addr=0xd9eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_0399) {
    const struct CPU_State initial_cpu = {.pc=0xf9ab, .a=0xab, .x=0x99, .y=0x34, .sp=0x5f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ab, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf9ac, .a=0xab, .x=0x99, .y=0x34, .sp=0x5f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xf9ab, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf9ab, .value=0x80, .type=IO_READ},
        {.addr=0xf9ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039A) {
    const struct CPU_State initial_cpu = {.pc=0x28c1, .a=0x86, .x=0x9d, .y=0x61, .sp=0x87, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x28c1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x28c2, .a=0x86, .x=0x9d, .y=0x61, .sp=0x87, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x28c1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x28c1, .value=0x80, .type=IO_READ},
        {.addr=0x28c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039B) {
    const struct CPU_State initial_cpu = {.pc=0x0016, .a=0xa1, .x=0xcb, .y=0x8e, .sp=0x3c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0017, .a=0xa1, .x=0xcb, .y=0x8e, .sp=0x3c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0016, .value=0x80, .type=IO_READ},
        {.addr=0x0017, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039C) {
    const struct CPU_State initial_cpu = {.pc=0x2c52, .a=0x11, .x=0x35, .y=0x9b, .sp=0x6b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c52, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2c53, .a=0x11, .x=0x35, .y=0x9b, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2c52, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2c52, .value=0x80, .type=IO_READ},
        {.addr=0x2c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039D) {
    const struct CPU_State initial_cpu = {.pc=0xcf1e, .a=0xf0, .x=0x8c, .y=0x90, .sp=0xbe, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xcf1e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcf1f, .a=0xf0, .x=0x8c, .y=0x90, .sp=0xbe, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcf1e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcf1e, .value=0x80, .type=IO_READ},
        {.addr=0xcf1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039E) {
    const struct CPU_State initial_cpu = {.pc=0x198c, .a=0x83, .x=0x3a, .y=0xa2, .sp=0x29, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x198c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x198d, .a=0x83, .x=0x3a, .y=0xa2, .sp=0x29, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x198c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x198c, .value=0x80, .type=IO_READ},
        {.addr=0x198d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_039F) {
    const struct CPU_State initial_cpu = {.pc=0xa9d7, .a=0xb0, .x=0xfe, .y=0x59, .sp=0x4a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa9d8, .a=0xb0, .x=0xfe, .y=0x59, .sp=0x4a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xa9d7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa9d7, .value=0x80, .type=IO_READ},
        {.addr=0xa9d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x49c9, .a=0x4e, .x=0x91, .y=0xdf, .sp=0xdc, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x49c9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x49ca, .a=0x4e, .x=0x91, .y=0xdf, .sp=0xdc, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x49c9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x49c9, .value=0x80, .type=IO_READ},
        {.addr=0x49ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x4f00, .a=0xb4, .x=0xe3, .y=0x7b, .sp=0xc6, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4f00, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4f01, .a=0xb4, .x=0xe3, .y=0x7b, .sp=0xc6, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x4f00, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4f00, .value=0x80, .type=IO_READ},
        {.addr=0x4f01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfbba, .a=0x61, .x=0x7c, .y=0x81, .sp=0xb9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfbba, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfbbb, .a=0x61, .x=0x7c, .y=0x81, .sp=0xb9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfbba, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfbba, .value=0x80, .type=IO_READ},
        {.addr=0xfbbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x3138, .a=0x5b, .x=0x0b, .y=0x3e, .sp=0xec, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3138, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3139, .a=0x5b, .x=0x0b, .y=0x3e, .sp=0xec, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x3138, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3138, .value=0x80, .type=IO_READ},
        {.addr=0x3139, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x3e7a, .a=0x34, .x=0xca, .y=0xfb, .sp=0xba, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3e7a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3e7b, .a=0x34, .x=0xca, .y=0xfb, .sp=0xba, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x3e7a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3e7a, .value=0x80, .type=IO_READ},
        {.addr=0x3e7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xc757, .a=0x56, .x=0xcb, .y=0x18, .sp=0x4b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc757, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xc758, .a=0x56, .x=0xcb, .y=0x18, .sp=0x4b, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xc757, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xc757, .value=0x80, .type=IO_READ},
        {.addr=0xc758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x7f37, .a=0x63, .x=0x6c, .y=0x03, .sp=0xce, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f37, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f38, .a=0x63, .x=0x6c, .y=0x03, .sp=0xce, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7f37, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f37, .value=0x80, .type=IO_READ},
        {.addr=0x7f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5980, .a=0xee, .x=0x1d, .y=0x7a, .sp=0x94, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5980, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5981, .a=0xee, .x=0x1d, .y=0x7a, .sp=0x94, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5980, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5980, .value=0x80, .type=IO_READ},
        {.addr=0x5981, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x7b89, .a=0xe4, .x=0xc2, .y=0xf9, .sp=0x50, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x7b89, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7b8a, .a=0xe4, .x=0xc2, .y=0xf9, .sp=0x50, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x7b89, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7b89, .value=0x80, .type=IO_READ},
        {.addr=0x7b8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x4c43, .a=0x05, .x=0x7c, .y=0x0c, .sp=0x5e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4c43, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4c44, .a=0x05, .x=0x7c, .y=0x0c, .sp=0x5e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x4c43, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4c43, .value=0x80, .type=IO_READ},
        {.addr=0x4c44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xae00, .a=0x60, .x=0xac, .y=0x7a, .sp=0x65, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xae00, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xae01, .a=0x60, .x=0xac, .y=0x7a, .sp=0x65, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xae00, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xae00, .value=0x80, .type=IO_READ},
        {.addr=0xae01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x50b5, .a=0x0b, .x=0xa3, .y=0x38, .sp=0xfb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x50b5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x50b6, .a=0x0b, .x=0xa3, .y=0x38, .sp=0xfb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x50b5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x50b5, .value=0x80, .type=IO_READ},
        {.addr=0x50b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xe939, .a=0xef, .x=0x27, .y=0xf4, .sp=0x26, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe939, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe93a, .a=0xef, .x=0x27, .y=0xf4, .sp=0x26, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xe939, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe939, .value=0x80, .type=IO_READ},
        {.addr=0xe93a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7e39, .a=0x86, .x=0x33, .y=0x0e, .sp=0x95, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x7e39, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7e3a, .a=0x86, .x=0x33, .y=0x0e, .sp=0x95, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x7e39, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7e39, .value=0x80, .type=IO_READ},
        {.addr=0x7e3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x26c8, .a=0xae, .x=0xa6, .y=0x3a, .sp=0xdf, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x26c8, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x26c9, .a=0xae, .x=0xa6, .y=0x3a, .sp=0xdf, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x26c8, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x26c8, .value=0x80, .type=IO_READ},
        {.addr=0x26c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x6ba6, .a=0x6e, .x=0xcf, .y=0xea, .sp=0x3e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x6ba6, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6ba7, .a=0x6e, .x=0xcf, .y=0xea, .sp=0x3e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6ba6, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6ba6, .value=0x80, .type=IO_READ},
        {.addr=0x6ba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x7f34, .a=0x42, .x=0x72, .y=0x13, .sp=0xdd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7f34, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f35, .a=0x42, .x=0x72, .y=0x13, .sp=0xdd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x7f34, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f34, .value=0x80, .type=IO_READ},
        {.addr=0x7f35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x6271, .a=0x3f, .x=0x56, .y=0x58, .sp=0x4a, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6271, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6272, .a=0x3f, .x=0x56, .y=0x58, .sp=0x4a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6271, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6271, .value=0x80, .type=IO_READ},
        {.addr=0x6272, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x103f, .a=0x18, .x=0x1b, .y=0x5b, .sp=0x7b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x103f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1040, .a=0x18, .x=0x1b, .y=0x5b, .sp=0x7b, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x103f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x103f, .value=0x80, .type=IO_READ},
        {.addr=0x1040, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x18d9, .a=0x1d, .x=0x06, .y=0xff, .sp=0x04, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x18d9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x18da, .a=0x1d, .x=0x06, .y=0xff, .sp=0x04, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x18d9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x18d9, .value=0x80, .type=IO_READ},
        {.addr=0x18da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x62df, .a=0xf1, .x=0xd6, .y=0xda, .sp=0x29, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x62df, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x62e0, .a=0xf1, .x=0xd6, .y=0xda, .sp=0x29, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x62df, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x62df, .value=0x80, .type=IO_READ},
        {.addr=0x62e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1c21, .a=0x36, .x=0x4f, .y=0x0c, .sp=0xea, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1c21, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1c22, .a=0x36, .x=0x4f, .y=0x0c, .sp=0xea, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1c21, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1c21, .value=0x80, .type=IO_READ},
        {.addr=0x1c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xf8d1, .a=0x0c, .x=0x70, .y=0x3e, .sp=0x74, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf8d1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf8d2, .a=0x0c, .x=0x70, .y=0x3e, .sp=0x74, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf8d1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf8d1, .value=0x80, .type=IO_READ},
        {.addr=0xf8d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xca27, .a=0x3e, .x=0x11, .y=0x9f, .sp=0xf6, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xca27, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xca28, .a=0x3e, .x=0x11, .y=0x9f, .sp=0xf6, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xca27, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xca27, .value=0x80, .type=IO_READ},
        {.addr=0xca28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xfcc9, .a=0x9b, .x=0xde, .y=0x18, .sp=0xfc, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfcca, .a=0x9b, .x=0xde, .y=0x18, .sp=0xfc, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xfcc9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfcc9, .value=0x80, .type=IO_READ},
        {.addr=0xfcca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x724a, .a=0x38, .x=0xcb, .y=0x63, .sp=0x83, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x724a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x724b, .a=0x38, .x=0xcb, .y=0x63, .sp=0x83, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x724a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x724a, .value=0x80, .type=IO_READ},
        {.addr=0x724b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x94aa, .a=0xe2, .x=0x98, .y=0x29, .sp=0x74, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x94aa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x94ab, .a=0xe2, .x=0x98, .y=0x29, .sp=0x74, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x94aa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x94aa, .value=0x80, .type=IO_READ},
        {.addr=0x94ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x910a, .a=0x5c, .x=0x0f, .y=0xed, .sp=0x69, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x910a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x910b, .a=0x5c, .x=0x0f, .y=0xed, .sp=0x69, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x910a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x910a, .value=0x80, .type=IO_READ},
        {.addr=0x910b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x1251, .a=0x36, .x=0x1d, .y=0xb3, .sp=0xd8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1251, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1252, .a=0x36, .x=0x1d, .y=0xb3, .sp=0xd8, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x1251, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1251, .value=0x80, .type=IO_READ},
        {.addr=0x1252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x7af7, .a=0x3e, .x=0xf7, .y=0xdd, .sp=0x69, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7af7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7af8, .a=0x3e, .x=0xf7, .y=0xdd, .sp=0x69, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7af7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7af7, .value=0x80, .type=IO_READ},
        {.addr=0x7af8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xe931, .a=0xb5, .x=0x77, .y=0x5c, .sp=0xdf, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe931, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe932, .a=0xb5, .x=0x77, .y=0x5c, .sp=0xdf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe931, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe931, .value=0x80, .type=IO_READ},
        {.addr=0xe932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x5b14, .a=0x73, .x=0xf4, .y=0x3a, .sp=0xcf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5b14, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x5b15, .a=0x73, .x=0xf4, .y=0x3a, .sp=0xcf, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x5b14, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5b14, .value=0x80, .type=IO_READ},
        {.addr=0x5b15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xf134, .a=0x0d, .x=0x87, .y=0x34, .sp=0xac, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf134, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf135, .a=0x0d, .x=0x87, .y=0x34, .sp=0xac, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xf134, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf134, .value=0x80, .type=IO_READ},
        {.addr=0xf135, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x018c, .a=0x80, .x=0x6f, .y=0x62, .sp=0x63, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x018d, .a=0x80, .x=0x6f, .y=0x62, .sp=0x63, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x018c, .value=0x80, .type=IO_READ},
        {.addr=0x018d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x6126, .a=0xec, .x=0x3b, .y=0x94, .sp=0xcd, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6126, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6127, .a=0xec, .x=0x3b, .y=0x94, .sp=0xcd, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x6126, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6126, .value=0x80, .type=IO_READ},
        {.addr=0x6127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xe5f3, .a=0x30, .x=0x42, .y=0xde, .sp=0x69, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe5f4, .a=0x30, .x=0x42, .y=0xde, .sp=0x69, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xe5f3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe5f3, .value=0x80, .type=IO_READ},
        {.addr=0xe5f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x47d7, .a=0x44, .x=0x84, .y=0xe7, .sp=0x66, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x47d7, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x47d8, .a=0x44, .x=0x84, .y=0xe7, .sp=0x66, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x47d7, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x47d7, .value=0x80, .type=IO_READ},
        {.addr=0x47d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4bc2, .a=0xa5, .x=0xcf, .y=0x0e, .sp=0xfe, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4bc2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4bc3, .a=0xa5, .x=0xcf, .y=0x0e, .sp=0xfe, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x4bc2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4bc2, .value=0x80, .type=IO_READ},
        {.addr=0x4bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xea34, .a=0xfa, .x=0x53, .y=0x5c, .sp=0xa2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xea34, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xea35, .a=0xfa, .x=0x53, .y=0x5c, .sp=0xa2, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xea34, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xea34, .value=0x80, .type=IO_READ},
        {.addr=0xea35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x14a0, .a=0x6d, .x=0x73, .y=0x65, .sp=0x13, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x14a0, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x14a1, .a=0x6d, .x=0x73, .y=0x65, .sp=0x13, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x14a0, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x14a0, .value=0x80, .type=IO_READ},
        {.addr=0x14a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x27b2, .a=0x74, .x=0xda, .y=0x97, .sp=0xcb, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x27b2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x27b3, .a=0x74, .x=0xda, .y=0x97, .sp=0xcb, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x27b2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x27b2, .value=0x80, .type=IO_READ},
        {.addr=0x27b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x865c, .a=0xa0, .x=0x55, .y=0xf2, .sp=0xfa, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x865c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x865d, .a=0xa0, .x=0x55, .y=0xf2, .sp=0xfa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x865c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x865c, .value=0x80, .type=IO_READ},
        {.addr=0x865d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xf049, .a=0x0e, .x=0x84, .y=0x22, .sp=0xca, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf049, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf04a, .a=0x0e, .x=0x84, .y=0x22, .sp=0xca, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf049, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf049, .value=0x80, .type=IO_READ},
        {.addr=0xf04a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x1c29, .a=0x03, .x=0x05, .y=0x6c, .sp=0x21, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1c29, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1c2a, .a=0x03, .x=0x05, .y=0x6c, .sp=0x21, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x1c29, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1c29, .value=0x80, .type=IO_READ},
        {.addr=0x1c2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x6b40, .a=0x75, .x=0xa9, .y=0xf1, .sp=0xc5, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x6b40, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x6b41, .a=0x75, .x=0xa9, .y=0xf1, .sp=0xc5, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x6b40, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6b40, .value=0x80, .type=IO_READ},
        {.addr=0x6b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x9043, .a=0x02, .x=0xc2, .y=0x32, .sp=0x3b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9043, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9044, .a=0x02, .x=0xc2, .y=0x32, .sp=0x3b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9043, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9043, .value=0x80, .type=IO_READ},
        {.addr=0x9044, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x536e, .a=0xaa, .x=0x86, .y=0x8d, .sp=0xdf, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x536e, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x536f, .a=0xaa, .x=0x86, .y=0x8d, .sp=0xdf, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x536e, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x536e, .value=0x80, .type=IO_READ},
        {.addr=0x536f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xaa6f, .a=0xa7, .x=0x19, .y=0x21, .sp=0xac, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaa6f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaa70, .a=0xa7, .x=0x19, .y=0x21, .sp=0xac, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xaa6f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaa6f, .value=0x80, .type=IO_READ},
        {.addr=0xaa70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x47e9, .a=0x77, .x=0x3f, .y=0x25, .sp=0x3e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x47e9, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x47ea, .a=0x77, .x=0x3f, .y=0x25, .sp=0x3e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x47e9, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x47e9, .value=0x80, .type=IO_READ},
        {.addr=0x47ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa503, .a=0xf6, .x=0x3f, .y=0x35, .sp=0xb8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa503, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xa504, .a=0xf6, .x=0x3f, .y=0x35, .sp=0xb8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa503, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xa503, .value=0x80, .type=IO_READ},
        {.addr=0xa504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xf53a, .a=0x84, .x=0x62, .y=0xda, .sp=0x30, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf53a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xf53b, .a=0x84, .x=0x62, .y=0xda, .sp=0x30, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xf53a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xf53a, .value=0x80, .type=IO_READ},
        {.addr=0xf53b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xaaac, .a=0x89, .x=0x1b, .y=0x79, .sp=0xfc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xaaac, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xaaad, .a=0x89, .x=0x1b, .y=0x79, .sp=0xfc, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xaaac, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xaaac, .value=0x80, .type=IO_READ},
        {.addr=0xaaad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1971, .a=0x57, .x=0x71, .y=0x30, .sp=0x06, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x1971, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1972, .a=0x57, .x=0x71, .y=0x30, .sp=0x06, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1971, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1971, .value=0x80, .type=IO_READ},
        {.addr=0x1972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7f5c, .a=0x9f, .x=0x0b, .y=0x07, .sp=0x50, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7f5d, .a=0x9f, .x=0x0b, .y=0x07, .sp=0x50, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7f5c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7f5c, .value=0x80, .type=IO_READ},
        {.addr=0x7f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xe5dc, .a=0x50, .x=0xbb, .y=0x10, .sp=0x34, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xe5dc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe5dd, .a=0x50, .x=0xbb, .y=0x10, .sp=0x34, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xe5dc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe5dc, .value=0x80, .type=IO_READ},
        {.addr=0xe5dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xe102, .a=0xa1, .x=0xa1, .y=0xab, .sp=0x8e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe102, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe103, .a=0xa1, .x=0xa1, .y=0xab, .sp=0x8e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xe102, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe102, .value=0x80, .type=IO_READ},
        {.addr=0xe103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x2979, .a=0x9e, .x=0x2a, .y=0xf0, .sp=0xc8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2979, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x297a, .a=0x9e, .x=0x2a, .y=0xf0, .sp=0xc8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x2979, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2979, .value=0x80, .type=IO_READ},
        {.addr=0x297a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x25f2, .a=0x03, .x=0xaa, .y=0x05, .sp=0xf9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x25f2, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x25f3, .a=0x03, .x=0xaa, .y=0x05, .sp=0xf9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x25f2, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x25f2, .value=0x80, .type=IO_READ},
        {.addr=0x25f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x789d, .a=0x88, .x=0xef, .y=0xd1, .sp=0x39, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x789d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x789e, .a=0x88, .x=0xef, .y=0xd1, .sp=0x39, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x789d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x789d, .value=0x80, .type=IO_READ},
        {.addr=0x789e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x2960, .a=0xd4, .x=0x62, .y=0xd9, .sp=0x40, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2960, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x2961, .a=0xd4, .x=0x62, .y=0xd9, .sp=0x40, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2960, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x2960, .value=0x80, .type=IO_READ},
        {.addr=0x2961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x9e49, .a=0x9e, .x=0x3e, .y=0xab, .sp=0x36, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e49, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9e4a, .a=0x9e, .x=0x3e, .y=0xab, .sp=0x36, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9e49, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9e49, .value=0x80, .type=IO_READ},
        {.addr=0x9e4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x729d, .a=0x61, .x=0x71, .y=0xb3, .sp=0xeb, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x729d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x729e, .a=0x61, .x=0x71, .y=0xb3, .sp=0xeb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x729d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x729d, .value=0x80, .type=IO_READ},
        {.addr=0x729e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x7e78, .a=0xf5, .x=0xbe, .y=0x75, .sp=0xbc, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7e78, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7e79, .a=0xf5, .x=0xbe, .y=0x75, .sp=0xbc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7e78, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7e78, .value=0x80, .type=IO_READ},
        {.addr=0x7e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x21b1, .a=0x55, .x=0xf1, .y=0x16, .sp=0x1b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x21b1, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x21b2, .a=0x55, .x=0xf1, .y=0x16, .sp=0x1b, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x21b1, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x21b1, .value=0x80, .type=IO_READ},
        {.addr=0x21b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xcf18, .a=0xe9, .x=0x2c, .y=0xef, .sp=0x5f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf18, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xcf19, .a=0xe9, .x=0x2c, .y=0xef, .sp=0x5f, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xcf18, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xcf18, .value=0x80, .type=IO_READ},
        {.addr=0xcf19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x1b86, .a=0x08, .x=0x40, .y=0x43, .sp=0xea, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1b86, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1b87, .a=0x08, .x=0x40, .y=0x43, .sp=0xea, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x1b86, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1b86, .value=0x80, .type=IO_READ},
        {.addr=0x1b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x161c, .a=0xb0, .x=0x39, .y=0x1c, .sp=0xa6, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x161c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x161d, .a=0xb0, .x=0x39, .y=0x1c, .sp=0xa6, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x161c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x161c, .value=0x80, .type=IO_READ},
        {.addr=0x161d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x1e2d, .a=0x52, .x=0x76, .y=0x6d, .sp=0xfd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1e2d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1e2e, .a=0x52, .x=0x76, .y=0x6d, .sp=0xfd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1e2d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1e2d, .value=0x80, .type=IO_READ},
        {.addr=0x1e2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x46bd, .a=0xeb, .x=0x59, .y=0x8f, .sp=0x2c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x46bd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x46be, .a=0xeb, .x=0x59, .y=0x8f, .sp=0x2c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x46bd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x46bd, .value=0x80, .type=IO_READ},
        {.addr=0x46be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xfa52, .a=0xcc, .x=0x05, .y=0xab, .sp=0x38, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xfa52, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xfa53, .a=0xcc, .x=0x05, .y=0xab, .sp=0x38, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xfa52, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xfa52, .value=0x80, .type=IO_READ},
        {.addr=0xfa53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x7aa3, .a=0xa7, .x=0x09, .y=0xf3, .sp=0xbf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa3, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7aa4, .a=0xa7, .x=0x09, .y=0xf3, .sp=0xbf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7aa3, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7aa3, .value=0x80, .type=IO_READ},
        {.addr=0x7aa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_80, _80_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x356f, .a=0x2f, .x=0x9c, .y=0x62, .sp=0x07, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x356f, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3570, .a=0x2f, .x=0x9c, .y=0x62, .sp=0x07, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x356f, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x356f, .value=0x80, .type=IO_READ},
        {.addr=0x3570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("80 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
