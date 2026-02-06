#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_9F, _9F_0000) {
    const struct CPU_State initial_cpu = {.pc=0xb667, .a=0x01, .x=0x4d, .y=0x8e, .sp=0x2b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb667, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb668, .a=0x10, .x=0x4d, .y=0x8e, .sp=0x2b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb667, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb667, .value=0x9f, .type=IO_READ},
        {.addr=0xb668, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2b3e, .a=0x66, .x=0x70, .y=0x51, .sp=0x45, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2b3f, .a=0x66, .x=0x70, .y=0x51, .sp=0x45, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2b3e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2b3e, .value=0x9f, .type=IO_READ},
        {.addr=0x2b3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0002) {
    const struct CPU_State initial_cpu = {.pc=0x4606, .a=0xaa, .x=0x24, .y=0x12, .sp=0xa0, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x4606, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4607, .a=0xaa, .x=0x24, .y=0x12, .sp=0xa0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4606, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4606, .value=0x9f, .type=IO_READ},
        {.addr=0x4607, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0003) {
    const struct CPU_State initial_cpu = {.pc=0x07f9, .a=0xf7, .x=0xed, .y=0x6b, .sp=0x2d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x07f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x07fa, .a=0x7f, .x=0xed, .y=0x6b, .sp=0x2d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x07f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x07f9, .value=0x9f, .type=IO_READ},
        {.addr=0x07fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa6bc, .a=0xae, .x=0xc7, .y=0x32, .sp=0xce, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa6bc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa6bd, .a=0xea, .x=0xc7, .y=0x32, .sp=0xce, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa6bc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa6bc, .value=0x9f, .type=IO_READ},
        {.addr=0xa6bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0a6e, .a=0x6a, .x=0x9f, .y=0x9e, .sp=0xff, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0a6e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0a6f, .a=0xa6, .x=0x9f, .y=0x9e, .sp=0xff, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0a6e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0a6e, .value=0x9f, .type=IO_READ},
        {.addr=0x0a6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0006) {
    const struct CPU_State initial_cpu = {.pc=0xa6c6, .a=0xe9, .x=0x02, .y=0x27, .sp=0x76, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa6c6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa6c7, .a=0x9e, .x=0x02, .y=0x27, .sp=0x76, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa6c6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa6c6, .value=0x9f, .type=IO_READ},
        {.addr=0xa6c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0007) {
    const struct CPU_State initial_cpu = {.pc=0xeabd, .a=0x84, .x=0xf0, .y=0x0e, .sp=0xaf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xeabd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeabe, .a=0x48, .x=0xf0, .y=0x0e, .sp=0xaf, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xeabd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeabd, .value=0x9f, .type=IO_READ},
        {.addr=0xeabe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0008) {
    const struct CPU_State initial_cpu = {.pc=0x8630, .a=0xf9, .x=0x8a, .y=0xf1, .sp=0x51, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8630, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8631, .a=0x9f, .x=0x8a, .y=0xf1, .sp=0x51, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8630, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8630, .value=0x9f, .type=IO_READ},
        {.addr=0x8631, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0009) {
    const struct CPU_State initial_cpu = {.pc=0x048c, .a=0x64, .x=0x59, .y=0xa2, .sp=0x3d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x048c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x048d, .a=0x46, .x=0x59, .y=0xa2, .sp=0x3d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x048c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x048c, .value=0x9f, .type=IO_READ},
        {.addr=0x048d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000A) {
    const struct CPU_State initial_cpu = {.pc=0xa9dd, .a=0xf5, .x=0x62, .y=0x4f, .sp=0x4d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xa9dd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa9de, .a=0x5f, .x=0x62, .y=0x4f, .sp=0x4d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xa9dd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa9dd, .value=0x9f, .type=IO_READ},
        {.addr=0xa9de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000B) {
    const struct CPU_State initial_cpu = {.pc=0xaf75, .a=0x73, .x=0xf7, .y=0x45, .sp=0x61, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xaf75, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf76, .a=0x37, .x=0xf7, .y=0x45, .sp=0x61, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xaf75, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf75, .value=0x9f, .type=IO_READ},
        {.addr=0xaf76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000C) {
    const struct CPU_State initial_cpu = {.pc=0x5160, .a=0xe1, .x=0xf7, .y=0xc9, .sp=0xc8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5160, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5161, .a=0x1e, .x=0xf7, .y=0xc9, .sp=0xc8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5160, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5160, .value=0x9f, .type=IO_READ},
        {.addr=0x5161, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000D) {
    const struct CPU_State initial_cpu = {.pc=0x5f25, .a=0x9f, .x=0xa1, .y=0x02, .sp=0x1c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5f25, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5f26, .a=0xf9, .x=0xa1, .y=0x02, .sp=0x1c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5f25, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5f25, .value=0x9f, .type=IO_READ},
        {.addr=0x5f26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000E) {
    const struct CPU_State initial_cpu = {.pc=0x8f6a, .a=0x97, .x=0xc5, .y=0x2a, .sp=0xc2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8f6a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f6b, .a=0x79, .x=0xc5, .y=0x2a, .sp=0xc2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8f6a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f6a, .value=0x9f, .type=IO_READ},
        {.addr=0x8f6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6d4e, .a=0xe8, .x=0xe3, .y=0x70, .sp=0x4c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6d4e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6d4f, .a=0x8e, .x=0xe3, .y=0x70, .sp=0x4c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6d4e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6d4e, .value=0x9f, .type=IO_READ},
        {.addr=0x6d4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0010) {
    const struct CPU_State initial_cpu = {.pc=0x861b, .a=0x66, .x=0x25, .y=0x7f, .sp=0x71, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x861b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x861c, .a=0x66, .x=0x25, .y=0x7f, .sp=0x71, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x861b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x861b, .value=0x9f, .type=IO_READ},
        {.addr=0x861c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0011) {
    const struct CPU_State initial_cpu = {.pc=0x40a3, .a=0xc2, .x=0x9d, .y=0xfe, .sp=0xde, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x40a3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40a4, .a=0x2c, .x=0x9d, .y=0xfe, .sp=0xde, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x40a3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40a3, .value=0x9f, .type=IO_READ},
        {.addr=0x40a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0012) {
    const struct CPU_State initial_cpu = {.pc=0x48df, .a=0x63, .x=0xd7, .y=0xe0, .sp=0x04, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x48df, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x48e0, .a=0x36, .x=0xd7, .y=0xe0, .sp=0x04, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x48df, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x48df, .value=0x9f, .type=IO_READ},
        {.addr=0x48e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0013) {
    const struct CPU_State initial_cpu = {.pc=0x908b, .a=0xd1, .x=0xbc, .y=0xb5, .sp=0xf5, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x908b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x908c, .a=0x1d, .x=0xbc, .y=0xb5, .sp=0xf5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x908b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x908b, .value=0x9f, .type=IO_READ},
        {.addr=0x908c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0014) {
    const struct CPU_State initial_cpu = {.pc=0xe017, .a=0x2f, .x=0x11, .y=0xac, .sp=0x94, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe017, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe018, .a=0xf2, .x=0x11, .y=0xac, .sp=0x94, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe017, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe017, .value=0x9f, .type=IO_READ},
        {.addr=0xe018, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6d9f, .a=0xe8, .x=0xb3, .y=0x59, .sp=0xe1, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6d9f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6da0, .a=0x8e, .x=0xb3, .y=0x59, .sp=0xe1, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6d9f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6d9f, .value=0x9f, .type=IO_READ},
        {.addr=0x6da0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0016) {
    const struct CPU_State initial_cpu = {.pc=0xd091, .a=0x32, .x=0xe7, .y=0xa8, .sp=0xf3, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xd091, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd092, .a=0x23, .x=0xe7, .y=0xa8, .sp=0xf3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd091, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd091, .value=0x9f, .type=IO_READ},
        {.addr=0xd092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0017) {
    const struct CPU_State initial_cpu = {.pc=0x8976, .a=0x8c, .x=0x64, .y=0x84, .sp=0xf4, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8976, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8977, .a=0xc8, .x=0x64, .y=0x84, .sp=0xf4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8976, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8976, .value=0x9f, .type=IO_READ},
        {.addr=0x8977, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0018) {
    const struct CPU_State initial_cpu = {.pc=0xb0e7, .a=0x88, .x=0x16, .y=0xee, .sp=0x83, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xb0e7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb0e8, .a=0x88, .x=0x16, .y=0xee, .sp=0x83, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb0e7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb0e7, .value=0x9f, .type=IO_READ},
        {.addr=0xb0e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0019) {
    const struct CPU_State initial_cpu = {.pc=0x85a7, .a=0x23, .x=0xe5, .y=0xba, .sp=0x26, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x85a7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x85a8, .a=0x32, .x=0xe5, .y=0xba, .sp=0x26, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x85a7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x85a7, .value=0x9f, .type=IO_READ},
        {.addr=0x85a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9ce4, .a=0xc3, .x=0xa8, .y=0xcc, .sp=0x1c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9ce5, .a=0x3c, .x=0xa8, .y=0xcc, .sp=0x1c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9ce4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9ce4, .value=0x9f, .type=IO_READ},
        {.addr=0x9ce5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001B) {
    const struct CPU_State initial_cpu = {.pc=0xc219, .a=0xa0, .x=0xcf, .y=0x9c, .sp=0x7b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc219, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc21a, .a=0x0a, .x=0xcf, .y=0x9c, .sp=0x7b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc219, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc219, .value=0x9f, .type=IO_READ},
        {.addr=0xc21a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001C) {
    const struct CPU_State initial_cpu = {.pc=0xb4e5, .a=0x0c, .x=0x9a, .y=0x71, .sp=0x54, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb4e5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb4e6, .a=0xc0, .x=0x9a, .y=0x71, .sp=0x54, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb4e5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb4e5, .value=0x9f, .type=IO_READ},
        {.addr=0xb4e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7a80, .a=0x7d, .x=0xb1, .y=0x7d, .sp=0x9a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x7a80, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7a81, .a=0xd7, .x=0xb1, .y=0x7d, .sp=0x9a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7a80, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7a80, .value=0x9f, .type=IO_READ},
        {.addr=0x7a81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001E) {
    const struct CPU_State initial_cpu = {.pc=0x133c, .a=0x6a, .x=0xae, .y=0xbb, .sp=0x76, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x133c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x133d, .a=0xa6, .x=0xae, .y=0xbb, .sp=0x76, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x133c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x133c, .value=0x9f, .type=IO_READ},
        {.addr=0x133d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_001F) {
    const struct CPU_State initial_cpu = {.pc=0xfebc, .a=0x4a, .x=0x56, .y=0xd0, .sp=0x53, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xfebc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfebd, .a=0xa4, .x=0x56, .y=0xd0, .sp=0x53, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xfebc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfebc, .value=0x9f, .type=IO_READ},
        {.addr=0xfebd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0020) {
    const struct CPU_State initial_cpu = {.pc=0x9d5f, .a=0x23, .x=0xa0, .y=0x90, .sp=0x98, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9d60, .a=0x32, .x=0xa0, .y=0x90, .sp=0x98, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9d5f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9d5f, .value=0x9f, .type=IO_READ},
        {.addr=0x9d60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0021) {
    const struct CPU_State initial_cpu = {.pc=0x8f18, .a=0x17, .x=0x30, .y=0xfb, .sp=0xc9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8f18, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f19, .a=0x71, .x=0x30, .y=0xfb, .sp=0xc9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8f18, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f18, .value=0x9f, .type=IO_READ},
        {.addr=0x8f19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0022) {
    const struct CPU_State initial_cpu = {.pc=0x2c34, .a=0x1d, .x=0x10, .y=0x63, .sp=0x61, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2c34, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2c35, .a=0xd1, .x=0x10, .y=0x63, .sp=0x61, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2c34, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2c34, .value=0x9f, .type=IO_READ},
        {.addr=0x2c35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0023) {
    const struct CPU_State initial_cpu = {.pc=0x6ad5, .a=0xad, .x=0xa3, .y=0xa1, .sp=0x39, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6ad6, .a=0xda, .x=0xa3, .y=0xa1, .sp=0x39, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x6ad5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6ad5, .value=0x9f, .type=IO_READ},
        {.addr=0x6ad6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0024) {
    const struct CPU_State initial_cpu = {.pc=0xea98, .a=0x00, .x=0x83, .y=0x94, .sp=0xb6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xea98, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xea99, .a=0x00, .x=0x83, .y=0x94, .sp=0xb6, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xea98, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xea98, .value=0x9f, .type=IO_READ},
        {.addr=0xea99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3dec, .a=0xbc, .x=0x54, .y=0x33, .sp=0xea, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3dec, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3ded, .a=0xcb, .x=0x54, .y=0x33, .sp=0xea, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3dec, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3dec, .value=0x9f, .type=IO_READ},
        {.addr=0x3ded, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0026) {
    const struct CPU_State initial_cpu = {.pc=0x1cbc, .a=0x11, .x=0x5b, .y=0x9c, .sp=0xae, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1cbc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1cbd, .a=0x11, .x=0x5b, .y=0x9c, .sp=0xae, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1cbc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1cbc, .value=0x9f, .type=IO_READ},
        {.addr=0x1cbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0027) {
    const struct CPU_State initial_cpu = {.pc=0x26a8, .a=0x23, .x=0x8c, .y=0x25, .sp=0x56, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x26a8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x26a9, .a=0x32, .x=0x8c, .y=0x25, .sp=0x56, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x26a8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x26a8, .value=0x9f, .type=IO_READ},
        {.addr=0x26a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0028) {
    const struct CPU_State initial_cpu = {.pc=0xe6ce, .a=0x95, .x=0x04, .y=0x40, .sp=0x74, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe6ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe6cf, .a=0x59, .x=0x04, .y=0x40, .sp=0x74, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xe6ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe6ce, .value=0x9f, .type=IO_READ},
        {.addr=0xe6cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0029) {
    const struct CPU_State initial_cpu = {.pc=0xdbc4, .a=0x2e, .x=0xf4, .y=0xf7, .sp=0x51, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdbc5, .a=0xe2, .x=0xf4, .y=0xf7, .sp=0x51, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xdbc4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdbc4, .value=0x9f, .type=IO_READ},
        {.addr=0xdbc5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002A) {
    const struct CPU_State initial_cpu = {.pc=0xfb62, .a=0x01, .x=0xd4, .y=0x15, .sp=0x1c, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xfb62, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfb63, .a=0x10, .x=0xd4, .y=0x15, .sp=0x1c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfb62, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfb62, .value=0x9f, .type=IO_READ},
        {.addr=0xfb63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002B) {
    const struct CPU_State initial_cpu = {.pc=0x069a, .a=0xa7, .x=0x59, .y=0x1f, .sp=0x5b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x069a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x069b, .a=0x7a, .x=0x59, .y=0x1f, .sp=0x5b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x069a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x069a, .value=0x9f, .type=IO_READ},
        {.addr=0x069b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002C) {
    const struct CPU_State initial_cpu = {.pc=0x18ef, .a=0xef, .x=0x05, .y=0x6d, .sp=0x8d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x18ef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x18f0, .a=0xfe, .x=0x05, .y=0x6d, .sp=0x8d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x18ef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x18ef, .value=0x9f, .type=IO_READ},
        {.addr=0x18f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002D) {
    const struct CPU_State initial_cpu = {.pc=0x8b39, .a=0xfb, .x=0xf3, .y=0x5b, .sp=0x92, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8b39, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8b3a, .a=0xbf, .x=0xf3, .y=0x5b, .sp=0x92, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8b39, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8b39, .value=0x9f, .type=IO_READ},
        {.addr=0x8b3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002E) {
    const struct CPU_State initial_cpu = {.pc=0x88fb, .a=0xdf, .x=0x65, .y=0x56, .sp=0x16, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x88fb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x88fc, .a=0xfd, .x=0x65, .y=0x56, .sp=0x16, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x88fb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x88fb, .value=0x9f, .type=IO_READ},
        {.addr=0x88fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_002F) {
    const struct CPU_State initial_cpu = {.pc=0x245c, .a=0xf5, .x=0x34, .y=0x28, .sp=0x46, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x245c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x245d, .a=0x5f, .x=0x34, .y=0x28, .sp=0x46, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x245c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x245c, .value=0x9f, .type=IO_READ},
        {.addr=0x245d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0030) {
    const struct CPU_State initial_cpu = {.pc=0xa78f, .a=0x59, .x=0x07, .y=0x78, .sp=0xde, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa78f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa790, .a=0x95, .x=0x07, .y=0x78, .sp=0xde, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa78f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa78f, .value=0x9f, .type=IO_READ},
        {.addr=0xa790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0031) {
    const struct CPU_State initial_cpu = {.pc=0x4664, .a=0x20, .x=0xef, .y=0x89, .sp=0x54, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4664, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4665, .a=0x02, .x=0xef, .y=0x89, .sp=0x54, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4664, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4664, .value=0x9f, .type=IO_READ},
        {.addr=0x4665, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0032) {
    const struct CPU_State initial_cpu = {.pc=0x5005, .a=0x77, .x=0x96, .y=0xc1, .sp=0x18, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5005, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5006, .a=0x77, .x=0x96, .y=0xc1, .sp=0x18, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5005, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5005, .value=0x9f, .type=IO_READ},
        {.addr=0x5006, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0033) {
    const struct CPU_State initial_cpu = {.pc=0xf68c, .a=0x40, .x=0x3b, .y=0x56, .sp=0x8f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf68c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf68d, .a=0x04, .x=0x3b, .y=0x56, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf68c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf68c, .value=0x9f, .type=IO_READ},
        {.addr=0xf68d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0034) {
    const struct CPU_State initial_cpu = {.pc=0x86c5, .a=0xa2, .x=0xe8, .y=0xf0, .sp=0x8a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x86c5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x86c6, .a=0x2a, .x=0xe8, .y=0xf0, .sp=0x8a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x86c5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x86c5, .value=0x9f, .type=IO_READ},
        {.addr=0x86c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0035) {
    const struct CPU_State initial_cpu = {.pc=0x90b5, .a=0x2b, .x=0x5b, .y=0x4f, .sp=0x09, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x90b5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x90b6, .a=0xb2, .x=0x5b, .y=0x4f, .sp=0x09, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x90b5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x90b5, .value=0x9f, .type=IO_READ},
        {.addr=0x90b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0036) {
    const struct CPU_State initial_cpu = {.pc=0x4b8e, .a=0xfe, .x=0xa9, .y=0x55, .sp=0x41, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b8f, .a=0xef, .x=0xa9, .y=0x55, .sp=0x41, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4b8e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b8e, .value=0x9f, .type=IO_READ},
        {.addr=0x4b8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9406, .a=0xe3, .x=0x31, .y=0xda, .sp=0x1b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9406, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9407, .a=0x3e, .x=0x31, .y=0xda, .sp=0x1b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9406, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9406, .value=0x9f, .type=IO_READ},
        {.addr=0x9407, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3c14, .a=0x01, .x=0x87, .y=0x82, .sp=0x79, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x3c14, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3c15, .a=0x10, .x=0x87, .y=0x82, .sp=0x79, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3c14, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3c14, .value=0x9f, .type=IO_READ},
        {.addr=0x3c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0039) {
    const struct CPU_State initial_cpu = {.pc=0x3de9, .a=0xbe, .x=0xc8, .y=0x41, .sp=0x0e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3de9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3dea, .a=0xeb, .x=0xc8, .y=0x41, .sp=0x0e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3de9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3de9, .value=0x9f, .type=IO_READ},
        {.addr=0x3dea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003A) {
    const struct CPU_State initial_cpu = {.pc=0xb909, .a=0x4a, .x=0xd7, .y=0xcd, .sp=0x87, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb909, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb90a, .a=0xa4, .x=0xd7, .y=0xcd, .sp=0x87, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb909, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb909, .value=0x9f, .type=IO_READ},
        {.addr=0xb90a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003B) {
    const struct CPU_State initial_cpu = {.pc=0xb26e, .a=0xe8, .x=0x78, .y=0x1b, .sp=0xb0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb26e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb26f, .a=0x8e, .x=0x78, .y=0x1b, .sp=0xb0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb26e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb26e, .value=0x9f, .type=IO_READ},
        {.addr=0xb26f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003C) {
    const struct CPU_State initial_cpu = {.pc=0x12f0, .a=0xe9, .x=0x4b, .y=0x61, .sp=0x2d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x12f0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x12f1, .a=0x9e, .x=0x4b, .y=0x61, .sp=0x2d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x12f0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x12f0, .value=0x9f, .type=IO_READ},
        {.addr=0x12f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003D) {
    const struct CPU_State initial_cpu = {.pc=0x95c6, .a=0x25, .x=0x65, .y=0xcd, .sp=0x70, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x95c6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x95c7, .a=0x52, .x=0x65, .y=0xcd, .sp=0x70, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x95c6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x95c6, .value=0x9f, .type=IO_READ},
        {.addr=0x95c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003E) {
    const struct CPU_State initial_cpu = {.pc=0x26dc, .a=0x47, .x=0xd5, .y=0x41, .sp=0x56, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x26dc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x26dd, .a=0x74, .x=0xd5, .y=0x41, .sp=0x56, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x26dc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x26dc, .value=0x9f, .type=IO_READ},
        {.addr=0x26dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_003F) {
    const struct CPU_State initial_cpu = {.pc=0x8cc1, .a=0xbf, .x=0x27, .y=0x58, .sp=0x7b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8cc2, .a=0xfb, .x=0x27, .y=0x58, .sp=0x7b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8cc1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8cc1, .value=0x9f, .type=IO_READ},
        {.addr=0x8cc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0040) {
    const struct CPU_State initial_cpu = {.pc=0x2a99, .a=0xd9, .x=0x0e, .y=0xa3, .sp=0xd0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2a99, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a9a, .a=0x9d, .x=0x0e, .y=0xa3, .sp=0xd0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2a99, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a99, .value=0x9f, .type=IO_READ},
        {.addr=0x2a9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0041) {
    const struct CPU_State initial_cpu = {.pc=0x2a0f, .a=0x48, .x=0x7a, .y=0x5b, .sp=0x3f, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2a0f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a10, .a=0x84, .x=0x7a, .y=0x5b, .sp=0x3f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2a0f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a0f, .value=0x9f, .type=IO_READ},
        {.addr=0x2a10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0042) {
    const struct CPU_State initial_cpu = {.pc=0xa3b7, .a=0xa1, .x=0x31, .y=0x69, .sp=0xee, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa3b7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa3b8, .a=0x1a, .x=0x31, .y=0x69, .sp=0xee, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa3b7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa3b7, .value=0x9f, .type=IO_READ},
        {.addr=0xa3b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0043) {
    const struct CPU_State initial_cpu = {.pc=0x65bf, .a=0x12, .x=0xb6, .y=0xa7, .sp=0x4f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x65bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x65c0, .a=0x21, .x=0xb6, .y=0xa7, .sp=0x4f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x65bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x65bf, .value=0x9f, .type=IO_READ},
        {.addr=0x65c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0044) {
    const struct CPU_State initial_cpu = {.pc=0x023c, .a=0x12, .x=0x59, .y=0x6e, .sp=0x79, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x023c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x023d, .a=0x21, .x=0x59, .y=0x6e, .sp=0x79, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x023c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x023c, .value=0x9f, .type=IO_READ},
        {.addr=0x023d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0045) {
    const struct CPU_State initial_cpu = {.pc=0x4739, .a=0x3c, .x=0x1d, .y=0x25, .sp=0x1c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4739, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x473a, .a=0xc3, .x=0x1d, .y=0x25, .sp=0x1c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4739, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4739, .value=0x9f, .type=IO_READ},
        {.addr=0x473a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0046) {
    const struct CPU_State initial_cpu = {.pc=0xdf5e, .a=0x18, .x=0xa9, .y=0x18, .sp=0xa7, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf5e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdf5f, .a=0x81, .x=0xa9, .y=0x18, .sp=0xa7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xdf5e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdf5e, .value=0x9f, .type=IO_READ},
        {.addr=0xdf5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0047) {
    const struct CPU_State initial_cpu = {.pc=0x57cf, .a=0xa1, .x=0x2f, .y=0x2a, .sp=0x1a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x57cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x57d0, .a=0x1a, .x=0x2f, .y=0x2a, .sp=0x1a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x57cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x57cf, .value=0x9f, .type=IO_READ},
        {.addr=0x57d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0048) {
    const struct CPU_State initial_cpu = {.pc=0x1111, .a=0x83, .x=0xe2, .y=0x02, .sp=0x13, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x1111, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1112, .a=0x38, .x=0xe2, .y=0x02, .sp=0x13, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x1111, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1111, .value=0x9f, .type=IO_READ},
        {.addr=0x1112, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0049) {
    const struct CPU_State initial_cpu = {.pc=0x9068, .a=0xa6, .x=0xa4, .y=0x8d, .sp=0x59, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9068, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9069, .a=0x6a, .x=0xa4, .y=0x8d, .sp=0x59, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9068, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9068, .value=0x9f, .type=IO_READ},
        {.addr=0x9069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004A) {
    const struct CPU_State initial_cpu = {.pc=0x5cb0, .a=0xbc, .x=0x8c, .y=0xfc, .sp=0x87, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5cb1, .a=0xcb, .x=0x8c, .y=0xfc, .sp=0x87, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5cb0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5cb0, .value=0x9f, .type=IO_READ},
        {.addr=0x5cb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004B) {
    const struct CPU_State initial_cpu = {.pc=0xfdfb, .a=0xe4, .x=0x22, .y=0x26, .sp=0xa5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfdfb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfdfc, .a=0x4e, .x=0x22, .y=0x26, .sp=0xa5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfdfb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfdfb, .value=0x9f, .type=IO_READ},
        {.addr=0xfdfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004C) {
    const struct CPU_State initial_cpu = {.pc=0x3068, .a=0x74, .x=0x19, .y=0xea, .sp=0x7a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x3068, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3069, .a=0x47, .x=0x19, .y=0xea, .sp=0x7a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3068, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3068, .value=0x9f, .type=IO_READ},
        {.addr=0x3069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004D) {
    const struct CPU_State initial_cpu = {.pc=0xb309, .a=0xec, .x=0xc7, .y=0x56, .sp=0x60, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xb309, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb30a, .a=0xce, .x=0xc7, .y=0x56, .sp=0x60, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb309, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb309, .value=0x9f, .type=IO_READ},
        {.addr=0xb30a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004E) {
    const struct CPU_State initial_cpu = {.pc=0xc83e, .a=0x3e, .x=0xc6, .y=0x84, .sp=0xdc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xc83e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc83f, .a=0xe3, .x=0xc6, .y=0x84, .sp=0xdc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc83e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc83e, .value=0x9f, .type=IO_READ},
        {.addr=0xc83f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_004F) {
    const struct CPU_State initial_cpu = {.pc=0x5198, .a=0x2d, .x=0x2f, .y=0xee, .sp=0x08, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5198, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5199, .a=0xd2, .x=0x2f, .y=0xee, .sp=0x08, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5198, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5198, .value=0x9f, .type=IO_READ},
        {.addr=0x5199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0050) {
    const struct CPU_State initial_cpu = {.pc=0xc0da, .a=0x18, .x=0x62, .y=0x70, .sp=0x42, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc0da, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc0db, .a=0x81, .x=0x62, .y=0x70, .sp=0x42, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc0da, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc0da, .value=0x9f, .type=IO_READ},
        {.addr=0xc0db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8865, .a=0x5b, .x=0x04, .y=0xcf, .sp=0x20, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8865, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8866, .a=0xb5, .x=0x04, .y=0xcf, .sp=0x20, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8865, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8865, .value=0x9f, .type=IO_READ},
        {.addr=0x8866, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0052) {
    const struct CPU_State initial_cpu = {.pc=0xfa3c, .a=0x66, .x=0xa3, .y=0xd6, .sp=0x06, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfa3d, .a=0x66, .x=0xa3, .y=0xd6, .sp=0x06, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfa3c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfa3c, .value=0x9f, .type=IO_READ},
        {.addr=0xfa3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0053) {
    const struct CPU_State initial_cpu = {.pc=0xdaea, .a=0xc6, .x=0x4d, .y=0x19, .sp=0x69, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xdaea, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdaeb, .a=0x6c, .x=0x4d, .y=0x19, .sp=0x69, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xdaea, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdaea, .value=0x9f, .type=IO_READ},
        {.addr=0xdaeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0054) {
    const struct CPU_State initial_cpu = {.pc=0x6dde, .a=0xe4, .x=0x85, .y=0x09, .sp=0x34, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6dde, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6ddf, .a=0x4e, .x=0x85, .y=0x09, .sp=0x34, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6dde, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6dde, .value=0x9f, .type=IO_READ},
        {.addr=0x6ddf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0055) {
    const struct CPU_State initial_cpu = {.pc=0x663c, .a=0xcd, .x=0xc9, .y=0xac, .sp=0xe2, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x663c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x663d, .a=0xdc, .x=0xc9, .y=0xac, .sp=0xe2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x663c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x663c, .value=0x9f, .type=IO_READ},
        {.addr=0x663d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0056) {
    const struct CPU_State initial_cpu = {.pc=0xc71f, .a=0x90, .x=0xfa, .y=0x00, .sp=0xf8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc71f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc720, .a=0x09, .x=0xfa, .y=0x00, .sp=0xf8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc71f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc71f, .value=0x9f, .type=IO_READ},
        {.addr=0xc720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0057) {
    const struct CPU_State initial_cpu = {.pc=0xaf13, .a=0x2f, .x=0x64, .y=0xfd, .sp=0x1c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xaf13, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf14, .a=0xf2, .x=0x64, .y=0xfd, .sp=0x1c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xaf13, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf13, .value=0x9f, .type=IO_READ},
        {.addr=0xaf14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0058) {
    const struct CPU_State initial_cpu = {.pc=0xb245, .a=0xb5, .x=0x7a, .y=0x79, .sp=0x8c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb245, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb246, .a=0x5b, .x=0x7a, .y=0x79, .sp=0x8c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb245, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb245, .value=0x9f, .type=IO_READ},
        {.addr=0xb246, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0059) {
    const struct CPU_State initial_cpu = {.pc=0x75a4, .a=0x61, .x=0x4b, .y=0x1c, .sp=0x52, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x75a4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x75a5, .a=0x16, .x=0x4b, .y=0x1c, .sp=0x52, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x75a4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x75a4, .value=0x9f, .type=IO_READ},
        {.addr=0x75a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1914, .a=0x0e, .x=0x53, .y=0xc5, .sp=0x28, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1914, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1915, .a=0xe0, .x=0x53, .y=0xc5, .sp=0x28, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1914, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1914, .value=0x9f, .type=IO_READ},
        {.addr=0x1915, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005B) {
    const struct CPU_State initial_cpu = {.pc=0x16e8, .a=0x24, .x=0x60, .y=0xad, .sp=0xca, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x16e8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x16e9, .a=0x42, .x=0x60, .y=0xad, .sp=0xca, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x16e8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x16e8, .value=0x9f, .type=IO_READ},
        {.addr=0x16e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8f87, .a=0xde, .x=0x41, .y=0xf6, .sp=0xe6, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f87, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f88, .a=0xed, .x=0x41, .y=0xf6, .sp=0xe6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8f87, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f87, .value=0x9f, .type=IO_READ},
        {.addr=0x8f88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd941, .a=0x70, .x=0x65, .y=0x6e, .sp=0xe6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd941, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd942, .a=0x07, .x=0x65, .y=0x6e, .sp=0xe6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd941, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd941, .value=0x9f, .type=IO_READ},
        {.addr=0xd942, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005E) {
    const struct CPU_State initial_cpu = {.pc=0xc1e8, .a=0xf9, .x=0xe7, .y=0x05, .sp=0x9c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc1e9, .a=0x9f, .x=0xe7, .y=0x05, .sp=0x9c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc1e8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc1e8, .value=0x9f, .type=IO_READ},
        {.addr=0xc1e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_005F) {
    const struct CPU_State initial_cpu = {.pc=0x5d73, .a=0x40, .x=0x48, .y=0xcb, .sp=0x56, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5d73, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5d74, .a=0x04, .x=0x48, .y=0xcb, .sp=0x56, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x5d73, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5d73, .value=0x9f, .type=IO_READ},
        {.addr=0x5d74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0060) {
    const struct CPU_State initial_cpu = {.pc=0x0e97, .a=0x7d, .x=0x07, .y=0x3f, .sp=0x20, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0e97, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0e98, .a=0xd7, .x=0x07, .y=0x3f, .sp=0x20, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0e97, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0e97, .value=0x9f, .type=IO_READ},
        {.addr=0x0e98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9053, .a=0x43, .x=0x57, .y=0xcc, .sp=0x12, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9053, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9054, .a=0x34, .x=0x57, .y=0xcc, .sp=0x12, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9053, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9053, .value=0x9f, .type=IO_READ},
        {.addr=0x9054, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0062) {
    const struct CPU_State initial_cpu = {.pc=0x6ca0, .a=0xd6, .x=0xc3, .y=0x6e, .sp=0xb6, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6ca0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6ca1, .a=0x6d, .x=0xc3, .y=0x6e, .sp=0xb6, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6ca0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6ca0, .value=0x9f, .type=IO_READ},
        {.addr=0x6ca1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0063) {
    const struct CPU_State initial_cpu = {.pc=0xbf9c, .a=0xab, .x=0x62, .y=0x56, .sp=0x47, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xbf9c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbf9d, .a=0xba, .x=0x62, .y=0x56, .sp=0x47, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbf9c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbf9c, .value=0x9f, .type=IO_READ},
        {.addr=0xbf9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0064) {
    const struct CPU_State initial_cpu = {.pc=0x48c5, .a=0x8f, .x=0x94, .y=0x66, .sp=0xb7, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x48c5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x48c6, .a=0xf8, .x=0x94, .y=0x66, .sp=0xb7, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x48c5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x48c5, .value=0x9f, .type=IO_READ},
        {.addr=0x48c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0065) {
    const struct CPU_State initial_cpu = {.pc=0x8704, .a=0xc1, .x=0x5f, .y=0xae, .sp=0x61, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8704, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8705, .a=0x1c, .x=0x5f, .y=0xae, .sp=0x61, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8704, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8704, .value=0x9f, .type=IO_READ},
        {.addr=0x8705, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0066) {
    const struct CPU_State initial_cpu = {.pc=0x09f4, .a=0x00, .x=0x7c, .y=0x77, .sp=0xff, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x09f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x09f5, .a=0x00, .x=0x7c, .y=0x77, .sp=0xff, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x09f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x09f4, .value=0x9f, .type=IO_READ},
        {.addr=0x09f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0067) {
    const struct CPU_State initial_cpu = {.pc=0xfa4f, .a=0xe6, .x=0x0a, .y=0xeb, .sp=0xd9, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfa50, .a=0x6e, .x=0x0a, .y=0xeb, .sp=0xd9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfa4f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfa4f, .value=0x9f, .type=IO_READ},
        {.addr=0xfa50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0068) {
    const struct CPU_State initial_cpu = {.pc=0xee33, .a=0x31, .x=0x02, .y=0xc7, .sp=0x72, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xee33, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xee34, .a=0x13, .x=0x02, .y=0xc7, .sp=0x72, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xee33, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xee33, .value=0x9f, .type=IO_READ},
        {.addr=0xee34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0069) {
    const struct CPU_State initial_cpu = {.pc=0x6aac, .a=0x57, .x=0x39, .y=0xb2, .sp=0x48, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6aac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6aad, .a=0x75, .x=0x39, .y=0xb2, .sp=0x48, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6aac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6aac, .value=0x9f, .type=IO_READ},
        {.addr=0x6aad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006A) {
    const struct CPU_State initial_cpu = {.pc=0x9f7d, .a=0x26, .x=0x75, .y=0x8c, .sp=0x7d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f7d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9f7e, .a=0x62, .x=0x75, .y=0x8c, .sp=0x7d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9f7d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9f7d, .value=0x9f, .type=IO_READ},
        {.addr=0x9f7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006B) {
    const struct CPU_State initial_cpu = {.pc=0xbfea, .a=0x4d, .x=0xde, .y=0x7a, .sp=0x0b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xbfea, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbfeb, .a=0xd4, .x=0xde, .y=0x7a, .sp=0x0b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbfea, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbfea, .value=0x9f, .type=IO_READ},
        {.addr=0xbfeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006C) {
    const struct CPU_State initial_cpu = {.pc=0x843e, .a=0x5c, .x=0xac, .y=0x11, .sp=0x55, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x843e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x843f, .a=0xc5, .x=0xac, .y=0x11, .sp=0x55, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x843e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x843e, .value=0x9f, .type=IO_READ},
        {.addr=0x843f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006D) {
    const struct CPU_State initial_cpu = {.pc=0xf9ca, .a=0xc1, .x=0x31, .y=0x67, .sp=0x3d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf9cb, .a=0x1c, .x=0x31, .y=0x67, .sp=0x3d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf9ca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf9ca, .value=0x9f, .type=IO_READ},
        {.addr=0xf9cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006E) {
    const struct CPU_State initial_cpu = {.pc=0x1246, .a=0x1b, .x=0x5c, .y=0x76, .sp=0x69, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x1246, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1247, .a=0xb1, .x=0x5c, .y=0x76, .sp=0x69, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1246, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1246, .value=0x9f, .type=IO_READ},
        {.addr=0x1247, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_006F) {
    const struct CPU_State initial_cpu = {.pc=0x7267, .a=0x7f, .x=0xc4, .y=0xb8, .sp=0x27, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7267, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7268, .a=0xf7, .x=0xc4, .y=0xb8, .sp=0x27, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7267, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7267, .value=0x9f, .type=IO_READ},
        {.addr=0x7268, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0070) {
    const struct CPU_State initial_cpu = {.pc=0x5e95, .a=0x69, .x=0x18, .y=0xb8, .sp=0xa5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5e95, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5e96, .a=0x96, .x=0x18, .y=0xb8, .sp=0xa5, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5e95, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5e95, .value=0x9f, .type=IO_READ},
        {.addr=0x5e96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0071) {
    const struct CPU_State initial_cpu = {.pc=0x8d3d, .a=0xf6, .x=0x1c, .y=0x7e, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8d3e, .a=0x6f, .x=0x1c, .y=0x7e, .sp=0x12, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x8d3d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8d3d, .value=0x9f, .type=IO_READ},
        {.addr=0x8d3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0c39, .a=0x56, .x=0xdf, .y=0x18, .sp=0x65, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0c39, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0c3a, .a=0x65, .x=0xdf, .y=0x18, .sp=0x65, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0c39, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0c39, .value=0x9f, .type=IO_READ},
        {.addr=0x0c3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2a7c, .a=0x7f, .x=0x5e, .y=0x3f, .sp=0x64, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a7d, .a=0xf7, .x=0x5e, .y=0x3f, .sp=0x64, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2a7c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a7c, .value=0x9f, .type=IO_READ},
        {.addr=0x2a7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0074) {
    const struct CPU_State initial_cpu = {.pc=0xecc2, .a=0x02, .x=0xc6, .y=0xf7, .sp=0xdb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xecc2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xecc3, .a=0x20, .x=0xc6, .y=0xf7, .sp=0xdb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xecc2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xecc2, .value=0x9f, .type=IO_READ},
        {.addr=0xecc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0075) {
    const struct CPU_State initial_cpu = {.pc=0xafcc, .a=0x02, .x=0x6b, .y=0x4b, .sp=0xa5, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xafcc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xafcd, .a=0x20, .x=0x6b, .y=0x4b, .sp=0xa5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xafcc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xafcc, .value=0x9f, .type=IO_READ},
        {.addr=0xafcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0076) {
    const struct CPU_State initial_cpu = {.pc=0xf885, .a=0x5c, .x=0xce, .y=0xb4, .sp=0x7c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf885, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf886, .a=0xc5, .x=0xce, .y=0xb4, .sp=0x7c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf885, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf885, .value=0x9f, .type=IO_READ},
        {.addr=0xf886, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0077) {
    const struct CPU_State initial_cpu = {.pc=0x442a, .a=0x83, .x=0xa1, .y=0xcb, .sp=0x25, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x442a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x442b, .a=0x38, .x=0xa1, .y=0xcb, .sp=0x25, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x442a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x442a, .value=0x9f, .type=IO_READ},
        {.addr=0x442b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa0d9, .a=0xc7, .x=0xc8, .y=0xd7, .sp=0xad, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa0da, .a=0x7c, .x=0xc8, .y=0xd7, .sp=0xad, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa0d9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa0d9, .value=0x9f, .type=IO_READ},
        {.addr=0xa0da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf62e, .a=0x67, .x=0x04, .y=0x27, .sp=0xcf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xf62e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf62f, .a=0x76, .x=0x04, .y=0x27, .sp=0xcf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf62e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf62e, .value=0x9f, .type=IO_READ},
        {.addr=0xf62f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007A) {
    const struct CPU_State initial_cpu = {.pc=0xe1e4, .a=0xf2, .x=0xd8, .y=0x6e, .sp=0xf3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe1e5, .a=0x2f, .x=0xd8, .y=0x6e, .sp=0xf3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe1e4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe1e4, .value=0x9f, .type=IO_READ},
        {.addr=0xe1e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007B) {
    const struct CPU_State initial_cpu = {.pc=0xaae9, .a=0x6d, .x=0x82, .y=0x96, .sp=0x4e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xaae9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaaea, .a=0xd6, .x=0x82, .y=0x96, .sp=0x4e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xaae9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaae9, .value=0x9f, .type=IO_READ},
        {.addr=0xaaea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007C) {
    const struct CPU_State initial_cpu = {.pc=0x998f, .a=0x0a, .x=0x33, .y=0x74, .sp=0xb5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x998f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9990, .a=0xa0, .x=0x33, .y=0x74, .sp=0xb5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x998f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x998f, .value=0x9f, .type=IO_READ},
        {.addr=0x9990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007D) {
    const struct CPU_State initial_cpu = {.pc=0xfb47, .a=0xde, .x=0x81, .y=0x86, .sp=0x19, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfb47, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfb48, .a=0xed, .x=0x81, .y=0x86, .sp=0x19, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfb47, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfb47, .value=0x9f, .type=IO_READ},
        {.addr=0xfb48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007E) {
    const struct CPU_State initial_cpu = {.pc=0x487f, .a=0xed, .x=0xf8, .y=0x4e, .sp=0x9b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x487f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4880, .a=0xde, .x=0xf8, .y=0x4e, .sp=0x9b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x487f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x487f, .value=0x9f, .type=IO_READ},
        {.addr=0x4880, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_007F) {
    const struct CPU_State initial_cpu = {.pc=0xa3b3, .a=0x02, .x=0xe4, .y=0xd7, .sp=0x77, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa3b3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa3b4, .a=0x20, .x=0xe4, .y=0xd7, .sp=0x77, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa3b3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa3b3, .value=0x9f, .type=IO_READ},
        {.addr=0xa3b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0080) {
    const struct CPU_State initial_cpu = {.pc=0x2599, .a=0x4e, .x=0x17, .y=0xe1, .sp=0xc3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2599, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x259a, .a=0xe4, .x=0x17, .y=0xe1, .sp=0xc3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2599, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2599, .value=0x9f, .type=IO_READ},
        {.addr=0x259a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0081) {
    const struct CPU_State initial_cpu = {.pc=0xbe07, .a=0x6e, .x=0x6b, .y=0xfb, .sp=0x48, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe07, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe08, .a=0xe6, .x=0x6b, .y=0xfb, .sp=0x48, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xbe07, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbe07, .value=0x9f, .type=IO_READ},
        {.addr=0xbe08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0082) {
    const struct CPU_State initial_cpu = {.pc=0xb23d, .a=0x48, .x=0x41, .y=0x5a, .sp=0x96, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xb23d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb23e, .a=0x84, .x=0x41, .y=0x5a, .sp=0x96, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb23d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb23d, .value=0x9f, .type=IO_READ},
        {.addr=0xb23e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0083) {
    const struct CPU_State initial_cpu = {.pc=0x56bb, .a=0xba, .x=0x6b, .y=0x09, .sp=0x4c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x56bb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x56bc, .a=0xab, .x=0x6b, .y=0x09, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x56bb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x56bb, .value=0x9f, .type=IO_READ},
        {.addr=0x56bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0084) {
    const struct CPU_State initial_cpu = {.pc=0xe0f8, .a=0x95, .x=0x62, .y=0xfb, .sp=0x9b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe0f9, .a=0x59, .x=0x62, .y=0xfb, .sp=0x9b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe0f8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe0f8, .value=0x9f, .type=IO_READ},
        {.addr=0xe0f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0085) {
    const struct CPU_State initial_cpu = {.pc=0x922a, .a=0xc5, .x=0x32, .y=0x4c, .sp=0x62, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x922a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x922b, .a=0x5c, .x=0x32, .y=0x4c, .sp=0x62, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x922a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x922a, .value=0x9f, .type=IO_READ},
        {.addr=0x922b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9e53, .a=0x8d, .x=0x30, .y=0x94, .sp=0x42, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x9e53, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9e54, .a=0xd8, .x=0x30, .y=0x94, .sp=0x42, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9e53, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9e53, .value=0x9f, .type=IO_READ},
        {.addr=0x9e54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0087) {
    const struct CPU_State initial_cpu = {.pc=0xbbc1, .a=0xf7, .x=0xdb, .y=0x41, .sp=0xbb, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbbc2, .a=0x7f, .x=0xdb, .y=0x41, .sp=0xbb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xbbc1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbbc1, .value=0x9f, .type=IO_READ},
        {.addr=0xbbc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1e81, .a=0x74, .x=0x08, .y=0x68, .sp=0xe2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1e81, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1e82, .a=0x47, .x=0x08, .y=0x68, .sp=0xe2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1e81, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1e81, .value=0x9f, .type=IO_READ},
        {.addr=0x1e82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf290, .a=0x2f, .x=0x83, .y=0xce, .sp=0x41, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf290, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf291, .a=0xf2, .x=0x83, .y=0xce, .sp=0x41, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf290, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf290, .value=0x9f, .type=IO_READ},
        {.addr=0xf291, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008A) {
    const struct CPU_State initial_cpu = {.pc=0xa887, .a=0x32, .x=0xa5, .y=0x77, .sp=0xa7, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa887, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa888, .a=0x23, .x=0xa5, .y=0x77, .sp=0xa7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa887, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa887, .value=0x9f, .type=IO_READ},
        {.addr=0xa888, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008B) {
    const struct CPU_State initial_cpu = {.pc=0xff46, .a=0x3d, .x=0x5c, .y=0x46, .sp=0x3a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xff46, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xff47, .a=0xd3, .x=0x5c, .y=0x46, .sp=0x3a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xff46, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xff46, .value=0x9f, .type=IO_READ},
        {.addr=0xff47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008C) {
    const struct CPU_State initial_cpu = {.pc=0xaf22, .a=0xbf, .x=0xe3, .y=0x40, .sp=0x1f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf22, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf23, .a=0xfb, .x=0xe3, .y=0x40, .sp=0x1f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xaf22, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf22, .value=0x9f, .type=IO_READ},
        {.addr=0xaf23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008D) {
    const struct CPU_State initial_cpu = {.pc=0xdd13, .a=0x91, .x=0x69, .y=0xe0, .sp=0x1b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdd13, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdd14, .a=0x19, .x=0x69, .y=0xe0, .sp=0x1b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdd13, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdd13, .value=0x9f, .type=IO_READ},
        {.addr=0xdd14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008E) {
    const struct CPU_State initial_cpu = {.pc=0x0b0a, .a=0x36, .x=0x53, .y=0xdf, .sp=0x28, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0b0a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0b0b, .a=0x63, .x=0x53, .y=0xdf, .sp=0x28, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0b0a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0b0a, .value=0x9f, .type=IO_READ},
        {.addr=0x0b0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_008F) {
    const struct CPU_State initial_cpu = {.pc=0xfec1, .a=0x1f, .x=0x1d, .y=0xf5, .sp=0xa6, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xfec1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfec2, .a=0xf1, .x=0x1d, .y=0xf5, .sp=0xa6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xfec1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfec1, .value=0x9f, .type=IO_READ},
        {.addr=0xfec2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0090) {
    const struct CPU_State initial_cpu = {.pc=0x2b91, .a=0x07, .x=0x31, .y=0xbf, .sp=0x1f, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2b91, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2b92, .a=0x70, .x=0x31, .y=0xbf, .sp=0x1f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2b91, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2b91, .value=0x9f, .type=IO_READ},
        {.addr=0x2b92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0091) {
    const struct CPU_State initial_cpu = {.pc=0x57cf, .a=0x93, .x=0xe8, .y=0x2e, .sp=0x76, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x57cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x57d0, .a=0x39, .x=0xe8, .y=0x2e, .sp=0x76, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x57cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x57cf, .value=0x9f, .type=IO_READ},
        {.addr=0x57d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0092) {
    const struct CPU_State initial_cpu = {.pc=0x4b61, .a=0x00, .x=0x4f, .y=0xdc, .sp=0x02, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4b61, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b62, .a=0x00, .x=0x4f, .y=0xdc, .sp=0x02, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x4b61, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b61, .value=0x9f, .type=IO_READ},
        {.addr=0x4b62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0093) {
    const struct CPU_State initial_cpu = {.pc=0x0255, .a=0xe7, .x=0x4e, .y=0x00, .sp=0x66, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0255, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0256, .a=0x7e, .x=0x4e, .y=0x00, .sp=0x66, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0255, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0255, .value=0x9f, .type=IO_READ},
        {.addr=0x0256, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0094) {
    const struct CPU_State initial_cpu = {.pc=0x3568, .a=0xd1, .x=0x59, .y=0x53, .sp=0xe9, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3568, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3569, .a=0x1d, .x=0x59, .y=0x53, .sp=0xe9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3568, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3568, .value=0x9f, .type=IO_READ},
        {.addr=0x3569, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0095) {
    const struct CPU_State initial_cpu = {.pc=0xb46a, .a=0xc5, .x=0x87, .y=0x61, .sp=0xc5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb46a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb46b, .a=0x5c, .x=0x87, .y=0x61, .sp=0xc5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb46a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb46a, .value=0x9f, .type=IO_READ},
        {.addr=0xb46b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0096) {
    const struct CPU_State initial_cpu = {.pc=0x4b0c, .a=0xfd, .x=0xaf, .y=0x2d, .sp=0x16, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b0d, .a=0xdf, .x=0xaf, .y=0x2d, .sp=0x16, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4b0c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b0c, .value=0x9f, .type=IO_READ},
        {.addr=0x4b0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0097) {
    const struct CPU_State initial_cpu = {.pc=0xee86, .a=0xf0, .x=0xab, .y=0xd6, .sp=0x99, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xee86, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xee87, .a=0x0f, .x=0xab, .y=0xd6, .sp=0x99, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xee86, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xee86, .value=0x9f, .type=IO_READ},
        {.addr=0xee87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0098) {
    const struct CPU_State initial_cpu = {.pc=0xfd00, .a=0xdb, .x=0xca, .y=0x15, .sp=0x79, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xfd00, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd01, .a=0xbd, .x=0xca, .y=0x15, .sp=0x79, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfd00, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfd00, .value=0x9f, .type=IO_READ},
        {.addr=0xfd01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0099) {
    const struct CPU_State initial_cpu = {.pc=0x1c45, .a=0xe2, .x=0x61, .y=0x98, .sp=0xb9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1c45, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1c46, .a=0x2e, .x=0x61, .y=0x98, .sp=0xb9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1c45, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1c45, .value=0x9f, .type=IO_READ},
        {.addr=0x1c46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009A) {
    const struct CPU_State initial_cpu = {.pc=0xe4f6, .a=0x34, .x=0xb9, .y=0x4d, .sp=0xcc, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4f7, .a=0x43, .x=0xb9, .y=0x4d, .sp=0xcc, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe4f6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4f6, .value=0x9f, .type=IO_READ},
        {.addr=0xe4f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009B) {
    const struct CPU_State initial_cpu = {.pc=0x0da8, .a=0x00, .x=0x4d, .y=0xea, .sp=0x3c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0da8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0da9, .a=0x00, .x=0x4d, .y=0xea, .sp=0x3c, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0da8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0da8, .value=0x9f, .type=IO_READ},
        {.addr=0x0da9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2968, .a=0x43, .x=0x6b, .y=0x11, .sp=0x1e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x2968, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2969, .a=0x34, .x=0x6b, .y=0x11, .sp=0x1e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2968, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2968, .value=0x9f, .type=IO_READ},
        {.addr=0x2969, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009D) {
    const struct CPU_State initial_cpu = {.pc=0x8bd6, .a=0x63, .x=0xab, .y=0x70, .sp=0x2c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8bd7, .a=0x36, .x=0xab, .y=0x70, .sp=0x2c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8bd6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8bd6, .value=0x9f, .type=IO_READ},
        {.addr=0x8bd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009E) {
    const struct CPU_State initial_cpu = {.pc=0xeb67, .a=0x9d, .x=0x6c, .y=0x70, .sp=0xd2, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xeb67, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeb68, .a=0xd9, .x=0x6c, .y=0x70, .sp=0xd2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xeb67, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeb67, .value=0x9f, .type=IO_READ},
        {.addr=0xeb68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_009F) {
    const struct CPU_State initial_cpu = {.pc=0x3bbc, .a=0x33, .x=0x5d, .y=0xfe, .sp=0x15, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3bbc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3bbd, .a=0x33, .x=0x5d, .y=0xfe, .sp=0x15, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3bbc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3bbc, .value=0x9f, .type=IO_READ},
        {.addr=0x3bbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xcf38, .a=0x81, .x=0xb9, .y=0xac, .sp=0xec, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xcf38, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcf39, .a=0x18, .x=0xb9, .y=0xac, .sp=0xec, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xcf38, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcf38, .value=0x9f, .type=IO_READ},
        {.addr=0xcf39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xba7d, .a=0x63, .x=0xc7, .y=0xf0, .sp=0x1e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xba7d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xba7e, .a=0x36, .x=0xc7, .y=0xf0, .sp=0x1e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xba7d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xba7d, .value=0x9f, .type=IO_READ},
        {.addr=0xba7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x39f0, .a=0x5e, .x=0xf7, .y=0xb2, .sp=0xcc, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x39f0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x39f1, .a=0xe5, .x=0xf7, .y=0xb2, .sp=0xcc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x39f0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x39f0, .value=0x9f, .type=IO_READ},
        {.addr=0x39f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xbe8d, .a=0xf1, .x=0x74, .y=0x98, .sp=0xe4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbe8d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe8e, .a=0x1f, .x=0x74, .y=0x98, .sp=0xe4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbe8d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbe8d, .value=0x9f, .type=IO_READ},
        {.addr=0xbe8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb91e, .a=0xf4, .x=0xc4, .y=0x3a, .sp=0xc9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb91e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb91f, .a=0x4f, .x=0xc4, .y=0x3a, .sp=0xc9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb91e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb91e, .value=0x9f, .type=IO_READ},
        {.addr=0xb91f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x1c12, .a=0x0c, .x=0x28, .y=0xd1, .sp=0x59, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1c12, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1c13, .a=0xc0, .x=0x28, .y=0xd1, .sp=0x59, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1c12, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1c12, .value=0x9f, .type=IO_READ},
        {.addr=0x1c13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf9f9, .a=0xf3, .x=0xfe, .y=0xd3, .sp=0x42, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf9fa, .a=0x3f, .x=0xfe, .y=0xd3, .sp=0x42, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf9f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf9f9, .value=0x9f, .type=IO_READ},
        {.addr=0xf9fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xaf2f, .a=0x83, .x=0xdf, .y=0xe5, .sp=0x75, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf30, .a=0x38, .x=0xdf, .y=0xe5, .sp=0x75, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xaf2f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf2f, .value=0x9f, .type=IO_READ},
        {.addr=0xaf30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xbe31, .a=0xfe, .x=0xde, .y=0x37, .sp=0x26, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe31, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe32, .a=0xef, .x=0xde, .y=0x37, .sp=0x26, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbe31, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbe31, .value=0x9f, .type=IO_READ},
        {.addr=0xbe32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x67cd, .a=0xdf, .x=0xd9, .y=0x23, .sp=0x53, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x67cd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x67ce, .a=0xfd, .x=0xd9, .y=0x23, .sp=0x53, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x67cd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x67cd, .value=0x9f, .type=IO_READ},
        {.addr=0x67ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5d40, .a=0x85, .x=0x62, .y=0xa3, .sp=0x43, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5d40, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5d41, .a=0x58, .x=0x62, .y=0xa3, .sp=0x43, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5d40, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5d40, .value=0x9f, .type=IO_READ},
        {.addr=0x5d41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xf7af, .a=0x16, .x=0xcc, .y=0xcc, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf7af, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf7b0, .a=0x61, .x=0xcc, .y=0xcc, .sp=0x75, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf7af, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf7af, .value=0x9f, .type=IO_READ},
        {.addr=0xf7b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x1f83, .a=0xa8, .x=0xed, .y=0x01, .sp=0x03, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1f83, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1f84, .a=0x8a, .x=0xed, .y=0x01, .sp=0x03, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1f83, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1f83, .value=0x9f, .type=IO_READ},
        {.addr=0x1f84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x6618, .a=0xbf, .x=0xe1, .y=0xb5, .sp=0xff, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6618, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6619, .a=0xfb, .x=0xe1, .y=0xb5, .sp=0xff, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6618, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6618, .value=0x9f, .type=IO_READ},
        {.addr=0x6619, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2cdd, .a=0x70, .x=0x56, .y=0x76, .sp=0x2c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2cdd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2cde, .a=0x07, .x=0x56, .y=0x76, .sp=0x2c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2cdd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2cdd, .value=0x9f, .type=IO_READ},
        {.addr=0x2cde, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x74c7, .a=0x1c, .x=0xed, .y=0x4c, .sp=0xcd, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x74c7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x74c8, .a=0xc1, .x=0xed, .y=0x4c, .sp=0xcd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x74c7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x74c7, .value=0x9f, .type=IO_READ},
        {.addr=0x74c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb0c9, .a=0x2f, .x=0x8f, .y=0x13, .sp=0x18, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb0ca, .a=0xf2, .x=0x8f, .y=0x13, .sp=0x18, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb0c9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb0c9, .value=0x9f, .type=IO_READ},
        {.addr=0xb0ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7a98, .a=0x37, .x=0x52, .y=0xfd, .sp=0xf3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7a98, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7a99, .a=0x73, .x=0x52, .y=0xfd, .sp=0xf3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7a98, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7a98, .value=0x9f, .type=IO_READ},
        {.addr=0x7a99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x614d, .a=0xd6, .x=0x4f, .y=0x92, .sp=0x0a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x614d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x614e, .a=0x6d, .x=0x4f, .y=0x92, .sp=0x0a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x614d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x614d, .value=0x9f, .type=IO_READ},
        {.addr=0x614e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x34ca, .a=0xbd, .x=0x1f, .y=0x03, .sp=0xb5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x34ca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x34cb, .a=0xdb, .x=0x1f, .y=0x03, .sp=0xb5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x34ca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x34ca, .value=0x9f, .type=IO_READ},
        {.addr=0x34cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x7091, .a=0xf1, .x=0x8a, .y=0xfd, .sp=0x6e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x7091, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7092, .a=0x1f, .x=0x8a, .y=0xfd, .sp=0x6e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7091, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7091, .value=0x9f, .type=IO_READ},
        {.addr=0x7092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xb13a, .a=0x4e, .x=0xe8, .y=0x63, .sp=0x80, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb13a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb13b, .a=0xe4, .x=0xe8, .y=0x63, .sp=0x80, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb13a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb13a, .value=0x9f, .type=IO_READ},
        {.addr=0xb13b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4b1c, .a=0x33, .x=0x81, .y=0x5b, .sp=0xc4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x4b1c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b1d, .a=0x33, .x=0x81, .y=0x5b, .sp=0xc4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4b1c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b1c, .value=0x9f, .type=IO_READ},
        {.addr=0x4b1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x0605, .a=0x4a, .x=0x4f, .y=0x7d, .sp=0xb4, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0605, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0606, .a=0xa4, .x=0x4f, .y=0x7d, .sp=0xb4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0605, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0605, .value=0x9f, .type=IO_READ},
        {.addr=0x0606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xfd8d, .a=0x66, .x=0xca, .y=0x02, .sp=0xc5, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xfd8d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd8e, .a=0x66, .x=0xca, .y=0x02, .sp=0xc5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xfd8d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfd8d, .value=0x9f, .type=IO_READ},
        {.addr=0xfd8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x1dbf, .a=0xa3, .x=0x77, .y=0x36, .sp=0x12, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1dbf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1dc0, .a=0x3a, .x=0x77, .y=0x36, .sp=0x12, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1dbf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1dbf, .value=0x9f, .type=IO_READ},
        {.addr=0x1dc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x93f4, .a=0x8f, .x=0x88, .y=0xb3, .sp=0xb1, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x93f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x93f5, .a=0xf8, .x=0x88, .y=0xb3, .sp=0xb1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x93f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x93f4, .value=0x9f, .type=IO_READ},
        {.addr=0x93f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x6ef5, .a=0x8e, .x=0x2b, .y=0xac, .sp=0x98, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6ef5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6ef6, .a=0xe8, .x=0x2b, .y=0xac, .sp=0x98, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6ef5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6ef5, .value=0x9f, .type=IO_READ},
        {.addr=0x6ef6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6b3e, .a=0xaf, .x=0x35, .y=0xba, .sp=0xd5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6b3f, .a=0xfa, .x=0x35, .y=0xba, .sp=0xd5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6b3e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6b3e, .value=0x9f, .type=IO_READ},
        {.addr=0x6b3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x8870, .a=0x32, .x=0x8f, .y=0x30, .sp=0x9d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x8870, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8871, .a=0x23, .x=0x8f, .y=0x30, .sp=0x9d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8870, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8870, .value=0x9f, .type=IO_READ},
        {.addr=0x8871, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x88de, .a=0x53, .x=0x1e, .y=0x87, .sp=0x52, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x88de, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x88df, .a=0x35, .x=0x1e, .y=0x87, .sp=0x52, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x88de, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x88de, .value=0x9f, .type=IO_READ},
        {.addr=0x88df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xc491, .a=0x27, .x=0xd1, .y=0xbe, .sp=0xad, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc491, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc492, .a=0x72, .x=0xd1, .y=0xbe, .sp=0xad, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc491, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc491, .value=0x9f, .type=IO_READ},
        {.addr=0xc492, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xaa57, .a=0x2f, .x=0x11, .y=0x5a, .sp=0xae, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xaa57, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaa58, .a=0xf2, .x=0x11, .y=0x5a, .sp=0xae, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xaa57, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaa57, .value=0x9f, .type=IO_READ},
        {.addr=0xaa58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x52e1, .a=0x58, .x=0x10, .y=0x7d, .sp=0xd7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x52e1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x52e2, .a=0x85, .x=0x10, .y=0x7d, .sp=0xd7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x52e1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x52e1, .value=0x9f, .type=IO_READ},
        {.addr=0x52e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xfe84, .a=0x6e, .x=0x97, .y=0xdb, .sp=0xcd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xfe84, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfe85, .a=0xe6, .x=0x97, .y=0xdb, .sp=0xcd, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfe84, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfe84, .value=0x9f, .type=IO_READ},
        {.addr=0xfe85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x823d, .a=0x29, .x=0xde, .y=0xbf, .sp=0x28, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x823d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x823e, .a=0x92, .x=0xde, .y=0xbf, .sp=0x28, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x823d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x823d, .value=0x9f, .type=IO_READ},
        {.addr=0x823e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xee89, .a=0x5f, .x=0xf4, .y=0xfc, .sp=0x4e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xee89, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xee8a, .a=0xf5, .x=0xf4, .y=0xfc, .sp=0x4e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xee89, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xee89, .value=0x9f, .type=IO_READ},
        {.addr=0xee8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xc599, .a=0xa8, .x=0x0a, .y=0xba, .sp=0x62, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc599, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc59a, .a=0x8a, .x=0x0a, .y=0xba, .sp=0x62, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc599, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc599, .value=0x9f, .type=IO_READ},
        {.addr=0xc59a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xe556, .a=0x8d, .x=0xed, .y=0x14, .sp=0x36, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe556, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe557, .a=0xd8, .x=0xed, .y=0x14, .sp=0x36, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe556, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe556, .value=0x9f, .type=IO_READ},
        {.addr=0xe557, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xea08, .a=0x83, .x=0x78, .y=0x40, .sp=0x94, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xea08, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xea09, .a=0x38, .x=0x78, .y=0x40, .sp=0x94, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xea08, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xea08, .value=0x9f, .type=IO_READ},
        {.addr=0xea09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xf4b0, .a=0x33, .x=0x3b, .y=0xcc, .sp=0xf0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf4b1, .a=0x33, .x=0x3b, .y=0xcc, .sp=0xf0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf4b0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf4b0, .value=0x9f, .type=IO_READ},
        {.addr=0xf4b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x4534, .a=0x7c, .x=0x36, .y=0x51, .sp=0xd2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x4534, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4535, .a=0xc7, .x=0x36, .y=0x51, .sp=0xd2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4534, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4534, .value=0x9f, .type=IO_READ},
        {.addr=0x4535, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0d8c, .a=0x61, .x=0x54, .y=0x41, .sp=0xdf, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0d8d, .a=0x16, .x=0x54, .y=0x41, .sp=0xdf, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0d8c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0d8c, .value=0x9f, .type=IO_READ},
        {.addr=0x0d8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xaaef, .a=0x13, .x=0xe7, .y=0xd4, .sp=0x7b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xaaef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaaf0, .a=0x31, .x=0xe7, .y=0xd4, .sp=0x7b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xaaef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaaef, .value=0x9f, .type=IO_READ},
        {.addr=0xaaf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x5ee3, .a=0xd3, .x=0x00, .y=0x62, .sp=0x24, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5ee4, .a=0x3d, .x=0x00, .y=0x62, .sp=0x24, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5ee3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5ee3, .value=0x9f, .type=IO_READ},
        {.addr=0x5ee4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x2ca3, .a=0xf3, .x=0x49, .y=0x41, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2ca4, .a=0x3f, .x=0x49, .y=0x41, .sp=0x27, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2ca3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2ca3, .value=0x9f, .type=IO_READ},
        {.addr=0x2ca4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x76e2, .a=0x21, .x=0x8e, .y=0xed, .sp=0x3f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x76e2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x76e3, .a=0x12, .x=0x8e, .y=0xed, .sp=0x3f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x76e2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x76e2, .value=0x9f, .type=IO_READ},
        {.addr=0x76e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x20f7, .a=0xe4, .x=0xf7, .y=0xa6, .sp=0x2c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x20f7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x20f8, .a=0x4e, .x=0xf7, .y=0xa6, .sp=0x2c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x20f7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x20f7, .value=0x9f, .type=IO_READ},
        {.addr=0x20f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe114, .a=0xf3, .x=0xb9, .y=0xf5, .sp=0xd3, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe114, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe115, .a=0x3f, .x=0xb9, .y=0xf5, .sp=0xd3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe114, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe114, .value=0x9f, .type=IO_READ},
        {.addr=0xe115, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x843b, .a=0x9e, .x=0x00, .y=0xab, .sp=0xa6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x843b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x843c, .a=0xe9, .x=0x00, .y=0xab, .sp=0xa6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x843b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x843b, .value=0x9f, .type=IO_READ},
        {.addr=0x843c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x5578, .a=0x57, .x=0xae, .y=0xc2, .sp=0xf5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5578, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5579, .a=0x75, .x=0xae, .y=0xc2, .sp=0xf5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5578, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5578, .value=0x9f, .type=IO_READ},
        {.addr=0x5579, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x6436, .a=0x42, .x=0x4f, .y=0x64, .sp=0xb6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6436, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6437, .a=0x24, .x=0x4f, .y=0x64, .sp=0xb6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6436, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6436, .value=0x9f, .type=IO_READ},
        {.addr=0x6437, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xdae1, .a=0x04, .x=0xb7, .y=0xde, .sp=0xe5, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xdae1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdae2, .a=0x40, .x=0xb7, .y=0xde, .sp=0xe5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdae1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdae1, .value=0x9f, .type=IO_READ},
        {.addr=0xdae2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x76be, .a=0x37, .x=0x92, .y=0x50, .sp=0x48, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x76be, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x76bf, .a=0x73, .x=0x92, .y=0x50, .sp=0x48, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x76be, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x76be, .value=0x9f, .type=IO_READ},
        {.addr=0x76bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x4bd1, .a=0x93, .x=0x50, .y=0xda, .sp=0xaa, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4bd2, .a=0x39, .x=0x50, .y=0xda, .sp=0xaa, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4bd1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4bd1, .value=0x9f, .type=IO_READ},
        {.addr=0x4bd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x6616, .a=0xfa, .x=0x95, .y=0xf8, .sp=0xa6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6616, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6617, .a=0xaf, .x=0x95, .y=0xf8, .sp=0xa6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6616, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6616, .value=0x9f, .type=IO_READ},
        {.addr=0x6617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa271, .a=0xb9, .x=0xee, .y=0x57, .sp=0xaa, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa271, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa272, .a=0x9b, .x=0xee, .y=0x57, .sp=0xaa, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa271, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa271, .value=0x9f, .type=IO_READ},
        {.addr=0xa272, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xf4ad, .a=0x73, .x=0x32, .y=0x57, .sp=0x5f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ad, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf4ae, .a=0x37, .x=0x32, .y=0x57, .sp=0x5f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf4ad, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf4ad, .value=0x9f, .type=IO_READ},
        {.addr=0xf4ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0x3c, .x=0xd8, .y=0x62, .sp=0xb7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x928d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0xc3, .x=0xd8, .y=0x62, .sp=0xb7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x928d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0x9f, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xd335, .a=0x41, .x=0xfc, .y=0xa5, .sp=0x44, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd335, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd336, .a=0x14, .x=0xfc, .y=0xa5, .sp=0x44, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd335, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd335, .value=0x9f, .type=IO_READ},
        {.addr=0xd336, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xd29f, .a=0xae, .x=0x3f, .y=0xf8, .sp=0xbb, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd29f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd2a0, .a=0xea, .x=0x3f, .y=0xf8, .sp=0xbb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd29f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd29f, .value=0x9f, .type=IO_READ},
        {.addr=0xd2a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x75a2, .a=0x1d, .x=0xdb, .y=0x65, .sp=0xce, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x75a2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x75a3, .a=0xd1, .x=0xdb, .y=0x65, .sp=0xce, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x75a2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x75a2, .value=0x9f, .type=IO_READ},
        {.addr=0x75a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x0bd9, .a=0x2b, .x=0x55, .y=0x13, .sp=0x11, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0bda, .a=0xb2, .x=0x55, .y=0x13, .sp=0x11, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0bd9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0bd9, .value=0x9f, .type=IO_READ},
        {.addr=0x0bda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xfff8, .a=0xd8, .x=0x3e, .y=0x4a, .sp=0xca, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xfff8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfff9, .a=0x8d, .x=0x3e, .y=0x4a, .sp=0xca, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfff8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfff8, .value=0x9f, .type=IO_READ},
        {.addr=0xfff9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x60db, .a=0x61, .x=0xd4, .y=0x39, .sp=0xb3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x60db, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x60dc, .a=0x16, .x=0xd4, .y=0x39, .sp=0xb3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x60db, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x60db, .value=0x9f, .type=IO_READ},
        {.addr=0x60dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x8069, .a=0xb2, .x=0x20, .y=0x52, .sp=0x1b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8069, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x806a, .a=0x2b, .x=0x20, .y=0x52, .sp=0x1b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8069, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8069, .value=0x9f, .type=IO_READ},
        {.addr=0x806a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0xf3, .x=0x25, .y=0x49, .sp=0x9e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x075f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0760, .a=0x3f, .x=0x25, .y=0x49, .sp=0x9e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x075f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0x9f, .type=IO_READ},
        {.addr=0x0760, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x2309, .a=0x26, .x=0x6e, .y=0x41, .sp=0xb2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2309, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x230a, .a=0x62, .x=0x6e, .y=0x41, .sp=0xb2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2309, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2309, .value=0x9f, .type=IO_READ},
        {.addr=0x230a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x5b80, .a=0x29, .x=0x6c, .y=0xe0, .sp=0xdb, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x5b80, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5b81, .a=0x92, .x=0x6c, .y=0xe0, .sp=0xdb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5b80, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5b80, .value=0x9f, .type=IO_READ},
        {.addr=0x5b81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x81ef, .a=0x27, .x=0x66, .y=0xe6, .sp=0xb4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x81ef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x81f0, .a=0x72, .x=0x66, .y=0xe6, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x81ef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x81ef, .value=0x9f, .type=IO_READ},
        {.addr=0x81f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x59b4, .a=0xbb, .x=0xca, .y=0xeb, .sp=0xf2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x59b4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x59b5, .a=0xbb, .x=0xca, .y=0xeb, .sp=0xf2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x59b4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x59b4, .value=0x9f, .type=IO_READ},
        {.addr=0x59b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x7bd7, .a=0x53, .x=0x99, .y=0x1f, .sp=0x51, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7bd8, .a=0x35, .x=0x99, .y=0x1f, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7bd7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7bd7, .value=0x9f, .type=IO_READ},
        {.addr=0x7bd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x6a66, .a=0x4a, .x=0xf6, .y=0x99, .sp=0x0b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6a66, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6a67, .a=0xa4, .x=0xf6, .y=0x99, .sp=0x0b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6a66, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6a66, .value=0x9f, .type=IO_READ},
        {.addr=0x6a67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x2261, .a=0xbc, .x=0x38, .y=0xc4, .sp=0x10, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2261, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2262, .a=0xcb, .x=0x38, .y=0xc4, .sp=0x10, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2261, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2261, .value=0x9f, .type=IO_READ},
        {.addr=0x2262, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9322, .a=0xa1, .x=0x55, .y=0xdf, .sp=0x5d, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9322, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9323, .a=0x1a, .x=0x55, .y=0xdf, .sp=0x5d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9322, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9322, .value=0x9f, .type=IO_READ},
        {.addr=0x9323, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xa619, .a=0x98, .x=0x39, .y=0x4b, .sp=0x51, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa619, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa61a, .a=0x89, .x=0x39, .y=0x4b, .sp=0x51, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa619, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa619, .value=0x9f, .type=IO_READ},
        {.addr=0xa61a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x46d4, .a=0x63, .x=0x2e, .y=0x82, .sp=0x13, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x46d4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x46d5, .a=0x36, .x=0x2e, .y=0x82, .sp=0x13, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x46d4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x46d4, .value=0x9f, .type=IO_READ},
        {.addr=0x46d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x8927, .a=0x67, .x=0x82, .y=0x74, .sp=0xd3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x8927, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8928, .a=0x76, .x=0x82, .y=0x74, .sp=0xd3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8927, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8927, .value=0x9f, .type=IO_READ},
        {.addr=0x8928, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xe4e6, .a=0xcc, .x=0x91, .y=0xa2, .sp=0x38, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4e7, .a=0xcc, .x=0x91, .y=0xa2, .sp=0x38, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe4e6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4e6, .value=0x9f, .type=IO_READ},
        {.addr=0xe4e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x6213, .a=0xc7, .x=0x24, .y=0xca, .sp=0xff, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6213, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6214, .a=0x7c, .x=0x24, .y=0xca, .sp=0xff, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6213, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6213, .value=0x9f, .type=IO_READ},
        {.addr=0x6214, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xad3a, .a=0x7c, .x=0xa5, .y=0x04, .sp=0x29, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xad3a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xad3b, .a=0xc7, .x=0xa5, .y=0x04, .sp=0x29, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xad3a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xad3a, .value=0x9f, .type=IO_READ},
        {.addr=0xad3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x5103, .a=0x17, .x=0xa5, .y=0xf9, .sp=0x29, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5103, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5104, .a=0x71, .x=0xa5, .y=0xf9, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5103, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5103, .value=0x9f, .type=IO_READ},
        {.addr=0x5104, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x31d4, .a=0x29, .x=0x49, .y=0x19, .sp=0x31, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x31d4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x31d5, .a=0x92, .x=0x49, .y=0x19, .sp=0x31, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x31d4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x31d4, .value=0x9f, .type=IO_READ},
        {.addr=0x31d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x5cb7, .a=0xe1, .x=0xbe, .y=0xf3, .sp=0x3d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5cb8, .a=0x1e, .x=0xbe, .y=0xf3, .sp=0x3d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x5cb7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5cb7, .value=0x9f, .type=IO_READ},
        {.addr=0x5cb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x2537, .a=0x7b, .x=0x91, .y=0x96, .sp=0x4c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2537, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2538, .a=0xb7, .x=0x91, .y=0x96, .sp=0x4c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2537, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2537, .value=0x9f, .type=IO_READ},
        {.addr=0x2538, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x7625, .a=0x1b, .x=0x54, .y=0x5b, .sp=0x38, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x7625, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7626, .a=0xb1, .x=0x54, .y=0x5b, .sp=0x38, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x7625, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7625, .value=0x9f, .type=IO_READ},
        {.addr=0x7626, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xe642, .a=0x54, .x=0x1e, .y=0x36, .sp=0xc5, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe642, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe643, .a=0x45, .x=0x1e, .y=0x36, .sp=0xc5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe642, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe642, .value=0x9f, .type=IO_READ},
        {.addr=0xe643, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x8f7b, .a=0x57, .x=0x10, .y=0xcf, .sp=0xf4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f7c, .a=0x75, .x=0x10, .y=0xcf, .sp=0xf4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8f7b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f7b, .value=0x9f, .type=IO_READ},
        {.addr=0x8f7c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x792d, .a=0x6f, .x=0xa7, .y=0x21, .sp=0xf1, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x792d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x792e, .a=0xf6, .x=0xa7, .y=0x21, .sp=0xf1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x792d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x792d, .value=0x9f, .type=IO_READ},
        {.addr=0x792e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x5cca, .a=0x77, .x=0xda, .y=0x76, .sp=0x5b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5cca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5ccb, .a=0x77, .x=0xda, .y=0x76, .sp=0x5b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5cca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5cca, .value=0x9f, .type=IO_READ},
        {.addr=0x5ccb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xe3cc, .a=0x93, .x=0x1c, .y=0x72, .sp=0xdf, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe3cc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe3cd, .a=0x39, .x=0x1c, .y=0x72, .sp=0xdf, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe3cc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe3cc, .value=0x9f, .type=IO_READ},
        {.addr=0xe3cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xde1d, .a=0x0f, .x=0xb0, .y=0xbc, .sp=0xfd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xde1d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde1e, .a=0xf0, .x=0xb0, .y=0xbc, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xde1d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde1d, .value=0x9f, .type=IO_READ},
        {.addr=0xde1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x6ee6, .a=0x0b, .x=0x54, .y=0xd8, .sp=0xa2, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6ee7, .a=0xb0, .x=0x54, .y=0xd8, .sp=0xa2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6ee6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6ee6, .value=0x9f, .type=IO_READ},
        {.addr=0x6ee7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x2b44, .a=0xcd, .x=0x6d, .y=0x4c, .sp=0x58, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b44, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2b45, .a=0xdc, .x=0x6d, .y=0x4c, .sp=0x58, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2b44, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2b44, .value=0x9f, .type=IO_READ},
        {.addr=0x2b45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x116d, .a=0x18, .x=0x19, .y=0x1f, .sp=0x4f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x116d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x116e, .a=0x81, .x=0x19, .y=0x1f, .sp=0x4f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x116d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x116d, .value=0x9f, .type=IO_READ},
        {.addr=0x116e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xa606, .a=0x46, .x=0xa7, .y=0x53, .sp=0xc9, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xa606, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa607, .a=0x64, .x=0xa7, .y=0x53, .sp=0xc9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa606, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa606, .value=0x9f, .type=IO_READ},
        {.addr=0xa607, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0100) {
    const struct CPU_State initial_cpu = {.pc=0x35f1, .a=0x52, .x=0x1c, .y=0x6a, .sp=0xb2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x35f1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x35f2, .a=0x25, .x=0x1c, .y=0x6a, .sp=0xb2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x35f1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x35f1, .value=0x9f, .type=IO_READ},
        {.addr=0x35f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf163, .a=0xea, .x=0x24, .y=0x0c, .sp=0xcb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf163, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf164, .a=0xae, .x=0x24, .y=0x0c, .sp=0xcb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf163, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf163, .value=0x9f, .type=IO_READ},
        {.addr=0xf164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0102) {
    const struct CPU_State initial_cpu = {.pc=0x3091, .a=0x12, .x=0x8c, .y=0x77, .sp=0x7b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3091, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3092, .a=0x21, .x=0x8c, .y=0x77, .sp=0x7b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3091, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3091, .value=0x9f, .type=IO_READ},
        {.addr=0x3092, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0103) {
    const struct CPU_State initial_cpu = {.pc=0xc080, .a=0xf5, .x=0x6c, .y=0x4d, .sp=0xdb, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc080, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc081, .a=0x5f, .x=0x6c, .y=0x4d, .sp=0xdb, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc080, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc080, .value=0x9f, .type=IO_READ},
        {.addr=0xc081, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0104) {
    const struct CPU_State initial_cpu = {.pc=0x5f0f, .a=0xc5, .x=0x9a, .y=0x10, .sp=0x43, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5f10, .a=0x5c, .x=0x9a, .y=0x10, .sp=0x43, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5f0f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5f0f, .value=0x9f, .type=IO_READ},
        {.addr=0x5f10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0105) {
    const struct CPU_State initial_cpu = {.pc=0x65b2, .a=0xc4, .x=0x8d, .y=0x58, .sp=0x7a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x65b2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x65b3, .a=0x4c, .x=0x8d, .y=0x58, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x65b2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x65b2, .value=0x9f, .type=IO_READ},
        {.addr=0x65b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0106) {
    const struct CPU_State initial_cpu = {.pc=0x294b, .a=0x48, .x=0xa2, .y=0x7f, .sp=0x46, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x294b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x294c, .a=0x84, .x=0xa2, .y=0x7f, .sp=0x46, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x294b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x294b, .value=0x9f, .type=IO_READ},
        {.addr=0x294c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0107) {
    const struct CPU_State initial_cpu = {.pc=0xc41c, .a=0xd5, .x=0x8c, .y=0x2b, .sp=0x2d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc41c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc41d, .a=0x5d, .x=0x8c, .y=0x2b, .sp=0x2d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc41c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc41c, .value=0x9f, .type=IO_READ},
        {.addr=0xc41d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0108) {
    const struct CPU_State initial_cpu = {.pc=0x61de, .a=0x6e, .x=0xd7, .y=0xe8, .sp=0x1a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x61de, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x61df, .a=0xe6, .x=0xd7, .y=0xe8, .sp=0x1a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x61de, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x61de, .value=0x9f, .type=IO_READ},
        {.addr=0x61df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0109) {
    const struct CPU_State initial_cpu = {.pc=0xbdb4, .a=0xb8, .x=0xfa, .y=0x9f, .sp=0x5e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbdb5, .a=0x8b, .x=0xfa, .y=0x9f, .sp=0x5e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbdb4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbdb4, .value=0x9f, .type=IO_READ},
        {.addr=0xbdb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010A) {
    const struct CPU_State initial_cpu = {.pc=0x741e, .a=0xe2, .x=0xdf, .y=0xf3, .sp=0x09, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x741e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x741f, .a=0x2e, .x=0xdf, .y=0xf3, .sp=0x09, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x741e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x741e, .value=0x9f, .type=IO_READ},
        {.addr=0x741f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010B) {
    const struct CPU_State initial_cpu = {.pc=0x04a6, .a=0xb5, .x=0x3b, .y=0x7c, .sp=0xde, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x04a6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x04a7, .a=0x5b, .x=0x3b, .y=0x7c, .sp=0xde, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x04a6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x04a6, .value=0x9f, .type=IO_READ},
        {.addr=0x04a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010C) {
    const struct CPU_State initial_cpu = {.pc=0x40ac, .a=0xe1, .x=0x97, .y=0x91, .sp=0xea, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x40ac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40ad, .a=0x1e, .x=0x97, .y=0x91, .sp=0xea, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x40ac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40ac, .value=0x9f, .type=IO_READ},
        {.addr=0x40ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010D) {
    const struct CPU_State initial_cpu = {.pc=0x03c3, .a=0xc8, .x=0xd2, .y=0x0f, .sp=0xd0, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x03c3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x03c4, .a=0x8c, .x=0xd2, .y=0x0f, .sp=0xd0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x03c3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x03c3, .value=0x9f, .type=IO_READ},
        {.addr=0x03c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010E) {
    const struct CPU_State initial_cpu = {.pc=0xb031, .a=0xdf, .x=0x37, .y=0xff, .sp=0x78, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb031, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb032, .a=0xfd, .x=0x37, .y=0xff, .sp=0x78, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb031, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb031, .value=0x9f, .type=IO_READ},
        {.addr=0xb032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_010F) {
    const struct CPU_State initial_cpu = {.pc=0xcd66, .a=0x3c, .x=0xd4, .y=0xbb, .sp=0x6a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xcd66, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcd67, .a=0xc3, .x=0xd4, .y=0xbb, .sp=0x6a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcd66, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcd66, .value=0x9f, .type=IO_READ},
        {.addr=0xcd67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0110) {
    const struct CPU_State initial_cpu = {.pc=0x5bbb, .a=0xef, .x=0x17, .y=0xcc, .sp=0xaf, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5bbb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5bbc, .a=0xfe, .x=0x17, .y=0xcc, .sp=0xaf, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5bbb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5bbb, .value=0x9f, .type=IO_READ},
        {.addr=0x5bbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0111) {
    const struct CPU_State initial_cpu = {.pc=0x104e, .a=0xda, .x=0x02, .y=0x86, .sp=0xc4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x104e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x104f, .a=0xad, .x=0x02, .y=0x86, .sp=0xc4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x104e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x104e, .value=0x9f, .type=IO_READ},
        {.addr=0x104f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0112) {
    const struct CPU_State initial_cpu = {.pc=0xf134, .a=0x7e, .x=0x07, .y=0x1d, .sp=0x91, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xf134, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf135, .a=0xe7, .x=0x07, .y=0x1d, .sp=0x91, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf134, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf134, .value=0x9f, .type=IO_READ},
        {.addr=0xf135, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0113) {
    const struct CPU_State initial_cpu = {.pc=0x13af, .a=0xa9, .x=0xae, .y=0x14, .sp=0xdf, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x13af, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x13b0, .a=0x9a, .x=0xae, .y=0x14, .sp=0xdf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x13af, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x13af, .value=0x9f, .type=IO_READ},
        {.addr=0x13b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0114) {
    const struct CPU_State initial_cpu = {.pc=0xe5f6, .a=0xcf, .x=0x9f, .y=0xda, .sp=0xaf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe5f6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe5f7, .a=0xfc, .x=0x9f, .y=0xda, .sp=0xaf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe5f6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe5f6, .value=0x9f, .type=IO_READ},
        {.addr=0xe5f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0115) {
    const struct CPU_State initial_cpu = {.pc=0x03ae, .a=0x7d, .x=0x1a, .y=0xb3, .sp=0x12, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x03ae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x03af, .a=0xd7, .x=0x1a, .y=0xb3, .sp=0x12, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x03ae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x03ae, .value=0x9f, .type=IO_READ},
        {.addr=0x03af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0116) {
    const struct CPU_State initial_cpu = {.pc=0x1e75, .a=0xbe, .x=0x17, .y=0xcc, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x1e75, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1e76, .a=0xeb, .x=0x17, .y=0xcc, .sp=0xfe, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1e75, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1e75, .value=0x9f, .type=IO_READ},
        {.addr=0x1e76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0117) {
    const struct CPU_State initial_cpu = {.pc=0x1521, .a=0x42, .x=0xbd, .y=0x30, .sp=0xb6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x1521, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1522, .a=0x24, .x=0xbd, .y=0x30, .sp=0xb6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1521, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1521, .value=0x9f, .type=IO_READ},
        {.addr=0x1522, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0118) {
    const struct CPU_State initial_cpu = {.pc=0xd0a7, .a=0x8f, .x=0xc5, .y=0xc2, .sp=0x2f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd0a7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd0a8, .a=0xf8, .x=0xc5, .y=0xc2, .sp=0x2f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd0a7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd0a7, .value=0x9f, .type=IO_READ},
        {.addr=0xd0a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0f0a, .a=0x30, .x=0x7a, .y=0xfc, .sp=0x14, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0f0b, .a=0x03, .x=0x7a, .y=0xfc, .sp=0x14, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0f0a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0f0a, .value=0x9f, .type=IO_READ},
        {.addr=0x0f0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011A) {
    const struct CPU_State initial_cpu = {.pc=0x8e70, .a=0x25, .x=0xa7, .y=0x9d, .sp=0x07, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8e70, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8e71, .a=0x52, .x=0xa7, .y=0x9d, .sp=0x07, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8e70, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8e70, .value=0x9f, .type=IO_READ},
        {.addr=0x8e71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011B) {
    const struct CPU_State initial_cpu = {.pc=0xe02a, .a=0x3c, .x=0x8b, .y=0xed, .sp=0x32, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe02a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe02b, .a=0xc3, .x=0x8b, .y=0xed, .sp=0x32, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe02a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe02a, .value=0x9f, .type=IO_READ},
        {.addr=0xe02b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011C) {
    const struct CPU_State initial_cpu = {.pc=0x75a4, .a=0xde, .x=0x87, .y=0x57, .sp=0xca, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x75a4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x75a5, .a=0xed, .x=0x87, .y=0x57, .sp=0xca, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x75a4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x75a4, .value=0x9f, .type=IO_READ},
        {.addr=0x75a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011D) {
    const struct CPU_State initial_cpu = {.pc=0xa46d, .a=0x8b, .x=0xcb, .y=0x7e, .sp=0xe7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa46d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa46e, .a=0xb8, .x=0xcb, .y=0x7e, .sp=0xe7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa46d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa46d, .value=0x9f, .type=IO_READ},
        {.addr=0xa46e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7dcc, .a=0xff, .x=0x20, .y=0x53, .sp=0xa8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x7dcc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7dcd, .a=0xff, .x=0x20, .y=0x53, .sp=0xa8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7dcc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7dcc, .value=0x9f, .type=IO_READ},
        {.addr=0x7dcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7573, .a=0x95, .x=0xc7, .y=0x9c, .sp=0xc5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7573, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7574, .a=0x59, .x=0xc7, .y=0x9c, .sp=0xc5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7573, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7573, .value=0x9f, .type=IO_READ},
        {.addr=0x7574, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0120) {
    const struct CPU_State initial_cpu = {.pc=0xa8b1, .a=0xf4, .x=0xbd, .y=0xfc, .sp=0x73, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa8b2, .a=0x4f, .x=0xbd, .y=0xfc, .sp=0x73, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa8b1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa8b1, .value=0x9f, .type=IO_READ},
        {.addr=0xa8b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0121) {
    const struct CPU_State initial_cpu = {.pc=0x89e1, .a=0x1b, .x=0x5a, .y=0xb6, .sp=0x08, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x89e1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x89e2, .a=0xb1, .x=0x5a, .y=0xb6, .sp=0x08, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x89e1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x89e1, .value=0x9f, .type=IO_READ},
        {.addr=0x89e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0122) {
    const struct CPU_State initial_cpu = {.pc=0x9144, .a=0x5e, .x=0x6d, .y=0x7f, .sp=0x56, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9144, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9145, .a=0xe5, .x=0x6d, .y=0x7f, .sp=0x56, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9144, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9144, .value=0x9f, .type=IO_READ},
        {.addr=0x9145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0123) {
    const struct CPU_State initial_cpu = {.pc=0x3932, .a=0x21, .x=0xbf, .y=0xcd, .sp=0x1c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3932, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3933, .a=0x12, .x=0xbf, .y=0xcd, .sp=0x1c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3932, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3932, .value=0x9f, .type=IO_READ},
        {.addr=0x3933, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0124) {
    const struct CPU_State initial_cpu = {.pc=0xb685, .a=0x29, .x=0x3a, .y=0xb4, .sp=0xbb, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb685, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb686, .a=0x92, .x=0x3a, .y=0xb4, .sp=0xbb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb685, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb685, .value=0x9f, .type=IO_READ},
        {.addr=0xb686, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0125) {
    const struct CPU_State initial_cpu = {.pc=0x92ca, .a=0x3b, .x=0xe7, .y=0x88, .sp=0x13, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x92ca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x92cb, .a=0xb3, .x=0xe7, .y=0x88, .sp=0x13, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x92ca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x92ca, .value=0x9f, .type=IO_READ},
        {.addr=0x92cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0126) {
    const struct CPU_State initial_cpu = {.pc=0x7759, .a=0x1f, .x=0x91, .y=0x7a, .sp=0xad, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x7759, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x775a, .a=0xf1, .x=0x91, .y=0x7a, .sp=0xad, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7759, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7759, .value=0x9f, .type=IO_READ},
        {.addr=0x775a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0127) {
    const struct CPU_State initial_cpu = {.pc=0x707f, .a=0x13, .x=0x4d, .y=0xb9, .sp=0x03, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x707f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7080, .a=0x31, .x=0x4d, .y=0xb9, .sp=0x03, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x707f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x707f, .value=0x9f, .type=IO_READ},
        {.addr=0x7080, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0128) {
    const struct CPU_State initial_cpu = {.pc=0xe33d, .a=0x89, .x=0x34, .y=0x70, .sp=0x13, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe33d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe33e, .a=0x98, .x=0x34, .y=0x70, .sp=0x13, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe33d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe33d, .value=0x9f, .type=IO_READ},
        {.addr=0xe33e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0129) {
    const struct CPU_State initial_cpu = {.pc=0x15a3, .a=0x48, .x=0xc5, .y=0xaa, .sp=0x0c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x15a3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x15a4, .a=0x84, .x=0xc5, .y=0xaa, .sp=0x0c, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x15a3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x15a3, .value=0x9f, .type=IO_READ},
        {.addr=0x15a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012A) {
    const struct CPU_State initial_cpu = {.pc=0xce6e, .a=0x7c, .x=0xfd, .y=0xc4, .sp=0x6d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xce6e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xce6f, .a=0xc7, .x=0xfd, .y=0xc4, .sp=0x6d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xce6e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xce6e, .value=0x9f, .type=IO_READ},
        {.addr=0xce6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012B) {
    const struct CPU_State initial_cpu = {.pc=0xb057, .a=0xbd, .x=0xc3, .y=0x5b, .sp=0xc9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb057, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb058, .a=0xdb, .x=0xc3, .y=0x5b, .sp=0xc9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb057, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb057, .value=0x9f, .type=IO_READ},
        {.addr=0xb058, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012C) {
    const struct CPU_State initial_cpu = {.pc=0x62f3, .a=0xf1, .x=0x42, .y=0x6f, .sp=0xd1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x62f3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x62f4, .a=0x1f, .x=0x42, .y=0x6f, .sp=0xd1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x62f3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x62f3, .value=0x9f, .type=IO_READ},
        {.addr=0x62f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012D) {
    const struct CPU_State initial_cpu = {.pc=0xdc65, .a=0x92, .x=0xdc, .y=0xa5, .sp=0xdc, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xdc65, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdc66, .a=0x29, .x=0xdc, .y=0xa5, .sp=0xdc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xdc65, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdc65, .value=0x9f, .type=IO_READ},
        {.addr=0xdc66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012E) {
    const struct CPU_State initial_cpu = {.pc=0xdd86, .a=0x61, .x=0x42, .y=0xb9, .sp=0x3e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdd86, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdd87, .a=0x16, .x=0x42, .y=0xb9, .sp=0x3e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdd86, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdd86, .value=0x9f, .type=IO_READ},
        {.addr=0xdd87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_012F) {
    const struct CPU_State initial_cpu = {.pc=0x9fab, .a=0x29, .x=0x7e, .y=0xcc, .sp=0x76, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9fab, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9fac, .a=0x92, .x=0x7e, .y=0xcc, .sp=0x76, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9fab, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9fab, .value=0x9f, .type=IO_READ},
        {.addr=0x9fac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0130) {
    const struct CPU_State initial_cpu = {.pc=0x3ad1, .a=0xcb, .x=0x14, .y=0x27, .sp=0x01, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3ad1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3ad2, .a=0xbc, .x=0x14, .y=0x27, .sp=0x01, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3ad1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3ad1, .value=0x9f, .type=IO_READ},
        {.addr=0x3ad2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0131) {
    const struct CPU_State initial_cpu = {.pc=0xfe95, .a=0xcf, .x=0x5d, .y=0x91, .sp=0xb5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xfe95, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfe96, .a=0xfc, .x=0x5d, .y=0x91, .sp=0xb5, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xfe95, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfe95, .value=0x9f, .type=IO_READ},
        {.addr=0xfe96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0132) {
    const struct CPU_State initial_cpu = {.pc=0x87d1, .a=0x44, .x=0x23, .y=0x1e, .sp=0x29, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x87d1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x87d2, .a=0x44, .x=0x23, .y=0x1e, .sp=0x29, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x87d1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x87d1, .value=0x9f, .type=IO_READ},
        {.addr=0x87d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0133) {
    const struct CPU_State initial_cpu = {.pc=0xbfcd, .a=0x9b, .x=0x2f, .y=0x69, .sp=0x2b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xbfcd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbfce, .a=0xb9, .x=0x2f, .y=0x69, .sp=0x2b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbfcd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbfcd, .value=0x9f, .type=IO_READ},
        {.addr=0xbfce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0134) {
    const struct CPU_State initial_cpu = {.pc=0x12ae, .a=0xb3, .x=0xfd, .y=0x04, .sp=0xb0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x12ae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x12af, .a=0x3b, .x=0xfd, .y=0x04, .sp=0xb0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x12ae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x12ae, .value=0x9f, .type=IO_READ},
        {.addr=0x12af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0135) {
    const struct CPU_State initial_cpu = {.pc=0x4355, .a=0xee, .x=0x48, .y=0xa4, .sp=0x21, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x4355, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4356, .a=0xee, .x=0x48, .y=0xa4, .sp=0x21, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x4355, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4355, .value=0x9f, .type=IO_READ},
        {.addr=0x4356, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0136) {
    const struct CPU_State initial_cpu = {.pc=0xd0e4, .a=0x43, .x=0xbe, .y=0x31, .sp=0x8d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd0e5, .a=0x34, .x=0xbe, .y=0x31, .sp=0x8d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd0e4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd0e4, .value=0x9f, .type=IO_READ},
        {.addr=0xd0e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0137) {
    const struct CPU_State initial_cpu = {.pc=0xbee7, .a=0xed, .x=0xed, .y=0x28, .sp=0x19, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbee7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbee8, .a=0xde, .x=0xed, .y=0x28, .sp=0x19, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbee7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbee7, .value=0x9f, .type=IO_READ},
        {.addr=0xbee8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0138) {
    const struct CPU_State initial_cpu = {.pc=0x7fcd, .a=0x08, .x=0x02, .y=0x63, .sp=0x2a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7fcd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7fce, .a=0x80, .x=0x02, .y=0x63, .sp=0x2a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7fcd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7fcd, .value=0x9f, .type=IO_READ},
        {.addr=0x7fce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0139) {
    const struct CPU_State initial_cpu = {.pc=0xceec, .a=0x58, .x=0x18, .y=0x9f, .sp=0x0c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xceec, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xceed, .a=0x85, .x=0x18, .y=0x9f, .sp=0x0c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xceec, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xceec, .value=0x9f, .type=IO_READ},
        {.addr=0xceed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013A) {
    const struct CPU_State initial_cpu = {.pc=0x1842, .a=0x8c, .x=0x0a, .y=0x13, .sp=0x8f, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x1842, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1843, .a=0xc8, .x=0x0a, .y=0x13, .sp=0x8f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1842, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1842, .value=0x9f, .type=IO_READ},
        {.addr=0x1843, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013B) {
    const struct CPU_State initial_cpu = {.pc=0xc961, .a=0x96, .x=0xc6, .y=0xd0, .sp=0x03, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc961, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc962, .a=0x69, .x=0xc6, .y=0xd0, .sp=0x03, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc961, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc961, .value=0x9f, .type=IO_READ},
        {.addr=0xc962, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013C) {
    const struct CPU_State initial_cpu = {.pc=0x736c, .a=0xb4, .x=0x24, .y=0xba, .sp=0x60, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x736c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x736d, .a=0x4b, .x=0x24, .y=0xba, .sp=0x60, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x736c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x736c, .value=0x9f, .type=IO_READ},
        {.addr=0x736d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013D) {
    const struct CPU_State initial_cpu = {.pc=0xefe9, .a=0x1f, .x=0x89, .y=0x4b, .sp=0xb6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xefe9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xefea, .a=0xf1, .x=0x89, .y=0x4b, .sp=0xb6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xefe9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xefe9, .value=0x9f, .type=IO_READ},
        {.addr=0xefea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc9dc, .a=0x2c, .x=0x43, .y=0x7b, .sp=0x7d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc9dc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc9dd, .a=0xc2, .x=0x43, .y=0x7b, .sp=0x7d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc9dc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc9dc, .value=0x9f, .type=IO_READ},
        {.addr=0xc9dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_013F) {
    const struct CPU_State initial_cpu = {.pc=0x74b3, .a=0x16, .x=0x05, .y=0x95, .sp=0x7a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x74b3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x74b4, .a=0x61, .x=0x05, .y=0x95, .sp=0x7a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x74b3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x74b3, .value=0x9f, .type=IO_READ},
        {.addr=0x74b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0140) {
    const struct CPU_State initial_cpu = {.pc=0xc91e, .a=0x59, .x=0x07, .y=0xd6, .sp=0x4c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc91e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc91f, .a=0x95, .x=0x07, .y=0xd6, .sp=0x4c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc91e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc91e, .value=0x9f, .type=IO_READ},
        {.addr=0xc91f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0141) {
    const struct CPU_State initial_cpu = {.pc=0x6c03, .a=0xf5, .x=0x02, .y=0xa2, .sp=0x6a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6c03, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6c04, .a=0x5f, .x=0x02, .y=0xa2, .sp=0x6a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6c03, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6c03, .value=0x9f, .type=IO_READ},
        {.addr=0x6c04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0142) {
    const struct CPU_State initial_cpu = {.pc=0x68d0, .a=0x40, .x=0xea, .y=0xa2, .sp=0x48, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x68d0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x68d1, .a=0x04, .x=0xea, .y=0xa2, .sp=0x48, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x68d0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x68d0, .value=0x9f, .type=IO_READ},
        {.addr=0x68d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8095, .a=0x79, .x=0x6e, .y=0x03, .sp=0x28, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8095, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8096, .a=0x97, .x=0x6e, .y=0x03, .sp=0x28, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8095, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8095, .value=0x9f, .type=IO_READ},
        {.addr=0x8096, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0144) {
    const struct CPU_State initial_cpu = {.pc=0x949b, .a=0x23, .x=0x57, .y=0x0a, .sp=0x0c, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x949b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x949c, .a=0x32, .x=0x57, .y=0x0a, .sp=0x0c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x949b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x949b, .value=0x9f, .type=IO_READ},
        {.addr=0x949c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0145) {
    const struct CPU_State initial_cpu = {.pc=0x8ab6, .a=0x84, .x=0x2c, .y=0x35, .sp=0xd7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ab6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8ab7, .a=0x48, .x=0x2c, .y=0x35, .sp=0xd7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8ab6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8ab6, .value=0x9f, .type=IO_READ},
        {.addr=0x8ab7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8724, .a=0x2b, .x=0xaa, .y=0x19, .sp=0xe9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8724, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8725, .a=0xb2, .x=0xaa, .y=0x19, .sp=0xe9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8724, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8724, .value=0x9f, .type=IO_READ},
        {.addr=0x8725, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0147) {
    const struct CPU_State initial_cpu = {.pc=0x7e34, .a=0x1b, .x=0xd7, .y=0x32, .sp=0x0f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x7e34, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7e35, .a=0xb1, .x=0xd7, .y=0x32, .sp=0x0f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x7e34, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7e34, .value=0x9f, .type=IO_READ},
        {.addr=0x7e35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0148) {
    const struct CPU_State initial_cpu = {.pc=0x123a, .a=0xf4, .x=0x52, .y=0x6f, .sp=0x5e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x123a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x123b, .a=0x4f, .x=0x52, .y=0x6f, .sp=0x5e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x123a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x123a, .value=0x9f, .type=IO_READ},
        {.addr=0x123b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0149) {
    const struct CPU_State initial_cpu = {.pc=0xd1c1, .a=0x73, .x=0x7e, .y=0x6a, .sp=0x91, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd1c1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd1c2, .a=0x37, .x=0x7e, .y=0x6a, .sp=0x91, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd1c1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd1c1, .value=0x9f, .type=IO_READ},
        {.addr=0xd1c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd6d1, .a=0x8b, .x=0x7e, .y=0xa4, .sp=0xae, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd6d2, .a=0xb8, .x=0x7e, .y=0xa4, .sp=0xae, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd6d1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd6d1, .value=0x9f, .type=IO_READ},
        {.addr=0xd6d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014B) {
    const struct CPU_State initial_cpu = {.pc=0x87ac, .a=0x27, .x=0xbf, .y=0x2a, .sp=0x5c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x87ac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x87ad, .a=0x72, .x=0xbf, .y=0x2a, .sp=0x5c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x87ac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x87ac, .value=0x9f, .type=IO_READ},
        {.addr=0x87ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014C) {
    const struct CPU_State initial_cpu = {.pc=0x390f, .a=0xfc, .x=0x24, .y=0x44, .sp=0xd8, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x390f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3910, .a=0xcf, .x=0x24, .y=0x44, .sp=0xd8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x390f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x390f, .value=0x9f, .type=IO_READ},
        {.addr=0x3910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014D) {
    const struct CPU_State initial_cpu = {.pc=0x49fa, .a=0x8f, .x=0x60, .y=0xac, .sp=0xc4, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x49fa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x49fb, .a=0xf8, .x=0x60, .y=0xac, .sp=0xc4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x49fa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x49fa, .value=0x9f, .type=IO_READ},
        {.addr=0x49fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014E) {
    const struct CPU_State initial_cpu = {.pc=0x68f4, .a=0xf7, .x=0x70, .y=0xe8, .sp=0x6f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x68f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x68f5, .a=0x7f, .x=0x70, .y=0xe8, .sp=0x6f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x68f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x68f4, .value=0x9f, .type=IO_READ},
        {.addr=0x68f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_014F) {
    const struct CPU_State initial_cpu = {.pc=0xeb36, .a=0x9e, .x=0xe2, .y=0x1f, .sp=0x15, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xeb36, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeb37, .a=0xe9, .x=0xe2, .y=0x1f, .sp=0x15, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xeb36, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeb36, .value=0x9f, .type=IO_READ},
        {.addr=0xeb37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0150) {
    const struct CPU_State initial_cpu = {.pc=0x6e24, .a=0x66, .x=0xee, .y=0x1b, .sp=0x4d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x6e24, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6e25, .a=0x66, .x=0xee, .y=0x1b, .sp=0x4d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6e24, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6e24, .value=0x9f, .type=IO_READ},
        {.addr=0x6e25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0151) {
    const struct CPU_State initial_cpu = {.pc=0xe1ce, .a=0x73, .x=0x26, .y=0x7e, .sp=0x41, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe1cf, .a=0x37, .x=0x26, .y=0x7e, .sp=0x41, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe1ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe1ce, .value=0x9f, .type=IO_READ},
        {.addr=0xe1cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0152) {
    const struct CPU_State initial_cpu = {.pc=0x98db, .a=0x8a, .x=0x23, .y=0xad, .sp=0xb3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x98db, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x98dc, .a=0xa8, .x=0x23, .y=0xad, .sp=0xb3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x98db, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x98db, .value=0x9f, .type=IO_READ},
        {.addr=0x98dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0153) {
    const struct CPU_State initial_cpu = {.pc=0xe673, .a=0x7a, .x=0x7f, .y=0xb6, .sp=0x74, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe673, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe674, .a=0xa7, .x=0x7f, .y=0xb6, .sp=0x74, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe673, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe673, .value=0x9f, .type=IO_READ},
        {.addr=0xe674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0154) {
    const struct CPU_State initial_cpu = {.pc=0x43ce, .a=0x19, .x=0x20, .y=0x5a, .sp=0xf2, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x43ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x43cf, .a=0x91, .x=0x20, .y=0x5a, .sp=0xf2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x43ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x43ce, .value=0x9f, .type=IO_READ},
        {.addr=0x43cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0155) {
    const struct CPU_State initial_cpu = {.pc=0x1aac, .a=0xdb, .x=0xa3, .y=0xd5, .sp=0xbb, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1aac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1aad, .a=0xbd, .x=0xa3, .y=0xd5, .sp=0xbb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1aac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1aac, .value=0x9f, .type=IO_READ},
        {.addr=0x1aad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0156) {
    const struct CPU_State initial_cpu = {.pc=0x155f, .a=0x6d, .x=0xa6, .y=0x46, .sp=0xad, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x155f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1560, .a=0xd6, .x=0xa6, .y=0x46, .sp=0xad, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x155f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x155f, .value=0x9f, .type=IO_READ},
        {.addr=0x1560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0157) {
    const struct CPU_State initial_cpu = {.pc=0xc6ac, .a=0xf3, .x=0x7d, .y=0x11, .sp=0xef, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc6ad, .a=0x3f, .x=0x7d, .y=0x11, .sp=0xef, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc6ac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc6ac, .value=0x9f, .type=IO_READ},
        {.addr=0xc6ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0158) {
    const struct CPU_State initial_cpu = {.pc=0x3475, .a=0x39, .x=0x8c, .y=0x8b, .sp=0x04, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3475, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3476, .a=0x93, .x=0x8c, .y=0x8b, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3475, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3475, .value=0x9f, .type=IO_READ},
        {.addr=0x3476, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0159) {
    const struct CPU_State initial_cpu = {.pc=0x9932, .a=0x0a, .x=0xb5, .y=0x51, .sp=0xa0, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x9932, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9933, .a=0xa0, .x=0xb5, .y=0x51, .sp=0xa0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9932, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9932, .value=0x9f, .type=IO_READ},
        {.addr=0x9933, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015A) {
    const struct CPU_State initial_cpu = {.pc=0xafb0, .a=0x22, .x=0x27, .y=0x69, .sp=0x2a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xafb0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xafb1, .a=0x22, .x=0x27, .y=0x69, .sp=0x2a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xafb0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xafb0, .value=0x9f, .type=IO_READ},
        {.addr=0xafb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015B) {
    const struct CPU_State initial_cpu = {.pc=0x3121, .a=0xd6, .x=0x54, .y=0x1f, .sp=0xfa, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3121, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3122, .a=0x6d, .x=0x54, .y=0x1f, .sp=0xfa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3121, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3121, .value=0x9f, .type=IO_READ},
        {.addr=0x3122, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015C) {
    const struct CPU_State initial_cpu = {.pc=0xe79c, .a=0xde, .x=0x3b, .y=0x6f, .sp=0x14, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe79c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe79d, .a=0xed, .x=0x3b, .y=0x6f, .sp=0x14, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe79c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe79c, .value=0x9f, .type=IO_READ},
        {.addr=0xe79d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015D) {
    const struct CPU_State initial_cpu = {.pc=0x3a0d, .a=0x84, .x=0x86, .y=0x93, .sp=0xf9, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3a0e, .a=0x48, .x=0x86, .y=0x93, .sp=0xf9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3a0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3a0d, .value=0x9f, .type=IO_READ},
        {.addr=0x3a0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015E) {
    const struct CPU_State initial_cpu = {.pc=0x66d1, .a=0x61, .x=0x04, .y=0xad, .sp=0x22, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x66d1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x66d2, .a=0x16, .x=0x04, .y=0xad, .sp=0x22, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x66d1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x66d1, .value=0x9f, .type=IO_READ},
        {.addr=0x66d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_015F) {
    const struct CPU_State initial_cpu = {.pc=0xaf11, .a=0x36, .x=0x2c, .y=0x5d, .sp=0xb6, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xaf11, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf12, .a=0x63, .x=0x2c, .y=0x5d, .sp=0xb6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xaf11, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf11, .value=0x9f, .type=IO_READ},
        {.addr=0xaf12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0160) {
    const struct CPU_State initial_cpu = {.pc=0x1fee, .a=0x70, .x=0x73, .y=0x0a, .sp=0x19, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1fee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1fef, .a=0x07, .x=0x73, .y=0x0a, .sp=0x19, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1fee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1fee, .value=0x9f, .type=IO_READ},
        {.addr=0x1fef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0161) {
    const struct CPU_State initial_cpu = {.pc=0x5a8a, .a=0x9e, .x=0xb6, .y=0x08, .sp=0xec, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5a8b, .a=0xe9, .x=0xb6, .y=0x08, .sp=0xec, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5a8a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5a8a, .value=0x9f, .type=IO_READ},
        {.addr=0x5a8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0162) {
    const struct CPU_State initial_cpu = {.pc=0xe856, .a=0x0e, .x=0xc4, .y=0x2f, .sp=0x9e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe856, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe857, .a=0xe0, .x=0xc4, .y=0x2f, .sp=0x9e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe856, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe856, .value=0x9f, .type=IO_READ},
        {.addr=0xe857, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0163) {
    const struct CPU_State initial_cpu = {.pc=0x1c89, .a=0xcc, .x=0x5a, .y=0xf6, .sp=0xe6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1c89, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1c8a, .a=0xcc, .x=0x5a, .y=0xf6, .sp=0xe6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x1c89, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1c89, .value=0x9f, .type=IO_READ},
        {.addr=0x1c8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0164) {
    const struct CPU_State initial_cpu = {.pc=0x974a, .a=0x75, .x=0xee, .y=0x10, .sp=0xe8, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x974a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x974b, .a=0x57, .x=0xee, .y=0x10, .sp=0xe8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x974a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x974a, .value=0x9f, .type=IO_READ},
        {.addr=0x974b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0165) {
    const struct CPU_State initial_cpu = {.pc=0x2d9a, .a=0xdd, .x=0xe7, .y=0xf3, .sp=0x29, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2d9b, .a=0xdd, .x=0xe7, .y=0xf3, .sp=0x29, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2d9a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2d9a, .value=0x9f, .type=IO_READ},
        {.addr=0x2d9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7b18, .a=0x1f, .x=0xf5, .y=0xe9, .sp=0x83, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b18, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7b19, .a=0xf1, .x=0xf5, .y=0xe9, .sp=0x83, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7b18, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7b18, .value=0x9f, .type=IO_READ},
        {.addr=0x7b19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0167) {
    const struct CPU_State initial_cpu = {.pc=0x2ac0, .a=0x1f, .x=0xf2, .y=0x57, .sp=0xfd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2ac1, .a=0xf1, .x=0xf2, .y=0x57, .sp=0xfd, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2ac0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2ac0, .value=0x9f, .type=IO_READ},
        {.addr=0x2ac1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0168) {
    const struct CPU_State initial_cpu = {.pc=0x8cd1, .a=0xff, .x=0x61, .y=0x1a, .sp=0x19, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8cd2, .a=0xff, .x=0x61, .y=0x1a, .sp=0x19, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8cd1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8cd1, .value=0x9f, .type=IO_READ},
        {.addr=0x8cd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0169) {
    const struct CPU_State initial_cpu = {.pc=0x4d90, .a=0x28, .x=0xec, .y=0x33, .sp=0xb1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x4d90, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4d91, .a=0x82, .x=0xec, .y=0x33, .sp=0xb1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4d90, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4d90, .value=0x9f, .type=IO_READ},
        {.addr=0x4d91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016A) {
    const struct CPU_State initial_cpu = {.pc=0xdf65, .a=0xd1, .x=0x0d, .y=0xbe, .sp=0xe5, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf65, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdf66, .a=0x1d, .x=0x0d, .y=0xbe, .sp=0xe5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xdf65, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdf65, .value=0x9f, .type=IO_READ},
        {.addr=0xdf66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016B) {
    const struct CPU_State initial_cpu = {.pc=0xfbe0, .a=0xc0, .x=0x3d, .y=0x18, .sp=0x34, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfbe1, .a=0x0c, .x=0x3d, .y=0x18, .sp=0x34, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfbe0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfbe0, .value=0x9f, .type=IO_READ},
        {.addr=0xfbe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016C) {
    const struct CPU_State initial_cpu = {.pc=0x5625, .a=0x24, .x=0x66, .y=0xa6, .sp=0xb8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5625, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5626, .a=0x42, .x=0x66, .y=0xa6, .sp=0xb8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5625, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5625, .value=0x9f, .type=IO_READ},
        {.addr=0x5626, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016D) {
    const struct CPU_State initial_cpu = {.pc=0x0d13, .a=0x08, .x=0x65, .y=0xdf, .sp=0x46, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0d13, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0d14, .a=0x80, .x=0x65, .y=0xdf, .sp=0x46, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0d13, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0d13, .value=0x9f, .type=IO_READ},
        {.addr=0x0d14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016E) {
    const struct CPU_State initial_cpu = {.pc=0x5390, .a=0x14, .x=0x91, .y=0x8d, .sp=0x13, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5390, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5391, .a=0x41, .x=0x91, .y=0x8d, .sp=0x13, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5390, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5390, .value=0x9f, .type=IO_READ},
        {.addr=0x5391, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_016F) {
    const struct CPU_State initial_cpu = {.pc=0x1948, .a=0x9d, .x=0xfc, .y=0xf7, .sp=0x8c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1948, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1949, .a=0xd9, .x=0xfc, .y=0xf7, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1948, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1948, .value=0x9f, .type=IO_READ},
        {.addr=0x1949, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0170) {
    const struct CPU_State initial_cpu = {.pc=0x45af, .a=0xad, .x=0x63, .y=0x9f, .sp=0x75, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x45af, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x45b0, .a=0xda, .x=0x63, .y=0x9f, .sp=0x75, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x45af, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x45af, .value=0x9f, .type=IO_READ},
        {.addr=0x45b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0171) {
    const struct CPU_State initial_cpu = {.pc=0x3646, .a=0xa7, .x=0xc0, .y=0xc0, .sp=0xbf, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3646, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3647, .a=0x7a, .x=0xc0, .y=0xc0, .sp=0xbf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3646, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3646, .value=0x9f, .type=IO_READ},
        {.addr=0x3647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0172) {
    const struct CPU_State initial_cpu = {.pc=0xca3c, .a=0x8a, .x=0xba, .y=0xdb, .sp=0x8f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xca3c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xca3d, .a=0xa8, .x=0xba, .y=0xdb, .sp=0x8f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xca3c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xca3c, .value=0x9f, .type=IO_READ},
        {.addr=0xca3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0173) {
    const struct CPU_State initial_cpu = {.pc=0xa483, .a=0x29, .x=0xf4, .y=0xcf, .sp=0x33, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa483, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa484, .a=0x92, .x=0xf4, .y=0xcf, .sp=0x33, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa483, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa483, .value=0x9f, .type=IO_READ},
        {.addr=0xa484, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc308, .a=0x38, .x=0x7f, .y=0x33, .sp=0x39, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc308, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc309, .a=0x83, .x=0x7f, .y=0x33, .sp=0x39, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc308, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc308, .value=0x9f, .type=IO_READ},
        {.addr=0xc309, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0175) {
    const struct CPU_State initial_cpu = {.pc=0xf381, .a=0x3a, .x=0xa2, .y=0x7e, .sp=0x2d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf381, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf382, .a=0xa3, .x=0xa2, .y=0x7e, .sp=0x2d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf381, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf381, .value=0x9f, .type=IO_READ},
        {.addr=0xf382, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0176) {
    const struct CPU_State initial_cpu = {.pc=0xe80d, .a=0xee, .x=0x00, .y=0xdb, .sp=0xae, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe80d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe80e, .a=0xee, .x=0x00, .y=0xdb, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe80d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe80d, .value=0x9f, .type=IO_READ},
        {.addr=0xe80e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0177) {
    const struct CPU_State initial_cpu = {.pc=0xde84, .a=0xbc, .x=0xb0, .y=0xf3, .sp=0xe5, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xde84, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde85, .a=0xcb, .x=0xb0, .y=0xf3, .sp=0xe5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xde84, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde84, .value=0x9f, .type=IO_READ},
        {.addr=0xde85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0178) {
    const struct CPU_State initial_cpu = {.pc=0x1786, .a=0x48, .x=0x09, .y=0xd5, .sp=0x44, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1786, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1787, .a=0x84, .x=0x09, .y=0xd5, .sp=0x44, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1786, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1786, .value=0x9f, .type=IO_READ},
        {.addr=0x1787, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0179) {
    const struct CPU_State initial_cpu = {.pc=0x0eae, .a=0x31, .x=0xdf, .y=0x0f, .sp=0x65, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0eae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0eaf, .a=0x13, .x=0xdf, .y=0x0f, .sp=0x65, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0eae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0eae, .value=0x9f, .type=IO_READ},
        {.addr=0x0eaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017A) {
    const struct CPU_State initial_cpu = {.pc=0x4e23, .a=0xb4, .x=0xab, .y=0x08, .sp=0x2d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4e23, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4e24, .a=0x4b, .x=0xab, .y=0x08, .sp=0x2d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4e23, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4e23, .value=0x9f, .type=IO_READ},
        {.addr=0x4e24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017B) {
    const struct CPU_State initial_cpu = {.pc=0xe498, .a=0x8f, .x=0x8d, .y=0x59, .sp=0x6e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe498, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe499, .a=0xf8, .x=0x8d, .y=0x59, .sp=0x6e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe498, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe498, .value=0x9f, .type=IO_READ},
        {.addr=0xe499, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017C) {
    const struct CPU_State initial_cpu = {.pc=0x5cf1, .a=0xd4, .x=0x47, .y=0x1b, .sp=0x49, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5cf2, .a=0x4d, .x=0x47, .y=0x1b, .sp=0x49, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5cf1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5cf1, .value=0x9f, .type=IO_READ},
        {.addr=0x5cf2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017D) {
    const struct CPU_State initial_cpu = {.pc=0xab31, .a=0x9a, .x=0xd6, .y=0x6d, .sp=0x6e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xab31, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xab32, .a=0xa9, .x=0xd6, .y=0x6d, .sp=0x6e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xab31, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xab31, .value=0x9f, .type=IO_READ},
        {.addr=0xab32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017E) {
    const struct CPU_State initial_cpu = {.pc=0xcfa6, .a=0x5c, .x=0xe7, .y=0x42, .sp=0xd2, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcfa7, .a=0xc5, .x=0xe7, .y=0x42, .sp=0xd2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xcfa6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcfa6, .value=0x9f, .type=IO_READ},
        {.addr=0xcfa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_017F) {
    const struct CPU_State initial_cpu = {.pc=0xf192, .a=0x6b, .x=0x05, .y=0x34, .sp=0xd1, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf192, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf193, .a=0xb6, .x=0x05, .y=0x34, .sp=0xd1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf192, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf192, .value=0x9f, .type=IO_READ},
        {.addr=0xf193, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0180) {
    const struct CPU_State initial_cpu = {.pc=0x67fd, .a=0x32, .x=0xe8, .y=0x0b, .sp=0xcf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x67fd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x67fe, .a=0x23, .x=0xe8, .y=0x0b, .sp=0xcf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x67fd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x67fd, .value=0x9f, .type=IO_READ},
        {.addr=0x67fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0181) {
    const struct CPU_State initial_cpu = {.pc=0x6699, .a=0xef, .x=0x96, .y=0x9e, .sp=0x17, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6699, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x669a, .a=0xfe, .x=0x96, .y=0x9e, .sp=0x17, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6699, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6699, .value=0x9f, .type=IO_READ},
        {.addr=0x669a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0182) {
    const struct CPU_State initial_cpu = {.pc=0xfc4f, .a=0x52, .x=0x28, .y=0xf7, .sp=0xf5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfc4f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfc50, .a=0x25, .x=0x28, .y=0xf7, .sp=0xf5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfc4f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfc4f, .value=0x9f, .type=IO_READ},
        {.addr=0xfc50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0183) {
    const struct CPU_State initial_cpu = {.pc=0xcdb4, .a=0x15, .x=0xd1, .y=0x76, .sp=0x07, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcdb5, .a=0x51, .x=0xd1, .y=0x76, .sp=0x07, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcdb4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcdb4, .value=0x9f, .type=IO_READ},
        {.addr=0xcdb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0184) {
    const struct CPU_State initial_cpu = {.pc=0x83f0, .a=0xa3, .x=0x5f, .y=0x6f, .sp=0x5e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x83f0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x83f1, .a=0x3a, .x=0x5f, .y=0x6f, .sp=0x5e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x83f0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x83f0, .value=0x9f, .type=IO_READ},
        {.addr=0x83f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0185) {
    const struct CPU_State initial_cpu = {.pc=0x9f26, .a=0xd3, .x=0xbc, .y=0x9e, .sp=0x26, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9f26, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9f27, .a=0x3d, .x=0xbc, .y=0x9e, .sp=0x26, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9f26, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9f26, .value=0x9f, .type=IO_READ},
        {.addr=0x9f27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0186) {
    const struct CPU_State initial_cpu = {.pc=0x56db, .a=0x17, .x=0x34, .y=0xfb, .sp=0xa3, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x56db, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x56dc, .a=0x71, .x=0x34, .y=0xfb, .sp=0xa3, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x56db, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x56db, .value=0x9f, .type=IO_READ},
        {.addr=0x56dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0187) {
    const struct CPU_State initial_cpu = {.pc=0x21ed, .a=0x63, .x=0x3e, .y=0xcd, .sp=0xb1, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x21ed, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x21ee, .a=0x36, .x=0x3e, .y=0xcd, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x21ed, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x21ed, .value=0x9f, .type=IO_READ},
        {.addr=0x21ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4266, .a=0xa0, .x=0x7a, .y=0x0c, .sp=0xa1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x4266, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4267, .a=0x0a, .x=0x7a, .y=0x0c, .sp=0xa1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4266, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4266, .value=0x9f, .type=IO_READ},
        {.addr=0x4267, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd126, .a=0xb8, .x=0xad, .y=0x7f, .sp=0x5c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd126, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd127, .a=0x8b, .x=0xad, .y=0x7f, .sp=0x5c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd126, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd126, .value=0x9f, .type=IO_READ},
        {.addr=0xd127, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018A) {
    const struct CPU_State initial_cpu = {.pc=0x4b3d, .a=0x1d, .x=0x70, .y=0xae, .sp=0xd8, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4b3d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b3e, .a=0xd1, .x=0x70, .y=0xae, .sp=0xd8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4b3d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b3d, .value=0x9f, .type=IO_READ},
        {.addr=0x4b3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018B) {
    const struct CPU_State initial_cpu = {.pc=0xe4bd, .a=0x74, .x=0x62, .y=0xdb, .sp=0x8f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe4bd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4be, .a=0x47, .x=0x62, .y=0xdb, .sp=0x8f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe4bd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4bd, .value=0x9f, .type=IO_READ},
        {.addr=0xe4be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018C) {
    const struct CPU_State initial_cpu = {.pc=0xa586, .a=0x02, .x=0x5d, .y=0x46, .sp=0xed, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa586, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa587, .a=0x20, .x=0x5d, .y=0x46, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa586, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa586, .value=0x9f, .type=IO_READ},
        {.addr=0xa587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018D) {
    const struct CPU_State initial_cpu = {.pc=0x1b9d, .a=0xcf, .x=0xa4, .y=0xfa, .sp=0xda, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1b9d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1b9e, .a=0xfc, .x=0xa4, .y=0xfa, .sp=0xda, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1b9d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1b9d, .value=0x9f, .type=IO_READ},
        {.addr=0x1b9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018E) {
    const struct CPU_State initial_cpu = {.pc=0xdbdb, .a=0xf7, .x=0x67, .y=0x4a, .sp=0x56, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xdbdb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdbdc, .a=0x7f, .x=0x67, .y=0x4a, .sp=0x56, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdbdb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdbdb, .value=0x9f, .type=IO_READ},
        {.addr=0xdbdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_018F) {
    const struct CPU_State initial_cpu = {.pc=0xaf0d, .a=0x01, .x=0xf3, .y=0x0c, .sp=0x48, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xaf0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf0e, .a=0x10, .x=0xf3, .y=0x0c, .sp=0x48, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xaf0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf0d, .value=0x9f, .type=IO_READ},
        {.addr=0xaf0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5710, .a=0xec, .x=0xeb, .y=0x49, .sp=0x1f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5710, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5711, .a=0xce, .x=0xeb, .y=0x49, .sp=0x1f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5710, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5710, .value=0x9f, .type=IO_READ},
        {.addr=0x5711, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc108, .a=0x8d, .x=0x57, .y=0x6e, .sp=0xae, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc108, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc109, .a=0xd8, .x=0x57, .y=0x6e, .sp=0xae, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc108, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc108, .value=0x9f, .type=IO_READ},
        {.addr=0xc109, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0192) {
    const struct CPU_State initial_cpu = {.pc=0x552a, .a=0xf8, .x=0x72, .y=0x76, .sp=0x09, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x552a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x552b, .a=0x8f, .x=0x72, .y=0x76, .sp=0x09, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x552a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x552a, .value=0x9f, .type=IO_READ},
        {.addr=0x552b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0193) {
    const struct CPU_State initial_cpu = {.pc=0xedbc, .a=0xf7, .x=0xf8, .y=0x1d, .sp=0x58, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xedbc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xedbd, .a=0x7f, .x=0xf8, .y=0x1d, .sp=0x58, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xedbc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xedbc, .value=0x9f, .type=IO_READ},
        {.addr=0xedbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2da8, .a=0x29, .x=0x74, .y=0x43, .sp=0xd4, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2da8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2da9, .a=0x92, .x=0x74, .y=0x43, .sp=0xd4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2da8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2da8, .value=0x9f, .type=IO_READ},
        {.addr=0x2da9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0195) {
    const struct CPU_State initial_cpu = {.pc=0x2656, .a=0x7f, .x=0x4d, .y=0x58, .sp=0xac, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2656, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2657, .a=0xf7, .x=0x4d, .y=0x58, .sp=0xac, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2656, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2656, .value=0x9f, .type=IO_READ},
        {.addr=0x2657, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4b0c, .a=0xf7, .x=0x46, .y=0x89, .sp=0x61, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b0d, .a=0x7f, .x=0x46, .y=0x89, .sp=0x61, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4b0c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b0c, .value=0x9f, .type=IO_READ},
        {.addr=0x4b0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0197) {
    const struct CPU_State initial_cpu = {.pc=0x1327, .a=0xfc, .x=0x20, .y=0x87, .sp=0x8d, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1327, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1328, .a=0xcf, .x=0x20, .y=0x87, .sp=0x8d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1327, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1327, .value=0x9f, .type=IO_READ},
        {.addr=0x1328, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0198) {
    const struct CPU_State initial_cpu = {.pc=0x92e5, .a=0x23, .x=0xb4, .y=0x77, .sp=0x44, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x92e5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x92e6, .a=0x32, .x=0xb4, .y=0x77, .sp=0x44, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x92e5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x92e5, .value=0x9f, .type=IO_READ},
        {.addr=0x92e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0199) {
    const struct CPU_State initial_cpu = {.pc=0x5e49, .a=0x7e, .x=0x1c, .y=0x80, .sp=0x1e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5e49, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5e4a, .a=0xe7, .x=0x1c, .y=0x80, .sp=0x1e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5e49, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5e49, .value=0x9f, .type=IO_READ},
        {.addr=0x5e4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019A) {
    const struct CPU_State initial_cpu = {.pc=0xaf00, .a=0xd3, .x=0x55, .y=0xde, .sp=0xbf, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xaf00, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf01, .a=0x3d, .x=0x55, .y=0xde, .sp=0xbf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xaf00, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf00, .value=0x9f, .type=IO_READ},
        {.addr=0xaf01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019B) {
    const struct CPU_State initial_cpu = {.pc=0x98f2, .a=0x85, .x=0x2d, .y=0x67, .sp=0x8f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x98f2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x98f3, .a=0x58, .x=0x2d, .y=0x67, .sp=0x8f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x98f2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x98f2, .value=0x9f, .type=IO_READ},
        {.addr=0x98f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019C) {
    const struct CPU_State initial_cpu = {.pc=0x19c9, .a=0x48, .x=0xa2, .y=0x2f, .sp=0xf9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x19c9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x19ca, .a=0x84, .x=0xa2, .y=0x2f, .sp=0xf9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x19c9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x19c9, .value=0x9f, .type=IO_READ},
        {.addr=0x19ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019D) {
    const struct CPU_State initial_cpu = {.pc=0x07b4, .a=0xe8, .x=0xc2, .y=0x47, .sp=0xa6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x07b4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x07b5, .a=0x8e, .x=0xc2, .y=0x47, .sp=0xa6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x07b4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x07b4, .value=0x9f, .type=IO_READ},
        {.addr=0x07b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7d8e, .a=0x2d, .x=0xf9, .y=0x97, .sp=0xf7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7d8e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d8f, .a=0xd2, .x=0xf9, .y=0x97, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7d8e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7d8e, .value=0x9f, .type=IO_READ},
        {.addr=0x7d8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_019F) {
    const struct CPU_State initial_cpu = {.pc=0x17dd, .a=0xce, .x=0x52, .y=0x02, .sp=0x24, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x17dd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x17de, .a=0xec, .x=0x52, .y=0x02, .sp=0x24, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x17dd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x17dd, .value=0x9f, .type=IO_READ},
        {.addr=0x17de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x334b, .a=0x68, .x=0x6a, .y=0x46, .sp=0xb5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x334b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x334c, .a=0x86, .x=0x6a, .y=0x46, .sp=0xb5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x334b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x334b, .value=0x9f, .type=IO_READ},
        {.addr=0x334c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xcabd, .a=0x0b, .x=0xa7, .y=0x83, .sp=0xda, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xcabd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcabe, .a=0xb0, .x=0xa7, .y=0x83, .sp=0xda, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xcabd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcabd, .value=0x9f, .type=IO_READ},
        {.addr=0xcabe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x7a4f, .a=0x5f, .x=0xbe, .y=0x3f, .sp=0xf0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7a4f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7a50, .a=0xf5, .x=0xbe, .y=0x3f, .sp=0xf0, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7a4f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7a4f, .value=0x9f, .type=IO_READ},
        {.addr=0x7a50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xdf7f, .a=0x63, .x=0x4a, .y=0xc5, .sp=0x5a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdf80, .a=0x36, .x=0x4a, .y=0xc5, .sp=0x5a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xdf7f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdf7f, .value=0x9f, .type=IO_READ},
        {.addr=0xdf80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xf8c7, .a=0x16, .x=0x47, .y=0x4a, .sp=0xc3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf8c8, .a=0x61, .x=0x47, .y=0x4a, .sp=0xc3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf8c7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf8c7, .value=0x9f, .type=IO_READ},
        {.addr=0xf8c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xdfd3, .a=0x1a, .x=0x0e, .y=0x47, .sp=0x86, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xdfd3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdfd4, .a=0xa1, .x=0x0e, .y=0x47, .sp=0x86, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xdfd3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdfd3, .value=0x9f, .type=IO_READ},
        {.addr=0xdfd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9f22, .a=0xea, .x=0xb0, .y=0xd9, .sp=0xc3, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x9f22, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9f23, .a=0xae, .x=0xb0, .y=0xd9, .sp=0xc3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9f22, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9f22, .value=0x9f, .type=IO_READ},
        {.addr=0x9f23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x312a, .a=0x17, .x=0x7f, .y=0x2f, .sp=0xe9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x312a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x312b, .a=0x71, .x=0x7f, .y=0x2f, .sp=0xe9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x312a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x312a, .value=0x9f, .type=IO_READ},
        {.addr=0x312b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe438, .a=0xa7, .x=0x61, .y=0x6c, .sp=0x13, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe438, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe439, .a=0x7a, .x=0x61, .y=0x6c, .sp=0x13, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe438, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe438, .value=0x9f, .type=IO_READ},
        {.addr=0xe439, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x32a1, .a=0xbe, .x=0x3d, .y=0x39, .sp=0x0d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x32a1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x32a2, .a=0xeb, .x=0x3d, .y=0x39, .sp=0x0d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x32a1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x32a1, .value=0x9f, .type=IO_READ},
        {.addr=0x32a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x842d, .a=0x92, .x=0x6e, .y=0xab, .sp=0xb6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x842d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x842e, .a=0x29, .x=0x6e, .y=0xab, .sp=0xb6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x842d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x842d, .value=0x9f, .type=IO_READ},
        {.addr=0x842e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x5ce4, .a=0xea, .x=0x99, .y=0x2a, .sp=0x96, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ce4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5ce5, .a=0xae, .x=0x99, .y=0x2a, .sp=0x96, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5ce4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5ce4, .value=0x9f, .type=IO_READ},
        {.addr=0x5ce5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x9758, .a=0xbd, .x=0xcf, .y=0x97, .sp=0x8d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9758, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9759, .a=0xdb, .x=0xcf, .y=0x97, .sp=0x8d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9758, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9758, .value=0x9f, .type=IO_READ},
        {.addr=0x9759, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x659b, .a=0x49, .x=0x83, .y=0x6c, .sp=0x89, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x659b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x659c, .a=0x94, .x=0x83, .y=0x6c, .sp=0x89, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x659b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x659b, .value=0x9f, .type=IO_READ},
        {.addr=0x659c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc703, .a=0x74, .x=0x79, .y=0x95, .sp=0x50, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc703, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc704, .a=0x47, .x=0x79, .y=0x95, .sp=0x50, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc703, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc703, .value=0x9f, .type=IO_READ},
        {.addr=0xc704, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xf485, .a=0xeb, .x=0x97, .y=0x89, .sp=0xd0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xf485, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf486, .a=0xbe, .x=0x97, .y=0x89, .sp=0xd0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf485, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf485, .value=0x9f, .type=IO_READ},
        {.addr=0xf486, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x8594, .a=0x77, .x=0x06, .y=0x83, .sp=0xb8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8594, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8595, .a=0x77, .x=0x06, .y=0x83, .sp=0xb8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8594, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8594, .value=0x9f, .type=IO_READ},
        {.addr=0x8595, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x2120, .a=0xfe, .x=0x65, .y=0x12, .sp=0xf7, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x2120, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2121, .a=0xef, .x=0x65, .y=0x12, .sp=0xf7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2120, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2120, .value=0x9f, .type=IO_READ},
        {.addr=0x2121, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xc0f8, .a=0xe7, .x=0x53, .y=0x04, .sp=0x82, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc0f9, .a=0x7e, .x=0x53, .y=0x04, .sp=0x82, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc0f8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc0f8, .value=0x9f, .type=IO_READ},
        {.addr=0xc0f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x41e9, .a=0x2e, .x=0xe3, .y=0xbe, .sp=0x96, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x41e9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x41ea, .a=0xe2, .x=0xe3, .y=0xbe, .sp=0x96, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x41e9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x41e9, .value=0x9f, .type=IO_READ},
        {.addr=0x41ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x9f3a, .a=0x3c, .x=0x4d, .y=0x53, .sp=0x3d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9f3a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9f3b, .a=0xc3, .x=0x4d, .y=0x53, .sp=0x3d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9f3a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9f3a, .value=0x9f, .type=IO_READ},
        {.addr=0x9f3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x5a30, .a=0xa6, .x=0x29, .y=0x06, .sp=0xfe, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5a30, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5a31, .a=0x6a, .x=0x29, .y=0x06, .sp=0xfe, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5a30, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5a30, .value=0x9f, .type=IO_READ},
        {.addr=0x5a31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xef03, .a=0xf2, .x=0x7e, .y=0x51, .sp=0xf4, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xef03, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xef04, .a=0x2f, .x=0x7e, .y=0x51, .sp=0xf4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xef03, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xef03, .value=0x9f, .type=IO_READ},
        {.addr=0xef04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xf771, .a=0x3b, .x=0x23, .y=0x83, .sp=0xdc, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf771, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf772, .a=0xb3, .x=0x23, .y=0x83, .sp=0xdc, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf771, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf771, .value=0x9f, .type=IO_READ},
        {.addr=0xf772, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xadbb, .a=0x5c, .x=0xb3, .y=0xe6, .sp=0x0d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xadbb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xadbc, .a=0xc5, .x=0xb3, .y=0xe6, .sp=0x0d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xadbb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xadbb, .value=0x9f, .type=IO_READ},
        {.addr=0xadbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x607f, .a=0xff, .x=0x68, .y=0x1a, .sp=0x06, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x607f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6080, .a=0xff, .x=0x68, .y=0x1a, .sp=0x06, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x607f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x607f, .value=0x9f, .type=IO_READ},
        {.addr=0x6080, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x1104, .a=0x0d, .x=0x83, .y=0x03, .sp=0x45, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1104, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1105, .a=0xd0, .x=0x83, .y=0x03, .sp=0x45, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1104, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1104, .value=0x9f, .type=IO_READ},
        {.addr=0x1105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xb01b, .a=0xc9, .x=0x92, .y=0xc0, .sp=0x93, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb01b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb01c, .a=0x9c, .x=0x92, .y=0xc0, .sp=0x93, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb01b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb01b, .value=0x9f, .type=IO_READ},
        {.addr=0xb01c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xf55a, .a=0x7f, .x=0x66, .y=0xd8, .sp=0xf4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf55a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf55b, .a=0xf7, .x=0x66, .y=0xd8, .sp=0xf4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf55a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf55a, .value=0x9f, .type=IO_READ},
        {.addr=0xf55b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x729e, .a=0x99, .x=0x0a, .y=0x48, .sp=0x1d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x729e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x729f, .a=0x99, .x=0x0a, .y=0x48, .sp=0x1d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x729e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x729e, .value=0x9f, .type=IO_READ},
        {.addr=0x729f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xa590, .a=0x84, .x=0x04, .y=0xe4, .sp=0x7d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xa590, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa591, .a=0x48, .x=0x04, .y=0xe4, .sp=0x7d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa590, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa590, .value=0x9f, .type=IO_READ},
        {.addr=0xa591, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x4286, .a=0x22, .x=0xf9, .y=0x8f, .sp=0x17, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4286, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4287, .a=0x22, .x=0xf9, .y=0x8f, .sp=0x17, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4286, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4286, .value=0x9f, .type=IO_READ},
        {.addr=0x4287, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xf69e, .a=0x61, .x=0x7a, .y=0x88, .sp=0xd6, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf69e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf69f, .a=0x16, .x=0x7a, .y=0x88, .sp=0xd6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf69e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf69e, .value=0x9f, .type=IO_READ},
        {.addr=0xf69f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x8f60, .a=0x60, .x=0x10, .y=0xee, .sp=0x5d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8f60, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f61, .a=0x06, .x=0x10, .y=0xee, .sp=0x5d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8f60, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f60, .value=0x9f, .type=IO_READ},
        {.addr=0x8f61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x778f, .a=0x07, .x=0xd0, .y=0x63, .sp=0x8a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x778f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7790, .a=0x70, .x=0xd0, .y=0x63, .sp=0x8a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x778f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x778f, .value=0x9f, .type=IO_READ},
        {.addr=0x7790, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xc449, .a=0x66, .x=0x46, .y=0x46, .sp=0x1e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xc449, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc44a, .a=0x66, .x=0x46, .y=0x46, .sp=0x1e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc449, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc449, .value=0x9f, .type=IO_READ},
        {.addr=0xc44a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x2d18, .a=0xd0, .x=0x27, .y=0xcd, .sp=0xa4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d18, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2d19, .a=0x0d, .x=0x27, .y=0xcd, .sp=0xa4, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2d18, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2d18, .value=0x9f, .type=IO_READ},
        {.addr=0x2d19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xb0c0, .a=0xdf, .x=0x4a, .y=0xd6, .sp=0xb3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb0c1, .a=0xfd, .x=0x4a, .y=0xd6, .sp=0xb3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb0c0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb0c0, .value=0x9f, .type=IO_READ},
        {.addr=0xb0c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x6d63, .a=0xd1, .x=0xaa, .y=0x1a, .sp=0xb8, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6d63, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6d64, .a=0x1d, .x=0xaa, .y=0x1a, .sp=0xb8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6d63, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6d63, .value=0x9f, .type=IO_READ},
        {.addr=0x6d64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xac88, .a=0xdb, .x=0xd7, .y=0xd3, .sp=0x72, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xac88, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xac89, .a=0xbd, .x=0xd7, .y=0xd3, .sp=0x72, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xac88, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xac88, .value=0x9f, .type=IO_READ},
        {.addr=0xac89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x2a11, .a=0x82, .x=0x77, .y=0x35, .sp=0x46, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a11, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a12, .a=0x28, .x=0x77, .y=0x35, .sp=0x46, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2a11, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a11, .value=0x9f, .type=IO_READ},
        {.addr=0x2a12, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xeb5f, .a=0xf8, .x=0xed, .y=0x1f, .sp=0x2f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeb60, .a=0x8f, .x=0xed, .y=0x1f, .sp=0x2f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xeb5f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeb5f, .value=0x9f, .type=IO_READ},
        {.addr=0xeb60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8172, .a=0xe7, .x=0x86, .y=0xaf, .sp=0xe1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8172, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8173, .a=0x7e, .x=0x86, .y=0xaf, .sp=0xe1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8172, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8172, .value=0x9f, .type=IO_READ},
        {.addr=0x8173, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xdc12, .a=0x1e, .x=0x1b, .y=0x32, .sp=0xc0, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xdc12, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdc13, .a=0xe1, .x=0x1b, .y=0x32, .sp=0xc0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xdc12, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdc12, .value=0x9f, .type=IO_READ},
        {.addr=0xdc13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xb074, .a=0x80, .x=0x09, .y=0xac, .sp=0x0a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb074, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb075, .a=0x08, .x=0x09, .y=0xac, .sp=0x0a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb074, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb074, .value=0x9f, .type=IO_READ},
        {.addr=0xb075, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x6c6f, .a=0xf9, .x=0x1e, .y=0xb2, .sp=0x06, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6c6f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6c70, .a=0x9f, .x=0x1e, .y=0xb2, .sp=0x06, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6c6f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6c6f, .value=0x9f, .type=IO_READ},
        {.addr=0x6c70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x7dae, .a=0xfb, .x=0x0f, .y=0x17, .sp=0xa9, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7dae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7daf, .a=0xbf, .x=0x0f, .y=0x17, .sp=0xa9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7dae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7dae, .value=0x9f, .type=IO_READ},
        {.addr=0x7daf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xca45, .a=0xd1, .x=0x68, .y=0x6a, .sp=0xd0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xca45, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xca46, .a=0x1d, .x=0x68, .y=0x6a, .sp=0xd0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xca45, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xca45, .value=0x9f, .type=IO_READ},
        {.addr=0xca46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xe353, .a=0x51, .x=0xc4, .y=0xbc, .sp=0x94, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe353, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe354, .a=0x15, .x=0xc4, .y=0xbc, .sp=0x94, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe353, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe353, .value=0x9f, .type=IO_READ},
        {.addr=0xe354, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x6a0f, .a=0x37, .x=0x24, .y=0xa7, .sp=0x77, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6a10, .a=0x73, .x=0x24, .y=0xa7, .sp=0x77, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6a0f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6a0f, .value=0x9f, .type=IO_READ},
        {.addr=0x6a10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x57b3, .a=0x30, .x=0x1d, .y=0x24, .sp=0x9b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x57b3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x57b4, .a=0x03, .x=0x1d, .y=0x24, .sp=0x9b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x57b3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x57b3, .value=0x9f, .type=IO_READ},
        {.addr=0x57b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x21f4, .a=0x0c, .x=0xa9, .y=0x3d, .sp=0x58, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x21f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x21f5, .a=0xc0, .x=0xa9, .y=0x3d, .sp=0x58, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x21f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x21f4, .value=0x9f, .type=IO_READ},
        {.addr=0x21f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x83ae, .a=0xe4, .x=0x1e, .y=0x19, .sp=0x54, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x83ae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x83af, .a=0x4e, .x=0x1e, .y=0x19, .sp=0x54, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x83ae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x83ae, .value=0x9f, .type=IO_READ},
        {.addr=0x83af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2b8d, .a=0x9a, .x=0xb2, .y=0x12, .sp=0x60, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2b8d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2b8e, .a=0xa9, .x=0xb2, .y=0x12, .sp=0x60, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2b8d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2b8d, .value=0x9f, .type=IO_READ},
        {.addr=0x2b8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xb334, .a=0x0b, .x=0x43, .y=0xc1, .sp=0xc3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb334, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb335, .a=0xb0, .x=0x43, .y=0xc1, .sp=0xc3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb334, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb334, .value=0x9f, .type=IO_READ},
        {.addr=0xb335, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x2055, .a=0xcd, .x=0x36, .y=0x47, .sp=0x4a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2055, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2056, .a=0xdc, .x=0x36, .y=0x47, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2055, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2055, .value=0x9f, .type=IO_READ},
        {.addr=0x2056, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd089, .a=0xe8, .x=0x8c, .y=0x72, .sp=0xfa, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd089, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd08a, .a=0x8e, .x=0x8c, .y=0x72, .sp=0xfa, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd089, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd089, .value=0x9f, .type=IO_READ},
        {.addr=0xd08a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xabdc, .a=0x0c, .x=0x3f, .y=0xb0, .sp=0x12, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xabdc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xabdd, .a=0xc0, .x=0x3f, .y=0xb0, .sp=0x12, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xabdc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xabdc, .value=0x9f, .type=IO_READ},
        {.addr=0xabdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x0e0d, .a=0x66, .x=0x88, .y=0x4e, .sp=0xf8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0e0e, .a=0x66, .x=0x88, .y=0x4e, .sp=0xf8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0e0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0e0d, .value=0x9f, .type=IO_READ},
        {.addr=0x0e0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x90f1, .a=0x59, .x=0x72, .y=0xe5, .sp=0x0c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x90f1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x90f2, .a=0x95, .x=0x72, .y=0xe5, .sp=0x0c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x90f1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x90f1, .value=0x9f, .type=IO_READ},
        {.addr=0x90f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xd5aa, .a=0x6e, .x=0x4a, .y=0xbf, .sp=0x43, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd5aa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd5ab, .a=0xe6, .x=0x4a, .y=0xbf, .sp=0x43, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd5aa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd5aa, .value=0x9f, .type=IO_READ},
        {.addr=0xd5ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x3fd5, .a=0xe0, .x=0x0d, .y=0x83, .sp=0xdd, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x3fd5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3fd6, .a=0x0e, .x=0x0d, .y=0x83, .sp=0xdd, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3fd5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3fd5, .value=0x9f, .type=IO_READ},
        {.addr=0x3fd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x1586, .a=0x53, .x=0x8e, .y=0xf4, .sp=0xdc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1586, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1587, .a=0x35, .x=0x8e, .y=0xf4, .sp=0xdc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1586, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1586, .value=0x9f, .type=IO_READ},
        {.addr=0x1587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x9d23, .a=0xbf, .x=0x97, .y=0x36, .sp=0x24, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9d23, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9d24, .a=0xfb, .x=0x97, .y=0x36, .sp=0x24, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9d23, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9d23, .value=0x9f, .type=IO_READ},
        {.addr=0x9d24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x433e, .a=0x38, .x=0x55, .y=0xc2, .sp=0x25, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x433e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x433f, .a=0x83, .x=0x55, .y=0xc2, .sp=0x25, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x433e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x433e, .value=0x9f, .type=IO_READ},
        {.addr=0x433f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xe4b6, .a=0xbc, .x=0x4c, .y=0x4c, .sp=0x7d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xe4b6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4b7, .a=0xcb, .x=0x4c, .y=0x4c, .sp=0x7d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe4b6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4b6, .value=0x9f, .type=IO_READ},
        {.addr=0xe4b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xde92, .a=0x3f, .x=0xfe, .y=0x53, .sp=0xd9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xde92, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde93, .a=0xf3, .x=0xfe, .y=0x53, .sp=0xd9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xde92, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde92, .value=0x9f, .type=IO_READ},
        {.addr=0xde93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x43eb, .a=0x96, .x=0xb9, .y=0x96, .sp=0x20, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x43eb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0x69, .x=0xb9, .y=0x96, .sp=0x20, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x43eb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x43eb, .value=0x9f, .type=IO_READ},
        {.addr=0x43ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xb785, .a=0xec, .x=0x72, .y=0x41, .sp=0x30, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb785, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb786, .a=0xce, .x=0x72, .y=0x41, .sp=0x30, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb785, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb785, .value=0x9f, .type=IO_READ},
        {.addr=0xb786, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xeed6, .a=0x3c, .x=0xab, .y=0x23, .sp=0xed, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xeed6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeed7, .a=0xc3, .x=0xab, .y=0x23, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xeed6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeed6, .value=0x9f, .type=IO_READ},
        {.addr=0xeed7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe98f, .a=0xef, .x=0xc2, .y=0xd5, .sp=0xb1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe98f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe990, .a=0xfe, .x=0xc2, .y=0xd5, .sp=0xb1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe98f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe98f, .value=0x9f, .type=IO_READ},
        {.addr=0xe990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x858b, .a=0x67, .x=0xb8, .y=0xda, .sp=0x36, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x858b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x858c, .a=0x76, .x=0xb8, .y=0xda, .sp=0x36, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x858b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x858b, .value=0x9f, .type=IO_READ},
        {.addr=0x858c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xc2eb, .a=0x3d, .x=0x54, .y=0x52, .sp=0x48, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc2eb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc2ec, .a=0xd3, .x=0x54, .y=0x52, .sp=0x48, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc2eb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc2eb, .value=0x9f, .type=IO_READ},
        {.addr=0xc2ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xbe95, .a=0xe3, .x=0x88, .y=0xd8, .sp=0x72, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe95, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe96, .a=0x3e, .x=0x88, .y=0xd8, .sp=0x72, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbe95, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbe95, .value=0x9f, .type=IO_READ},
        {.addr=0xbe96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2f13, .a=0x47, .x=0x0f, .y=0x50, .sp=0xbf, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2f13, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2f14, .a=0x74, .x=0x0f, .y=0x50, .sp=0xbf, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2f13, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2f13, .value=0x9f, .type=IO_READ},
        {.addr=0x2f14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xba98, .a=0x4a, .x=0x45, .y=0xb9, .sp=0x58, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xba98, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xba99, .a=0xa4, .x=0x45, .y=0xb9, .sp=0x58, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xba98, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xba98, .value=0x9f, .type=IO_READ},
        {.addr=0xba99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x94b4, .a=0x15, .x=0x70, .y=0x4e, .sp=0xe1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x94b4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x94b5, .a=0x51, .x=0x70, .y=0x4e, .sp=0xe1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x94b4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x94b4, .value=0x9f, .type=IO_READ},
        {.addr=0x94b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x9a02, .a=0x5c, .x=0x94, .y=0xed, .sp=0xaa, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9a02, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9a03, .a=0xc5, .x=0x94, .y=0xed, .sp=0xaa, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9a02, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9a02, .value=0x9f, .type=IO_READ},
        {.addr=0x9a03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x032a, .a=0x8e, .x=0xa7, .y=0x21, .sp=0xb2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x032a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x032b, .a=0xe8, .x=0xa7, .y=0x21, .sp=0xb2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x032a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x032a, .value=0x9f, .type=IO_READ},
        {.addr=0x032b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x40cf, .a=0xb6, .x=0x36, .y=0x8d, .sp=0x41, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x40cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40d0, .a=0x6b, .x=0x36, .y=0x8d, .sp=0x41, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x40cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40cf, .value=0x9f, .type=IO_READ},
        {.addr=0x40d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x67c7, .a=0x1b, .x=0xab, .y=0xac, .sp=0xb6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x67c7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x67c8, .a=0xb1, .x=0xab, .y=0xac, .sp=0xb6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x67c7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x67c7, .value=0x9f, .type=IO_READ},
        {.addr=0x67c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x6944, .a=0x0c, .x=0x73, .y=0x0d, .sp=0x1a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6944, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6945, .a=0xc0, .x=0x73, .y=0x0d, .sp=0x1a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6944, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6944, .value=0x9f, .type=IO_READ},
        {.addr=0x6945, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xe4ad, .a=0x70, .x=0xed, .y=0xdc, .sp=0x08, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ad, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4ae, .a=0x07, .x=0xed, .y=0xdc, .sp=0x08, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe4ad, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4ad, .value=0x9f, .type=IO_READ},
        {.addr=0xe4ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x5536, .a=0xc7, .x=0x25, .y=0x2a, .sp=0x14, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x5536, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5537, .a=0x7c, .x=0x25, .y=0x2a, .sp=0x14, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5536, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5536, .value=0x9f, .type=IO_READ},
        {.addr=0x5537, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x22e6, .a=0x0b, .x=0x9d, .y=0x54, .sp=0x37, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x22e6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x22e7, .a=0xb0, .x=0x9d, .y=0x54, .sp=0x37, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x22e6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x22e6, .value=0x9f, .type=IO_READ},
        {.addr=0x22e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xb00f, .a=0x13, .x=0x17, .y=0x9a, .sp=0xdc, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb00f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb010, .a=0x31, .x=0x17, .y=0x9a, .sp=0xdc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb00f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb00f, .value=0x9f, .type=IO_READ},
        {.addr=0xb010, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x659b, .a=0xda, .x=0x21, .y=0x79, .sp=0x51, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x659b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x659c, .a=0xad, .x=0x21, .y=0x79, .sp=0x51, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x659b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x659b, .value=0x9f, .type=IO_READ},
        {.addr=0x659c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x31c4, .a=0xf3, .x=0xe1, .y=0xed, .sp=0x59, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x31c4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x31c5, .a=0x3f, .x=0xe1, .y=0xed, .sp=0x59, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x31c4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x31c4, .value=0x9f, .type=IO_READ},
        {.addr=0x31c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xdb57, .a=0x58, .x=0xd9, .y=0x8c, .sp=0x0f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb57, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdb58, .a=0x85, .x=0xd9, .y=0x8c, .sp=0x0f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdb57, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdb57, .value=0x9f, .type=IO_READ},
        {.addr=0xdb58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0240, .a=0xb9, .x=0xac, .y=0xc2, .sp=0xa5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0240, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0241, .a=0x9b, .x=0xac, .y=0xc2, .sp=0xa5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0240, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0240, .value=0x9f, .type=IO_READ},
        {.addr=0x0241, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xfd9d, .a=0xac, .x=0xf2, .y=0xe1, .sp=0x93, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xfd9d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfd9e, .a=0xca, .x=0xf2, .y=0xe1, .sp=0x93, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfd9d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfd9d, .value=0x9f, .type=IO_READ},
        {.addr=0xfd9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0x0e, .x=0x90, .y=0x78, .sp=0x1f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1274, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1275, .a=0xe0, .x=0x90, .y=0x78, .sp=0x1f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1274, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0x9f, .type=IO_READ},
        {.addr=0x1275, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x7c77, .a=0xf7, .x=0xf2, .y=0x19, .sp=0x67, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7c77, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7c78, .a=0x7f, .x=0xf2, .y=0x19, .sp=0x67, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7c77, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7c77, .value=0x9f, .type=IO_READ},
        {.addr=0x7c78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x1f0d, .a=0x9f, .x=0xf9, .y=0x75, .sp=0xc2, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1f0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1f0e, .a=0xf9, .x=0xf9, .y=0x75, .sp=0xc2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1f0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1f0d, .value=0x9f, .type=IO_READ},
        {.addr=0x1f0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x785b, .a=0x3f, .x=0xcd, .y=0x84, .sp=0x51, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x785b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x785c, .a=0xf3, .x=0xcd, .y=0x84, .sp=0x51, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x785b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x785b, .value=0x9f, .type=IO_READ},
        {.addr=0x785c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x726d, .a=0xef, .x=0xf7, .y=0x4b, .sp=0x2b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x726d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x726e, .a=0xfe, .x=0xf7, .y=0x4b, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x726d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x726d, .value=0x9f, .type=IO_READ},
        {.addr=0x726e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0200) {
    const struct CPU_State initial_cpu = {.pc=0xec9c, .a=0xaf, .x=0x74, .y=0xb2, .sp=0xd5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xec9c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xec9d, .a=0xfa, .x=0x74, .y=0xb2, .sp=0xd5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xec9c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xec9c, .value=0x9f, .type=IO_READ},
        {.addr=0xec9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0201) {
    const struct CPU_State initial_cpu = {.pc=0x9e65, .a=0xd0, .x=0x3d, .y=0xb0, .sp=0x63, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9e65, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9e66, .a=0x0d, .x=0x3d, .y=0xb0, .sp=0x63, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9e65, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9e65, .value=0x9f, .type=IO_READ},
        {.addr=0x9e66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd645, .a=0x86, .x=0xdb, .y=0x56, .sp=0xb9, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xd645, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd646, .a=0x68, .x=0xdb, .y=0x56, .sp=0xb9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd645, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd645, .value=0x9f, .type=IO_READ},
        {.addr=0xd646, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0203) {
    const struct CPU_State initial_cpu = {.pc=0x445f, .a=0x69, .x=0x80, .y=0x54, .sp=0xd2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x445f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4460, .a=0x96, .x=0x80, .y=0x54, .sp=0xd2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x445f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x445f, .value=0x9f, .type=IO_READ},
        {.addr=0x4460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0204) {
    const struct CPU_State initial_cpu = {.pc=0x7b9d, .a=0x0e, .x=0xe2, .y=0x43, .sp=0x98, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x7b9d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7b9e, .a=0xe0, .x=0xe2, .y=0x43, .sp=0x98, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7b9d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7b9d, .value=0x9f, .type=IO_READ},
        {.addr=0x7b9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0205) {
    const struct CPU_State initial_cpu = {.pc=0x1afb, .a=0xf0, .x=0x46, .y=0xe7, .sp=0x8a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1afb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1afc, .a=0x0f, .x=0x46, .y=0xe7, .sp=0x8a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1afb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1afb, .value=0x9f, .type=IO_READ},
        {.addr=0x1afc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0206) {
    const struct CPU_State initial_cpu = {.pc=0x4f84, .a=0xc7, .x=0x4a, .y=0x6f, .sp=0x00, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4f84, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4f85, .a=0x7c, .x=0x4a, .y=0x6f, .sp=0x00, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4f84, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4f84, .value=0x9f, .type=IO_READ},
        {.addr=0x4f85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0207) {
    const struct CPU_State initial_cpu = {.pc=0xff70, .a=0xf0, .x=0x9e, .y=0x26, .sp=0xc3, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xff70, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xff71, .a=0x0f, .x=0x9e, .y=0x26, .sp=0xc3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xff70, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xff70, .value=0x9f, .type=IO_READ},
        {.addr=0xff71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0208) {
    const struct CPU_State initial_cpu = {.pc=0xe96c, .a=0x3d, .x=0x0c, .y=0x4b, .sp=0xf4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe96c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe96d, .a=0xd3, .x=0x0c, .y=0x4b, .sp=0xf4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe96c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe96c, .value=0x9f, .type=IO_READ},
        {.addr=0xe96d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0209) {
    const struct CPU_State initial_cpu = {.pc=0x2512, .a=0x8f, .x=0x58, .y=0x89, .sp=0xcb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2512, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2513, .a=0xf8, .x=0x58, .y=0x89, .sp=0xcb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2512, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2512, .value=0x9f, .type=IO_READ},
        {.addr=0x2513, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020A) {
    const struct CPU_State initial_cpu = {.pc=0x4dda, .a=0x92, .x=0x26, .y=0x1a, .sp=0x36, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4dda, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4ddb, .a=0x29, .x=0x26, .y=0x1a, .sp=0x36, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4dda, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4dda, .value=0x9f, .type=IO_READ},
        {.addr=0x4ddb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020B) {
    const struct CPU_State initial_cpu = {.pc=0xa433, .a=0x52, .x=0x06, .y=0x88, .sp=0xad, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xa433, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa434, .a=0x25, .x=0x06, .y=0x88, .sp=0xad, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa433, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa433, .value=0x9f, .type=IO_READ},
        {.addr=0xa434, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020C) {
    const struct CPU_State initial_cpu = {.pc=0x84e1, .a=0x8c, .x=0x04, .y=0xc1, .sp=0xc2, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x84e1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x84e2, .a=0xc8, .x=0x04, .y=0xc1, .sp=0xc2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x84e1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x84e1, .value=0x9f, .type=IO_READ},
        {.addr=0x84e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020D) {
    const struct CPU_State initial_cpu = {.pc=0x430e, .a=0x4a, .x=0xcf, .y=0x9f, .sp=0xae, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x430e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x430f, .a=0xa4, .x=0xcf, .y=0x9f, .sp=0xae, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x430e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x430e, .value=0x9f, .type=IO_READ},
        {.addr=0x430f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020E) {
    const struct CPU_State initial_cpu = {.pc=0x86a4, .a=0x79, .x=0x17, .y=0xe1, .sp=0x78, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x86a4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x86a5, .a=0x97, .x=0x17, .y=0xe1, .sp=0x78, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x86a4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x86a4, .value=0x9f, .type=IO_READ},
        {.addr=0x86a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_020F) {
    const struct CPU_State initial_cpu = {.pc=0xcc04, .a=0xde, .x=0x8c, .y=0x37, .sp=0x86, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xcc04, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcc05, .a=0xed, .x=0x8c, .y=0x37, .sp=0x86, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcc04, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcc04, .value=0x9f, .type=IO_READ},
        {.addr=0xcc05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0210) {
    const struct CPU_State initial_cpu = {.pc=0x7ffb, .a=0xe2, .x=0xee, .y=0x65, .sp=0x85, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7ffb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7ffc, .a=0x2e, .x=0xee, .y=0x65, .sp=0x85, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7ffb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7ffb, .value=0x9f, .type=IO_READ},
        {.addr=0x7ffc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0211) {
    const struct CPU_State initial_cpu = {.pc=0x4203, .a=0x75, .x=0x81, .y=0xb4, .sp=0xe9, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x4203, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4204, .a=0x57, .x=0x81, .y=0xb4, .sp=0xe9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4203, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4203, .value=0x9f, .type=IO_READ},
        {.addr=0x4204, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0212) {
    const struct CPU_State initial_cpu = {.pc=0x73de, .a=0x72, .x=0x6d, .y=0x2a, .sp=0xb4, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x73de, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x73df, .a=0x27, .x=0x6d, .y=0x2a, .sp=0xb4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x73de, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x73de, .value=0x9f, .type=IO_READ},
        {.addr=0x73df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0213) {
    const struct CPU_State initial_cpu = {.pc=0xd83c, .a=0x6d, .x=0xb3, .y=0x40, .sp=0xbc, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd83c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd83d, .a=0xd6, .x=0xb3, .y=0x40, .sp=0xbc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd83c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd83c, .value=0x9f, .type=IO_READ},
        {.addr=0xd83d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0214) {
    const struct CPU_State initial_cpu = {.pc=0x4c83, .a=0x95, .x=0xa8, .y=0xc2, .sp=0xab, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4c83, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4c84, .a=0x59, .x=0xa8, .y=0xc2, .sp=0xab, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x4c83, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4c83, .value=0x9f, .type=IO_READ},
        {.addr=0x4c84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0215) {
    const struct CPU_State initial_cpu = {.pc=0xd888, .a=0x28, .x=0xb2, .y=0xd4, .sp=0xc6, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd888, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd889, .a=0x82, .x=0xb2, .y=0xd4, .sp=0xc6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd888, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd888, .value=0x9f, .type=IO_READ},
        {.addr=0xd889, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0216) {
    const struct CPU_State initial_cpu = {.pc=0xbd3e, .a=0x65, .x=0xdb, .y=0x9e, .sp=0x4c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbd3f, .a=0x56, .x=0xdb, .y=0x9e, .sp=0x4c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbd3e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbd3e, .value=0x9f, .type=IO_READ},
        {.addr=0xbd3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0217) {
    const struct CPU_State initial_cpu = {.pc=0xa0dd, .a=0xc4, .x=0xf3, .y=0xb3, .sp=0x11, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xa0dd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa0de, .a=0x4c, .x=0xf3, .y=0xb3, .sp=0x11, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa0dd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa0dd, .value=0x9f, .type=IO_READ},
        {.addr=0xa0de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0218) {
    const struct CPU_State initial_cpu = {.pc=0xa7ea, .a=0x1f, .x=0x43, .y=0xd7, .sp=0x7f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ea, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa7eb, .a=0xf1, .x=0x43, .y=0xd7, .sp=0x7f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa7ea, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa7ea, .value=0x9f, .type=IO_READ},
        {.addr=0xa7eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0219) {
    const struct CPU_State initial_cpu = {.pc=0x4499, .a=0xbc, .x=0x2b, .y=0x73, .sp=0x5c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4499, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x449a, .a=0xcb, .x=0x2b, .y=0x73, .sp=0x5c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4499, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4499, .value=0x9f, .type=IO_READ},
        {.addr=0x449a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021A) {
    const struct CPU_State initial_cpu = {.pc=0x6976, .a=0xde, .x=0x9d, .y=0x89, .sp=0xd9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6976, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6977, .a=0xed, .x=0x9d, .y=0x89, .sp=0xd9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6976, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6976, .value=0x9f, .type=IO_READ},
        {.addr=0x6977, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021B) {
    const struct CPU_State initial_cpu = {.pc=0xa65b, .a=0xcd, .x=0x17, .y=0x6b, .sp=0x5b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa65b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa65c, .a=0xdc, .x=0x17, .y=0x6b, .sp=0x5b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa65b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa65b, .value=0x9f, .type=IO_READ},
        {.addr=0xa65c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021C) {
    const struct CPU_State initial_cpu = {.pc=0xd040, .a=0x5d, .x=0x70, .y=0x85, .sp=0xaa, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xd040, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd041, .a=0xd5, .x=0x70, .y=0x85, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd040, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd040, .value=0x9f, .type=IO_READ},
        {.addr=0xd041, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021D) {
    const struct CPU_State initial_cpu = {.pc=0x6f92, .a=0x61, .x=0x23, .y=0x73, .sp=0x7c, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x6f92, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6f93, .a=0x16, .x=0x23, .y=0x73, .sp=0x7c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6f92, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6f92, .value=0x9f, .type=IO_READ},
        {.addr=0x6f93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021E) {
    const struct CPU_State initial_cpu = {.pc=0xe7b4, .a=0xc0, .x=0x8d, .y=0x77, .sp=0x61, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe7b5, .a=0x0c, .x=0x8d, .y=0x77, .sp=0x61, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe7b4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe7b4, .value=0x9f, .type=IO_READ},
        {.addr=0xe7b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_021F) {
    const struct CPU_State initial_cpu = {.pc=0xb14b, .a=0x20, .x=0x97, .y=0x7e, .sp=0x37, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb14b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb14c, .a=0x02, .x=0x97, .y=0x7e, .sp=0x37, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb14b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb14b, .value=0x9f, .type=IO_READ},
        {.addr=0xb14c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0220) {
    const struct CPU_State initial_cpu = {.pc=0x4e04, .a=0x81, .x=0x9f, .y=0xd4, .sp=0xfe, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4e04, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4e05, .a=0x18, .x=0x9f, .y=0xd4, .sp=0xfe, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4e04, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4e04, .value=0x9f, .type=IO_READ},
        {.addr=0x4e05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0221) {
    const struct CPU_State initial_cpu = {.pc=0x708e, .a=0x0c, .x=0x7e, .y=0x3a, .sp=0x20, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x708e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x708f, .a=0xc0, .x=0x7e, .y=0x3a, .sp=0x20, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x708e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x708e, .value=0x9f, .type=IO_READ},
        {.addr=0x708f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6811, .a=0x5d, .x=0xe3, .y=0x5d, .sp=0x00, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6811, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6812, .a=0xd5, .x=0xe3, .y=0x5d, .sp=0x00, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6811, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6811, .value=0x9f, .type=IO_READ},
        {.addr=0x6812, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa71b, .a=0xc2, .x=0xc9, .y=0x6f, .sp=0x29, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa71b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa71c, .a=0x2c, .x=0xc9, .y=0x6f, .sp=0x29, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa71b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa71b, .value=0x9f, .type=IO_READ},
        {.addr=0xa71c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0224) {
    const struct CPU_State initial_cpu = {.pc=0x870d, .a=0x9d, .x=0x03, .y=0x7c, .sp=0xf4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x870d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x870e, .a=0xd9, .x=0x03, .y=0x7c, .sp=0xf4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x870d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x870d, .value=0x9f, .type=IO_READ},
        {.addr=0x870e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0225) {
    const struct CPU_State initial_cpu = {.pc=0xc2d1, .a=0x58, .x=0xcd, .y=0x34, .sp=0x30, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc2d1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc2d2, .a=0x85, .x=0xcd, .y=0x34, .sp=0x30, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc2d1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc2d1, .value=0x9f, .type=IO_READ},
        {.addr=0xc2d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0226) {
    const struct CPU_State initial_cpu = {.pc=0x4310, .a=0x99, .x=0x82, .y=0x30, .sp=0xf6, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4310, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4311, .a=0x99, .x=0x82, .y=0x30, .sp=0xf6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4310, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4310, .value=0x9f, .type=IO_READ},
        {.addr=0x4311, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0227) {
    const struct CPU_State initial_cpu = {.pc=0x1e7a, .a=0x8a, .x=0xab, .y=0x81, .sp=0xfa, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1e7a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1e7b, .a=0xa8, .x=0xab, .y=0x81, .sp=0xfa, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1e7a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1e7a, .value=0x9f, .type=IO_READ},
        {.addr=0x1e7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0228) {
    const struct CPU_State initial_cpu = {.pc=0x3b69, .a=0xd5, .x=0x4a, .y=0x7c, .sp=0x19, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x3b69, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3b6a, .a=0x5d, .x=0x4a, .y=0x7c, .sp=0x19, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3b69, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3b69, .value=0x9f, .type=IO_READ},
        {.addr=0x3b6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0229) {
    const struct CPU_State initial_cpu = {.pc=0x1d83, .a=0x18, .x=0x35, .y=0x47, .sp=0x91, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1d83, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1d84, .a=0x81, .x=0x35, .y=0x47, .sp=0x91, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1d83, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1d83, .value=0x9f, .type=IO_READ},
        {.addr=0x1d84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022A) {
    const struct CPU_State initial_cpu = {.pc=0x7344, .a=0x85, .x=0x57, .y=0x7e, .sp=0x1d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7344, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7345, .a=0x58, .x=0x57, .y=0x7e, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7344, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7344, .value=0x9f, .type=IO_READ},
        {.addr=0x7345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022B) {
    const struct CPU_State initial_cpu = {.pc=0x5247, .a=0x19, .x=0x25, .y=0xe3, .sp=0xce, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5247, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5248, .a=0x91, .x=0x25, .y=0xe3, .sp=0xce, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5247, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5247, .value=0x9f, .type=IO_READ},
        {.addr=0x5248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022C) {
    const struct CPU_State initial_cpu = {.pc=0x1f07, .a=0xd7, .x=0x24, .y=0xd1, .sp=0xa1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1f07, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1f08, .a=0x7d, .x=0x24, .y=0xd1, .sp=0xa1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1f07, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1f07, .value=0x9f, .type=IO_READ},
        {.addr=0x1f08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022D) {
    const struct CPU_State initial_cpu = {.pc=0x4574, .a=0xfe, .x=0xde, .y=0x24, .sp=0x78, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4574, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4575, .a=0xef, .x=0xde, .y=0x24, .sp=0x78, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4574, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4574, .value=0x9f, .type=IO_READ},
        {.addr=0x4575, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022E) {
    const struct CPU_State initial_cpu = {.pc=0xe603, .a=0x49, .x=0xce, .y=0x18, .sp=0x78, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe603, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe604, .a=0x94, .x=0xce, .y=0x18, .sp=0x78, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe603, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe603, .value=0x9f, .type=IO_READ},
        {.addr=0xe604, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa89a, .a=0xa0, .x=0xd7, .y=0xa3, .sp=0x24, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa89a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa89b, .a=0x0a, .x=0xd7, .y=0xa3, .sp=0x24, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa89a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa89a, .value=0x9f, .type=IO_READ},
        {.addr=0xa89b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0230) {
    const struct CPU_State initial_cpu = {.pc=0x07ea, .a=0x9c, .x=0xdc, .y=0x04, .sp=0x76, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x07ea, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x07eb, .a=0xc9, .x=0xdc, .y=0x04, .sp=0x76, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x07ea, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x07ea, .value=0x9f, .type=IO_READ},
        {.addr=0x07eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0231) {
    const struct CPU_State initial_cpu = {.pc=0xd92a, .a=0x7d, .x=0x06, .y=0x93, .sp=0x70, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xd92a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd92b, .a=0xd7, .x=0x06, .y=0x93, .sp=0x70, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd92a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd92a, .value=0x9f, .type=IO_READ},
        {.addr=0xd92b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8a42, .a=0xa8, .x=0x19, .y=0xa5, .sp=0x4a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8a42, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8a43, .a=0x8a, .x=0x19, .y=0xa5, .sp=0x4a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8a42, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8a42, .value=0x9f, .type=IO_READ},
        {.addr=0x8a43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0233) {
    const struct CPU_State initial_cpu = {.pc=0xb853, .a=0x89, .x=0x84, .y=0xb5, .sp=0x6d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb853, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb854, .a=0x98, .x=0x84, .y=0xb5, .sp=0x6d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb853, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb853, .value=0x9f, .type=IO_READ},
        {.addr=0xb854, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0234) {
    const struct CPU_State initial_cpu = {.pc=0x166c, .a=0x04, .x=0x6f, .y=0x75, .sp=0x73, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x166c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x166d, .a=0x40, .x=0x6f, .y=0x75, .sp=0x73, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x166c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x166c, .value=0x9f, .type=IO_READ},
        {.addr=0x166d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0235) {
    const struct CPU_State initial_cpu = {.pc=0xdffe, .a=0x11, .x=0x81, .y=0xc5, .sp=0xd4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xdffe, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdfff, .a=0x11, .x=0x81, .y=0xc5, .sp=0xd4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xdffe, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdffe, .value=0x9f, .type=IO_READ},
        {.addr=0xdfff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0236) {
    const struct CPU_State initial_cpu = {.pc=0x24db, .a=0x74, .x=0x49, .y=0xef, .sp=0x0d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x24db, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x24dc, .a=0x47, .x=0x49, .y=0xef, .sp=0x0d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x24db, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x24db, .value=0x9f, .type=IO_READ},
        {.addr=0x24dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0237) {
    const struct CPU_State initial_cpu = {.pc=0x46af, .a=0xa0, .x=0x27, .y=0x22, .sp=0xf7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x46af, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x46b0, .a=0x0a, .x=0x27, .y=0x22, .sp=0xf7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x46af, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x46af, .value=0x9f, .type=IO_READ},
        {.addr=0x46b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0238) {
    const struct CPU_State initial_cpu = {.pc=0x8dd1, .a=0xb3, .x=0x97, .y=0x62, .sp=0x3b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8dd2, .a=0x3b, .x=0x97, .y=0x62, .sp=0x3b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8dd1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8dd1, .value=0x9f, .type=IO_READ},
        {.addr=0x8dd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0239) {
    const struct CPU_State initial_cpu = {.pc=0x962f, .a=0xe9, .x=0x66, .y=0xae, .sp=0xf6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x962f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9630, .a=0x9e, .x=0x66, .y=0xae, .sp=0xf6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x962f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x962f, .value=0x9f, .type=IO_READ},
        {.addr=0x9630, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023A) {
    const struct CPU_State initial_cpu = {.pc=0x821c, .a=0x26, .x=0xf8, .y=0x80, .sp=0xc1, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x821c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0x62, .x=0xf8, .y=0x80, .sp=0xc1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x821c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x821c, .value=0x9f, .type=IO_READ},
        {.addr=0x821d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023B) {
    const struct CPU_State initial_cpu = {.pc=0x9104, .a=0xb1, .x=0x33, .y=0xbd, .sp=0x46, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9104, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9105, .a=0x1b, .x=0x33, .y=0xbd, .sp=0x46, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9104, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9104, .value=0x9f, .type=IO_READ},
        {.addr=0x9105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023C) {
    const struct CPU_State initial_cpu = {.pc=0x964e, .a=0xcb, .x=0xff, .y=0xbf, .sp=0x72, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x964e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x964f, .a=0xbc, .x=0xff, .y=0xbf, .sp=0x72, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x964e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x964e, .value=0x9f, .type=IO_READ},
        {.addr=0x964f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023D) {
    const struct CPU_State initial_cpu = {.pc=0x2f74, .a=0x0f, .x=0x33, .y=0x17, .sp=0xcd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2f74, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2f75, .a=0xf0, .x=0x33, .y=0x17, .sp=0xcd, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2f74, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2f74, .value=0x9f, .type=IO_READ},
        {.addr=0x2f75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023E) {
    const struct CPU_State initial_cpu = {.pc=0x767f, .a=0x99, .x=0x2f, .y=0x85, .sp=0xe4, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x767f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7680, .a=0x99, .x=0x2f, .y=0x85, .sp=0xe4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x767f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x767f, .value=0x9f, .type=IO_READ},
        {.addr=0x7680, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_023F) {
    const struct CPU_State initial_cpu = {.pc=0xed54, .a=0x4f, .x=0x06, .y=0x11, .sp=0xd7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xed54, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xed55, .a=0xf4, .x=0x06, .y=0x11, .sp=0xd7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xed54, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xed54, .value=0x9f, .type=IO_READ},
        {.addr=0xed55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0240) {
    const struct CPU_State initial_cpu = {.pc=0xcbf4, .a=0x35, .x=0x74, .y=0xca, .sp=0x2a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcbf5, .a=0x53, .x=0x74, .y=0xca, .sp=0x2a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xcbf4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcbf4, .value=0x9f, .type=IO_READ},
        {.addr=0xcbf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0241) {
    const struct CPU_State initial_cpu = {.pc=0x2574, .a=0xb1, .x=0x1c, .y=0x1d, .sp=0x40, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x2574, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2575, .a=0x1b, .x=0x1c, .y=0x1d, .sp=0x40, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2574, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2574, .value=0x9f, .type=IO_READ},
        {.addr=0x2575, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2415, .a=0xf6, .x=0xf6, .y=0x2a, .sp=0x47, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2415, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2416, .a=0x6f, .x=0xf6, .y=0x2a, .sp=0x47, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2415, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2415, .value=0x9f, .type=IO_READ},
        {.addr=0x2416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1b78, .a=0x6e, .x=0x5f, .y=0xf5, .sp=0x96, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b78, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1b79, .a=0xe6, .x=0x5f, .y=0xf5, .sp=0x96, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1b78, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1b78, .value=0x9f, .type=IO_READ},
        {.addr=0x1b79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9a59, .a=0x5c, .x=0x82, .y=0xad, .sp=0x69, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9a59, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9a5a, .a=0xc5, .x=0x82, .y=0xad, .sp=0x69, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9a59, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9a59, .value=0x9f, .type=IO_READ},
        {.addr=0x9a5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0245) {
    const struct CPU_State initial_cpu = {.pc=0xf083, .a=0xf1, .x=0x34, .y=0xb4, .sp=0x7b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf083, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf084, .a=0x1f, .x=0x34, .y=0xb4, .sp=0x7b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf083, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf083, .value=0x9f, .type=IO_READ},
        {.addr=0xf084, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0246) {
    const struct CPU_State initial_cpu = {.pc=0x1273, .a=0x11, .x=0x23, .y=0xc5, .sp=0xdd, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1273, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1274, .a=0x11, .x=0x23, .y=0xc5, .sp=0xdd, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1273, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1273, .value=0x9f, .type=IO_READ},
        {.addr=0x1274, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6dd0, .a=0xbf, .x=0x4d, .y=0xc7, .sp=0x09, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6dd1, .a=0xfb, .x=0x4d, .y=0xc7, .sp=0x09, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6dd0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6dd0, .value=0x9f, .type=IO_READ},
        {.addr=0x6dd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0248) {
    const struct CPU_State initial_cpu = {.pc=0x94d5, .a=0xdd, .x=0x97, .y=0x6d, .sp=0x7c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x94d5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x94d6, .a=0xdd, .x=0x97, .y=0x6d, .sp=0x7c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x94d5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x94d5, .value=0x9f, .type=IO_READ},
        {.addr=0x94d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0249) {
    const struct CPU_State initial_cpu = {.pc=0x58f4, .a=0xc0, .x=0x41, .y=0xb8, .sp=0x7e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x58f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x58f5, .a=0x0c, .x=0x41, .y=0xb8, .sp=0x7e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x58f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x58f4, .value=0x9f, .type=IO_READ},
        {.addr=0x58f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024A) {
    const struct CPU_State initial_cpu = {.pc=0x2090, .a=0x05, .x=0x72, .y=0x19, .sp=0xdd, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2090, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2091, .a=0x50, .x=0x72, .y=0x19, .sp=0xdd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2090, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2090, .value=0x9f, .type=IO_READ},
        {.addr=0x2091, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024B) {
    const struct CPU_State initial_cpu = {.pc=0x4aff, .a=0xe5, .x=0xab, .y=0xc6, .sp=0x48, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4aff, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b00, .a=0x5e, .x=0xab, .y=0xc6, .sp=0x48, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4aff, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4aff, .value=0x9f, .type=IO_READ},
        {.addr=0x4b00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024C) {
    const struct CPU_State initial_cpu = {.pc=0x2db1, .a=0x74, .x=0x42, .y=0xf4, .sp=0xbf, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x2db1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2db2, .a=0x47, .x=0x42, .y=0xf4, .sp=0xbf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2db1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2db1, .value=0x9f, .type=IO_READ},
        {.addr=0x2db2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024D) {
    const struct CPU_State initial_cpu = {.pc=0xfb68, .a=0x30, .x=0xe4, .y=0xf7, .sp=0xe7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xfb68, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfb69, .a=0x03, .x=0xe4, .y=0xf7, .sp=0xe7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xfb68, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfb68, .value=0x9f, .type=IO_READ},
        {.addr=0xfb69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024E) {
    const struct CPU_State initial_cpu = {.pc=0xa42e, .a=0xac, .x=0xe0, .y=0x2b, .sp=0xf7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa42e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa42f, .a=0xca, .x=0xe0, .y=0x2b, .sp=0xf7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa42e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa42e, .value=0x9f, .type=IO_READ},
        {.addr=0xa42f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_024F) {
    const struct CPU_State initial_cpu = {.pc=0x2704, .a=0xa9, .x=0x59, .y=0x5b, .sp=0x25, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x2704, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2705, .a=0x9a, .x=0x59, .y=0x5b, .sp=0x25, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2704, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2704, .value=0x9f, .type=IO_READ},
        {.addr=0x2705, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0250) {
    const struct CPU_State initial_cpu = {.pc=0x6287, .a=0x29, .x=0x6e, .y=0x06, .sp=0x48, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6287, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6288, .a=0x92, .x=0x6e, .y=0x06, .sp=0x48, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6287, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6287, .value=0x9f, .type=IO_READ},
        {.addr=0x6288, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0251) {
    const struct CPU_State initial_cpu = {.pc=0xdbfb, .a=0x67, .x=0x28, .y=0xbd, .sp=0x75, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdbfb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdbfc, .a=0x76, .x=0x28, .y=0xbd, .sp=0x75, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdbfb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdbfb, .value=0x9f, .type=IO_READ},
        {.addr=0xdbfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0252) {
    const struct CPU_State initial_cpu = {.pc=0x3e10, .a=0x37, .x=0x1f, .y=0x91, .sp=0x42, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x3e10, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3e11, .a=0x73, .x=0x1f, .y=0x91, .sp=0x42, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3e10, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3e10, .value=0x9f, .type=IO_READ},
        {.addr=0x3e11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe39c, .a=0x8b, .x=0xcf, .y=0xae, .sp=0x31, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe39c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe39d, .a=0xb8, .x=0xcf, .y=0xae, .sp=0x31, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe39c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe39c, .value=0x9f, .type=IO_READ},
        {.addr=0xe39d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0254) {
    const struct CPU_State initial_cpu = {.pc=0x241a, .a=0xbe, .x=0x44, .y=0x5f, .sp=0x03, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x241a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x241b, .a=0xeb, .x=0x44, .y=0x5f, .sp=0x03, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x241a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x241a, .value=0x9f, .type=IO_READ},
        {.addr=0x241b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0255) {
    const struct CPU_State initial_cpu = {.pc=0x715d, .a=0x39, .x=0x2e, .y=0x75, .sp=0x42, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x715d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x715e, .a=0x93, .x=0x2e, .y=0x75, .sp=0x42, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x715d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x715d, .value=0x9f, .type=IO_READ},
        {.addr=0x715e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0256) {
    const struct CPU_State initial_cpu = {.pc=0x47cf, .a=0x70, .x=0x65, .y=0xec, .sp=0x8a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x47cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x47d0, .a=0x07, .x=0x65, .y=0xec, .sp=0x8a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x47cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x47cf, .value=0x9f, .type=IO_READ},
        {.addr=0x47d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0257) {
    const struct CPU_State initial_cpu = {.pc=0x5409, .a=0xf9, .x=0xe9, .y=0xcf, .sp=0x90, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5409, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x540a, .a=0x9f, .x=0xe9, .y=0xcf, .sp=0x90, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5409, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5409, .value=0x9f, .type=IO_READ},
        {.addr=0x540a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0258) {
    const struct CPU_State initial_cpu = {.pc=0xff82, .a=0x9f, .x=0xac, .y=0xa9, .sp=0x91, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xff82, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xff83, .a=0xf9, .x=0xac, .y=0xa9, .sp=0x91, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xff82, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xff82, .value=0x9f, .type=IO_READ},
        {.addr=0xff83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0259) {
    const struct CPU_State initial_cpu = {.pc=0x8174, .a=0xef, .x=0x47, .y=0xf5, .sp=0xa5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8174, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8175, .a=0xfe, .x=0x47, .y=0xf5, .sp=0xa5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8174, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8174, .value=0x9f, .type=IO_READ},
        {.addr=0x8175, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3fa4, .a=0xf6, .x=0xfb, .y=0x49, .sp=0x50, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3fa5, .a=0x6f, .x=0xfb, .y=0x49, .sp=0x50, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3fa4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3fa4, .value=0x9f, .type=IO_READ},
        {.addr=0x3fa5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025B) {
    const struct CPU_State initial_cpu = {.pc=0x0c3b, .a=0xc7, .x=0x2a, .y=0xb4, .sp=0x8b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c3b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0c3c, .a=0x7c, .x=0x2a, .y=0xb4, .sp=0x8b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0c3b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0c3b, .value=0x9f, .type=IO_READ},
        {.addr=0x0c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025C) {
    const struct CPU_State initial_cpu = {.pc=0x2441, .a=0xa0, .x=0x9e, .y=0xd0, .sp=0xf4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2441, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2442, .a=0x0a, .x=0x9e, .y=0xd0, .sp=0xf4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2441, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2441, .value=0x9f, .type=IO_READ},
        {.addr=0x2442, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025D) {
    const struct CPU_State initial_cpu = {.pc=0xbe1b, .a=0xc2, .x=0x5d, .y=0x80, .sp=0x3a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xbe1b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbe1c, .a=0x2c, .x=0x5d, .y=0x80, .sp=0x3a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xbe1b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbe1b, .value=0x9f, .type=IO_READ},
        {.addr=0xbe1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025E) {
    const struct CPU_State initial_cpu = {.pc=0x81f0, .a=0xbf, .x=0x2e, .y=0x51, .sp=0xbb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x81f0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x81f1, .a=0xfb, .x=0x2e, .y=0x51, .sp=0xbb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x81f0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x81f0, .value=0x9f, .type=IO_READ},
        {.addr=0x81f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_025F) {
    const struct CPU_State initial_cpu = {.pc=0x7d3c, .a=0x94, .x=0xc4, .y=0xdd, .sp=0x51, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d3d, .a=0x49, .x=0xc4, .y=0xdd, .sp=0x51, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7d3c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7d3c, .value=0x9f, .type=IO_READ},
        {.addr=0x7d3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0260) {
    const struct CPU_State initial_cpu = {.pc=0xde9d, .a=0x6f, .x=0x09, .y=0xb5, .sp=0xf4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xde9d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde9e, .a=0xf6, .x=0x09, .y=0xb5, .sp=0xf4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xde9d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde9d, .value=0x9f, .type=IO_READ},
        {.addr=0xde9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0261) {
    const struct CPU_State initial_cpu = {.pc=0x326d, .a=0xfb, .x=0xe5, .y=0xa1, .sp=0x29, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x326d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x326e, .a=0xbf, .x=0xe5, .y=0xa1, .sp=0x29, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x326d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x326d, .value=0x9f, .type=IO_READ},
        {.addr=0x326e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0262) {
    const struct CPU_State initial_cpu = {.pc=0x4433, .a=0x91, .x=0x3a, .y=0x11, .sp=0x60, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4433, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4434, .a=0x19, .x=0x3a, .y=0x11, .sp=0x60, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4433, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4433, .value=0x9f, .type=IO_READ},
        {.addr=0x4434, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0263) {
    const struct CPU_State initial_cpu = {.pc=0x424e, .a=0x20, .x=0x2f, .y=0x1c, .sp=0x08, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x424e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x424f, .a=0x02, .x=0x2f, .y=0x1c, .sp=0x08, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x424e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x424e, .value=0x9f, .type=IO_READ},
        {.addr=0x424f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0264) {
    const struct CPU_State initial_cpu = {.pc=0xf2c8, .a=0xe4, .x=0x9b, .y=0xfc, .sp=0x1b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf2c9, .a=0x4e, .x=0x9b, .y=0xfc, .sp=0x1b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xf2c8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf2c8, .value=0x9f, .type=IO_READ},
        {.addr=0xf2c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0265) {
    const struct CPU_State initial_cpu = {.pc=0xe2a2, .a=0x66, .x=0x47, .y=0xf6, .sp=0x34, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe2a3, .a=0x66, .x=0x47, .y=0xf6, .sp=0x34, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe2a2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe2a2, .value=0x9f, .type=IO_READ},
        {.addr=0xe2a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0266) {
    const struct CPU_State initial_cpu = {.pc=0x7ced, .a=0xdc, .x=0xee, .y=0x2b, .sp=0x71, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7ced, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7cee, .a=0xcd, .x=0xee, .y=0x2b, .sp=0x71, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7ced, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7ced, .value=0x9f, .type=IO_READ},
        {.addr=0x7cee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0267) {
    const struct CPU_State initial_cpu = {.pc=0xbf91, .a=0x80, .x=0x65, .y=0x6c, .sp=0xc5, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xbf91, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbf92, .a=0x08, .x=0x65, .y=0x6c, .sp=0xc5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbf91, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbf91, .value=0x9f, .type=IO_READ},
        {.addr=0xbf92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0268) {
    const struct CPU_State initial_cpu = {.pc=0xd353, .a=0x5a, .x=0x0b, .y=0x3e, .sp=0x61, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd353, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd354, .a=0xa5, .x=0x0b, .y=0x3e, .sp=0x61, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd353, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd353, .value=0x9f, .type=IO_READ},
        {.addr=0xd354, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0269) {
    const struct CPU_State initial_cpu = {.pc=0x0c86, .a=0xd6, .x=0x04, .y=0xe3, .sp=0x1b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0c86, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0c87, .a=0x6d, .x=0x04, .y=0xe3, .sp=0x1b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0c86, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0c86, .value=0x9f, .type=IO_READ},
        {.addr=0x0c87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026A) {
    const struct CPU_State initial_cpu = {.pc=0x5e76, .a=0x50, .x=0xcf, .y=0x7c, .sp=0xd2, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5e76, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5e77, .a=0x05, .x=0xcf, .y=0x7c, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5e76, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5e76, .value=0x9f, .type=IO_READ},
        {.addr=0x5e77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026B) {
    const struct CPU_State initial_cpu = {.pc=0x26b0, .a=0x76, .x=0xb1, .y=0x04, .sp=0x34, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x26b0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x26b1, .a=0x67, .x=0xb1, .y=0x04, .sp=0x34, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x26b0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x26b0, .value=0x9f, .type=IO_READ},
        {.addr=0x26b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026C) {
    const struct CPU_State initial_cpu = {.pc=0x4c71, .a=0xb0, .x=0x06, .y=0x27, .sp=0x1d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4c71, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4c72, .a=0x0b, .x=0x06, .y=0x27, .sp=0x1d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4c71, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4c71, .value=0x9f, .type=IO_READ},
        {.addr=0x4c72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb676, .a=0x85, .x=0x72, .y=0xb3, .sp=0x81, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb676, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb677, .a=0x58, .x=0x72, .y=0xb3, .sp=0x81, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb676, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb676, .value=0x9f, .type=IO_READ},
        {.addr=0xb677, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026E) {
    const struct CPU_State initial_cpu = {.pc=0x1693, .a=0x2b, .x=0x73, .y=0xee, .sp=0x2f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1693, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1694, .a=0xb2, .x=0x73, .y=0xee, .sp=0x2f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1693, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1693, .value=0x9f, .type=IO_READ},
        {.addr=0x1694, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_026F) {
    const struct CPU_State initial_cpu = {.pc=0x8f1a, .a=0xfd, .x=0x66, .y=0x00, .sp=0x5a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8f1a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8f1b, .a=0xdf, .x=0x66, .y=0x00, .sp=0x5a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8f1a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8f1a, .value=0x9f, .type=IO_READ},
        {.addr=0x8f1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0270) {
    const struct CPU_State initial_cpu = {.pc=0x19b4, .a=0x10, .x=0x36, .y=0x62, .sp=0x02, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x19b4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x19b5, .a=0x01, .x=0x36, .y=0x62, .sp=0x02, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x19b4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x19b4, .value=0x9f, .type=IO_READ},
        {.addr=0x19b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0271) {
    const struct CPU_State initial_cpu = {.pc=0xc136, .a=0x32, .x=0x61, .y=0xcd, .sp=0x43, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc136, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc137, .a=0x23, .x=0x61, .y=0xcd, .sp=0x43, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc136, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc136, .value=0x9f, .type=IO_READ},
        {.addr=0xc137, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0272) {
    const struct CPU_State initial_cpu = {.pc=0x587e, .a=0x71, .x=0x1d, .y=0xa9, .sp=0x51, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x587e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x587f, .a=0x17, .x=0x1d, .y=0xa9, .sp=0x51, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x587e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x587e, .value=0x9f, .type=IO_READ},
        {.addr=0x587f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0273) {
    const struct CPU_State initial_cpu = {.pc=0x7d35, .a=0xa5, .x=0x77, .y=0x8f, .sp=0x2c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7d35, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d36, .a=0x5a, .x=0x77, .y=0x8f, .sp=0x2c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7d35, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7d35, .value=0x9f, .type=IO_READ},
        {.addr=0x7d36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4e20, .a=0xfb, .x=0xbf, .y=0xc5, .sp=0x19, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4e20, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4e21, .a=0xbf, .x=0xbf, .y=0xc5, .sp=0x19, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4e20, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4e20, .value=0x9f, .type=IO_READ},
        {.addr=0x4e21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0275) {
    const struct CPU_State initial_cpu = {.pc=0xa118, .a=0xc2, .x=0x7e, .y=0xc4, .sp=0x25, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa118, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa119, .a=0x2c, .x=0x7e, .y=0xc4, .sp=0x25, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa118, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa118, .value=0x9f, .type=IO_READ},
        {.addr=0xa119, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0276) {
    const struct CPU_State initial_cpu = {.pc=0x4562, .a=0x77, .x=0x9c, .y=0xd5, .sp=0x20, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x4562, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4563, .a=0x77, .x=0x9c, .y=0xd5, .sp=0x20, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4562, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4562, .value=0x9f, .type=IO_READ},
        {.addr=0x4563, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0277) {
    const struct CPU_State initial_cpu = {.pc=0xa038, .a=0x47, .x=0x67, .y=0xb0, .sp=0xe2, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa038, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa039, .a=0x74, .x=0x67, .y=0xb0, .sp=0xe2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa038, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa038, .value=0x9f, .type=IO_READ},
        {.addr=0xa039, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0278) {
    const struct CPU_State initial_cpu = {.pc=0x82fb, .a=0xd8, .x=0x28, .y=0x06, .sp=0xe6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x82fb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x82fc, .a=0x8d, .x=0x28, .y=0x06, .sp=0xe6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x82fb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x82fb, .value=0x9f, .type=IO_READ},
        {.addr=0x82fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0279) {
    const struct CPU_State initial_cpu = {.pc=0xc33a, .a=0xf5, .x=0xa8, .y=0x1d, .sp=0x0b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc33a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc33b, .a=0x5f, .x=0xa8, .y=0x1d, .sp=0x0b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc33a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc33a, .value=0x9f, .type=IO_READ},
        {.addr=0xc33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027A) {
    const struct CPU_State initial_cpu = {.pc=0xd683, .a=0x9f, .x=0x61, .y=0xe9, .sp=0xd3, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd683, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd684, .a=0xf9, .x=0x61, .y=0xe9, .sp=0xd3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd683, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd683, .value=0x9f, .type=IO_READ},
        {.addr=0xd684, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027B) {
    const struct CPU_State initial_cpu = {.pc=0x4f92, .a=0x7e, .x=0xab, .y=0xde, .sp=0x90, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4f92, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4f93, .a=0xe7, .x=0xab, .y=0xde, .sp=0x90, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4f92, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4f92, .value=0x9f, .type=IO_READ},
        {.addr=0x4f93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027C) {
    const struct CPU_State initial_cpu = {.pc=0x690f, .a=0x1a, .x=0x96, .y=0xbd, .sp=0xdf, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x690f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6910, .a=0xa1, .x=0x96, .y=0xbd, .sp=0xdf, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x690f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x690f, .value=0x9f, .type=IO_READ},
        {.addr=0x6910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027D) {
    const struct CPU_State initial_cpu = {.pc=0xceee, .a=0x80, .x=0xe6, .y=0xa9, .sp=0xec, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xceee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xceef, .a=0x08, .x=0xe6, .y=0xa9, .sp=0xec, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xceee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xceee, .value=0x9f, .type=IO_READ},
        {.addr=0xceef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027E) {
    const struct CPU_State initial_cpu = {.pc=0x8a9e, .a=0x34, .x=0x67, .y=0xfb, .sp=0x9a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8a9f, .a=0x43, .x=0x67, .y=0xfb, .sp=0x9a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8a9e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8a9e, .value=0x9f, .type=IO_READ},
        {.addr=0x8a9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_027F) {
    const struct CPU_State initial_cpu = {.pc=0xea55, .a=0xc0, .x=0x3a, .y=0x22, .sp=0x87, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xea55, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xea56, .a=0x0c, .x=0x3a, .y=0x22, .sp=0x87, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xea55, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xea55, .value=0x9f, .type=IO_READ},
        {.addr=0xea56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0280) {
    const struct CPU_State initial_cpu = {.pc=0xfc26, .a=0xdc, .x=0xdb, .y=0x4d, .sp=0xd2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xfc26, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfc27, .a=0xcd, .x=0xdb, .y=0x4d, .sp=0xd2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfc26, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfc26, .value=0x9f, .type=IO_READ},
        {.addr=0xfc27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf642, .a=0x41, .x=0x70, .y=0x37, .sp=0x0c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf642, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf643, .a=0x14, .x=0x70, .y=0x37, .sp=0x0c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xf642, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf642, .value=0x9f, .type=IO_READ},
        {.addr=0xf643, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0282) {
    const struct CPU_State initial_cpu = {.pc=0xd6d8, .a=0x26, .x=0xa7, .y=0x43, .sp=0x93, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd6d9, .a=0x62, .x=0xa7, .y=0x43, .sp=0x93, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd6d8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd6d8, .value=0x9f, .type=IO_READ},
        {.addr=0xd6d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0283) {
    const struct CPU_State initial_cpu = {.pc=0x9fef, .a=0x36, .x=0xef, .y=0xfc, .sp=0x0b, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x9fef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9ff0, .a=0x63, .x=0xef, .y=0xfc, .sp=0x0b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9fef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9fef, .value=0x9f, .type=IO_READ},
        {.addr=0x9ff0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8b87, .a=0x54, .x=0xe9, .y=0xb8, .sp=0xc2, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x8b87, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8b88, .a=0x45, .x=0xe9, .y=0xb8, .sp=0xc2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8b87, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8b87, .value=0x9f, .type=IO_READ},
        {.addr=0x8b88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0285) {
    const struct CPU_State initial_cpu = {.pc=0x76d8, .a=0xd9, .x=0xd0, .y=0xc9, .sp=0x76, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x76d8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x76d9, .a=0x9d, .x=0xd0, .y=0xc9, .sp=0x76, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x76d8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x76d8, .value=0x9f, .type=IO_READ},
        {.addr=0x76d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0286) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x19, .x=0x4d, .y=0xb9, .sp=0x9c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x681d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x681e, .a=0x91, .x=0x4d, .y=0xb9, .sp=0x9c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x681d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0x9f, .type=IO_READ},
        {.addr=0x681e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0287) {
    const struct CPU_State initial_cpu = {.pc=0x05f5, .a=0xdd, .x=0x26, .y=0xa8, .sp=0x2b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x05f5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x05f6, .a=0xdd, .x=0x26, .y=0xa8, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x05f5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x05f5, .value=0x9f, .type=IO_READ},
        {.addr=0x05f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0288) {
    const struct CPU_State initial_cpu = {.pc=0x6b93, .a=0xa1, .x=0x9c, .y=0x9d, .sp=0x81, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6b93, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6b94, .a=0x1a, .x=0x9c, .y=0x9d, .sp=0x81, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6b93, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6b93, .value=0x9f, .type=IO_READ},
        {.addr=0x6b94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0289) {
    const struct CPU_State initial_cpu = {.pc=0xb289, .a=0xa2, .x=0xcc, .y=0xab, .sp=0x6c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb289, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb28a, .a=0x2a, .x=0xcc, .y=0xab, .sp=0x6c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb289, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb289, .value=0x9f, .type=IO_READ},
        {.addr=0xb28a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028A) {
    const struct CPU_State initial_cpu = {.pc=0x2996, .a=0xd8, .x=0xf3, .y=0xaf, .sp=0xb2, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x2996, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2997, .a=0x8d, .x=0xf3, .y=0xaf, .sp=0xb2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2996, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2996, .value=0x9f, .type=IO_READ},
        {.addr=0x2997, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028B) {
    const struct CPU_State initial_cpu = {.pc=0xf2b1, .a=0x8b, .x=0xff, .y=0x0b, .sp=0xac, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf2b2, .a=0xb8, .x=0xff, .y=0x0b, .sp=0xac, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xf2b1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf2b1, .value=0x9f, .type=IO_READ},
        {.addr=0xf2b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028C) {
    const struct CPU_State initial_cpu = {.pc=0x9a51, .a=0x96, .x=0x8c, .y=0x15, .sp=0x17, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9a51, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9a52, .a=0x69, .x=0x8c, .y=0x15, .sp=0x17, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9a51, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9a51, .value=0x9f, .type=IO_READ},
        {.addr=0x9a52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028D) {
    const struct CPU_State initial_cpu = {.pc=0x7cb4, .a=0xe9, .x=0x13, .y=0xbb, .sp=0x42, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x7cb4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7cb5, .a=0x9e, .x=0x13, .y=0xbb, .sp=0x42, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7cb4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7cb4, .value=0x9f, .type=IO_READ},
        {.addr=0x7cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2dbe, .a=0x7e, .x=0xe6, .y=0x8f, .sp=0xd8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbe, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2dbf, .a=0xe7, .x=0xe6, .y=0x8f, .sp=0xd8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2dbe, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2dbe, .value=0x9f, .type=IO_READ},
        {.addr=0x2dbf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_028F) {
    const struct CPU_State initial_cpu = {.pc=0x101a, .a=0x07, .x=0x25, .y=0x31, .sp=0xcc, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x101a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x101b, .a=0x70, .x=0x25, .y=0x31, .sp=0xcc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x101a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x101a, .value=0x9f, .type=IO_READ},
        {.addr=0x101b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0290) {
    const struct CPU_State initial_cpu = {.pc=0x4677, .a=0xbf, .x=0x68, .y=0x57, .sp=0x46, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4677, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4678, .a=0xfb, .x=0x68, .y=0x57, .sp=0x46, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4677, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4677, .value=0x9f, .type=IO_READ},
        {.addr=0x4678, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0291) {
    const struct CPU_State initial_cpu = {.pc=0x5bcd, .a=0x80, .x=0x3f, .y=0x9b, .sp=0x3b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x5bcd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5bce, .a=0x08, .x=0x3f, .y=0x9b, .sp=0x3b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5bcd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5bcd, .value=0x9f, .type=IO_READ},
        {.addr=0x5bce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0292) {
    const struct CPU_State initial_cpu = {.pc=0x2a7f, .a=0x49, .x=0x5b, .y=0x84, .sp=0xba, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a80, .a=0x94, .x=0x5b, .y=0x84, .sp=0xba, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2a7f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a7f, .value=0x9f, .type=IO_READ},
        {.addr=0x2a80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0293) {
    const struct CPU_State initial_cpu = {.pc=0x800d, .a=0xd8, .x=0x80, .y=0x2d, .sp=0x9b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x800d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x800e, .a=0x8d, .x=0x80, .y=0x2d, .sp=0x9b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x800d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x800d, .value=0x9f, .type=IO_READ},
        {.addr=0x800e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0294) {
    const struct CPU_State initial_cpu = {.pc=0x8dee, .a=0x5e, .x=0xeb, .y=0x6f, .sp=0x0c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8dee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8def, .a=0xe5, .x=0xeb, .y=0x6f, .sp=0x0c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8dee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8dee, .value=0x9f, .type=IO_READ},
        {.addr=0x8def, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0295) {
    const struct CPU_State initial_cpu = {.pc=0x46ca, .a=0x7b, .x=0x02, .y=0xa9, .sp=0x97, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x46ca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x46cb, .a=0xb7, .x=0x02, .y=0xa9, .sp=0x97, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x46ca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x46ca, .value=0x9f, .type=IO_READ},
        {.addr=0x46cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0296) {
    const struct CPU_State initial_cpu = {.pc=0x244d, .a=0x61, .x=0x10, .y=0xe0, .sp=0xb7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x244d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x244e, .a=0x16, .x=0x10, .y=0xe0, .sp=0xb7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x244d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x244d, .value=0x9f, .type=IO_READ},
        {.addr=0x244e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0297) {
    const struct CPU_State initial_cpu = {.pc=0x680d, .a=0x14, .x=0x7a, .y=0x36, .sp=0xa1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x680d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x680e, .a=0x41, .x=0x7a, .y=0x36, .sp=0xa1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x680d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x680d, .value=0x9f, .type=IO_READ},
        {.addr=0x680e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0298) {
    const struct CPU_State initial_cpu = {.pc=0x42a5, .a=0xb6, .x=0xe3, .y=0x2b, .sp=0x4a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x42a5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x42a6, .a=0x6b, .x=0xe3, .y=0x2b, .sp=0x4a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x42a5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x42a5, .value=0x9f, .type=IO_READ},
        {.addr=0x42a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0299) {
    const struct CPU_State initial_cpu = {.pc=0x7605, .a=0x15, .x=0x48, .y=0x76, .sp=0x39, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x7605, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7606, .a=0x51, .x=0x48, .y=0x76, .sp=0x39, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7605, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7605, .value=0x9f, .type=IO_READ},
        {.addr=0x7606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029A) {
    const struct CPU_State initial_cpu = {.pc=0x9f7f, .a=0x0a, .x=0xe6, .y=0x86, .sp=0x26, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9f7f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9f80, .a=0xa0, .x=0xe6, .y=0x86, .sp=0x26, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9f7f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9f7f, .value=0x9f, .type=IO_READ},
        {.addr=0x9f80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029B) {
    const struct CPU_State initial_cpu = {.pc=0xbf8b, .a=0x00, .x=0xbc, .y=0xfd, .sp=0x15, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbf8c, .a=0x00, .x=0xbc, .y=0xfd, .sp=0x15, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xbf8b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbf8b, .value=0x9f, .type=IO_READ},
        {.addr=0xbf8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc657, .a=0x49, .x=0x1b, .y=0x62, .sp=0xd7, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc657, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc658, .a=0x94, .x=0x1b, .y=0x62, .sp=0xd7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc657, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc657, .value=0x9f, .type=IO_READ},
        {.addr=0xc658, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029D) {
    const struct CPU_State initial_cpu = {.pc=0x6f0d, .a=0x7e, .x=0x44, .y=0x35, .sp=0xe7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x6f0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6f0e, .a=0xe7, .x=0x44, .y=0x35, .sp=0xe7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6f0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6f0d, .value=0x9f, .type=IO_READ},
        {.addr=0x6f0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029E) {
    const struct CPU_State initial_cpu = {.pc=0x6396, .a=0x95, .x=0x03, .y=0xb2, .sp=0xe5, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6396, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6397, .a=0x59, .x=0x03, .y=0xb2, .sp=0xe5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6396, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6396, .value=0x9f, .type=IO_READ},
        {.addr=0x6397, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_029F) {
    const struct CPU_State initial_cpu = {.pc=0x48b5, .a=0x24, .x=0x09, .y=0x4f, .sp=0x11, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x48b5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x48b6, .a=0x42, .x=0x09, .y=0x4f, .sp=0x11, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x48b5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x48b5, .value=0x9f, .type=IO_READ},
        {.addr=0x48b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x24f4, .a=0x53, .x=0x67, .y=0xa1, .sp=0x96, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x24f4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x24f5, .a=0x35, .x=0x67, .y=0xa1, .sp=0x96, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x24f4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x24f4, .value=0x9f, .type=IO_READ},
        {.addr=0x24f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xf92e, .a=0x36, .x=0x7c, .y=0x4d, .sp=0x46, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf92e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf92f, .a=0x63, .x=0x7c, .y=0x4d, .sp=0x46, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf92e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf92e, .value=0x9f, .type=IO_READ},
        {.addr=0xf92f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xeb83, .a=0x35, .x=0x1a, .y=0xef, .sp=0x3a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xeb83, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeb84, .a=0x53, .x=0x1a, .y=0xef, .sp=0x3a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xeb83, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeb83, .value=0x9f, .type=IO_READ},
        {.addr=0xeb84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x4ecd, .a=0xb9, .x=0x55, .y=0x79, .sp=0x32, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4ecd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4ece, .a=0x9b, .x=0x55, .y=0x79, .sp=0x32, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4ecd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4ecd, .value=0x9f, .type=IO_READ},
        {.addr=0x4ece, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x1c12, .a=0x21, .x=0xb7, .y=0x81, .sp=0xca, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1c12, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1c13, .a=0x12, .x=0xb7, .y=0x81, .sp=0xca, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1c12, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1c12, .value=0x9f, .type=IO_READ},
        {.addr=0x1c13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x6769, .a=0x65, .x=0xc4, .y=0xcb, .sp=0x35, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6769, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x676a, .a=0x56, .x=0xc4, .y=0xcb, .sp=0x35, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6769, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6769, .value=0x9f, .type=IO_READ},
        {.addr=0x676a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xfebc, .a=0x3d, .x=0x0c, .y=0xff, .sp=0x77, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfebc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfebd, .a=0xd3, .x=0x0c, .y=0xff, .sp=0x77, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfebc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfebc, .value=0x9f, .type=IO_READ},
        {.addr=0xfebd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xe0b7, .a=0xcf, .x=0x6d, .y=0x65, .sp=0xa7, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe0b8, .a=0xfc, .x=0x6d, .y=0x65, .sp=0xa7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe0b7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe0b7, .value=0x9f, .type=IO_READ},
        {.addr=0xe0b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xa33d, .a=0xe6, .x=0x21, .y=0x7a, .sp=0xab, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa33d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa33e, .a=0x6e, .x=0x21, .y=0x7a, .sp=0xab, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa33d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa33d, .value=0x9f, .type=IO_READ},
        {.addr=0xa33e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x7fbc, .a=0xde, .x=0x38, .y=0x6d, .sp=0x1a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7fbc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7fbd, .a=0xed, .x=0x38, .y=0x6d, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7fbc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7fbc, .value=0x9f, .type=IO_READ},
        {.addr=0x7fbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb4a5, .a=0x7c, .x=0xf0, .y=0xd9, .sp=0x1b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb4a6, .a=0xc7, .x=0xf0, .y=0xd9, .sp=0x1b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb4a5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb4a5, .value=0x9f, .type=IO_READ},
        {.addr=0xb4a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x61c0, .a=0x70, .x=0xad, .y=0xe7, .sp=0x1e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x61c0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x61c1, .a=0x07, .x=0xad, .y=0xe7, .sp=0x1e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x61c0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x61c0, .value=0x9f, .type=IO_READ},
        {.addr=0x61c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0x05, .x=0x32, .y=0xa7, .sp=0x2a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xcf47, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcf48, .a=0x50, .x=0x32, .y=0xa7, .sp=0x2a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xcf47, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0x9f, .type=IO_READ},
        {.addr=0xcf48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x2d60, .a=0x54, .x=0xe6, .y=0x8d, .sp=0x2e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2d60, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2d61, .a=0x45, .x=0xe6, .y=0x8d, .sp=0x2e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2d60, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2d60, .value=0x9f, .type=IO_READ},
        {.addr=0x2d61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x8e57, .a=0x12, .x=0x07, .y=0x84, .sp=0xc3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8e57, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8e58, .a=0x21, .x=0x07, .y=0x84, .sp=0xc3, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8e57, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8e57, .value=0x9f, .type=IO_READ},
        {.addr=0x8e58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x0019, .a=0x66, .x=0x1c, .y=0xdc, .sp=0x85, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x001a, .a=0x66, .x=0x1c, .y=0xdc, .sp=0x85, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0019, .value=0x9f, .type=IO_READ},
        {.addr=0x001a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6042, .a=0x0a, .x=0xa6, .y=0xdb, .sp=0x91, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6042, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6043, .a=0xa0, .x=0xa6, .y=0xdb, .sp=0x91, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6042, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6042, .value=0x9f, .type=IO_READ},
        {.addr=0x6043, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xe95b, .a=0x6e, .x=0x59, .y=0x37, .sp=0x97, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe95b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe95c, .a=0xe6, .x=0x59, .y=0x37, .sp=0x97, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe95b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe95b, .value=0x9f, .type=IO_READ},
        {.addr=0xe95c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xea95, .a=0xd3, .x=0x28, .y=0x8a, .sp=0x22, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xea95, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xea96, .a=0x3d, .x=0x28, .y=0x8a, .sp=0x22, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xea95, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xea95, .value=0x9f, .type=IO_READ},
        {.addr=0xea96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x08ce, .a=0x89, .x=0x0a, .y=0x80, .sp=0x7e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x08ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x08cf, .a=0x98, .x=0x0a, .y=0x80, .sp=0x7e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x08ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x08ce, .value=0x9f, .type=IO_READ},
        {.addr=0x08cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xe1eb, .a=0xed, .x=0x23, .y=0x8b, .sp=0xd2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe1eb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe1ec, .a=0xde, .x=0x23, .y=0x8b, .sp=0xd2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe1eb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe1eb, .value=0x9f, .type=IO_READ},
        {.addr=0xe1ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xc7ed, .a=0xbb, .x=0x23, .y=0xf2, .sp=0xf9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ed, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc7ee, .a=0xbb, .x=0x23, .y=0xf2, .sp=0xf9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc7ed, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc7ed, .value=0x9f, .type=IO_READ},
        {.addr=0xc7ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xf209, .a=0xa3, .x=0x3e, .y=0x42, .sp=0x9b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf209, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf20a, .a=0x3a, .x=0x3e, .y=0x42, .sp=0x9b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf209, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf209, .value=0x9f, .type=IO_READ},
        {.addr=0xf20a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9577, .a=0x34, .x=0x9a, .y=0xac, .sp=0x46, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9577, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9578, .a=0x43, .x=0x9a, .y=0xac, .sp=0x46, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9577, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9577, .value=0x9f, .type=IO_READ},
        {.addr=0x9578, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x7789, .a=0x38, .x=0x36, .y=0x7c, .sp=0xa5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7789, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x778a, .a=0x83, .x=0x36, .y=0x7c, .sp=0xa5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7789, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7789, .value=0x9f, .type=IO_READ},
        {.addr=0x778a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xe2c8, .a=0xa6, .x=0x94, .y=0x9d, .sp=0x7a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe2c8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe2c9, .a=0x6a, .x=0x94, .y=0x9d, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe2c8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe2c8, .value=0x9f, .type=IO_READ},
        {.addr=0xe2c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x07bc, .a=0x52, .x=0xc8, .y=0xa4, .sp=0x69, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x07bc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x07bd, .a=0x25, .x=0xc8, .y=0xa4, .sp=0x69, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x07bc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x07bc, .value=0x9f, .type=IO_READ},
        {.addr=0x07bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x649b, .a=0x77, .x=0x39, .y=0xc9, .sp=0x11, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x649b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x649c, .a=0x77, .x=0x39, .y=0xc9, .sp=0x11, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x649b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x649b, .value=0x9f, .type=IO_READ},
        {.addr=0x649c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x7177, .a=0x8f, .x=0x59, .y=0xa6, .sp=0x87, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7177, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7178, .a=0xf8, .x=0x59, .y=0xa6, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7177, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7177, .value=0x9f, .type=IO_READ},
        {.addr=0x7178, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xef31, .a=0xfa, .x=0x9a, .y=0x9f, .sp=0x00, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xef31, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xef32, .a=0xaf, .x=0x9a, .y=0x9f, .sp=0x00, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xef31, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xef31, .value=0x9f, .type=IO_READ},
        {.addr=0xef32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x417e, .a=0x68, .x=0x15, .y=0xcb, .sp=0x03, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x417e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x417f, .a=0x86, .x=0x15, .y=0xcb, .sp=0x03, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x417e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x417e, .value=0x9f, .type=IO_READ},
        {.addr=0x417f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xc598, .a=0x9d, .x=0xd1, .y=0x3e, .sp=0x91, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc598, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc599, .a=0xd9, .x=0xd1, .y=0x3e, .sp=0x91, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xc598, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc598, .value=0x9f, .type=IO_READ},
        {.addr=0xc599, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x6f97, .a=0xff, .x=0x26, .y=0x06, .sp=0x0f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6f97, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6f98, .a=0xff, .x=0x26, .y=0x06, .sp=0x0f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6f97, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6f97, .value=0x9f, .type=IO_READ},
        {.addr=0x6f98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x61ae, .a=0x5c, .x=0xac, .y=0xea, .sp=0x62, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x61ae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x61af, .a=0xc5, .x=0xac, .y=0xea, .sp=0x62, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x61ae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x61ae, .value=0x9f, .type=IO_READ},
        {.addr=0x61af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xc109, .a=0xe1, .x=0xc6, .y=0x9f, .sp=0xd6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xc109, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc10a, .a=0x1e, .x=0xc6, .y=0x9f, .sp=0xd6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc109, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc109, .value=0x9f, .type=IO_READ},
        {.addr=0xc10a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x85ae, .a=0xfb, .x=0xeb, .y=0x35, .sp=0xbd, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x85ae, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x85af, .a=0xbf, .x=0xeb, .y=0x35, .sp=0xbd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x85ae, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x85ae, .value=0x9f, .type=IO_READ},
        {.addr=0x85af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x11c2, .a=0x90, .x=0xf3, .y=0xd1, .sp=0xad, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x11c2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x11c3, .a=0x09, .x=0xf3, .y=0xd1, .sp=0xad, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x11c2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x11c2, .value=0x9f, .type=IO_READ},
        {.addr=0x11c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0x20, .x=0x3f, .y=0x62, .sp=0x6a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1882, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1883, .a=0x02, .x=0x3f, .y=0x62, .sp=0x6a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1882, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0x9f, .type=IO_READ},
        {.addr=0x1883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x3de6, .a=0xda, .x=0xcc, .y=0x12, .sp=0x9e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3de6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3de7, .a=0xad, .x=0xcc, .y=0x12, .sp=0x9e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3de6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3de6, .value=0x9f, .type=IO_READ},
        {.addr=0x3de7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd908, .a=0x26, .x=0x9e, .y=0x82, .sp=0xa1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd908, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd909, .a=0x62, .x=0x9e, .y=0x82, .sp=0xa1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd908, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd908, .value=0x9f, .type=IO_READ},
        {.addr=0xd909, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x38ec, .a=0x71, .x=0x28, .y=0xee, .sp=0x23, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x38ec, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x38ed, .a=0x17, .x=0x28, .y=0xee, .sp=0x23, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x38ec, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x38ec, .value=0x9f, .type=IO_READ},
        {.addr=0x38ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xfb7a, .a=0xe1, .x=0xc9, .y=0xc3, .sp=0xcd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfb7b, .a=0x1e, .x=0xc9, .y=0xc3, .sp=0xcd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfb7a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfb7a, .value=0x9f, .type=IO_READ},
        {.addr=0xfb7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xc31f, .a=0xa1, .x=0x01, .y=0x41, .sp=0x2e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xc31f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc320, .a=0x1a, .x=0x01, .y=0x41, .sp=0x2e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc31f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc31f, .value=0x9f, .type=IO_READ},
        {.addr=0xc320, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x76bc, .a=0xbb, .x=0x7c, .y=0x6a, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x76bc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x76bd, .a=0xbb, .x=0x7c, .y=0x6a, .sp=0xa4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x76bc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x76bc, .value=0x9f, .type=IO_READ},
        {.addr=0x76bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x8882, .a=0xd5, .x=0xe8, .y=0xf9, .sp=0xe5, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8882, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8883, .a=0x5d, .x=0xe8, .y=0xf9, .sp=0xe5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8882, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8882, .value=0x9f, .type=IO_READ},
        {.addr=0x8883, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6517, .a=0x39, .x=0x75, .y=0x7d, .sp=0xea, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6517, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6518, .a=0x93, .x=0x75, .y=0x7d, .sp=0xea, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6517, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6517, .value=0x9f, .type=IO_READ},
        {.addr=0x6518, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x8e47, .a=0xd0, .x=0xb0, .y=0x6c, .sp=0xc3, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8e47, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8e48, .a=0x0d, .x=0xb0, .y=0x6c, .sp=0xc3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8e47, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8e47, .value=0x9f, .type=IO_READ},
        {.addr=0x8e48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x35c4, .a=0xe2, .x=0xd3, .y=0xe2, .sp=0x4b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x35c4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x35c5, .a=0x2e, .x=0xd3, .y=0xe2, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x35c4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x35c4, .value=0x9f, .type=IO_READ},
        {.addr=0x35c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x2810, .a=0x8e, .x=0x31, .y=0x27, .sp=0x65, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x2810, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2811, .a=0xe8, .x=0x31, .y=0x27, .sp=0x65, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2810, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2810, .value=0x9f, .type=IO_READ},
        {.addr=0x2811, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x84f5, .a=0xc9, .x=0x3c, .y=0x36, .sp=0xac, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x84f5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x84f6, .a=0x9c, .x=0x3c, .y=0x36, .sp=0xac, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x84f5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x84f5, .value=0x9f, .type=IO_READ},
        {.addr=0x84f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x40d7, .a=0xa8, .x=0xa4, .y=0x03, .sp=0x06, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x40d7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40d8, .a=0x8a, .x=0xa4, .y=0x03, .sp=0x06, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x40d7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40d7, .value=0x9f, .type=IO_READ},
        {.addr=0x40d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xb660, .a=0xdc, .x=0xed, .y=0xec, .sp=0x75, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb660, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb661, .a=0xcd, .x=0xed, .y=0xec, .sp=0x75, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb660, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb660, .value=0x9f, .type=IO_READ},
        {.addr=0xb661, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x64f7, .a=0x44, .x=0xc6, .y=0x2b, .sp=0xf5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x64f7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x64f8, .a=0x44, .x=0xc6, .y=0x2b, .sp=0xf5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x64f7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x64f7, .value=0x9f, .type=IO_READ},
        {.addr=0x64f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x609f, .a=0x42, .x=0xfb, .y=0x97, .sp=0x02, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x609f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x60a0, .a=0x24, .x=0xfb, .y=0x97, .sp=0x02, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x609f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x609f, .value=0x9f, .type=IO_READ},
        {.addr=0x60a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x9118, .a=0x63, .x=0xc9, .y=0x3c, .sp=0x3d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9118, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9119, .a=0x36, .x=0xc9, .y=0x3c, .sp=0x3d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9118, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9118, .value=0x9f, .type=IO_READ},
        {.addr=0x9119, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x9317, .a=0x58, .x=0x04, .y=0x81, .sp=0xdf, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9317, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9318, .a=0x85, .x=0x04, .y=0x81, .sp=0xdf, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9317, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9317, .value=0x9f, .type=IO_READ},
        {.addr=0x9318, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5056, .a=0x38, .x=0x67, .y=0xe2, .sp=0x02, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5056, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5057, .a=0x83, .x=0x67, .y=0xe2, .sp=0x02, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5056, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5056, .value=0x9f, .type=IO_READ},
        {.addr=0x5057, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x3bb5, .a=0x02, .x=0xf7, .y=0x07, .sp=0xa2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3bb6, .a=0x20, .x=0xf7, .y=0x07, .sp=0xa2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3bb5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3bb5, .value=0x9f, .type=IO_READ},
        {.addr=0x3bb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb4aa, .a=0x1d, .x=0x8f, .y=0xd4, .sp=0x2b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb4aa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb4ab, .a=0xd1, .x=0x8f, .y=0xd4, .sp=0x2b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb4aa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb4aa, .value=0x9f, .type=IO_READ},
        {.addr=0xb4ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x30e3, .a=0xa3, .x=0x81, .y=0xf0, .sp=0x0a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x30e3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x30e4, .a=0x3a, .x=0x81, .y=0xf0, .sp=0x0a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x30e3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x30e3, .value=0x9f, .type=IO_READ},
        {.addr=0x30e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x06ce, .a=0x4d, .x=0x23, .y=0xca, .sp=0xbc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x06ce, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x06cf, .a=0xd4, .x=0x23, .y=0xca, .sp=0xbc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x06ce, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x06ce, .value=0x9f, .type=IO_READ},
        {.addr=0x06cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xefee, .a=0x2e, .x=0xac, .y=0x3a, .sp=0x4c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xefee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xefef, .a=0xe2, .x=0xac, .y=0x3a, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xefee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xefee, .value=0x9f, .type=IO_READ},
        {.addr=0xefef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x9cb6, .a=0xd8, .x=0x51, .y=0xe3, .sp=0xf9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9cb7, .a=0x8d, .x=0x51, .y=0xe3, .sp=0xf9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9cb6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9cb6, .value=0x9f, .type=IO_READ},
        {.addr=0x9cb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5756, .a=0x0e, .x=0x47, .y=0x1f, .sp=0x6d, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5756, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5757, .a=0xe0, .x=0x47, .y=0x1f, .sp=0x6d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5756, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5756, .value=0x9f, .type=IO_READ},
        {.addr=0x5757, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xe84e, .a=0xd7, .x=0xf9, .y=0x4c, .sp=0x15, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe84e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe84f, .a=0x7d, .x=0xf9, .y=0x4c, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe84e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe84e, .value=0x9f, .type=IO_READ},
        {.addr=0xe84f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xc454, .a=0xec, .x=0x0f, .y=0xae, .sp=0x7d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xc454, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc455, .a=0xce, .x=0x0f, .y=0xae, .sp=0x7d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc454, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc454, .value=0x9f, .type=IO_READ},
        {.addr=0xc455, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x9536, .a=0xe3, .x=0xfd, .y=0xe0, .sp=0x32, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9536, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9537, .a=0x3e, .x=0xfd, .y=0xe0, .sp=0x32, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9536, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9536, .value=0x9f, .type=IO_READ},
        {.addr=0x9537, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xca69, .a=0x04, .x=0x75, .y=0x84, .sp=0xb7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xca69, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xca6a, .a=0x40, .x=0x75, .y=0x84, .sp=0xb7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xca69, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xca69, .value=0x9f, .type=IO_READ},
        {.addr=0xca6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x1377, .a=0x0d, .x=0x42, .y=0x58, .sp=0xbc, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1377, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1378, .a=0xd0, .x=0x42, .y=0x58, .sp=0xbc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1377, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1377, .value=0x9f, .type=IO_READ},
        {.addr=0x1378, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x2df0, .a=0xe0, .x=0x65, .y=0x60, .sp=0x3f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2df0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2df1, .a=0x0e, .x=0x65, .y=0x60, .sp=0x3f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2df0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2df0, .value=0x9f, .type=IO_READ},
        {.addr=0x2df1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x5c14, .a=0xa2, .x=0x63, .y=0x42, .sp=0xf2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5c14, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5c15, .a=0x2a, .x=0x63, .y=0x42, .sp=0xf2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5c14, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5c14, .value=0x9f, .type=IO_READ},
        {.addr=0x5c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xcbfd, .a=0xbf, .x=0xe7, .y=0x94, .sp=0xd1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xcbfd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcbfe, .a=0xfb, .x=0xe7, .y=0x94, .sp=0xd1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xcbfd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcbfd, .value=0x9f, .type=IO_READ},
        {.addr=0xcbfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xbc25, .a=0xec, .x=0x80, .y=0xcb, .sp=0x68, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xbc25, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbc26, .a=0xce, .x=0x80, .y=0xcb, .sp=0x68, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbc25, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbc25, .value=0x9f, .type=IO_READ},
        {.addr=0xbc26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x2493, .a=0x09, .x=0x10, .y=0x40, .sp=0x2c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2493, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2494, .a=0x90, .x=0x10, .y=0x40, .sp=0x2c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2493, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2493, .value=0x9f, .type=IO_READ},
        {.addr=0x2494, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x3ec6, .a=0x25, .x=0xa6, .y=0x98, .sp=0xc9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3ec7, .a=0x52, .x=0xa6, .y=0x98, .sp=0xc9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3ec6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3ec6, .value=0x9f, .type=IO_READ},
        {.addr=0x3ec7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x48dd, .a=0xd3, .x=0x2b, .y=0xd3, .sp=0x83, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x48dd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x48de, .a=0x3d, .x=0x2b, .y=0xd3, .sp=0x83, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x48dd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x48dd, .value=0x9f, .type=IO_READ},
        {.addr=0x48de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xddfb, .a=0xd4, .x=0x90, .y=0xe5, .sp=0xf8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xddfb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xddfc, .a=0x4d, .x=0x90, .y=0xe5, .sp=0xf8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xddfb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xddfb, .value=0x9f, .type=IO_READ},
        {.addr=0xddfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2f6d, .a=0x6c, .x=0x89, .y=0x3a, .sp=0xaf, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2f6e, .a=0xc6, .x=0x89, .y=0x3a, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2f6d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2f6d, .value=0x9f, .type=IO_READ},
        {.addr=0x2f6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xdc0a, .a=0x6e, .x=0xeb, .y=0x21, .sp=0x60, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdc0b, .a=0xe6, .x=0xeb, .y=0x21, .sp=0x60, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdc0a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdc0a, .value=0x9f, .type=IO_READ},
        {.addr=0xdc0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xa239, .a=0x80, .x=0xdd, .y=0x78, .sp=0x27, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa239, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa23a, .a=0x08, .x=0xdd, .y=0x78, .sp=0x27, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa239, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa239, .value=0x9f, .type=IO_READ},
        {.addr=0xa23a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xf507, .a=0xc5, .x=0x7e, .y=0x84, .sp=0xef, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf507, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf508, .a=0x5c, .x=0x7e, .y=0x84, .sp=0xef, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf507, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf507, .value=0x9f, .type=IO_READ},
        {.addr=0xf508, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x9d5e, .a=0x19, .x=0x3d, .y=0x84, .sp=0x8f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9d5f, .a=0x91, .x=0x3d, .y=0x84, .sp=0x8f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9d5e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9d5e, .value=0x9f, .type=IO_READ},
        {.addr=0x9d5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xa215, .a=0xe8, .x=0xe2, .y=0xc5, .sp=0x21, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa215, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa216, .a=0x8e, .x=0xe2, .y=0xc5, .sp=0x21, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa215, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa215, .value=0x9f, .type=IO_READ},
        {.addr=0xa216, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0bfa, .a=0xbc, .x=0xcc, .y=0x7c, .sp=0xc9, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0bfa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0bfb, .a=0xcb, .x=0xcc, .y=0x7c, .sp=0xc9, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0bfa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0bfa, .value=0x9f, .type=IO_READ},
        {.addr=0x0bfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x30b6, .a=0x29, .x=0x97, .y=0x39, .sp=0x47, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x30b6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x30b7, .a=0x92, .x=0x97, .y=0x39, .sp=0x47, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x30b6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x30b6, .value=0x9f, .type=IO_READ},
        {.addr=0x30b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xd6f9, .a=0x51, .x=0x0f, .y=0xb1, .sp=0x0b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd6f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd6fa, .a=0x15, .x=0x0f, .y=0xb1, .sp=0x0b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd6f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd6f9, .value=0x9f, .type=IO_READ},
        {.addr=0xd6fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xbf97, .a=0xac, .x=0xe9, .y=0x09, .sp=0xd6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf97, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0xca, .x=0xe9, .y=0x09, .sp=0xd6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xbf97, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbf97, .value=0x9f, .type=IO_READ},
        {.addr=0xbf98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x0ef3, .a=0x8e, .x=0x56, .y=0xd3, .sp=0xc3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0ef4, .a=0xe8, .x=0x56, .y=0xd3, .sp=0xc3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0ef3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0ef3, .value=0x9f, .type=IO_READ},
        {.addr=0x0ef4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x0b4b, .a=0x8f, .x=0xee, .y=0xe2, .sp=0x59, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0b4b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0b4c, .a=0xf8, .x=0xee, .y=0xe2, .sp=0x59, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0b4b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0b4b, .value=0x9f, .type=IO_READ},
        {.addr=0x0b4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xe04c, .a=0x47, .x=0xbd, .y=0x08, .sp=0x90, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe04c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe04d, .a=0x74, .x=0xbd, .y=0x08, .sp=0x90, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe04c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe04c, .value=0x9f, .type=IO_READ},
        {.addr=0xe04d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xb36e, .a=0xe9, .x=0xe1, .y=0xb0, .sp=0xdc, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb36e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb36f, .a=0x9e, .x=0xe1, .y=0xb0, .sp=0xdc, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb36e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb36e, .value=0x9f, .type=IO_READ},
        {.addr=0xb36f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xa649, .a=0x75, .x=0x18, .y=0x38, .sp=0x33, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa649, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa64a, .a=0x57, .x=0x18, .y=0x38, .sp=0x33, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa649, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa649, .value=0x9f, .type=IO_READ},
        {.addr=0xa64a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xc52d, .a=0x1d, .x=0x7b, .y=0x5d, .sp=0x50, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc52d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc52e, .a=0xd1, .x=0x7b, .y=0x5d, .sp=0x50, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xc52d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc52d, .value=0x9f, .type=IO_READ},
        {.addr=0xc52e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xfb88, .a=0x6e, .x=0x60, .y=0xc6, .sp=0x1b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfb88, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfb89, .a=0xe6, .x=0x60, .y=0xc6, .sp=0x1b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xfb88, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfb88, .value=0x9f, .type=IO_READ},
        {.addr=0xfb89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x4bb2, .a=0xcb, .x=0x7a, .y=0x33, .sp=0x11, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x4bb2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4bb3, .a=0xbc, .x=0x7a, .y=0x33, .sp=0x11, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4bb2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4bb2, .value=0x9f, .type=IO_READ},
        {.addr=0x4bb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xc80e, .a=0xf3, .x=0xae, .y=0x2a, .sp=0xb4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc80e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc80f, .a=0x3f, .x=0xae, .y=0x2a, .sp=0xb4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc80e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc80e, .value=0x9f, .type=IO_READ},
        {.addr=0xc80f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0300) {
    const struct CPU_State initial_cpu = {.pc=0x15cd, .a=0xce, .x=0x12, .y=0xc5, .sp=0xac, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x15cd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x15ce, .a=0xec, .x=0x12, .y=0xc5, .sp=0xac, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x15cd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x15cd, .value=0x9f, .type=IO_READ},
        {.addr=0x15ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0301) {
    const struct CPU_State initial_cpu = {.pc=0xf86c, .a=0x5a, .x=0x78, .y=0x60, .sp=0x22, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xf86c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf86d, .a=0xa5, .x=0x78, .y=0x60, .sp=0x22, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf86c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf86c, .value=0x9f, .type=IO_READ},
        {.addr=0xf86d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4a30, .a=0x0b, .x=0xee, .y=0xfc, .sp=0x93, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a30, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4a31, .a=0xb0, .x=0xee, .y=0xfc, .sp=0x93, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4a30, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4a30, .value=0x9f, .type=IO_READ},
        {.addr=0x4a31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0303) {
    const struct CPU_State initial_cpu = {.pc=0x5d61, .a=0x8f, .x=0xde, .y=0x10, .sp=0xcb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5d61, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5d62, .a=0xf8, .x=0xde, .y=0x10, .sp=0xcb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5d61, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5d61, .value=0x9f, .type=IO_READ},
        {.addr=0x5d62, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6930, .a=0x1f, .x=0xce, .y=0x7b, .sp=0x97, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6930, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6931, .a=0xf1, .x=0xce, .y=0x7b, .sp=0x97, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6930, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6930, .value=0x9f, .type=IO_READ},
        {.addr=0x6931, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa084, .a=0x91, .x=0xbb, .y=0xd7, .sp=0xcb, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa084, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa085, .a=0x19, .x=0xbb, .y=0xd7, .sp=0xcb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa084, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa084, .value=0x9f, .type=IO_READ},
        {.addr=0xa085, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0306) {
    const struct CPU_State initial_cpu = {.pc=0x1fc8, .a=0x35, .x=0x4e, .y=0xa5, .sp=0x43, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1fc9, .a=0x53, .x=0x4e, .y=0xa5, .sp=0x43, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1fc8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1fc8, .value=0x9f, .type=IO_READ},
        {.addr=0x1fc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0307) {
    const struct CPU_State initial_cpu = {.pc=0x5841, .a=0x79, .x=0x9b, .y=0x45, .sp=0x0c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5841, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5842, .a=0x97, .x=0x9b, .y=0x45, .sp=0x0c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5841, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5841, .value=0x9f, .type=IO_READ},
        {.addr=0x5842, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0308) {
    const struct CPU_State initial_cpu = {.pc=0xc586, .a=0x37, .x=0x04, .y=0x6d, .sp=0x87, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc586, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc587, .a=0x73, .x=0x04, .y=0x6d, .sp=0x87, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc586, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc586, .value=0x9f, .type=IO_READ},
        {.addr=0xc587, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0309) {
    const struct CPU_State initial_cpu = {.pc=0xa7e0, .a=0x4b, .x=0xb9, .y=0x4c, .sp=0xc2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa7e1, .a=0xb4, .x=0xb9, .y=0x4c, .sp=0xc2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa7e0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa7e0, .value=0x9f, .type=IO_READ},
        {.addr=0xa7e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030A) {
    const struct CPU_State initial_cpu = {.pc=0xa87e, .a=0x94, .x=0xcc, .y=0x63, .sp=0x2c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa87e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa87f, .a=0x49, .x=0xcc, .y=0x63, .sp=0x2c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa87e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa87e, .value=0x9f, .type=IO_READ},
        {.addr=0xa87f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030B) {
    const struct CPU_State initial_cpu = {.pc=0x05bb, .a=0x6a, .x=0x2a, .y=0xac, .sp=0x81, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x05bb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x05bc, .a=0xa6, .x=0x2a, .y=0xac, .sp=0x81, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x05bb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x05bb, .value=0x9f, .type=IO_READ},
        {.addr=0x05bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030C) {
    const struct CPU_State initial_cpu = {.pc=0x48a4, .a=0xb3, .x=0x5b, .y=0x2f, .sp=0xd1, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x48a4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x48a5, .a=0x3b, .x=0x5b, .y=0x2f, .sp=0xd1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x48a4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x48a4, .value=0x9f, .type=IO_READ},
        {.addr=0x48a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030D) {
    const struct CPU_State initial_cpu = {.pc=0x4efb, .a=0x83, .x=0x99, .y=0x75, .sp=0x64, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x4efb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4efc, .a=0x38, .x=0x99, .y=0x75, .sp=0x64, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4efb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4efb, .value=0x9f, .type=IO_READ},
        {.addr=0x4efc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030E) {
    const struct CPU_State initial_cpu = {.pc=0x5595, .a=0x5f, .x=0x7c, .y=0x78, .sp=0xfa, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5595, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5596, .a=0xf5, .x=0x7c, .y=0x78, .sp=0xfa, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5595, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5595, .value=0x9f, .type=IO_READ},
        {.addr=0x5596, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_030F) {
    const struct CPU_State initial_cpu = {.pc=0x9659, .a=0xbf, .x=0x43, .y=0x5b, .sp=0xcc, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9659, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x965a, .a=0xfb, .x=0x43, .y=0x5b, .sp=0xcc, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9659, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9659, .value=0x9f, .type=IO_READ},
        {.addr=0x965a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe883, .a=0x2d, .x=0x7c, .y=0xeb, .sp=0x76, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe883, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe884, .a=0xd2, .x=0x7c, .y=0xeb, .sp=0x76, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe883, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe883, .value=0x9f, .type=IO_READ},
        {.addr=0xe884, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0311) {
    const struct CPU_State initial_cpu = {.pc=0x3aa1, .a=0x9d, .x=0x8a, .y=0x16, .sp=0xb4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3aa2, .a=0xd9, .x=0x8a, .y=0x16, .sp=0xb4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3aa1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3aa1, .value=0x9f, .type=IO_READ},
        {.addr=0x3aa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0312) {
    const struct CPU_State initial_cpu = {.pc=0x7543, .a=0x84, .x=0x45, .y=0xf0, .sp=0x33, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7543, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7544, .a=0x48, .x=0x45, .y=0xf0, .sp=0x33, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7543, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7543, .value=0x9f, .type=IO_READ},
        {.addr=0x7544, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0313) {
    const struct CPU_State initial_cpu = {.pc=0x1b36, .a=0xec, .x=0x43, .y=0x40, .sp=0x32, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1b36, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1b37, .a=0xce, .x=0x43, .y=0x40, .sp=0x32, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1b36, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1b36, .value=0x9f, .type=IO_READ},
        {.addr=0x1b37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0314) {
    const struct CPU_State initial_cpu = {.pc=0x419d, .a=0x50, .x=0x22, .y=0x47, .sp=0xe9, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x419d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x419e, .a=0x05, .x=0x22, .y=0x47, .sp=0xe9, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x419d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x419d, .value=0x9f, .type=IO_READ},
        {.addr=0x419e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0315) {
    const struct CPU_State initial_cpu = {.pc=0x40d8, .a=0x4a, .x=0xc2, .y=0xba, .sp=0x80, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x40d8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40d9, .a=0xa4, .x=0xc2, .y=0xba, .sp=0x80, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x40d8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40d8, .value=0x9f, .type=IO_READ},
        {.addr=0x40d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0316) {
    const struct CPU_State initial_cpu = {.pc=0xdc14, .a=0xc0, .x=0x7a, .y=0xa6, .sp=0xa8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc14, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdc15, .a=0x0c, .x=0x7a, .y=0xa6, .sp=0xa8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdc14, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdc14, .value=0x9f, .type=IO_READ},
        {.addr=0xdc15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0317) {
    const struct CPU_State initial_cpu = {.pc=0x0196, .a=0xa6, .x=0x21, .y=0xc5, .sp=0x16, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0197, .a=0x6a, .x=0x21, .y=0xc5, .sp=0x16, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0196, .value=0x9f, .type=IO_READ},
        {.addr=0x0197, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5278, .a=0x3c, .x=0x7d, .y=0x00, .sp=0xd9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5278, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5279, .a=0xc3, .x=0x7d, .y=0x00, .sp=0xd9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5278, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5278, .value=0x9f, .type=IO_READ},
        {.addr=0x5279, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0319) {
    const struct CPU_State initial_cpu = {.pc=0xf61c, .a=0xbb, .x=0xcb, .y=0x8f, .sp=0x59, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf61c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf61d, .a=0xbb, .x=0xcb, .y=0x8f, .sp=0x59, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf61c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf61c, .value=0x9f, .type=IO_READ},
        {.addr=0xf61d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031A) {
    const struct CPU_State initial_cpu = {.pc=0x6d1f, .a=0x58, .x=0x6c, .y=0xec, .sp=0x2e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x6d1f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6d20, .a=0x85, .x=0x6c, .y=0xec, .sp=0x2e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6d1f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6d1f, .value=0x9f, .type=IO_READ},
        {.addr=0x6d20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031B) {
    const struct CPU_State initial_cpu = {.pc=0x9fc9, .a=0xe8, .x=0x56, .y=0xaa, .sp=0x8b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9fca, .a=0x8e, .x=0x56, .y=0xaa, .sp=0x8b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9fc9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9fc9, .value=0x9f, .type=IO_READ},
        {.addr=0x9fca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031C) {
    const struct CPU_State initial_cpu = {.pc=0xeb63, .a=0xdc, .x=0xb9, .y=0xb3, .sp=0xfb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xeb63, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xeb64, .a=0xcd, .x=0xb9, .y=0xb3, .sp=0xfb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xeb63, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xeb63, .value=0x9f, .type=IO_READ},
        {.addr=0xeb64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031D) {
    const struct CPU_State initial_cpu = {.pc=0x24a6, .a=0x08, .x=0x44, .y=0x11, .sp=0xdf, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x24a6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x24a7, .a=0x80, .x=0x44, .y=0x11, .sp=0xdf, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x24a6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x24a6, .value=0x9f, .type=IO_READ},
        {.addr=0x24a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031E) {
    const struct CPU_State initial_cpu = {.pc=0x7185, .a=0x20, .x=0x12, .y=0xb9, .sp=0x37, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7185, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7186, .a=0x02, .x=0x12, .y=0xb9, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7185, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7185, .value=0x9f, .type=IO_READ},
        {.addr=0x7186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_031F) {
    const struct CPU_State initial_cpu = {.pc=0x17c3, .a=0x7a, .x=0xda, .y=0x74, .sp=0xc0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x17c3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x17c4, .a=0xa7, .x=0xda, .y=0x74, .sp=0xc0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x17c3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x17c3, .value=0x9f, .type=IO_READ},
        {.addr=0x17c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0320) {
    const struct CPU_State initial_cpu = {.pc=0xe3e7, .a=0x02, .x=0x5f, .y=0x16, .sp=0x48, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe3e8, .a=0x20, .x=0x5f, .y=0x16, .sp=0x48, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe3e7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe3e7, .value=0x9f, .type=IO_READ},
        {.addr=0xe3e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0321) {
    const struct CPU_State initial_cpu = {.pc=0x17eb, .a=0x6e, .x=0xbf, .y=0xad, .sp=0x30, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x17eb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x17ec, .a=0xe6, .x=0xbf, .y=0xad, .sp=0x30, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x17eb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x17eb, .value=0x9f, .type=IO_READ},
        {.addr=0x17ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0322) {
    const struct CPU_State initial_cpu = {.pc=0x3144, .a=0xd5, .x=0xa1, .y=0x37, .sp=0xe0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x3144, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3145, .a=0x5d, .x=0xa1, .y=0x37, .sp=0xe0, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3144, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3144, .value=0x9f, .type=IO_READ},
        {.addr=0x3145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0323) {
    const struct CPU_State initial_cpu = {.pc=0x3643, .a=0x86, .x=0x4c, .y=0xbd, .sp=0x05, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3643, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3644, .a=0x68, .x=0x4c, .y=0xbd, .sp=0x05, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3643, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3643, .value=0x9f, .type=IO_READ},
        {.addr=0x3644, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0324) {
    const struct CPU_State initial_cpu = {.pc=0x0ffa, .a=0x3c, .x=0x8d, .y=0x2a, .sp=0xd0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0ffa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0ffb, .a=0xc3, .x=0x8d, .y=0x2a, .sp=0xd0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0ffa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0ffa, .value=0x9f, .type=IO_READ},
        {.addr=0x0ffb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0325) {
    const struct CPU_State initial_cpu = {.pc=0x57ef, .a=0xfc, .x=0x7e, .y=0x01, .sp=0xb9, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x57ef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x57f0, .a=0xcf, .x=0x7e, .y=0x01, .sp=0xb9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x57ef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x57ef, .value=0x9f, .type=IO_READ},
        {.addr=0x57f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0326) {
    const struct CPU_State initial_cpu = {.pc=0x70cf, .a=0x1b, .x=0x9a, .y=0xe5, .sp=0x79, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x70cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x70d0, .a=0xb1, .x=0x9a, .y=0xe5, .sp=0x79, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x70cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x70cf, .value=0x9f, .type=IO_READ},
        {.addr=0x70d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0327) {
    const struct CPU_State initial_cpu = {.pc=0xe083, .a=0x85, .x=0x40, .y=0xdb, .sp=0xa4, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe083, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe084, .a=0x58, .x=0x40, .y=0xdb, .sp=0xa4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe083, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe083, .value=0x9f, .type=IO_READ},
        {.addr=0xe084, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0328) {
    const struct CPU_State initial_cpu = {.pc=0x0876, .a=0x8f, .x=0x95, .y=0xc8, .sp=0xfe, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0876, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0877, .a=0xf8, .x=0x95, .y=0xc8, .sp=0xfe, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0876, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0876, .value=0x9f, .type=IO_READ},
        {.addr=0x0877, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0329) {
    const struct CPU_State initial_cpu = {.pc=0x3e65, .a=0x31, .x=0x04, .y=0x0b, .sp=0x7c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x3e65, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3e66, .a=0x13, .x=0x04, .y=0x0b, .sp=0x7c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3e65, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3e65, .value=0x9f, .type=IO_READ},
        {.addr=0x3e66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032A) {
    const struct CPU_State initial_cpu = {.pc=0x867b, .a=0xb8, .x=0x00, .y=0xbb, .sp=0xe2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x867b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x867c, .a=0x8b, .x=0x00, .y=0xbb, .sp=0xe2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x867b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x867b, .value=0x9f, .type=IO_READ},
        {.addr=0x867c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032B) {
    const struct CPU_State initial_cpu = {.pc=0x15e9, .a=0xc5, .x=0x55, .y=0x73, .sp=0x14, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x15e9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x15ea, .a=0x5c, .x=0x55, .y=0x73, .sp=0x14, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x15e9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x15e9, .value=0x9f, .type=IO_READ},
        {.addr=0x15ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032C) {
    const struct CPU_State initial_cpu = {.pc=0xcac8, .a=0x9b, .x=0xbc, .y=0xdc, .sp=0x4d, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xcac8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcac9, .a=0xb9, .x=0xbc, .y=0xdc, .sp=0x4d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcac8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcac8, .value=0x9f, .type=IO_READ},
        {.addr=0xcac9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe582, .a=0x53, .x=0x65, .y=0x8a, .sp=0xdc, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xe582, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe583, .a=0x35, .x=0x65, .y=0x8a, .sp=0xdc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe582, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe582, .value=0x9f, .type=IO_READ},
        {.addr=0xe583, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032E) {
    const struct CPU_State initial_cpu = {.pc=0x1d91, .a=0x08, .x=0xb0, .y=0xc8, .sp=0x09, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d91, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1d92, .a=0x80, .x=0xb0, .y=0xc8, .sp=0x09, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1d91, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1d91, .value=0x9f, .type=IO_READ},
        {.addr=0x1d92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_032F) {
    const struct CPU_State initial_cpu = {.pc=0x42a0, .a=0xe7, .x=0x18, .y=0x31, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x42a0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x42a1, .a=0x7e, .x=0x18, .y=0x31, .sp=0xf9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x42a0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x42a0, .value=0x9f, .type=IO_READ},
        {.addr=0x42a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0330) {
    const struct CPU_State initial_cpu = {.pc=0xb986, .a=0x85, .x=0x29, .y=0x43, .sp=0x07, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb986, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb987, .a=0x58, .x=0x29, .y=0x43, .sp=0x07, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb986, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb986, .value=0x9f, .type=IO_READ},
        {.addr=0xb987, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0331) {
    const struct CPU_State initial_cpu = {.pc=0x8620, .a=0xa8, .x=0x69, .y=0xb7, .sp=0x44, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8620, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8621, .a=0x8a, .x=0x69, .y=0xb7, .sp=0x44, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8620, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8620, .value=0x9f, .type=IO_READ},
        {.addr=0x8621, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0332) {
    const struct CPU_State initial_cpu = {.pc=0xaa10, .a=0x59, .x=0x36, .y=0x0b, .sp=0x21, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa10, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaa11, .a=0x95, .x=0x36, .y=0x0b, .sp=0x21, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xaa10, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaa10, .value=0x9f, .type=IO_READ},
        {.addr=0xaa11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0333) {
    const struct CPU_State initial_cpu = {.pc=0x58a1, .a=0x44, .x=0xdc, .y=0x57, .sp=0xea, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x58a1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x58a2, .a=0x44, .x=0xdc, .y=0x57, .sp=0xea, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x58a1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x58a1, .value=0x9f, .type=IO_READ},
        {.addr=0x58a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0334) {
    const struct CPU_State initial_cpu = {.pc=0xcdf5, .a=0x7d, .x=0x36, .y=0xd8, .sp=0xaf, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcdf6, .a=0xd7, .x=0x36, .y=0xd8, .sp=0xaf, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xcdf5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcdf5, .value=0x9f, .type=IO_READ},
        {.addr=0xcdf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0335) {
    const struct CPU_State initial_cpu = {.pc=0x3d0f, .a=0x0c, .x=0x12, .y=0xe9, .sp=0x17, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3d10, .a=0xc0, .x=0x12, .y=0xe9, .sp=0x17, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3d0f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3d0f, .value=0x9f, .type=IO_READ},
        {.addr=0x3d10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0336) {
    const struct CPU_State initial_cpu = {.pc=0xf38c, .a=0xbd, .x=0x41, .y=0x0f, .sp=0x8b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf38c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf38d, .a=0xdb, .x=0x41, .y=0x0f, .sp=0x8b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf38c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf38c, .value=0x9f, .type=IO_READ},
        {.addr=0xf38d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0337) {
    const struct CPU_State initial_cpu = {.pc=0x49df, .a=0xfc, .x=0x11, .y=0x5e, .sp=0x2a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x49df, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x49e0, .a=0xcf, .x=0x11, .y=0x5e, .sp=0x2a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x49df, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x49df, .value=0x9f, .type=IO_READ},
        {.addr=0x49e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4af5, .a=0x6e, .x=0xf7, .y=0x8d, .sp=0x1a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4af5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4af6, .a=0xe6, .x=0xf7, .y=0x8d, .sp=0x1a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4af5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4af5, .value=0x9f, .type=IO_READ},
        {.addr=0x4af6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0339) {
    const struct CPU_State initial_cpu = {.pc=0xab25, .a=0xfb, .x=0x0c, .y=0xaa, .sp=0x10, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xab25, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xab26, .a=0xbf, .x=0x0c, .y=0xaa, .sp=0x10, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xab25, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xab25, .value=0x9f, .type=IO_READ},
        {.addr=0xab26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033A) {
    const struct CPU_State initial_cpu = {.pc=0x31a0, .a=0x1a, .x=0x4c, .y=0x7e, .sp=0x70, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x31a0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x31a1, .a=0xa1, .x=0x4c, .y=0x7e, .sp=0x70, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x31a0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x31a0, .value=0x9f, .type=IO_READ},
        {.addr=0x31a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033B) {
    const struct CPU_State initial_cpu = {.pc=0x079a, .a=0xc1, .x=0x09, .y=0xba, .sp=0x2c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x079a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x079b, .a=0x1c, .x=0x09, .y=0xba, .sp=0x2c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x079a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x079a, .value=0x9f, .type=IO_READ},
        {.addr=0x079b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033C) {
    const struct CPU_State initial_cpu = {.pc=0x20f6, .a=0x14, .x=0x58, .y=0x29, .sp=0x55, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x20f6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x20f7, .a=0x41, .x=0x58, .y=0x29, .sp=0x55, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x20f6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x20f6, .value=0x9f, .type=IO_READ},
        {.addr=0x20f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033D) {
    const struct CPU_State initial_cpu = {.pc=0x097e, .a=0x7b, .x=0x8c, .y=0x2a, .sp=0x41, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x097e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x097f, .a=0xb7, .x=0x8c, .y=0x2a, .sp=0x41, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x097e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x097e, .value=0x9f, .type=IO_READ},
        {.addr=0x097f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033E) {
    const struct CPU_State initial_cpu = {.pc=0x67cf, .a=0x58, .x=0xb1, .y=0x7a, .sp=0x90, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x67cf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x67d0, .a=0x85, .x=0xb1, .y=0x7a, .sp=0x90, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x67cf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x67cf, .value=0x9f, .type=IO_READ},
        {.addr=0x67d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_033F) {
    const struct CPU_State initial_cpu = {.pc=0x1795, .a=0xa0, .x=0xd4, .y=0x1c, .sp=0xfb, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1795, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1796, .a=0x0a, .x=0xd4, .y=0x1c, .sp=0xfb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1795, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1795, .value=0x9f, .type=IO_READ},
        {.addr=0x1796, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0340) {
    const struct CPU_State initial_cpu = {.pc=0xd9a6, .a=0x0d, .x=0xab, .y=0xe0, .sp=0x51, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd9a7, .a=0xd0, .x=0xab, .y=0xe0, .sp=0x51, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd9a6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd9a6, .value=0x9f, .type=IO_READ},
        {.addr=0xd9a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0341) {
    const struct CPU_State initial_cpu = {.pc=0xde6f, .a=0x0a, .x=0x9d, .y=0x2b, .sp=0xf4, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xde6f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde70, .a=0xa0, .x=0x9d, .y=0x2b, .sp=0xf4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xde6f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde6f, .value=0x9f, .type=IO_READ},
        {.addr=0xde70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0342) {
    const struct CPU_State initial_cpu = {.pc=0xf008, .a=0x3e, .x=0x63, .y=0xe6, .sp=0xbf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf008, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf009, .a=0xe3, .x=0x63, .y=0xe6, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf008, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf008, .value=0x9f, .type=IO_READ},
        {.addr=0xf009, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa8fd, .a=0xa0, .x=0x9f, .y=0x65, .sp=0xc3, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa8fe, .a=0x0a, .x=0x9f, .y=0x65, .sp=0xc3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xa8fd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa8fd, .value=0x9f, .type=IO_READ},
        {.addr=0xa8fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0344) {
    const struct CPU_State initial_cpu = {.pc=0xbf74, .a=0xe1, .x=0x83, .y=0x70, .sp=0x10, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf74, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbf75, .a=0x1e, .x=0x83, .y=0x70, .sp=0x10, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbf74, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbf74, .value=0x9f, .type=IO_READ},
        {.addr=0xbf75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1277, .a=0x26, .x=0x41, .y=0x51, .sp=0xa0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1277, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1278, .a=0x62, .x=0x41, .y=0x51, .sp=0xa0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1277, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1277, .value=0x9f, .type=IO_READ},
        {.addr=0x1278, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0346) {
    const struct CPU_State initial_cpu = {.pc=0xb31e, .a=0xcf, .x=0x09, .y=0x47, .sp=0x6a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb31e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb31f, .a=0xfc, .x=0x09, .y=0x47, .sp=0x6a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb31e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb31e, .value=0x9f, .type=IO_READ},
        {.addr=0xb31f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6dbb, .a=0xe1, .x=0xfe, .y=0x06, .sp=0x69, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6dbb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6dbc, .a=0x1e, .x=0xfe, .y=0x06, .sp=0x69, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6dbb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6dbb, .value=0x9f, .type=IO_READ},
        {.addr=0x6dbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0348) {
    const struct CPU_State initial_cpu = {.pc=0x9fd6, .a=0x27, .x=0xc7, .y=0xfe, .sp=0x47, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x9fd6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9fd7, .a=0x72, .x=0xc7, .y=0xfe, .sp=0x47, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9fd6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9fd6, .value=0x9f, .type=IO_READ},
        {.addr=0x9fd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0349) {
    const struct CPU_State initial_cpu = {.pc=0xb907, .a=0xee, .x=0x16, .y=0x63, .sp=0xe1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb907, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb908, .a=0xee, .x=0x16, .y=0x63, .sp=0xe1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb907, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb907, .value=0x9f, .type=IO_READ},
        {.addr=0xb908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5bd3, .a=0x1c, .x=0xfa, .y=0x37, .sp=0x7b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5bd4, .a=0xc1, .x=0xfa, .y=0x37, .sp=0x7b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5bd3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5bd3, .value=0x9f, .type=IO_READ},
        {.addr=0x5bd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034B) {
    const struct CPU_State initial_cpu = {.pc=0xf45d, .a=0x52, .x=0xac, .y=0x74, .sp=0xf8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf45d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf45e, .a=0x25, .x=0xac, .y=0x74, .sp=0xf8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf45d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf45d, .value=0x9f, .type=IO_READ},
        {.addr=0xf45e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034C) {
    const struct CPU_State initial_cpu = {.pc=0xfe36, .a=0xc3, .x=0xbf, .y=0x68, .sp=0xa2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xfe36, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfe37, .a=0x3c, .x=0xbf, .y=0x68, .sp=0xa2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfe36, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfe36, .value=0x9f, .type=IO_READ},
        {.addr=0xfe37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034D) {
    const struct CPU_State initial_cpu = {.pc=0x7e8c, .a=0x99, .x=0x54, .y=0x31, .sp=0x6d, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7e8c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7e8d, .a=0x99, .x=0x54, .y=0x31, .sp=0x6d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7e8c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7e8c, .value=0x9f, .type=IO_READ},
        {.addr=0x7e8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034E) {
    const struct CPU_State initial_cpu = {.pc=0xcb97, .a=0x2c, .x=0x66, .y=0x5b, .sp=0x84, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xcb97, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcb98, .a=0xc2, .x=0x66, .y=0x5b, .sp=0x84, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcb97, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcb97, .value=0x9f, .type=IO_READ},
        {.addr=0xcb98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_034F) {
    const struct CPU_State initial_cpu = {.pc=0x654f, .a=0xbe, .x=0x9f, .y=0xfa, .sp=0x81, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x654f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6550, .a=0xeb, .x=0x9f, .y=0xfa, .sp=0x81, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x654f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x654f, .value=0x9f, .type=IO_READ},
        {.addr=0x6550, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0350) {
    const struct CPU_State initial_cpu = {.pc=0x0e17, .a=0xaf, .x=0xc3, .y=0x9c, .sp=0x66, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0e17, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0e18, .a=0xfa, .x=0xc3, .y=0x9c, .sp=0x66, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0e17, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0e17, .value=0x9f, .type=IO_READ},
        {.addr=0x0e18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0351) {
    const struct CPU_State initial_cpu = {.pc=0x3ff8, .a=0x81, .x=0xbe, .y=0x0a, .sp=0xb7, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3ff9, .a=0x18, .x=0xbe, .y=0x0a, .sp=0xb7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3ff8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3ff8, .value=0x9f, .type=IO_READ},
        {.addr=0x3ff9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0352) {
    const struct CPU_State initial_cpu = {.pc=0xc2ee, .a=0x1b, .x=0xe1, .y=0xae, .sp=0x65, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc2ef, .a=0xb1, .x=0xe1, .y=0xae, .sp=0x65, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc2ee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc2ee, .value=0x9f, .type=IO_READ},
        {.addr=0xc2ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0353) {
    const struct CPU_State initial_cpu = {.pc=0x8615, .a=0x42, .x=0x34, .y=0x80, .sp=0x4b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8615, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8616, .a=0x24, .x=0x34, .y=0x80, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8615, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8615, .value=0x9f, .type=IO_READ},
        {.addr=0x8616, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0354) {
    const struct CPU_State initial_cpu = {.pc=0xd629, .a=0x0e, .x=0x8c, .y=0x6e, .sp=0x64, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd629, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd62a, .a=0xe0, .x=0x8c, .y=0x6e, .sp=0x64, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd629, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd629, .value=0x9f, .type=IO_READ},
        {.addr=0xd62a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0355) {
    const struct CPU_State initial_cpu = {.pc=0x5281, .a=0x94, .x=0xa1, .y=0x35, .sp=0x61, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5281, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5282, .a=0x49, .x=0xa1, .y=0x35, .sp=0x61, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5281, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5281, .value=0x9f, .type=IO_READ},
        {.addr=0x5282, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0356) {
    const struct CPU_State initial_cpu = {.pc=0xb67e, .a=0xc9, .x=0x82, .y=0x32, .sp=0x89, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb67e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb67f, .a=0x9c, .x=0x82, .y=0x32, .sp=0x89, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xb67e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb67e, .value=0x9f, .type=IO_READ},
        {.addr=0xb67f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0357) {
    const struct CPU_State initial_cpu = {.pc=0x0b01, .a=0x34, .x=0x73, .y=0x25, .sp=0x6d, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0b01, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0b02, .a=0x43, .x=0x73, .y=0x25, .sp=0x6d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0b01, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0b01, .value=0x9f, .type=IO_READ},
        {.addr=0x0b02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0358) {
    const struct CPU_State initial_cpu = {.pc=0xad1f, .a=0x74, .x=0x5f, .y=0x86, .sp=0x78, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xad1f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xad20, .a=0x47, .x=0x5f, .y=0x86, .sp=0x78, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xad1f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xad1f, .value=0x9f, .type=IO_READ},
        {.addr=0xad20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0359) {
    const struct CPU_State initial_cpu = {.pc=0x40d3, .a=0x67, .x=0xca, .y=0xf3, .sp=0x0a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x40d3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40d4, .a=0x76, .x=0xca, .y=0xf3, .sp=0x0a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x40d3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x40d3, .value=0x9f, .type=IO_READ},
        {.addr=0x40d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035A) {
    const struct CPU_State initial_cpu = {.pc=0xe7b6, .a=0x56, .x=0xdc, .y=0xa3, .sp=0xde, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe7b7, .a=0x65, .x=0xdc, .y=0xa3, .sp=0xde, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe7b6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe7b6, .value=0x9f, .type=IO_READ},
        {.addr=0xe7b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035B) {
    const struct CPU_State initial_cpu = {.pc=0x05d8, .a=0xb9, .x=0x59, .y=0xb8, .sp=0x70, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x05d8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x05d9, .a=0x9b, .x=0x59, .y=0xb8, .sp=0x70, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x05d8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x05d8, .value=0x9f, .type=IO_READ},
        {.addr=0x05d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035C) {
    const struct CPU_State initial_cpu = {.pc=0xc637, .a=0xb1, .x=0xf3, .y=0xea, .sp=0xd7, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc637, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc638, .a=0x1b, .x=0xf3, .y=0xea, .sp=0xd7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc637, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc637, .value=0x9f, .type=IO_READ},
        {.addr=0xc638, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035D) {
    const struct CPU_State initial_cpu = {.pc=0x0308, .a=0xc4, .x=0xae, .y=0x84, .sp=0xa8, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0308, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0309, .a=0x4c, .x=0xae, .y=0x84, .sp=0xa8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0308, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0308, .value=0x9f, .type=IO_READ},
        {.addr=0x0309, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035E) {
    const struct CPU_State initial_cpu = {.pc=0x2eca, .a=0x12, .x=0xca, .y=0x12, .sp=0x65, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2eca, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2ecb, .a=0x21, .x=0xca, .y=0x12, .sp=0x65, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2eca, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2eca, .value=0x9f, .type=IO_READ},
        {.addr=0x2ecb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_035F) {
    const struct CPU_State initial_cpu = {.pc=0x411f, .a=0x32, .x=0x87, .y=0x7d, .sp=0xe2, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x411f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4120, .a=0x23, .x=0x87, .y=0x7d, .sp=0xe2, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x411f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x411f, .value=0x9f, .type=IO_READ},
        {.addr=0x4120, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0360) {
    const struct CPU_State initial_cpu = {.pc=0x7634, .a=0x5c, .x=0xb0, .y=0x63, .sp=0x34, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x7634, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7635, .a=0xc5, .x=0xb0, .y=0x63, .sp=0x34, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7634, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7634, .value=0x9f, .type=IO_READ},
        {.addr=0x7635, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0361) {
    const struct CPU_State initial_cpu = {.pc=0xcbef, .a=0x25, .x=0x79, .y=0x42, .sp=0xbb, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xcbef, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcbf0, .a=0x52, .x=0x79, .y=0x42, .sp=0xbb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcbef, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcbef, .value=0x9f, .type=IO_READ},
        {.addr=0xcbf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0362) {
    const struct CPU_State initial_cpu = {.pc=0x9edd, .a=0x51, .x=0x9a, .y=0xfb, .sp=0xad, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x9edd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9ede, .a=0x15, .x=0x9a, .y=0xfb, .sp=0xad, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9edd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9edd, .value=0x9f, .type=IO_READ},
        {.addr=0x9ede, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0363) {
    const struct CPU_State initial_cpu = {.pc=0x141a, .a=0x53, .x=0xde, .y=0x27, .sp=0x0c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x141a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x141b, .a=0x35, .x=0xde, .y=0x27, .sp=0x0c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x141a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x141a, .value=0x9f, .type=IO_READ},
        {.addr=0x141b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0364) {
    const struct CPU_State initial_cpu = {.pc=0x3e5e, .a=0x69, .x=0x0d, .y=0x4d, .sp=0xfb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3e5e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3e5f, .a=0x96, .x=0x0d, .y=0x4d, .sp=0xfb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3e5e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3e5e, .value=0x9f, .type=IO_READ},
        {.addr=0x3e5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0365) {
    const struct CPU_State initial_cpu = {.pc=0x86ab, .a=0x62, .x=0x30, .y=0x89, .sp=0x1b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x86ab, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x86ac, .a=0x26, .x=0x30, .y=0x89, .sp=0x1b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x86ab, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x86ab, .value=0x9f, .type=IO_READ},
        {.addr=0x86ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0366) {
    const struct CPU_State initial_cpu = {.pc=0x75f6, .a=0x3c, .x=0x09, .y=0x56, .sp=0xd1, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x75f6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x75f7, .a=0xc3, .x=0x09, .y=0x56, .sp=0xd1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x75f6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x75f6, .value=0x9f, .type=IO_READ},
        {.addr=0x75f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0367) {
    const struct CPU_State initial_cpu = {.pc=0xef0d, .a=0x04, .x=0x2e, .y=0xf6, .sp=0xe6, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xef0d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xef0e, .a=0x40, .x=0x2e, .y=0xf6, .sp=0xe6, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xef0d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xef0d, .value=0x9f, .type=IO_READ},
        {.addr=0xef0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0368) {
    const struct CPU_State initial_cpu = {.pc=0xf57d, .a=0x87, .x=0x96, .y=0x69, .sp=0x6a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf57d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf57e, .a=0x78, .x=0x96, .y=0x69, .sp=0x6a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf57d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf57d, .value=0x9f, .type=IO_READ},
        {.addr=0xf57e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0369) {
    const struct CPU_State initial_cpu = {.pc=0x5aee, .a=0xa9, .x=0x43, .y=0xd9, .sp=0xa4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5aee, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5aef, .a=0x9a, .x=0x43, .y=0xd9, .sp=0xa4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5aee, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5aee, .value=0x9f, .type=IO_READ},
        {.addr=0x5aef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036A) {
    const struct CPU_State initial_cpu = {.pc=0x83f5, .a=0xa4, .x=0x41, .y=0xd0, .sp=0xb1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x83f5, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x83f6, .a=0x4a, .x=0x41, .y=0xd0, .sp=0xb1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x83f5, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x83f5, .value=0x9f, .type=IO_READ},
        {.addr=0x83f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036B) {
    const struct CPU_State initial_cpu = {.pc=0xaad0, .a=0xcb, .x=0x78, .y=0xd1, .sp=0x85, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xaad0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaad1, .a=0xbc, .x=0x78, .y=0xd1, .sp=0x85, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xaad0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaad0, .value=0x9f, .type=IO_READ},
        {.addr=0xaad1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036C) {
    const struct CPU_State initial_cpu = {.pc=0xb5c0, .a=0x45, .x=0x06, .y=0x80, .sp=0xea, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb5c1, .a=0x54, .x=0x06, .y=0x80, .sp=0xea, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb5c0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb5c0, .value=0x9f, .type=IO_READ},
        {.addr=0xb5c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036D) {
    const struct CPU_State initial_cpu = {.pc=0xc08d, .a=0x5e, .x=0x70, .y=0x8d, .sp=0xc6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc08d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc08e, .a=0xe5, .x=0x70, .y=0x8d, .sp=0xc6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc08d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc08d, .value=0x9f, .type=IO_READ},
        {.addr=0xc08e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036E) {
    const struct CPU_State initial_cpu = {.pc=0xdfbd, .a=0x78, .x=0xc4, .y=0x4b, .sp=0xa3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfbd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdfbe, .a=0x87, .x=0xc4, .y=0x4b, .sp=0xa3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdfbd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdfbd, .value=0x9f, .type=IO_READ},
        {.addr=0xdfbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_036F) {
    const struct CPU_State initial_cpu = {.pc=0xef18, .a=0xc0, .x=0x94, .y=0xf5, .sp=0xfc, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xef18, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xef19, .a=0x0c, .x=0x94, .y=0xf5, .sp=0xfc, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xef18, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xef18, .value=0x9f, .type=IO_READ},
        {.addr=0xef19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0370) {
    const struct CPU_State initial_cpu = {.pc=0xa685, .a=0x81, .x=0x18, .y=0x64, .sp=0xca, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xa685, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa686, .a=0x18, .x=0x18, .y=0x64, .sp=0xca, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa685, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa685, .value=0x9f, .type=IO_READ},
        {.addr=0xa686, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0371) {
    const struct CPU_State initial_cpu = {.pc=0xcaa0, .a=0x17, .x=0x37, .y=0x83, .sp=0xf5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcaa1, .a=0x71, .x=0x37, .y=0x83, .sp=0xf5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcaa0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcaa0, .value=0x9f, .type=IO_READ},
        {.addr=0xcaa1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0372) {
    const struct CPU_State initial_cpu = {.pc=0x50a7, .a=0xf1, .x=0x20, .y=0xf4, .sp=0x59, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x50a7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x50a8, .a=0x1f, .x=0x20, .y=0xf4, .sp=0x59, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x50a7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x50a7, .value=0x9f, .type=IO_READ},
        {.addr=0x50a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0373) {
    const struct CPU_State initial_cpu = {.pc=0x62a2, .a=0x2f, .x=0xcd, .y=0x3e, .sp=0x33, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x62a2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x62a3, .a=0xf2, .x=0xcd, .y=0x3e, .sp=0x33, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x62a2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x62a2, .value=0x9f, .type=IO_READ},
        {.addr=0x62a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6543, .a=0x09, .x=0xa1, .y=0x49, .sp=0xfa, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6543, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6544, .a=0x90, .x=0xa1, .y=0x49, .sp=0xfa, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6543, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6543, .value=0x9f, .type=IO_READ},
        {.addr=0x6544, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc35a, .a=0x6d, .x=0x57, .y=0x8e, .sp=0xf0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc35a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc35b, .a=0xd6, .x=0x57, .y=0x8e, .sp=0xf0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc35a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc35a, .value=0x9f, .type=IO_READ},
        {.addr=0xc35b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0376) {
    const struct CPU_State initial_cpu = {.pc=0xdfd2, .a=0x37, .x=0x69, .y=0x6b, .sp=0x95, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xdfd2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdfd3, .a=0x73, .x=0x69, .y=0x6b, .sp=0x95, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xdfd2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdfd2, .value=0x9f, .type=IO_READ},
        {.addr=0xdfd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0377) {
    const struct CPU_State initial_cpu = {.pc=0x8466, .a=0x34, .x=0x3b, .y=0x1d, .sp=0x11, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8466, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8467, .a=0x43, .x=0x3b, .y=0x1d, .sp=0x11, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8466, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8466, .value=0x9f, .type=IO_READ},
        {.addr=0x8467, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0378) {
    const struct CPU_State initial_cpu = {.pc=0xe7d9, .a=0xb3, .x=0xb9, .y=0x81, .sp=0x90, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe7da, .a=0x3b, .x=0xb9, .y=0x81, .sp=0x90, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe7d9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe7d9, .value=0x9f, .type=IO_READ},
        {.addr=0xe7da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0379) {
    const struct CPU_State initial_cpu = {.pc=0xa549, .a=0x6a, .x=0xf4, .y=0xac, .sp=0x6e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xa549, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa54a, .a=0xa6, .x=0xf4, .y=0xac, .sp=0x6e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa549, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa549, .value=0x9f, .type=IO_READ},
        {.addr=0xa54a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037A) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0x25, .x=0xa5, .y=0x3a, .sp=0xff, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xbee6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbee7, .a=0x52, .x=0xa5, .y=0x3a, .sp=0xff, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbee6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0x9f, .type=IO_READ},
        {.addr=0xbee7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037B) {
    const struct CPU_State initial_cpu = {.pc=0x8dcf, .a=0x6b, .x=0x41, .y=0x71, .sp=0xda, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x8dcf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8dd0, .a=0xb6, .x=0x41, .y=0x71, .sp=0xda, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8dcf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8dcf, .value=0x9f, .type=IO_READ},
        {.addr=0x8dd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037C) {
    const struct CPU_State initial_cpu = {.pc=0x0220, .a=0x92, .x=0x58, .y=0x31, .sp=0x34, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0220, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0221, .a=0x29, .x=0x58, .y=0x31, .sp=0x34, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0220, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0220, .value=0x9f, .type=IO_READ},
        {.addr=0x0221, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037D) {
    const struct CPU_State initial_cpu = {.pc=0xb7bf, .a=0xfa, .x=0xf6, .y=0xff, .sp=0xe5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb7bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb7c0, .a=0xaf, .x=0xf6, .y=0xff, .sp=0xe5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb7bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb7bf, .value=0x9f, .type=IO_READ},
        {.addr=0xb7c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037E) {
    const struct CPU_State initial_cpu = {.pc=0x56a7, .a=0x7a, .x=0xe2, .y=0x94, .sp=0x21, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x56a7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x56a8, .a=0xa7, .x=0xe2, .y=0x94, .sp=0x21, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x56a7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x56a7, .value=0x9f, .type=IO_READ},
        {.addr=0x56a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_037F) {
    const struct CPU_State initial_cpu = {.pc=0x9e64, .a=0x85, .x=0xda, .y=0x93, .sp=0x8c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9e64, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9e65, .a=0x58, .x=0xda, .y=0x93, .sp=0x8c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9e64, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9e64, .value=0x9f, .type=IO_READ},
        {.addr=0x9e65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0380) {
    const struct CPU_State initial_cpu = {.pc=0x171f, .a=0xd7, .x=0x85, .y=0x69, .sp=0x34, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x171f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1720, .a=0x7d, .x=0x85, .y=0x69, .sp=0x34, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x171f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x171f, .value=0x9f, .type=IO_READ},
        {.addr=0x1720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0381) {
    const struct CPU_State initial_cpu = {.pc=0x6247, .a=0x28, .x=0xaa, .y=0x80, .sp=0x26, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6247, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6248, .a=0x82, .x=0xaa, .y=0x80, .sp=0x26, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6247, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6247, .value=0x9f, .type=IO_READ},
        {.addr=0x6248, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0382) {
    const struct CPU_State initial_cpu = {.pc=0x20f9, .a=0xb6, .x=0x57, .y=0xf5, .sp=0x38, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x20f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x20fa, .a=0x6b, .x=0x57, .y=0xf5, .sp=0x38, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x20f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x20f9, .value=0x9f, .type=IO_READ},
        {.addr=0x20fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0383) {
    const struct CPU_State initial_cpu = {.pc=0x3105, .a=0xce, .x=0xf3, .y=0x01, .sp=0x59, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3105, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3106, .a=0xec, .x=0xf3, .y=0x01, .sp=0x59, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3105, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3105, .value=0x9f, .type=IO_READ},
        {.addr=0x3106, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb80a, .a=0xf1, .x=0xf2, .y=0x7a, .sp=0x90, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb80a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb80b, .a=0x1f, .x=0xf2, .y=0x7a, .sp=0x90, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb80a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb80a, .value=0x9f, .type=IO_READ},
        {.addr=0xb80b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0385) {
    const struct CPU_State initial_cpu = {.pc=0x64bf, .a=0x00, .x=0xc9, .y=0x9a, .sp=0xa5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x64bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x64c0, .a=0x00, .x=0xc9, .y=0x9a, .sp=0xa5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x64bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x64bf, .value=0x9f, .type=IO_READ},
        {.addr=0x64c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0516, .a=0xd9, .x=0xac, .y=0x4b, .sp=0x3b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0516, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0517, .a=0x9d, .x=0xac, .y=0x4b, .sp=0x3b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0516, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0516, .value=0x9f, .type=IO_READ},
        {.addr=0x0517, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0387) {
    const struct CPU_State initial_cpu = {.pc=0x62f1, .a=0x94, .x=0x10, .y=0xf5, .sp=0x2d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x62f1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x62f2, .a=0x49, .x=0x10, .y=0xf5, .sp=0x2d, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x62f1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x62f1, .value=0x9f, .type=IO_READ},
        {.addr=0x62f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0388) {
    const struct CPU_State initial_cpu = {.pc=0x4a3b, .a=0xd0, .x=0xb9, .y=0x34, .sp=0x5d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4a3c, .a=0x0d, .x=0xb9, .y=0x34, .sp=0x5d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4a3b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4a3b, .value=0x9f, .type=IO_READ},
        {.addr=0x4a3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0389) {
    const struct CPU_State initial_cpu = {.pc=0x7ada, .a=0xec, .x=0x42, .y=0x31, .sp=0x6e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ada, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7adb, .a=0xce, .x=0x42, .y=0x31, .sp=0x6e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7ada, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7ada, .value=0x9f, .type=IO_READ},
        {.addr=0x7adb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038A) {
    const struct CPU_State initial_cpu = {.pc=0x1332, .a=0x47, .x=0x0d, .y=0xf6, .sp=0xd2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1332, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1333, .a=0x74, .x=0x0d, .y=0xf6, .sp=0xd2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1332, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1332, .value=0x9f, .type=IO_READ},
        {.addr=0x1333, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038B) {
    const struct CPU_State initial_cpu = {.pc=0xec1e, .a=0x3a, .x=0x85, .y=0x56, .sp=0x99, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xec1e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xec1f, .a=0xa3, .x=0x85, .y=0x56, .sp=0x99, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xec1e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xec1e, .value=0x9f, .type=IO_READ},
        {.addr=0xec1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2f1a, .a=0x0c, .x=0xae, .y=0xc7, .sp=0xf5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2f1a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2f1b, .a=0xc0, .x=0xae, .y=0xc7, .sp=0xf5, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2f1a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2f1a, .value=0x9f, .type=IO_READ},
        {.addr=0x2f1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038D) {
    const struct CPU_State initial_cpu = {.pc=0x52d3, .a=0x5c, .x=0x35, .y=0x71, .sp=0x4f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x52d3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x52d4, .a=0xc5, .x=0x35, .y=0x71, .sp=0x4f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x52d3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x52d3, .value=0x9f, .type=IO_READ},
        {.addr=0x52d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038E) {
    const struct CPU_State initial_cpu = {.pc=0xaf59, .a=0xfa, .x=0xfc, .y=0xcf, .sp=0xab, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xaf59, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf5a, .a=0xaf, .x=0xfc, .y=0xcf, .sp=0xab, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xaf59, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaf59, .value=0x9f, .type=IO_READ},
        {.addr=0xaf5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_038F) {
    const struct CPU_State initial_cpu = {.pc=0x9cfb, .a=0x1f, .x=0xeb, .y=0x7b, .sp=0x4d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9cfb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9cfc, .a=0xf1, .x=0xeb, .y=0x7b, .sp=0x4d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9cfb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9cfb, .value=0x9f, .type=IO_READ},
        {.addr=0x9cfc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0390) {
    const struct CPU_State initial_cpu = {.pc=0x647a, .a=0x05, .x=0xd2, .y=0x1a, .sp=0x0a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x647a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x647b, .a=0x50, .x=0xd2, .y=0x1a, .sp=0x0a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x647a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x647a, .value=0x9f, .type=IO_READ},
        {.addr=0x647b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0391) {
    const struct CPU_State initial_cpu = {.pc=0x9dc1, .a=0x5b, .x=0x13, .y=0xa9, .sp=0xae, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9dc2, .a=0xb5, .x=0x13, .y=0xa9, .sp=0xae, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9dc1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9dc1, .value=0x9f, .type=IO_READ},
        {.addr=0x9dc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0392) {
    const struct CPU_State initial_cpu = {.pc=0x2e39, .a=0xe7, .x=0xd6, .y=0x3d, .sp=0x0c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2e39, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2e3a, .a=0x7e, .x=0xd6, .y=0x3d, .sp=0x0c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2e39, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2e39, .value=0x9f, .type=IO_READ},
        {.addr=0x2e3a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0393) {
    const struct CPU_State initial_cpu = {.pc=0x2f6f, .a=0x38, .x=0x2c, .y=0x38, .sp=0x07, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2f70, .a=0x83, .x=0x2c, .y=0x38, .sp=0x07, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2f6f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2f6f, .value=0x9f, .type=IO_READ},
        {.addr=0x2f70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0394) {
    const struct CPU_State initial_cpu = {.pc=0x9ec8, .a=0xee, .x=0xda, .y=0x93, .sp=0x6a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9ec9, .a=0xee, .x=0xda, .y=0x93, .sp=0x6a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9ec8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9ec8, .value=0x9f, .type=IO_READ},
        {.addr=0x9ec9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0395) {
    const struct CPU_State initial_cpu = {.pc=0x1831, .a=0xa9, .x=0xe7, .y=0xe5, .sp=0x17, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1831, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1832, .a=0x9a, .x=0xe7, .y=0xe5, .sp=0x17, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1831, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1831, .value=0x9f, .type=IO_READ},
        {.addr=0x1832, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0396) {
    const struct CPU_State initial_cpu = {.pc=0xe2bf, .a=0x55, .x=0xb6, .y=0x7b, .sp=0xfa, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xe2bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe2c0, .a=0x55, .x=0xb6, .y=0x7b, .sp=0xfa, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe2bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe2bf, .value=0x9f, .type=IO_READ},
        {.addr=0xe2c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0397) {
    const struct CPU_State initial_cpu = {.pc=0xc5bc, .a=0xfb, .x=0xcc, .y=0x09, .sp=0xf9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc5bc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc5bd, .a=0xbf, .x=0xcc, .y=0x09, .sp=0xf9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc5bc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc5bc, .value=0x9f, .type=IO_READ},
        {.addr=0xc5bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7787, .a=0x82, .x=0xe7, .y=0xb0, .sp=0xb3, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7787, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0x28, .x=0xe7, .y=0xb0, .sp=0xb3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7787, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7787, .value=0x9f, .type=IO_READ},
        {.addr=0x7788, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc683, .a=0x8b, .x=0xdd, .y=0x9d, .sp=0x31, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xc683, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc684, .a=0xb8, .x=0xdd, .y=0x9d, .sp=0x31, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc683, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc683, .value=0x9f, .type=IO_READ},
        {.addr=0xc684, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039A) {
    const struct CPU_State initial_cpu = {.pc=0xdb2b, .a=0x3e, .x=0x4e, .y=0xf3, .sp=0xa8, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xdb2b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdb2c, .a=0xe3, .x=0x4e, .y=0xf3, .sp=0xa8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdb2b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdb2b, .value=0x9f, .type=IO_READ},
        {.addr=0xdb2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039B) {
    const struct CPU_State initial_cpu = {.pc=0xd6bf, .a=0xa0, .x=0xbe, .y=0xdc, .sp=0x19, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xd6bf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd6c0, .a=0x0a, .x=0xbe, .y=0xdc, .sp=0x19, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd6bf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd6bf, .value=0x9f, .type=IO_READ},
        {.addr=0xd6c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039C) {
    const struct CPU_State initial_cpu = {.pc=0x7df2, .a=0x3c, .x=0x90, .y=0xf5, .sp=0x93, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7df2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7df3, .a=0xc3, .x=0x90, .y=0xf5, .sp=0x93, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7df2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7df2, .value=0x9f, .type=IO_READ},
        {.addr=0x7df3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039D) {
    const struct CPU_State initial_cpu = {.pc=0x9143, .a=0x07, .x=0x5b, .y=0x84, .sp=0xf5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9143, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9144, .a=0x70, .x=0x5b, .y=0x84, .sp=0xf5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9143, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9143, .value=0x9f, .type=IO_READ},
        {.addr=0x9144, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039E) {
    const struct CPU_State initial_cpu = {.pc=0x50de, .a=0x0e, .x=0x9a, .y=0x07, .sp=0x3d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x50de, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x50df, .a=0xe0, .x=0x9a, .y=0x07, .sp=0x3d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x50de, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x50de, .value=0x9f, .type=IO_READ},
        {.addr=0x50df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_039F) {
    const struct CPU_State initial_cpu = {.pc=0x0f4a, .a=0xbc, .x=0x38, .y=0x5c, .sp=0x89, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0f4b, .a=0xcb, .x=0x38, .y=0x5c, .sp=0x89, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0f4a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0f4a, .value=0x9f, .type=IO_READ},
        {.addr=0x0f4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xc3f8, .a=0x34, .x=0x0f, .y=0x14, .sp=0xab, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc3f9, .a=0x43, .x=0x0f, .y=0x14, .sp=0xab, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc3f8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc3f8, .value=0x9f, .type=IO_READ},
        {.addr=0xc3f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x4d84, .a=0x7f, .x=0x93, .y=0x5e, .sp=0xf7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x4d84, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4d85, .a=0xf7, .x=0x93, .y=0x5e, .sp=0xf7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4d84, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4d84, .value=0x9f, .type=IO_READ},
        {.addr=0x4d85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfaac, .a=0x29, .x=0x29, .y=0xa4, .sp=0x90, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xfaac, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfaad, .a=0x92, .x=0x29, .y=0xa4, .sp=0x90, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xfaac, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfaac, .value=0x9f, .type=IO_READ},
        {.addr=0xfaad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x96d7, .a=0x32, .x=0x37, .y=0x67, .sp=0x6a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x96d7, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x96d8, .a=0x23, .x=0x37, .y=0x67, .sp=0x6a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x96d7, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x96d7, .value=0x9f, .type=IO_READ},
        {.addr=0x96d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xc498, .a=0x86, .x=0x6b, .y=0x0e, .sp=0xf3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc498, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc499, .a=0x68, .x=0x6b, .y=0x0e, .sp=0xf3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc498, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc498, .value=0x9f, .type=IO_READ},
        {.addr=0xc499, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x627b, .a=0x37, .x=0xaa, .y=0xcb, .sp=0xc9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x627b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x627c, .a=0x73, .x=0xaa, .y=0xcb, .sp=0xc9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x627b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x627b, .value=0x9f, .type=IO_READ},
        {.addr=0x627c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x4478, .a=0xb8, .x=0x61, .y=0x52, .sp=0x6c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4478, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4479, .a=0x8b, .x=0x61, .y=0x52, .sp=0x6c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4478, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4478, .value=0x9f, .type=IO_READ},
        {.addr=0x4479, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x5f8d, .a=0xd0, .x=0xf7, .y=0xd1, .sp=0x6f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5f8d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5f8e, .a=0x0d, .x=0xf7, .y=0xd1, .sp=0x6f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5f8d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5f8d, .value=0x9f, .type=IO_READ},
        {.addr=0x5f8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xde93, .a=0x09, .x=0x55, .y=0xd4, .sp=0xcc, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xde93, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xde94, .a=0x90, .x=0x55, .y=0xd4, .sp=0xcc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xde93, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xde93, .value=0x9f, .type=IO_READ},
        {.addr=0xde94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x9836, .a=0x00, .x=0xf3, .y=0xdf, .sp=0x06, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9836, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9837, .a=0x00, .x=0xf3, .y=0xdf, .sp=0x06, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x9836, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9836, .value=0x9f, .type=IO_READ},
        {.addr=0x9837, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xfbea, .a=0x0c, .x=0x45, .y=0x3a, .sp=0x1e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfbea, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfbeb, .a=0xc0, .x=0x45, .y=0x3a, .sp=0x1e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xfbea, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfbea, .value=0x9f, .type=IO_READ},
        {.addr=0xfbeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x994e, .a=0x86, .x=0xec, .y=0x21, .sp=0x59, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x994e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x994f, .a=0x68, .x=0xec, .y=0x21, .sp=0x59, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x994e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x994e, .value=0x9f, .type=IO_READ},
        {.addr=0x994f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xd706, .a=0xeb, .x=0x32, .y=0xb9, .sp=0xde, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd706, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xd707, .a=0xbe, .x=0x32, .y=0xb9, .sp=0xde, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd706, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xd706, .value=0x9f, .type=IO_READ},
        {.addr=0xd707, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xabcb, .a=0x7b, .x=0x82, .y=0x8f, .sp=0xe0, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xabcb, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xabcc, .a=0xb7, .x=0x82, .y=0x8f, .sp=0xe0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xabcb, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xabcb, .value=0x9f, .type=IO_READ},
        {.addr=0xabcc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x1e19, .a=0xce, .x=0x8c, .y=0xdf, .sp=0xd3, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1e19, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1e1a, .a=0xec, .x=0x8c, .y=0xdf, .sp=0xd3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1e19, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1e19, .value=0x9f, .type=IO_READ},
        {.addr=0x1e1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x14bd, .a=0x80, .x=0xe3, .y=0x10, .sp=0x71, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x14bd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x14be, .a=0x08, .x=0xe3, .y=0x10, .sp=0x71, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x14bd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x14bd, .value=0x9f, .type=IO_READ},
        {.addr=0x14be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x206b, .a=0x75, .x=0x65, .y=0x7f, .sp=0x4b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x206b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x206c, .a=0x57, .x=0x65, .y=0x7f, .sp=0x4b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x206b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x206b, .value=0x9f, .type=IO_READ},
        {.addr=0x206c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x5bab, .a=0x06, .x=0x1b, .y=0x6e, .sp=0xfd, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x5bab, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5bac, .a=0x60, .x=0x1b, .y=0x6e, .sp=0xfd, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5bab, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5bab, .value=0x9f, .type=IO_READ},
        {.addr=0x5bac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x9b89, .a=0x2a, .x=0x59, .y=0x65, .sp=0x5f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9b89, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9b8a, .a=0xa2, .x=0x59, .y=0x65, .sp=0x5f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9b89, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9b89, .value=0x9f, .type=IO_READ},
        {.addr=0x9b8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xc8e6, .a=0x5a, .x=0xee, .y=0x09, .sp=0x47, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e6, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc8e7, .a=0xa5, .x=0xee, .y=0x09, .sp=0x47, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc8e6, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc8e6, .value=0x9f, .type=IO_READ},
        {.addr=0xc8e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xdd51, .a=0xcf, .x=0x37, .y=0x9f, .sp=0x1a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd51, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdd52, .a=0xfc, .x=0x37, .y=0x9f, .sp=0x1a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xdd51, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdd51, .value=0x9f, .type=IO_READ},
        {.addr=0xdd52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x7a9d, .a=0x7f, .x=0xf6, .y=0x07, .sp=0x5d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x7a9d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7a9e, .a=0xf7, .x=0xf6, .y=0x07, .sp=0x5d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7a9d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7a9d, .value=0x9f, .type=IO_READ},
        {.addr=0x7a9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x0ca9, .a=0xf7, .x=0xde, .y=0x89, .sp=0x1f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0caa, .a=0x7f, .x=0xde, .y=0x89, .sp=0x1f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0ca9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0ca9, .value=0x9f, .type=IO_READ},
        {.addr=0x0caa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xae5b, .a=0x79, .x=0x31, .y=0xb3, .sp=0xd4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xae5b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xae5c, .a=0x97, .x=0x31, .y=0xb3, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xae5b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xae5b, .value=0x9f, .type=IO_READ},
        {.addr=0xae5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x1649, .a=0x14, .x=0xcf, .y=0xc4, .sp=0x26, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1649, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x164a, .a=0x41, .x=0xcf, .y=0xc4, .sp=0x26, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1649, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1649, .value=0x9f, .type=IO_READ},
        {.addr=0x164a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x4d4e, .a=0x2b, .x=0xd5, .y=0x74, .sp=0x03, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4d4e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4d4f, .a=0xb2, .x=0xd5, .y=0x74, .sp=0x03, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4d4e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4d4e, .value=0x9f, .type=IO_READ},
        {.addr=0x4d4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xc530, .a=0x80, .x=0x05, .y=0x7e, .sp=0x7e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc530, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc531, .a=0x08, .x=0x05, .y=0x7e, .sp=0x7e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc530, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc530, .value=0x9f, .type=IO_READ},
        {.addr=0xc531, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xafaf, .a=0x10, .x=0xf9, .y=0x6f, .sp=0xb9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xafaf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xafb0, .a=0x01, .x=0xf9, .y=0x6f, .sp=0xb9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xafaf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xafaf, .value=0x9f, .type=IO_READ},
        {.addr=0xafb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xbd4e, .a=0x1c, .x=0x49, .y=0xd1, .sp=0x74, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbd4f, .a=0xc1, .x=0x49, .y=0xd1, .sp=0x74, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbd4e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbd4e, .value=0x9f, .type=IO_READ},
        {.addr=0xbd4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xc2c8, .a=0xa8, .x=0x17, .y=0x4c, .sp=0x7e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc2c8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc2c9, .a=0x8a, .x=0x17, .y=0x4c, .sp=0x7e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc2c8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc2c8, .value=0x9f, .type=IO_READ},
        {.addr=0xc2c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x3d66, .a=0x7e, .x=0x7a, .y=0x12, .sp=0x1c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x3d66, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3d67, .a=0xe7, .x=0x7a, .y=0x12, .sp=0x1c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3d66, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3d66, .value=0x9f, .type=IO_READ},
        {.addr=0x3d67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x11f9, .a=0x81, .x=0x7a, .y=0x20, .sp=0xc8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x11f9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x11fa, .a=0x18, .x=0x7a, .y=0x20, .sp=0xc8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x11f9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x11f9, .value=0x9f, .type=IO_READ},
        {.addr=0x11fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xb4f0, .a=0xac, .x=0x38, .y=0x40, .sp=0x6a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb4f1, .a=0xca, .x=0x38, .y=0x40, .sp=0x6a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb4f0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb4f0, .value=0x9f, .type=IO_READ},
        {.addr=0xb4f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x103d, .a=0x04, .x=0x19, .y=0x0a, .sp=0x48, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x103d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x103e, .a=0x40, .x=0x19, .y=0x0a, .sp=0x48, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x103d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x103d, .value=0x9f, .type=IO_READ},
        {.addr=0x103e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x2a72, .a=0xb5, .x=0x4a, .y=0xc6, .sp=0xd7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a72, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2a73, .a=0x5b, .x=0x4a, .y=0xc6, .sp=0xd7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2a72, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2a72, .value=0x9f, .type=IO_READ},
        {.addr=0x2a73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x1153, .a=0x1a, .x=0xe2, .y=0x12, .sp=0xb7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1153, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x1154, .a=0xa1, .x=0xe2, .y=0x12, .sp=0xb7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1153, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x1153, .value=0x9f, .type=IO_READ},
        {.addr=0x1154, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xea6b, .a=0x53, .x=0x44, .y=0x20, .sp=0xb6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xea6b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xea6c, .a=0x35, .x=0x44, .y=0x20, .sp=0xb6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xea6b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xea6b, .value=0x9f, .type=IO_READ},
        {.addr=0xea6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4ba9, .a=0xff, .x=0x09, .y=0x3a, .sp=0x38, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4baa, .a=0xff, .x=0x09, .y=0x3a, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4ba9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4ba9, .value=0x9f, .type=IO_READ},
        {.addr=0x4baa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xcbc2, .a=0x61, .x=0xd3, .y=0xe1, .sp=0x39, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcbc2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xcbc3, .a=0x16, .x=0xd3, .y=0xe1, .sp=0x39, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xcbc2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xcbc2, .value=0x9f, .type=IO_READ},
        {.addr=0xcbc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x571c, .a=0xec, .x=0x58, .y=0xe0, .sp=0x4a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x571c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x571d, .a=0xce, .x=0x58, .y=0xe0, .sp=0x4a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x571c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x571c, .value=0x9f, .type=IO_READ},
        {.addr=0x571d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xa323, .a=0x22, .x=0xc5, .y=0x7d, .sp=0x82, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa323, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa324, .a=0x22, .x=0xc5, .y=0x7d, .sp=0x82, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa323, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa323, .value=0x9f, .type=IO_READ},
        {.addr=0xa324, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x94c0, .a=0x95, .x=0xaf, .y=0x06, .sp=0xa1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x94c0, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x94c1, .a=0x59, .x=0xaf, .y=0x06, .sp=0xa1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x94c0, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x94c0, .value=0x9f, .type=IO_READ},
        {.addr=0x94c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xfe1a, .a=0x0f, .x=0xc1, .y=0x60, .sp=0xf1, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xfe1a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfe1b, .a=0xf0, .x=0xc1, .y=0x60, .sp=0xf1, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfe1a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfe1a, .value=0x9f, .type=IO_READ},
        {.addr=0xfe1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xec82, .a=0x4a, .x=0x04, .y=0x69, .sp=0x18, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xec82, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xec83, .a=0xa4, .x=0x04, .y=0x69, .sp=0x18, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xec82, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xec82, .value=0x9f, .type=IO_READ},
        {.addr=0xec83, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x5c63, .a=0xbd, .x=0x17, .y=0x19, .sp=0x1d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5c63, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5c64, .a=0xdb, .x=0x17, .y=0x19, .sp=0x1d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5c63, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5c63, .value=0x9f, .type=IO_READ},
        {.addr=0x5c64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xb7e4, .a=0x56, .x=0xe6, .y=0x08, .sp=0x74, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xb7e5, .a=0x65, .x=0xe6, .y=0x08, .sp=0x74, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb7e4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xb7e4, .value=0x9f, .type=IO_READ},
        {.addr=0xb7e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x923e, .a=0x2e, .x=0xdf, .y=0x46, .sp=0x0f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x923e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x923f, .a=0xe2, .x=0xdf, .y=0x46, .sp=0x0f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x923e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x923e, .value=0x9f, .type=IO_READ},
        {.addr=0x923f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x715a, .a=0xcb, .x=0x92, .y=0xe2, .sp=0x6b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x715a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x715b, .a=0xbc, .x=0x92, .y=0xe2, .sp=0x6b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x715a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x715a, .value=0x9f, .type=IO_READ},
        {.addr=0x715b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x834a, .a=0x98, .x=0x26, .y=0xe6, .sp=0x1b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x834a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x834b, .a=0x89, .x=0x26, .y=0xe6, .sp=0x1b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x834a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x834a, .value=0x9f, .type=IO_READ},
        {.addr=0x834b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xbbc8, .a=0x5c, .x=0x59, .y=0x13, .sp=0x8b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xbbc9, .a=0xc5, .x=0x59, .y=0x13, .sp=0x8b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbbc8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xbbc8, .value=0x9f, .type=IO_READ},
        {.addr=0xbbc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xa18e, .a=0xac, .x=0xec, .y=0x09, .sp=0x5e, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa18e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa18f, .a=0xca, .x=0xec, .y=0x09, .sp=0x5e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa18e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa18e, .value=0x9f, .type=IO_READ},
        {.addr=0xa18f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x8ff3, .a=0x2e, .x=0x5b, .y=0x2a, .sp=0xdd, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff3, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x8ff4, .a=0xe2, .x=0x5b, .y=0x2a, .sp=0xdd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8ff3, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x8ff3, .value=0x9f, .type=IO_READ},
        {.addr=0x8ff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xf9a4, .a=0x3f, .x=0xa3, .y=0x8a, .sp=0x0f, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xf9a4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf9a5, .a=0xf3, .x=0xa3, .y=0x8a, .sp=0x0f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf9a4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf9a4, .value=0x9f, .type=IO_READ},
        {.addr=0xf9a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xa70a, .a=0x5a, .x=0x92, .y=0xc4, .sp=0x04, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa70a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa70b, .a=0xa5, .x=0x92, .y=0xc4, .sp=0x04, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa70a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa70a, .value=0x9f, .type=IO_READ},
        {.addr=0xa70b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xae49, .a=0x0b, .x=0x3f, .y=0xb6, .sp=0x65, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xae49, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xae4a, .a=0xb0, .x=0x3f, .y=0xb6, .sp=0x65, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xae49, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xae49, .value=0x9f, .type=IO_READ},
        {.addr=0xae4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x545c, .a=0x2f, .x=0x25, .y=0x1b, .sp=0xa4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x545c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x545d, .a=0xf2, .x=0x25, .y=0x1b, .sp=0xa4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x545c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x545c, .value=0x9f, .type=IO_READ},
        {.addr=0x545d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xdd5d, .a=0xe6, .x=0xa3, .y=0xd3, .sp=0x8a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdd5d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xdd5e, .a=0x6e, .x=0xa3, .y=0xd3, .sp=0x8a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdd5d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xdd5d, .value=0x9f, .type=IO_READ},
        {.addr=0xdd5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xa96f, .a=0x13, .x=0x5b, .y=0x6a, .sp=0xf6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xa96f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa970, .a=0x31, .x=0x5b, .y=0x6a, .sp=0xf6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa96f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa96f, .value=0x9f, .type=IO_READ},
        {.addr=0xa970, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x21e2, .a=0x84, .x=0x21, .y=0xb0, .sp=0xcb, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x21e2, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x21e3, .a=0x48, .x=0x21, .y=0xb0, .sp=0xcb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x21e2, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x21e2, .value=0x9f, .type=IO_READ},
        {.addr=0x21e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x541d, .a=0xb3, .x=0xfd, .y=0xcf, .sp=0x7d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x541d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x541e, .a=0x3b, .x=0xfd, .y=0xcf, .sp=0x7d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x541d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x541d, .value=0x9f, .type=IO_READ},
        {.addr=0x541e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x2d44, .a=0xf5, .x=0x0e, .y=0x57, .sp=0x47, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2d44, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2d45, .a=0x5f, .x=0x0e, .y=0x57, .sp=0x47, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2d44, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2d44, .value=0x9f, .type=IO_READ},
        {.addr=0x2d45, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x9cb4, .a=0xd8, .x=0xc4, .y=0x28, .sp=0x24, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9cb5, .a=0x8d, .x=0xc4, .y=0x28, .sp=0x24, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9cb4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9cb4, .value=0x9f, .type=IO_READ},
        {.addr=0x9cb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x06a1, .a=0xcd, .x=0x0f, .y=0x79, .sp=0x59, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x06a1, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x06a2, .a=0xdc, .x=0x0f, .y=0x79, .sp=0x59, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x06a1, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x06a1, .value=0x9f, .type=IO_READ},
        {.addr=0x06a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x7d0c, .a=0x9e, .x=0xaa, .y=0xc8, .sp=0x2f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0c, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7d0d, .a=0xe9, .x=0xaa, .y=0xc8, .sp=0x2f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7d0c, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7d0c, .value=0x9f, .type=IO_READ},
        {.addr=0x7d0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x5c5d, .a=0xb4, .x=0xda, .y=0xf6, .sp=0x26, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5c5d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5c5e, .a=0x4b, .x=0xda, .y=0xf6, .sp=0x26, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5c5d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5c5d, .value=0x9f, .type=IO_READ},
        {.addr=0x5c5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x5133, .a=0xba, .x=0x78, .y=0x56, .sp=0x2a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5133, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x5134, .a=0xab, .x=0x78, .y=0x56, .sp=0x2a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5133, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x5133, .value=0x9f, .type=IO_READ},
        {.addr=0x5134, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xe457, .a=0xf4, .x=0x19, .y=0x7f, .sp=0xac, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe457, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe458, .a=0x4f, .x=0x19, .y=0x7f, .sp=0xac, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe457, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe457, .value=0x9f, .type=IO_READ},
        {.addr=0xe458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xed36, .a=0x0d, .x=0xcf, .y=0xf2, .sp=0x6f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xed36, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xed37, .a=0xd0, .x=0xcf, .y=0xf2, .sp=0x6f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xed36, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xed36, .value=0x9f, .type=IO_READ},
        {.addr=0xed37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xfdbc, .a=0xd2, .x=0x87, .y=0x5a, .sp=0x6d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xfdbd, .a=0x2d, .x=0x87, .y=0x5a, .sp=0x6d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfdbc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xfdbc, .value=0x9f, .type=IO_READ},
        {.addr=0xfdbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xaa5e, .a=0x77, .x=0x9a, .y=0xd0, .sp=0x4e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaa5f, .a=0x77, .x=0x9a, .y=0xd0, .sp=0x4e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xaa5e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaa5e, .value=0x9f, .type=IO_READ},
        {.addr=0xaa5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x771f, .a=0x13, .x=0x4d, .y=0x1a, .sp=0xa5, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x771f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7720, .a=0x31, .x=0x4d, .y=0x1a, .sp=0xa5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x771f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x771f, .value=0x9f, .type=IO_READ},
        {.addr=0x7720, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_9F, _9F_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xe972, .a=0x31, .x=0x33, .y=0xa3, .sp=0xea, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xe972, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe973, .a=0x13, .x=0x33, .y=0xa3, .sp=0xea, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe972, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe972, .value=0x9f, .type=IO_READ},
        {.addr=0xe973, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("9F 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
